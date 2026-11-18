// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 23

// StaticClass @ 14caad720

UClass * __cdecl UPolyLassoMarqueeMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolyLassoMarqueeMechanic",
               &Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton,
               StaticRegisterNativesUPolyLassoMarqueeMechanic,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyLassoMarqueeMechanic>,
               InternalVTableHelperCtorCaller<UPolyLassoMarqueeMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton;
}

// UPolyLassoMarqueeMechanic @ 14cace950

UPolyLassoMarqueeMechanic * __thiscall
UPolyLassoMarqueeMechanic::UPolyLassoMarqueeMechanic
          (UPolyLassoMarqueeMechanic *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnDrawPolyLassoStarted = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDrawPolyLassoChanged = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnDrawPolyLassoFinished = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x10 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x18 = 2;
  this->SpacingTolerance = 2.0;
  this->LineThickness = 2.0;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x8 = 0;
  FVar1 = FLinearColor::Red;
  this->bEnableFreehandPolygons = true;
  this->bEnableMultiClickPolygons = true;
  (this->LineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ClickDragBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  (this->ClosedColor).field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->ClosedColor).field0_0x0 + 4) = 0x3f0c8c8d;
  (this->ClosedColor).field0_0x0._s_0.A = 1.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CachedCameraState).Orientation.W = 1.0;
  (this->CachedCameraState).Orientation.X = 0.0;
  (this->CachedCameraState).Orientation.Y = 0.0;
  (this->CachedCameraState).Orientation.Z = 0.0;
  (this->CachedCameraState).DPIScale = 1.0;
  (this->CachedCameraState).HorizontalFOVDegrees = 90.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  this->BasePriority = 100;
  this->bIsEnabled = false;
  this->bIsDragging = false;
  this->bIsInMultiClickPolygon = false;
  this->bIsMultiClickPolygonClosed = false;
  (this->PolyPathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolyPathPoints).ArrayNum = 0;
  (this->PolyPathPoints).ArrayMax = 0;
  (this->CurrentPolyLasso).bCameraIsOrthographic = false;
  (this->CurrentPolyLasso).Polyline.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentPolyLasso).Polyline.ArrayNum = 0;
  (this->CurrentPolyLasso).Polyline.ArrayMax = 0;
  return this;
}

// UPolyLassoMarqueeMechanic @ 14cacead0

UPolyLassoMarqueeMechanic * __thiscall
UPolyLassoMarqueeMechanic::UPolyLassoMarqueeMechanic(UPolyLassoMarqueeMechanic *this)

{
  FLinearColor FVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnDrawPolyLassoStarted = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDrawPolyLassoChanged = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnDrawPolyLassoFinished = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x10 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x18 = 2;
  this->SpacingTolerance = 2.0;
  this->LineThickness = 2.0;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnDrawPolyLassoStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrawPolyLassoFinished).field_0x8 = 0;
  FVar1 = FLinearColor::Red;
  this->bEnableFreehandPolygons = true;
  this->bEnableMultiClickPolygons = true;
  (this->LineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ClickDragBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  (this->ClosedColor).field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->ClosedColor).field0_0x0 + 4) = 0x3f0c8c8d;
  (this->ClosedColor).field0_0x0._s_0.A = 1.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CachedCameraState).Orientation.W = 1.0;
  (this->CachedCameraState).Orientation.X = 0.0;
  (this->CachedCameraState).Orientation.Y = 0.0;
  (this->CachedCameraState).Orientation.Z = 0.0;
  (this->CachedCameraState).DPIScale = 1.0;
  (this->CachedCameraState).HorizontalFOVDegrees = 90.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  this->BasePriority = 100;
  this->bIsEnabled = false;
  this->bIsDragging = false;
  this->bIsInMultiClickPolygon = false;
  this->bIsMultiClickPolygonClosed = false;
  (this->PolyPathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolyPathPoints).ArrayNum = 0;
  (this->PolyPathPoints).ArrayMax = 0;
  (this->CurrentPolyLasso).bCameraIsOrthographic = false;
  (this->CurrentPolyLasso).Polyline.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentPolyLasso).Polyline.ArrayNum = 0;
  (this->CurrentPolyLasso).Polyline.ArrayMax = 0;
  return this;
}

// ~UPolyLassoMarqueeMechanic @ 14cad2790

