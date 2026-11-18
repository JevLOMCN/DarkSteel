// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 992

// CustomRepositionableThreeAxisTransformBuilderIdentifier'' @ 141197f60

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::
CustomRepositionableThreeAxisTransformBuilderIdentifier__(void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::
                      CustomRepositionableThreeAxisTransformBuilderIdentifier,
                     L"Util_CustomRepositionableThreeAxisTransformBuilderIdentifier");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         CustomRepositionableThreeAxisTransformBuilderIdentifier__);
  return;
}

// CustomThreeAxisTransformBuilderIdentifier'' @ 141197f90

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::
CustomThreeAxisTransformBuilderIdentifier__(void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::
                      CustomThreeAxisTransformBuilderIdentifier,
                     L"Util_CustomThreeAxisTransformBuilderIdentifier");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         CustomThreeAxisTransformBuilderIdentifier__);
  return;
}

// DefaultAxisAngleBuilderIdentifier'' @ 141197fc0

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier__
          (void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier,
                     L"Util_StandardXFormAxisRotationGizmo");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         DefaultAxisAngleBuilderIdentifier__);
  return;
}

// DefaultAxisPositionBuilderIdentifier'' @ 141197ff0

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::
DefaultAxisPositionBuilderIdentifier__(void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::DefaultAxisPositionBuilderIdentifier,
                     L"Util_StandardXFormAxisTranslationGizmo");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         DefaultAxisPositionBuilderIdentifier__);
  return;
}

// DefaultPlanePositionBuilderIdentifier'' @ 141198020

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::
DefaultPlanePositionBuilderIdentifier__(void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::DefaultPlanePositionBuilderIdentifier,
                     L"Util_StandardXFormPlaneTranslationGizmo");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         DefaultPlanePositionBuilderIdentifier__);
  return;
}

// DefaultThreeAxisTransformBuilderIdentifier'' @ 141198050

void __cdecl
`dynamic_initializer_for_'UCombinedTransformGizmoContextObject::
DefaultThreeAxisTransformBuilderIdentifier__(void)

{
  ::FString::FString(&UCombinedTransformGizmoContextObject::
                      DefaultThreeAxisTransformBuilderIdentifier,
                     L"Util_DefaultThreeAxisTransformBuilderIdentifier");
  atexit(`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
         DefaultThreeAxisTransformBuilderIdentifier__);
  return;
}

// GizmoName'' @ 141198080

void __cdecl `dynamic_initializer_for_'UIntervalGizmo::GizmoName__(void)

{
  ::FString::FString(&UIntervalGizmo::GizmoName,L"IntervalGizmo");
  atexit(`dynamic_atexit_destructor_for_'UIntervalGizmo::GizmoName__);
  return;
}

// `dynamic_initializer_for_'BaseBrushIndicatorGizmoType'' @ 1411980b0

void __cdecl _dynamic_initializer_for__BaseBrushIndicatorGizmoType__(void)

{
  FString::FString(&BaseBrushIndicatorGizmoType,L"BrushIndicatorGizmoType");
  atexit(_dynamic_atexit_destructor_for__BaseBrushIndicatorGizmoType__);
  return;
}

// `dynamic_initializer_for_'Factories'' @ 1411980e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__Factories__(void)

{
  atexit(_dynamic_atexit_destructor_for__Factories__);
  return;
}

// `dynamic_initializer_for_'GlobalCurrentSceneViewLock'' @ 141198100

void __cdecl _dynamic_initializer_for__GlobalCurrentSceneViewLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GlobalCurrentSceneViewLock,4000);
  atexit(_dynamic_atexit_destructor_for__GlobalCurrentSceneViewLock__);
  return;
}

// `dynamic_initializer_for_'HoverColor'' @ 141198130

void __cdecl GizmoRenderingUtilLocals::_dynamic_initializer_for__HoverColor__(void)

{
  HoverColor = FColor::Yellow;
  return;
}

// `dynamic_initializer_for_'InfiniteBounds'' @ 141198150

void __cdecl ViewBasedTransformAdjustersLocals::_dynamic_initializer_for__InfiniteBounds__(void)

{
  InfiniteBounds.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  InfiniteBounds.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  InfiniteBounds.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// `dynamic_initializer_for_'LogGizmoElementBase'' @ 141198180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGizmoElementBase__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGizmoElementBase,L"LogGizmoElementBase",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGizmoElementBase__);
  return;
}

// `dynamic_initializer_for_'LogGizmoElementLineBase'' @ 1411981c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGizmoElementLineBase__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGizmoElementLineBase,L"LogGizmoElementLineBase",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGizmoElementLineBase__);
  return;
}

// `dynamic_initializer_for_'LogInteractiveToolsTransformProxy'' @ 141198200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInteractiveToolsTransformProxy__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInteractiveToolsTransformProxy,
             L"LogInteractiveToolsTransformProxy",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInteractiveToolsTransformProxy__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h__Script_InteractiveToolsFramework_226248894'' @ 141198240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h__Script_InteractiveToolsFramework_226248894__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h__Script_InteractiveToolsFramework_3712369631'' @ 141198280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h__Script_InteractiveToolsFramework_3712369631__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h__Script_InteractiveToolsFramework_423566493'' @ 1411982c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h__Script_InteractiveToolsFramework_423566493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h__Script_InteractiveToolsFramework_3850332030'' @ 141198300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h__Script_InteractiveToolsFramework_3850332030__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h__Script_InteractiveToolsFramework_3345166425'' @ 141198340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h__Script_InteractiveToolsFramework_3345166425__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h__Script_InteractiveToolsFramework_2280307784'' @ 141198380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h__Script_InteractiveToolsFramework_2280307784__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h__Script_InteractiveToolsFramework_3524749318'' @ 1411983c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h__Script_InteractiveToolsFramework_3524749318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h__Script_InteractiveToolsFramework_4261815198'' @ 141198400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h__Script_InteractiveToolsFramework_4261815198__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h__Script_InteractiveToolsFramework_3996275505'' @ 141198440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h__Script_InteractiveToolsFramework_3996275505__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h__Script_InteractiveToolsFramework_2848000515'' @ 141198480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h__Script_InteractiveToolsFramework_2848000515__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h__Script_InteractiveToolsFramework_2086439501'' @ 1411984c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h__Script_InteractiveToolsFramework_2086439501__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h__Script_InteractiveToolsFramework_2389286651'' @ 141198500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h__Script_InteractiveToolsFramework_2389286651__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h__Script_InteractiveToolsFramework_3811787030'' @ 141198540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h__Script_InteractiveToolsFramework_3811787030__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h__Script_InteractiveToolsFramework_Statics
             ::EnumInfo,7);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h__Script_InteractiveToolsFramework_3349006909'' @ 141198590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h__Script_InteractiveToolsFramework_3349006909__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h__Script_InteractiveToolsFramework_3920457499'' @ 1411985d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h__Script_InteractiveToolsFramework_3920457499__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h__Script_InteractiveToolsFramework_2488494808'' @ 141198610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h__Script_InteractiveToolsFramework_2488494808__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h__Script_InteractiveToolsFramework_660264752'' @ 141198650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h__Script_InteractiveToolsFramework_660264752__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,9,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h__Script_InteractiveToolsFramework_2310186903'' @ 141198690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h__Script_InteractiveToolsFramework_2310186903__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h__Script_InteractiveToolsFramework_1578207325'' @ 1411986d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h__Script_InteractiveToolsFramework_1578207325__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h__Script_InteractiveToolsFramework_2759417643'' @ 141198710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h__Script_InteractiveToolsFramework_2759417643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h__Script_InteractiveToolsFramework_3406136901'' @ 141198750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h__Script_InteractiveToolsFramework_3406136901__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h__Script_InteractiveToolsFramework_567167852'' @ 141198790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h__Script_InteractiveToolsFramework_567167852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h__Script_InteractiveToolsFramework_1261309694'' @ 1411987d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h__Script_InteractiveToolsFramework_1261309694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h__Script_InteractiveToolsFramework_1631127152'' @ 141198810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h__Script_InteractiveToolsFramework_1631127152__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h__Script_InteractiveToolsFramework_4274233230'' @ 141198860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h__Script_InteractiveToolsFramework_4274233230__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h__Script_InteractiveToolsFramework_1853577532'' @ 1411988a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h__Script_InteractiveToolsFramework_1853577532__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h__Script_InteractiveToolsFramework_1050270245'' @ 1411988e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h__Script_InteractiveToolsFramework_1050270245__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h__Script_InteractiveToolsFramework_2665736694'' @ 141198920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h__Script_InteractiveToolsFramework_2665736694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h__Script_InteractiveToolsFramework_724490347'' @ 141198960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h__Script_InteractiveToolsFramework_724490347__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h__Script_InteractiveToolsFramework_227134429'' @ 1411989a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h__Script_InteractiveToolsFramework_227134429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h__Script_InteractiveToolsFramework_1883693272'' @ 1411989e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h__Script_InteractiveToolsFramework_1883693272__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h__Script_InteractiveToolsFramework_1200347056'' @ 141198a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h__Script_InteractiveToolsFramework_1200347056__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h__Script_InteractiveToolsFramework_1474782516'' @ 141198a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h__Script_InteractiveToolsFramework_1474782516__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,5,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h__Script_InteractiveToolsFramework_663762897'' @ 141198aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h__Script_InteractiveToolsFramework_663762897__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h__Script_InteractiveToolsFramework_3545007778'' @ 141198ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h__Script_InteractiveToolsFramework_3545007778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h__Script_InteractiveToolsFramework_1558295207'' @ 141198b30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h__Script_InteractiveToolsFramework_1558295207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h__Script_InteractiveToolsFramework_2333913971'' @ 141198b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h__Script_InteractiveToolsFramework_2333913971__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h__Script_InteractiveToolsFramework_3885216962'' @ 141198bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h__Script_InteractiveToolsFramework_3885216962__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h__Script_InteractiveToolsFramework_431371191'' @ 141198bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h__Script_InteractiveToolsFramework_431371191__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h__Script_InteractiveToolsFramework_4099946378'' @ 141198c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h__Script_InteractiveToolsFramework_4099946378__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h__Script_InteractiveToolsFramework_1611695224'' @ 141198c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h__Script_InteractiveToolsFramework_1611695224__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h__Script_InteractiveToolsFramework_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h__Script_InteractiveToolsFramework_54020795'' @ 141198cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h__Script_InteractiveToolsFramework_54020795__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h__Script_InteractiveToolsFramework_359573702'' @ 141198d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h__Script_InteractiveToolsFramework_359573702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h__Script_InteractiveToolsFramework_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h__Script_InteractiveToolsFramework_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h__Script_InteractiveToolsFramework_703050987'' @ 141198d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h__Script_InteractiveToolsFramework_703050987__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h__Script_InteractiveToolsFramework_3138161466'' @ 141198da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h__Script_InteractiveToolsFramework_3138161466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InteractiveToolsFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h__Script_InteractiveToolsFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState @ 14966b390

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelected_SetBit @ 14966b3d0

void __cdecl
Z_Construct_UFunction_UGizmoClickTarget_UpdateSelectedState_Statics::NewProp_bSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickTarget_UpdateSelectedState @ 14966b3e0

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickTarget_UpdateSelectedState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickTarget_UpdateSelectedState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoElementLineBase @ 14966b420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementLineBase(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementLineBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType @ 14966b460

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGizmoPerStateValueDouble @ 14966b4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoPerStateValueDouble(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoPerStateValueDouble_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bSubdued_SetBit @ 14966b520

void __cdecl
Z_Construct_UFunction_UGizmoClickTarget_UpdateSubdueState_Statics::NewProp_bSubdued_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickTarget_UpdateSubdueState @ 14966b530

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickTarget_UpdateSubdueState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickTarget_UpdateSubdueState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHittable_SetBit @ 14966b640

void __cdecl
Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_bHittable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState @ 14966b650

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bHovering_SetBit @ 14966b750

void __cdecl
Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState @ 14966b760

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInteracting_SetBit @ 14966b7a0

void __cdecl
Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::
NewProp_bInteracting_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState @ 14966b930

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelected_SetBit @ 14966baf0

void __cdecl
Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSelectedState_Statics::NewProp_bSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSelectedState @ 14966bb00

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSelectedState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSelectedState_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSubdued_SetBit @ 14966bc20

void __cdecl
Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSubdueState_Statics::NewProp_bSubdued_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UInputBehavior_NoRegister @ 14966bc40

UClass * __cdecl Z_Construct_UClass_UInputBehavior_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehavior",
               &Z_Registration_Info_UClass_UInputBehavior.InnerSingleton,
               UInputBehavior::StaticRegisterNativesUInputBehavior,0x50,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputBehavior>,InternalVTableHelperCtorCaller<UInputBehavior>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehavior.InnerSingleton;
}

// Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSubdueState @ 14966bd00

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSubdueState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateSubdueState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBrushBaseProperties_NoRegister @ 14966bf10

UClass * __cdecl Z_Construct_UClass_UBrushBaseProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushBaseProperties",
               &Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton,
               UBrushBaseProperties::StaticRegisterNativesUBrushBaseProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushBaseProperties>,
               InternalVTableHelperCtorCaller<UBrushBaseProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton;
}

// Z_Construct_UClass_UInputBehaviorSet_NoRegister @ 14966c150

UClass * __cdecl Z_Construct_UClass_UInputBehaviorSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSet",
               &Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton,
               UInputBehaviorSet::StaticRegisterNativesUInputBehaviorSet,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputBehaviorSet>,
               InternalVTableHelperCtorCaller<UInputBehaviorSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton;
}

// NewProp_bVisible_SetBit @ 14966c3f0

void __cdecl
Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_bVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState @ 14966c4b0

UFunction * __cdecl Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoViewContext_NoRegister @ 14966c670

UClass * __cdecl Z_Construct_UClass_UGizmoViewContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoViewContext",
               &Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton,
               UGizmoViewContext::StaticRegisterNativesUGizmoViewContext,0x2f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoViewContext>,
               InternalVTableHelperCtorCaller<UGizmoViewContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementBase_NoRegister @ 14966c880

UClass * __cdecl Z_Construct_UClass_UGizmoElementBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBase",
               &Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton,
               UGizmoElementBase::StaticRegisterNativesUGizmoElementBase,0x150,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementBase>,
               InternalVTableHelperCtorCaller<UGizmoElementBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton;
}

// Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate @ 14966c9e0

UFunction * __cdecl Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoStateTarget_EndUpdate @ 14966ca20

UFunction * __cdecl Z_Construct_UFunction_UGizmoStateTarget_EndUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoElementHitMultiTarget @ 14966ca60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementHitMultiTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoElementHitTarget @ 14966caa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementHitTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementHitTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton;
}

// Z_Construct_UClass_USimpleSingleClickGizmo @ 14966cae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USimpleSingleClickGizmo(void)

{
  if (Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton,
               &Z_Construct_UClass_USimpleSingleClickGizmo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton;
}

// Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify @ 14966cb20

UFunction * __cdecl Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify @ 14966cb60

UFunction * __cdecl Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter @ 14966cca0

UFunction * __cdecl Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter @ 14966cd80

UFunction * __cdecl Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify @ 14966d040

UFunction * __cdecl Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoLambdaStateTarget @ 14966d080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoLambdaStateTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoNilStateTarget @ 14966d0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoNilStateTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoNilStateTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoObjectModifyStateTarget @ 14966d100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoObjectModifyStateTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoTransformChangeStateTarget @ 14966d140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoTransformChangeStateTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton;
}

// Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify @ 14966d270

UFunction * __cdecl Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter @ 14966d2b0

UFunction * __cdecl Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoElementBase @ 14966d2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementBase(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState @ 14966d330

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState @ 14966d370

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType @ 14966d3b0

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType @ 14966d3f0

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes @ 14966d430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter @ 14966d4b0

UFunction * __cdecl Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14966d530

void __cdecl Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bEnabledForPerspectiveProjection_SetBit @ 14966d540

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bEnabledForOrthographicProjection_SetBit @ 14966d550

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes @ 14966d560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bEnabledForDefaultState_SetBit @ 14966d5e0

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewProp_bEnabledForHoveringState_SetBit @ 14966d5f0

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bEnabledForInteractingState_SetBit @ 14966d600

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bEnabledForSelectedState_SetBit @ 14966d610

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForSelectedState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bEnabledForSubduedState_SetBit @ 14966d620

void __cdecl
Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForSubduedState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// NewProp_bScreenSpaceLine_SetBit @ 14966d630

void __cdecl
Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b8) = 1;
  return;
}

// Z_Construct_UClass_UGizmoRectangleComponent @ 14966db00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoRectangleComponent(void)

{
  if (Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton,
               &Z_Construct_UClass_UGizmoRectangleComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton;
}

// NewProp_bOrientYAccordingToCamera_SetBit @ 14966db40

void __cdecl
Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b0) = 1;
  return;
}

// Z_Construct_UClass_UPlanePositionGizmo @ 14966db50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlanePositionGizmo(void)

{
  if (Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton,
               &Z_Construct_UClass_UPlanePositionGizmo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton;
}

// Z_Construct_UClass_UPlanePositionGizmoBuilder @ 14966db90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlanePositionGizmoBuilder(void)

{
  if (Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton,
               &Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton;
}

// Z_Construct_UClass_UGizmoElementLineStrip @ 14966dbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementLineStrip(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementLineStrip_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton;
}

// NewProp_bDrawLineStrip_SetBit @ 14966dc10

void __cdecl
Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_bDrawLineStrip_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x228) = 1;
  return;
}

// Z_Construct_UClass_UGizmoElementCone @ 14966dce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementCone(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementCone_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton;
}

// Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister @ 14966dd30

UClass * __cdecl Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLineHandleComponent",
               &Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton,
               UGizmoLineHandleComponent::StaticRegisterNativesUGizmoLineHandleComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoLineHandleComponent>,
               InternalVTableHelperCtorCaller<UGizmoLineHandleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton;
}

// NewProp_bEndCaps_SetBit @ 14966deb0

void __cdecl Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_bEndCaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18c) = 1;
  return;
}

// NewProp_bEnableSignedAxis_SetBit @ 14966df20

void __cdecl
Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewProp_bFlipX_SetBit @ 14966df30

void __cdecl Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// NewProp_bFlipY_SetBit @ 14966df40

void __cdecl Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
  return;
}

// NewProp_bInInteraction_SetBit @ 14966df50

void __cdecl
Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x100) = 1;
  return;
}

// Z_Construct_UClass_UGizmoLineHandleComponent @ 14966df60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoLineHandleComponent(void)

{
  if (Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton,
               &Z_Construct_UClass_UGizmoLineHandleComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton;
}

// NewProp_bImageScale_SetBit @ 14966dfa0

void __cdecl
Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5bc) = 1;
  return;
}

// Z_Construct_UClass_UBaseBrushTool @ 14966dfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseBrushTool(void)

{
  if (Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton,
               &Z_Construct_UClass_UBaseBrushTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton;
}

// Z_Construct_UClass_UBrushAdjusterInputBehavior @ 14966dff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBrushAdjusterInputBehavior(void)

{
  if (Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton,
               &Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton;
}

// Z_Construct_UClass_UBrushBaseProperties @ 14966e030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBrushBaseProperties(void)

{
  if (Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton,
               &Z_Construct_UClass_UBrushBaseProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton;
}

// Z_Construct_UClass_UMeshSurfacePointTool @ 14966e070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshSurfacePointTool(void)

{
  if (Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton,
               &Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBrushStampData @ 14966e0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBrushStampData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBrushStampData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBrushStampData.InnerSingleton,
               &Z_Construct_UScriptStruct_FBrushStampData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBrushStampData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBrushStampData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bSpecifyRadius_SetBit @ 14966e1f0

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bToolSupportsPressureSensitivity_SetBit @ 14966e200

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bToolSupportsPressureSensitivity_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// NewProp_bEnablePressureSensitivity_SetBit @ 14966e210

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bEnablePressureSensitivity_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbd) = 1;
  return;
}

// NewProp_bHitBackFaces_SetBit @ 14966e220

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bHitBackFaces_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bShowStrength_SetBit @ 14966e230

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewProp_bShowFalloff_SetBit @ 14966e240

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  return;
}

// NewProp_bShowHitBackFaces_SetBit @ 14966e250

void __cdecl
Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowHitBackFaces_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcb) = 1;
  return;
}

// Z_Construct_UClass_UContextObjectStore @ 14966e260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContextObjectStore(void)

{
  if (Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton,
               &Z_Construct_UClass_UContextObjectStore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton;
}

// NewStructOps @ 14966e3b0

void * __cdecl Z_Construct_UScriptStruct_FBrushStampData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBrushStampData,&UE::CoreUObject::Private::Construct<FBrushStampData>,&UE::CoreUObject::Private::ConstructForTests<FBrushStampData>,&UE::CoreUObject::Private::Destruct<FBrushStampData>,&UE::CoreUObject::Private::Copy<FBrushStampData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGizmoElementCylinder @ 14966e3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementCylinder(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementCylinder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton;
}

// NewProp_bIsDashed_SetBit @ 14966e540

void __cdecl
Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_bIsDashed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18c) = 1;
  return;
}

// Z_Construct_UClass_UGizmoElementRectangle @ 14966e550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementRectangle(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementRectangle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton;
}

// NewProp_bDrawMesh_SetBit @ 14966e650

void __cdecl
Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x220) = 1;
  return;
}

// NewProp_bDrawLine_SetBit @ 14966e660

void __cdecl
Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x221) = 1;
  return;
}

// NewProp_bHitMesh_SetBit @ 14966e670

void __cdecl
Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x222) = 1;
  return;
}

// NewProp_bHitLine_SetBit @ 14966e680

void __cdecl
Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x223) = 1;
  return;
}

// Z_Construct_UClass_UInputBehavior @ 14966e690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputBehavior(void)

{
  if (Z_Registration_Info_UClass_UInputBehavior.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputBehavior.OuterSingleton,
               &Z_Construct_UClass_UInputBehavior_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputBehavior.OuterSingleton;
}

// EInputCaptureSide_StaticEnum @ 14966e6d0

UEnum * __cdecl EInputCaptureSide_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide,
                       (UObject *)pUVar1,L"EInputCaptureSide");
  }
  return Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton;
}

// NewProp_bInBrushStroke_SetBit @ 14966e710

void __cdecl Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// EInputCaptureRequestType_StaticEnum @ 14966e720

UEnum * __cdecl EInputCaptureRequestType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType,
                       (UObject *)pUVar1,L"EInputCaptureRequestType");
  }
  return Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton;
}

// EInputCaptureState_StaticEnum @ 14966e760

UEnum * __cdecl EInputCaptureState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState,
                       (UObject *)pUVar1,L"EInputCaptureState");
  }
  return Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGizmoElementColorAttribute @ 14966eb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoElementColorAttribute(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute @ 14966ec90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bHasValue_SetBit @ 14966ed10

void __cdecl
Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bHasValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bOverridesChildState_SetBit @ 14966ed20

void __cdecl
Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bOverridesChildState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewStructOps @ 14966ed30

void * __cdecl Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoElementColorAttribute,&UE::CoreUObject::Private::Construct<FGizmoElementColorAttribute>,&UE::CoreUObject::Private::ConstructForTests<FGizmoElementColorAttribute>,&UE::CoreUObject::Private::Destruct<FGizmoElementColorAttribute>,&UE::CoreUObject::Private::Copy<FGizmoElementColorAttribute>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInputBehaviorSet @ 14966ed70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputBehaviorSet(void)

{
  if (Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton,
               &Z_Construct_UClass_UInputBehaviorSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton;
}

// Z_Construct_UClass_UInputBehaviorSource @ 14966edb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputBehaviorSource(void)

{
  if (Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton,
               &Z_Construct_UClass_UInputBehaviorSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton;
}

// Z_Construct_UClass_ULocalInputBehaviorSource @ 14966edf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocalInputBehaviorSource(void)

{
  if (Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton,
               &Z_Construct_UClass_ULocalInputBehaviorSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBehaviorInfo @ 14966ee30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBehaviorInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBehaviorInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBehaviorInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FBehaviorInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBehaviorInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBehaviorInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14966eeb0

void * __cdecl Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBehaviorInfo,&UE::CoreUObject::Private::Construct<FBehaviorInfo>,&UE::CoreUObject::Private::ConstructForTests<FBehaviorInfo>,&UE::CoreUObject::Private::Destruct<FBehaviorInfo>,&UE::CoreUObject::Private::Copy<FBehaviorInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGizmoElementGroup @ 14966eef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementGroup(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementGroup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton;
}

// Z_Construct_UClass_UGizmoElementGroupBase @ 14966ef30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementGroupBase(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementGroupBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementGroupBase.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementGroupBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroupBase.OuterSingleton;
}

// NewProp_bConstantScale_SetBit @ 14966ef70

void __cdecl
Z_Construct_UClass_UGizmoElementGroupBase_Statics::NewProp_bConstantScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d0) = 1;
  return;
}

// NewProp_bHitOwner_SetBit @ 14966ef80

void __cdecl
Z_Construct_UClass_UGizmoElementGroupBase_Statics::NewProp_bHitOwner_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  return;
}

// NewProp_bOverridesChildState_SetBit @ 14966ef90

void __cdecl
Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::
NewProp_bOverridesChildState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14966efa0

void * __cdecl Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoElementMaterialAttribute,&UE::CoreUObject::Private::Construct<FGizmoElementMaterialAttribute>,&UE::CoreUObject::Private::ConstructForTests<FGizmoElementMaterialAttribute>,&UE::CoreUObject::Private::Destruct<FGizmoElementMaterialAttribute>,&UE::CoreUObject::Private::Copy<FGizmoElementMaterialAttribute>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14966efe0

void * __cdecl
Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoElementMeshRenderStateAttributes,&UE::CoreUObject::Private::Construct<FGizmoElementMeshRenderStateAttributes>,&UE::CoreUObject::Private::ConstructForTests<FGizmoElementMeshRenderStateAttributes>,&UE::CoreUObject::Private::Destruct<FGizmoElementMeshRenderStateAttributes>,&UE::CoreUObject::Private::Copy<FGizmoElementMeshRenderStateAttributes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14966f170

void * __cdecl
Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoElementLineRenderStateAttributes,&UE::CoreUObject::Private::Construct<FGizmoElementLineRenderStateAttributes>,&UE::CoreUObject::Private::ConstructForTests<FGizmoElementLineRenderStateAttributes>,&UE::CoreUObject::Private::Destruct<FGizmoElementLineRenderStateAttributes>,&UE::CoreUObject::Private::Copy<FGizmoElementLineRenderStateAttributes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister @ 14966f1b0

UClass * __cdecl Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLocalFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton,
               UGizmoLocalFloatParameterSource::StaticRegisterNativesUGizmoLocalFloatParameterSource
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoLocalFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoLocalFloatParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UCombinedTransformGizmoContextObject @ 14966f2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCombinedTransformGizmoContextObject(void)

{
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton,
               &Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton;
}

// Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder @ 14966f2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder(void)

{
  if (Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton,
               &Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton;
}

// Z_Construct_UClass_UGizmoLocalFloatParameterSource @ 14966f3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoLocalFloatParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGizmoFloatParameterChange @ 14966f420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoFloatParameterChange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14966f4a0

void * __cdecl Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoFloatParameterChange,&UE::CoreUObject::Private::Construct<FGizmoFloatParameterChange>,&UE::CoreUObject::Private::ConstructForTests<FGizmoFloatParameterChange>,&UE::CoreUObject::Private::Destruct<FGizmoFloatParameterChange>,&UE::CoreUObject::Private::Copy<FGizmoFloatParameterChange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URepositionableTransformGizmo @ 14966f540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URepositionableTransformGizmo(void)

{
  if (Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton,
               &Z_Construct_UClass_URepositionableTransformGizmo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton;
}

// Z_Construct_UClass_URepositionableTransformGizmoBuilder @ 14966f630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URepositionableTransformGizmoBuilder(void)

{
  if (Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton,
               &Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton;
}

// EGizmoElementState_StaticEnum @ 14966f730

UEnum * __cdecl EGizmoElementState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState,
                       (UObject *)pUVar1,L"EGizmoElementState");
  }
  return Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton;
}

// EGizmoElementInteractionState_StaticEnum @ 14966f830

UEnum * __cdecl EGizmoElementInteractionState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState,
                       (UObject *)pUVar1,L"EGizmoElementInteractionState");
  }
  return Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton;
}

// EGizmoElementViewDependentType_StaticEnum @ 14966f870

UEnum * __cdecl EGizmoElementViewDependentType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType,
                       (UObject *)pUVar1,L"EGizmoElementViewDependentType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton;
}

// Z_Construct_UClass_UTransformProxy @ 14966f8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformProxy(void)

{
  if (Z_Registration_Info_UClass_UTransformProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformProxy.OuterSingleton,
               &Z_Construct_UClass_UTransformProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformProxy.OuterSingleton;
}

// Z_Construct_UClass_UGizmoAxisRotationParameterSource @ 14966f8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoAxisRotationParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoAxisScaleParameterSource @ 14966f930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoAxisScaleParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoAxisTranslationParameterSource @ 14966f970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoAxisTranslationParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton;
}

// NewProp_bRotatePerObject_SetBit @ 14966f9b0

void __cdecl
Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x108) = 1;
  return;
}

// Z_Construct_UClass_UGizmoPlaneScaleParameterSource @ 14966f9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoPlaneScaleParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton;
}

// NewProp_bSetPivotMode_SetBit @ 14966fa00

void __cdecl Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x109) = 1;
  return;
}

// Z_Construct_UClass_UGizmoPlaneTranslationParameterSource @ 14966fa10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoPlaneTranslationParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoUniformScaleParameterSource @ 14966fa50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoUniformScaleParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton;
}

// EGizmoElementViewAlignType_StaticEnum @ 14966fa90

UEnum * __cdecl EGizmoElementViewAlignType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType,
                       (UObject *)pUVar1,L"EGizmoElementViewAlignType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton;
}

// Z_Construct_UClass_UGizmoViewContext @ 14966fad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoViewContext(void)

{
  if (Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton,
               &Z_Construct_UClass_UGizmoViewContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton;
}

// EGizmoElementPartialType_StaticEnum @ 14966fb10

UEnum * __cdecl EGizmoElementPartialType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType,
                       (UObject *)pUVar1,L"EGizmoElementPartialType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton;
}

// EGizmoElementDrawType_StaticEnum @ 14966fb50

UEnum * __cdecl EGizmoElementDrawType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementDrawType,
                       (UObject *)pUVar1,L"EGizmoElementDrawType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton;
}

// EGizmoElementHitSortType_StaticEnum @ 14966fbe0

UEnum * __cdecl EGizmoElementHitSortType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementHitSortType,
                       (UObject *)pUVar1,L"EGizmoElementHitSortType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton;
}

// Z_Construct_UClass_UGizmoComponentHitTarget @ 14966fc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoComponentHitTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoComponentHitTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoLambdaHitTarget @ 14966fc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoLambdaHitTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton;
}

// NewStructOps @ 14966fd80

void * __cdecl Z_Construct_UScriptStruct_FGizmoPerStateValueDouble_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoPerStateValueDouble,&UE::CoreUObject::Private::Construct<FGizmoPerStateValueDouble>,&UE::CoreUObject::Private::ConstructForTests<FGizmoPerStateValueDouble>,&UE::CoreUObject::Private::Destruct<FGizmoPerStateValueDouble>,&UE::CoreUObject::Private::Copy<FGizmoPerStateValueDouble>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14966fe80

void * __cdecl Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGizmoPerStateValueLinearColor,&UE::CoreUObject::Private::Construct<FGizmoPerStateValueLinearColor>,&UE::CoreUObject::Private::ConstructForTests<FGizmoPerStateValueLinearColor>,&UE::CoreUObject::Private::Destruct<FGizmoPerStateValueLinearColor>,&UE::CoreUObject::Private::Copy<FGizmoPerStateValueLinearColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UClickDragTool @ 149670030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClickDragTool(void)

{
  if (Z_Registration_Info_UClass_UClickDragTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClickDragTool.OuterSingleton,
               &Z_Construct_UClass_UClickDragTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClickDragTool.OuterSingleton;
}

// Z_Construct_UClass_UClickDragToolBuilder @ 149670070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClickDragToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton;
}

// NewProp_bClampToZero_SetBit @ 1496700f0

void __cdecl
Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_bClampToZero_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  return;
}

// Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister @ 149670100

UClass * __cdecl Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformChangeStateTarget",
               &Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton,
               UGizmoTransformChangeStateTarget::
               StaticRegisterNativesUGizmoTransformChangeStateTarget,0x140,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformChangeStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoTransformChangeStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton;
}

// Z_Construct_UClass_AIntervalGizmoActor_NoRegister @ 149670370

UClass * __cdecl Z_Construct_UClass_AIntervalGizmoActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoActor",
               &Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton,
               AIntervalGizmoActor::StaticRegisterNativesAIntervalGizmoActor,0x2f8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AIntervalGizmoActor>,
               InternalVTableHelperCtorCaller<AIntervalGizmoActor>,local_res8,
               AGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementSphere @ 1496705a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementSphere(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementSphere.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementSphere.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementSphere_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementSphere.OuterSingleton;
}

// NewProp_bUseEqualScaling_SetBit @ 1496705e0

void __cdecl
Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bUseEqualScaling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}

// NewProp_bClampToZero_SetBit @ 1496705f0

void __cdecl
Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bClampToZero_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x135) = 1;
  return;
}

// Z_Construct_UClass_UGizmoBaseTransformSource @ 149670770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoBaseTransformSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoBaseTransformSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoComponentWorldTransformSource @ 1496707b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoComponentWorldTransformSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources @ 1496707f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources(void)

{
  if (Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton,
               &Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton;
}

// Z_Construct_UClass_UGizmoScaledTransformSource @ 149670830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoScaledTransformSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoScaledTransformSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoTransformProxyTransformSource @ 149670870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoTransformProxyTransformSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton;
}

// Z_Construct_UClass_UInputRouter @ 149670ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputRouter(void)

{
  if (Z_Registration_Info_UClass_UInputRouter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputRouter.OuterSingleton,
               &Z_Construct_UClass_UInputRouter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputRouter.OuterSingleton;
}

// NewProp_bAutoInvalidateOnHover_SetBit @ 149670b20

void __cdecl
Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAutoInvalidateOnCapture_SetBit @ 149670b30

void __cdecl
Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bModifyComponentOnTransform_SetBit @ 149670b40

void __cdecl
Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::
NewProp_bModifyComponentOnTransform_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UClass_UGizmoElementTorus @ 149670c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementTorus(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementTorus_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton;
}

// NewProp_bEndCaps_SetBit @ 149670c70

void __cdecl Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  return;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices @ 149671030

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices(void)

{
  if (Z_Registration_Info_UEnum_EInputDevices.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputDevices.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputDevices.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDeviceButtonState @ 149671070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDeviceButtonState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDeviceButtonState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDeviceButtonState.InnerSingleton,
               &Z_Construct_UScriptStruct_FDeviceButtonState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDeviceButtonState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDeviceButtonState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FKeyboardInputDeviceState @ 1496710f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKeyboardInputDeviceState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.InnerSingleton,
               &Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKeyboardInputDeviceState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FMouseInputDeviceState @ 149671170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMouseInputDeviceState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.InnerSingleton,
               &Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EInputDevices_StaticEnum @ 1496711f0

UEnum * __cdecl EInputDevices_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDevices.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputDevices.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices,(UObject *)pUVar1,
                       L"EInputDevices");
  }
  return Z_Registration_Info_UEnum_EInputDevices.OuterSingleton;
}

// NewProp_bHit_SetBit @ 149671320

void __cdecl Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bHasHitNormal_SetBit @ 149671330

void __cdecl
Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent @ 149671340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent(void)

{
  if (Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton,
               &Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton;
}

// NewStructOps @ 149671380

void * __cdecl Z_Construct_UScriptStruct_FInputRayHit_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputRayHit,&UE::CoreUObject::Private::Construct<FInputRayHit>,&UE::CoreUObject::Private::ConstructForTests<FInputRayHit>,&UE::CoreUObject::Private::Destruct<FInputRayHit>,&UE::CoreUObject::Private::Copy<FInputRayHit>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGizmoElementTriangleList @ 149671410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementTriangleList(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementTriangleList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton;
}

// Z_Construct_UClass_UGizmoElementBox @ 149671450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementBox(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementBox_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton;
}

// NewProp_bPressed_SetBit @ 149671550

void __cdecl
Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bPressed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bDown_SetBit @ 149671560

void __cdecl
Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bReleased_SetBit @ 149671570

void __cdecl
Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bReleased_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bDoubleClicked_SetBit @ 149671580

void __cdecl
Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDoubleClicked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewStructOps @ 149671590

void * __cdecl Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDeviceButtonState,&UE::CoreUObject::Private::Construct<FDeviceButtonState>,&UE::CoreUObject::Private::ConstructForTests<FDeviceButtonState>,&UE::CoreUObject::Private::Destruct<FDeviceButtonState>,&UE::CoreUObject::Private::Copy<FDeviceButtonState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149671690

void * __cdecl Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKeyboardInputDeviceState,&UE::CoreUObject::Private::Construct<FKeyboardInputDeviceState>,&UE::CoreUObject::Private::ConstructForTests<FKeyboardInputDeviceState>,&UE::CoreUObject::Private::Destruct<FKeyboardInputDeviceState>,&UE::CoreUObject::Private::Copy<FKeyboardInputDeviceState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGizmoAxisSource @ 1496716d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoAxisSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoAxisSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoClickMultiTarget @ 149671710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoClickMultiTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoClickMultiTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoClickTarget @ 149671750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoClickTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoClickTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoFloatParameterSource @ 149671790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoFloatParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoFloatParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoRenderMultiTarget @ 1496717d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoRenderMultiTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoRenderTarget @ 149671810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoRenderTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoRenderTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoStateTarget @ 149671850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoStateTarget(void)

{
  if (Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton,
               &Z_Construct_UClass_UGizmoStateTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton;
}

// Z_Construct_UClass_UGizmoTransformSource @ 149671890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoTransformSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoTransformSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoVec2ParameterSource @ 1496718d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoVec2ParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UMeshSurfacePointToolBuilder @ 149671910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshSurfacePointToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_USingleSelectionTool @ 149671950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USingleSelectionTool(void)

{
  if (Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton,
               &Z_Construct_UClass_USingleSelectionTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton;
}

// Z_Construct_UFunction_UGizmoTransformSource_GetTransform @ 149671990

UFunction * __cdecl Z_Construct_UFunction_UGizmoTransformSource_GetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoTransformSource_SetTransform @ 1496719d0

UFunction * __cdecl Z_Construct_UFunction_UGizmoTransformSource_SetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149671a10

void * __cdecl Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMouseInputDeviceState,&UE::CoreUObject::Private::Construct<FMouseInputDeviceState>,&UE::CoreUObject::Private::ConstructForTests<FMouseInputDeviceState>,&UE::CoreUObject::Private::Destruct<FMouseInputDeviceState>,&UE::CoreUObject::Private::Copy<FMouseInputDeviceState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShiftKeyDown_SetBit @ 149671c10

void __cdecl
Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bShiftKeyDown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bAltKeyDown_SetBit @ 149671c20

void __cdecl
Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bAltKeyDown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bCtrlKeyDown_SetBit @ 149671c30

void __cdecl
Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCtrlKeyDown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewProp_bCmdKeyDown_SetBit @ 149671c40

void __cdecl
Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCmdKeyDown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewStructOps @ 149671c50

void * __cdecl Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputDeviceState,&UE::CoreUObject::Private::Construct<FInputDeviceState>,&UE::CoreUObject::Private::ConstructForTests<FInputDeviceState>,&UE::CoreUObject::Private::Destruct<FInputDeviceState>,&UE::CoreUObject::Private::Copy<FInputDeviceState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHas2D_SetBit @ 149671e10

void __cdecl Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 149671e20

void * __cdecl Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputDeviceRay,&UE::CoreUObject::Private::Construct<FInputDeviceRay>,&UE::CoreUObject::Private::ConstructForTests<FInputDeviceRay>,&UE::CoreUObject::Private::Destruct<FInputDeviceRay>,&UE::CoreUObject::Private::Copy<FInputDeviceRay>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USingleClickTool @ 1496722d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USingleClickTool(void)

{
  if (Z_Registration_Info_UClass_USingleClickTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USingleClickTool.OuterSingleton,
               &Z_Construct_UClass_USingleClickTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USingleClickTool.OuterSingleton;
}

// Z_Construct_UClass_USingleClickToolBuilder @ 149672310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USingleClickToolBuilder(void)

{
  if (Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton,
               &Z_Construct_UClass_USingleClickToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton;
}

// Z_Construct_UFunction_UGizmoAxisSource_GetDirection @ 149672350

UFunction * __cdecl Z_Construct_UFunction_UGizmoAxisSource_GetDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInteractionMechanic @ 149672390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInteractionMechanic(void)

{
  if (Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton,
               &Z_Construct_UClass_UInteractionMechanic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton;
}

// Z_Construct_UClass_UTransformProxy_NoRegister @ 1496723d0

UClass * __cdecl Z_Construct_UClass_UTransformProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"TransformProxy",
               &Z_Registration_Info_UClass_UTransformProxy.InnerSingleton,
               UTransformProxy::StaticRegisterNativesUTransformProxy,0x1e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformProxy>,InternalVTableHelperCtorCaller<UTransformProxy>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProxy.InnerSingleton;
}

// Z_Construct_UFunction_UGizmoAxisSource_GetOrigin @ 149672480

UFunction * __cdecl Z_Construct_UFunction_UGizmoAxisSource_GetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors @ 1496724c0

UFunction * __cdecl Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496725b0

void __cdecl
Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_AIntervalGizmoActor @ 1496725c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AIntervalGizmoActor(void)

{
  if (Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton,
               &Z_Construct_UClass_AIntervalGizmoActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton;
}

// Z_Construct_UClass_UGizmoAxisIntervalParameterSource @ 149672600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoAxisIntervalParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UGizmoBaseFloatParameterSource @ 149672640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoBaseFloatParameterSource(void)

{
  if (Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton,
               &Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UIntervalGizmo @ 149672680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIntervalGizmo(void)

{
  if (Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton,
               &Z_Construct_UClass_UIntervalGizmo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton;
}

// Z_Construct_UClass_UIntervalGizmoBuilder @ 1496726c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIntervalGizmoBuilder(void)

{
  if (Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton,
               &Z_Construct_UClass_UIntervalGizmoBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton;
}

// Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors @ 1496727c0

UFunction * __cdecl Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGizmoTransformSource_NoRegister @ 149672a60

UClass * __cdecl Z_Construct_UClass_UGizmoTransformSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton,
               UGizmoTransformSource::StaticRegisterNativesUGizmoTransformSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoAxisSource_NoRegister @ 149672b20

UClass * __cdecl Z_Construct_UClass_UGizmoAxisSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisSource",
               &Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton,
               UGizmoAxisSource::StaticRegisterNativesUGizmoAxisSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisSource>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoClickTarget_NoRegister @ 149672be0

UClass * __cdecl Z_Construct_UClass_UGizmoClickTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickTarget",
               &Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton,
               UGizmoClickTarget::StaticRegisterNativesUGizmoClickTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickTarget>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoStateTarget_NoRegister @ 149672ca0

UClass * __cdecl Z_Construct_UClass_UGizmoStateTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoStateTarget",
               &Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton,
               UGizmoStateTarget::StaticRegisterNativesUGizmoStateTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoStateTarget>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementCircle @ 149672d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementCircle(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementCircle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton;
}

// Z_Construct_UClass_UGizmoElementCircleBase @ 149672da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGizmoElementCircleBase(void)

{
  if (Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton,
               &Z_Construct_UClass_UGizmoElementCircleBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton;
}

// Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister @ 149672de0

UClass * __cdecl Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton,
               UGizmoFloatParameterSource::StaticRegisterNativesUGizmoFloatParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoFloatParameterSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister @ 149672ea0

UClass * __cdecl Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton,
               UGizmoVec2ParameterSource::StaticRegisterNativesUGizmoVec2ParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoVec2ParameterSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton;
}

// NewProp_bDrawMesh_SetBit @ 149672f70

void __cdecl Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x290) = 1;
  return;
}

// NewProp_bDrawLine_SetBit @ 149672f80

void __cdecl Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x291) = 1;
  return;
}

// NewProp_bHitMesh_SetBit @ 149672f90

void __cdecl Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x292) = 1;
  return;
}

// NewProp_bHitLine_SetBit @ 149672fa0

void __cdecl Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x293) = 1;
  return;
}

// Z_Construct_UClass_UScalableSphereGizmo @ 149672fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmo(void)

{
  if (Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton,
               &Z_Construct_UClass_UScalableSphereGizmo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton;
}

// Z_Construct_UClass_UScalableSphereGizmoBuilder @ 149672ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmoBuilder(void)

{
  if (Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton,
               &Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton;
}

// Z_Construct_UClass_UScalableSphereGizmoInputBehavior @ 149673030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmoInputBehavior(void)

{
  if (Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton,
               &Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton;
}

// NewProp_bHovering_SetBit @ 1496731f0

void __cdecl
Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState @ 149673200

UFunction * __cdecl Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsHovering_SetBit @ 149673240

void __cdecl
Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// NewProp_bIsDragging_SetBit @ 149673250

void __cdecl
Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8d) = 1;
  return;
}

// NewProp_bInteracting_SetBit @ 149673260

void __cdecl
Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::NewProp_bInteracting_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// AddLambda<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_> @ 1496736c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::AddLambda<_UIntervalGizmo::SetActiveTarget_::__l2::<lambda_5>_>(void *this,<lambda_5> *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UIntervalGizmo *pUVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar6 = (UIntervalGizmo *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::`2'::<lambda_5>_>
               ::_vftable_;
    uVar1 = in_R8[1];
    puVar4[3] = *in_R8;
    puVar4[4] = uVar1;
    uVar1 = in_R8[3];
    puVar4[5] = in_R8[2];
    puVar4[6] = uVar1;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (UIntervalGizmo *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar6 = (UIntervalGizmo *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar3 = *(int *)((longlong)this + 0x10);
    param_1->__this = pUVar6;
    if (iVar3 == *(int *)((longlong)this + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar3 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar3 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddWeakLambda<UBaseBrushTool,`UBaseBrushTool::Setup'::__l5::<lambda_6>_> @ 149673bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddWeakLambda<UBaseBrushTool,_UBaseBrushTool::Setup_::__l5::<lambda_6>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UBaseBrushTool *param_1,<lambda_6> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_6> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar6 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::`5'::<lambda_6>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_6> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_6> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar6;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddWeakLambda<UIntervalGizmo,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_> @ 149673e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UIntervalGizmo,__UIntervalGizmo::SetActiveTarget_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
           *this,UIntervalGizmo *param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar7 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x48,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIGizmoFloatParameterSource__UFGizmoFloatParameterChange___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar4[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
    uVar1 = in_R9[1];
    puVar4[4] = *in_R9;
    puVar4[5] = uVar1;
    uVar1 = in_R9[3];
    puVar4[6] = in_R9[2];
    puVar4[7] = uVar1;
    puVar4[8] = in_R9[4];
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar7 = *plVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar7;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar8 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar8);
    }
    *pFVar8 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar8 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<AIntervalGizmoActor,AActor> @ 149674170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AIntervalGizmoActor * __cdecl CastChecked<AIntervalGizmoActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AIntervalGizmoActor *)0x0;
    }
    pFVar3 = GetTypeName<AIntervalGizmoActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AIntervalGizmoActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AIntervalGizmoActor *)param_1;
  }
  pFVar3 = GetTypeName<AIntervalGizmoActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UBrushStampIndicator,UInteractiveGizmo> @ 149674250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushStampIndicator * __cdecl
CastChecked<UBrushStampIndicator,UInteractiveGizmo>(UInteractiveGizmo *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UInteractiveGizmo *)0x0) {
    pFVar3 = GetTypeName<UBrushStampIndicator>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UBrushStampIndicator_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UBrushStampIndicator *)param_1;
  }
  pFVar3 = GetTypeName<UBrushStampIndicator>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UGizmoLocalFloatParameterSource,UObject> @ 149674310

UGizmoLocalFloatParameterSource * __cdecl
CastChecked<UGizmoLocalFloatParameterSource,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGizmoLocalFloatParameterSource>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UGizmoLocalFloatParameterSource::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UGizmoLocalFloatParameterSource *)param_1;
  }
  pFVar3 = GetTypeName<UGizmoLocalFloatParameterSource>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UObject,IToolContextTransactionProvider> @ 1496743d0

UObject * __cdecl
CastChecked<UObject,IToolContextTransactionProvider>(IToolContextTransactionProvider *param_1)

{
  UObject *pUVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  if (param_1 == (IToolContextTransactionProvider *)0x0) {
    pFVar2 = GetTypeName<UObject>(&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar3);
  }
  pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))();
  if (pUVar1 != (UObject *)0x0) {
    return pUVar1;
  }
  pFVar2 = GetTypeName<UObject>(&local_28);
  pwVar3 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar2 = GetFullNameForCastLogError<IToolContextTransactionProvider>(&local_18,param_1);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar3,pwVar4);
}

// CastChecked<UTransformProxy,UObject> @ 149674480

UTransformProxy * __cdecl CastChecked<UTransformProxy,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTransformProxy>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UTransformProxy::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTransformProxy *)param_1;
  }
  pFVar3 = GetTypeName<UTransformProxy>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UGizmoElementBase>,TObjectPtr<UGizmoElementBase>,int> @ 149674540

void __cdecl
ConstructItems<TObjectPtr<UGizmoElementBase>,TObjectPtr<UGizmoElementBase>,int>
          (void *param_1,TObjectPtr<UGizmoElementBase> *param_2,int param_3)

{
  TObjectPtr<UGizmoElementBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UGizmoElementBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UGizmoElementBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UGizmoElementBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UGizmoElementBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FBehaviorInfo,int> @ 1496745c0

void __cdecl DestructItems<FBehaviorInfo,int>(FBehaviorInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Group;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UTransformProxy::FRelativeObject,int> @ 149674600

void __cdecl
DestructItems<UTransformProxy::FRelativeObject,int>(FRelativeObject *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->SetTransformFunc).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xb] != 0) {
        plVar1 = plVar2 + -9;
        if ((longlong *)plVar2[-6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int> @ 149674670

void __cdecl
DestructItems<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int>
          (TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_> *param_1,
          int param_2)

{
  IToolCommandChangeSource *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IToolCommandChangeSource *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::TSTR_FViewpointOctantMirrorTransformAdjusterUpdate151>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496748e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform_::__l2::TSTR_FViewpointOctantMirrorTransformAdjusterUpdate151>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::TSTR_FViewpointOctantMirrorTransformAdjusterUpdate151>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_149674a31;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_149674c25;
  }
LAB_149674a31:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_149674b0f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149674b0f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_149674c25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDashNumAndScale<float> @ 149674d30

int __cdecl
GizmoElementCylinderLocals::GetDashNumAndScale<float>
          (float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar4 = __real_bf000000;
  fVar1 = *param_2;
  fVar2 = *param_3;
  *param_4 = 1.0;
  fVar3 = *param_1;
  iVar5 = -((int)ROUND(fVar4 - (fVar3 + fVar3) / (fVar1 + fVar2)) >> 1);
  if (iVar5 < 2) {
    iVar5 = 2;
  }
  *param_4 = fVar3 / ((float)(iVar5 + -1) * (fVar1 + fVar2) + *param_2);
  return iVar5;
}

// GetFullNameForCastLogError<IToolContextTransactionProvider> @ 149674d90

FString * __cdecl
GetFullNameForCastLogError<IToolContextTransactionProvider>
          (FString *__return_storage_ptr__,IToolContextTransactionProvider *param_1)

{
  UObjectBaseUtility *this;
  
  if (param_1 != (IToolContextTransactionProvider *)0x0) {
    this = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this != (UObjectBaseUtility *)0x0) goto LAB_149674dae;
  }
  this = (UObjectBaseUtility *)0x0;
LAB_149674dae:
  UObjectBaseUtility::GetFullName(this,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UInteractiveGizmo> @ 149674dd0

FString * __cdecl
GetFullNameForCastLogError<UInteractiveGizmo>
          (FString *__return_storage_ptr__,UInteractiveGizmo *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AIntervalGizmoActor> @ 149674e00

FString * __cdecl GetTypeName<AIntervalGizmoActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AIntervalGizmoActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBrushStampIndicator> @ 149674e40

FString * __cdecl GetTypeName<UBrushStampIndicator>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UBrushStampIndicator_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UGizmoLocalFloatParameterSource> @ 149674e80

FString * __cdecl GetTypeName<UGizmoLocalFloatParameterSource>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UGizmoLocalFloatParameterSource::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTransformProxy> @ 149674ec0

FString * __cdecl GetTypeName<UTransformProxy>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UTransformProxy::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetViewInfo<FSceneView> @ 149674f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
GizmoElementBaseLocals::GetViewInfo<FSceneView>
          (FSceneView *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,bool *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  *param_5 = *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1;
  dVar2 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar2 = (param_1->ViewMatrices).ViewMatrix.M[1][2];
  dVar3 = (param_1->ViewMatrices).ViewMatrix.M[2][2];
  (param_3->field0_0x0)._s_0.X = (param_1->ViewMatrices).ViewMatrix.M[0][2];
  (param_3->field0_0x0)._s_0.Y = dVar2;
  (param_3->field0_0x0)._s_0.Z = dVar3;
  dVar2 = (param_1->ViewMatrices).ViewMatrix.M[1][1];
  dVar3 = (param_1->ViewMatrices).ViewMatrix.M[2][1];
  (param_4->field0_0x0)._s_0.X = (param_1->ViewMatrices).ViewMatrix.M[0][1];
  (param_4->field0_0x0)._s_0.Y = dVar2;
  (param_4->field0_0x0)._s_0.Z = dVar3;
  return;
}

// GetViewInfo<UGizmoViewContext> @ 149674f90

void __cdecl
GizmoElementBaseLocals::GetViewInfo<UGizmoViewContext>
          (UGizmoViewContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,bool *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  bool bVar5;
  undefined4 *puVar6;
  double *pdVar7;
  undefined1 local_28 [32];
  
  bVar5 = (bool)(**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  *param_5 = bVar5;
  uVar1 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 4);
  uVar2 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 0xc);
  *(undefined4 *)&param_2->field0_0x0 = *(undefined4 *)&(param_1->ViewLocation).field0_0x0;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar3;
  (param_2->field0_0x0)._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  puVar6 = (undefined4 *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_28);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)&param_3->field0_0x0 = *puVar6;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = uVar3;
  (param_3->field0_0x0)._s_0.Z = *(double *)(puVar6 + 4);
  pdVar7 = (double *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x28))(&param_1->field_0x28,local_28);
  dVar4 = pdVar7[1];
  (param_4->field0_0x0)._s_0.X = *pdVar7;
  (param_4->field0_0x0)._s_0.Y = dVar4;
  (param_4->field0_0x0)._s_0.Z = pdVar7[2];
  return;
}

// GetWorldCorners<FSceneView> @ 149675050

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GizmoRectangleComponentLocals::GetWorldCorners<FSceneView>
          (bool param_1,FSceneView *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,float param_6,float param_7,float param_8,float param_9,
          bool param_10,bool param_11,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_12,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_13,
          float *param_14)

{
  double *pdVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar19;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  ISceneViewInterface local_110;
  FSceneView *local_108;
  double local_100;
  TOptional<double> local_f8;
  double local_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  double local_b8;
  
  if (param_10) {
    uVar2 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
    uVar33 = (uint)uVar2;
    uVar34 = (uint)((ulonglong)uVar2 >> 0x20);
    uVar29 = *(uint *)&param_4->field0_0x0;
    uVar30 = *(uint *)((longlong)&param_4->field0_0x0 + 4);
    uVar31 = *(uint *)((longlong)&param_4->field0_0x0 + 8);
    uVar32 = *(uint *)((longlong)&param_4->field0_0x0 + 0xc);
  }
  else {
    (**(code **)param_12)(&local_e0,*(undefined8 *)&param_12->field_0x8,param_4);
    uVar33 = (uint)local_d0;
    uVar34 = (uint)((ulonglong)local_d0 >> 0x20);
    uVar29 = local_e0;
    uVar30 = uStack_dc;
    uVar31 = uStack_d8;
    uVar32 = uStack_d4;
  }
  local_128._s_0.Z = (double)CONCAT44(uVar34,uVar33);
  local_140._s_0.Z = (double)CONCAT44(uVar34,uVar33);
  local_140._0_4_ = uVar29;
  local_140._4_4_ = uVar30;
  local_140._8_4_ = uVar31;
  local_140._12_4_ = uVar32;
  if (param_10) {
    local_b8 = *(double *)((longlong)&param_5->field0_0x0 + 0x10);
    uVar27 = *(uint *)&param_5->field0_0x0;
    uVar28 = *(uint *)((longlong)&param_5->field0_0x0 + 4);
    uVar21 = *(uint *)((longlong)&param_5->field0_0x0 + 8);
    uVar24 = *(uint *)((longlong)&param_5->field0_0x0 + 0xc);
  }
  else {
    (**(code **)param_12)(&local_c8,*(undefined8 *)&param_12->field_0x8,param_5);
    uVar27 = local_c8;
    uVar28 = uStack_c4;
    uVar21 = uStack_c0;
    uVar24 = uStack_bc;
  }
  uVar13 = SUB84(local_b8,0);
  uVar19 = (undefined4)((ulonglong)local_b8 >> 0x20);
  fVar14 = __real_3f800000;
  local_158._0_4_ = uVar27;
  local_158._4_4_ = uVar28;
  local_158._8_4_ = uVar21;
  local_158._12_4_ = uVar24;
  local_158._16_8_ = local_b8;
  local_100 = local_b8;
  if (param_1) {
    pdVar1 = (param_2->ViewMatrices).ProjectionMatrix.M[3] + 3;
    if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
      dVar20 = (param_2->ViewMatrices).ViewMatrix.M[2][2];
      dVar5 = (param_2->ViewMatrices).ViewMatrix.M[1][2];
      dVar6 = (param_2->ViewMatrices).ViewMatrix.M[0][2];
    }
    else {
      dVar20 = (param_3->field0_0x0)._s_0.Z - (param_2->ViewLocation).field0_0x0._s_0.Z;
      dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->ViewLocation).field0_0x0._s_0.Y;
      dVar6 = (param_3->field0_0x0)._s_0.X - (param_2->ViewLocation).field0_0x0._s_0.X;
    }
    dVar22 = dVar5 * dVar5 + dVar6 * dVar6 + dVar20 * dVar20;
    if (__real_3e45798ee0000000 < dVar22) {
      local_e8 = __real_3ff0000000000000 / SQRT(dVar22);
      dVar5 = dVar5 * local_e8;
      dVar6 = dVar6 * local_e8;
      dVar20 = dVar20 * local_e8;
    }
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((double)CONCAT44(uVar30,uVar29) * dVar6 + (double)CONCAT44(uVar32,uVar31) * dVar5 +
        local_128._s_0.Z * dVar20 <= 0.0) {
      local_128._s_0.Z = (double)CONCAT44(uVar34,uVar33);
      local_140._s_0.Z = (double)CONCAT44(uVar34,uVar33);
    }
    else {
      uVar29 = uVar29 ^ uVar35;
      uVar30 = uVar30 ^ uVar36;
      uVar33 = SUB84(local_128._s_0.Z,0) ^ uVar35;
      uVar34 = (uint)((ulonglong)local_128._16_8_ >> 0x20) ^ uVar36;
      uVar31 = uVar31 ^ uVar35;
      uVar32 = uVar32 ^ uVar36;
      local_128._s_0.Z = (double)CONCAT44(uVar34,uVar33);
      local_140._s_0.Z = (double)CONCAT44(uVar34,uVar33);
    }
    local_140._0_4_ = uVar29;
    local_140._4_4_ = uVar30;
    local_140._8_4_ = uVar31;
    local_140._12_4_ = uVar32;
    if ((param_11) &&
       (UE::Math::TVector<double>::RotateAngleAxisRad
                  ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_128._s_0,
                   __real_3ff921fb54442d18,(TVector<double> *)&local_140._s_0),
       dVar23 = (double)CONCAT44(local_128._12_4_,local_128._8_4_) * dVar5 +
                (double)CONCAT44(local_128._4_4_,local_128._0_4_) * dVar6 +
                local_128._s_0.Z * dVar20,
       dVar22 = (double)CONCAT44(uVar28,uVar27) * dVar6 + (double)CONCAT44(uVar24,uVar21) * dVar5 +
                local_100 * dVar20,
       (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      uVar13 = SUB84(local_128._s_0.Z,0);
      uVar19 = (undefined4)((ulonglong)local_128._16_8_ >> 0x20);
      local_158._s_0.Z = local_128._s_0.Z;
      uVar27 = local_128._0_4_;
      uVar28 = local_128._4_4_;
      uVar21 = local_128._8_4_;
      uVar24 = local_128._12_4_;
    }
    if (dVar6 * (double)CONCAT44(uVar28,uVar27) + dVar5 * (double)CONCAT44(uVar24,uVar21) +
        local_158._s_0.Z * dVar20 <= 0.0) {
      local_100 = (double)CONCAT44(uVar19,uVar13);
      dVar22 = (double)CONCAT44(uVar24,uVar21);
      local_158._s_0.Z = (double)CONCAT44(uVar19,uVar13);
      dVar23 = (double)CONCAT44(uVar28,uVar27);
    }
    else {
      uVar27 = uVar27 ^ uVar35;
      uVar28 = uVar28 ^ uVar36;
      uVar25 = SUB84(local_158._s_0.Z,0) ^ uVar35;
      uVar26 = (uint)((ulonglong)local_158._16_8_ >> 0x20) ^ uVar36;
      local_100 = (double)CONCAT44(uVar26,uVar25);
      uVar21 = uVar21 ^ uVar35;
      uVar24 = uVar24 ^ uVar36;
      dVar22 = (double)CONCAT44(uVar24,uVar21);
      dVar23 = (double)CONCAT44(uVar28,uVar27);
      local_158._s_0.Z = (double)CONCAT44(uVar26,uVar25);
    }
    dVar20 = (dVar23 * (double)CONCAT44(uVar34,uVar33) - local_100 * (double)CONCAT44(uVar30,uVar29)
             ) * dVar5 +
             (local_100 * (double)CONCAT44(uVar32,uVar31) - dVar22 * (double)CONCAT44(uVar34,uVar33)
             ) * dVar6 +
             (dVar22 * (double)CONCAT44(uVar30,uVar29) - dVar23 * (double)CONCAT44(uVar32,uVar31)) *
             dVar20;
    if ((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3fd0000000000000) {
      return false;
    }
    local_f8.TypedValue = __real_3ff0000000000000;
    local_110 = (ISceneViewInterface)&___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
    local_f8.bIsSet = true;
    local_158._0_4_ = uVar27;
    local_158._4_4_ = uVar28;
    local_158._8_4_ = uVar21;
    local_158._12_4_ = uVar24;
    local_108 = param_2;
    fVar14 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (&local_110,param_3,true,&local_f8);
  }
  dVar9 = (double)(fVar14 * param_6);
  dVar23 = (double)((param_6 + param_8) * fVar14);
  dVar8 = (double)(fVar14 * param_7);
  dVar7 = (double)((param_7 + param_9) * fVar14);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_13,4,Default);
  dVar20 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar22 = dVar9 * local_140._s_0.Z;
  dVar15 = dVar8 * local_158._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  if ((param_13->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  pFVar3 = (param_13->AllocatorInstance).Data;
  *(double *)pFVar3 =
       dVar9 * (double)CONCAT44(uVar30,uVar29) + dVar20 + dVar8 * (double)CONCAT44(uVar28,uVar27);
  *(double *)(pFVar3 + 8) =
       dVar9 * (double)CONCAT44(uVar32,uVar31) + dVar5 + dVar8 * (double)CONCAT44(uVar24,uVar21);
  *(double *)(pFVar3 + 0x10) = dVar22 + dVar6 + dVar15;
  dVar15 = (double)CONCAT44(local_158._4_4_,local_158._0_4_);
  dVar18 = (double)CONCAT44(local_140._4_4_,local_140._0_4_);
  dVar17 = (double)CONCAT44(local_140._12_4_,local_140._8_4_);
  dVar22 = local_140._s_0.Z * dVar23;
  dVar20 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar10 = (double)CONCAT44(local_158._12_4_,local_158._8_4_);
  dVar16 = local_158._s_0.Z * dVar8;
  if ((param_13->ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  pFVar3 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar3 + 0x18) = dVar18 * dVar23 + dVar20 + dVar15 * dVar8;
  *(double *)(pFVar3 + 0x20) = dVar17 * dVar23 + dVar5 + dVar10 * dVar8;
  *(double *)(pFVar3 + 0x28) = dVar22 + dVar6 + dVar16;
  dVar8 = (double)CONCAT44(local_158._4_4_,local_158._0_4_);
  dVar10 = (double)CONCAT44(local_140._4_4_,local_140._0_4_);
  dVar18 = (double)CONCAT44(local_140._12_4_,local_140._8_4_);
  dVar22 = local_140._s_0.Z * dVar23;
  dVar20 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar15 = (double)CONCAT44(local_158._12_4_,local_158._8_4_);
  dVar17 = local_158._s_0.Z * dVar7;
  if ((param_13->ArrayNum < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  pFVar3 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar3 + 0x30) = dVar10 * dVar23 + dVar20 + dVar8 * dVar7;
  *(double *)(pFVar3 + 0x38) = dVar18 * dVar23 + dVar5 + dVar15 * dVar7;
  *(double *)(pFVar3 + 0x40) = dVar22 + dVar6 + dVar17;
  dVar23 = (double)CONCAT44(local_158._4_4_,local_158._0_4_);
  dVar15 = (double)CONCAT44(local_140._4_4_,local_140._0_4_);
  dVar10 = (double)CONCAT44(local_140._12_4_,local_140._8_4_);
  dVar22 = local_140._s_0.Z * dVar9;
  dVar20 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (double)CONCAT44(local_158._12_4_,local_158._8_4_);
  dVar18 = local_158._s_0.Z * dVar7;
  if ((param_13->ArrayNum < 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  pFVar3 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar3 + 0x48) = dVar15 * dVar9 + dVar20 + dVar23 * dVar7;
  *(double *)(pFVar3 + 0x50) = dVar10 * dVar9 + dVar5 + dVar8 * dVar7;
  *(double *)(pFVar3 + 0x58) = dVar22 + dVar6 + dVar18;
  *param_14 = fVar14;
  return true;
}

// GetWorldCorners<UGizmoViewContext> @ 149675810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GizmoRectangleComponentLocals::GetWorldCorners<UGizmoViewContext>
          (bool param_1,UGizmoViewContext *param_2,TVector<double> *param_3,TVector<double> *param_4
          ,TVector<double> *param_5,float param_6,float param_7,float param_8,float param_9,
          bool param_10,bool param_11,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_12,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_13,
          float *param_14)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  double *pdVar13;
  ISceneViewInterface *pIVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar21;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TOptional<double> local_150;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  double local_f0;
  undefined1 local_e8 [40];
  double local_c0;
  
  if (param_10) {
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
    uVar35 = (uint)uVar1;
    uVar36 = (uint)((ulonglong)uVar1 >> 0x20);
    uVar31 = *(uint *)&param_4->field0_0x0;
    uVar32 = *(uint *)((longlong)&param_4->field0_0x0 + 4);
    uVar33 = *(uint *)((longlong)&param_4->field0_0x0 + 8);
    uVar34 = *(uint *)((longlong)&param_4->field0_0x0 + 0xc);
  }
  else {
    (**(code **)param_12)(&local_118,*(undefined8 *)&param_12->field_0x8);
    uVar35 = (uint)local_108;
    uVar36 = (uint)((ulonglong)local_108 >> 0x20);
    uVar31 = local_118;
    uVar32 = uStack_114;
    uVar33 = uStack_110;
    uVar34 = uStack_10c;
  }
  local_168._s_0.Z = (double)CONCAT44(uVar36,uVar35);
  local_180._s_0.Z = (double)CONCAT44(uVar36,uVar35);
  local_180._0_4_ = uVar31;
  local_180._4_4_ = uVar32;
  local_180._8_4_ = uVar33;
  local_180._12_4_ = uVar34;
  if (param_10) {
    local_f0 = *(double *)((longlong)&param_5->field0_0x0 + 0x10);
    uVar29 = *(uint *)&param_5->field0_0x0;
    uVar30 = *(uint *)((longlong)&param_5->field0_0x0 + 4);
    uVar24 = *(uint *)((longlong)&param_5->field0_0x0 + 8);
    uVar26 = *(uint *)((longlong)&param_5->field0_0x0 + 0xc);
  }
  else {
    (**(code **)param_12)(&local_100,*(undefined8 *)&param_12->field_0x8);
    uVar29 = local_100;
    uVar30 = uStack_fc;
    uVar24 = uStack_f8;
    uVar26 = uStack_f4;
  }
  uVar15 = SUB84(local_f0,0);
  uVar21 = (undefined4)((ulonglong)local_f0 >> 0x20);
  fVar16 = __real_3f800000;
  local_198._0_4_ = uVar29;
  local_198._4_4_ = uVar30;
  local_198._8_4_ = uVar24;
  local_198._12_4_ = uVar26;
  local_198._16_8_ = local_f0;
  local_140 = local_f0;
  if (param_1) {
    pIVar14 = (ISceneViewInterface *)&param_2->field_0x28;
    (**(code **)(*(longlong *)&param_2->field_0x28 + 0x40))(pIVar14);
    cVar10 = (**(code **)(*(longlong *)pIVar14 + 0x40))(pIVar14);
    if (cVar10 == '\0') {
      pdVar13 = (double *)(**(code **)(*(longlong *)pIVar14 + 0x18))(pIVar14,local_e8);
    }
    else {
      pdVar13 = &local_138;
      local_138 = (param_3->field0_0x0)._s_0.X - (param_2->ViewLocation).field0_0x0._s_0.X;
      dStack_130 = (param_3->field0_0x0)._s_0.Y - (param_2->ViewLocation).field0_0x0._s_0.Y;
      local_128 = (param_3->field0_0x0)._s_0.Z - (param_2->ViewLocation).field0_0x0._s_0.Z;
    }
    dVar23 = *pdVar13;
    dVar4 = pdVar13[1];
    local_c0 = pdVar13[2];
    dVar22 = dVar4 * dVar4 + dVar23 * dVar23 + local_c0 * local_c0;
    dVar5 = local_c0;
    if (__real_3e45798ee0000000 < dVar22) {
      local_120 = __real_3ff0000000000000 / SQRT(dVar22);
      dVar23 = dVar23 * local_120;
      dVar4 = dVar4 * local_120;
      dVar5 = local_c0 * local_120;
    }
    uVar37 = (uint)__xmm_80000000000000008000000000000000;
    uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((double)CONCAT44(uVar34,uVar33) * dVar4 + (double)CONCAT44(uVar32,uVar31) * dVar23 +
        local_168._s_0.Z * dVar5 <= 0.0) {
      local_168._s_0.Z = (double)CONCAT44(uVar36,uVar35);
      local_180._s_0.Z = (double)CONCAT44(uVar36,uVar35);
    }
    else {
      uVar31 = uVar31 ^ uVar37;
      uVar32 = uVar32 ^ uVar38;
      uVar35 = SUB84(local_168._s_0.Z,0) ^ uVar37;
      uVar36 = (uint)((ulonglong)local_168._16_8_ >> 0x20) ^ uVar38;
      uVar33 = uVar33 ^ uVar37;
      uVar34 = uVar34 ^ uVar38;
      local_168._s_0.Z = (double)CONCAT44(uVar36,uVar35);
      local_180._s_0.Z = (double)CONCAT44(uVar36,uVar35);
    }
    local_180._0_4_ = uVar31;
    local_180._4_4_ = uVar32;
    local_180._8_4_ = uVar33;
    local_180._12_4_ = uVar34;
    if ((param_11) &&
       (UE::Math::TVector<double>::RotateAngleAxisRad
                  ((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_168._s_0,
                   __real_3ff921fb54442d18,(TVector<double> *)&local_180._s_0),
       dVar25 = (double)CONCAT44(local_168._12_4_,local_168._8_4_) * dVar4 +
                (double)CONCAT44(local_168._4_4_,local_168._0_4_) * dVar23 +
                local_168._s_0.Z * dVar5,
       dVar22 = (double)CONCAT44(uVar26,uVar24) * dVar4 + (double)CONCAT44(uVar30,uVar29) * dVar23 +
                local_140 * dVar5,
       (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      uVar15 = SUB84(local_168._s_0.Z,0);
      uVar21 = (undefined4)((ulonglong)local_168._16_8_ >> 0x20);
      local_198._s_0.Z = local_168._s_0.Z;
      uVar29 = local_168._0_4_;
      uVar30 = local_168._4_4_;
      uVar24 = local_168._8_4_;
      uVar26 = local_168._12_4_;
    }
    if ((double)CONCAT44(uVar26,uVar24) * dVar4 + (double)CONCAT44(uVar30,uVar29) * dVar23 +
        local_198._s_0.Z * dVar5 <= 0.0) {
      local_140 = (double)CONCAT44(uVar21,uVar15);
      dVar25 = (double)CONCAT44(uVar26,uVar24);
      local_198._s_0.Z = (double)CONCAT44(uVar21,uVar15);
      dVar22 = (double)CONCAT44(uVar30,uVar29);
    }
    else {
      uVar29 = uVar29 ^ uVar37;
      uVar30 = uVar30 ^ uVar38;
      uVar27 = SUB84(local_198._s_0.Z,0) ^ uVar37;
      uVar28 = (uint)((ulonglong)local_198._16_8_ >> 0x20) ^ uVar38;
      local_140 = (double)CONCAT44(uVar28,uVar27);
      uVar24 = uVar24 ^ uVar37;
      uVar26 = uVar26 ^ uVar38;
      dVar25 = (double)CONCAT44(uVar26,uVar24);
      dVar22 = (double)CONCAT44(uVar30,uVar29);
      local_198._s_0.Z = (double)CONCAT44(uVar28,uVar27);
    }
    dVar23 = (dVar22 * (double)CONCAT44(uVar36,uVar35) - local_140 * (double)CONCAT44(uVar32,uVar31)
             ) * dVar4 +
             (local_140 * (double)CONCAT44(uVar34,uVar33) - dVar25 * (double)CONCAT44(uVar36,uVar35)
             ) * dVar23 +
             (dVar25 * (double)CONCAT44(uVar32,uVar31) - dVar22 * (double)CONCAT44(uVar34,uVar33)) *
             dVar5;
    if ((double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3fd0000000000000) {
      return false;
    }
    local_150.bIsSet = false;
    if (param_2 == (UGizmoViewContext *)0x0) {
      pIVar14 = (ISceneViewInterface *)0x0;
    }
    local_198._0_4_ = uVar29;
    local_198._4_4_ = uVar30;
    local_198._8_4_ = uVar24;
    local_198._12_4_ = uVar26;
    fVar16 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (pIVar14,param_3,false,&local_150);
  }
  dVar8 = (double)(fVar16 * param_6);
  dVar25 = (double)((param_6 + param_8) * fVar16);
  dVar7 = (double)(fVar16 * param_7);
  dVar6 = (double)((param_7 + param_9) * fVar16);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_13,4,Default);
  dVar23 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar22 = local_180._s_0.Z * dVar8;
  dVar17 = local_198._s_0.Z * dVar7;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  if ((param_13->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pFVar2 = (param_13->AllocatorInstance).Data;
  *(double *)pFVar2 =
       (double)CONCAT44(uVar32,uVar31) * dVar8 + dVar4 + (double)CONCAT44(uVar30,uVar29) * dVar7;
  *(double *)(pFVar2 + 8) =
       (double)CONCAT44(uVar34,uVar33) * dVar8 + dVar23 + (double)CONCAT44(uVar26,uVar24) * dVar7;
  *(double *)(pFVar2 + 0x10) = dVar22 + dVar5 + dVar17;
  dVar17 = (double)CONCAT44(local_198._4_4_,local_198._0_4_);
  dVar20 = (double)CONCAT44(local_180._4_4_,local_180._0_4_);
  dVar19 = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
  dVar22 = local_180._s_0.Z * dVar25;
  dVar23 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar9 = (double)CONCAT44(local_198._12_4_,local_198._8_4_);
  dVar18 = local_198._s_0.Z * dVar7;
  if ((param_13->ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pFVar2 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar2 + 0x18) = dVar20 * dVar25 + dVar23 + dVar17 * dVar7;
  *(double *)(pFVar2 + 0x20) = dVar19 * dVar25 + dVar4 + dVar9 * dVar7;
  *(double *)(pFVar2 + 0x28) = dVar22 + dVar5 + dVar18;
  dVar7 = (double)CONCAT44(local_198._4_4_,local_198._0_4_);
  dVar9 = (double)CONCAT44(local_180._4_4_,local_180._0_4_);
  dVar20 = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
  dVar22 = local_180._s_0.Z * dVar25;
  dVar23 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar17 = (double)CONCAT44(local_198._12_4_,local_198._8_4_);
  dVar19 = local_198._s_0.Z * dVar6;
  if ((param_13->ArrayNum < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pFVar2 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar2 + 0x30) = dVar9 * dVar25 + dVar23 + dVar7 * dVar6;
  *(double *)(pFVar2 + 0x38) = dVar20 * dVar25 + dVar4 + dVar17 * dVar6;
  *(double *)(pFVar2 + 0x40) = dVar22 + dVar5 + dVar19;
  dVar25 = (double)CONCAT44(local_198._4_4_,local_198._0_4_);
  dVar17 = (double)CONCAT44(local_180._4_4_,local_180._0_4_);
  dVar9 = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
  dVar22 = local_180._s_0.Z * dVar8;
  dVar23 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (double)CONCAT44(local_198._12_4_,local_198._8_4_);
  dVar20 = local_198._s_0.Z * dVar6;
  if ((param_13->ArrayNum < 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pFVar2 = (param_13->AllocatorInstance).Data;
  *(double *)(pFVar2 + 0x48) = dVar17 * dVar8 + dVar23 + dVar25 * dVar6;
  *(double *)(pFVar2 + 0x50) = dVar9 * dVar8 + dVar4 + dVar7 * dVar6;
  *(double *)(pFVar2 + 0x58) = dVar22 + dVar5 + dVar20;
  *param_14 = fVar16;
  return true;
}

// InternalConstructor<AIntervalGizmoActor> @ 149675fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AIntervalGizmoActor>(FObjectInitializer *param_1)

{
  AGizmoActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *this_00;
  undefined7 uVar4;
  FName local_res8;
  
  this = (AGizmoActor *)param_1->Obj;
  if (this != (AGizmoActor *)0x0) {
    AGizmoActor::AGizmoActor(this);
    *(undefined ***)this = &___7AIntervalGizmoActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    pFVar2 = FName::FName(&local_res8,L"GizmoCenter");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USphereComponent_NoRegister();
    this_00 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(USceneComponent **)&this->field_0x1b8 = this_00;
    uVar4 = (undefined7)((ulonglong)pUVar3 >> 8);
    this_00[2].PhysicsVolume.WeakPtr.ObjectIndex = 0x3f800000;
    USceneComponent::SetVisibility(this_00,false,DirtyOnly);
    (**(code **)(this_00->_padding_ + 0x788))
              (this_00,UCollisionProfile::NoCollision_ProfileName,CONCAT71(uVar4,1));
  }
  return;
}

// InternalConstructor<UBaseBrushTool> @ 1496760d0

void __cdecl InternalConstructor<UBaseBrushTool>(FObjectInitializer *param_1)

{
  UMeshSurfacePointTool *this;
  UClass *local_res8;
  
  this = (UMeshSurfacePointTool *)param_1->Obj;
  if (this != (UMeshSurfacePointTool *)0x0) {
    UMeshSurfacePointTool::UMeshSurfacePointTool(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__USingleSelectionTool__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IClickDragBehaviorTarget__;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IHoverBehaviorTarget__;
    memset(&this[1]._padding_,0,0x100);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)((longlong)&this[1].LastWorldRay.Origin.field0_0x0 + 4) = 0xffffffff;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.X = 0.0;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.Y = 0.0;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.Z = 0.0;
    this[1].StylusAPI = (IToolStylusStateProviderAPI *)&DAT_ffffffff;
    *(undefined4 *)&this[2]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xff7fffff;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
    local_res8 = UBrushBaseProperties::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[2]._padding_,(FObjectPtr)&local_res8);
  }
  return;
}

// InternalConstructor<UBrushAdjusterInputBehavior> @ 149676260

void __cdecl InternalConstructor<UBrushAdjusterInputBehavior>(FObjectInitializer *param_1)

{
  UAnyButtonInputBehavior *this;
  
  this = (UAnyButtonInputBehavior *)param_1->Obj;
  if (this != (UAnyButtonInputBehavior *)0x0) {
    UAnyButtonInputBehavior::UAnyButtonInputBehavior(this);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UBrushAdjusterInputBehavior__6B_;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3b03126f;
    *(undefined4 *)&this[1]._padding_ = 0x3ba3d70a;
  }
  return;
}

// InternalConstructor<UBrushBaseProperties> @ 1496762b0

void __cdecl InternalConstructor<UBrushBaseProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  FObjectInitializer *pFVar1;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,pFVar1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x10100;
    *(undefined4 *)&this[1]._padding_ = 0x3e800000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// InternalConstructor<UClickDragTool> @ 149676330

void __cdecl InternalConstructor<UClickDragTool>(FObjectInitializer *param_1)

{
  UInteractiveTool *this;
  
  this = (UInteractiveTool *)param_1->Obj;
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this);
    this->_padding_ = (longlong)&UClickDragTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UClickDragTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7UClickDragTool__6B_;
  }
  return;
}

// InternalConstructor<UClickDragToolBuilder> @ 149676380

void __cdecl InternalConstructor<UClickDragToolBuilder>(FObjectInitializer *param_1)

{
  UInteractiveToolBuilder *this;
  
  this = (UInteractiveToolBuilder *)param_1->Obj;
  if (this != (UInteractiveToolBuilder *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder(this,param_1);
    *(undefined ***)this = &___7UClickDragToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UCombinedTransformGizmoContextObject> @ 1496763b0

void __cdecl InternalConstructor<UCombinedTransformGizmoContextObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCombinedTransformGizmoContextObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
  }
  return;
}

// InternalConstructor<UContextObjectStore> @ 149676400

void __cdecl InternalConstructor<UContextObjectStore>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UContextObjectStore__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UGizmoAxisIntervalParameterSource> @ 149676440

void __cdecl InternalConstructor<UGizmoAxisIntervalParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoAxisIntervalParameterSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoAxisIntervalParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UGizmoAxisRotationParameterSource> @ 1496764a0

void __cdecl InternalConstructor<UGizmoAxisRotationParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoAxisRotationParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)(this + 1) =
         &UGizmoAxisRotationParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)&this[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[2].field_0x18 =
         UGizmoAxisRotationParameterSource::<lambda_32_>::<lambda_invoker_cdecl>;
    if (&this[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(this + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)&this[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&this[3].field_0x20 =
         UGizmoAxisRotationParameterSource::<lambda_33_>::<lambda_invoker_cdecl>;
    if (&this[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&this[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
           ::Call;
    }
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[6].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(this + 7) = (double)fVar1;
    *(double *)&this[7].field_0x8 = (double)fVar2;
    *(double *)&this[7].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[7].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[7].field_0x20 = (double)fVar1;
    *(double *)(this + 8) = (double)fVar2;
    *(double *)&this[8].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[8].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[8].field_0x18 = (double)fVar1;
    *(double *)&this[8].field_0x20 = (double)fVar2;
    *(double *)(this + 9) = (double)fVar3;
  }
  return;
}

// InternalConstructor<UGizmoAxisScaleParameterSource> @ 1496765f0

void __cdecl InternalConstructor<UGizmoAxisScaleParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoAxisScaleParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)(this + 1) =
         &UGizmoAxisScaleParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)&this[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[2].field_0x18 =
         UGizmoAxisScaleParameterSource::<lambda_36_>::<lambda_invoker_cdecl>;
    if (&this[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(this + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>
           ::Call;
    }
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)&this[3].field_0x18 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[3].field_0x20 =
         UGizmoAxisScaleParameterSource::<lambda_37_>::<lambda_invoker_cdecl>;
    if (&this[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&this[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0x3ca3d70a;
    this[5].field_0xc = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[7].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[7].field_0x10 = (double)fVar1;
    *(double *)&this[7].field_0x18 = (double)fVar2;
    *(double *)&this[7].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(this + 8) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[8].field_0x8 = (double)fVar1;
    *(double *)&this[8].field_0x10 = (double)fVar2;
    *(double *)&this[8].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[8].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(this + 9) = (double)fVar1;
    *(double *)&this[9].field_0x8 = (double)fVar2;
    *(double *)&this[9].field_0x10 = (double)fVar3;
  }
  return;
}

// InternalConstructor<UGizmoAxisSource> @ 149676750

void __cdecl InternalConstructor<UGizmoAxisSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoAxisSource__6B_;
  }
  return;
}

// InternalConstructor<UGizmoAxisTranslationParameterSource> @ 149676780

void __cdecl InternalConstructor<UGizmoAxisTranslationParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoAxisTranslationParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)(this + 1) =
         &UGizmoAxisTranslationParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)&this[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[2].field_0x18 =
         UGizmoAxisTranslationParameterSource::<lambda_27_>::<lambda_invoker_cdecl>;
    if (&this[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(this + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)&this[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&this[3].field_0x20 =
         UGizmoAxisTranslationParameterSource::<lambda_28_>::<lambda_invoker_cdecl>;
    if (&this[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&this[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[6].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(this + 7) = (double)fVar1;
    *(double *)&this[7].field_0x8 = (double)fVar2;
    *(double *)&this[7].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[7].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[7].field_0x20 = (double)fVar1;
    *(double *)(this + 8) = (double)fVar2;
    *(double *)&this[8].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[8].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[8].field_0x18 = (double)fVar1;
    *(double *)&this[8].field_0x20 = (double)fVar2;
    *(double *)(this + 9) = (double)fVar3;
  }
  return;
}

// InternalConstructor<UGizmoBaseFloatParameterSource> @ 1496768d0

void __cdecl InternalConstructor<UGizmoBaseFloatParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined ***)this = &UGizmoBaseFloatParameterSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoBaseFloatParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UGizmoBaseTransformSource> @ 149676920

void __cdecl InternalConstructor<UGizmoBaseTransformSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined ***)this = &UGizmoBaseTransformSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoBaseTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UGizmoClickMultiTarget> @ 149676970

void __cdecl InternalConstructor<UGizmoClickMultiTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoClickMultiTarget__6B_;
  }
  return;
}

// InternalConstructor<UGizmoClickTarget> @ 1496769a0

void __cdecl InternalConstructor<UGizmoClickTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoClickTarget__6B_;
  }
  return;
}

// InternalConstructor<UGizmoComponentHitTarget> @ 1496769d0

void __cdecl InternalConstructor<UGizmoComponentHitTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoComponentHitTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoComponentHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UGizmoComponentWorldTransformSource> @ 149676a50

void __cdecl InternalConstructor<UGizmoComponentWorldTransformSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoComponentWorldTransformSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoComponentWorldTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    this[2].field_0x8 = 1;
  }
  return;
}

// InternalConstructor<UGizmoElementBase> @ 149676ab0

void __cdecl InternalConstructor<UGizmoElementBase>(FObjectInitializer *param_1)

{
  if ((UGizmoElementBase *)param_1->Obj != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGizmoElementBox> @ 149676ad0

void __cdecl InternalConstructor<UGizmoElementBox>(FObjectInitializer *param_1)

{
  UGizmoElementBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementBase *)param_1->Obj;
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementBox__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1].bEnabled = false;
    uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    *(double *)&this[1].PartIdentifier = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = uVar1;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr =
         (FWeakObjectPtr)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
    *(double *)&this[1].MeshRenderAttributes.HoverMaterial.bOverridesChildState =
         UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].MeshRenderAttributes.InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar1;
    this[1].MeshRenderAttributes.SelectMaterial.Value.WeakPtr =
         (FWeakObjectPtr)UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  }
  return;
}

// InternalConstructor<UGizmoElementCircle> @ 149676b80

void __cdecl InternalConstructor<UGizmoElementCircle>(FObjectInitializer *param_1)

{
  UGizmoElementCircleBase *this;
  
  this = (UGizmoElementCircleBase *)param_1->Obj;
  if (this != (UGizmoElementCircleBase *)0x0) {
    UGizmoElementCircleBase::UGizmoElementCircleBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10001;
    this->_padding_ = (longlong)&___7UGizmoElementCircle__6B_;
  }
  return;
}

// InternalConstructor<UGizmoElementCircleBase> @ 149676bc0

void __cdecl InternalConstructor<UGizmoElementCircleBase>(FObjectInitializer *param_1)

{
  if ((UGizmoElementCircleBase *)param_1->Obj != (UGizmoElementCircleBase *)0x0) {
    UGizmoElementCircleBase::UGizmoElementCircleBase
              ((UGizmoElementCircleBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGizmoElementCone> @ 149676be0

void __cdecl InternalConstructor<UGizmoElementCone>(FObjectInitializer *param_1)

{
  UGizmoElementBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementBase *)param_1->Obj;
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementCone__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    this[1].PartIdentifier = 0x3f800000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0x3f000000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = 0x20;
    this[1].MeshRenderAttributes.Material.bOverridesChildState = false;
  }
  return;
}

// InternalConstructor<UGizmoElementCylinder> @ 149676c80

void __cdecl InternalConstructor<UGizmoElementCylinder>(FObjectInitializer *param_1)

{
  UGizmoElementBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementBase *)param_1->Obj;
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementCylinder__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    this[1].PartIdentifier = 0x3f800000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0x3f000000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = 0x20;
    this[1].MeshRenderAttributes.Material.bOverridesChildState = false;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr.ObjectIndex = 0x41200000;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr.ObjectSerialNumber = 0x40a00000;
  }
  return;
}

// InternalConstructor<UGizmoElementGroup> @ 149676d30

void __cdecl InternalConstructor<UGizmoElementGroup>(FObjectInitializer *param_1)

{
  UGizmoElementLineBase *this;
  
  this = (UGizmoElementLineBase *)param_1->Obj;
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UGizmoElementGroup__6B_;
  }
  return;
}

// InternalConstructor<UGizmoElementGroupBase> @ 149676d80

void __cdecl InternalConstructor<UGizmoElementGroupBase>(FObjectInitializer *param_1)

{
  UGizmoElementLineBase *this;
  
  this = (UGizmoElementLineBase *)param_1->Obj;
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGizmoElementHitMultiTarget> @ 149676dd0

void __cdecl InternalConstructor<UGizmoElementHitMultiTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoElementHitMultiTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoElementHitMultiTarget::_vftable__for__IGizmoClickMultiTarget__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UGizmoElementHitTarget> @ 149676e20

void __cdecl InternalConstructor<UGizmoElementHitTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoElementHitTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoElementHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UGizmoElementLineBase> @ 149676e70

void __cdecl InternalConstructor<UGizmoElementLineBase>(FObjectInitializer *param_1)

{
  if ((UGizmoElementLineBase *)param_1->Obj != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGizmoElementLineStrip> @ 149676e90

void __cdecl InternalConstructor<UGizmoElementLineStrip>(FObjectInitializer *param_1)

{
  UGizmoElementLineBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementLineBase *)param_1->Obj;
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UGizmoElementRectangle> @ 149676f40

void __cdecl InternalConstructor<UGizmoElementRectangle>(FObjectInitializer *param_1)

{
  UGizmoElementLineBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementLineBase *)param_1->Obj;
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementRectangle__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x10001;
  }
  return;
}

// InternalConstructor<UGizmoElementSphere> @ 149676ff0

void __cdecl InternalConstructor<UGizmoElementSphere>(FObjectInitializer *param_1)

{
  UGizmoElementBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementBase *)param_1->Obj;
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementSphere__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x20;
  }
  return;
}

// InternalConstructor<UGizmoElementTorus> @ 149677060

void __cdecl InternalConstructor<UGizmoElementTorus>(FObjectInitializer *param_1)

{
  UGizmoElementCircleBase *this;
  
  this = (UGizmoElementCircleBase *)param_1->Obj;
  if (this != (UGizmoElementCircleBase *)0x0) {
    UGizmoElementCircleBase::UGizmoElementCircleBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 8;
    this->_padding_ = (longlong)&___7UGizmoElementTorus__6B_;
    this[1]._padding_ = 0x4014000000000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UGizmoElementTriangleList> @ 1496770e0

void __cdecl InternalConstructor<UGizmoElementTriangleList>(FObjectInitializer *param_1)

{
  UGizmoElementBase *this;
  undefined8 uVar1;
  
  this = (UGizmoElementBase *)param_1->Obj;
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = false;
    this[1].bEnabledForSubduedState = false;
    this[1].PartIdentifier = 0;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0;
    *(undefined8 *)&this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber =
         0x3ff0000000000000;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].MeshRenderAttributes.HoverMaterial.bOverridesChildState =
         0x3ff0000000000000;
    *(undefined8 *)&this[1].MeshRenderAttributes.InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         0;
    this[1].MeshRenderAttributes.SelectMaterial.Value.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].MeshRenderAttributes.SelectMaterial.bOverridesChildState = 0;
  }
  return;
}

// InternalConstructor<UGizmoFloatParameterSource> @ 149677190

void __cdecl InternalConstructor<UGizmoFloatParameterSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoFloatParameterSource__6B_;
  }
  return;
}

// InternalConstructor<UGizmoLambdaHitTarget> @ 1496771c0

void __cdecl InternalConstructor<UGizmoLambdaHitTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoLambdaHitTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoLambdaHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)(this + 7) = 0;
  }
  return;
}

// InternalConstructor<UGizmoLambdaStateTarget> @ 149677240

void __cdecl InternalConstructor<UGizmoLambdaStateTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoLambdaStateTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoLambdaStateTarget::_vftable__for__IGizmoStateTarget__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UGizmoLineHandleComponent> @ 149677290

void __cdecl InternalConstructor<UGizmoLineHandleComponent>(FObjectInitializer *param_1)

{
  UGizmoBaseComponent *this;
  
  this = (UGizmoBaseComponent *)param_1->Obj;
  if (this != (UGizmoBaseComponent *)0x0) {
    UGizmoBaseComponent::UGizmoBaseComponent(this);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UGizmoLocalFloatParameterSource> @ 149677360

void __cdecl InternalConstructor<UGizmoLocalFloatParameterSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoLocalFloatParameterSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoLocalFloatParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UGizmoNilStateTarget> @ 1496773c0

void __cdecl InternalConstructor<UGizmoNilStateTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoNilStateTarget::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGizmoNilStateTarget::_vftable__for__IGizmoStateTarget__;
  }
  return;
}

// InternalConstructor<UGizmoObjectModifyStateTarget> @ 149677400

void __cdecl InternalConstructor<UGizmoObjectModifyStateTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoObjectModifyStateTarget::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &UGizmoObjectModifyStateTarget::_vftable__for__IGizmoStateTarget__;
    FText::FText((FText *)&this[1].field_0x10);
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UGizmoPlaneScaleParameterSource> @ 149677460

void __cdecl InternalConstructor<UGizmoPlaneScaleParameterSource>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UGizmoBaseVec2ParameterSource *this;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  
  this = (UGizmoBaseVec2ParameterSource *)param_1->Obj;
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoPlaneScaleParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoPlaneScaleParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[1]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_38_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)puVar1 = UGizmoPlaneScaleParameterSource::<lambda_39_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnParameterChanged.field_0x8 = 0;
    this[2]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[2]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_40_>::<lambda_invoker_cdecl>;
    if (&this[2]._padding_ != (longlong *)0x0) {
      this[2]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[2].OnParameterChanged.field_0x10 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_AU__TVector2_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[3]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_41_>::<lambda_invoker_cdecl>;
    if (&this[3]._padding_ != (longlong *)0x0) {
      *(code **)&this[2].OnParameterChanged.field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&>
           ::Call;
    }
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].OnParameterChanged = 0;
    *(undefined8 *)&this[3].OnParameterChanged.field_0x8 = 0;
    *(undefined4 *)&this[3].OnParameterChanged.field_0x10 = 0x3ca3d70a;
    *(undefined2 *)&this[3].OnParameterChanged.field_0x14 = 0;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged.field_0x10 = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[6]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[6]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[6].OnParameterChanged = auVar8;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[6].OnParameterChanged.field_0x10 = auVar9;
  }
  return;
}

// InternalConstructor<UGizmoPlaneTranslationParameterSource> @ 149677470

void __cdecl InternalConstructor<UGizmoPlaneTranslationParameterSource>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UGizmoBaseVec2ParameterSource *this;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  
  this = (UGizmoBaseVec2ParameterSource *)param_1->Obj;
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoPlaneTranslationParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &UGizmoPlaneTranslationParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ =
         (longlong)UGizmoPlaneTranslationParameterSource::<lambda_29_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)puVar1 = UGizmoPlaneTranslationParameterSource::<lambda_30_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnParameterChanged.field_0x8 = 0;
    this[2]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[2]._padding_ =
         (longlong)UGizmoPlaneTranslationParameterSource::<lambda_31_>::<lambda_invoker_cdecl>;
    if (&this[2]._padding_ != (longlong *)0x0) {
      this[2]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[2].OnParameterChanged.field_0x18 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].OnParameterChanged.field_0x10 = 1;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[5]._padding_ = auVar4._8_8_;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged.field_0x10 = auVar7;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[6]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[6]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar9._8_8_;
  }
  return;
}

// InternalConstructor<UGizmoRectangleComponent> @ 149677610

void __cdecl InternalConstructor<UGizmoRectangleComponent>(FObjectInitializer *param_1)

{
  UGizmoBaseComponent *this;
  
  this = (UGizmoBaseComponent *)param_1->Obj;
  if (this != (UGizmoBaseComponent *)0x0) {
    UGizmoBaseComponent::UGizmoBaseComponent(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41a00000;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UGizmoRectangleComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGizmoRectangleComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41a00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined1 *)&this[1]._padding_ = 0xf;
  }
  return;
}

// InternalConstructor<UGizmoRenderMultiTarget> @ 149677700

void __cdecl InternalConstructor<UGizmoRenderMultiTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoRenderMultiTarget__6B_;
  }
  return;
}

// InternalConstructor<UGizmoRenderTarget> @ 149677730

void __cdecl InternalConstructor<UGizmoRenderTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoRenderTarget__6B_;
  }
  return;
}

// InternalConstructor<UGizmoScaledAndUnscaledTransformSources> @ 149677760

void __cdecl
InternalConstructor<UGizmoScaledAndUnscaledTransformSources>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoScaledAndUnscaledTransformSources::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoScaledAndUnscaledTransformSources::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UGizmoScaledTransformSource> @ 1496777c0

void __cdecl InternalConstructor<UGizmoScaledTransformSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoScaledTransformSource::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)(this + 1) =
         &UGizmoScaledTransformSource::_vftable__for__IGizmoTransformSource__;
    FSeparateScaleProvider::FSeparateScaleProvider((FSeparateScaleProvider *)&this[2].field_0x10);
    return;
  }
  return;
}

// InternalConstructor<UGizmoStateTarget> @ 149677830

void __cdecl InternalConstructor<UGizmoStateTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoStateTarget__6B_;
  }
  return;
}

// InternalConstructor<UGizmoTransformChangeStateTarget> @ 149677860

void __cdecl InternalConstructor<UGizmoTransformChangeStateTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoTransformChangeStateTarget::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) =
         &UGizmoTransformChangeStateTarget::_vftable__for__IGizmoStateTarget__;
    FText::FText((FText *)&this[1].field_0x10);
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[2].field_0x18 = (double)fVar1;
    *(double *)&this[2].field_0x20 = (double)fVar2;
    *(double *)(this + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[3].field_0x10 = (double)fVar1;
    *(double *)&this[3].field_0x18 = (double)fVar2;
    *(double *)&this[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(this + 4) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[4].field_0x8 = (double)fVar1;
    *(double *)&this[4].field_0x10 = (double)fVar2;
    *(double *)&this[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[4].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(this + 5) = (double)fVar1;
    *(double *)&this[5].field_0x8 = (double)fVar2;
    *(double *)&this[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[5].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[5].field_0x20 = (double)fVar1;
    *(double *)(this + 6) = (double)fVar2;
    *(double *)&this[6].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[6].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[6].field_0x18 = (double)fVar1;
    *(double *)&this[6].field_0x20 = (double)fVar2;
    *(double *)(this + 7) = (double)fVar3;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UGizmoTransformProxyTransformSource> @ 149677990

void __cdecl InternalConstructor<UGizmoTransformProxyTransformSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UGizmoTransformProxyTransformSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoTransformProxyTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 2;
  }
  return;
}

// InternalConstructor<UGizmoTransformSource> @ 149677a00

void __cdecl InternalConstructor<UGizmoTransformSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoTransformSource__6B_;
  }
  return;
}

// InternalConstructor<UGizmoUniformScaleParameterSource> @ 149677a30

void __cdecl InternalConstructor<UGizmoUniformScaleParameterSource>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UGizmoBaseVec2ParameterSource *this;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  
  this = (UGizmoBaseVec2ParameterSource *)param_1->Obj;
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoUniformScaleParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoUniformScaleParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ =
         (longlong)UGizmoUniformScaleParameterSource::<lambda_34_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    *(code **)puVar1 = UGizmoUniformScaleParameterSource::<lambda_35_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].OnParameterChanged = 0x3ca3d70a;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged.field_0x10 = auVar5;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[5]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[5]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar9;
  }
  return;
}

// InternalConstructor<UGizmoVec2ParameterSource> @ 149677ba0

void __cdecl InternalConstructor<UGizmoVec2ParameterSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGizmoVec2ParameterSource__6B_;
  }
  return;
}

// InternalConstructor<UGizmoViewContext> @ 149677bd0

void __cdecl InternalConstructor<UGizmoViewContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGizmoViewContext::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UGizmoViewContext::_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
    UGizmoViewContext::FMatrices::FMatrices((FMatrices *)&this[1].field_0x8);
    *(undefined8 *)&this[0x11].field_0x8 = 0;
    *(undefined8 *)&this[0x11].field_0x10 = 0;
    *(undefined8 *)&this[0x12].field_0x10 = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UInputBehavior> @ 149677c40

void __cdecl InternalConstructor<UInputBehavior>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UInputBehavior__6B_;
    *(undefined2 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)(this + 1) = 100;
  }
  return;
}

// InternalConstructor<UInputBehaviorSet> @ 149677c90

void __cdecl InternalConstructor<UInputBehaviorSet>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UInputBehaviorSet__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UInputBehaviorSource> @ 149677cd0

void __cdecl InternalConstructor<UInputBehaviorSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInputBehaviorSource__6B_;
  }
  return;
}

// InternalConstructor<UInputRouter> @ 149677d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UInputRouter>(FObjectInitializer *param_1)

{
  pmf_f7a4f3a8 this;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  FName FStack_a8;
  undefined1 auStack_a0 [16];
  pmf_f7a4f3a8 pStack_90;
  FName FStack_88;
  undefined4 uStack_80;
  bool bStack_78;
  IToolsContextTransactionsAPI *pIStack_70;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_68;
  UInputBehavior *pUStack_60;
  void *pvStack_58;
  longlong alStack_48 [3];
  longlong *plStack_30;
  void *pvStack_18;
  
  this = (pmf_f7a4f3a8)param_1->Obj;
  if (this == (pmf_f7a4f3a8)0x0) {
    return;
  }
  pvStack_18 = (void *)(__security_cookie.value ^ (ulonglong)auStack_c8);
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UInputRouter__6B_;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined8 *)((longlong)this + 0x80) = 0;
  *(undefined8 *)((longlong)this + 0x88) = 0;
  *(undefined4 *)((longlong)this + 0x90) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined8 *)((longlong)this + 0xa0) = 0;
  *(undefined8 *)((longlong)this + 0xa8) = 0;
  FInputDeviceState::FInputDeviceState((FInputDeviceState *)((longlong)this + 0xb0));
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(undefined8 *)((longlong)this + 0x80) = 0;
  *(undefined8 *)((longlong)this + 0x88) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined2 *)((longlong)this + 0x28) = 0;
  pFVar4 = FName::FName(&FStack_a8,"InputBehaviors");
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = UInputBehaviorSet::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(auStack_a0 + 8),pUVar5);
  TStack_68.DebugPtr = (UInputBehaviorSet *)0x0;
  pUStack_60 = (UInputBehavior *)0x0;
  uStack_80 = 0;
  pIStack_70 = (IToolsContextTransactionsAPI *)0x0;
  bStack_78 = false;
  pStack_90 = this;
  FStack_88 = FVar1;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(auStack_a0 + 8));
  if (pvStack_58 != (void *)0x0) {
    plVar7 = alStack_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar7 = plStack_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)((longlong)this + 0x38) = pUVar6;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x141,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = IsInSlateThread();
      if (!bVar3) {
        bVar3 = (*IsInAsyncLoadingThread)();
        if (!bVar3) {
          bVar3 = IsInParallelLoadingThread();
          if (!bVar3) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)FSlateApplication::CurrentApplication.Object + 0x1e8))();
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UInputRouter>(this_00,(UInputRouter *)auStack_a0,this);
  }
  return;
}

// InternalConstructor<UInteractionMechanic> @ 149677d20

void __cdecl InternalConstructor<UInteractionMechanic>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UInteractionMechanic__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UIntervalGizmo> @ 149677d60

void __cdecl InternalConstructor<UIntervalGizmo>(FObjectInitializer *param_1)

{
  UInteractiveGizmo *this;
  
  this = (UInteractiveGizmo *)param_1->Obj;
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this);
    this->_padding_ = (longlong)&UIntervalGizmo::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UIntervalGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[7]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[7]._padding_ = (longlong)UIntervalGizmo::<lambda_51_>::<lambda_invoker_cdecl>;
    if (&this[7]._padding_ != (longlong *)0x0) {
      this[7]._padding_ =
           (longlong)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[8]._padding_ = (longlong)UIntervalGizmo::<lambda_52_>::<lambda_invoker_cdecl>;
    if (&this[8]._padding_ != (longlong *)0x0) {
      this[8]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined4 *)&this[8].InputBehaviors.field0_0x0 = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[8].InputBehaviors.field0_0x0 + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
  }
  return;
}

// InternalConstructor<UIntervalGizmoBuilder> @ 149677d70

void __cdecl InternalConstructor<UIntervalGizmoBuilder>(FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder *this;
  
  this = (UInteractiveGizmoBuilder *)param_1->Obj;
  if (this != (UInteractiveGizmoBuilder *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(this,param_1);
    *(undefined ***)this = &___7UIntervalGizmoBuilder__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULocalInputBehaviorSource> @ 149677dc0

void __cdecl InternalConstructor<ULocalInputBehaviorSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &ULocalInputBehaviorSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &ULocalInputBehaviorSource::_vftable__for__IInputBehaviorSource__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)&this[1].field_0x18 =
         &___7__TFunction_OwnedObject_P6A__TXZ_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[1].field_0x20 = ULocalInputBehaviorSource::<lambda_24_>::<lambda_invoker_cdecl>;
    if (&this[1].field_0x20 != (undefined1 *)0x0) {
      *(code **)&this[1].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UInputBehaviorSet_const_*>::Call;
    }
  }
  return;
}

// InternalConstructor<UMeshSurfacePointTool> @ 149677e30

void __cdecl InternalConstructor<UMeshSurfacePointTool>(FObjectInitializer *param_1)

{
  undefined1 *this;
  UInteractiveTool *this_00;
  undefined8 uVar1;
  undefined8 auStackX_8 [4];
  
  this_00 = (UInteractiveTool *)param_1->Obj;
  if (this_00 == (UInteractiveTool *)0x0) {
    return;
  }
  UInteractiveTool::UInteractiveTool(this_00);
  this_00->_padding_ = (longlong)&UMeshSurfacePointTool::_vftable__for__UObject__;
  this = &this_00[1].OnPropertyModifiedDirectlyByTool.field_0x10;
  this_00[1]._padding_ = 0;
  this_00->_padding_ = (longlong)&UMeshSurfacePointTool::_vftable__for__IInputBehaviorSource__;
  this_00[1]._padding_ = (longlong)&UMeshSurfacePointTool::_vftable__for__USingleSelectionTool__;
  this_00[1]._padding_ = (longlong)&UMeshSurfacePointTool::_vftable__for__IClickDragBehaviorTarget__
  ;
  this_00[1]._padding_ = (longlong)&UMeshSurfacePointTool::_vftable__for__IHoverBehaviorTarget__;
  *(undefined2 *)&this_00[1]._padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this_00[1].OnPropertySetsModified = uVar1;
  *(double *)&this_00[1].OnPropertySetsModified.field_0x8 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this_00[1].OnPropertySetsModified.field_0x10 = 0;
  *(undefined8 *)&this_00[1].OnPropertySetsModified.field_0x18 = 0;
  *(undefined8 *)&this_00[1].OnPropertyModifiedDirectlyByTool = 0x3ff0000000000000;
  *(undefined8 *)&this_00[1].OnPropertyModifiedDirectlyByTool.field_0x8 = 0;
  *(undefined8 *)this = 0;
  auStackX_8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)auStackX_8);
  return;
}

// InternalConstructor<UMeshSurfacePointToolBuilder> @ 149677e50

void __cdecl InternalConstructor<UMeshSurfacePointToolBuilder>(FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder *this;
  
  this = (UInteractiveToolWithToolTargetsBuilder *)param_1->Obj;
  if (this != (UInteractiveToolWithToolTargetsBuilder *)0x0) {
    UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UMeshSurfacePointToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UPlanePositionGizmo> @ 149677e90

void __cdecl InternalConstructor<UPlanePositionGizmo>(FObjectInitializer *param_1)

{
  UInteractiveGizmo *this;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this = (UInteractiveGizmo *)param_1->Obj;
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this);
    this->_padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IClickDragBehaviorTarget__;
    this[1]._padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IHoverBehaviorTarget__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 2) = 0;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[3]._padding_ = (longlong)UPlanePositionGizmo::<lambda_49_>::<lambda_invoker_cdecl>;
    if (&this[3]._padding_ != (longlong *)0x0) {
      this[2].InputBehaviors.field0_0x0.DebugPtr =
           (UInputBehaviorSet *)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[3]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UPlanePositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[4]._padding_ = (longlong)UPlanePositionGizmo::<lambda_50_>::<lambda_invoker_cdecl>;
    if (&this[4]._padding_ != (longlong *)0x0) {
      this[3]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    uVar1 = __real_3ff0000000000000;
    *(undefined1 *)&this[4]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0 = (TObjectPtr<UInputBehaviorSet>_u_0)0x3ff0000000000000;
    this[8]._padding_ = 0x3ff0000000000000;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined1 *)&this[10]._padding_ = 0;
    this[9]._padding_ = uVar2;
    this[9]._padding_ = uVar3;
    *(undefined4 *)&this[9]._padding_ = uVar4;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = uVar5;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    *(int *)&this[9].InputBehaviors.field0_0x0 = (int)uVar1;
    *(int *)((longlong)&this[9].InputBehaviors.field0_0x0 + 4) = (int)((ulonglong)uVar1 >> 0x20);
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[0xb]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPlanePositionGizmoBuilder> @ 149678020

void __cdecl InternalConstructor<UPlanePositionGizmoBuilder>(FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder *this;
  
  this = (UInteractiveGizmoBuilder *)param_1->Obj;
  if (this != (UInteractiveGizmoBuilder *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(this,param_1);
    *(undefined ***)this = &___7UPlanePositionGizmoBuilder__6B_;
  }
  return;
}

// InternalConstructor<URepositionableTransformGizmo> @ 149678050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<URepositionableTransformGizmo>(FObjectInitializer *param_1)

{
  UCombinedTransformGizmo *this;
  
  this = (UCombinedTransformGizmo *)param_1->Obj;
  if (this != (UCombinedTransformGizmo *)0x0) {
    UCombinedTransformGizmo::UCombinedTransformGizmo(this);
    *(undefined ***)this = &URepositionableTransformGizmo::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &URepositionableTransformGizmo::_vftable__for__IInputBehaviorSource__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)&this[1].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[1].field_0x18 =
         URepositionableTransformGizmo::<lambda_63_>::<lambda_invoker_cdecl>;
    if (&this[1].field_0x18 != (undefined1 *)0x0) {
      *(code **)(this + 1) =
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].ExplicitGridSize.field0_0x0._s_0.Z = 0.0;
    *(undefined ***)&this[1].bSnapToWorldGrid =
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[1].ExplicitGridSize.field0_0x0._s_0.X =
         (double)URepositionableTransformGizmo::<lambda_64_>::<lambda_invoker_cdecl>;
    if (&this[1].ExplicitGridSize != (TVector<double> *)0x0) {
      *(code **)&this[1].field_0x30 =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[1].bRotationGridSizeIsExplicit = 0;
    this[1].ExplicitRotationGridSize.Pitch = 0.0;
    this[1].ExplicitRotationGridSize.Yaw = 0.0;
  }
  return;
}

// InternalConstructor<URepositionableTransformGizmoBuilder> @ 149678130

void __cdecl InternalConstructor<URepositionableTransformGizmoBuilder>(FObjectInitializer *param_1)

{
  UCombinedTransformGizmoBuilder *this;
  
  this = (UCombinedTransformGizmoBuilder *)param_1->Obj;
  if (this != (UCombinedTransformGizmoBuilder *)0x0) {
    UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder(this,param_1);
    this->_padding_ = (longlong)&___7URepositionableTransformGizmoBuilder__6B_;
  }
  return;
}

// InternalConstructor<UScalableSphereGizmo> @ 149678160

void __cdecl InternalConstructor<UScalableSphereGizmo>(FObjectInitializer *param_1)

{
  UInteractiveGizmo *this;
  
  this = (UInteractiveGizmo *)param_1->Obj;
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UScalableSphereGizmo::_vftable__for__UObject__;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this->_padding_ = (longlong)&UScalableSphereGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7UScalableSphereGizmo__6B_;
    *(undefined4 *)&this[2]._padding_ = 0x41400000;
    FText::FText((FText *)&this[2]._padding_);
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UScalableSphereGizmoBuilder> @ 1496781e0

void __cdecl InternalConstructor<UScalableSphereGizmoBuilder>(FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder *this;
  
  this = (UInteractiveGizmoBuilder *)param_1->Obj;
  if (this != (UInteractiveGizmoBuilder *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(this,param_1);
    *(undefined ***)this = &___7UScalableSphereGizmoBuilder__6B_;
  }
  return;
}

// InternalConstructor<UScalableSphereGizmoInputBehavior> @ 149678210

void __cdecl InternalConstructor<UScalableSphereGizmoInputBehavior>(FObjectInitializer *param_1)

{
  UAnyButtonInputBehavior *this;
  undefined8 uVar1;
  
  this = (UAnyButtonInputBehavior *)param_1->Obj;
  if (this != (UAnyButtonInputBehavior *)0x0) {
    UAnyButtonInputBehavior::UAnyButtonInputBehavior(this);
    this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<USimpleLambdaInteractiveGizmoBuilder> @ 149678280

void __cdecl InternalConstructor<USimpleLambdaInteractiveGizmoBuilder>(FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder *this;
  
  this = (UInteractiveGizmoBuilder *)param_1->Obj;
  if (this != (UInteractiveGizmoBuilder *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(this,param_1);
    *(undefined ***)this = &___7USimpleLambdaInteractiveGizmoBuilder__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<USimpleSingleClickGizmo> @ 1496782c0

void __cdecl InternalConstructor<USimpleSingleClickGizmo>(FObjectInitializer *param_1)

{
  UInteractiveGizmo *this;
  
  this = (UInteractiveGizmo *)param_1->Obj;
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this);
    this[1]._padding_ = 2;
    this->_padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IClickBehaviorTarget__;
    this[1]._padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IHoverBehaviorTarget__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USingleClickTool> @ 149678330

void __cdecl InternalConstructor<USingleClickTool>(FObjectInitializer *param_1)

{
  UInteractiveTool *this;
  
  this = (UInteractiveTool *)param_1->Obj;
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this);
    this->_padding_ = (longlong)&USingleClickTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USingleClickTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7USingleClickTool__6B_;
  }
  return;
}

// InternalConstructor<USingleClickToolBuilder> @ 149678380

void __cdecl InternalConstructor<USingleClickToolBuilder>(FObjectInitializer *param_1)

{
  UInteractiveToolBuilder *this;
  
  this = (UInteractiveToolBuilder *)param_1->Obj;
  if (this != (UInteractiveToolBuilder *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder(this,param_1);
    *(undefined ***)this = &___7USingleClickToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<USingleSelectionTool> @ 1496783b0

void __cdecl InternalConstructor<USingleSelectionTool>(FObjectInitializer *param_1)

{
  UInteractiveTool *this;
  
  this = (UInteractiveTool *)param_1->Obj;
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7USingleSelectionTool__6B_;
  }
  return;
}

// InternalConstructor<UTransformProxy> @ 149678400

void __cdecl InternalConstructor<UTransformProxy>(FObjectInitializer *param_1)

{
  if ((UTransformProxy *)param_1->Obj != (UTransformProxy *)0x0) {
    UTransformProxy::UTransformProxy((UTransformProxy *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UViewAdjustedStaticMeshGizmoComponent> @ 149678420

void __cdecl InternalConstructor<UViewAdjustedStaticMeshGizmoComponent>(FObjectInitializer *param_1)

{
  UStaticMeshComponent *this;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)
         &UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)
         &UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AIntervalGizmoActor> @ 1496784e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AIntervalGizmoActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AGizmoActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AIntervalGizmoActor::GetPrivateStaticClass();
  this = (AGizmoActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AGizmoActor *)0x0) {
    AGizmoActor::AGizmoActor(this,param_1);
    *(undefined ***)this = &___7AIntervalGizmoActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseBrushTool> @ 1496785c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseBrushTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *this;
  UMeshSurfacePointTool *pUVar3;
  
  pUVar3 = (UMeshSurfacePointTool *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseBrushTool::GetPrivateStaticClass();
  this = (UMeshSurfacePointTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshSurfacePointTool *)0x0) {
    UMeshSurfacePointTool::UMeshSurfacePointTool(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IInputBehaviorSource__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__USingleSelectionTool__;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IClickDragBehaviorTarget__;
    this->_padding_ = (longlong)&UBaseBrushTool::_vftable__for__IHoverBehaviorTarget__;
    memset(&this[1]._padding_,0,0x100);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)((longlong)&this[1].LastWorldRay.Origin.field0_0x0 + 4) = 0xffffffff;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.X = 0.0;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.Y = 0.0;
    this[1].LastWorldRay.Direction.field0_0x0._s_0.Z = 0.0;
    this[1].StylusAPI = (IToolStylusStateProviderAPI *)&DAT_ffffffff;
    *(undefined4 *)&this[2]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xff7fffff;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UBrushAdjusterInputBehavior> @ 149678780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBrushAdjusterInputBehavior>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnyButtonInputBehavior *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBrushAdjusterInputBehavior::GetPrivateStaticClass();
  this = (UAnyButtonInputBehavior *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnyButtonInputBehavior *)0x0) {
    UAnyButtonInputBehavior::UAnyButtonInputBehavior(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UBrushAdjusterInputBehavior__6B_;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3b03126f;
    *(undefined4 *)&this[1]._padding_ = 0x3ba3d70a;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBrushBaseProperties> @ 149678850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBrushBaseProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBrushBaseProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x10100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClickDragTool> @ 149678910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClickDragTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClickDragTool::GetPrivateStaticClass();
  this = (UInteractiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this,param_1);
    this->_padding_ = (longlong)&UClickDragTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UClickDragTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7UClickDragTool__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClickDragToolBuilder> @ 1496789e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClickDragToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClickDragToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClickDragToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCombinedTransformGizmoContextObject> @ 149678a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCombinedTransformGizmoContextObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCombinedTransformGizmoContextObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[2].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UCombinedTransformGizmoContextObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContextObjectStore> @ 149678b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UContextObjectStore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContextObjectStore::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContextObjectStore__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoAxisIntervalParameterSource> @ 149678c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoAxisIntervalParameterSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoAxisIntervalParameterSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoAxisIntervalParameterSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoAxisIntervalParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoAxisRotationParameterSource> @ 149678d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoAxisRotationParameterSource>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UGizmoAxisRotationParameterSource::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &UGizmoAxisRotationParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) =
         &UGizmoAxisRotationParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined8 *)&pUVar4[1].field_0x20 = 2;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined ***)&pUVar4[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[2].field_0x18 =
         UGizmoAxisRotationParameterSource::<lambda_32_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&pUVar4[3].field_0x20 =
         UGizmoAxisRotationParameterSource::<lambda_33_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
           ::Call;
    }
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined8 *)&pUVar4[5].field_0x8 = 0;
    *(undefined4 *)&pUVar4[5].field_0x10 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[6].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pUVar4 + 7) = (double)fVar1;
    *(double *)&pUVar4[7].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[7].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[7].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 8) = (double)fVar2;
    *(double *)&pUVar4[8].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[8].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[8].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[8].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 9) = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoAxisScaleParameterSource> @ 149678d10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoAxisScaleParameterSource>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UGizmoAxisScaleParameterSource::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &UGizmoAxisScaleParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) =
         &UGizmoAxisScaleParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined8 *)&pUVar4[1].field_0x20 = 2;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined ***)&pUVar4[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[2].field_0x18 =
         UGizmoAxisScaleParameterSource::<lambda_36_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>
           ::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[3].field_0x20 =
         UGizmoAxisScaleParameterSource::<lambda_37_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined4 *)&pUVar4[5].field_0x8 = 0x3ca3d70a;
    pUVar4[5].field_0xc = 0;
    *(undefined8 *)&pUVar4[5].field_0x10 = 0;
    *(undefined4 *)&pUVar4[5].field_0x18 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[7].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[7].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[7].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(pUVar4 + 8) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[8].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[8].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[8].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[8].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pUVar4 + 9) = (double)fVar1;
    *(double *)&pUVar4[9].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[9].field_0x10 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoAxisSource> @ 149678d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoAxisSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoAxisSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoAxisSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoAxisTranslationParameterSource> @ 149678dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoAxisTranslationParameterSource>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UGizmoAxisTranslationParameterSource::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &UGizmoAxisTranslationParameterSource::_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) =
         &UGizmoAxisTranslationParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined8 *)&pUVar4[1].field_0x20 = 2;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined ***)&pUVar4[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[2].field_0x18 =
         UGizmoAxisTranslationParameterSource::<lambda_27_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&pUVar4[3].field_0x20 =
         UGizmoAxisTranslationParameterSource::<lambda_28_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined8 *)&pUVar4[5].field_0x8 = 0;
    *(undefined4 *)&pUVar4[5].field_0x10 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[6].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pUVar4 + 7) = (double)fVar1;
    *(double *)&pUVar4[7].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[7].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[7].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 8) = (double)fVar2;
    *(double *)&pUVar4[8].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[8].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[8].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[8].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 9) = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoBaseFloatParameterSource> @ 149678de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoBaseFloatParameterSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoBaseFloatParameterSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoBaseFloatParameterSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoBaseFloatParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoBaseTransformSource> @ 149678eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoBaseTransformSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoBaseTransformSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoBaseTransformSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoBaseTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoClickMultiTarget> @ 149678f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoClickMultiTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoClickMultiTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoClickMultiTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoClickTarget> @ 149679030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoClickTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoClickTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoClickTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoComponentHitTarget> @ 1496790e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoComponentHitTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoComponentHitTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoComponentHitTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGizmoComponentHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoComponentWorldTransformSource> @ 1496791e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoComponentWorldTransformSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoComponentWorldTransformSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoComponentWorldTransformSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoComponentWorldTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    pUVar1[2].field_0x8 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementBase> @ 1496792c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementBase::GetPrivateStaticClass();
  pUVar3 = (UGizmoElementBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGizmoElementBase *)0x0) {
    pUVar3 = UGizmoElementBase::UGizmoElementBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementBox> @ 149679360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementBox>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementBox::GetPrivateStaticClass();
  this = (UGizmoElementBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementBox__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1].bEnabled = false;
    uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    *(double *)&this[1].PartIdentifier = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = uVar1;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr =
         (FWeakObjectPtr)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
    *(double *)&this[1].MeshRenderAttributes.HoverMaterial.bOverridesChildState =
         UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].MeshRenderAttributes.InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar1;
    this[1].MeshRenderAttributes.SelectMaterial.Value.WeakPtr =
         (FWeakObjectPtr)UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementCircle> @ 149679490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementCircle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementCircleBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementCircle::GetPrivateStaticClass();
  this = (UGizmoElementCircleBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementCircleBase *)0x0) {
    UGizmoElementCircleBase::UGizmoElementCircleBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10001;
    this->_padding_ = (longlong)&___7UGizmoElementCircle__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementCircleBase> @ 149679550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementCircleBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementCircleBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementCircleBase::GetPrivateStaticClass();
  pUVar3 = (UGizmoElementCircleBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGizmoElementCircleBase *)0x0) {
    pUVar3 = UGizmoElementCircleBase::UGizmoElementCircleBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementCone> @ 1496795f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementCone>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementCone::GetPrivateStaticClass();
  this = (UGizmoElementBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementCone__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PartIdentifier = 0x3f800000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0x3f000000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = 0x20;
    this[1].MeshRenderAttributes.Material.bOverridesChildState = false;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementCylinder> @ 149679700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementCylinder>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementCylinder::GetPrivateStaticClass();
  this = (UGizmoElementBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementCylinder__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = true;
    this[1].bEnabledForSubduedState = true;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PartIdentifier = 0x3f800000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0x3f000000;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber = 0x20;
    this[1].MeshRenderAttributes.Material.bOverridesChildState = false;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr.ObjectIndex = 0x41200000;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr.ObjectSerialNumber = 0x40a00000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementGroup> @ 149679830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementGroup>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementLineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementGroup::GetPrivateStaticClass();
  this = (UGizmoElementLineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UGizmoElementGroup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementGroupBase> @ 1496798f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementGroupBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementLineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementGroupBase::GetPrivateStaticClass();
  this = (UGizmoElementLineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementHitMultiTarget> @ 1496799b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoElementHitMultiTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementHitMultiTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoElementHitMultiTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoElementHitMultiTarget::_vftable__for__IGizmoClickMultiTarget__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementHitTarget> @ 149679a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementHitTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementHitTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoElementHitTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGizmoElementHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementLineBase> @ 149679b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementLineBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementLineBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementLineBase::GetPrivateStaticClass();
  pUVar3 = (UGizmoElementLineBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGizmoElementLineBase *)0x0) {
    pUVar3 = UGizmoElementLineBase::UGizmoElementLineBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementLineStrip> @ 149679bf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementLineStrip>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementLineBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementLineStrip::GetPrivateStaticClass();
  this = (UGizmoElementLineBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementRectangle> @ 149679d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementRectangle>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementLineBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementRectangle::GetPrivateStaticClass();
  this = (UGizmoElementLineBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementLineBase *)0x0) {
    UGizmoElementLineBase::UGizmoElementLineBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementRectangle__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x10001;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementSphere> @ 149679e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementSphere>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementSphere::GetPrivateStaticClass();
  this = (UGizmoElementBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementSphere__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x20;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementTorus> @ 149679f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementTorus>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoElementCircleBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoElementTorus::GetPrivateStaticClass();
  this = (UGizmoElementCircleBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementCircleBase *)0x0) {
    UGizmoElementCircleBase::UGizmoElementCircleBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 8;
    this->_padding_ = (longlong)&___7UGizmoElementTorus__6B_;
    this[1]._padding_ = 0x4014000000000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoElementTriangleList> @ 14967a010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoElementTriangleList>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGizmoElementBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGizmoElementTriangleList::GetPrivateStaticClass();
  this = (UGizmoElementBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoElementBase *)0x0) {
    UGizmoElementBase::UGizmoElementBase(this,param_1);
    this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectSerialNumber =
         0x3ff0000000000000;
    *(undefined8 *)&this[1].MeshRenderAttributes.HoverMaterial.bOverridesChildState =
         0x3ff0000000000000;
    this[1].bEnabled = false;
    this[1].bEnabledForPerspectiveProjection = false;
    this[1].bEnabledForOrthographicProjection = false;
    this[1].bEnabledForDefaultState = false;
    this[1].bEnabledForHoveringState = false;
    this[1].bEnabledForInteractingState = false;
    this[1].bEnabledForSelectedState = false;
    this[1].bEnabledForSubduedState = false;
    this[1].PartIdentifier = 0;
    this[1].MeshRenderAttributes.Material.Value.WeakPtr.ObjectIndex = 0;
    this[1].MeshRenderAttributes.HoverMaterial.Value.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].MeshRenderAttributes.InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         0;
    this[1].MeshRenderAttributes.SelectMaterial.Value.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].MeshRenderAttributes.SelectMaterial.bOverridesChildState = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoFloatParameterSource> @ 14967a130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoFloatParameterSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoFloatParameterSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoFloatParameterSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoLambdaHitTarget> @ 14967a1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoLambdaHitTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoLambdaHitTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoLambdaHitTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGizmoLambdaHitTarget::_vftable__for__IGizmoClickTarget__;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoLambdaStateTarget> @ 14967a2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoLambdaStateTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoLambdaStateTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoLambdaStateTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGizmoLambdaStateTarget::_vftable__for__IGizmoStateTarget__;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoLineHandleComponent> @ 14967a3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoLineHandleComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoBaseComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoLineHandleComponent::GetPrivateStaticClass();
  this = (UGizmoBaseComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseComponent *)0x0) {
    UGizmoBaseComponent::UGizmoBaseComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGizmoLineHandleComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGizmoLineHandleComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoLocalFloatParameterSource> @ 14967a500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoLocalFloatParameterSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoLocalFloatParameterSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoLocalFloatParameterSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoLocalFloatParameterSource::_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoNilStateTarget> @ 14967a5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoNilStateTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoNilStateTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UGizmoNilStateTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGizmoNilStateTarget::_vftable__for__IGizmoStateTarget__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoObjectModifyStateTarget> @ 14967a690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoObjectModifyStateTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoObjectModifyStateTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoObjectModifyStateTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoObjectModifyStateTarget::_vftable__for__IGizmoStateTarget__;
    FText::FText((FText *)&pUVar1[1].field_0x10);
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoPlaneScaleParameterSource> @ 14967a760

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoPlaneScaleParameterSource>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UGizmoBaseVec2ParameterSource *this;
  
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = UGizmoPlaneScaleParameterSource::GetPrivateStaticClass();
  this = (UGizmoBaseVec2ParameterSource *)
         StaticAllocateObject
                   (pUVar12,pUVar11,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoPlaneScaleParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoPlaneScaleParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[1]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_38_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)puVar1 = UGizmoPlaneScaleParameterSource::<lambda_39_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnParameterChanged.field_0x8 = 0;
    this[2]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[2]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_40_>::<lambda_invoker_cdecl>;
    if (&this[2]._padding_ != (longlong *)0x0) {
      this[2]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[2].OnParameterChanged.field_0x10 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_AU__TVector2_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[3]._padding_ =
         (longlong)UGizmoPlaneScaleParameterSource::<lambda_41_>::<lambda_invoker_cdecl>;
    if (&this[3]._padding_ != (longlong *)0x0) {
      *(code **)&this[2].OnParameterChanged.field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&>
           ::Call;
    }
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].OnParameterChanged = 0;
    *(undefined8 *)&this[3].OnParameterChanged.field_0x8 = 0;
    *(undefined4 *)&this[3].OnParameterChanged.field_0x10 = 0x3ca3d70a;
    *(undefined2 *)&this[3].OnParameterChanged.field_0x14 = 0;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[4]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[4]._padding_ = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged.field_0x10 = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[6]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[6]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[6].OnParameterChanged = auVar8;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[6].OnParameterChanged.field_0x10 = auVar9;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoPlaneTranslationParameterSource> @ 14967a770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoPlaneTranslationParameterSource>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UGizmoBaseVec2ParameterSource *this;
  
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = UGizmoPlaneTranslationParameterSource::GetPrivateStaticClass();
  this = (UGizmoBaseVec2ParameterSource *)
         StaticAllocateObject
                   (pUVar12,pUVar11,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoPlaneTranslationParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &UGizmoPlaneTranslationParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ =
         (longlong)UGizmoPlaneTranslationParameterSource::<lambda_29_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)puVar1 = UGizmoPlaneTranslationParameterSource::<lambda_30_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnParameterChanged.field_0x8 = 0;
    this[2]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[2]._padding_ =
         (longlong)UGizmoPlaneTranslationParameterSource::<lambda_31_>::<lambda_invoker_cdecl>;
    if (&this[2]._padding_ != (longlong *)0x0) {
      this[2]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[2].OnParameterChanged.field_0x18 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].OnParameterChanged.field_0x10 = 1;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[5]._padding_ = auVar4._8_8_;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged.field_0x10 = auVar7;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[6]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[6]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar9._8_8_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoRectangleComponent> @ 14967a780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoRectangleComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGizmoBaseComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoRectangleComponent::GetPrivateStaticClass();
  this = (UGizmoBaseComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseComponent *)0x0) {
    UGizmoBaseComponent::UGizmoBaseComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UGizmoRectangleComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGizmoRectangleComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGizmoRectangleComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41a00000;
    *(undefined4 *)&this[1]._padding_ = 0x41a00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined1 *)&this[1]._padding_ = 0xf;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoRenderMultiTarget> @ 14967a8f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoRenderMultiTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoRenderMultiTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoRenderMultiTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoRenderTarget> @ 14967a9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoRenderTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoRenderTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoRenderTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoScaledAndUnscaledTransformSources> @ 14967aa50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoScaledAndUnscaledTransformSources>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoScaledAndUnscaledTransformSources::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoScaledAndUnscaledTransformSources::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoScaledAndUnscaledTransformSources::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoScaledTransformSource> @ 14967ab30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoScaledTransformSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoScaledTransformSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoScaledTransformSource::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoScaledTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    FSeparateScaleProvider::FSeparateScaleProvider((FSeparateScaleProvider *)&pUVar1[2].field_0x10);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoStateTarget> @ 14967ac10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoStateTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoStateTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoStateTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoTransformChangeStateTarget> @ 14967acc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoTransformChangeStateTarget>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UGizmoTransformChangeStateTarget::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &UGizmoTransformChangeStateTarget::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UGizmoTransformChangeStateTarget::_vftable__for__IGizmoStateTarget__;
    FText::FText((FText *)&pUVar4[1].field_0x10);
    *(undefined8 *)&pUVar4[1].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 2) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[6].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[6].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[6].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 7) = (double)fVar3;
    *(undefined8 *)&pUVar4[7].field_0x8 = 0;
    *(undefined8 *)&pUVar4[7].field_0x10 = 0;
    *(undefined8 *)&pUVar4[7].field_0x18 = 0;
    *(undefined8 *)&pUVar4[7].field_0x20 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoTransformProxyTransformSource> @ 14967acd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoTransformProxyTransformSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoTransformProxyTransformSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGizmoTransformProxyTransformSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoTransformProxyTransformSource::_vftable__for__IGizmoTransformSource__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoTransformSource> @ 14967adc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoTransformSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoTransformSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoTransformSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoUniformScaleParameterSource> @ 14967ae70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGizmoUniformScaleParameterSource>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UGizmoBaseVec2ParameterSource *this;
  
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = UGizmoUniformScaleParameterSource::GetPrivateStaticClass();
  this = (UGizmoBaseVec2ParameterSource *)
         StaticAllocateObject
                   (pUVar12,pUVar11,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&UGizmoUniformScaleParameterSource::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGizmoUniformScaleParameterSource::_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ =
         (longlong)UGizmoUniformScaleParameterSource::<lambda_34_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    *(code **)puVar1 = UGizmoUniformScaleParameterSource::<lambda_35_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].OnParameterChanged = 0x3ca3d70a;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged.field_0x10 = auVar5;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[5]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[5]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar9;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoVec2ParameterSource> @ 14967ae80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoVec2ParameterSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoVec2ParameterSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGizmoVec2ParameterSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGizmoViewContext> @ 14967af30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGizmoViewContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGizmoViewContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UGizmoViewContext::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UGizmoViewContext::_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
    UGizmoViewContext::FMatrices::FMatrices((FMatrices *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[0x11].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&pUVar1[0x11].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputBehavior> @ 14967b010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInputBehavior>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputBehavior::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInputBehavior__6B_;
    *(undefined4 *)(pUVar1 + 1) = 100;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputBehaviorSet> @ 14967b0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInputBehaviorSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputBehaviorSet::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInputBehaviorSet__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputBehaviorSource> @ 14967b1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInputBehaviorSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputBehaviorSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInputBehaviorSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputRouter> @ 14967b250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInputRouter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputRouter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UInputRouter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    FInputDeviceState::FInputDeviceState((FInputDeviceState *)&pUVar1[4].field_0x10);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInteractionMechanic> @ 14967b360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInteractionMechanic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInteractionMechanic::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInteractionMechanic__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIntervalGizmo> @ 14967b410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIntervalGizmo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIntervalGizmo::GetPrivateStaticClass();
  this = (UInteractiveGizmo *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this,param_1);
    this->_padding_ = (longlong)&UIntervalGizmo::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UIntervalGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[7]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[7]._padding_ = (longlong)UIntervalGizmo::<lambda_51_>::<lambda_invoker_cdecl>;
    if (&this[7]._padding_ != (longlong *)0x0) {
      this[7]._padding_ =
           (longlong)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[8]._padding_ = (longlong)UIntervalGizmo::<lambda_52_>::<lambda_invoker_cdecl>;
    if (&this[8]._padding_ != (longlong *)0x0) {
      this[8]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined4 *)&this[8].InputBehaviors.field0_0x0 = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[8].InputBehaviors.field0_0x0 + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIntervalGizmoBuilder> @ 14967b420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIntervalGizmoBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIntervalGizmoBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UIntervalGizmoBuilder__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocalInputBehaviorSource> @ 14967b4f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocalInputBehaviorSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocalInputBehaviorSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &ULocalInputBehaviorSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &ULocalInputBehaviorSource::_vftable__for__IInputBehaviorSource__
    ;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &___7__TFunction_OwnedObject_P6A__TXZ_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar1[1].field_0x20 =
         ULocalInputBehaviorSource::<lambda_24_>::<lambda_invoker_cdecl>;
    if (&pUVar1[1].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar1[1].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UInputBehaviorSet_const_*>::Call;
    }
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshSurfacePointTool> @ 14967b5e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshSurfacePointTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshSurfacePointTool::GetPrivateStaticClass();
  pUVar3 = (UMeshSurfacePointTool *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMeshSurfacePointTool *)0x0) {
    pUVar3 = UMeshSurfacePointTool::UMeshSurfacePointTool(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshSurfacePointToolBuilder> @ 14967b680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshSurfacePointToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshSurfacePointToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
              ((UInteractiveToolWithToolTargetsBuilder *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMeshSurfacePointToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPlanePositionGizmo> @ 14967b730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlanePositionGizmo>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UInteractiveGizmo *this;
  UInteractiveGizmo *pUVar8;
  
  pUVar8 = (UInteractiveGizmo *)0x0;
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = UPlanePositionGizmo::GetPrivateStaticClass();
  this = (UInteractiveGizmo *)
         StaticAllocateObject
                   (pUVar7,pUVar6,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IClickDragBehaviorTarget__;
    this[1]._padding_ = (longlong)&UPlanePositionGizmo::_vftable__for__IHoverBehaviorTarget__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 2) = 0;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[3]._padding_ = (longlong)UPlanePositionGizmo::<lambda_49_>::<lambda_invoker_cdecl>;
    if (&this[3]._padding_ != (longlong *)0x0) {
      this[2].InputBehaviors.field0_0x0.DebugPtr =
           (UInputBehaviorSet *)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[3]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UPlanePositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[4]._padding_ = (longlong)UPlanePositionGizmo::<lambda_50_>::<lambda_invoker_cdecl>;
    if (&this[4]._padding_ != (longlong *)0x0) {
      this[3]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    uVar1 = __real_3ff0000000000000;
    *(undefined1 *)&this[4]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0 = (TObjectPtr<UInputBehaviorSet>_u_0)0x3ff0000000000000;
    this[8]._padding_ = 0x3ff0000000000000;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined1 *)&this[10]._padding_ = 0;
    this[9]._padding_ = uVar2;
    this[9]._padding_ = uVar3;
    *(undefined4 *)&this[9]._padding_ = uVar4;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = uVar5;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    *(int *)&this[9].InputBehaviors.field0_0x0 = (int)uVar1;
    *(int *)((longlong)&this[9].InputBehaviors.field0_0x0 + 4) = (int)((ulonglong)uVar1 >> 0x20);
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[0xb]._padding_ = 0;
    pUVar8 = this;
  }
  return (UObject *)pUVar8;
}

// InternalVTableHelperCtorCaller<UPlanePositionGizmoBuilder> @ 14967b940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlanePositionGizmoBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPlanePositionGizmoBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPlanePositionGizmoBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URepositionableTransformGizmo> @ 14967b9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URepositionableTransformGizmo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCombinedTransformGizmo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URepositionableTransformGizmo::GetPrivateStaticClass();
  this = (UCombinedTransformGizmo *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCombinedTransformGizmo *)0x0) {
    UCombinedTransformGizmo::UCombinedTransformGizmo(this,param_1);
    *(undefined ***)this = &URepositionableTransformGizmo::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &URepositionableTransformGizmo::_vftable__for__IInputBehaviorSource__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)&this[1].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&this[1].field_0x18 =
         URepositionableTransformGizmo::<lambda_63_>::<lambda_invoker_cdecl>;
    if (&this[1].field_0x18 != (undefined1 *)0x0) {
      *(code **)(this + 1) =
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].ExplicitGridSize.field0_0x0._s_0.Z = 0.0;
    *(undefined ***)&this[1].bSnapToWorldGrid =
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[1].ExplicitGridSize.field0_0x0._s_0.X =
         (double)URepositionableTransformGizmo::<lambda_64_>::<lambda_invoker_cdecl>;
    if (&this[1].ExplicitGridSize != (TVector<double> *)0x0) {
      *(code **)&this[1].field_0x30 =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[1].bRotationGridSizeIsExplicit = 0;
    this[1].ExplicitRotationGridSize.Pitch = 0.0;
    this[1].ExplicitRotationGridSize.Yaw = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URepositionableTransformGizmoBuilder> @ 14967bb40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URepositionableTransformGizmoBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCombinedTransformGizmoBuilder *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URepositionableTransformGizmoBuilder::GetPrivateStaticClass();
  this = (UCombinedTransformGizmoBuilder *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCombinedTransformGizmoBuilder *)0x0) {
    UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder(this,param_1);
    this->_padding_ = (longlong)&___7URepositionableTransformGizmoBuilder__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScalableSphereGizmo> @ 14967bbf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UScalableSphereGizmo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScalableSphereGizmo::GetPrivateStaticClass();
  this = (UInteractiveGizmo *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UScalableSphereGizmo::_vftable__for__UObject__;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this->_padding_ = (longlong)&UScalableSphereGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7UScalableSphereGizmo__6B_;
    *(undefined4 *)&this[2]._padding_ = 0x41400000;
    FText::FText((FText *)&this[2]._padding_);
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScalableSphereGizmoBuilder> @ 14967bce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UScalableSphereGizmoBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScalableSphereGizmoBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UScalableSphereGizmoBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScalableSphereGizmoInputBehavior> @ 14967bd90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UScalableSphereGizmoInputBehavior>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UAnyButtonInputBehavior *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UScalableSphereGizmoInputBehavior::GetPrivateStaticClass();
  this = (UAnyButtonInputBehavior *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnyButtonInputBehavior *)0x0) {
    UAnyButtonInputBehavior::UAnyButtonInputBehavior(this,param_1);
    this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USimpleLambdaInteractiveGizmoBuilder> @ 14967be80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USimpleLambdaInteractiveGizmoBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USimpleLambdaInteractiveGizmoBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USimpleLambdaInteractiveGizmoBuilder__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USimpleSingleClickGizmo> @ 14967bf40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USimpleSingleClickGizmo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USimpleSingleClickGizmo::GetPrivateStaticClass();
  this = (UInteractiveGizmo *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IClickBehaviorTarget__;
    this[1]._padding_ = (longlong)&USimpleSingleClickGizmo::_vftable__for__IHoverBehaviorTarget__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USingleClickTool> @ 14967c030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USingleClickTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USingleClickTool::GetPrivateStaticClass();
  this = (UInteractiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this,param_1);
    this->_padding_ = (longlong)&USingleClickTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USingleClickTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7USingleClickTool__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USingleClickToolBuilder> @ 14967c100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USingleClickToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USingleClickToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USingleClickToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USingleSelectionTool> @ 14967c1b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USingleSelectionTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USingleSelectionTool::GetPrivateStaticClass();
  this = (UInteractiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = (longlong)&___7USingleSelectionTool__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformProxy> @ 14967c280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTransformProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTransformProxy *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransformProxy::GetPrivateStaticClass();
  pUVar3 = (UTransformProxy *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UTransformProxy *)0x0) {
    pUVar3 = UTransformProxy::UTransformProxy(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UViewAdjustedStaticMeshGizmoComponent> @ 14967c320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UViewAdjustedStaticMeshGizmoComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UViewAdjustedStaticMeshGizmoComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)
         &UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)
         &UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UViewAdjustedStaticMeshGizmoComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntervalIntervalIntersection<float> @ 14967c460

void __cdecl
GizmoMath::IntervalIntervalIntersection<float>
          (float *param_1,float *param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  if (*param_2 <= param_1[1]) {
    if (*param_1 <= param_2[1]) {
      if (param_1[1] <= *param_2) {
        *param_3 = 1;
        fVar1 = param_1[1];
        *param_4 = fVar1;
        *param_5 = fVar1;
        return;
      }
      if (*param_1 < param_2[1]) {
        *param_3 = 2;
        fVar1 = *param_1;
        if (*param_1 <= *param_2) {
          fVar1 = *param_2;
        }
        *param_4 = fVar1;
        fVar1 = param_1[1];
        if (param_2[1] <= param_1[1]) {
          fVar1 = param_2[1];
        }
        *param_5 = fVar1;
        if (fVar1 != *param_4) {
          return;
        }
        *param_3 = 1;
        return;
      }
      *param_3 = 1;
      fVar1 = *param_1;
      *param_4 = fVar1;
      *param_5 = fVar1;
      return;
    }
  }
  *param_3 = 0;
  *param_4 = 3.4028235e+38;
  *param_5 = -3.4028235e+38;
  return;
}

// IntervalIntervalIntersection<double> @ 14967c510

void __cdecl
GizmoMath::IntervalIntervalIntersection<double>
          (double *param_1,double *param_2,int *param_3,double *param_4,double *param_5)

{
  double dVar1;
  
  if (*param_2 <= param_1[1]) {
    if (*param_1 <= param_2[1]) {
      if (param_1[1] <= *param_2) {
        *param_3 = 1;
        dVar1 = param_1[1];
        *param_4 = dVar1;
        *param_5 = dVar1;
        return;
      }
      if (*param_1 < param_2[1]) {
        *param_3 = 2;
        dVar1 = *param_1;
        if (*param_1 <= *param_2) {
          dVar1 = *param_2;
        }
        *param_4 = dVar1;
        dVar1 = param_1[1];
        if (param_2[1] <= param_1[1]) {
          dVar1 = param_2[1];
        }
        *param_5 = dVar1;
        if (dVar1 != *param_4) {
          return;
        }
        *param_3 = 1;
        return;
      }
      *param_3 = 1;
      dVar1 = *param_1;
      *param_4 = dVar1;
      *param_5 = dVar1;
      return;
    }
  }
  *param_3 = 0;
  *param_4 = 1.7976931348623157e+308;
  *param_5 = -1.7976931348623157e+308;
  return;
}

// IsObjectPtrEqual<UBrushBaseProperties,UObject_*,0> @ 14967c5d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBrushBaseProperties,UObject_*,0>
          (TObjectPtr<UBrushBaseProperties> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBrushBaseProperties *)0x0) {
    return (UBrushBaseProperties *)*param_2 == (UBrushBaseProperties *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UBrushBaseProperties *)*param_2;
}

// IsObjectPtrEqual<UGizmoElementBase,UGizmoElementBase_*,0> @ 14967c5f0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGizmoElementBase,UGizmoElementBase_*,0>
          (TObjectPtr<UGizmoElementBase> *param_1,UGizmoElementBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGizmoElementBase *)0x0) {
    return *param_2 == (UGizmoElementBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UInputBehavior,UInputBehavior_*,0> @ 14967c610

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UInputBehavior,UInputBehavior_*,0>
          (TObjectPtr<UInputBehavior> *param_1,UInputBehavior **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UInputBehavior *)0x0) {
    return *param_2 == (UInputBehavior *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<FBehaviorInfo,int,FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_> @ 14967c630

int __cdecl
AlgoImpl::
LowerBoundInternal<FBehaviorInfo,int,FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
          (FBehaviorInfo *param_1,int param_2,FBehaviorInfo *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FBehaviorInfo,TLess<void>_> param_5)

{
  int iVar1;
  UInputBehavior *pUVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      pUVar2 = (param_3->Behavior).field0_0x0.DebugPtr;
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      piVar4 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_res10);
      pUVar2 = param_1[iVar1].Behavior.field0_0x0.DebugPtr;
      piVar5 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_38);
      if (*piVar5 < *piVar4) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar6;
}

// LowerBoundInternal<FInputCaptureRequest,int,FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_> @ 14967c6d0

int __cdecl
AlgoImpl::
LowerBoundInternal<FInputCaptureRequest,int,FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
          (FInputCaptureRequest *param_1,int param_2,FInputCaptureRequest *param_3,
          FIdentityFunctor param_4,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = ::operator<(param_1 + iVar1,param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// MakeFlagsRange<enum_ETransformGizmoSubElements> @ 14967c750

TRange<ETransformGizmoSubElements> __cdecl
MakeFlagsRange<enum_ETransformGizmoSubElements>(ETransformGizmoSubElements param_1)

{
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (TRange<ETransformGizmoSubElements>)param_1;
}

// Merge<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_> @ 14967c760

void __cdecl
AlgoImpl::Merge<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
          (FBehaviorInfo *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FBehaviorInfo,TLess<void>_> param_5)

{
  UInputBehavior *pUVar1;
  void *pvVar2;
  TObjectPtr<UInputBehavior>_u_0 TVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FBehaviorInfo *pFVar11;
  int *piVar12;
  int *piVar13;
  FBehaviorInfo *pFVar14;
  FBehaviorInfo *pFVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  FBehaviorInfo *pFVar21;
  FBehaviorInfo *pFVar22;
  int local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  longlong local_48;
  FBehaviorInfo *pFVar15;
  
  if (0 < param_2) {
    local_68 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      local_48 = (longlong)param_2;
      iVar10 = 0;
      pFVar11 = param_1 + local_48;
      if (0 < param_2 - local_68) {
        uVar18 = param_2 - local_68;
        do {
          iVar20 = (uVar18 >> 1) + iVar10;
          pUVar1 = param_1[(longlong)iVar20 + (longlong)local_68].Behavior.field0_0x0.DebugPtr;
          piVar12 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_64);
          pUVar1 = (pFVar11->Behavior).field0_0x0.DebugPtr;
          piVar13 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_60);
          if (*piVar12 <= *piVar13) {
            iVar10 = iVar20 + (uVar18 & 1);
          }
          uVar19 = uVar18 >> 1;
          uVar18 = uVar18 >> 1;
        } while (uVar19 != 0);
      }
      lVar9 = local_48;
      local_68 = local_68 + iVar10;
      if (param_2 <= local_68) {
        return;
      }
      iVar10 = 0;
      iVar20 = 0;
      pFVar11 = param_1 + local_68;
      uVar18 = param_3 - param_2;
      if (0 < (int)uVar18) {
        do {
          pUVar1 = (pFVar11->Behavior).field0_0x0.DebugPtr;
          uVar19 = uVar18 >> 1;
          piVar12 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_5c);
          pUVar1 = param_1[(int)(uVar19 + iVar10) + lVar9].Behavior.field0_0x0.DebugPtr;
          piVar13 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_58);
          iVar20 = iVar10;
          if (*piVar13 < *piVar12) {
            iVar20 = uVar19 + iVar10 + (uVar18 & 1);
          }
          uVar18 = uVar19;
          iVar10 = iVar20;
        } while (uVar19 != 0);
      }
      iVar17 = (iVar20 - local_68) + param_2;
      iVar10 = param_2 - local_68;
      if ((iVar10 != 0) && (iVar10 < iVar17)) {
        pFVar14 = pFVar11 + iVar10;
        pFVar21 = pFVar11;
        pFVar15 = pFVar11 + iVar10;
        do {
          while( true ) {
            pFVar16 = pFVar14 + 1;
            pFVar22 = pFVar21 + 1;
            pvVar2 = pFVar14->Source;
            TVar3 = (pFVar21->Behavior).field0_0x0;
            pvVar4 = pFVar21->Source;
            pFVar5 = (pFVar21->Group).Data.AllocatorInstance.Data;
            iVar7 = (pFVar21->Group).Data.ArrayNum;
            iVar8 = (pFVar21->Group).Data.ArrayMax;
            (pFVar21->Behavior).field0_0x0 = (pFVar14->Behavior).field0_0x0;
            pFVar21->Source = pvVar2;
            iVar10 = (pFVar14->Group).Data.ArrayNum;
            iVar6 = (pFVar14->Group).Data.ArrayMax;
            (pFVar21->Group).Data.AllocatorInstance.Data =
                 (pFVar14->Group).Data.AllocatorInstance.Data;
            (pFVar21->Group).Data.ArrayNum = iVar10;
            (pFVar21->Group).Data.ArrayMax = iVar6;
            (pFVar14->Behavior).field0_0x0 = TVar3;
            pFVar14->Source = pvVar4;
            (pFVar14->Group).Data.AllocatorInstance.Data = pFVar5;
            (pFVar14->Group).Data.ArrayNum = iVar7;
            (pFVar14->Group).Data.ArrayMax = iVar8;
            pFVar21 = pFVar22;
            if (pFVar16 == pFVar11 + iVar17) break;
            pFVar14 = pFVar16;
            if (pFVar22 == pFVar15) {
              pFVar15 = pFVar16;
            }
          }
          pFVar14 = pFVar15;
        } while (pFVar22 != pFVar15);
      }
      local_68 = local_68 + 1 + iVar20;
      param_2 = param_2 + iVar20;
    } while (local_68 < param_2);
  }
  return;
}

// Merge<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_> @ 14967c9c0

void __cdecl
AlgoImpl::
Merge<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
          (FInputCaptureRequest *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FInputCaptureRequest,TLess<void>_> param_5)

{
  UInputBehavior *pUVar1;
  double dVar2;
  void *pvVar3;
  void *pvVar4;
  EInputCaptureRequestType EVar5;
  EInputCaptureSide EVar6;
  EInputCaptureRequestType EVar7;
  EInputCaptureSide EVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FInputCaptureRequest *pFVar12;
  FInputCaptureRequest *pFVar14;
  FInputCaptureRequest *pFVar15;
  FInputCaptureRequest *pFVar16;
  FInputCaptureRequest *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  FInputCaptureRequest *pFVar13;
  
  if (0 < param_2) {
    iVar18 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar10 = 0;
      if (0 < param_2 - iVar18) {
        uVar19 = param_2 - iVar18;
        do {
          iVar21 = (uVar19 >> 1) + iVar10;
          bVar9 = ::operator<(param_1 + param_2,param_1 + (longlong)iVar21 + (longlong)iVar18);
          if (!bVar9) {
            iVar10 = iVar21 + (uVar19 & 1);
          }
          uVar20 = uVar19 >> 1;
          uVar19 = uVar19 >> 1;
        } while (uVar20 != 0);
      }
      iVar18 = iVar18 + iVar10;
      if (param_2 <= iVar18) {
        return;
      }
      iVar10 = 0;
      iVar21 = 0;
      pFVar15 = param_1 + iVar18;
      uVar19 = param_3 - param_2;
      if (0 < (int)uVar19) {
        do {
          uVar20 = uVar19 >> 1;
          bVar9 = ::operator<(param_1 + (longlong)(int)(uVar20 + iVar10) + (longlong)param_2,pFVar15
                             );
          iVar21 = iVar10;
          if (bVar9) {
            iVar21 = uVar20 + iVar10 + (uVar19 & 1);
          }
          uVar19 = uVar20;
          iVar10 = iVar21;
        } while (uVar20 != 0);
      }
      iVar10 = (iVar21 - iVar18) + param_2;
      iVar11 = param_2 - iVar18;
      if ((iVar11 != 0) && (iVar11 < iVar10)) {
        pFVar12 = pFVar15 + iVar11;
        pFVar16 = pFVar15;
        pFVar13 = pFVar15 + iVar11;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar17 = pFVar16 + 1;
            EVar5 = pFVar12->Type;
            EVar6 = pFVar12->Side;
            pUVar1 = pFVar16->Source;
            EVar7 = pFVar16->Type;
            EVar8 = pFVar16->Side;
            dVar2 = pFVar16->HitDepth;
            pvVar3 = pFVar16->Owner;
            pFVar16->Source = pFVar12->Source;
            pFVar16->Type = EVar5;
            pFVar16->Side = EVar6;
            pvVar4 = pFVar12->Owner;
            pFVar16->HitDepth = pFVar12->HitDepth;
            pFVar16->Owner = pvVar4;
            pFVar12->Source = pUVar1;
            pFVar12->Type = EVar7;
            pFVar12->Side = EVar8;
            pFVar12->HitDepth = dVar2;
            pFVar12->Owner = pvVar3;
            pFVar16 = pFVar17;
            if (pFVar14 == pFVar15 + iVar10) break;
            pFVar12 = pFVar14;
            if (pFVar17 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar17 != pFVar13);
      }
      param_2 = param_2 + iVar21;
      iVar18 = iVar18 + 1 + iVar21;
    } while (iVar18 < param_2);
  }
  return;
}

// NewObject<UAxisAngleGizmoBuilder> @ 14967cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAxisAngleGizmoBuilder * __cdecl NewObject<UAxisAngleGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UAxisAngleGizmoBuilder *)pUVar2;
}

// NewObject<UAxisPositionGizmoBuilder> @ 14967cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAxisPositionGizmoBuilder * __cdecl NewObject<UAxisPositionGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UAxisPositionGizmoBuilder *)pUVar2;
}

// NewObject<UBrushBaseProperties> @ 14967cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBrushBaseProperties * __cdecl
NewObject<UBrushBaseProperties>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UBrushBaseProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBrushBaseProperties::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UBrushBaseProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UBrushStampIndicatorBuilder> @ 14967cde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBrushStampIndicatorBuilder * __cdecl NewObject<UBrushStampIndicatorBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UBrushStampIndicatorBuilder *)pUVar2;
}

// NewObject<UClickDragTool> @ 14967ce80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClickDragTool * __cdecl NewObject<UClickDragTool>(UObject *param_1)

{
  UClass *pUVar1;
  UClickDragTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UClickDragTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UClickDragTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCombinedTransformGizmoBuilder> @ 14967cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCombinedTransformGizmoBuilder * __cdecl NewObject<UCombinedTransformGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UCombinedTransformGizmoBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCombinedTransformGizmoBuilder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCombinedTransformGizmoContextObject> @ 14967cfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCombinedTransformGizmoContextObject * __cdecl
NewObject<UCombinedTransformGizmoContextObject>(UObject *param_1)

{
  UClass *pUVar1;
  UCombinedTransformGizmoContextObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCombinedTransformGizmoContextObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCombinedTransformGizmoContextObject *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoAxisIntervalParameterSource> @ 14967d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoAxisIntervalParameterSource * __cdecl
NewObject<UGizmoAxisIntervalParameterSource>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoAxisIntervalParameterSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoAxisIntervalParameterSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoAxisIntervalParameterSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoComponentWorldTransformSource> @ 14967d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoComponentWorldTransformSource * __cdecl
NewObject<UGizmoComponentWorldTransformSource>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoComponentWorldTransformSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoComponentWorldTransformSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoComponentWorldTransformSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoElementHitMultiTarget> @ 14967d1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoElementHitMultiTarget * __cdecl NewObject<UGizmoElementHitMultiTarget>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoElementHitMultiTarget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoElementHitMultiTarget::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoElementHitMultiTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoElementHitTarget> @ 14967d240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoElementHitTarget * __cdecl NewObject<UGizmoElementHitTarget>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoElementHitTarget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoElementHitTarget::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoElementHitTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoLocalVec2ParameterSource> @ 14967d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoLocalVec2ParameterSource * __cdecl NewObject<UGizmoLocalVec2ParameterSource>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoLocalVec2ParameterSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoLocalVec2ParameterSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoScaledAndUnscaledTransformSources> @ 14967d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoScaledAndUnscaledTransformSources * __cdecl
NewObject<UGizmoScaledAndUnscaledTransformSources>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoScaledAndUnscaledTransformSources *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoScaledAndUnscaledTransformSources::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoScaledAndUnscaledTransformSources *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoTransformChangeStateTarget> @ 14967d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoTransformChangeStateTarget * __cdecl
NewObject<UGizmoTransformChangeStateTarget>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoTransformChangeStateTarget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoTransformChangeStateTarget::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoTransformChangeStateTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoTransformProxyTransformSource> @ 14967d4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoTransformProxyTransformSource * __cdecl
NewObject<UGizmoTransformProxyTransformSource>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoTransformProxyTransformSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoTransformProxyTransformSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoTransformProxyTransformSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGizmoViewContext> @ 14967d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoViewContext * __cdecl NewObject<UGizmoViewContext>(UObject *param_1)

{
  UClass *pUVar1;
  UGizmoViewContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoViewContext::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGizmoViewContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInputBehaviorSet> @ 14967d600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputBehaviorSet * __cdecl
NewObject<UInputBehaviorSet>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInputBehaviorSet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UInputBehaviorSet::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInputBehaviorSet *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInteractiveGizmo> @ 14967d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveGizmo * __cdecl
NewObject<UInteractiveGizmo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInteractiveGizmo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UInteractiveGizmo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UIntervalGizmo> @ 14967d7f0

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

UIntervalGizmo * __cdecl NewObject<UIntervalGizmo>(UObject *param_1)

{
  UClass *pUVar1;
  UIntervalGizmo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UIntervalGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UIntervalGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULocalTwoAxisPropertyEditInputBehavior> @ 14967d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULocalTwoAxisPropertyEditInputBehavior * __cdecl
NewObject<ULocalTwoAxisPropertyEditInputBehavior>(UObject *param_1)

{
  UClass *pUVar1;
  ULocalTwoAxisPropertyEditInputBehavior *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_ULocalTwoAxisPropertyEditInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULocalTwoAxisPropertyEditInputBehavior *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMeshSurfacePointTool> @ 14967d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeshSurfacePointTool * __cdecl NewObject<UMeshSurfacePointTool>(UObject *param_1)

{
  UClass *pUVar1;
  UMeshSurfacePointTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMeshSurfacePointTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMeshSurfacePointTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPlanePositionGizmo> @ 14967d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPlanePositionGizmo * __cdecl NewObject<UPlanePositionGizmo>(UObject *param_1)

{
  UClass *pUVar1;
  UPlanePositionGizmo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPlanePositionGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPlanePositionGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPlanePositionGizmoBuilder> @ 14967da70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPlanePositionGizmoBuilder * __cdecl NewObject<UPlanePositionGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPlanePositionGizmoBuilder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UPlanePositionGizmoBuilder *)pUVar2;
}

// NewObject<URepositionableTransformGizmo> @ 14967db10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URepositionableTransformGizmo * __cdecl NewObject<URepositionableTransformGizmo>(UObject *param_1)

{
  UClass *pUVar1;
  URepositionableTransformGizmo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URepositionableTransformGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URepositionableTransformGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<URepositionableTransformGizmoBuilder> @ 14967dbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URepositionableTransformGizmoBuilder * __cdecl
NewObject<URepositionableTransformGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  URepositionableTransformGizmoBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URepositionableTransformGizmoBuilder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URepositionableTransformGizmoBuilder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UScalableSphereGizmo> @ 14967dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UScalableSphereGizmo * __cdecl NewObject<UScalableSphereGizmo>(UObject *param_1)

{
  UClass *pUVar1;
  UScalableSphereGizmo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UScalableSphereGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UScalableSphereGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UScalableSphereGizmoInputBehavior> @ 14967dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UScalableSphereGizmoInputBehavior * __cdecl
NewObject<UScalableSphereGizmoInputBehavior>(UObject *param_1)

{
  UClass *pUVar1;
  UScalableSphereGizmoInputBehavior *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UScalableSphereGizmoInputBehavior::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UScalableSphereGizmoInputBehavior *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USimpleLambdaInteractiveGizmoBuilder> @ 14967dd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USimpleLambdaInteractiveGizmoBuilder * __cdecl
NewObject<USimpleLambdaInteractiveGizmoBuilder>(UObject *param_1)

{
  UClass *pUVar1;
  USimpleLambdaInteractiveGizmoBuilder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USimpleLambdaInteractiveGizmoBuilder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USimpleLambdaInteractiveGizmoBuilder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USingleClickInputBehavior> @ 14967de30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USingleClickInputBehavior * __cdecl NewObject<USingleClickInputBehavior>(UObject *param_1)

{
  UClass *pUVar1;
  USingleClickInputBehavior *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USingleClickInputBehavior *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USingleClickTool> @ 14967ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USingleClickTool * __cdecl NewObject<USingleClickTool>(UObject *param_1)

{
  UClass *pUVar1;
  USingleClickTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USingleClickTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USingleClickTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UViewAdjustedStaticMeshGizmoComponent> @ 14967df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __cdecl
NewObject<UViewAdjustedStaticMeshGizmoComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UViewAdjustedStaticMeshGizmoComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UViewAdjustedStaticMeshGizmoComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UViewAdjustedStaticMeshGizmoComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RayCircleIntersection<double> @ 14967e010

bool __cdecl
IntersectionUtil::RayCircleIntersection<double>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,double param_4
          ,TVector<double> *param_5,FLinearIntersection *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TInterval1<double> TVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_5->field0_0x0)._s_0.X;
  dVar5 = (param_5->field0_0x0)._s_0.Y;
  dVar10 = (param_5->field0_0x0)._s_0.Z;
  dVar9 = dVar1 * dVar5 + dVar2 * dVar4 + dVar3 * dVar10;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar7 = (param_5->field0_0x0)._s_0.X;
    dVar8 = (param_5->field0_0x0)._s_0.Y;
    dVar9 = (param_5->field0_0x0)._s_0.Z;
    dVar5 = dVar5 * (param_3->field0_0x0)._s_0.Y + dVar4 * (param_3->field0_0x0)._s_0.X +
            dVar10 * (param_3->field0_0x0)._s_0.Z;
    dVar4 = (param_1->field0_0x0)._s_0.X;
    dVar5 = ((dVar5 * dVar8 - (param_1->field0_0x0)._s_0.Y) * dVar8 +
             (dVar5 * dVar7 - dVar4) * dVar7 +
            (dVar5 * dVar9 - (param_1->field0_0x0)._s_0.Z) * dVar9) /
            (dVar1 * dVar8 + dVar2 * dVar7 + dVar3 * dVar9);
    if (0.0 <= dVar5) {
      dVar10 = (dVar1 * dVar5 + (param_1->field0_0x0)._s_0.Y) - (param_3->field0_0x0)._s_0.Y;
      dVar1 = (dVar2 * dVar5 + dVar4) - (param_3->field0_0x0)._s_0.X;
      dVar2 = (dVar3 * dVar5 + (param_1->field0_0x0)._s_0.Z) - (param_3->field0_0x0)._s_0.Z;
      if (dVar10 * dVar10 + dVar1 * dVar1 + dVar2 * dVar2 <= param_4 * param_4) {
        TVar6.Max._0_4_ = SUB84(dVar5,0);
        TVar6.Min = dVar5;
        TVar6.Max._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
        param_6->parameter = TVar6;
        param_6->intersects = true;
        param_6->numIntersections = 1;
        return true;
      }
      param_6->intersects = false;
      param_6->numIntersections = 0;
      return false;
    }
  }
  param_6->intersects = false;
  param_6->numIntersections = 0;
  return false;
}

// RayConeIntersection<float> @ 14967e200

void __cdecl
GizmoMath::RayConeIntersection<float>
          (TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4,
          TVector<double> *param_5,TVector<double> *param_6,bool *param_7,float *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_5->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_5->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_5->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_6->field0_0x0)._s_0.Y;
  dVar5 = (param_6->field0_0x0)._s_0.Z;
  dVar6 = (param_6->field0_0x0)._s_0.X;
  fVar17 = param_3 * param_3;
  fVar15 = (float)(dVar1 * dVar4 + dVar3 * dVar6 + dVar2 * dVar5);
  fVar16 = fVar15 * fVar15 - fVar17;
  fVar14 = (float)(dVar1 * dVar8 + dVar3 * dVar7 + dVar2 * dVar9);
  fVar13 = fVar14 * fVar15 - (float)(dVar4 * dVar8 + dVar6 * dVar7 + dVar5 * dVar9) * fVar17;
  if (__real_322bcc77 < (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar17 = fVar13 * fVar13 -
             (fVar14 * fVar14 - (float)(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9) * fVar17) *
             fVar16;
    if (__real_322bcc77 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (fVar17 < 0.0) goto LAB_14967e522;
      fVar12 = ((float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000) - SQRT(fVar17)) /
               fVar16;
      cVar10 = 0.0 <= fVar12 * fVar15 + fVar14;
      if ((bool)cVar10) {
        param_5._0_4_ = fVar12;
      }
      uVar11 = (ulonglong)(byte)cVar10;
      fVar16 = (SQRT(fVar17) - fVar13) / fVar16;
      if (0.0 <= fVar16 * fVar15 + fVar14) {
        cVar10 = cVar10 + '\x01';
        *(float *)((longlong)&param_5 + uVar11 * 4) = fVar16;
      }
      if (cVar10 == '\x02') {
        fVar13 = param_5._4_4_;
        if (param_5._4_4_ < param_5._0_4_) {
          fVar13 = param_5._0_4_;
          param_5._0_4_ = param_5._4_4_;
        }
      }
      else if ((cVar10 != '\x01') || (fVar13 = __real_7f7fffff, fVar15 <= 0.0)) goto LAB_14967e522;
    }
    else {
      fVar13 = (float)((uint)(fVar13 / fVar16) ^ __xmm_80000000800000008000000080000000);
      param_5._0_4_ = fVar13;
      if (fVar13 * fVar15 + fVar14 < 0.0) goto LAB_14967e522;
    }
    fVar16 = fVar13;
    if ((float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar15 = param_5._0_4_;
      if (param_4 < fVar14) goto LAB_14967e522;
    }
    else {
      fVar17 = (param_4 - fVar14) * (__real_3f800000 / fVar15);
      fVar12 = (float)((uint)((__real_3f800000 / fVar15) * fVar14) ^
                      __xmm_80000000800000008000000080000000);
      fVar14 = fVar12;
      if (0.0 < fVar15) {
        fVar14 = fVar17;
        fVar17 = fVar12;
      }
      if ((fVar13 < fVar17) || (fVar14 < param_5._0_4_)) goto LAB_14967e522;
      fVar15 = fVar13;
      if ((fVar17 < fVar13) &&
         (fVar16 = param_5._0_4_, fVar15 = param_5._0_4_, param_5._0_4_ < fVar14)) {
        if (param_5._0_4_ <= fVar17) {
          param_5._0_4_ = fVar17;
        }
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
        fVar16 = param_5._0_4_;
        fVar15 = param_5._0_4_;
        if (param_5._0_4_ != fVar13) {
          fVar16 = fVar13;
        }
      }
    }
    if (0.0 <= fVar15) {
      *param_7 = true;
      *param_8 = fVar15;
      return;
    }
    if (0.0 <= fVar16) {
      *param_7 = true;
      *param_8 = fVar16;
      return;
    }
  }
LAB_14967e522:
  *param_7 = false;
  return;
}

// RayConeIntersection<double> @ 14967e580

void __cdecl
GizmoMath::RayConeIntersection<double>
          (TVector<double> *param_1,TVector<double> *param_2,double param_3,double param_4,
          TVector<double> *param_5,TVector<double> *param_6,bool *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  double dVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double local_a8 [21];
  
  dVar11 = (param_2->field0_0x0)._s_0.Z;
  dVar17 = (param_2->field0_0x0)._s_0.Y;
  dVar15 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_5->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_5->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_5->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar18 = (param_6->field0_0x0)._s_0.Y;
  dVar1 = (param_6->field0_0x0)._s_0.X;
  dVar2 = (param_6->field0_0x0)._s_0.Z;
  dVar7 = param_3 * param_3;
  auVar19._0_8_ = dVar1 * dVar4;
  auVar19._8_8_ = 0;
  dVar1 = dVar17 * dVar18 + dVar15 * dVar1 + dVar11 * dVar2;
  dVar11 = dVar17 * dVar5 + dVar15 * dVar4 + dVar11 * dVar6;
  dVar17 = dVar1 * dVar1 - dVar7;
  dVar15 = dVar11 * dVar1 - (dVar18 * dVar5 + auVar19._0_8_ + dVar2 * dVar6) * dVar7;
  if ((double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) goto LAB_14967e88f;
  dVar18 = dVar15 * dVar15 -
           (dVar11 * dVar11 - (dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6) * dVar7) * dVar17;
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (dVar18 < 0.0) goto LAB_14967e88f;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar18;
    auVar19 = sqrtpd(auVar19,auVar3);
    dVar18 = ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar12,SUB84(dVar15,0) ^ uVar10)
             - auVar19._0_8_) / dVar17;
    cVar8 = 0.0 <= dVar18 * dVar1 + dVar11;
    if ((bool)cVar8) {
      local_a8[0] = dVar18;
    }
    uVar9 = (ulonglong)(byte)cVar8;
    dVar17 = (auVar19._0_8_ - dVar15) / dVar17;
    if (0.0 <= dVar17 * dVar1 + dVar11) {
      cVar8 = cVar8 + '\x01';
      local_a8[uVar9] = dVar17;
    }
    if (cVar8 == '\x02') {
      dVar17 = local_a8[1];
      if (local_a8[1] < local_a8[0]) {
        dVar17 = local_a8[0];
        local_a8[0] = local_a8[1];
      }
    }
    else if ((cVar8 != '\x01') || (dVar17 = __real_7fefffffffffffff, dVar1 <= 0.0))
    goto LAB_14967e88f;
  }
  else {
    uVar14 = SUB84(dVar15 / dVar17,0) ^ uVar10;
    uVar16 = (uint)((ulonglong)(dVar15 / dVar17) >> 0x20) ^ uVar12;
    dVar17 = (double)CONCAT44(uVar16,uVar14);
    local_a8[0] = dVar17;
    if ((double)CONCAT44(uVar16,uVar14) * dVar1 + dVar11 < 0.0) goto LAB_14967e88f;
  }
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    dVar15 = dVar17;
    if (param_4 < dVar11) goto LAB_14967e88f;
    goto LAB_14967e851;
  }
  dVar15 = (param_4 - dVar11) * (__real_3ff0000000000000 / dVar1);
  dVar11 = (__real_3ff0000000000000 / dVar1) * dVar11;
  uVar10 = SUB84(dVar11,0) ^ uVar10;
  uVar12 = (uint)((ulonglong)dVar11 >> 0x20) ^ uVar12;
  dVar11 = (double)CONCAT44(uVar12,uVar10);
  dVar18 = dVar15;
  if (0.0 < dVar1) {
    dVar18 = (double)CONCAT44(uVar12,uVar10);
    dVar11 = dVar15;
  }
  if ((dVar17 < dVar18) || (dVar11 < local_a8[0])) goto LAB_14967e88f;
  if (dVar17 <= dVar18) {
    uVar13 = SUB84(dVar17,0);
    local_a8[0] = dVar17;
LAB_14967e845:
    dVar15 = (double)CONCAT44((int)((ulonglong)local_a8[0] >> 0x20),uVar13);
  }
  else {
    dVar15 = local_a8[0];
    if (local_a8[0] < dVar11) {
      if (local_a8[0] <= dVar18) {
        local_a8[0] = dVar18;
      }
      uVar13 = SUB84(local_a8[0],0);
      dVar15 = dVar17;
      if (dVar11 <= dVar17) {
        dVar15 = dVar11;
      }
      if (local_a8[0] == dVar15) goto LAB_14967e845;
    }
  }
LAB_14967e851:
  if (0.0 <= local_a8[0]) {
    *param_7 = true;
    *param_8 = local_a8[0];
    return;
  }
  if (0.0 <= dVar15) {
    *param_7 = true;
    *param_8 = dVar15;
    return;
  }
LAB_14967e88f:
  *param_7 = false;
  return;
}

// RayCylinderIntersection<float> @ 14967e8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GizmoMath::RayCylinderIntersection<float>
          (TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4,
          TVector<double> *param_5,TVector<double> *param_6,bool *param_7,float *param_8)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  undefined8 local_148;
  float local_140;
  TVector<double> local_138;
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108 [10];
  
  dVar27 = __real_3e45798ee0000000;
  *param_7 = false;
  dVar9 = __real_3ff0000000000000;
  dVar17 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dVar23 = (param_2->field0_0x0)._s_0.Y;
  dVar19 = dVar23 * dVar23 + dVar17 * dVar17 + dVar1 * dVar1;
  if (dVar19 == __real_3ff0000000000000) {
    local_108[0]._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
    uVar29 = local_108[0]._12_4_;
    local_138.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    uVar28 = local_108[0]._8_4_;
    dVar23 = local_108[0]._8_8_;
    dVar17 = local_108[0]._0_8_;
LAB_14967ea38:
    local_118._8_4_ = uVar28;
    local_118._0_8_ = dVar17;
    local_118._12_4_ = uVar29;
  }
  else {
    if (dVar27 <= dVar19) {
      local_148 = __real_3ff0000000000000 / SQRT(dVar19);
      dVar17 = dVar17 * local_148;
      local_138.field0_0x0._s_0.Z = dVar1 * local_148;
      dVar23 = dVar23 * local_148;
      uVar28 = 0;
      uVar29 = 0;
      local_108[0]._8_8_ = dVar23;
      local_108[0]._0_8_ = dVar17;
      goto LAB_14967ea38;
    }
    local_138.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_108[0]._0_16_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    dVar17 = dVar4;
    dVar23 = dVar5;
  }
  uVar10 = local_138.field0_0x0._s_0.Z;
  local_140 = param_4;
  local_108[0]._s_0.Z = local_138.field0_0x0._s_0.Z;
  pTVar11 = GetOrthogonalVector(&local_138,(TVector<double> *)&local_108[0]._s_0);
  dVar1 = (pTVar11->field0_0x0)._s_0.X;
  dVar19 = (pTVar11->field0_0x0)._s_0.Y;
  dVar25 = (pTVar11->field0_0x0)._s_0.Z;
  dVar20 = dVar19 * dVar19 + dVar1 * dVar1 + dVar25 * dVar25;
  if (dVar20 == dVar9) {
    dVar6 = (pTVar11->field0_0x0)._s_0.X;
    dVar3 = (pTVar11->field0_0x0)._s_0.Y;
    uVar2 = (pTVar11->field0_0x0)._s_0.Z;
  }
  else {
    dVar3 = dVar5;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar6 = dVar4;
    if (dVar27 <= dVar20) {
      local_148 = dVar9 / SQRT(dVar20);
      dVar6 = dVar1 * local_148;
      dVar3 = dVar19 * local_148;
      uVar2 = dVar25 * local_148;
    }
  }
  dVar1 = (double)uVar2 * dVar23 - dVar3 * (double)uVar10;
  dVar20 = dVar6 * (double)uVar10 - (double)uVar2 * dVar17;
  dVar25 = dVar3 * dVar17 - dVar6 * dVar23;
  dVar19 = dVar20 * dVar20 + dVar1 * dVar1 + dVar25 * dVar25;
  uVar26 = dVar25;
  dVar27 = dVar20;
  dVar17 = dVar1;
  if ((dVar19 != dVar9) &&
     (uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar27 = dVar5,
     dVar17 = dVar4, __real_3e45798ee0000000 <= dVar19)) {
    local_148 = dVar9 / SQRT(dVar19);
    uVar26 = dVar25 * local_148;
    dVar27 = dVar20 * local_148;
    dVar17 = dVar1 * local_148;
  }
  local_140 = local_140 * __real_3f000000;
  dVar19 = (param_5->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar25 = (param_5->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar30 = param_3 * param_3;
  dVar5 = (param_5->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar4 = dVar5 * dVar3 + dVar25 * dVar6 + dVar19 * (double)uVar2;
  dVar1 = dVar5 * dVar27 + dVar25 * dVar17 + dVar19 * (double)uVar26;
  dVar5 = dVar5 * dVar23 + dVar25 * (double)local_118._0_8_ + dVar19 * (double)uVar10;
  uVar32 = (uint)((ulonglong)dVar5 >> 0x20);
  fVar18 = (float)((param_6->field0_0x0)._s_0.Y * dVar23 +
                   (param_6->field0_0x0)._s_0.X * (double)local_118._0_8_ +
                  (param_6->field0_0x0)._s_0.Z * (double)uVar10);
  dVar23 = (double)fVar18;
  if ((double)CONCAT44((uint)((ulonglong)(dVar23 - dVar9) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar23 - dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee0000000) {
    if ((float)(((double)fVar30 - dVar4 * dVar4) - dVar1 * dVar1) < 0.0) {
      return;
    }
    uVar31 = 2;
    dVar17 = (double)local_140;
    if (fVar18 <= 0.0) {
      fVar30 = (float)(dVar5 + dVar17);
      fVar18 = (float)(dVar5 - dVar17);
    }
    else {
      fVar30 = (float)(dVar17 - dVar5);
      fVar18 = (float)((double)CONCAT44(uVar32 ^ __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar5,0) ^
                                        (uint)__xmm_80000000000000008000000000000000) - dVar17);
    }
    goto LAB_14967f09b;
  }
  dVar19 = dVar3 * (param_6->field0_0x0)._s_0.Y + dVar6 * (param_6->field0_0x0)._s_0.X +
           (double)uVar2 * (param_6->field0_0x0)._s_0.Z;
  dVar17 = dVar27 * (param_6->field0_0x0)._s_0.Y + dVar17 * (param_6->field0_0x0)._s_0.X +
           (double)uVar26 * (param_6->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    uVar31 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar32 = uVar32 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)local_140 <= (double)CONCAT44(uVar32,uVar31) &&
        (double)CONCAT44(uVar32,uVar31) != (double)local_140) {
      return;
    }
    fVar24 = (float)(dVar19 * dVar4 + dVar17 * dVar1);
    fVar21 = (float)(dVar19 * dVar19 + dVar17 * dVar17);
    fVar18 = fVar24 * fVar24 - (float)((dVar1 * dVar1 + dVar4 * dVar4) - (double)fVar30) * fVar21;
    if (__real_322bcc77 < (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (fVar18 <= 0.0) {
        return;
      }
      uVar31 = 2;
      fVar30 = (SQRT(fVar18) - fVar24) / fVar21;
      fVar18 = ((float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) - SQRT(fVar18)) /
               fVar21;
    }
    else {
      uVar31 = 1;
      fVar30 = (float)((uint)(fVar24 / fVar21) ^ __xmm_80000000800000008000000080000000);
      fVar18 = fVar30;
    }
    goto LAB_14967f09b;
  }
  fVar24 = (float)(((double)(float)((uint)local_140 ^ __xmm_80000000800000008000000080000000) -
                   dVar5) * (double)(float)(dVar9 / dVar23));
  fVar21 = (float)(dVar19 * (double)fVar24 + dVar4);
  fVar18 = (float)(dVar17 * (double)fVar24 + dVar1);
  bVar14 = fVar18 * fVar18 + fVar21 * fVar21 <= fVar30;
  fVar18 = fVar30;
  if (bVar14) {
    fVar18 = fVar24;
  }
  local_148 = (double)CONCAT44(local_148._4_4_,fVar18);
  fVar21 = (float)(((double)local_140 - dVar5) * (double)(float)(dVar9 / dVar23));
  fVar22 = (float)(dVar19 * (double)fVar21 + dVar4);
  fVar15 = (float)(dVar17 * (double)fVar21 + dVar1);
  uVar12 = (ulonglong)bVar14;
  if (fVar15 * fVar15 + fVar22 * fVar22 <= fVar30) {
    uVar12 = (ulonglong)(bVar14 + 1);
    *(float *)((longlong)&local_148 + (ulonglong)bVar14 * 4) = fVar21;
    fVar18 = (float)local_148;
  }
  uVar31 = (uint)uVar12;
  bVar14 = uVar31 == 2;
  if (uVar31 < 2) {
    fVar22 = (float)(dVar19 * dVar4 + dVar17 * dVar1);
    fVar15 = (float)(dVar19 * dVar19 + dVar17 * dVar17);
    fVar30 = fVar22 * fVar22 - (float)((dVar1 * dVar1 + dVar4 * dVar4) - (double)fVar30) * fVar15;
    if (__real_322bcc77 < (float)((uint)fVar30 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (fVar30 <= 0.0) goto LAB_14967f087;
      fVar16 = ((float)((uint)fVar22 ^ __xmm_80000000800000008000000080000000) - SQRT(fVar30)) /
               fVar15;
      fVar7 = fVar24;
      fVar8 = fVar21;
      if (fVar24 <= fVar21) {
        fVar7 = fVar21;
        fVar8 = fVar24;
      }
      uVar13 = uVar12;
      if ((fVar8 <= fVar16) && (fVar16 <= fVar7)) {
        uVar31 = uVar31 + 1;
        uVar13 = (ulonglong)uVar31;
        *(float *)((longlong)&local_148 + uVar12 * 4) = fVar16;
        bVar14 = uVar31 == 2;
        fVar18 = (float)local_148;
        if (1 < uVar31) goto LAB_14967f06f;
      }
      uVar31 = (uint)uVar13;
      fVar15 = (SQRT(fVar30) - fVar22) / fVar15;
      fVar30 = fVar24;
      if (fVar24 <= fVar21) {
        fVar30 = fVar21;
        fVar21 = fVar24;
      }
      if ((fVar21 <= fVar15) && (fVar15 <= fVar30)) {
        *(float *)((longlong)&local_148 + uVar13 * 4) = fVar15;
        goto LAB_14967f064;
      }
LAB_14967f06c:
      bVar14 = uVar31 == 2;
      goto LAB_14967f06f;
    }
    fVar30 = (float)((uint)(fVar22 / fVar15) ^ __xmm_80000000800000008000000080000000);
    if (fVar21 < fVar24) {
      if ((fVar21 <= fVar30) && (fVar30 <= fVar24)) {
        *(float *)((longlong)&local_148 + uVar12 * 4) = fVar30;
        goto LAB_14967f064;
      }
    }
    else if ((fVar24 <= fVar30) && (fVar30 <= fVar21)) {
      *(float *)((longlong)&local_148 + uVar12 * 4) = fVar30;
LAB_14967f064:
      uVar31 = uVar31 + 1;
      fVar18 = (float)local_148;
      goto LAB_14967f06c;
    }
  }
  else {
LAB_14967f06f:
    if (bVar14) {
      fVar30 = local_148._4_4_;
      if (local_148._4_4_ < fVar18) {
        fVar30 = fVar18;
        fVar18 = local_148._4_4_;
      }
      goto LAB_14967f09b;
    }
  }
LAB_14967f087:
  fVar30 = fVar18;
  if (uVar31 != 1) {
    if (uVar31 == 0) {
      return;
    }
    fVar30 = local_148._4_4_;
  }
LAB_14967f09b:
  if (fVar18 < 0.0) {
    if ((uVar31 == 2) && (0.0 <= fVar30)) {
      *param_7 = true;
      *param_8 = fVar30;
    }
  }
  else {
    *param_7 = true;
    *param_8 = fVar18;
  }
  return;
}

// RayCylinderIntersection<double> @ 14967f120

void __cdecl
GizmoMath::RayCylinderIntersection<double>
          (TVector<double> *param_1,TVector<double> *param_2,double param_3,double param_4,
          TVector<double> *param_5,TVector<double> *param_6,bool *param_7,double *param_8)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  TVector<double> *pTVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar13;
  undefined8 uVar12;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  TVector<double>_u_0 local_148;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108 [10];
  
  dVar14 = __real_3e45798ee0000000;
  dVar11 = __real_3ff0000000000000;
  *param_7 = false;
  dVar8 = (param_2->field0_0x0)._s_0.X;
  dVar18 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar19 = (param_2->field0_0x0)._s_0.Z;
  dVar9 = dVar18 * dVar18 + dVar8 * dVar8 + dVar19 * dVar19;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  if (dVar9 == dVar11) {
    local_108[0]._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
    uVar22 = local_108[0]._8_4_;
    uVar23 = local_108[0]._12_4_;
    local_148._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar18 = local_108[0]._8_8_;
    dVar8 = local_108[0]._0_8_;
LAB_14967f274:
    local_128._8_4_ = uVar22;
    local_128._0_8_ = dVar8;
    local_128._12_4_ = uVar23;
  }
  else {
    if (dVar14 <= dVar9) {
      local_148._s_0.X = dVar11 / SQRT(dVar9);
      dVar8 = dVar8 * local_148._s_0.X;
      local_148._s_0.Z = dVar19 * local_148._s_0.X;
      dVar18 = dVar18 * local_148._s_0.X;
      uVar22 = 0;
      uVar23 = 0;
      local_108[0]._8_8_ = dVar18;
      local_108[0]._0_8_ = dVar8;
      goto LAB_14967f274;
    }
    local_148._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_108[0]._0_16_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    dVar18 = dVar7;
    dVar8 = dVar2;
  }
  uVar12 = local_148._s_0.Z;
  local_118._8_4_ = uVar22;
  local_118._0_8_ = dVar18;
  local_118._12_4_ = uVar23;
  local_108[0]._s_0.Z = local_148._s_0.Z;
  pTVar4 = GetOrthogonalVector((TVector<double> *)&local_148._s_0,
                               (TVector<double> *)&local_108[0]._s_0);
  dVar19 = (pTVar4->field0_0x0)._s_0.X;
  dVar9 = (pTVar4->field0_0x0)._s_0.Y;
  dVar17 = (pTVar4->field0_0x0)._s_0.Z;
  dVar10 = dVar9 * dVar9 + dVar19 * dVar19 + dVar17 * dVar17;
  if (dVar10 == dVar11) {
    dVar15 = (pTVar4->field0_0x0)._s_0.X;
    dVar16 = (pTVar4->field0_0x0)._s_0.Y;
    uVar1 = (pTVar4->field0_0x0)._s_0.Z;
  }
  else {
    dVar16 = dVar7;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar15 = dVar2;
    if (dVar14 <= dVar10) {
      dVar14 = dVar11 / SQRT(dVar10);
      dVar15 = dVar19 * dVar14;
      dVar16 = dVar9 * dVar14;
      uVar1 = dVar17 * dVar14;
    }
  }
  dVar19 = (double)uVar1 * dVar18 - dVar16 * (double)uVar12;
  dVar17 = dVar15 * (double)uVar12 - (double)uVar1 * dVar8;
  dVar8 = dVar16 * (double)local_128._0_8_ - dVar15 * dVar18;
  dVar9 = dVar17 * dVar17 + dVar19 * dVar19 + dVar8 * dVar8;
  dVar14 = dVar17;
  dVar18 = dVar19;
  uVar3 = dVar8;
  if ((dVar9 != dVar11) &&
     (dVar14 = dVar7, dVar18 = dVar2,
     uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar9)) {
    dVar11 = dVar11 / SQRT(dVar9);
    dVar14 = dVar17 * dVar11;
    dVar18 = dVar19 * dVar11;
    uVar3 = dVar8 * dVar11;
  }
  dVar8 = param_4 * __real_3fe0000000000000;
  dVar7 = param_3 * param_3;
  dVar11 = (param_5->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_5->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar17 = (param_5->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar19 = dVar11 * dVar16 + dVar15 * dVar17 + dVar9 * (double)uVar1;
  dVar2 = dVar11 * dVar14 + dVar18 * dVar17 + dVar9 * (double)uVar3;
  dVar11 = dVar11 * (double)local_118._0_8_ + dVar17 * (double)local_128._0_8_ +
           dVar9 * (double)uVar12;
  uVar21 = (uint)((ulonglong)dVar11 >> 0x20);
  local_148._s_0.X =
       (param_6->field0_0x0)._s_0.Y * (double)local_118._0_8_ +
       (param_6->field0_0x0)._s_0.X * (double)local_128._0_8_ +
       (param_6->field0_0x0)._s_0.Z * (double)uVar12;
  if ((double)CONCAT44((uint)((ulonglong)(local_148._s_0.X - __real_3ff0000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_148._s_0.X - __real_3ff0000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000) {
    if ((dVar7 - dVar19 * dVar19) - dVar2 * dVar2 < 0.0) {
      return;
    }
    uVar20 = 2;
    if (local_148._s_0.X <= 0.0) {
      uVar12 = dVar11 - dVar8;
      uVar1 = dVar8 + dVar11;
    }
    else {
      uVar12 = (double)CONCAT44(uVar21 ^ __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000) -
               dVar8;
      uVar1 = dVar8 - dVar11;
    }
    goto LAB_14967f83a;
  }
  dVar9 = dVar16 * (param_6->field0_0x0)._s_0.Y + dVar15 * (param_6->field0_0x0)._s_0.X +
          (double)uVar1 * (param_6->field0_0x0)._s_0.Z;
  dVar18 = dVar14 * (param_6->field0_0x0)._s_0.Y + dVar18 * (param_6->field0_0x0)._s_0.X +
           (double)uVar3 * (param_6->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)local_148._s_0.X >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_148._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    uVar20 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar21 = uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar8 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar8) {
      return;
    }
    dVar11 = dVar18 * dVar2 + dVar19 * dVar9;
    dVar18 = dVar9 * dVar9 + dVar18 * dVar18;
    dVar8 = dVar11 * dVar11 - ((dVar19 * dVar19 + dVar2 * dVar2) - dVar7) * dVar18;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (dVar8 <= 0.0) {
        return;
      }
      uVar20 = 2;
      uVar12 = ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000) -
               SQRT(dVar8)) / dVar18;
      uVar1 = (SQRT(dVar8) - dVar11) / dVar18;
    }
    else {
      uVar20 = 1;
      uVar21 = SUB84(dVar11 / dVar18,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar13 = (uint)((ulonglong)(dVar11 / dVar18) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      uVar12 = CONCAT44(uVar13,uVar21);
      uVar1 = CONCAT44(uVar13,uVar21);
    }
    goto LAB_14967f83a;
  }
  dVar14 = __real_3ff0000000000000 / local_148._s_0.X;
  dVar17 = dVar14 * dVar8;
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar17,0) ^ (uint)__xmm_80000000000000008000000000000000) -
           dVar11 / local_148._s_0.X;
  dVar17 = dVar18 * dVar15 + dVar2;
  dVar10 = dVar15 * dVar9 + dVar19;
  dVar17 = dVar17 * dVar17 + dVar10 * dVar10;
  if (dVar17 <= dVar7) {
    local_148._s_0.X = dVar15;
  }
  uVar6 = (ulonglong)(dVar17 <= dVar7);
  dVar14 = (dVar8 - dVar11) * dVar14;
  dVar11 = dVar14 * dVar9 + dVar19;
  dVar8 = dVar14 * dVar18 + dVar2;
  uVar5 = uVar6;
  if (dVar11 * dVar11 + dVar8 * dVar8 <= dVar7) {
    uVar5 = (ulonglong)((dVar17 <= dVar7) + 1);
    *(double *)((longlong)&local_148 + uVar6 * 8) = dVar14;
  }
  uVar20 = (uint)uVar5;
  if (uVar20 < 2) {
    dVar8 = dVar18 * dVar2 + dVar19 * dVar9;
    dVar18 = dVar9 * dVar9 + dVar18 * dVar18;
    dVar19 = dVar8 * dVar8 - ((dVar19 * dVar19 + dVar2 * dVar2) - dVar7) * dVar18;
    uVar12 = local_148._s_0.X;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (0.0 < dVar19) {
        dVar7 = ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000) -
                SQRT(dVar19)) / dVar18;
        dVar2 = dVar15;
        dVar11 = dVar14;
        if (dVar15 <= dVar14) {
          dVar2 = dVar14;
          dVar11 = dVar15;
        }
        uVar6 = uVar5;
        if ((dVar11 <= dVar7) && (dVar7 <= dVar2)) {
          uVar20 = uVar20 + 1;
          uVar6 = (ulonglong)uVar20;
          *(double *)((longlong)&local_148 + uVar5 * 8) = dVar7;
          if (1 < uVar20) goto LAB_14967f80d;
        }
        uVar20 = (uint)uVar6;
        dVar18 = (SQRT(dVar19) - dVar8) / dVar18;
        dVar8 = dVar15;
        if (dVar15 <= dVar14) {
          dVar8 = dVar14;
          dVar14 = dVar15;
        }
        if ((dVar14 <= dVar18) && (dVar18 <= dVar8)) {
          uVar20 = uVar20 + 1;
          *(double *)((longlong)&local_148 + uVar6 * 8) = dVar18;
        }
        goto LAB_14967f80d;
      }
    }
    else {
      dVar18 = (double)CONCAT44((uint)((ulonglong)(dVar8 / dVar18) >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar8 / dVar18,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
      dVar8 = dVar15;
      if (dVar15 <= dVar14) {
        dVar8 = dVar14;
        dVar14 = dVar15;
      }
      if ((dVar14 <= dVar18) && (dVar18 <= dVar8)) {
        uVar20 = uVar20 + 1;
        *(double *)((longlong)&local_148 + uVar5 * 8) = dVar18;
        goto LAB_14967f80d;
      }
    }
  }
  else {
LAB_14967f80d:
    uVar12 = local_148._s_0.X;
    if (uVar20 == 2) {
      uVar1 = local_148._s_0.Y;
      if (local_148._s_0.Y < local_148._s_0.X) {
        uVar12 = local_148._s_0.Y;
        uVar1 = local_148._s_0.X;
      }
      goto LAB_14967f83a;
    }
  }
  uVar1 = uVar12;
  if ((uVar20 != 1) && (uVar1 = local_148._s_0.Y, uVar20 == 0)) {
    return;
  }
LAB_14967f83a:
  if ((double)uVar12 < 0.0) {
    if ((uVar20 == 2) && (0.0 <= (double)uVar1)) {
      *param_7 = true;
      *param_8 = (double)uVar1;
    }
  }
  else {
    *param_7 = true;
    *param_8 = (double)uVar12;
  }
  return;
}

// RemoveAll<`UInputBehaviorSet::RemoveByGroup'::__l2::<lambda_1>_> @ 14967f990

int __thiscall
TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_>::
RemoveAll<_UInputBehaviorSet::RemoveByGroup_::__l2::<lambda_1>_>
          (TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar4 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar3 = (param_1->Group).Data.ArrayNum;
  iVar6 = *(int *)(pFVar2 + 0x18);
  iVar9 = 0;
  local_res18 = 0;
  if (iVar6 == iVar3) {
    if (iVar6 < 2) {
      bVar10 = false;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(pFVar2 + 0x10),
                         (wchar_t *)(param_1->Group).Data.AllocatorInstance.Data);
      bVar10 = iVar3 != 0;
    }
  }
  else {
    bVar10 = iVar6 + iVar3 != 1;
  }
  lVar5 = 0;
  iVar3 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar6 = iVar3 + 1;
    if (lVar5 < lVar4) {
      pFVar8 = pFVar2 + lVar5 * 0x20 + 0x10;
      do {
        iVar9 = *(int *)(pFVar8 + 8);
        iVar7 = (param_1->Group).Data.ArrayNum;
        if (iVar9 == iVar7) {
          if (iVar9 < 2) {
            bVar11 = false;
          }
          else {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar8,
                               (wchar_t *)(param_1->Group).Data.AllocatorInstance.Data);
            bVar11 = iVar9 != 0;
          }
        }
        else {
          bVar11 = iVar7 + iVar9 != 1;
        }
        iVar9 = local_res18;
        if (bVar10 != bVar11) break;
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 1;
        pFVar8 = pFVar8 + 0x20;
      } while (lVar5 < lVar4);
    }
    iVar7 = iVar6 - iVar3;
    if (bVar10 == false) {
      DestructItems<FBehaviorInfo,int>((FBehaviorInfo *)(pFVar2 + (longlong)iVar3 * 0x20),iVar7);
    }
    else {
      if (iVar9 != iVar3) {
        memmove(pFVar2 + (longlong)iVar9 * 0x20,pFVar2 + (longlong)iVar3 * 0x20,(longlong)iVar7 << 5
               );
      }
      iVar9 = iVar9 + iVar7;
      local_res18 = iVar9;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar3 = iVar6;
    if (lVar4 <= lVar5) {
      this->ArrayNum = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}

// RotateInternal<FBehaviorInfo> @ 14967fce0

int __cdecl AlgoImpl::RotateInternal<FBehaviorInfo>(FBehaviorInfo *param_1,int param_2,int param_3)

{
  void *pvVar1;
  TObjectPtr<UInputBehavior>_u_0 TVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FBehaviorInfo *pFVar9;
  FBehaviorInfo *pFVar11;
  FBehaviorInfo *pFVar12;
  FBehaviorInfo *pFVar13;
  FBehaviorInfo *pFVar10;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar9 = param_1 + param_3;
    pFVar12 = param_1;
    pFVar10 = param_1 + param_3;
    do {
      while( true ) {
        pFVar11 = pFVar9 + 1;
        pFVar13 = pFVar12 + 1;
        pvVar1 = pFVar9->Source;
        TVar2 = (pFVar12->Behavior).field0_0x0;
        pvVar3 = pFVar12->Source;
        pFVar4 = (pFVar12->Group).Data.AllocatorInstance.Data;
        iVar7 = (pFVar12->Group).Data.ArrayNum;
        iVar8 = (pFVar12->Group).Data.ArrayMax;
        (pFVar12->Behavior).field0_0x0 = (pFVar9->Behavior).field0_0x0;
        pFVar12->Source = pvVar1;
        iVar5 = (pFVar9->Group).Data.ArrayNum;
        iVar6 = (pFVar9->Group).Data.ArrayMax;
        (pFVar12->Group).Data.AllocatorInstance.Data = (pFVar9->Group).Data.AllocatorInstance.Data;
        (pFVar12->Group).Data.ArrayNum = iVar5;
        (pFVar12->Group).Data.ArrayMax = iVar6;
        (pFVar9->Behavior).field0_0x0 = TVar2;
        pFVar9->Source = pvVar3;
        (pFVar9->Group).Data.AllocatorInstance.Data = pFVar4;
        (pFVar9->Group).Data.ArrayNum = iVar7;
        (pFVar9->Group).Data.ArrayMax = iVar8;
        pFVar12 = pFVar13;
        if (pFVar11 == param_1 + param_2) break;
        pFVar9 = pFVar11;
        if (pFVar13 == pFVar10) {
          pFVar10 = pFVar11;
        }
      }
      pFVar9 = pFVar10;
    } while (pFVar13 != pFVar10);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FInputCaptureRequest> @ 14967fd80

int __cdecl
AlgoImpl::RotateInternal<FInputCaptureRequest>
          (FInputCaptureRequest *param_1,int param_2,int param_3)

{
  UInputBehavior *pUVar1;
  double dVar2;
  void *pvVar3;
  void *pvVar4;
  EInputCaptureRequestType EVar5;
  EInputCaptureSide EVar6;
  EInputCaptureRequestType EVar7;
  EInputCaptureSide EVar8;
  FInputCaptureRequest *pFVar9;
  FInputCaptureRequest *pFVar11;
  FInputCaptureRequest *pFVar12;
  FInputCaptureRequest *pFVar13;
  FInputCaptureRequest *pFVar10;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar9 = param_1 + param_3;
    pFVar12 = param_1;
    pFVar10 = param_1 + param_3;
    do {
      while( true ) {
        pFVar11 = pFVar9 + 1;
        pFVar13 = pFVar12 + 1;
        EVar5 = pFVar9->Type;
        EVar6 = pFVar9->Side;
        pUVar1 = pFVar12->Source;
        EVar7 = pFVar12->Type;
        EVar8 = pFVar12->Side;
        dVar2 = pFVar12->HitDepth;
        pvVar3 = pFVar12->Owner;
        pFVar12->Source = pFVar9->Source;
        pFVar12->Type = EVar5;
        pFVar12->Side = EVar6;
        pvVar4 = pFVar9->Owner;
        pFVar12->HitDepth = pFVar9->HitDepth;
        pFVar12->Owner = pvVar4;
        pFVar9->Source = pUVar1;
        pFVar9->Type = EVar7;
        pFVar9->Side = EVar8;
        pFVar9->HitDepth = dVar2;
        pFVar9->Owner = pvVar3;
        pFVar12 = pFVar13;
        if (pFVar11 == param_1 + param_2) break;
        pFVar9 = pFVar11;
        if (pFVar13 == pFVar10) {
          pFVar10 = pFVar11;
        }
      }
      pFVar9 = pFVar10;
    } while (pFVar13 != pFVar10);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// SnapToIncrement<float> @ 149681bc0

float __cdecl GizmoMath::SnapToIncrement<float>(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = _finite((double)param_1);
  if (iVar1 != 0) {
    fVar4 = param_2;
    if ((param_1 <= 0.0) && (fVar4 = 0.0, param_1 < 0.0)) {
      fVar4 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
    }
    iVar2 = (int)((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) / param_2);
    fVar3 = fmodf((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff),param_2);
    iVar1 = iVar2 + 1;
    if (fVar3 <= param_2 * __real_3f000000) {
      iVar1 = iVar2;
    }
    return (float)iVar1 * fVar4;
  }
  return 0.0;
}

// SnapToIncrement<double> @ 149681c80

double __cdecl GizmoMath::SnapToIncrement<double>(double param_1,double param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = _finite(param_1);
  if (iVar2 != 0) {
    dVar1 = param_2;
    if ((param_1 <= 0.0) && (dVar1 = 0.0, param_1 < 0.0)) {
      dVar1 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    uVar5 = SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar6 = (uint)((ulonglong)param_1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    iVar3 = (int)((double)CONCAT44(uVar6,uVar5) / param_2);
    dVar4 = fmod((double)CONCAT44(uVar6,uVar5),param_2);
    iVar2 = iVar3 + 1;
    if (dVar4 <= param_2 * __real_3fe0000000000000) {
      iVar2 = iVar3;
    }
    return (double)iVar2 * dVar1;
  }
  return 0.0;
}

// StableSortInternal<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_> @ 149681d40

void __cdecl
AlgoImpl::
StableSortInternal<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
          (FBehaviorInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBehaviorInfo,TLess<void>_> param_4)

{
  UInputBehavior *pUVar1;
  int iVar2;
  void *pvVar3;
  TObjectPtr<UInputBehavior>_u_0 TVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FBehaviorInfo *pFVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined1 local_48 [16];
  
  if (0 < param_2) {
    iVar9 = 1;
    lVar14 = ((longlong)param_2 - 1U >> 1) + 1;
    pFVar13 = param_1;
    do {
      if (iVar9 < param_2) {
        pUVar1 = (pFVar13->Behavior).field0_0x0.DebugPtr;
        piVar7 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_res10);
        pUVar1 = pFVar13[1].Behavior.field0_0x0.DebugPtr;
        piVar8 = (int *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_48);
        if (*piVar8 < *piVar7) {
          pvVar3 = pFVar13[1].Source;
          TVar4 = (pFVar13->Behavior).field0_0x0;
          pvVar5 = pFVar13->Source;
          pFVar6 = (pFVar13->Group).Data.AllocatorInstance.Data;
          iVar10 = (pFVar13->Group).Data.ArrayNum;
          iVar12 = (pFVar13->Group).Data.ArrayMax;
          (pFVar13->Behavior).field0_0x0 = pFVar13[1].Behavior.field0_0x0;
          pFVar13->Source = pvVar3;
          iVar2 = pFVar13[1].Group.Data.ArrayNum;
          iVar11 = pFVar13[1].Group.Data.ArrayMax;
          (pFVar13->Group).Data.AllocatorInstance.Data =
               pFVar13[1].Group.Data.AllocatorInstance.Data;
          (pFVar13->Group).Data.ArrayNum = iVar2;
          (pFVar13->Group).Data.ArrayMax = iVar11;
          pFVar13[1].Behavior.field0_0x0 = TVar4;
          pFVar13[1].Source = pvVar5;
          pFVar13[1].Group.Data.AllocatorInstance.Data = pFVar6;
          pFVar13[1].Group.Data.ArrayNum = iVar10;
          pFVar13[1].Group.Data.ArrayMax = iVar12;
        }
      }
      iVar9 = iVar9 + 2;
      pFVar13 = pFVar13 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar9 * 2;
      iVar10 = 0;
      iVar11 = param_2;
      do {
        iVar12 = iVar11;
        if (iVar2 <= iVar11) {
          iVar12 = iVar2;
        }
        Merge<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
                  (param_1 + iVar10,iVar9,iVar12,param_3,param_4);
        iVar10 = iVar10 + iVar2;
        iVar11 = iVar11 + iVar9 * -2;
      } while (iVar10 < param_2);
      iVar9 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_> @ 149681e80

void __cdecl
AlgoImpl::
StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
          (FInputCaptureRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FInputCaptureRequest,TLess<void>_> param_4)

{
  int iVar1;
  UInputBehavior *pUVar2;
  double dVar3;
  void *pvVar4;
  void *pvVar5;
  EInputCaptureRequestType EVar6;
  EInputCaptureSide EVar7;
  EInputCaptureRequestType EVar8;
  EInputCaptureSide EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FInputCaptureRequest *pFVar14;
  int iVar15;
  FInputCaptureRequest *pFVar16;
  
  iVar11 = 0;
  if (0 < param_2) {
    pFVar16 = param_1 + 1;
    pFVar14 = param_1;
    do {
      if ((iVar11 + 1 < param_2) && (bVar10 = ::operator<(pFVar16,pFVar14), bVar10)) {
        EVar6 = pFVar14[1].Type;
        EVar7 = pFVar14[1].Side;
        pUVar2 = pFVar14->Source;
        EVar8 = pFVar14->Type;
        EVar9 = pFVar14->Side;
        dVar3 = pFVar14->HitDepth;
        pvVar4 = pFVar14->Owner;
        pFVar14->Source = pFVar14[1].Source;
        pFVar14->Type = EVar6;
        pFVar14->Side = EVar7;
        pvVar5 = pFVar14[1].Owner;
        pFVar14->HitDepth = pFVar14[1].HitDepth;
        pFVar14->Owner = pvVar5;
        pFVar14[1].Source = pUVar2;
        pFVar14[1].Type = EVar8;
        pFVar14[1].Side = EVar9;
        pFVar14[1].HitDepth = dVar3;
        pFVar14[1].Owner = pvVar4;
      }
      iVar11 = iVar11 + 2;
      pFVar16 = pFVar16 + 2;
      pFVar14 = pFVar14 + 2;
    } while (iVar11 < param_2);
  }
  iVar11 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar11 * 2;
      iVar12 = 0;
      iVar13 = param_2;
      do {
        iVar15 = iVar13;
        if (iVar1 <= iVar13) {
          iVar15 = iVar1;
        }
        Merge<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
                  (param_1 + iVar12,iVar11,iVar15,param_3,param_4);
        iVar12 = iVar12 + iVar1;
        iVar13 = iVar13 + iVar11 * -2;
      } while (iVar12 < param_2);
      iVar11 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EGizmoElementDrawType> @ 149681f90

UEnum * __cdecl StaticEnum<enum_EGizmoElementDrawType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementDrawType,
                       (UObject *)pUVar1,L"EGizmoElementDrawType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementDrawType.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementHitSortType> @ 149681fd0

UEnum * __cdecl StaticEnum<enum_EGizmoElementHitSortType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementHitSortType,
                       (UObject *)pUVar1,L"EGizmoElementHitSortType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementHitSortType.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementInteractionState> @ 149682010

UEnum * __cdecl StaticEnum<enum_EGizmoElementInteractionState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState,
                       (UObject *)pUVar1,L"EGizmoElementInteractionState");
  }
  return Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementPartialType> @ 149682050

UEnum * __cdecl StaticEnum<enum_EGizmoElementPartialType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType,
                       (UObject *)pUVar1,L"EGizmoElementPartialType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementState> @ 149682090

UEnum * __cdecl StaticEnum<enum_EGizmoElementState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState,
                       (UObject *)pUVar1,L"EGizmoElementState");
  }
  return Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementViewAlignType> @ 1496820d0

UEnum * __cdecl StaticEnum<enum_EGizmoElementViewAlignType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType,
                       (UObject *)pUVar1,L"EGizmoElementViewAlignType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton;
}

// StaticEnum<enum_EGizmoElementViewDependentType> @ 149682110

UEnum * __cdecl StaticEnum<enum_EGizmoElementViewDependentType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType,
                       (UObject *)pUVar1,L"EGizmoElementViewDependentType");
  }
  return Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton;
}

// StaticEnum<enum_EInputCaptureRequestType> @ 149682150

UEnum * __cdecl StaticEnum<enum_EInputCaptureRequestType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType,
                       (UObject *)pUVar1,L"EInputCaptureRequestType");
  }
  return Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton;
}

// StaticEnum<enum_EInputCaptureSide> @ 149682190

UEnum * __cdecl StaticEnum<enum_EInputCaptureSide>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide,
                       (UObject *)pUVar1,L"EInputCaptureSide");
  }
  return Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton;
}

// StaticEnum<enum_EInputCaptureState> @ 1496821d0

UEnum * __cdecl StaticEnum<enum_EInputCaptureState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState,
                       (UObject *)pUVar1,L"EInputCaptureState");
  }
  return Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton;
}

// StaticEnum<enum_EInputDevices> @ 149682210

UEnum * __cdecl StaticEnum<enum_EInputDevices>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDevices.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UEnum_EInputDevices.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices,(UObject *)pUVar1,
                       L"EInputDevices");
  }
  return Z_Registration_Info_UEnum_EInputDevices.OuterSingleton;
}

// UpperBoundInternal<FBehaviorInfo,int,FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_> @ 149682250

int __cdecl
AlgoImpl::
UpperBoundInternal<FBehaviorInfo,int,FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
          (FBehaviorInfo *param_1,int param_2,FBehaviorInfo *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FBehaviorInfo,TLess<void>_> param_5)

{
  int iVar1;
  UInputBehavior *pUVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      pUVar2 = param_1[iVar1].Behavior.field0_0x0.DebugPtr;
      piVar4 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_res10);
      pUVar2 = (param_3->Behavior).field0_0x0.DebugPtr;
      piVar5 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_38);
      if (*piVar4 <= *piVar5) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar6;
}

// UpperBoundInternal<FInputCaptureRequest,int,FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_> @ 1496822f0

int __cdecl
AlgoImpl::
UpperBoundInternal<FInputCaptureRequest,int,FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
          (FInputCaptureRequest *param_1,int param_2,FInputCaptureRequest *param_3,
          FIdentityFunctor param_4,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = ::operator<(param_3,param_1 + iVar1);
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>,0,0> @ 149688b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUAxisAngleGizmo___GizmoUtil_UE__YA_NPEAVUAxisAngleGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>,0,0> @ 149688b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUAxisPositionGizmo___GizmoUtil_UE__YA_NPEAVUAxisPositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>,0,0> @ 149688b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUFreePositionSubGizmo___GizmoUtil_UE__YA_NPEAVUFreePositionSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>,0,0> @ 149688ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUFreeRotationSubGizmo___GizmoUtil_UE__YA_NPEAVUFreeRotationSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>,0,0> @ 149688bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUPlanePositionGizmo___GizmoUtil_UE__YA_NPEAVUPlanePositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_1>,1,0> @ 149688be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTransformProxy::AddComponent_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformProxy::AddComponent'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>,1,0> @ 149688c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::GizmoUtil::CreateGizmoViaSimpleBuilder_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USimpleSingleClickGizmo::InitializeWithComponent'::__l2::<lambda_1>,0,0> @ 149688c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USimpleSingleClickGizmo::InitializeWithComponent'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USimpleSingleClickGizmo::InitializeWithComponent_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USimpleSingleClickGizmo::InitializeWithComponent'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_1>,1,0> @ 149688c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotAxisGizmo_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::__l2::<lambda_1>,0,0> @ 149688c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_1>,1,0> @ 149688c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_1>,1,0> @ 149688ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotPlaneGizmo_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_1>,1,0> @ 149688cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotRotateGizmo_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,0,0> @ 149688ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>,1,1> @ 149688d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x78);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149688d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_1>,1,0> @ 149688d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetWorldAlignmentFunctions_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_1>,1,0> @ 149688d60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UBaseBrushTool::Setup_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_1>,1,0> @ 149688d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l9::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`9'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_1>,1,0> @ 149688da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UIntervalGizmo::SetWorldAlignmentFunctions_::__l9::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::`9'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l12::<lambda_1>,0,0> @ 149688dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l12::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UIntervalGizmo::AddIntervalHandleGizmo_::__l12::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`12'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>,0,0> @ 149688de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUAxisAngleGizmo___GizmoUtil_UE__YA_NPEAVUAxisAngleGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>,0,0> @ 149688e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUAxisPositionGizmo___GizmoUtil_UE__YA_NPEAVUAxisPositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>,0,0> @ 149688e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUFreePositionSubGizmo___GizmoUtil_UE__YA_NPEAVUFreePositionSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>,0,0> @ 149688e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUFreeRotationSubGizmo___GizmoUtil_UE__YA_NPEAVUFreeRotationSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>,0,0> @ 149688e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUPlanePositionGizmo___GizmoUtil_UE__YA_NPEAVUPlanePositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_2>,1,0> @ 149688e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UTransformProxy::AddComponent_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformProxy::AddComponent'::`2'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_2>,1,0> @ 149688ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UIntervalGizmo::AddIntervalHandleGizmo_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`2'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_2>,1,0> @ 149688ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotAxisGizmo_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_2>,1,0> @ 149688ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_2>,1,0> @ 149688f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotPlaneGizmo_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_2>,1,0> @ 149688f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotRotateGizmo_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,0,0> @ 149688f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_2>,1,0> @ 149688f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetWorldAlignmentFunctions_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_2>,1,0> @ 149688f80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UBaseBrushTool::Setup_::__l5::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_2>,1,0> @ 149688fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l9::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`9'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_2>,1,0> @ 149688fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UIntervalGizmo::SetWorldAlignmentFunctions_::__l9::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::`9'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>,1,0> @ 149688fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UPlanePositionGizmo::InitializeAsUniformScaleGizmo_::__l20::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::`20'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_3>,1,0> @ 149689000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UIntervalGizmo::AddIntervalHandleGizmo_::__l2::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`2'::<lambda_3>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_3>,0,0> @ 149689020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::ModifyPivotRotateGizmo_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,0,0> @ 149689040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_3>,1,0> @ 149689060

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UBaseBrushTool::Setup_::__l5::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_3>,1,0> @ 149689080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l12::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`12'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,0,0> @ 1496890a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_4>,1,0> @ 1496890c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_4>,1,0>::
~TFunction_OwnedObject<_UBaseBrushTool::Setup_::__l5::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_4>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_4>,1,0> @ 1496890e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_4>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l12::<lambda_4>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`12'::<lambda_4>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,0,0> @ 149689100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_5>,1,0> @ 149689120

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_5>,1,0>::
~TFunction_OwnedObject<_UBaseBrushTool::Setup_::__l5::<lambda_5>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_5>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_5>,1,0> @ 149689140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_5>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l15::<lambda_5>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`15'::<lambda_5>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,0,0> @ 149689160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UBaseBrushTool::RegisterActions_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_6>,1,0> @ 149689180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_6>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l15::<lambda_6>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`15'::<lambda_6>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_7>,1,0> @ 1496891a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_7>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l18::<lambda_7>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`18'::<lambda_7>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_8>,1,0> @ 1496891c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_8>,1,0>
::
~TFunction_OwnedObject<_URepositionableTransformGizmo::SetPivotAlignmentFunctions_::__l18::<lambda_8>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`18'::<lambda_8>,1,0>
        ::_vftable_;
  return;
}

// operator< @ 14968aeb0

bool __cdecl operator<(FInputCaptureRequest *param_1,FInputCaptureRequest *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  piVar1 = (int *)(**(code **)(param_2->Source->_padding_ + 0x2b0))(param_2->Source,local_res8);
  piVar2 = (int *)(**(code **)(param_1->Source->_padding_ + 0x2b0))(param_1->Source,local_res10);
  if (*piVar2 == *piVar1) {
    return param_1->HitDepth < param_2->HitDepth;
  }
  piVar1 = (int *)(**(code **)(param_2->Source->_padding_ + 0x2b0))(param_2->Source,local_res8);
  piVar2 = (int *)(**(code **)(param_1->Source->_padding_ + 0x2b0))(param_1->Source,local_res10);
  return *piVar2 < *piVar1;
}

// operator() @ 14968b280

void __thiscall
``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fStackX_c;
  FDestructionSentinel local_58 [2];
  
  lVar2 = *(longlong *)this;
  fStackX_c = param_2.CurrentValue;
  fVar1 = *(float *)((longlong)this + 0x20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x40),
             (FWriteAccessScope *)local_58);
  *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
  bVar5 = false;
  uVar9 = *(int *)(lVar2 + 0x50) - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)(lVar2 + 0x50)) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar10 + 8 + *(longlong *)(lVar2 + 0x48)) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + *(longlong *)(lVar2 + 0x48)), plVar3 == (longlong *)0x0)
          ) || (cVar7 = (**(code **)(*plVar3 + 0x68))
                                  (plVar3,lVar2,(longlong)this + 8,fStackX_c * fVar1), cVar7 == '\0'
               )) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar2 + 0x40),false);
  }
  if (local_58[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c178

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseBrushTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBaseBrushTool::_vector_deleting_destructor__adjustor_40__(UBaseBrushTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseBrushTool *)&this[-1].BrushStampIndicator,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14968c188

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseBrushTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UBaseBrushTool::_vector_deleting_destructor__adjustor_192__(UBaseBrushTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBaseBrushTool *)&this[-1].LastBrushStamp.HitResult.Item,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14968c19c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseBrushTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UBaseBrushTool::_vector_deleting_destructor__adjustor_208__(UBaseBrushTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBaseBrushTool *)&this[-1].LastBrushStamp.HitResult.TraceEnd.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{216}' @ 14968c1b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseBrushTool::`vector deleting
   destructor'`adjustor{216}' (unsigned int) __ptr64 */

void * __thiscall
UBaseBrushTool::_vector_deleting_destructor__adjustor_216__(UBaseBrushTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBaseBrushTool *)&this[-1].LastBrushStamp.HitResult.TraceEnd.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c1c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UClickDragTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UClickDragTool::_vector_deleting_destructor__adjustor_40__(UClickDragTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UClickDragTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14968c1d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UClickDragTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UClickDragTool::_vector_deleting_destructor__adjustor_192__(UClickDragTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UClickDragTool *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c1e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoAxisIntervalParameterSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoAxisIntervalParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoAxisIntervalParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoAxisIntervalParameterSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c1f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoAxisRotationParameterSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoAxisRotationParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoAxisRotationParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoAxisRotationParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c208

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoAxisScaleParameterSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoAxisScaleParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoAxisScaleParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoAxisScaleParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c218

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoAxisTranslationParameterSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoAxisTranslationParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoAxisTranslationParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoAxisTranslationParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c228

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoBaseFloatParameterSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoBaseFloatParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoBaseFloatParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoBaseFloatParameterSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c238

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoBaseTransformSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoBaseTransformSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoBaseTransformSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoBaseTransformSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c248

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoComponentHitTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoComponentHitTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoComponentHitTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoComponentHitTarget *)&this[-1].UpdateSubduedFunction.field_0x8,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c258

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoComponentWorldTransformSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoComponentWorldTransformSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoComponentWorldTransformSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoComponentWorldTransformSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c268

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoElementHitMultiTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoElementHitMultiTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoElementHitMultiTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoElementHitMultiTarget *)&this[-1].Condition.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c278

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoElementHitTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoElementHitTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoElementHitTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoElementHitTarget *)&this[-1].Condition.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c288

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLambdaHitTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLambdaHitTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoLambdaHitTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoLambdaHitTarget *)&this[-1].UpdateSubdueFunction.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c298

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLambdaStateTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLambdaStateTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoLambdaStateTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoLambdaStateTarget *)&this[-1].EndUpdateFunction.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14968c2a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLineHandleComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLineHandleComponent::_vector_deleting_destructor__adjustor_592__
          (UGizmoLineHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoLineHandleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14968c2bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLineHandleComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLineHandleComponent::_vector_deleting_destructor__adjustor_600__
          (UGizmoLineHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoLineHandleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14968c2d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLineHandleComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLineHandleComponent::_vector_deleting_destructor__adjustor_608__
          (UGizmoLineHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoLineHandleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c2e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLineHandleComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLineHandleComponent::_vector_deleting_destructor__adjustor_40__
          (UGizmoLineHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoLineHandleComponent *)&this[-1].HandleSize,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1352}' @ 14968c2f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLineHandleComponent::`vector deleting
   destructor'`adjustor{1352}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLineHandleComponent::_vector_deleting_destructor__adjustor_1352__
          (UGizmoLineHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoLineHandleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c308

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoLocalFloatParameterSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoLocalFloatParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoLocalFloatParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoLocalFloatParameterSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c318

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoNilStateTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoNilStateTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoNilStateTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoNilStateTarget *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c328

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoObjectModifyStateTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoObjectModifyStateTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoObjectModifyStateTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoObjectModifyStateTarget *)&this[-1].ModifyObject,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c338

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoPlaneScaleParameterSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoPlaneScaleParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoPlaneScaleParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoPlaneScaleParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c348

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoPlaneTranslationParameterSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoPlaneTranslationParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoPlaneTranslationParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoPlaneTranslationParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14968c358

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoRectangleComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoRectangleComponent::_vector_deleting_destructor__adjustor_592__
          (UGizmoRectangleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoRectangleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14968c36c

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoRectangleComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoRectangleComponent::_vector_deleting_destructor__adjustor_600__
          (UGizmoRectangleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoRectangleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14968c380

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoRectangleComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoRectangleComponent::_vector_deleting_destructor__adjustor_608__
          (UGizmoRectangleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoRectangleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c394

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoRectangleComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoRectangleComponent::_vector_deleting_destructor__adjustor_40__
          (UGizmoRectangleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoRectangleComponent *)((longlong)&this[-1].DirectionY.field0_0x0 + 0x10)
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1352}' @ 14968c3a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoRectangleComponent::`vector deleting
   destructor'`adjustor{1352}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoRectangleComponent::_vector_deleting_destructor__adjustor_1352__
          (UGizmoRectangleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGizmoRectangleComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c3b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoScaledAndUnscaledTransformSources::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoScaledAndUnscaledTransformSources::_vector_deleting_destructor__adjustor_40__
          (UGizmoScaledAndUnscaledTransformSources *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoScaledAndUnscaledTransformSources *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c3c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoScaledTransformSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoScaledTransformSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoScaledTransformSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoScaledTransformSource *)&this[-1].ScaleProvider.SetScale.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c3d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoTransformChangeStateTarget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoTransformChangeStateTarget::_vector_deleting_destructor__adjustor_40__
          (UGizmoTransformChangeStateTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoTransformChangeStateTarget *)
                      (this[-1].FinalTransform.Scale3D.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c3e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoTransformProxyTransformSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoTransformProxyTransformSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoTransformProxyTransformSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoTransformProxyTransformSource *)&this[-1].bOverrideSetPivotMode,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c3f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UGizmoUniformScaleParameterSource::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGizmoUniformScaleParameterSource::_vector_deleting_destructor__adjustor_40__
          (UGizmoUniformScaleParameterSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGizmoUniformScaleParameterSource *)
                      (this[-1].InitialTransform.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c408

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UIntervalGizmo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIntervalGizmo::_vector_deleting_destructor__adjustor_40__(UIntervalGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UIntervalGizmo *)&this[-1].DownIntervalRange,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c418

/* [thunk]:public: virtual void * __ptr64 __cdecl ULocalInputBehaviorSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULocalInputBehaviorSource::_vector_deleting_destructor__adjustor_40__
          (ULocalInputBehaviorSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULocalInputBehaviorSource *)&this[-1].GetInputBehaviorsFunc.field_0x8,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c428

/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshSurfacePointTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMeshSurfacePointTool::_vector_deleting_destructor__adjustor_40__
          (UMeshSurfacePointTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMeshSurfacePointTool *)&this[-1].LastWorldRay.Direction,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14968c438

/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshSurfacePointTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UMeshSurfacePointTool::_vector_deleting_destructor__adjustor_192__
          (UMeshSurfacePointTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMeshSurfacePointTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14968c44c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshSurfacePointTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UMeshSurfacePointTool::_vector_deleting_destructor__adjustor_208__
          (UMeshSurfacePointTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMeshSurfacePointTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{216}' @ 14968c460

/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshSurfacePointTool::`vector deleting
   destructor'`adjustor{216}' (unsigned int) __ptr64 */

void * __thiscall
UMeshSurfacePointTool::_vector_deleting_destructor__adjustor_216__
          (UMeshSurfacePointTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMeshSurfacePointTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c474

/* [thunk]:public: virtual void * __ptr64 __cdecl UPlanePositionGizmo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPlanePositionGizmo::_vector_deleting_destructor__adjustor_40__
          (UPlanePositionGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPlanePositionGizmo *)&this[-1].CustomTickFunction.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14968c484

/* [thunk]:public: virtual void * __ptr64 __cdecl UPlanePositionGizmo::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPlanePositionGizmo::_vector_deleting_destructor__adjustor_56__
          (UPlanePositionGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPlanePositionGizmo *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14968c494

/* [thunk]:public: virtual void * __ptr64 __cdecl UPlanePositionGizmo::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UPlanePositionGizmo::_vector_deleting_destructor__adjustor_64__
          (UPlanePositionGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPlanePositionGizmo *)
                      ((longlong)&this[-1].LastInputRay.ScreenPosition.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c4a4

/* [thunk]:public: virtual void * __ptr64 __cdecl URepositionableTransformGizmo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URepositionableTransformGizmo::_vector_deleting_destructor__adjustor_40__
          (URepositionableTransformGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URepositionableTransformGizmo *)&this[-1].PivotAlignmentRayCaster.field_0x28,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c4b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UScalableSphereGizmo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UScalableSphereGizmo::_vector_deleting_destructor__adjustor_40__
          (UScalableSphereGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UScalableSphereGizmo *)&this[-1].DragCurrentPositionProjected,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14968c4c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UScalableSphereGizmo::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UScalableSphereGizmo::_vector_deleting_destructor__adjustor_56__
          (UScalableSphereGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UScalableSphereGizmo *)
                      ((longlong)&this[-1].DragStartWorldPosition.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c4d4

/* [thunk]:public: virtual void * __ptr64 __cdecl USimpleSingleClickGizmo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USimpleSingleClickGizmo::_vector_deleting_destructor__adjustor_40__
          (USimpleSingleClickGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USimpleSingleClickGizmo *)&this[-1].OnClick.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14968c4e4

/* [thunk]:public: virtual void * __ptr64 __cdecl USimpleSingleClickGizmo::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
USimpleSingleClickGizmo::_vector_deleting_destructor__adjustor_56__
          (USimpleSingleClickGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USimpleSingleClickGizmo *)&this[-1].OnClick,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14968c4f4

/* [thunk]:public: virtual void * __ptr64 __cdecl USimpleSingleClickGizmo::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
USimpleSingleClickGizmo::_vector_deleting_destructor__adjustor_64__
          (USimpleSingleClickGizmo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USimpleSingleClickGizmo *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c504

/* [thunk]:public: virtual void * __ptr64 __cdecl USingleClickTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USingleClickTool::_vector_deleting_destructor__adjustor_40__(USingleClickTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USingleClickTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14968c514

/* [thunk]:public: virtual void * __ptr64 __cdecl USingleClickTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
USingleClickTool::_vector_deleting_destructor__adjustor_192__(USingleClickTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USingleClickTool *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c528

/* [thunk]:public: virtual void * __ptr64 __cdecl USingleSelectionTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USingleSelectionTool::_vector_deleting_destructor__adjustor_40__
          (USingleSelectionTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USingleSelectionTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14968c538

/* [thunk]:public: virtual void * __ptr64 __cdecl USingleSelectionTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
USingleSelectionTool::_vector_deleting_destructor__adjustor_192__
          (USingleSelectionTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USingleSelectionTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14968c54c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UViewAdjustedStaticMeshGizmoComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_vector_deleting_destructor__adjustor_592__
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14968c560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UViewAdjustedStaticMeshGizmoComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_vector_deleting_destructor__adjustor_600__
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14968c574

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UViewAdjustedStaticMeshGizmoComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_vector_deleting_destructor__adjustor_608__
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14968c588

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UViewAdjustedStaticMeshGizmoComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_vector_deleting_destructor__adjustor_40__
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UViewAdjustedStaticMeshGizmoComponent *)
                      &this[-1].RenderVisibilityFunc.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 14968c598

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UViewAdjustedStaticMeshGizmoComponent::`vector
   deleting destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_vector_deleting_destructor__adjustor_1616__
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14968c5b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c5e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy,`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c610

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInputRouter,void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInputRouter,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c640

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c670

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<std::nullptr_t_(__cdecl*)(void),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<std::nullptr_t_(__cdecl*)(void),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A__TXZ_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),1,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector2_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c730

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c770

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<double_(__cdecl*)(double_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<double_(__cdecl*)(double_const_&),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c7b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TVector<double>),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TVector<double>),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXU__TVector_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c7f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(double_const_&,double_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(double_const_&,double_&),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),1,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),1,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UPlanePositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c8b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FInputDeviceState_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FInputDeviceState_const_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c8f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(double,double_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(double,double_&),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUAxisAngleGizmo___GizmoUtil_UE__YA_NPEAVUAxisAngleGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUAxisPositionGizmo___GizmoUtil_UE__YA_NPEAVUAxisPositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUFreePositionSubGizmo___GizmoUtil_UE__YA_NPEAVUFreePositionSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968c9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUFreeRotationSubGizmo___GizmoUtil_UE__YA_NPEAVUFreeRotationSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ca30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____SetCommonSubGizmoProperties_VUPlanePositionGizmo___GizmoUtil_UE__YA_NPEAVUPlanePositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ca70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformProxy::AddComponent'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968caf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USimpleSingleClickGizmo::InitializeWithComponent'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USimpleSingleClickGizmo::InitializeWithComponent'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ccb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x78);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cd60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`9'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::`9'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ce20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l12::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`12'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ce60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUAxisAngleGizmo___GizmoUtil_UE__YA_NPEAVUAxisAngleGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUAxisPositionGizmo___GizmoUtil_UE__YA_NPEAVUAxisPositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUFreePositionSubGizmo___GizmoUtil_UE__YA_NPEAVUFreePositionSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUFreeRotationSubGizmo___GizmoUtil_UE__YA_NPEAVUFreeRotationSubGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1____SetCommonSubGizmoProperties_VUPlanePositionGizmo___GizmoUtil_UE__YA_NPEAVUPlanePositionGizmo__AEBUFTransformSubGizmoCommonParams_23_PEAUFTransformSubGizmoSharedState_23_AEAPEAVUGizmoScaledAndUnscaledTransformSources___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformProxy::AddComponent'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTransformProxy::AddComponent'::`2'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968cfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`2'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d1a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`9'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::SetWorldAlignmentFunctions'::`9'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::`20'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIntervalGizmo::AddIntervalHandleGizmo'::`2'::<lambda_3>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d360

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`12'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d420

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_4>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_4>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`12'::<lambda_4>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d4e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UBaseBrushTool::Setup'::__l5::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_5>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_5>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`15'::<lambda_5>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_6>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`15'::<lambda_6>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_7>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`18'::<lambda_7>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_8>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::`18'::<lambda_8>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIntervalGizmoActorFactory,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FIntervalGizmoActorFactory,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d6a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d6e0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy,``UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d710

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UBaseBrushTool::Setup'::__l5::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d740

void * __thiscall
AIntervalGizmoActor::_scalar_deleting_destructor_(AIntervalGizmoActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AIntervalGizmoActor__6B_;
  AGizmoActor::~AGizmoActor((AGizmoActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d7a0

void * __thiscall FCommandChange::_scalar_deleting_destructor_(FCommandChange *this,uint param_1)

{
  *this = (FCommandChange)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d7e0

void * __thiscall
FComponentWorldTransformChange::_scalar_deleting_destructor_
          (FComponentWorldTransformChange *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->OnChangeAppliedFunc != 0) {
    plVar1 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d850

void * __thiscall
FFloatParameterProxyChange::_scalar_deleting_destructor_
          (FFloatParameterProxyChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d890

void * __thiscall
FGizmoFloatParameterChangeSource::_scalar_deleting_destructor_
          (FGizmoFloatParameterChangeSource *this,uint param_1)

{
  FFloatParameterProxyChange *pFVar1;
  
  this->_padding_ = (longlong)&___7FGizmoFloatParameterChangeSource__6B_;
  pFVar1 = (this->ActiveChange).Ptr;
  if (pFVar1 != (FFloatParameterProxyChange *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FGizmoLineHandleComponentSceneProxy::_scalar_deleting_destructor_
          (FGizmoLineHandleComponentSceneProxy *this,uint param_1)

{
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FGizmoRectangleComponentSceneProxy::_scalar_deleting_destructor_
          (FGizmoRectangleComponentSceneProxy *this,uint param_1)

{
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d970

void * __thiscall
FIntervalGizmoChangeBroadcaster::_scalar_deleting_destructor_
          (FIntervalGizmoChangeBroadcaster *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968d9b0

void * __thiscall
UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::_scalar_deleting_destructor_
          (FSubGizmoTransformAdjuster *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IViewBasedTransformAdjuster_GizmoRenderingUtil_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968da20

void * __thiscall
FToolCommandChange::_scalar_deleting_destructor_(FToolCommandChange *this,uint param_1)

{
  *this = (FToolCommandChange)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968da60

void * __thiscall
FTransformProxyChange::_scalar_deleting_destructor_(FTransformProxyChange *this,uint param_1)

{
  *(undefined ***)this = &___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968daa0

void * __thiscall
FTransformProxyChangeSource::_scalar_deleting_destructor_
          (FTransformProxyChangeSource *this,uint param_1)

{
  FTransformProxyChange *pFVar1;
  
  this->_padding_ = (longlong)&___7FTransformProxyChangeSource__6B_;
  pFVar1 = (this->ActiveChange).Ptr;
  if (pFVar1 != (FTransformProxyChange *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968db00

void * __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshGizmoComponentProxy::
_scalar_deleting_destructor_(FViewAdjustedStaticMeshGizmoComponentProxy *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->RenderVisibilityFunc != 0) {
    plVar1 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
    plVar2 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformAdjuster).SharedReferenceCount.ReferenceController);
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xbe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968db70

void * __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshSceneProxyDesc::
_scalar_deleting_destructor_(FViewAdjustedStaticMeshSceneProxyDesc *this,uint param_1)

{
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dbb0

void * __thiscall
IGizmoClickMultiTarget::_scalar_deleting_destructor_(IGizmoClickMultiTarget *this,uint param_1)

{
  *this = (IGizmoClickMultiTarget)&___7IGizmoClickMultiTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dbf0

void * __thiscall
IGizmoClickTarget::_scalar_deleting_destructor_(IGizmoClickTarget *this,uint param_1)

{
  *this = (IGizmoClickTarget)&___7IGizmoClickTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dc30

void * __thiscall
IGizmoFloatParameterSource::_scalar_deleting_destructor_
          (IGizmoFloatParameterSource *this,uint param_1)

{
  *this = (IGizmoFloatParameterSource)&___7IGizmoFloatParameterSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dc70

void * __thiscall
IGizmoStateTarget::_scalar_deleting_destructor_(IGizmoStateTarget *this,uint param_1)

{
  *this = (IGizmoStateTarget)&___7IGizmoStateTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dcb0

void * __thiscall
IGizmoTransformSource::_scalar_deleting_destructor_(IGizmoTransformSource *this,uint param_1)

{
  *this = (IGizmoTransformSource)&___7IGizmoTransformSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dcf0

void * __thiscall
IInputBehaviorSource::_scalar_deleting_destructor_(IInputBehaviorSource *this,uint param_1)

{
  *this = (IInputBehaviorSource)&___7IInputBehaviorSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dd30

void * __thiscall
IInteractiveToolCameraFocusAPI::_scalar_deleting_destructor_
          (IInteractiveToolCameraFocusAPI *this,uint param_1)

{
  *this = (IInteractiveToolCameraFocusAPI)&___7IInteractiveToolCameraFocusAPI__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968dd70

void * __thiscall
IToolCommandChangeSource::_scalar_deleting_destructor_(IToolCommandChangeSource *this,uint param_1)

{
  *this = (IToolCommandChangeSource)&___7IToolCommandChangeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ddb0

void * __thiscall
UE::GizmoRenderingUtil::IViewBasedTransformAdjuster::_scalar_deleting_destructor_
          (IViewBasedTransformAdjuster *this,uint param_1)

{
  *this = (IViewBasedTransformAdjuster)&___7IViewBasedTransformAdjuster_GizmoRenderingUtil_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ddf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall UBaseBrushTool::_scalar_deleting_destructor_(UBaseBrushTool *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  pvVar1 = *(void **)&(this->PropertyClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ded0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UBrushAdjusterInputBehavior::_scalar_deleting_destructor_
          (UBrushAdjusterInputBehavior *this,uint param_1)

{
  *(undefined ***)this = &___7UBrushAdjusterInputBehavior__6B_;
  UAnyButtonInputBehavior::~UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968df30

void * __thiscall
UBrushBaseProperties::_scalar_deleting_destructor_(UBrushBaseProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968df90

void * __thiscall UClickDragTool::_scalar_deleting_destructor_(UClickDragTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e010

void * __thiscall
UClickDragToolBuilder::_scalar_deleting_destructor_(UClickDragToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UClickDragToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e070

void * __thiscall
UCombinedTransformGizmoContextObject::_scalar_deleting_destructor_
          (UCombinedTransformGizmoContextObject *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoContextObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGizmoCreated).field_0x8,*(int *)&(this->OnGizmoCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnGizmoCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGizmoCreated);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e110

void * __thiscall
UContextObjectStore::_scalar_deleting_destructor_(UContextObjectStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContextObjectStore__6B_;
  pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e180

void * __thiscall
UGizmoAxisIntervalParameterSource::_scalar_deleting_destructor_
          (UGizmoAxisIntervalParameterSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e1f0

void * __thiscall
UGizmoAxisRotationParameterSource::_scalar_deleting_destructor_
          (UGizmoAxisRotationParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  if (*(longlong *)&this->RotationConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->RotationConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->RotationConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AngleDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AngleDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AngleDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e2a0

void * __thiscall
UGizmoAxisScaleParameterSource::_scalar_deleting_destructor_
          (UGizmoAxisScaleParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  if (*(longlong *)&this->ScaleConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ScaleAxisDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleAxisDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleAxisDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e350

void * __thiscall
UGizmoAxisSource::_scalar_deleting_destructor_(UGizmoAxisSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e3b0

void * __thiscall
UGizmoAxisTranslationParameterSource::_scalar_deleting_destructor_
          (UGizmoAxisTranslationParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  if (*(longlong *)&this->PositionConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->PositionConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->PositionConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e460

void * __thiscall
UGizmoBaseFloatParameterSource::_scalar_deleting_destructor_
          (UGizmoBaseFloatParameterSource *this,uint param_1)

{
  ~UGizmoBaseFloatParameterSource(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e4c0

void * __thiscall
UGizmoBaseTransformSource::_scalar_deleting_destructor_
          (UGizmoBaseTransformSource *this,uint param_1)

{
  ~UGizmoBaseTransformSource(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e520

void * __thiscall
UGizmoClickMultiTarget::_scalar_deleting_destructor_(UGizmoClickMultiTarget *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e580

void * __thiscall
UGizmoClickTarget::_scalar_deleting_destructor_(UGizmoClickTarget *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UGizmoComponentHitTarget::_scalar_deleting_destructor_(UGizmoComponentHitTarget *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  if (*(longlong *)&this->UpdateSubduedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSubduedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSubduedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateSelectedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSelectedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSelectedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateInteractingFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateInteractingFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateInteractingFunction).field_0x10;
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
  if (*(longlong *)&this->Condition != 0) {
    plVar1 = *(longlong **)&(this->Condition).field_0x28;
    plVar2 = (longlong *)&(this->Condition).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UGizmoComponentWorldTransformSource::_scalar_deleting_destructor_
          (UGizmoComponentWorldTransformSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e770

void * __thiscall
UGizmoElementBase::_scalar_deleting_destructor_(UGizmoElementBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e7d0

void * __thiscall
UGizmoElementBox::_scalar_deleting_destructor_(UGizmoElementBox *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e830

void * __thiscall
UGizmoElementCircle::_scalar_deleting_destructor_(UGizmoElementCircle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e890

void * __thiscall
UGizmoElementCircleBase::_scalar_deleting_destructor_(UGizmoElementCircleBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e8f0

void * __thiscall
UGizmoElementCone::_scalar_deleting_destructor_(UGizmoElementCone *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e950

void * __thiscall
UGizmoElementCylinder::_scalar_deleting_destructor_(UGizmoElementCylinder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968e9b0

void * __thiscall
UGizmoElementGroup::_scalar_deleting_destructor_(UGizmoElementGroup *this,uint param_1)

{
  *(undefined ***)this = &___7UGizmoElementGroupBase__6B_;
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  *(undefined ***)this = &___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ea30

void * __thiscall
UGizmoElementGroupBase::_scalar_deleting_destructor_(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968eab0

void * __thiscall
UGizmoElementHitMultiTarget::_scalar_deleting_destructor_
          (UGizmoElementHitMultiTarget *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickMultiTarget__;
  if (*(longlong *)&this->Condition != 0) {
    plVar1 = *(longlong **)&(this->Condition).field_0x28;
    plVar2 = (longlong *)&(this->Condition).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickMultiTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968eb50

void * __thiscall
UGizmoElementHitTarget::_scalar_deleting_destructor_(UGizmoElementHitTarget *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  if (*(longlong *)&this->Condition != 0) {
    plVar1 = *(longlong **)&(this->Condition).field_0x28;
    plVar2 = (longlong *)&(this->Condition).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ebf0

void * __thiscall
UGizmoElementLineBase::_scalar_deleting_destructor_(UGizmoElementLineBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ec50

void * __thiscall
UGizmoElementLineStrip::_scalar_deleting_destructor_(UGizmoElementLineStrip *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
  pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ece0

void * __thiscall
UGizmoElementRectangle::_scalar_deleting_destructor_(UGizmoElementRectangle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ed40

void * __thiscall
UGizmoElementSphere::_scalar_deleting_destructor_(UGizmoElementSphere *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968eda0

void * __thiscall
UGizmoElementTorus::_scalar_deleting_destructor_(UGizmoElementTorus *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ee00

void * __thiscall
UGizmoElementTriangleList::_scalar_deleting_destructor_
          (UGizmoElementTriangleList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
  pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ee90

void * __thiscall
UGizmoFloatParameterSource::_scalar_deleting_destructor_
          (UGizmoFloatParameterSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968eef0

void * __thiscall
UGizmoLambdaHitTarget::_scalar_deleting_destructor_(UGizmoLambdaHitTarget *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  if (*(longlong *)&this->UpdateSubdueFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSubdueFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSubdueFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateSelectedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSelectedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSelectedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateInteractingFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateInteractingFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateInteractingFunction).field_0x10;
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
  if (*(longlong *)&this->IsHitFunction != 0) {
    plVar1 = *(longlong **)&(this->IsHitFunction).field_0x28;
    plVar2 = (longlong *)&(this->IsHitFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f010

void * __thiscall
UGizmoLambdaStateTarget::_scalar_deleting_destructor_(UGizmoLambdaStateTarget *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  if (*(longlong *)&this->EndUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->EndUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->EndUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->BeginUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->BeginUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->BeginUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f0c0

void * __thiscall
UGizmoLineHandleComponent::_scalar_deleting_destructor_
          (UGizmoLineHandleComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
  UGizmoBaseComponent::~UGizmoBaseComponent((UGizmoBaseComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f170

void * __thiscall
UGizmoLocalFloatParameterSource::_scalar_deleting_destructor_
          (UGizmoLocalFloatParameterSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f1e0

void * __thiscall
UGizmoNilStateTarget::_scalar_deleting_destructor_(UGizmoNilStateTarget *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f250

void * __thiscall
UGizmoObjectModifyStateTarget::_scalar_deleting_destructor_
          (UGizmoObjectModifyStateTarget *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  pIVar1 = (this->TransactionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f2e0

void * __thiscall
UGizmoPlaneScaleParameterSource::_scalar_deleting_destructor_
          (UGizmoPlaneScaleParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  if (*(longlong *)&this->ScaleConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ScaleAxisYDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleAxisYDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleAxisYDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ScaleAxisXDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleAxisXDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleAxisXDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PositionConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->PositionConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->PositionConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f3d0

void * __thiscall
UGizmoPlaneTranslationParameterSource::_scalar_deleting_destructor_
          (UGizmoPlaneTranslationParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  if (*(longlong *)&this->PositionConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->PositionConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->PositionConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisYDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisYDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisYDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisXDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisXDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisXDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f4a0

void * __thiscall
UGizmoRectangleComponent::_scalar_deleting_destructor_(UGizmoRectangleComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
  UGizmoBaseComponent::~UGizmoBaseComponent((UGizmoBaseComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f550

void * __thiscall
UGizmoRenderMultiTarget::_scalar_deleting_destructor_(UGizmoRenderMultiTarget *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f5b0

void * __thiscall
UGizmoRenderTarget::_scalar_deleting_destructor_(UGizmoRenderTarget *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f610

void * __thiscall
UGizmoScaledAndUnscaledTransformSources::_scalar_deleting_destructor_
          (UGizmoScaledAndUnscaledTransformSources *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f680

void * __thiscall
UGizmoScaledTransformSource::_scalar_deleting_destructor_
          (UGizmoScaledTransformSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  if (*(longlong *)&(this->ScaleProvider).SetScale != 0) {
    plVar1 = *(longlong **)&(this->ScaleProvider).SetScale.field_0x28;
    plVar2 = (longlong *)&(this->ScaleProvider).SetScale.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ScaleProvider).GetScale != 0) {
    plVar1 = *(longlong **)&(this->ScaleProvider).GetScale.field_0x28;
    plVar2 = (longlong *)&(this->ScaleProvider).GetScale.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f730

void * __thiscall
UGizmoStateTarget::_scalar_deleting_destructor_(UGizmoStateTarget *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f790

void * __thiscall
UGizmoTransformChangeStateTarget::_scalar_deleting_destructor_
          (UGizmoTransformChangeStateTarget *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  pFVar1 = (this->ExternalDependentChangeSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int>
            ((TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_> *)
             (this->DependentChangeSources).AllocatorInstance.Data,
             (this->DependentChangeSources).ArrayNum);
  pFVar1 = (this->DependentChangeSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ChangeDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f850

void * __thiscall
UGizmoTransformProxyTransformSource::_scalar_deleting_destructor_
          (UGizmoTransformProxyTransformSource *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPivotChanged).field_0x8,*(int *)&(this->OnPivotChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnPivotChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPivotChanged);
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f8f0

void * __thiscall
UGizmoTransformSource::_scalar_deleting_destructor_(UGizmoTransformSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968f950

void * __thiscall
UGizmoUniformScaleParameterSource::_scalar_deleting_destructor_
          (UGizmoUniformScaleParameterSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  if (*(longlong *)&this->ScaleConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ScaleAxisDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleAxisDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleAxisDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fa00

void * __thiscall
UGizmoVec2ParameterSource::_scalar_deleting_destructor_
          (UGizmoVec2ParameterSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fa60

void * __thiscall
UGizmoViewContext::_scalar_deleting_destructor_(UGizmoViewContext *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fad0

void * __thiscall UInputBehavior::_scalar_deleting_destructor_(UInputBehavior *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInputBehavior__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CaptureStealing).Getter);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fb40

void * __thiscall
UInputBehaviorSet::_scalar_deleting_destructor_(UInputBehaviorSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputBehaviorSet__6B_;
  DestructItems<FBehaviorInfo,int>
            ((FBehaviorInfo *)(this->Behaviors).AllocatorInstance.Data,(this->Behaviors).ArrayNum);
  pFVar1 = (this->Behaviors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fbc0

void * __thiscall
UInputBehaviorSource::_scalar_deleting_destructor_(UInputBehaviorSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fc20

/* WARNING: Type propagation algorithm not settling */

void * __thiscall UInputRouter::_scalar_deleting_destructor_(UInputRouter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInputRouter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Right.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Middle.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Left.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Keyboard.ActiveKey.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fcc0

void * __thiscall
UInteractionMechanic::_scalar_deleting_destructor_(UInteractionMechanic *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInteractionMechanic__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall UIntervalGizmo::_scalar_deleting_destructor_(UIntervalGizmo *this,uint param_1)

{
  ~UIntervalGizmo(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fd80

void * __thiscall
UIntervalGizmoBuilder::_scalar_deleting_destructor_(UIntervalGizmoBuilder *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fe30

void * __thiscall
ULocalInputBehaviorSource::_scalar_deleting_destructor_
          (ULocalInputBehaviorSource *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  if (*(longlong *)&this->GetInputBehaviorsFunc != 0) {
    plVar1 = *(longlong **)&(this->GetInputBehaviorsFunc).field_0x28;
    plVar2 = (longlong *)&(this->GetInputBehaviorsFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IInputBehaviorSource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968fed0

void * __thiscall
UMeshSurfacePointTool::_scalar_deleting_destructor_(UMeshSurfacePointTool *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ff60

void * __thiscall
UMeshSurfacePointToolBuilder::_scalar_deleting_destructor_
          (UMeshSurfacePointToolBuilder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSurfacePointToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14968ffc0

void * __thiscall
UPlanePositionGizmo::_scalar_deleting_destructor_(UPlanePositionGizmo *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if (*(longlong *)&this->CustomTickFunction != 0) {
    plVar1 = *(longlong **)&(this->CustomTickFunction).field_0x28;
    plVar2 = (longlong *)&(this->CustomTickFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->CustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->CustomDestinationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ShouldUseCustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1496900c0

void * __thiscall
UPlanePositionGizmoBuilder::_scalar_deleting_destructor_
          (UPlanePositionGizmoBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UPlanePositionGizmoBuilder__6B_;
  UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
URepositionableTransformGizmo::_scalar_deleting_destructor_
          (URepositionableTransformGizmo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  pFVar1 = (this->PivotAlignmentGizmos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PivotAlignmentRayCaster != 0) {
    plVar2 = *(longlong **)&(this->PivotAlignmentRayCaster).field_0x28;
    plVar3 = (longlong *)&(this->PivotAlignmentRayCaster).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAlignPivot != 0) {
    plVar2 = *(longlong **)&(this->ShouldAlignPivot).field_0x28;
    plVar3 = (longlong *)&(this->ShouldAlignPivot).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UCombinedTransformGizmo::~UCombinedTransformGizmo((UCombinedTransformGizmo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1496901f0

void * __thiscall
URepositionableTransformGizmoBuilder::_scalar_deleting_destructor_
          (URepositionableTransformGizmoBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7URepositionableTransformGizmoBuilder__6B_;
  UCombinedTransformGizmoBuilder::~UCombinedTransformGizmoBuilder
            ((UCombinedTransformGizmoBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690250

void * __thiscall
UScalableSphereGizmo::_scalar_deleting_destructor_(UScalableSphereGizmo *this,uint param_1)

{
  ITextData *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &___7UScalableSphereGizmo__6B_;
  pIVar1 = (this->TransactionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (*(longlong *)&this->UpdateRadiusFunc != 0) {
    plVar2 = *(longlong **)&(this->UpdateRadiusFunc).field_0x28;
    plVar3 = (longlong *)&(this->UpdateRadiusFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690300

void * __thiscall
UScalableSphereGizmoBuilder::_scalar_deleting_destructor_
          (UScalableSphereGizmoBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UScalableSphereGizmoBuilder__6B_;
  UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690360

void * __thiscall
UScalableSphereGizmoInputBehavior::_scalar_deleting_destructor_
          (UScalableSphereGizmoInputBehavior *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
  UAnyButtonInputBehavior::~UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1496903c0

void * __thiscall
USimpleLambdaInteractiveGizmoBuilder::_scalar_deleting_destructor_
          (USimpleLambdaInteractiveGizmoBuilder *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7USimpleLambdaInteractiveGizmoBuilder__6B_;
  if (*(longlong *)&this->BuilderFunc != 0) {
    plVar1 = *(longlong **)&(this->BuilderFunc).field_0x28;
    plVar2 = (longlong *)&(this->BuilderFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690440

void * __thiscall
USimpleSingleClickGizmo::_scalar_deleting_destructor_(USimpleSingleClickGizmo *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnClick).field_0x8,
             *(int *)&(this->OnClick).field_0x10);
  pvVar1 = *(void **)&(this->OnClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClick);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690510

void * __thiscall
USingleClickTool::_scalar_deleting_destructor_(USingleClickTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690590

void * __thiscall
USingleClickToolBuilder::_scalar_deleting_destructor_(USingleClickToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7USingleClickToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1496905f0

void * __thiscall
USingleSelectionTool::_scalar_deleting_destructor_(USingleSelectionTool *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149690670

void * __thiscall UTransformProxy::_scalar_deleting_destructor_(UTransformProxy *this,uint param_1)

{
  ~UTransformProxy(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1496906d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_scalar_deleting_destructor_
          (UViewAdjustedStaticMeshGizmoComponent *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
  if (*(longlong *)&this->RenderVisibilityFunc != 0) {
    plVar1 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
    plVar2 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformAdjuster).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IGizmoBaseComponentInterface__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6c0);
  }
  return this;
}

// AddComponentTargetFactory @ 149691550

int __cdecl
AddComponentTargetFactory
          (TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_> param_1)

{
  FComponentTargetFactory FVar1;
  int iVar2;
  int local_res8 [4];
  int *local_18;
  FComponentTargetFactory *local_10;
  
  iVar2 = FactoryUniqueKeyGenerator;
  local_res8[0] = FactoryUniqueKeyGenerator;
  FactoryUniqueKeyGenerator = FactoryUniqueKeyGenerator + 1;
  local_18 = local_res8;
  local_10 = param_1.Ptr;
  TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&&,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
              *)&Factories,
             (TPairInitializer<unsigned_int_&&,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_&&>
              *)(local_res8 + 2),(bool *)&local_18);
  FVar1 = *param_1.Ptr;
  if (FVar1 != (FComponentTargetFactory)0x0) {
    (*(code *)**(undefined8 **)FVar1)(FVar1,1);
  }
  return iVar2;
}

// CalculateLocalPixelToWorldScale @ 149694c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl
GizmoRenderingUtil::CalculateLocalPixelToWorldScale(FSceneView *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TOptional<double> local_28;
  ISceneViewInterface local_18;
  FSceneView *local_10;
  
  if (param_1 != (FSceneView *)0x0) {
    local_28.TypedValue = __real_3ff0000000000000;
    local_18 = (ISceneViewInterface)&___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
    local_28.bIsSet = true;
    local_10 = param_1;
    fVar3 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                      (&local_18,param_2,true,&local_28);
    return fVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2511063092146733176>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoRenderingUtil.cpp"
                     ,0x78,"View");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return __real_3f800000;
}

// CalculateLocalPixelToWorldScale @ 149694cd0

float __cdecl
GizmoRenderingUtil::CalculateLocalPixelToWorldScale
          (UGizmoViewContext *param_1,TVector<double> *param_2)

{
  ISceneViewInterface *pIVar1;
  float fVar2;
  TOptional<double> local_18;
  
  local_18.bIsSet = false;
  pIVar1 = (ISceneViewInterface *)&param_1->field_0x28;
  if (param_1 == (UGizmoViewContext *)0x0) {
    pIVar1 = (ISceneViewInterface *)0x0;
  }
  fVar2 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale(pIVar1,param_2,false,&local_18);
  return fVar2;
}

// CalculateViewDependentScaleAndFlatten @ 149694f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl
GizmoRenderingUtil::CalculateViewDependentScaleAndFlatten
          (FSceneView *param_1,TVector<double> *param_2,float param_3,TVector<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != (FSceneView *)0x0) {
    fVar3 = UE::GizmoRenderingUtil::CalculateViewDependentScaleAndFlatten
                      (param_1,param_2,param_3,param_4);
    return fVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2511063092146733227>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoRenderingUtil.cpp"
                     ,0xab,"View");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return __real_3f800000;
}

// CanMakeComponentTarget @ 149696a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl CanMakeComponentTarget(UActorComponent *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  uVar8 = 1;
  iVar14 = 0;
  uVar12 = Factories._40_4_;
  uVar9 = 0;
  if (uVar12 != 0) {
    puVar15 = (uint *)&Factories.field_0x10;
    if (Factories._32_8_ != 0) {
      puVar15 = (uint *)Factories._32_8_;
    }
    uVar9 = *puVar15;
    while (uVar9 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_149696b03;
      uVar9 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar9 = local_res18 + -1 + iVar14;
    if ((int)uVar12 < (int)uVar9) {
      uVar9 = uVar12;
    }
  }
LAB_149696b03:
  uVar16 = uVar12 & 0xffffffe0;
  bVar4 = Factories._40_1_;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = uVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,Factories._8_4_ - Factories._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Factories.field_0x10;
  uVar9 = uVar12;
  if ((int)uVar12 < 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar9 = Factories._40_4_;
  }
  if (uVar12 != uVar9) {
    lVar10 = 0x154c8a690;
    if (Factories._32_8_ != 0) {
      lVar10 = Factories._32_8_;
    }
    uVar12 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149696c20;
      uVar12 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_149696c20:
  while( true ) {
    if (Factories._8_4_ - Factories._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Factories.field_0x10)) break;
    plVar2 = *(longlong **)(Factories._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    cVar7 = (**(code **)(*plVar2 + 8))(plVar2,param_1);
    if (cVar7 != '\0') {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// ClosetPointOnCircle @ 149698600

void __cdecl
GizmoMath::ClosetPointOnCircle
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90 [5];
  
  auVar8._4_12_ = in_register_000012c4;
  auVar8._0_4_ = param_4;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar7 = (param_1->field0_0x0)._s_0.Y - dVar2;
  dVar6 = (param_1->field0_0x0)._s_0.Z - dVar3;
  dVar4 = (double)param_4;
  dVar10 = (param_3->field0_0x0)._s_0.Y * dVar7 + (param_3->field0_0x0)._s_0.X * dVar5 +
           (param_3->field0_0x0)._s_0.Z * dVar6;
  dVar5 = dVar5 - dVar10 * (param_3->field0_0x0)._s_0.X;
  dVar7 = dVar7 - dVar10 * (param_3->field0_0x0)._s_0.Y;
  dVar6 = dVar6 - dVar10 * (param_3->field0_0x0)._s_0.Z;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    MakeNormalPlaneBasis(param_3,(TVector<double> *)&local_a8._s_0,local_90);
    dVar6 = dVar4 * local_a8._s_0.Z;
    dVar7 = dVar4 * local_a8._s_0.Y;
    dVar4 = dVar4 * local_a8._s_0.X;
  }
  else {
    dVar4 = dVar4 / auVar9._0_8_;
    dVar6 = dVar4 * dVar6;
    dVar7 = dVar4 * dVar7;
    dVar4 = dVar4 * dVar5;
  }
  (param_5->field0_0x0)._s_0.X = dVar1 + dVar4;
  (param_5->field0_0x0)._s_0.Y = dVar2 + dVar7;
  (param_5->field0_0x0)._s_0.Z = dVar3 + dVar6;
  return;
}

// ComputeAngleInPlane @ 149698c10

float __cdecl
GizmoMath::ComputeAngleInPlane
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = atan2(dVar2 * (param_5->field0_0x0)._s_0.Z +
                dVar1 * (param_5->field0_0x0)._s_0.Y + dVar3 * (param_5->field0_0x0)._s_0.X,
                dVar1 * (param_4->field0_0x0)._s_0.Y + dVar3 * (param_4->field0_0x0)._s_0.X +
                dVar2 * (param_4->field0_0x0)._s_0.Z);
  return (float)dVar1;
}

// ComputeCoordinatesInPlane @ 149698c90

TVector2<double> * __cdecl
GizmoMath::ComputeCoordinatesInPlane
          (TVector2<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_5->field0_0x0)._s_0.Y;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar3 = (param_5->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar6 * (param_4->field0_0x0)._s_0.Y + dVar5 * (param_4->field0_0x0)._s_0.X +
       dVar4 * (param_4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar1 + dVar5 * dVar2 + dVar4 * dVar3;
  return __return_storage_ptr__;
}

// DrawDisc @ 14969cad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
GizmoConeComponentLocals::DrawDisc
          (FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,double param_5,int param_6,UMaterialInterface *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  bool bVar10;
  FMaterialRenderProxy *pFVar11;
  int iVar12;
  int iVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar14;
  double dVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStackY_1e8 [32];
  TVector<float>_u_0 local_198;
  TVector<float>_u_0 local_18c;
  TVector<float>_u_0 local_180;
  UMaterialInterface *local_170;
  FPrimitiveDrawInterface *local_168;
  FDynamicMeshBuilder local_160;
  TVector<float>_u_0 local_138;
  ulonglong local_12c;
  undefined8 local_ec;
  FColor_u_0 local_e4;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_170 = param_7;
  local_168 = param_1;
  if ((param_6 < 3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumSides >= 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementCone.cpp"
                          ,0x12,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.X;
  iVar12 = 0;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  fVar16 = __real_3f800000 / (float)param_6;
  dVar14 = (param_3->field0_0x0)._s_0.Z;
  dVar15 = (param_4->field0_0x0)._s_0.Y;
  dVar7 = (param_4->field0_0x0)._s_0.Z;
  dVar8 = (param_4->field0_0x0)._s_0.Y;
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_160,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  if (0 < param_6) {
    local_198._s_0.X = (float)(dVar3 * dVar4 - dVar14 * dVar15);
    local_198._s_0.Z = (float)(dVar1 * dVar8 - dVar2 * dVar6);
    local_198._s_0.Y = (float)(dVar2 * dVar5 - dVar1 * dVar7);
    uVar17 = (uint)__xmm_80000000000000008000000000000000;
    uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    iVar13 = iVar12;
    do {
      __libm_sse2_sincosf_();
      dVar1 = *(double *)&param_3->field0_0x0;
      dVar2 = (param_4->field0_0x0)._s_0.X;
      dVar3 = *(double *)((longlong)&param_3->field0_0x0 + 8);
      dVar4 = (param_4->field0_0x0)._s_0.Y;
      dVar5 = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
      dVar6 = (param_4->field0_0x0)._s_0.Z;
      dVar15 = (double)extraout_XMM0_Da;
      local_ec = 0;
      local_e4 = FColor::White.field0_0x0;
      dVar14 = (double)extraout_XMM0_Db;
      local_138._s_0.X =
           (float)((dVar15 * dVar2 + dVar14 * dVar1) * param_5 + (param_2->field0_0x0)._s_0.X);
      local_180._s_0.X = (float)dVar2;
      local_180._s_0.Z = (float)dVar6;
      local_138._s_0.Y =
           (float)((dVar15 * dVar4 + dVar14 * dVar3) * param_5 + (param_2->field0_0x0)._s_0.Y);
      local_138._s_0.Z =
           (float)((dVar15 * dVar6 + dVar14 * dVar5) * param_5 + (param_2->field0_0x0)._s_0.Z);
      local_12c = (ulonglong)(uint)((float)iVar13 * fVar16 + 0.0);
      local_18c._s_0.X =
           (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar18,SUB84(dVar1,0) ^ uVar17
                                  );
      local_18c._s_0.Y =
           (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar18,SUB84(dVar3,0) ^ uVar17
                                  );
      local_18c._s_0.Z =
           (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar18,SUB84(dVar5,0) ^ uVar17
                                  );
      local_180._s_0.Y = (float)dVar4;
      FDynamicMeshVertex::SetTangents
                ((FDynamicMeshVertex *)&local_138._s_0,(TVector<float> *)&local_180._s_0,
                 (TVector<float> *)&local_18c._s_0,(TVector<float> *)&local_198._s_0);
      FDynamicMeshBuilder::AddVertex(&local_160,(FDynamicMeshVertex *)&local_138._s_0);
      iVar13 = iVar13 + 1;
      param_1 = local_168;
      param_7 = local_170;
    } while (iVar13 < param_6);
  }
  if (0 < param_6 + -1) {
    do {
      iVar13 = iVar12 + 1;
      FDynamicMeshBuilder::AddTriangle(&local_160,0,iVar12,iVar13);
      FDynamicMeshBuilder::AddTriangle(&local_160,0,iVar13,iVar12);
      iVar12 = iVar13;
    } while (iVar13 < param_6 + -1);
  }
  pFVar11 = (FMaterialRenderProxy *)(**(code **)(param_7->_padding_ + 0x310))(param_7);
  FDynamicMeshBuilder::Draw
            (&local_160,param_1,&UE::Math::TMatrix<double>::Identity,pFVar11,'\x01',false,true,
             (FHitProxyId)0xffffffff);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_160);
  return;
}

// EmptyLinkFunctionForGeneratedCodeBaseBrushTool @ 14969d6e0

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseBrushTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClickDragTool @ 14969d6f0

void __cdecl EmptyLinkFunctionForGeneratedCodeClickDragTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContextObjectStore @ 14969d700

void __cdecl EmptyLinkFunctionForGeneratedCodeContextObjectStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementBase @ 14969d710

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementBox @ 14969d720

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementBox(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementCircle @ 14969d730

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementCircle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementCircleBase @ 14969d740

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementCircleBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementCone @ 14969d750

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementCone(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementCylinder @ 14969d760

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementCylinder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementGroup @ 14969d770

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementGroup(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementHitTargets @ 14969d780

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementHitTargets(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementLineBase @ 14969d790

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementLineBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementLineStrip @ 14969d7a0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementLineStrip(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementRectangle @ 14969d7b0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementRectangle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementRenderState @ 14969d7c0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementRenderState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementShared @ 14969d7d0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementShared(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementSphere @ 14969d7e0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementSphere(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementTorus @ 14969d7f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementTorus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoElementTriangleList @ 14969d800

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoElementTriangleList(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoInterfaces @ 14969d810

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoInterfaces(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoLineHandleComponent @ 14969d820

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoLineHandleComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoRectangleComponent @ 14969d830

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoRectangleComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoUtil @ 14969d840

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoUtil(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGizmoViewContext @ 14969d850

void __cdecl EmptyLinkFunctionForGeneratedCodeGizmoViewContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHitTargets @ 14969d860

void __cdecl EmptyLinkFunctionForGeneratedCodeHitTargets(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputBehavior @ 14969d870

void __cdecl EmptyLinkFunctionForGeneratedCodeInputBehavior(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputBehaviorSet @ 14969d880

void __cdecl EmptyLinkFunctionForGeneratedCodeInputBehaviorSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputRouter @ 14969d890

void __cdecl EmptyLinkFunctionForGeneratedCodeInputRouter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputState @ 14969d8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeInputState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInteractionMechanic @ 14969d8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeInteractionMechanic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIntervalGizmo @ 14969d8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeIntervalGizmo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSurfacePointTool @ 14969d8d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSurfacePointTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeParameterSourcesFloat @ 14969d8e0

void __cdecl EmptyLinkFunctionForGeneratedCodeParameterSourcesFloat(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeParameterToTransformAdapters @ 14969d8f0

void __cdecl EmptyLinkFunctionForGeneratedCodeParameterToTransformAdapters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePlanePositionGizmo @ 14969d900

void __cdecl EmptyLinkFunctionForGeneratedCodePlanePositionGizmo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRepositionableTransformGizmo @ 14969d910

void __cdecl EmptyLinkFunctionForGeneratedCodeRepositionableTransformGizmo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScalableSphereGizmo @ 14969d920

void __cdecl EmptyLinkFunctionForGeneratedCodeScalableSphereGizmo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSimpleSingleClickGizmo @ 14969d930

void __cdecl EmptyLinkFunctionForGeneratedCodeSimpleSingleClickGizmo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSingleClickTool @ 14969d940

void __cdecl EmptyLinkFunctionForGeneratedCodeSingleClickTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSingleSelectionTool @ 14969d950

void __cdecl EmptyLinkFunctionForGeneratedCodeSingleSelectionTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTargets @ 14969d960

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTargets(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformGizmoUtil @ 14969d970

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformGizmoUtil(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformProxy @ 14969d980

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformSources @ 14969d990

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformSources(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeViewAdjustedStaticMeshGizmoComponent @ 14969d9a0

void __cdecl EmptyLinkFunctionForGeneratedCodeViewAdjustedStaticMeshGizmoComponent(void)

{
  return;
}

// FindComponentTargetFactoryByKey @ 14969eae0

FComponentTargetFactory * __cdecl FindComponentTargetFactoryByKey(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (Factories._8_4_ != Factories._52_4_) {
    lVar3 = 0x154c8a6b8;
    if (Factories._64_8_ != 0) {
      lVar3 = Factories._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(Factories._72_4_ - 1 & param_1) * 4);
    while (iVar1 != -1) {
      lVar3 = Factories._0_8_ + (longlong)iVar1 * 0x18;
      if (*(int *)(Factories._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        puVar2 = (undefined8 *)(lVar3 + 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 == (undefined8 *)0x0) {
          return (FComponentTargetFactory *)0x0;
        }
        return (FComponentTargetFactory *)*puVar2;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  return (FComponentTargetFactory *)0x0;
}

// GetComponentToGizmoScaling @ 1496a06b0

double __cdecl
ViewBasedTransformAdjustersLocals::GetComponentToGizmoScaling
          (ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  TVector<double>_u_0 local_98;
  undefined1 local_80 [24];
  undefined1 local_68 [16];
  double local_58;
  TVector<double> local_50 [3];
  
  dVar4 = (param_2->Translation).ZW.m128d_f64[0];
  dVar5 = (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  pdVar7 = (double *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_80);
  dVar1 = *pdVar7;
  dVar2 = pdVar7[1];
  dVar3 = pdVar7[2];
  local_58 = dVar4;
  pdVar7 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_50);
  dVar1 = (dVar6 - dVar2) * pdVar7[1] + (dVar5 - dVar1) * *pdVar7 + (dVar4 - dVar3) * pdVar7[2];
  pdVar7 = (double *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_50);
  pdVar8 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_68);
  local_98._s_0.Z = dVar1 * pdVar8[2] + pdVar7[2];
  local_98._s_0.Y = dVar1 * pdVar8[1] + pdVar7[1];
  local_98._s_0.X = dVar1 * *pdVar8 + *pdVar7;
  fVar9 = UE::GizmoRenderingUtil::CalculateViewDependentScaleAndFlatten
                    (param_1,(TVector<double> *)&local_98._s_0,__real_3f000000,local_50);
  return (double)fVar9;
}

// GetOrthogonalVector @ 1496a3980

TVector<double> * __cdecl
GizmoMath::GetOrthogonalVector(TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar5 = (uint)((ulonglong)uVar1 >> 0x20);
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar9 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = uVar5 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar4 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar7 = (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = uVar6 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar10,uVar9) < (double)CONCAT44(uVar12,uVar11) ||
       (double)CONCAT44(uVar10,uVar9) == (double)CONCAT44(uVar12,uVar11)) &&
     ((double)CONCAT44(uVar10,uVar9) < (double)CONCAT44(uVar8,uVar7) ||
      (double)CONCAT44(uVar10,uVar9) == (double)CONCAT44(uVar8,uVar7))) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)CONCAT44(uVar4 ^ __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    return __return_storage_ptr__;
  }
  if (((double)CONCAT44(uVar8,uVar7) < (double)CONCAT44(uVar10,uVar9) ||
       (double)CONCAT44(uVar8,uVar7) == (double)CONCAT44(uVar10,uVar9)) &&
     ((double)CONCAT44(uVar8,uVar7) < (double)CONCAT44(uVar12,uVar11) ||
      (double)CONCAT44(uVar8,uVar7) == (double)CONCAT44(uVar12,uVar11))) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)CONCAT44(uVar5 ^ __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar6 ^ __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetSubGizmoAdjustedTransform @ 1496a82e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
ViewBasedTransformAdjustersLocals::GetSubGizmoAdjustedTransform
          (TTransform<double> *__return_storage_ptr__,ISceneViewInterface *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3,FSettings *param_4,bool param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  double dVar13;
  __m128 _Var14;
  double dVar15;
  char cVar16;
  Type TVar17;
  TVector<double> *pTVar18;
  TVector<double> *pTVar19;
  TVector<double> *pTVar20;
  TVector<double> *pTVar21;
  double *pdVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  uint uVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar61;
  uint uVar62;
  undefined1 auStackY_308 [32];
  undefined1 *local_2d8;
  undefined4 local_2d0;
  double local_2b8 [4];
  undefined1 local_298 [16];
  double local_288;
  TMatrix<double> local_278;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  cVar16 = (**(code **)((longlong)*param_1 + 0x40))(param_1);
  if (((cVar16 != '\0') || (!param_5)) ||
     (param_4->DistanceInFrontOfCameraInOrtho <= 0.0 &&
      param_4->DistanceInFrontOfCameraInOrtho != 0.0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((param_4->bKeepConstantViewSize != false) || (param_4->bMirrorBasedOnOctant != false)) ||
     ((param_4->bUseWorldAxesForGizmo != false || (bVar12)))) {
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1a8,param_3,param_2);
    UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_148,&local_1a8);
    uVar61 = (uint)__xmm_80000000000000008000000000000000;
    uVar62 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (bVar12) {
      pTVar18 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_2b8);
      pTVar19 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&local_1c0);
      pTVar20 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&local_2d8);
      pTVar21 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_298);
      UE::Geometry::TFrame3<double>::TFrame3<double>
                ((TFrame3<double> *)&local_1f8._s_0,pTVar21,pTVar20,pTVar19,pTVar18);
      local_2d8 = (undefined1 *)(local_1a8.Translation.XY.m128d_f64[0] - local_1f8._s_0.X);
      local_1c0 = local_1a8.Translation.XY.m128d_f64[1] - local_1f8._s_0.Y;
      local_2b8[0] = local_1a8.Translation.ZW.m128d_f64[0] - local_1f8._s_0.Z;
      dStack_1b8 = local_1a8.Translation.XY.m128d_f64[1];
      local_2b8[1] = local_1a8.Translation.ZW.m128d_f64[1];
      dVar27 = local_1d0 * local_1d0 + local_1c8 * local_1c8 +
               local_1d8 * local_1d8 + local_1e0 * local_1e0;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (0.0 < dVar27) {
        dVar27 = __real_3ff0000000000000 / dVar27;
        dVar33 = local_1c8 * dVar27;
        uVar44 = SUB84(local_1d8 * dVar27,0) ^ uVar61;
        uVar45 = (uint)((ulonglong)(local_1d8 * dVar27) >> 0x20) ^ uVar62;
        dVar40 = (double)CONCAT44((uint)((ulonglong)(local_1e0 * dVar27) >> 0x20) ^ uVar62,
                                  SUB84(local_1e0 * dVar27,0) ^ uVar61);
        dVar34 = (double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar45,uVar44);
        uVar38 = SUB84(local_1d0 * dVar27,0) ^ uVar61;
        uVar39 = (uint)((ulonglong)(local_1d0 * dVar27) >> 0x20) ^ uVar62;
        dVar49 = (double)CONCAT44(uVar39,uVar38) + (double)CONCAT44(uVar39,uVar38);
        dVar55 = (dVar40 + dVar40) * dVar33;
        dVar27 = dVar34 * (double)CONCAT44(uVar45,uVar44);
        dVar46 = (dVar40 + dVar40) * dVar40;
        dVar41 = dVar49 * (double)CONCAT44(uVar45,uVar44);
        dVar50 = dVar49 * (double)CONCAT44(uVar39,uVar38);
        uVar8 = (__real_3ff0000000000000 - (dVar50 + dVar27)) * (double)local_2d8 +
                (dVar34 * dVar40 - dVar49 * dVar33) * local_1c0 +
                (dVar49 * dVar40 + dVar34 * dVar33) * local_2b8[0];
        uVar9 = (__real_3ff0000000000000 - (dVar50 + dVar46)) * local_1c0 +
                (dVar34 * dVar40 + dVar49 * dVar33) * (double)local_2d8 +
                (dVar41 - dVar55) * local_2b8[0];
        uVar10 = (dVar49 * dVar40 - dVar34 * dVar33) * (double)local_2d8 +
                 (dVar41 + dVar55) * local_1c0 +
                 (__real_3ff0000000000000 - (dVar27 + dVar46)) * local_2b8[0];
      }
      local_288 = local_1a8.Translation.ZW.m128d_f64[0];
      if ((double)uVar8 < param_4->DistanceInFrontOfCameraInOrtho) {
        dVar34 = local_1d8 + local_1d8;
        dVar27 = local_1d0 + local_1d0;
        dVar46 = local_1e0 * (local_1e0 + local_1e0);
        dVar33 = local_1c8 * (local_1e0 + local_1e0);
        local_288 = (local_1e0 * dVar27 - local_1c8 * dVar34) *
                    param_4->DistanceInFrontOfCameraInOrtho +
                    (local_1d8 * dVar27 + dVar33) * (double)uVar9 +
                    (__real_3ff0000000000000 - (local_1d8 * dVar34 + dVar46)) * (double)uVar10 +
                    local_1f8._s_0.Z;
        dVar46 = (__real_3ff0000000000000 - (local_1d0 * dVar27 + dVar46)) * (double)uVar9 +
                 (local_1e0 * dVar34 + local_1c8 * dVar27) * param_4->DistanceInFrontOfCameraInOrtho
                 + (local_1d8 * dVar27 - dVar33) * (double)uVar10 + local_1f8._s_0.Y;
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar46,0);
        local_1a8.Translation.XY.m128d_f64[0] =
             (__real_3ff0000000000000 - (local_1d0 * dVar27 + local_1d8 * dVar34)) *
             param_4->DistanceInFrontOfCameraInOrtho +
             (local_1e0 * dVar34 - local_1c8 * dVar27) * (double)uVar9 +
             (local_1e0 * dVar27 + local_1c8 * dVar34) * (double)uVar10 + local_1f8._s_0.X;
        local_1a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar46 >> 0x20);
        local_1a8.Translation.ZW.m128d_f64[0] = local_288;
      }
    }
    if (param_4->bUseWorldAxesForGizmo != false) {
      local_1a8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
      local_1a8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
      local_1a8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
      local_1a8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    }
    if (param_4->bMirrorBasedOnOctant != false) {
      cVar16 = (**(code **)((longlong)*param_1 + 0x40))(param_1);
      if (cVar16 == '\0') {
        pdVar22 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_298);
        dVar34 = local_1a8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar46 = local_1a8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar41 = *pdVar22;
        dVar49 = pdVar22[1];
        dVar27 = pdVar22[2];
        dVar33 = local_1a8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar40 = local_1a8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar36._8_4_ = SUB84(dVar46,0);
        auVar36._0_8_ = dVar34;
        auVar36._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar43._8_4_ = SUB84(dVar40,0);
        auVar43._0_8_ = dVar33;
        auVar43._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar43 = blendpd(auVar36,auVar43,2);
        auVar59._0_8_ = dVar49 * dVar34 - dVar41 * dVar46;
        auVar59._8_8_ = dVar27 * dVar46 - dVar49 * dVar33;
        dVar28 = dVar27 * auVar43._0_8_;
        dVar50 = auVar43._8_8_;
        dVar55 = local_1a8.Scale3D.XY.m128d_f64[0];
        dVar13 = local_1a8.Scale3D.XY.m128d_f64[1];
      }
      else {
        pdVar22 = (double *)(**(code **)((longlong)*param_1 + 0x10))();
        dVar34 = local_1a8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar46 = local_1a8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar33 = local_1a8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar40 = local_1a8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar27 = pdVar22[2] - local_1a8.Translation.ZW.m128d_f64[0];
        dVar41 = *pdVar22 - local_1a8.Translation.XY.m128d_f64[0];
        dVar49 = pdVar22[1] - local_1a8.Translation.XY.m128d_f64[1];
        auVar58._8_4_ = SUB84(dVar49,0);
        auVar58._0_8_ = dVar41;
        auVar58._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        auVar29._8_4_ = SUB84(dVar33,0);
        auVar29._0_8_ = dVar46;
        auVar29._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        auVar42._8_4_ = SUB84(dVar46,0);
        auVar42._0_8_ = dVar34;
        auVar42._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar5._8_4_ = SUB84(dVar40,0);
        auVar5._0_8_ = dVar33;
        auVar5._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar43 = blendpd(auVar42,auVar5,2);
        auVar59._0_8_ = auVar58._8_8_ * dVar34 - dVar46 * dVar41;
        auVar59._8_8_ = dVar27 * dVar46 - auVar29._8_8_ * dVar49;
        dVar50 = auVar43._8_8_;
        dVar28 = auVar43._0_8_ * dVar27;
        dVar55 = local_1a8.Scale3D.XY.m128d_f64[0];
        dVar13 = local_1a8.Scale3D.XY.m128d_f64[1];
      }
      dVar15 = __real_bf1a36e2e0000000;
      local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)dVar13 >> 0x20);
      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
      local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)dVar55 >> 0x20);
      local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = SUB84(dVar55,0);
      auVar35._8_4_ = SUB84(dVar49,0);
      auVar35._0_8_ = dVar41;
      auVar35._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar27;
      auVar36 = blendpd(auVar35,auVar7,2);
      local_2d8 = &DAT_200000001;
      lVar23 = 0;
      local_2d0 = 3;
      auVar37._0_8_ = auVar36._0_8_ * dVar33 - dVar28;
      auVar37._8_8_ = auVar36._8_8_ * dVar40 - dVar50 * 0.0;
      auVar36 = blendpd(auVar59,auVar37,2);
      dVar50 = auVar59._8_8_ + auVar59._8_8_;
      dVar28 = auVar37._0_8_ + auVar37._0_8_;
      uVar53 = SUB84(dVar28,0);
      uVar54 = (undefined4)((ulonglong)dVar28 >> 0x20);
      auVar60._0_8_ = auVar36._0_8_ + auVar36._0_8_;
      auVar60._8_8_ = auVar36._8_8_ + auVar36._8_8_;
      auVar56._8_4_ = uVar53;
      auVar56._0_8_ = dVar50;
      auVar56._12_4_ = uVar54;
      auVar30._8_4_ = uVar53;
      auVar30._0_8_ = dVar50;
      auVar30._12_4_ = uVar54;
      auVar51._8_4_ = uVar53;
      auVar51._0_8_ = dVar50;
      auVar51._12_4_ = uVar54;
      auVar47._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_1a8.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_1a8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar47._8_4_ = _UNK_15061cc88 & local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar47._12_4_ = _UNK_15061cc8c & local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
      auVar57._0_8_ = auVar56._8_8_ * dVar34 - dVar50 * dVar46;
      auVar57._8_8_ = auVar60._0_8_ * dVar46 - auVar30._8_8_ * dVar33;
      auVar36 = blendpd(auVar51,auVar60,2);
      auVar31._8_4_ = SUB84(auVar60._8_8_,0);
      auVar31._0_8_ = auVar60._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar52._0_8_ = auVar36._0_8_ * dVar33 - auVar60._0_8_ * auVar43._0_8_;
      auVar52._8_8_ = auVar36._8_8_ * dVar40 - auVar31._8_8_ * auVar43._8_8_;
      lVar24 = -(ulonglong)(auVar47._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar26 = -(ulonglong)(auVar47._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar11._8_4_ = local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar11._0_8_ = dVar55;
      auVar11._12_4_ = local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
      lVar25 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)local_1a8.Scale3D.ZW.m128d_f64[0] >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  SUB84(local_1a8.Scale3D.ZW.m128d_f64[0],0)) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar48._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar43._4_4_,
                            ~(uint)lVar24 & auVar43._0_4_);
      auVar48._8_4_ = ~(uint)lVar26 & auVar43._8_4_;
      auVar48._12_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar43._12_4_;
      auVar32._8_4_ = SUB84(auVar57._8_8_,0);
      auVar32._0_8_ = auVar57._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar6._0_8_ = local_1a8.Scale3D.ZW.m128d_f64[0];
      auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
      auVar36 = blendpd(auVar57,auVar52,2);
      local_2b8[0] = auVar48._0_8_ * (dVar50 * dVar40 + dVar41 + auVar32._8_8_);
      local_2b8[1] = auVar48._8_8_ * (dVar28 * dVar40 + dVar49 + auVar52._0_8_);
      local_2b8[2] = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar43._4_4_,
                                      ~(uint)lVar25 & auVar43._0_4_) *
                     (auVar60._0_8_ * dVar40 + dVar27 + auVar36._0_8_);
      do {
        if (local_2b8[lVar23] <= dVar15 && dVar15 != local_2b8[lVar23]) {
          iVar1 = *(int *)((longlong)&local_2d8 + lVar23 * 4);
          local_1a8.Scale3D.XY.m128d_f64[0] = dVar55;
          local_1a8.Scale3D.XY.m128d_f64[1] = dVar13;
          UE::Math::TTransform<double>::ToMatrixWithScale(&local_148,&local_278);
          if (iVar1 == 1) {
            local_278.M[0][0] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[0][0] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[0][0],0) ^ uVar61);
            local_278.M[1][0] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[1][0] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[1][0],0) ^ uVar61);
            local_278.M[2][0] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[2][0] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[2][0],0) ^ uVar61);
            local_278.M[3][0] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[3][0] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[3][0],0) ^ uVar61);
          }
          else if (iVar1 == 2) {
            local_278.M[0][1] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[0][1] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[0][1],0) ^ uVar61);
            local_278.M[1][1] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[1][1] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[1][1],0) ^ uVar61);
            local_278.M[2][1] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[2][1] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[2][1],0) ^ uVar61);
            local_278.M[3][1] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[3][1] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[3][1],0) ^ uVar61);
          }
          else if (iVar1 == 3) {
            local_278.M[0][2] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[0][2] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[0][2],0) ^ uVar61);
            local_278.M[1][2] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[1][2] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[1][2],0) ^ uVar61);
            local_278.M[2][2] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[2][2] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[2][2],0) ^ uVar61);
            local_278.M[3][2] =
                 (double)CONCAT44((uint)((ulonglong)local_278.M[3][2] >> 0x20) ^ uVar62,
                                  SUB84(local_278.M[3][2],0) ^ uVar61);
          }
          UE::Math::TTransform<double>::SetFromMatrix(&local_148,&local_278);
          dVar55 = local_1a8.Scale3D.XY.m128d_f64[0];
          dVar13 = local_1a8.Scale3D.XY.m128d_f64[1];
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < 3);
      local_1a8.Scale3D.XY.m128d_f64[0] = dVar55;
      local_1a8.Scale3D.XY.m128d_f64[1] = dVar13;
      TVar17 = AxisDisplayInfo::GetAxisDisplayCoordinateSystem();
      if (TVar17 == LeftUpForward) {
        UE::Math::TTransform<double>::ToMatrixWithScale(&local_148,&local_278);
        local_278.M[0][1] =
             (double)CONCAT44((uint)((ulonglong)local_278.M[0][1] >> 0x20) ^ uVar62,
                              SUB84(local_278.M[0][1],0) ^ uVar61);
        local_278.M[1][1] =
             (double)CONCAT44((uint)((ulonglong)local_278.M[1][1] >> 0x20) ^ uVar62,
                              SUB84(local_278.M[1][1],0) ^ uVar61);
        local_278.M[2][1] =
             (double)CONCAT44((uint)((ulonglong)local_278.M[2][1] >> 0x20) ^ uVar62,
                              SUB84(local_278.M[2][1],0) ^ uVar61);
        local_278.M[3][1] =
             (double)CONCAT44((uint)((ulonglong)local_278.M[3][1] >> 0x20) ^ uVar62,
                              SUB84(local_278.M[3][1],0) ^ uVar61);
        UE::Math::TTransform<double>::SetFromMatrix(&local_148,&local_278);
      }
    }
    if (param_4->bKeepConstantViewSize != false) {
      dVar34 = GetComponentToGizmoScaling(param_1,&local_1a8);
      dVar27 = local_148.Scale3D.XY.m128d_f64[1] * dVar34;
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
      local_148.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0] * dVar34;
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
      local_148.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0] * dVar34;
      local_148.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_148.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0] * dVar34;
      local_148.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1] * dVar34;
      local_148.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0] * dVar34;
      local_148.Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1] * 0.0;
    }
    _Var14 = GlobalVectorConstants::Float0001;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var14.m128_f32[2];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var14.m128_f32[3];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
    _Var14 = GlobalVectorConstants::Float1110;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var14.m128_f32[2];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var14.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_148,&local_1a8);
  }
  else {
    dVar27 = (param_2->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar27;
    dVar27 = (param_2->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar27;
    dVar27 = (param_2->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar27;
    dVar27 = (param_2->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar27;
    dVar27 = (param_2->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar27;
    dVar27 = (param_2->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar27;
  }
  return __return_storage_ptr__;
}

// MakeComponentTarget @ 1496b33c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget>_> __cdecl
MakeComponentTarget(UPrimitiveComponent *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget>_> TVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  iVar14 = 0;
  uVar7 = 1;
  uVar12 = Factories._40_4_;
  uVar8 = 0;
  if (uVar12 != 0) {
    puVar15 = (uint *)&Factories.field_0x10;
    if (Factories._32_8_ != 0) {
      puVar15 = (uint *)Factories._32_8_;
    }
    uVar8 = *puVar15;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1496b3470;
      uVar8 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar8 = local_res20 + -1 + iVar14;
    if ((int)uVar12 < (int)uVar8) {
      uVar8 = uVar12;
    }
  }
LAB_1496b3470:
  uVar16 = uVar12 & 0xffffffe0;
  bVar4 = Factories._40_1_;
  TStack_60.CurrentBitIndex = uVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,Factories._8_4_ - Factories._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Factories.field_0x10;
  uVar8 = uVar12;
  if ((int)uVar12 < 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (FPrimitiveComponentTarget *)(*pcVar3)();
      return (TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget>_>)
             TVar9.Ptr;
    }
    uVar8 = Factories._40_4_;
  }
  if (uVar12 != uVar8) {
    lVar10 = 0x154c8a690;
    if (Factories._32_8_ != 0) {
      lVar10 = Factories._32_8_;
    }
    uVar12 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1496b3590;
      uVar12 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1496b3590:
  while( true ) {
    if (Factories._8_4_ - Factories._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Factories.field_0x10)) break;
    lVar10 = Factories._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18;
    cVar6 = (**(code **)(**(longlong **)
                           (Factories._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18) + 8))
                      ();
    if (cVar6 != '\0') {
      plVar2 = *(longlong **)(lVar10 + 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return (TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget>_>)
             (FPrimitiveComponentTarget *)param_1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget>_>)
         (FPrimitiveComponentTarget *)param_1;
}

// MakeNormalPlaneBasis @ 1496b3640

void __cdecl
GizmoMath::MakeNormalPlaneBasis
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  
  dVar3 = __real_3ff0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar4 = dVar1 * (param_1->field0_0x0)._s_0.Y;
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (0.0 <= dVar5) {
    dVar6 = __real_3ff0000000000000 / (dVar5 + __real_3ff0000000000000);
    dVar4 = dVar6 * dVar4;
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar8,SUB84(dVar4,0) ^ uVar7);
    (param_2->field0_0x0)._s_0.Y = dVar5;
    (param_2->field0_0x0)._s_0.X = dVar3 - dVar6 * dVar1 * dVar1;
    (param_2->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^ uVar8,
                          (uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar7);
    (param_3->field0_0x0)._s_0.X = dVar5;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = dVar3 - dVar5 * dVar5 * dVar6;
  }
  else {
    dVar6 = __real_3ff0000000000000 / (__real_3ff0000000000000 - dVar5);
    dVar4 = dVar6 * dVar4;
    (param_2->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar8,SUB84(dVar4,0) ^ uVar7);
    (param_2->field0_0x0)._s_0.X = dVar3 - dVar6 * dVar1 * dVar1;
    (param_2->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.X;
    *(double *)&param_3->field0_0x0 = dVar4;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = dVar5 * dVar5 * dVar6 - dVar3;
  }
  (param_3->field0_0x0)._s_0.Y = dVar3;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (param_3->field0_0x0)._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar8,(uint)uVar2 ^ uVar7);
  return;
}

// NearestPointOnLine @ 1496b43b0

void __cdecl
GizmoMath::NearestPointOnLine
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = __real_3ff0000000000000 - (dVar1 * dVar1 + dVar7 * dVar7 + dVar2 * dVar2);
  if (__real_3f847ae140000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineDirection.IsNormalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoMath.cpp"
                       ,0x16,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = ((param_3->field0_0x0)._s_0.Y - dVar2) * dVar3 +
          ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) *
          (param_2->field0_0x0)._s_0.X + ((param_3->field0_0x0)._s_0.Z - dVar7) * dVar1;
  (param_4->field0_0x0)._s_0.X = dVar5 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X
  ;
  (param_4->field0_0x0)._s_0.Y = dVar5 * dVar3 + dVar2;
  (param_4->field0_0x0)._s_0.Z = dVar5 * dVar1 + dVar7;
  *param_5 = (float)dVar5;
  return;
}

// NearestPointOnLineToRay @ 1496b4500

void __cdecl
GizmoMath::NearestPointOnLineToRay
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float *param_6,TVector<double> *param_7,
          float *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar12 = (param_4->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar13 = (param_4->field0_0x0)._s_0.Y;
  dVar14 = (param_4->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar9 = dVar1 - (param_3->field0_0x0)._s_0.Y;
  dVar10 = dVar5 - (param_3->field0_0x0)._s_0.Z;
  dVar7 = dVar3 * dVar13 + dVar2 * dVar12 + dVar4 * dVar14;
  uVar17 = SUB84(dVar7,0) ^ uVar15;
  uVar18 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar16;
  dVar11 = dVar3 * dVar9 + dVar2 * dVar8 + dVar4 * dVar10;
  dVar7 = __real_3ff0000000000000 -
          (double)CONCAT44(uVar18,uVar17) * (double)CONCAT44(uVar18,uVar17);
  uVar19 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar20 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar20,uVar19)) {
    dVar12 = dVar12 * dVar8 + dVar13 * dVar9 + dVar14 * dVar10;
    dVar13 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar16,SUB84(dVar12,0) ^ uVar15);
    dVar12 = dVar11 * (double)CONCAT44(uVar18,uVar17) - dVar13;
    if (0.0 <= dVar12) {
      dVar14 = __real_3ff0000000000000 / (double)CONCAT44(uVar20,uVar19);
      dVar13 = (dVar13 * (double)CONCAT44(uVar18,uVar17) - dVar11) * dVar14;
      dVar14 = dVar14 * dVar12;
      goto LAB_1496b466d;
    }
  }
  dVar14 = 0.0;
  dVar13 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar16,SUB84(dVar11,0) ^ uVar15);
LAB_1496b466d:
  (param_5->field0_0x0)._s_0.X = dVar2 * dVar13 + (param_1->field0_0x0)._s_0.X;
  (param_5->field0_0x0)._s_0.Y = dVar3 * dVar13 + dVar1;
  (param_5->field0_0x0)._s_0.Z = dVar4 * dVar13 + dVar5;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar12 = dVar14 * (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  auVar6._8_4_ = SUB84(dVar12,0);
  auVar6._0_8_ = dVar14 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&param_7->field0_0x0 = auVar6;
  (param_7->field0_0x0)._s_0.Z = dVar14 * dVar1 + dVar2;
  *param_6 = (float)dVar13;
  *param_8 = (float)dVar14;
  return;
}

// ProjectPointOntoLine @ 1496b6db0

TVector<double> * __cdecl
GizmoMath::ProjectPointOntoLine
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) *
          (param_3->field0_0x0)._s_0.Y +
          ((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) *
          (param_3->field0_0x0)._s_0.X +
          ((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) *
          (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar5 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar1 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar2 + dVar4;
  return __return_storage_ptr__;
}

// ProjectPointOntoPlane @ 1496b6e40

TVector<double> * __cdecl
GizmoMath::ProjectPointOntoPlane
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (dVar2 - (param_2->field0_0x0)._s_0.Y) * (param_3->field0_0x0)._s_0.Y +
          (dVar1 - (param_2->field0_0x0)._s_0.X) * (param_3->field0_0x0)._s_0.X +
          (dVar3 - (param_2->field0_0x0)._s_0.Z) * (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// RayPlaneIntersectionPoint @ 1496b6ee0

void __cdecl
GizmoMath::RayPlaneIntersectionPoint
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,bool *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  *param_5 = false;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar1;
  (param_6->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.Y * dVar2 + (param_2->field0_0x0)._s_0.X * dVar1 +
          (param_2->field0_0x0)._s_0.Z * dVar3;
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar4 = (param_3->field0_0x0)._s_0.Z;
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    dVar6 = (((param_2->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.Y +
              (param_2->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.X +
             (param_2->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.Z) -
            (dVar5 * (param_2->field0_0x0)._s_0.Y +
             (param_3->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
            dVar4 * (param_2->field0_0x0)._s_0.Z)) / dVar6;
    if (0.0 <= dVar6) {
      (param_6->field0_0x0)._s_0.X = dVar1 * dVar6 + (param_3->field0_0x0)._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar2 * dVar6 + dVar5;
      (param_6->field0_0x0)._s_0.Z = dVar3 * dVar6 + dVar4;
      *param_5 = true;
    }
  }
  return;
}

// RaySphereIntersection @ 1496b7020

void __cdecl
GizmoMath::RaySphereIntersection
          (TVector<double> *param_1,float param_2,TVector<double> *param_3,TVector<double> *param_4,
          bool *param_5,TVector<double> *param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  
  *param_5 = false;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar4;
  (param_6->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar2 = dVar6 * (param_4->field0_0x0)._s_0.Y + dVar5 * (param_4->field0_0x0)._s_0.X +
          dVar4 * (param_4->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 -
          ((dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) - (double)param_2 * (double)param_2);
  if (0.0 < dVar4) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar4;
    auVar3 = sqrtpd(ZEXT816(0),auVar3);
    *param_5 = true;
    dVar4 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000) -
            auVar3._0_8_;
    dVar2 = auVar3._0_8_ - dVar2;
    if (dVar2 <= dVar4) {
      dVar4 = dVar2;
    }
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    dVar5 = (param_3->field0_0x0)._s_0.Z;
    dVar6 = dVar4 * (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar4 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&param_6->field0_0x0 = auVar1;
    (param_6->field0_0x0)._s_0.Z = dVar4 * dVar2 + dVar5;
  }
  return;
}

// RemoveAllComponentTargetFactoryies @ 1496b82f0

void __cdecl RemoveAllComponentTargetFactoryies(void)

{
  TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
           *)&Factories);
  return;
}

// RemoveComponentTargetFactoryByKey @ 1496b84c0

bool __cdecl RemoveComponentTargetFactoryByKey(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if (Factories._8_4_ != Factories._52_4_) {
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>,0>,FDefaultSetAllocator>
                        *)&Factories,param_1,local_res8);
    return iVar1 != 0;
  }
  return false;
}

// WorldToPixelDouble @ 1496c5e60

TVector2<double> * __cdecl
GizmoRenderingUtilLocals::WorldToPixelDouble
          (TVector2<double> *__return_storage_ptr__,ISceneViewInterface *param_1,
          TVector<double> *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int *piVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_48;
  double local_40;
  double local_30;
  
  (**(code **)((longlong)*param_1 + 8))(param_1,&local_48);
  if (local_30 <= 0.0) {
    uVar6 = (undefined4)__real_bff0000000000000;
    uVar7 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar6 = (undefined4)__real_3ff0000000000000;
    uVar7 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar3 = (double)CONCAT44(uVar7,uVar6) / local_30;
  piVar4 = (int *)(**(code **)*param_1)(param_1);
  iVar1 = piVar4[1];
  iVar2 = piVar4[3];
  dVar5 = __real_3fe0000000000000 - local_40 * __real_3fe0000000000000 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)((double)(piVar4[2] - *piVar4) *
                       (local_48 * __real_3fe0000000000000 * dVar3 + __real_3fe0000000000000) +
                      (double)*piVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)(dVar5 * (double)(iVar2 - iVar1) + (double)iVar1);
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UBaseBrushTool_NoRegister @ 1496c6070

UClass * __cdecl Z_Construct_UClass_UBaseBrushTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BaseBrushTool",
               &Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton,
               UBaseBrushTool::StaticRegisterNativesUBaseBrushTool,0x2d8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseBrushTool>,InternalVTableHelperCtorCaller<UBaseBrushTool>,
               local_res8,UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton;
}

// Z_Construct_UClass_UBrushAdjusterInputBehavior_NoRegister @ 1496c6130

UClass * __cdecl Z_Construct_UClass_UBrushAdjusterInputBehavior_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushAdjusterInputBehavior",
               &Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton,
               UBrushAdjusterInputBehavior::StaticRegisterNativesUBrushAdjusterInputBehavior,0xe0,
               0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushAdjusterInputBehavior>,
               InternalVTableHelperCtorCaller<UBrushAdjusterInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.InnerSingleton;
}

// Z_Construct_UClass_UClickDragToolBuilder_NoRegister @ 1496c61f0

UClass * __cdecl Z_Construct_UClass_UClickDragToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragToolBuilder",
               &Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton,
               UClickDragToolBuilder::StaticRegisterNativesUClickDragToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UClickDragToolBuilder>,
               InternalVTableHelperCtorCaller<UClickDragToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UClickDragTool_NoRegister @ 1496c62b0

UClass * __cdecl Z_Construct_UClass_UClickDragTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragTool",
               &Z_Registration_Info_UClass_UClickDragTool.InnerSingleton,
               UClickDragTool::StaticRegisterNativesUClickDragTool,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UClickDragTool>,InternalVTableHelperCtorCaller<UClickDragTool>,
               local_res8,UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragTool.InnerSingleton;
}

// Z_Construct_UClass_UCombinedTransformGizmoContextObject_NoRegister @ 1496c6370

UClass * __cdecl Z_Construct_UClass_UCombinedTransformGizmoContextObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoContextObject",
               &Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton,
               UCombinedTransformGizmoContextObject::
               StaticRegisterNativesUCombinedTransformGizmoContextObject,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmoContextObject>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmoContextObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton;
}

// Z_Construct_UClass_UContextObjectStore_NoRegister @ 1496c6420

UClass * __cdecl Z_Construct_UClass_UContextObjectStore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ContextObjectStore",
               &Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton,
               UContextObjectStore::StaticRegisterNativesUContextObjectStore,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UContextObjectStore>,
               InternalVTableHelperCtorCaller<UContextObjectStore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton;
}

// Z_Construct_UClass_UGizmoAxisIntervalParameterSource_NoRegister @ 1496c64d0

UClass * __cdecl Z_Construct_UClass_UGizmoAxisIntervalParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisIntervalParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton,
               UGizmoAxisIntervalParameterSource::
               StaticRegisterNativesUGizmoAxisIntervalParameterSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisIntervalParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisIntervalParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister @ 1496c6590

UClass * __cdecl Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisRotationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton,
               UGizmoAxisRotationParameterSource::
               StaticRegisterNativesUGizmoAxisRotationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisRotationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisRotationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister @ 1496c6650

UClass * __cdecl Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton,
               UGizmoAxisScaleParameterSource::StaticRegisterNativesUGizmoAxisScaleParameterSource,
               0x180,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoAxisScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisScaleParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister @ 1496c6710

UClass * __cdecl Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton,
               UGizmoAxisTranslationParameterSource::
               StaticRegisterNativesUGizmoAxisTranslationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisTranslationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister @ 1496c67d0

UClass * __cdecl Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton,
               UGizmoBaseFloatParameterSource::StaticRegisterNativesUGizmoBaseFloatParameterSource,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoBaseFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseFloatParameterSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister @ 1496c6880

UClass * __cdecl Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseTransformSource",
               &Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton,
               UGizmoBaseTransformSource::StaticRegisterNativesUGizmoBaseTransformSource,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoBaseTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseTransformSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister @ 1496c6930

UClass * __cdecl Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickMultiTarget",
               &Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton,
               UGizmoClickMultiTarget::StaticRegisterNativesUGizmoClickMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickMultiTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister @ 1496c69f0

UClass * __cdecl Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentHitTarget",
               &Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton,
               UGizmoComponentHitTarget::StaticRegisterNativesUGizmoComponentHitTarget,0x130,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoComponentHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoComponentHitTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister @ 1496c6aa0

UClass * __cdecl Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentWorldTransformSource",
               &Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton,
               UGizmoComponentWorldTransformSource::
               StaticRegisterNativesUGizmoComponentWorldTransformSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoComponentWorldTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoComponentWorldTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementBox_NoRegister @ 1496c6b60

UClass * __cdecl Z_Construct_UClass_UGizmoElementBox_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBox",
               &Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton,
               UGizmoElementBox::StaticRegisterNativesUGizmoElementBox,0x1b0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementBox>,
               InternalVTableHelperCtorCaller<UGizmoElementBox>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementCircleBase_NoRegister @ 1496c6c20

UClass * __cdecl Z_Construct_UClass_UGizmoElementCircleBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircleBase",
               &Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton,
               UGizmoElementCircleBase::StaticRegisterNativesUGizmoElementCircleBase,0x290,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCircleBase>,
               InternalVTableHelperCtorCaller<UGizmoElementCircleBase>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircleBase.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementCircle_NoRegister @ 1496c6ce0

UClass * __cdecl Z_Construct_UClass_UGizmoElementCircle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircle",
               &Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton,
               UGizmoElementCircle::StaticRegisterNativesUGizmoElementCircle,0x298,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCircle>,
               InternalVTableHelperCtorCaller<UGizmoElementCircle>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementCone_NoRegister @ 1496c6da0

UClass * __cdecl Z_Construct_UClass_UGizmoElementCone_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCone",
               &Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton,
               UGizmoElementCone::StaticRegisterNativesUGizmoElementCone,400,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCone>,
               InternalVTableHelperCtorCaller<UGizmoElementCone>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementCylinder_NoRegister @ 1496c6e60

UClass * __cdecl Z_Construct_UClass_UGizmoElementCylinder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCylinder",
               &Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton,
               UGizmoElementCylinder::StaticRegisterNativesUGizmoElementCylinder,0x198,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementCylinder>,
               InternalVTableHelperCtorCaller<UGizmoElementCylinder>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementGroupBase_NoRegister @ 1496c6f20

UClass * __cdecl Z_Construct_UClass_UGizmoElementGroupBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroupBase",
               &Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton,
               UGizmoElementGroupBase::StaticRegisterNativesUGizmoElementGroupBase,0x1e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementGroupBase>,
               InternalVTableHelperCtorCaller<UGizmoElementGroupBase>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementGroup_NoRegister @ 1496c6fe0

UClass * __cdecl Z_Construct_UClass_UGizmoElementGroup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroup",
               &Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton,
               UGizmoElementGroup::StaticRegisterNativesUGizmoElementGroup,0x1e8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementGroup>,
               InternalVTableHelperCtorCaller<UGizmoElementGroup>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister @ 1496c70a0

UClass * __cdecl Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementHitMultiTarget",
               &Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton,
               UGizmoElementHitMultiTarget::StaticRegisterNativesUGizmoElementHitMultiTarget,0x80,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementHitMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoElementHitMultiTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementHitTarget_NoRegister @ 1496c7150

UClass * __cdecl Z_Construct_UClass_UGizmoElementHitTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementHitTarget",
               &Z_Registration_Info_UClass_UGizmoElementHitTarget.InnerSingleton,
               UGizmoElementHitTarget::StaticRegisterNativesUGizmoElementHitTarget,0x80,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoElementHitTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementLineBase_NoRegister @ 1496c7200

UClass * __cdecl Z_Construct_UClass_UGizmoElementLineBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineBase",
               &Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton,
               UGizmoElementLineBase::StaticRegisterNativesUGizmoElementLineBase,0x1d0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementLineBase>,
               InternalVTableHelperCtorCaller<UGizmoElementLineBase>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineBase.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementLineStrip_NoRegister @ 1496c72c0

UClass * __cdecl Z_Construct_UClass_UGizmoElementLineStrip_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineStrip",
               &Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton,
               UGizmoElementLineStrip::StaticRegisterNativesUGizmoElementLineStrip,0x240,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementLineStrip>,
               InternalVTableHelperCtorCaller<UGizmoElementLineStrip>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementRectangle_NoRegister @ 1496c7380

UClass * __cdecl Z_Construct_UClass_UGizmoElementRectangle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementRectangle",
               &Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton,
               UGizmoElementRectangle::StaticRegisterNativesUGizmoElementRectangle,0x228,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementRectangle>,
               InternalVTableHelperCtorCaller<UGizmoElementRectangle>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementSphere_NoRegister @ 1496c7440

UClass * __cdecl Z_Construct_UClass_UGizmoElementSphere_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementSphere",
               &Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton,
               UGizmoElementSphere::StaticRegisterNativesUGizmoElementSphere,0x170,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementSphere>,
               InternalVTableHelperCtorCaller<UGizmoElementSphere>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementTorus_NoRegister @ 1496c7500

UClass * __cdecl Z_Construct_UClass_UGizmoElementTorus_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTorus",
               &Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton,
               UGizmoElementTorus::StaticRegisterNativesUGizmoElementTorus,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementTorus>,
               InternalVTableHelperCtorCaller<UGizmoElementTorus>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton;
}

// Z_Construct_UClass_UGizmoElementTriangleList_NoRegister @ 1496c75c0

UClass * __cdecl Z_Construct_UClass_UGizmoElementTriangleList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTriangleList",
               &Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton,
               UGizmoElementTriangleList::StaticRegisterNativesUGizmoElementTriangleList,0x1b8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementTriangleList>,
               InternalVTableHelperCtorCaller<UGizmoElementTriangleList>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton;
}

// Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister @ 1496c7680

UClass * __cdecl Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaHitTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton,
               UGizmoLambdaHitTarget::StaticRegisterNativesUGizmoLambdaHitTarget,0x120,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLambdaHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoLambdaHitTarget>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister @ 1496c7730

UClass * __cdecl Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaStateTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton,
               UGizmoLambdaStateTarget::StaticRegisterNativesUGizmoLambdaStateTarget,0x90,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLambdaStateTarget>
               ,InternalVTableHelperCtorCaller<UGizmoLambdaStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoNilStateTarget_NoRegister @ 1496c77e0

UClass * __cdecl Z_Construct_UClass_UGizmoNilStateTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoNilStateTarget",
               &Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton,
               UGizmoNilStateTarget::StaticRegisterNativesUGizmoNilStateTarget,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoNilStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoNilStateTarget>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister @ 1496c7890

UClass * __cdecl Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoObjectModifyStateTarget",
               &Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton,
               UGizmoObjectModifyStateTarget::StaticRegisterNativesUGizmoObjectModifyStateTarget,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoObjectModifyStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoObjectModifyStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister @ 1496c7940

UClass * __cdecl Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoPlaneScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.InnerSingleton,
               UGizmoPlaneScaleParameterSource::StaticRegisterNativesUGizmoPlaneScaleParameterSource
               ,0x230,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoPlaneScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoPlaneScaleParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister @ 1496c7a00

UClass * __cdecl Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoPlaneTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton,
               UGizmoPlaneTranslationParameterSource::
               StaticRegisterNativesUGizmoPlaneTranslationParameterSource,0x200,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoPlaneTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoPlaneTranslationParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoRectangleComponent_NoRegister @ 1496c7ac0

UClass * __cdecl Z_Construct_UClass_UGizmoRectangleComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRectangleComponent",
               &Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton,
               UGizmoRectangleComponent::StaticRegisterNativesUGizmoRectangleComponent,0x5d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRectangleComponent>,
               InternalVTableHelperCtorCaller<UGizmoRectangleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton;
}

// Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister @ 1496c7b80

UClass * __cdecl Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderMultiTarget",
               &Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton,
               UGizmoRenderMultiTarget::StaticRegisterNativesUGizmoRenderMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderMultiTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoRenderTarget_NoRegister @ 1496c7c40

UClass * __cdecl Z_Construct_UClass_UGizmoRenderTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderTarget",
               &Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton,
               UGizmoRenderTarget::StaticRegisterNativesUGizmoRenderTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderTarget>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderTarget.InnerSingleton;
}

// Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_NoRegister @ 1496c7d00

UClass * __cdecl Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledAndUnscaledTransformSources",
               &Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton,
               UGizmoScaledAndUnscaledTransformSources::
               StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoScaledAndUnscaledTransformSources>
               ,InternalVTableHelperCtorCaller<UGizmoScaledAndUnscaledTransformSources>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton;
}

// Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister @ 1496c7dc0

UClass * __cdecl Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledTransformSource",
               &Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton,
               UGizmoScaledTransformSource::StaticRegisterNativesUGizmoScaledTransformSource,0xc0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoScaledTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoScaledTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister @ 1496c7e80

UClass * __cdecl Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformProxyTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton,
               UGizmoTransformProxyTransformSource::
               StaticRegisterNativesUGizmoTransformProxyTransformSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformProxyTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformProxyTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton;
}

// Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister @ 1496c7f40

UClass * __cdecl Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoUniformScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton,
               UGizmoUniformScaleParameterSource::
               StaticRegisterNativesUGizmoUniformScaleParameterSource,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoUniformScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoUniformScaleParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton;
}

// Z_Construct_UClass_UInputBehaviorSource_NoRegister @ 1496c8000

UClass * __cdecl Z_Construct_UClass_UInputBehaviorSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSource",
               &Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton,
               UInputBehaviorSource::StaticRegisterNativesUInputBehaviorSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputBehaviorSource>,
               InternalVTableHelperCtorCaller<UInputBehaviorSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton;
}

// Z_Construct_UClass_UInputRouter_NoRegister @ 1496c80c0

UClass * __cdecl Z_Construct_UClass_UInputRouter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputRouter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputRouter",
               &Z_Registration_Info_UClass_UInputRouter.InnerSingleton,
               UInputRouter::StaticRegisterNativesUInputRouter,400,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInputRouter>,
               InternalVTableHelperCtorCaller<UInputRouter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputRouter.InnerSingleton;
}

// Z_Construct_UClass_UInteractionMechanic_NoRegister @ 1496c8170

UClass * __cdecl Z_Construct_UClass_UInteractionMechanic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractionMechanic",
               &Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton,
               UInteractionMechanic::StaticRegisterNativesUInteractionMechanic,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractionMechanic>,
               InternalVTableHelperCtorCaller<UInteractionMechanic>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton;
}

// Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister @ 1496c8220

UClass * __cdecl Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoBuilder",
               &Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton,
               UIntervalGizmoBuilder::StaticRegisterNativesUIntervalGizmoBuilder,0xa0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIntervalGizmoBuilder>,
               InternalVTableHelperCtorCaller<UIntervalGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton;
}

// Z_Construct_UClass_UIntervalGizmo_NoRegister @ 1496c82e0

UClass * __cdecl Z_Construct_UClass_UIntervalGizmo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmo",
               &Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton,
               UIntervalGizmo::StaticRegisterNativesUIntervalGizmo,0x220,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIntervalGizmo>,InternalVTableHelperCtorCaller<UIntervalGizmo>,
               local_res8,UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton;
}

// Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister @ 1496c83a0

UClass * __cdecl Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalInputBehaviorSource",
               &Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton,
               ULocalInputBehaviorSource::StaticRegisterNativesULocalInputBehaviorSource,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalInputBehaviorSource>,
               InternalVTableHelperCtorCaller<ULocalInputBehaviorSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton;
}

// Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister @ 1496c8450

UClass * __cdecl Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointToolBuilder",
               &Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton,
               UMeshSurfacePointToolBuilder::StaticRegisterNativesUMeshSurfacePointToolBuilder,0x30,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UMeshSurfacePointTool_NoRegister @ 1496c8510

UClass * __cdecl Z_Construct_UClass_UMeshSurfacePointTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointTool",
               &Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton,
               UMeshSurfacePointTool::StaticRegisterNativesUMeshSurfacePointTool,0x128,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointTool>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton;
}

// Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister @ 1496c85d0

UClass * __cdecl Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PlanePositionGizmoBuilder",
               &Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.InnerSingleton,
               UPlanePositionGizmoBuilder::StaticRegisterNativesUPlanePositionGizmoBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlanePositionGizmoBuilder>,
               InternalVTableHelperCtorCaller<UPlanePositionGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.InnerSingleton;
}

// Z_Construct_UClass_UPlanePositionGizmo_NoRegister @ 1496c8690

UClass * __cdecl Z_Construct_UClass_UPlanePositionGizmo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PlanePositionGizmo",
               &Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton,
               UPlanePositionGizmo::StaticRegisterNativesUPlanePositionGizmo,0x280,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlanePositionGizmo>,
               InternalVTableHelperCtorCaller<UPlanePositionGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton;
}

// Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister @ 1496c8750

UClass * __cdecl Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmoBuilder",
               &Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton,
               URepositionableTransformGizmoBuilder::
               StaticRegisterNativesURepositionableTransformGizmoBuilder,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmoBuilder>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmoBuilder>,local_res8,
               UCombinedTransformGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton;
}

// Z_Construct_UClass_URepositionableTransformGizmo_NoRegister @ 1496c8810

UClass * __cdecl Z_Construct_UClass_URepositionableTransformGizmo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmo",
               &Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton,
               URepositionableTransformGizmo::StaticRegisterNativesURepositionableTransformGizmo,
               0x5e0,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmo>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmo>,local_res8,
               UCombinedTransformGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton;
}

// Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister @ 1496c88d0

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmoBuilder",
               &Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.InnerSingleton,
               UScalableSphereGizmoBuilder::StaticRegisterNativesUScalableSphereGizmoBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScalableSphereGizmoBuilder>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.InnerSingleton;
}

// Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister @ 1496c8990

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmoInputBehavior",
               &Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton,
               UScalableSphereGizmoInputBehavior::
               StaticRegisterNativesUScalableSphereGizmoInputBehavior,0xe0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScalableSphereGizmoInputBehavior>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmoInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton;
}

// Z_Construct_UClass_UScalableSphereGizmo_NoRegister @ 1496c8a50

UClass * __cdecl Z_Construct_UClass_UScalableSphereGizmo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmo",
               &Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton,
               UScalableSphereGizmo::StaticRegisterNativesUScalableSphereGizmo,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScalableSphereGizmo>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton;
}

// Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_NoRegister @ 1496c8b10

UClass * __cdecl Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleLambdaInteractiveGizmoBuilder",
               &Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton,
               USimpleLambdaInteractiveGizmoBuilder::
               StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleLambdaInteractiveGizmoBuilder>,
               InternalVTableHelperCtorCaller<USimpleLambdaInteractiveGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton;
}

// Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister @ 1496c8bd0

UClass * __cdecl Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleSingleClickGizmo",
               &Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton,
               USimpleSingleClickGizmo::StaticRegisterNativesUSimpleSingleClickGizmo,0x80,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleSingleClickGizmo>,
               InternalVTableHelperCtorCaller<USimpleSingleClickGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton;
}

// Z_Construct_UClass_USingleClickToolBuilder_NoRegister @ 1496c8c90

UClass * __cdecl Z_Construct_UClass_USingleClickToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickToolBuilder",
               &Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton,
               USingleClickToolBuilder::StaticRegisterNativesUSingleClickToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickToolBuilder>,
               InternalVTableHelperCtorCaller<USingleClickToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_USingleClickTool_NoRegister @ 1496c8d50

UClass * __cdecl Z_Construct_UClass_USingleClickTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickTool",
               &Z_Registration_Info_UClass_USingleClickTool.InnerSingleton,
               USingleClickTool::StaticRegisterNativesUSingleClickTool,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickTool>,
               InternalVTableHelperCtorCaller<USingleClickTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickTool.InnerSingleton;
}

// Z_Construct_UClass_USingleSelectionTool_NoRegister @ 1496c8e10

UClass * __cdecl Z_Construct_UClass_USingleSelectionTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleSelectionTool",
               &Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton,
               USingleSelectionTool::StaticRegisterNativesUSingleSelectionTool,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleSelectionTool>,
               InternalVTableHelperCtorCaller<USingleSelectionTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton;
}

// Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister @ 1496c8ed0

UClass * __cdecl Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ViewAdjustedStaticMeshGizmoComponent",
               &Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton,
               UViewAdjustedStaticMeshGizmoComponent::
               StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent,0x6c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAdjustedStaticMeshGizmoComponent>,
               InternalVTableHelperCtorCaller<UViewAdjustedStaticMeshGizmoComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementDrawType @ 1496c8f90

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementDrawType(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementDrawType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementDrawType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementDrawType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementDrawType.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementHitSortType @ 1496c8fd0

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementHitSortType(void)

{
  if (Z_Registration_Info_UEnum_EGizmoElementHitSortType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGizmoElementHitSortType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementHitSortType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGizmoElementHitSortType.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType @ 1496c9010

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType(void)

{
  if (Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide @ 1496c9050

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide(void)

{
  if (Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton;
}

// Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState @ 1496c9090

UEnum * __cdecl Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState(void)

{
  if (Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton,
               &Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor @ 1496c90d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FInputDeviceRay @ 1496c9150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputDeviceRay(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceRay.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputDeviceRay.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputDeviceRay_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputDeviceRay.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputDeviceRay.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FInputDeviceState @ 1496c91d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputDeviceState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputDeviceState.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputDeviceState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputDeviceState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputDeviceState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FInputRayHit @ 1496c9250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputRayHit(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputRayHit.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputRayHit.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputRayHit_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputRayHit.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputRayHit.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CustomRepositionableThreeAxisTransformBuilderIdentifier'' @ 150416ab0

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
CustomRepositionableThreeAxisTransformBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::
               CustomRepositionableThreeAxisTransformBuilderIdentifier.Data.AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::CustomRepositionableThreeAxisTransformBuilderIdentifier.
      Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::CustomRepositionableThreeAxisTransformBuilderIdentifier.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// CustomThreeAxisTransformBuilderIdentifier'' @ 150416ad0

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
CustomThreeAxisTransformBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::CustomThreeAxisTransformBuilderIdentifier.Data.
               AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::CustomThreeAxisTransformBuilderIdentifier.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::CustomThreeAxisTransformBuilderIdentifier.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DefaultAxisAngleBuilderIdentifier'' @ 150416af0

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
DefaultAxisAngleBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier.Data.
               AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier.Data.AllocatorInstance
      .Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::DefaultAxisAngleBuilderIdentifier.Data.AllocatorInstance
      .Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DefaultAxisPositionBuilderIdentifier'' @ 150416b10

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
DefaultAxisPositionBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::DefaultAxisPositionBuilderIdentifier.Data.
               AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::DefaultAxisPositionBuilderIdentifier.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::DefaultAxisPositionBuilderIdentifier.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DefaultPlanePositionBuilderIdentifier'' @ 150416b30

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
DefaultPlanePositionBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::DefaultPlanePositionBuilderIdentifier.Data.
               AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::DefaultPlanePositionBuilderIdentifier.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::DefaultPlanePositionBuilderIdentifier.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DefaultThreeAxisTransformBuilderIdentifier'' @ 150416b50

void __cdecl
`dynamic_atexit_destructor_for_'UCombinedTransformGizmoContextObject::
DefaultThreeAxisTransformBuilderIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCombinedTransformGizmoContextObject::DefaultThreeAxisTransformBuilderIdentifier.Data
               .AllocatorInstance.Data;
  if (UCombinedTransformGizmoContextObject::DefaultThreeAxisTransformBuilderIdentifier.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCombinedTransformGizmoContextObject::DefaultThreeAxisTransformBuilderIdentifier.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// GizmoName'' @ 150416b70

void __cdecl `dynamic_atexit_destructor_for_'UIntervalGizmo::GizmoName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UIntervalGizmo::GizmoName.Data.AllocatorInstance.Data;
  if (UIntervalGizmo::GizmoName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UIntervalGizmo::GizmoName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseBrushIndicatorGizmoType'' @ 150416b90

void __cdecl _dynamic_atexit_destructor_for__BaseBrushIndicatorGizmoType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseBrushIndicatorGizmoType.Data.AllocatorInstance.Data;
  if (BaseBrushIndicatorGizmoType.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseBrushIndicatorGizmoType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Factories'' @ 150416bb0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__Factories__(void)

{
  Factories._72_4_ = 0;
  if (Factories._64_8_ != 0) {
    FMemory::Free((void *)Factories._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FComponentTargetFactory,TDefaultDelete<FComponentTargetFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Factories);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalCurrentSceneViewLock'' @ 150416bf0

void __cdecl _dynamic_atexit_destructor_for__GlobalCurrentSceneViewLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150416bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GlobalCurrentSceneViewLock);
  return;
}

// `dynamic_atexit_destructor_for_'LogGizmoElementBase'' @ 150416c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGizmoElementBase__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGizmoElementBase);
  return;
}

// `dynamic_atexit_destructor_for_'LogGizmoElementLineBase'' @ 150416c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGizmoElementLineBase__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGizmoElementLineBase);
  return;
}

// `dynamic_atexit_destructor_for_'LogInteractiveToolsTransformProxy'' @ 150416c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInteractiveToolsTransformProxy__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInteractiveToolsTransformProxy);
  return;
}

// `dynamic_atexit_destructor_for_'TypeRequirements'' @ 150416c70

void __cdecl
`UMeshSurfacePointToolBuilder::GetTargetRequirements'::__l2::
_dynamic_atexit_destructor_for__TypeRequirements__(void)

{
  ForElementType<UClass_const_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = TypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
  if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData ==
      (ForElementType<UClass_const_*>)0x0) {
    return;
  }
  if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
      (ForElementType<UClass_const_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