void __thiscall
UPolyLassoMarqueeMechanic::~UPolyLassoMarqueeMechanic(UPolyLassoMarqueeMechanic *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  pFVar1 = (this->CurrentPolyLasso).Polyline.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PolyPathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDrawPolyLassoFinished).field_0x8,
             *(int *)&(this->OnDrawPolyLassoFinished).field_0x10);
  pvVar2 = *(void **)&(this->OnDrawPolyLassoFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawPolyLassoFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDrawPolyLassoChanged).field_0x8,
             *(int *)&(this->OnDrawPolyLassoChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnDrawPolyLassoChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawPolyLassoChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDrawPolyLassoStarted).field_0x8,
             *(int *)&(this->OnDrawPolyLassoStarted).field_0x10);
  pvVar2 = *(void **)&(this->OnDrawPolyLassoStarted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawPolyLassoStarted);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// ApproximateSelfClipPolyline @ 14caeb6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UPolyLassoMarqueeMechanic::ApproximateSelfClipPolyline
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  TVector2<double>_u_0 *pTVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 in_XMM2 [16];
  undefined1 in_XMM4 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_288;
  TVector2<double>_u_0 local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  TVector2<double>_u_0 local_220;
  TVector2<double>_u_0 local_210;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  TVector2<double>_u_0 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TArrayView<std::nullptr_t,int> local_1c0;
  code *local_1b0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **local_1a8;
  TVector2<double>_u_0 local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  EIntersectionType local_120;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_118;
  int *local_110;
  char *local_108;
  TVector2<double>_u_0 *local_100;
  int *local_f8;
  
  iVar13 = param_1->ArrayNum;
  uVar19 = iVar13 - 1;
  uVar18 = ~uVar19 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar19 < iVar13) {
    uVar12 = uVar18;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  pFVar17 = (param_1->AllocatorInstance).Data;
  lVar22 = (longlong)(int)uVar19 * 0x10;
  local_228 = lVar22;
  if ((param_1->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  pFVar21 = (param_1->AllocatorInstance).Data;
  dVar23 = *(double *)(pFVar17 + lVar22 + 8) - *(double *)(pFVar21 + 8);
  dVar27 = *(double *)(pFVar17 + lVar22) - *(double *)pFVar21;
  auVar25._0_8_ = dVar23 * dVar23 + dVar27 * dVar27;
  auVar25._8_8_ = 0;
  auVar25 = sqrtpd(auVar25,auVar25);
  if (__real_3f1a36e2eb1c432d <= auVar25._0_8_) {
    local_res18[0] = param_1->ArrayNum;
    local_110 = local_res18;
    local_108 = local_res8;
    local_res8[0] = '\0';
    local_100 = &local_278;
    local_f8 = local_res20;
    local_res20[0] = -1;
    local_res20[1] = -1;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UELocal::FindPolylineSelfIntersection'::__l2::<lambda_1>,void,int>
                ::Call;
    local_1a8 = &local_118;
    local_1c0.DataPtr = (void **)0x0;
    local_1c0.ArrayNum = 0;
    local_118 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_res18[0] + -1,1,
               (TFunctionRef<void___cdecl(int)> *)&local_1b0,(<lambda_1>)0x0,None,&local_1c0);
    if (local_res8[0] == '\0') {
      if ((param_1->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      pFVar17 = (param_1->AllocatorInstance).Data;
      if ((param_1->ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      dVar7 = __real_3ff0000000000000;
      pFVar21 = (param_1->AllocatorInstance).Data;
      dVar23 = *(double *)pFVar17 - *(double *)(pFVar21 + 0x10);
      dVar27 = *(double *)(pFVar17 + 8) - *(double *)(pFVar21 + 0x18);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar27 * dVar27 + dVar23 * dVar23;
      auVar25 = sqrtpd(in_XMM2,auVar3);
      if (auVar25._0_8_ <= 0.0) {
        dVar27 = 0.0;
        dVar23 = 0.0;
      }
      else {
        dVar24 = __real_3ff0000000000000 / auVar25._0_8_;
        dVar23 = dVar23 * dVar24;
        dVar27 = dVar27 * dVar24;
      }
      if ((param_1->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      pFVar17 = (param_1->AllocatorInstance).Data;
      local_258 = *(double *)pFVar17;
      dStack_250 = *(double *)(pFVar17 + 8);
      uVar14 = 0;
      uVar12 = uVar14;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar12 = uVar18;
      }
      local_248._8_4_ = SUB84(dVar27,0);
      local_248._0_8_ = dVar23;
      local_248._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      uVar15 = iVar13 - 2;
      pFVar17 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar14;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      pFVar21 = (param_1->AllocatorInstance).Data;
      dVar26 = *(double *)(pFVar17 + lVar22) - *(double *)(pFVar21 + (longlong)(int)uVar15 * 0x10);
      dVar24 = *(double *)(pFVar17 + lVar22 + 8) -
               *(double *)(pFVar21 + (longlong)(int)uVar15 * 0x10 + 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar24 * dVar24 + dVar26 * dVar26;
      auVar25 = sqrtpd(in_XMM4,auVar4);
      if (auVar25._0_8_ <= 0.0) {
        dVar5 = 0.0;
        dVar24 = 0.0;
      }
      else {
        dVar5 = dVar7 / auVar25._0_8_;
        dVar24 = dVar5 * dVar24;
        dVar5 = dVar5 * dVar26;
      }
      uVar12 = uVar14;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar12 = uVar18;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      dVar8 = dStack_250;
      dVar1 = local_258;
      uVar6 = local_248._0_8_;
      uVar9 = local_248._8_8_;
      local_128 = 0;
      pFVar17 = (param_1->AllocatorInstance).Data + lVar22;
      local_178._s_0.X = (double)*(undefined8 *)pFVar17;
      local_178._s_0.Y = (double)*(undefined8 *)(pFVar17 + 8);
      local_120 = Empty;
      local_158 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
      dStack_150 = _UNK_150aa88b8;
      local_198._s_0.X = local_258;
      local_198._s_0.Y = dStack_250;
      local_188._s_0.X = (double)local_248._0_8_;
      local_188._s_0.Y = (double)local_248._8_8_;
      dVar26 = ((double)local_248._0_8_ * (double)local_248._0_8_ +
               (double)local_248._8_8_ * (double)local_248._8_8_) - dVar7;
      local_168._s_0.X = dVar5;
      local_168._s_0.Y = dVar24;
      if ((___xmm_3e45798ee2308c3a3e45798ee2308c3a <=
           (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (dVar26 = (dVar5 * dVar5 + dVar24 * dVar24) - dVar7,
         ___xmm_3e45798ee2308c3a3e45798ee2308c3a <=
         (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        local_128 = 0x300000000;
      }
      else {
        local_220 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        local_120 = UE::Geometry::TIntrLine2Line2<double>::Classify
                              ((TVector2<double> *)&local_198._s_0,
                               (TVector2<double> *)&local_188._s_0,
                               (TVector2<double> *)&local_178._s_0,
                               (TVector2<double> *)&local_168._s_0,
                               ___xmm_3e45798ee2308c3a3e45798ee2308c3a,_UNK_150aa88b8,
                               (TVector2<double> *)&local_220._s_0);
        if (local_120 == Point) {
          local_138 = local_220._s_0.X;
          local_148 = local_220._s_0.X * (double)uVar6 + dVar1;
          local_140 = local_220._s_0.X * (double)uVar9 + dVar8;
          local_130 = local_220._s_0.Y;
          uVar12 = 1;
        }
        else {
          uVar12 = uVar14;
          if (local_120 == Line) {
            uVar12 = 0x7fffffff;
          }
        }
        local_128 = CONCAT44(2 - (uint)(local_120 != Empty),uVar12);
        if ((((local_120 != Empty) && (local_120 == Point)) && (0.0 < local_138)) &&
           (0.0 < local_130)) {
          pFVar17 = (param_1->AllocatorInstance).Data;
          local_268 = (double)local_248._0_8_ * local_138 + local_258;
          dStack_260 = (double)local_248._8_8_ * local_138 + dStack_250;
          if (((pFVar17 <= (FScriptContainerElement *)&local_268) &&
              ((FScriptContainerElement *)&local_268 < pFVar17 + (longlong)param_1->ArrayMax * 0x10)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          iVar13 = param_1->ArrayNum;
          if (iVar13 == param_1->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar13 + 1;
          pFVar17 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
          *(double *)pFVar17 = local_268;
          *(double *)(pFVar17 + 8) = dStack_260;
          pFVar17 = (param_1->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_258) &&
              ((FScriptContainerElement *)&local_258 < pFVar17 + (longlong)param_1->ArrayMax * 0x10)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          iVar13 = param_1->ArrayNum;
          if (iVar13 == param_1->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar13 + 1;
          pFVar17 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
          *(double *)pFVar17 = local_258;
          *(double *)(pFVar17 + 8) = dStack_250;
          return true;
        }
      }
      iVar13 = param_1->ArrayNum;
      uVar34 = (undefined4)__real_7fefffffffffffff;
      uVar36 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      uVar30 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
      pFVar17 = (param_1->AllocatorInstance).Data;
      pFVar21 = pFVar17 + (longlong)iVar13 * 0x10;
      uVar28 = (int)__real_ffefffffffffffff;
      uVar32 = (int)__real_ffefffffffffffff;
      uVar33 = uVar30;
      uVar29 = uVar34;
      uVar37 = uVar36;
      while( true ) {
        local_230 = CONCAT44(uVar37,uVar29);
        local_238 = CONCAT44(uVar30,uVar28);
        if (param_1->ArrayNum != iVar13) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar17 == pFVar21) break;
        dVar26 = *(double *)pFVar17;
        uVar31 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar1 = *(double *)(pFVar17 + 8);
        uVar35 = SUB84(dVar26,0);
        uVar38 = uVar31;
        if ((double)CONCAT44(uVar37,uVar29) <= dVar26) {
          uVar35 = uVar29;
          uVar38 = uVar37;
        }
        pFVar17 = pFVar17 + 0x10;
        uVar29 = SUB84(dVar26,0);
        if (dVar26 <= (double)CONCAT44(uVar30,uVar28)) {
          uVar29 = uVar28;
          uVar31 = uVar30;
        }
        uVar39 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (dVar1 <= (double)CONCAT44(uVar36,uVar34)) {
          uVar34 = SUB84(dVar1,0);
          uVar36 = uVar39;
        }
        uVar28 = uVar29;
        uVar30 = uVar31;
        uVar29 = uVar35;
        uVar37 = uVar38;
        if ((double)CONCAT44(uVar33,uVar32) <= dVar1) {
          uVar32 = SUB84(dVar1,0);
          uVar33 = uVar39;
        }
      }
      dVar1 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar36,uVar34);
      dVar26 = (double)CONCAT44(uVar30,uVar28) - (double)CONCAT44(uVar37,uVar29);
      dVar26 = SQRT(dVar1 * dVar1 + dVar26 * dVar26);
      if ((param_1->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      dVar8 = __real_3f50624dd2f1a9fc;
      dVar1 = __real_3fe0000000000000;
      dVar26 = dVar26 + dVar26;
      pFVar17 = (param_1->AllocatorInstance).Data;
      local_200 = dVar23 * dVar26;
      dVar23 = dVar23 * __real_3f50624dd2f1a9fc + *(double *)pFVar17;
      dStack_1f8 = dVar27 * dVar26;
      dVar27 = dVar27 * __real_3f50624dd2f1a9fc + *(double *)(pFVar17 + 8);
      local_210._s_0.X = (dVar23 + local_200 + dVar23) * __real_3fe0000000000000;
      local_210._s_0.Y = (dStack_1f8 + dVar27 + dVar27) * __real_3fe0000000000000;
      local_1f0 = SQRT(dStack_1f8 * dStack_1f8 + local_200 * local_200);
      if (local_1f0 <= 0.0) {
        local_200 = 0.0;
        dStack_1f8 = 0.0;
        local_1f0 = 0.0;
      }
      else {
        dStack_1f8 = (dVar7 / local_1f0) * dStack_1f8;
        local_200 = (dVar7 / local_1f0) * local_200;
      }
      local_1f0 = local_1f0 * __real_3fe0000000000000;
      bVar10 = UELocal::FindPolylineSegmentIntersection
                         (param_1,(TSegment2<double> *)&local_210._s_0,
                          (TVector2<double> *)&local_278._s_0,local_res20);
      if (!bVar10) {
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        pFVar17 = (param_1->AllocatorInstance).Data;
        local_1d8 = dVar5 * dVar26;
        dVar27 = dVar5 * dVar8 + *(double *)(pFVar17 + local_228);
        dVar23 = dVar24 * dVar8 + *(double *)(pFVar17 + local_228 + 8);
        dVar24 = dVar24 * dVar26;
        local_1e8._s_0.X = (local_1d8 + dVar27 + dVar27) * dVar1;
        local_1e8._s_0.Y = (dVar24 + dVar23 + dVar23) * dVar1;
        local_1c8 = SQRT(dVar24 * dVar24 + local_1d8 * local_1d8);
        if (local_1c8 <= 0.0) {
          local_1d8 = 0.0;
          dStack_1d0 = 0.0;
          local_1c8 = 0.0;
        }
        else {
          dStack_1d0 = (dVar7 / local_1c8) * dVar24;
          local_1d8 = (dVar7 / local_1c8) * local_1d8;
        }
        local_1c8 = local_1c8 * dVar1;
        bVar10 = UELocal::FindPolylineSegmentIntersection
                           (param_1,(TSegment2<double> *)&local_1e8._s_0,
                            (TVector2<double> *)&local_278._s_0,local_res20);
        return bVar10;
      }
    }
    else {
      local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ArrayNum = 0;
      local_288.ArrayMax = 0;
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      *(double *)(local_288.AllocatorInstance.Data + (longlong)iVar13 * 0x10) = local_278._s_0.X;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) = local_278._s_0.Y
      ;
      uVar16 = (ulonglong)local_res20[0];
      local_288.ArrayNum = iVar13 + 1;
      if (local_res20[0] <= local_res20[1]) {
        lVar22 = uVar16 << 4;
        do {
          uVar18 = (uint)uVar16;
          uVar12 = 0;
          if ((int)uVar18 < param_1->ArrayNum) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          pTVar20 = (TVector2<double>_u_0 *)((param_1->AllocatorInstance).Data + lVar22);
          if (((local_288.AllocatorInstance.Data <= pTVar20) &&
              (pTVar20 < (TVector2<double>_u_0 *)
                         (local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (local_288.ArrayNum == local_288.ArrayMax) {
            local_288.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
          }
          iVar13 = local_288.ArrayNum + 1;
          uVar16 = (ulonglong)(uVar18 + 1);
          lVar22 = lVar22 + 0x10;
          uVar6 = *(undefined8 *)((longlong)pTVar20 + 8);
          *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10) =
               (pTVar20->_s_0).X;
          *(undefined8 *)
           (local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + 8) = uVar6;
          local_288.ArrayNum = iVar13;
        } while ((int)(uVar18 + 1) <= local_res20[1]);
      }
      if (((local_288.AllocatorInstance.Data <= &local_278) &&
          (&local_278 <
           (TVector2<double>_u_0 *)
           (local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      if (local_288.ArrayNum == local_288.ArrayMax) {
        local_288.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      iVar13 = local_288.ArrayNum + 1;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10) =
           local_278._s_0.X;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + 8) =
           local_278._s_0.Y;
      local_288.ArrayNum = iVar13;
      if (param_1 != &local_288) {
        pFVar17 = (param_1->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (param_1->AllocatorInstance).Data = local_288.AllocatorInstance.Data;
        param_1->ArrayNum = local_288.ArrayNum;
        param_1->ArrayMax = local_288.ArrayMax;
        local_288.ArrayNum = 0;
        local_288.ArrayMax = 0;
        local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if ((TVector2<double>_u_0 *)local_288.AllocatorInstance.Data != (TVector2<double>_u_0 *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// BeginHoverSequenceHitTest @ 14caec4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputRayHit * __thiscall
UPolyLassoMarqueeMechanic::BeginHoverSequenceHitTest
          (UPolyLassoMarqueeMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  UInteractiveTool *pUVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double local_78;
  double dStack_70;
  double local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  if (*(char *)((longlong)&(this->CachedCameraState).Orientation.Y + 6) == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_28 = __real_3ff0000000000000;
    local_68 = 0.0;
    local_48 = ___xmm_3ff00000000000000000000000000000;
    dStack_40 = _UNK_15061cbc8;
    local_38 = 0x42b40000;
    local_34 = 0x42c80000;
    local_30 = 0x3f800000;
    local_2c = 0;
    pUVar6 = UInteractionMechanic::GetParentTool
                       ((UInteractionMechanic *)
                        ((longlong)&this[-1].CurrentPolyLasso.UBasisVector.field0_0x0 + 8));
    plVar7 = (longlong *)(**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x398))(plVar7);
    uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,&local_78);
    if (((local_78 == *(double *)&(this->LineColor).field0_0x0) &&
        (dStack_70 == *(double *)((longlong)&(this->LineColor).field0_0x0 + 8))) &&
       (local_68 == *(double *)&(this->ClosedColor).field0_0x0)) {
      lVar9 = -(ulonglong)((this->CachedCameraState).Position.field0_0x0._s_0.X != dStack_40);
      lVar10 = -(ulonglong)((double)(this->ClickDragBehavior).field0_0x0 != dStack_50);
      auVar2._8_4_ = (int)lVar9;
      auVar2._0_8_ = -(ulonglong)((double)(this->HoverBehavior).field0_0x0 != local_48);
      auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      uVar8 = movmskpd((int)plVar7,auVar2);
      auVar3._8_4_ = (int)lVar10;
      auVar3._0_8_ = -(ulonglong)(*(double *)&this->bEnableFreehandPolygons != local_58);
      auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      iVar5 = movmskpd(uVar4,auVar3);
      if ((uVar8 & 0x3fffffff) == 0 && iVar5 == 0) {
        FInputRayHit::FInputRayHit(__return_storage_ptr__,0.0);
        return __return_storage_ptr__;
      }
    }
    cVar1 = *(char *)((longlong)&(this->CachedCameraState).Orientation.Y + 6);
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Y + 5) = 0;
    if (cVar1 == '\0') {
      TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
                 *)&(this->OnDrawPolyLassoStarted).field_0x8,
                (FCameraPolyLasso *)&(this->CachedCameraState).field_0x58,true);
      FInputRayHit::FInputRayHit(__return_storage_ptr__);
    }
    else {
      *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Y + 6) = 0;
      FInputRayHit::FInputRayHit(__return_storage_ptr__);
    }
  }
  return __return_storage_ptr__;
}

// CanBeginClickDragSequence @ 14caf29e0

FInputRayHit * __thiscall
UPolyLassoMarqueeMechanic::CanBeginClickDragSequence
          (UPolyLassoMarqueeMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res8 [3];
  undefined8 local_res20;
  
  if ((*(char *)((longlong)&(this->CachedCameraState).Orientation.Z + 4) != '\0') &&
     (((this->OnDrawPolyLassoFinished).field_0x18 != '\0' ||
      ((this->OnDrawPolyLassoFinished).field_0x19 != '\0')))) {
    FInputRayHit::FInputRayHit(__return_storage_ptr__,__real_47efffffe0000000);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->bHit = false;
  __return_storage_ptr__->HitDepth = 3.4028234663852886e+38;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res8[0];
  return __return_storage_ptr__;
}

// DrawHUD @ 14cb027c0

void __thiscall
UPolyLassoMarqueeMechanic::DrawHUD
          (UPolyLassoMarqueeMechanic *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  FCanvasItem local_1b8;
  double local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  float local_148;
  FCanvasItem local_138;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  float local_c8;
  
  uVar15 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
  if (((uVar15 & 2) != 0) &&
     ((this->bIsDragging != false || (this->bIsInMultiClickPolygon != false)))) {
    if ((this->bIsInMultiClickPolygon == false) ||
       (lVar16 = 0xb8, this->bIsMultiClickPolygonClosed == false)) {
      lVar16 = 0xa8;
    }
    puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar16);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    fVar19 = __real_3f800000;
    if (param_1->bStereoRendering == false) {
      fVar19 = param_1->DPIScale;
    }
    iVar2 = (this->PolyPathPoints).ArrayNum;
    if ((iVar2 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar12 = __real_3ff0000000000000;
    pFVar3 = (this->PolyPathPoints).AllocatorInstance.Data;
    uVar18 = 1;
    dVar7 = __real_3ff0000000000000 / (double)fVar19;
    dVar5 = dVar7 * *(double *)(pFVar3 + 0x38);
    dVar6 = dVar7 * *(double *)(pFVar3 + 0x40);
    if (1 < (longlong)iVar2) {
      lVar17 = 0x48;
      lVar16 = (longlong)iVar2 + -1;
      dVar8 = dVar5;
      dVar9 = dVar6;
      do {
        uVar14 = 0;
        if ((int)uVar18 < (this->PolyPathPoints).ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->PolyPathPoints).AllocatorInstance.Data;
        local_148 = this->LineThickness;
        dVar5 = dVar7 * *(double *)(pFVar3 + lVar17 + 0x38);
        dVar6 = dVar7 * *(double *)(pFVar3 + lVar17 + 0x40);
        local_1b8.StereoDepth = 0;
        local_1b8.BlendMode = SE_BLEND_Opaque;
        local_168 = 0;
        local_150 = 0;
        local_1b8.bFreezeTime = false;
        local_1b8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        local_1b8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_1b8.Position.field0_0x0._s_0.X = dVar8;
        local_1b8.Position.field0_0x0._s_0.Y = dVar9;
        local_1b8.Color.field0_0x0._0_8_ = uVar10;
        local_1b8.Color.field0_0x0._8_8_ = uVar11;
        local_178 = dVar8;
        local_170 = dVar9;
        local_160 = dVar5;
        local_158 = dVar6;
        FCanvas::DrawItem(param_1,&local_1b8);
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x48;
        lVar16 = lVar16 + -1;
        dVar8 = dVar5;
        dVar9 = dVar6;
      } while (lVar16 != 0);
    }
    local_138.StereoDepth = 0;
    local_138.BlendMode = SE_BLEND_Opaque;
    local_138.bFreezeTime = false;
    local_138.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_138._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    dVar7 = (this->DragCurrentScreenPosition).field0_0x0._s_0.Y * (dVar12 / (double)fVar19);
    local_e0._8_4_ = SUB84(dVar7,0);
    local_e0._0_8_ = (this->DragCurrentScreenPosition).field0_0x0._s_0.X * (dVar12 / (double)fVar19)
    ;
    local_e0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_c8 = this->LineThickness;
    local_e8 = 0;
    local_d0 = 0;
    local_138.Position.field0_0x0._s_0.X = dVar5;
    local_138.Position.field0_0x0._s_0.Y = dVar6;
    local_138.Color.field0_0x0._0_8_ = uVar10;
    local_138.Color.field0_0x0._8_8_ = uVar11;
    local_f8 = dVar5;
    local_f0 = dVar6;
    FCanvas::DrawItem(param_1,&local_138);
  }
  return;
}

// GetPriorityRange @ 14cb11cd0

TTuple<FInputCapturePriority,FInputCapturePriority> __thiscall
UPolyLassoMarqueeMechanic::GetPriorityRange(UPolyLassoMarqueeMechanic *this)

{
  TTuple<FInputCapturePriority,FInputCapturePriority> in_RDX;
  
  *(int *)in_RDX = (this->BasePriority).Priority;
  *(int *)((longlong)in_RDX + 4) = (this->BasePriority).Priority;
  return in_RDX;
}

// GetPrivateStaticClass @ 14cb12be0

UClass * __cdecl UPolyLassoMarqueeMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolyLassoMarqueeMechanic",
               &Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton,
               StaticRegisterNativesUPolyLassoMarqueeMechanic,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyLassoMarqueeMechanic>,
               InternalVTableHelperCtorCaller<UPolyLassoMarqueeMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.InnerSingleton;
}

// IsEnabled @ 14cb22050

bool __thiscall UPolyLassoMarqueeMechanic::IsEnabled(UPolyLassoMarqueeMechanic *this)

{
  return this->bIsEnabled;
}

// OnBeginHover @ 14cb23c30

void __thiscall
UPolyLassoMarqueeMechanic::OnBeginHover(UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClickDrag @ 14cb23c50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPolyLassoMarqueeMechanic::OnClickDrag(UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  float *pfVar1;
  double *pdVar2;
  undefined8 *puVar3;
  char cVar4;
  FInputDeviceRay *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  
  if (param_1->bHas2D != false) {
    if (*(char *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) != '\0') {
      dVar7 = (param_1->ScreenPosition).field0_0x0._s_0.Y;
      *(double *)&(this->CachedCameraState).AspectRatio =
           (param_1->ScreenPosition).field0_0x0._s_0.X;
      (this->CachedCameraState).DPIScale = dVar7;
      return;
    }
    cVar4 = (this->OnDrawPolyLassoFinished).field_0x18;
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 5) = 1;
    dVar7 = (param_1->ScreenPosition).field0_0x0._s_0.Y;
    *(double *)&(this->CachedCameraState).AspectRatio = (param_1->ScreenPosition).field0_0x0._s_0.X;
    (this->CachedCameraState).DPIScale = dVar7;
    if (cVar4 != '\0') {
      pdVar2 = &(this->CachedCameraState).Orientation.W;
      fVar10 = (this->CachedCameraState).HorizontalFOVDegrees;
      uVar11 = (int)fVar10 - 1;
      uVar9 = 0;
      if ((int)uVar11 < (int)fVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar5 = (FInputDeviceRay *)*pdVar2;
      lVar12 = (longlong)(int)(this->CachedCameraState).HorizontalFOVDegrees;
      fVar10 = *(float *)&(this->OnDrawPolyLassoChanged).field_0x10;
      dVar7 = pFVar5[lVar12 + -1].ScreenPosition.field0_0x0._s_0.Y -
              (param_1->ScreenPosition).field0_0x0._s_0.Y;
      dVar13 = pFVar5[lVar12 + -1].ScreenPosition.field0_0x0._s_0.X -
               (param_1->ScreenPosition).field0_0x0._s_0.X;
      if (fVar10 * fVar10 < (float)(dVar7 * dVar7 + dVar13 * dVar13)) {
        if ((pFVar5 <= param_1) &&
           (param_1 < pFVar5 + (int)(this->CachedCameraState).OrthoWorldCoordinateWidth)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        fVar10 = (this->CachedCameraState).HorizontalFOVDegrees;
        pfVar1 = &(this->CachedCameraState).OrthoWorldCoordinateWidth;
        if (fVar10 == *pfVar1) {
          fVar10 = (float)UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x848,(ForAnyElementType *)pdVar2,(int *)pfVar1);
        }
        (this->CachedCameraState).HorizontalFOVDegrees = (float)((int)fVar10 + 1);
        dVar13 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
        lVar12 = (longlong)(int)fVar10;
        dVar7 = *pdVar2;
        pdVar2 = (double *)((longlong)dVar7 + lVar12 * 0x48);
        *pdVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
        pdVar2[1] = dVar13;
        dVar13 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
        pdVar2 = (double *)((longlong)dVar7 + lVar12 * 0x48 + 0x10);
        *pdVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        pdVar2[1] = dVar13;
        dVar13 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
        pdVar2 = (double *)((longlong)dVar7 + lVar12 * 0x48 + 0x20);
        *pdVar2 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
        pdVar2[1] = dVar13;
        dVar13 = (param_1->ScreenPosition).field0_0x0._s_0.X;
        puVar3 = (undefined8 *)((longlong)dVar7 + lVar12 * 0x48 + 0x30);
        *puVar3 = *(undefined8 *)&param_1->bHas2D;
        puVar3[1] = dVar13;
        *(double *)((longlong)dVar7 + lVar12 * 0x48 + 0x40) =
             (param_1->ScreenPosition).field0_0x0._s_0.Y;
        FCameraPolyLasso::AddPoint((FCameraPolyLasso *)&this->BasePriority,&param_1->WorldRay);
      }
      TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&),FDefaultDelegateUserPolicy>
                 *)&this->_padding_,(FCameraPolyLasso *)&this->BasePriority);
    }
  }
  return;
}

// OnClickPress @ 14cb23fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPolyLassoMarqueeMechanic::OnClickPress(UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  float *pfVar1;
  TObjectPtr<UClickDragInputBehavior> *this_00;
  TVector<double> *pTVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  double dVar7;
  void *pvVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  double dVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  float fVar15;
  longlong lVar16;
  UInteractiveTool *pUVar17;
  longlong *plVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110 [5];
  undefined8 local_88 [14];
  
  if (param_1->bHas2D == false) {
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 5) = 0;
    return;
  }
  if (*(char *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) != '\0') {
    dVar7 = (param_1->ScreenPosition).field0_0x0._s_0.Y;
    *(double *)&(this->CachedCameraState).AspectRatio = (param_1->ScreenPosition).field0_0x0._s_0.X;
    (this->CachedCameraState).DPIScale = dVar7;
    return;
  }
  pdVar3 = &(this->CachedCameraState).Orientation.W;
  pfVar1 = &(this->CachedCameraState).OrthoWorldCoordinateWidth;
  (this->CachedCameraState).HorizontalFOVDegrees = 0.0;
  if ((int)(this->CachedCameraState).OrthoWorldCoordinateWidth < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)pdVar3,0,(int *)pfVar1);
  }
  if (((FInputDeviceRay *)*pdVar3 <= param_1) &&
     (param_1 < (FInputDeviceRay *)*pdVar3 + (int)*pfVar1)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar15 = (this->CachedCameraState).HorizontalFOVDegrees;
  if (fVar15 == *pfVar1) {
    fVar15 = (float)UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,(ForAnyElementType *)pdVar3,(int *)pfVar1);
  }
  lVar16 = (longlong)(int)fVar15;
  (this->CachedCameraState).HorizontalFOVDegrees = (float)((int)fVar15 + 1);
  dVar12 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  dVar7 = *pdVar3;
  pdVar3 = (double *)((longlong)dVar7 + lVar16 * 0x48);
  *pdVar3 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  pdVar3[1] = dVar12;
  dVar12 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  pdVar3 = (double *)((longlong)dVar7 + lVar16 * 0x48 + 0x10);
  *pdVar3 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  pdVar3[1] = dVar12;
  dVar12 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  pdVar3 = (double *)((longlong)dVar7 + lVar16 * 0x48 + 0x20);
  *pdVar3 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  pdVar3[1] = dVar12;
  dVar12 = (param_1->ScreenPosition).field0_0x0._s_0.X;
  puVar4 = (undefined8 *)((longlong)dVar7 + lVar16 * 0x48 + 0x30);
  *puVar4 = *(undefined8 *)&param_1->bHas2D;
  puVar4[1] = dVar12;
  *(double *)((longlong)dVar7 + lVar16 * 0x48 + 0x40) = (param_1->ScreenPosition).field0_0x0._s_0.Y;
  dVar7 = (param_1->ScreenPosition).field0_0x0._s_0.Y;
  *(double *)&(this->CachedCameraState).AspectRatio = (param_1->ScreenPosition).field0_0x0._s_0.X;
  (this->CachedCameraState).DPIScale = dVar7;
  pUVar17 = UInteractionMechanic::GetParentTool
                      ((UInteractionMechanic *)
                       ((longlong)&this[-1].CurrentPolyLasso.UBasisVector.field0_0x0 + 0x10));
  plVar18 = (longlong *)(**(code **)(pUVar17->_padding_ + 0x2d8))(pUVar17);
  plVar18 = (longlong *)(**(code **)(*plVar18 + 0x398))(plVar18);
  pdVar3 = (double *)((longlong)&(this->LineColor).field0_0x0 + 8);
  (**(code **)(*plVar18 + 0x18))(plVar18,pdVar3);
  this_00 = &this->ClickDragBehavior;
  dVar12 = *pdVar3;
  pFVar13 = *(FScriptContainerElement **)&(this->ClosedColor).field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&(this->ClosedColor).field0_0x0 + 8);
  local_1c8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_1c8._s_0.Y = _UNK_150689518;
  local_1c8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this_00,(TVector<double> *)&local_188._s_0,
             (TVector<double> *)&local_1c8._s_0);
  local_1a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_1a8._s_0.Y = _UNK_150689518;
  local_1a8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this_00,(TVector<double> *)&local_1e8._s_0,
             (TVector<double> *)&local_1a8._s_0);
  auVar11._4_8_ = extraout_XMM0_Qb;
  auVar11._0_4_ = local_188._4_4_;
  auVar19._0_8_ = auVar11._0_8_ << 0x20;
  auVar19._8_4_ = local_188._8_4_;
  auVar19._12_4_ = local_188._12_4_;
  uVar6 = (this->CachedCameraState).field_0x1c;
  local_168._s_0.Z = 0.0;
  dVar7 = (local_1e8._s_0.Y + *(double *)&(this->ClosedColor).field0_0x0) * auVar19._8_8_ +
          (local_1e8._s_0.X + *pdVar3) * local_188._0_8_ +
          (local_1e8._s_0.Z + *(double *)((longlong)&(this->ClosedColor).field0_0x0 + 8)) *
          local_188._s_0.Z;
  local_168._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_168._s_0.Y = _UNK_15061cbc8;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this_00,(TVector<double> *)&local_128._s_0,
             (TVector<double> *)&local_168._s_0);
  local_148._s_0.Z = __real_3ff0000000000000;
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this_00,(TVector<double> *)&local_110[0]._s_0,
             (TVector<double> *)&local_148._s_0);
  (this->CurrentPolyLasso).CameraOrigin.field0_0x0._s_0.Z = local_128._s_0.X;
  *(double *)&(this->CurrentPolyLasso).bCameraIsOrthographic = local_128._s_0.Y;
  *(undefined1 *)&(this->DragCurrentScreenPosition).field0_0x0 = uVar6;
  pTVar2 = &(this->CurrentPolyLasso).UBasisVector;
  (this->CurrentPolyLasso).CameraPlane._padding_ = (longlong)local_128._s_0.Z;
  *(double *)&(this->BasePriority).Priority = dVar12;
  (this->PolyPathPoints).AllocatorInstance.Data = pFVar13;
  (this->PolyPathPoints).ArrayNum = (int)uVar5;
  (this->PolyPathPoints).ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->DragCurrentScreenPosition).field0_0x0._s_0.Y = local_188._0_16_;
  (this->CurrentPolyLasso).CameraPlane._padding_ = local_110[0]._s_0.X;
  (this->CurrentPolyLasso).CameraPlane._padding_ = local_110[0]._s_0.Y;
  (this->CurrentPolyLasso).CameraPlane.W = (double)local_110[0]._16_8_;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = local_188._s_0.Z;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(this->CurrentPolyLasso).CameraOrigin.field0_0x0 = auVar10;
  if (pTVar2 != (TVector<double> *)local_88) {
    pvVar8 = (void *)(pTVar2->field0_0x0)._s_0.X;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    (pTVar2->field0_0x0)._s_0.X = 0.0;
    (this->CurrentPolyLasso).UBasisVector.field0_0x0._s_0.Y = 0.0;
  }
  FCameraPolyLasso::AddPoint((FCameraPolyLasso *)&this->BasePriority,&param_1->WorldRay);
  if ((this->OnDrawPolyLassoFinished).field_0x18 != '\0') {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_
              );
  }
  return;
}

// OnClickRelease @ 14cb244c0

void __thiscall
UPolyLassoMarqueeMechanic::OnClickRelease(UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  float *pfVar1;
  double *pdVar2;
  undefined8 *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  float fVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  
  if (*(char *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) == '\0') {
    fVar7 = (this->CachedCameraState).HorizontalFOVDegrees;
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 5) = 0;
    if ((fVar7 == 1.4013e-45) && ((this->OnDrawPolyLassoFinished).field_0x19 != '\0')) {
      fVar7 = (this->CachedCameraState).HorizontalFOVDegrees;
      uVar10 = (int)fVar7 - 1;
      uVar9 = 0;
      if ((int)uVar10 < (int)fVar7) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar8 = (longlong)(int)(this->CachedCameraState).HorizontalFOVDegrees;
      fVar7 = *(float *)&(this->OnDrawPolyLassoChanged).field_0x10;
      dVar11 = (this->CachedCameraState).Orientation.W;
      dVar5 = *(double *)((longlong)dVar11 + -8 + lVar8 * 0x48) -
              (param_1->ScreenPosition).field0_0x0._s_0.Y;
      dVar11 = *(double *)((longlong)dVar11 + -0x10 + lVar8 * 0x48) -
               (param_1->ScreenPosition).field0_0x0._s_0.X;
      if ((float)(dVar5 * dVar5 + dVar11 * dVar11) < fVar7 * fVar7) {
        *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) = 1;
        return;
      }
    }
    if ((this->OnDrawPolyLassoFinished).field_0x18 != '\0') {
      TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
                 *)&(this->OnDrawPolyLassoStarted).field_0x10,
                (FCameraPolyLasso *)&this->BasePriority,false);
      return;
    }
  }
  else {
    pdVar2 = &(this->CachedCameraState).Orientation.W;
    bVar6 = WillCloseCurrentLasso
                      ((UPolyLassoMarqueeMechanic *)
                       ((longlong)&this[-1].CurrentPolyLasso.UBasisVector.field0_0x0 + 0x10),param_1
                      );
    if (!bVar6) {
      if (((FInputDeviceRay *)*pdVar2 <= param_1) &&
         (param_1 < (FInputDeviceRay *)*pdVar2 +
                    (int)(this->CachedCameraState).OrthoWorldCoordinateWidth)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar7 = (this->CachedCameraState).HorizontalFOVDegrees;
      pfVar1 = &(this->CachedCameraState).OrthoWorldCoordinateWidth;
      if (fVar7 == *pfVar1) {
        fVar7 = (float)UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,(ForAnyElementType *)pdVar2,(int *)pfVar1);
      }
      (this->CachedCameraState).HorizontalFOVDegrees = (float)((int)fVar7 + 1);
      dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      lVar8 = (longlong)(int)fVar7;
      dVar11 = *pdVar2;
      pdVar2 = (double *)((longlong)dVar11 + lVar8 * 0x48);
      *pdVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      pdVar2[1] = dVar5;
      dVar5 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      pdVar2 = (double *)((longlong)dVar11 + lVar8 * 0x48 + 0x10);
      *pdVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      pdVar2[1] = dVar5;
      dVar5 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      pdVar2 = (double *)((longlong)dVar11 + lVar8 * 0x48 + 0x20);
      *pdVar2 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      pdVar2[1] = dVar5;
      dVar5 = (param_1->ScreenPosition).field0_0x0._s_0.X;
      puVar3 = (undefined8 *)((longlong)dVar11 + lVar8 * 0x48 + 0x30);
      *puVar3 = *(undefined8 *)&param_1->bHas2D;
      puVar3[1] = dVar5;
      *(double *)((longlong)dVar11 + lVar8 * 0x48 + 0x40) =
           (param_1->ScreenPosition).field0_0x0._s_0.Y;
      FCameraPolyLasso::AddPoint((FCameraPolyLasso *)&this->BasePriority,&param_1->WorldRay);
      TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&),FDefaultDelegateUserPolicy>
                 *)&this->_padding_,(FCameraPolyLasso *)&this->BasePriority);
      return;
    }
    if ((int)(this->CachedCameraState).HorizontalFOVDegrees < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FCameraPolyLasso::AddPoint((FCameraPolyLasso *)&this->BasePriority,(TRay<double> *)*pdVar2);
    TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
               *)&(this->OnDrawPolyLassoStarted).field_0x10,(FCameraPolyLasso *)&this->BasePriority,
              false);
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) = 0;
  }
  return;
}

// OnEndHover @ 14cb27950

void __thiscall UPolyLassoMarqueeMechanic::OnEndHover(UPolyLassoMarqueeMechanic *this)

{
  return;
}

// OnTerminateDragSequence @ 14cb27aa0

void __thiscall UPolyLassoMarqueeMechanic::OnTerminateDragSequence(UPolyLassoMarqueeMechanic *this)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&(this->CachedCameraState).Orientation.Z + 6);
  *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 5) = 0;
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)&(this->CachedCameraState).Orientation.Z + 6) = 0;
    return;
  }
  TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
             *)&(this->OnDrawPolyLassoStarted).field_0x10,(FCameraPolyLasso *)&this->BasePriority,
            true);
  return;
}

// OnUpdateHover @ 14cb285b0

bool __thiscall
UPolyLassoMarqueeMechanic::OnUpdateHover(UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  double dVar1;
  bool bVar2;
  
  if (*(char *)((longlong)&(this->CachedCameraState).Orientation.Y + 6) != '\0') {
    dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.Y;
    *(double *)&(this->CachedCameraState).HorizontalFOVDegrees =
         (param_1->ScreenPosition).field0_0x0._s_0.X;
    *(double *)&(this->CachedCameraState).AspectRatio = dVar1;
    bVar2 = WillCloseCurrentLasso
                      ((UPolyLassoMarqueeMechanic *)
                       ((longlong)&this[-1].CurrentPolyLasso.UBasisVector.field0_0x0 + 8),param_1);
    *(bool *)((longlong)&(this->CachedCameraState).Orientation.Y + 7) = bVar2;
    return true;
  }
  return false;
}

// SetBasePriority @ 14cb35bf0

void __thiscall
UPolyLassoMarqueeMechanic::SetBasePriority
          (UPolyLassoMarqueeMechanic *this,FInputCapturePriority *param_1)

{
  UClickDragInputBehavior *pUVar1;
  
  (this->BasePriority).Priority = param_1->Priority;
  pUVar1 = (this->ClickDragBehavior).field0_0x0.DebugPtr;
  if (pUVar1 != (UClickDragInputBehavior *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb35c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return;
  }
  return;
}

// SetIsEnabled @ 14cb36980

void __thiscall
UPolyLassoMarqueeMechanic::SetIsEnabled(UPolyLassoMarqueeMechanic *this,bool param_1)

{
  if (((this->bIsDragging != false) || (this->bIsInMultiClickPolygon != false)) && (!param_1)) {
    this->bIsDragging = false;
    if (this->bIsInMultiClickPolygon == false) {
      TMulticastDelegate<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>::
      Broadcast(&this->OnDrawPolyLassoFinished,&this->CurrentPolyLasso,true);
      this->bIsEnabled = false;
      return;
    }
    this->bIsInMultiClickPolygon = false;
  }
  this->bIsEnabled = param_1;
  return;
}

// Setup @ 14cb3b090

void __thiscall
UPolyLassoMarqueeMechanic::Setup(UPolyLassoMarqueeMechanic *this,UInteractiveTool *param_1)

{
  UClickDragInputBehavior *pUVar1;
  UObject *pUVar2;
  UMouseHoverBehavior *pUVar3;
  longlong *plVar4;
  
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar1 = NewObject<UClickDragInputBehavior>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UClickDragInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ClickDragBehavior).field0_0x0.DebugPtr = pUVar1;
  (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,&this->BasePriority);
  pUVar1 = (this->ClickDragBehavior).field0_0x0.DebugPtr;
  plVar4 = &this->_padding_;
  if (this == (UPolyLassoMarqueeMechanic *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar1 + 0x378))(pUVar1,plVar4);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))
            (pUVar2,(this->ClickDragBehavior).field0_0x0.DebugPtr,this);
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMouseHoverBehavior *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->HoverBehavior).field0_0x0.DebugPtr = pUVar3;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,&this->BasePriority);
  pUVar3 = (this->HoverBehavior).field0_0x0.DebugPtr;
  plVar4 = &this->_padding_;
  if (this == (UPolyLassoMarqueeMechanic *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,plVar4);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,(this->HoverBehavior).field0_0x0.DebugPtr,this);
  this->bIsEnabled = true;
  return;
}

// StaticRegisterNativesUPolyLassoMarqueeMechanic @ 14cb3ebe0

void __cdecl UPolyLassoMarqueeMechanic::StaticRegisterNativesUPolyLassoMarqueeMechanic(void)

{
  return;
}

// WillCloseCurrentLasso @ 14cb4a630

bool __thiscall
UPolyLassoMarqueeMechanic::WillCloseCurrentLasso
          (UPolyLassoMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  fVar7 = this->SpacingTolerance + this->SpacingTolerance;
  if ((this->PolyPathPoints).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->PolyPathPoints).AllocatorInstance.Data;
  dVar5 = *(double *)(pFVar1 + 0x40) - (param_1->ScreenPosition).field0_0x0._s_0.Y;
  dVar6 = *(double *)(pFVar1 + 0x38) - (param_1->ScreenPosition).field0_0x0._s_0.X;
  return (float)(dVar5 * dVar5 + dVar6 * dVar6) < fVar7 * fVar7;
}

