// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 1473226e0

UClass * __cdecl USceneCaptureComponent2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponent2D",
               &Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponent2D,0xc20,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<USceneCaptureComponent2D>,
               InternalVTableHelperCtorCaller<USceneCaptureComponent2D>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton;
}

// USceneCaptureComponent2D @ 147324d90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USceneCaptureComponent2D * __thiscall
USceneCaptureComponent2D::USceneCaptureComponent2D
          (USceneCaptureComponent2D *this,FVTableHelper *param_1)

{
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->TextureTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  this->CustomNearClippingPlane = 0.0;
  this->bUseFauxOrthoViewPos = false;
  this->bEnableOrthographicTiling = false;
  this->NumXTiles = 4;
  this->NumYTiles = 4;
  this->bRenderInMainRenderer = false;
  this->UnlitViewmode = Capture;
  (this->MainViewResolutionDivisor).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->MainViewResolutionDivisor).field0_0x0 + 4) = 1;
  *(undefined8 *)&(this->UserSceneTextureBaseColor).Number = 0;
  *(undefined8 *)&(this->UserSceneTextureNormal).Number = 0;
  (this->UserSceneTextureSceneColor).Number = 0;
  (this->SceneViewExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneViewExtensions).ArrayNum = 0;
  (this->SceneViewExtensions).ArrayMax = 0;
  this->TileID = 0;
  this->MainViewFamily = (FSceneViewFamily *)0x0;
  return this;
}

// ~USceneCaptureComponent2D @ 147325460

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall USceneCaptureComponent2D::~USceneCaptureComponent2D(USceneCaptureComponent2D *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TWeakPtr<ISceneViewExtension,1>,int>
            ((TWeakPtr<ISceneViewExtension,1> *)(this->SceneViewExtensions).AllocatorInstance.Data,
             (this->SceneViewExtensions).ArrayNum);
  pFVar1 = (this->SceneViewExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneCaptureComponent::~USceneCaptureComponent((USceneCaptureComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147327740

UClass * __cdecl USceneCaptureComponent2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponent2D",
               &Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponent2D,0xc20,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<USceneCaptureComponent2D>,
               InternalVTableHelperCtorCaller<USceneCaptureComponent2D>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponent2D.InnerSingleton;
}

// Is2D @ 147327aa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall USceneCaptureComponent2D::Is2D(USceneCaptureComponent2D *this)

{
  return true;
}

// RequiresGameThreadEndOfFrameUpdates @ 147327e10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
USceneCaptureComponent2D::RequiresGameThreadEndOfFrameUpdates(USceneCaptureComponent2D *this)

{
  return true;
}

// Serialize @ 147327ee0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::Serialize(USceneCaptureComponent2D *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUSceneCaptureComponent2D @ 147328300

void __cdecl USceneCaptureComponent2D::StaticRegisterNativesUSceneCaptureComponent2D(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USceneCaptureComponent2D_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddOrUpdateBlendable @ 147329b50

void __cdecl
USceneCaptureComponent2D::execAddOrUpdateBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  undefined8 uStack_50;
  
  local_58 = (UObject *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  uVar6 = local_res10[0];
  uVar12 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_58 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_58);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar7);
      goto LAB_147329c5d;
    }
  }
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
LAB_147329c5d:
  puVar1 = &param_1[0x45].field_0x20;
  iVar10 = *(int *)(param_1 + 0x46);
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (0 < (longlong)iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)(param_1 + 0x46)) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + uVar14 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar8 = pUVar7 == (UObject *)0x0;
      }
      else {
        bVar8 = pUVar3 == pUVar7;
      }
      if (bVar8) {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)(param_1 + 0x46)) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar11 * 0x10) = uVar6;
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x10;
    } while ((longlong)uVar13 < (longlong)iVar10);
  }
  local_68[0] = uVar6;
  local_60 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  if (((*(undefined4 **)puVar1 <= local_68) &&
      (local_68 < *(undefined4 **)puVar1 + (longlong)*(int *)&param_1[0x46].field_0x4 * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)(param_1 + 0x46);
  if (iVar10 == *(int *)&param_1[0x46].field_0x4) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)puVar1,(int *)&param_1[0x46].field_0x4);
    *(int *)(param_1 + 0x46) = iVar10;
  }
  *(int *)(param_1 + 0x46) = iVar10 + 1;
  lVar4 = *(longlong *)puVar1;
  *(undefined4 *)(lVar4 + (longlong)iVar10 * 0x10) = local_68[0];
  *(UObject **)(lVar4 + (longlong)iVar10 * 0x10 + 8) = local_60;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  return;
}

// execCaptureScene @ 147329e90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
USceneCaptureComponent2D::execCaptureScene(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CaptureScene((USceneCaptureComponent2D *)param_1);
  return;
}

// execRemoveBlendable @ 14732a780

void __cdecl
USceneCaptureComponent2D::execRemoveBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  UObject *local_38;
  undefined8 uStack_30;
  
  local_38 = (UObject *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pUVar5 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_38 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_38);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar5);
      goto LAB_14732a829;
    }
  }
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
LAB_14732a829:
  uVar9 = 0;
  iVar11 = *(int *)(param_1 + 0x46);
  if (0 < iVar11) {
    lVar10 = 0;
    puVar1 = &param_1[0x45].field_0x20;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(param_1 + 0x46)) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + lVar10 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar6 = pUVar5 == (UObject *)0x0;
      }
      else {
        bVar6 = pUVar3 == pUVar5;
      }
      if (bVar6) {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(param_1 + 0x46)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)(param_1 + 0x46) + ~uVar9;
        if (iVar8 != 0) {
          memmove((void *)(*(longlong *)puVar1 + lVar10),
                  (void *)(*(longlong *)puVar1 + lVar10 + 0x10),(longlong)iVar8 << 4);
        }
        *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)puVar1,*(int *)(param_1 + 0x46),
                   (int *)&param_1[0x46].field_0x4);
        uVar9 = uVar9 - 1;
        lVar10 = lVar10 + -0x10;
        iVar11 = iVar11 + -1;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < iVar11);
  }
  return;
}

// USceneCaptureComponent2D @ 14792a5c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USceneCaptureComponent2D * __thiscall
USceneCaptureComponent2D::USceneCaptureComponent2D
          (USceneCaptureComponent2D *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->TextureTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  this->field_0x9a = this->field_0x9a | 8;
  (this->MainViewResolutionDivisor).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->MainViewResolutionDivisor).field0_0x0 + 4) = 1;
  *(undefined8 *)&(this->UserSceneTextureBaseColor).Number = 0;
  *(undefined8 *)&(this->UserSceneTextureNormal).Number = 0;
  (this->UserSceneTextureSceneColor).Number = 0;
  (this->SceneViewExtensions).ArrayNum = 0;
  (this->SceneViewExtensions).ArrayMax = 0;
  (this->SceneViewExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar2 = this->field_0x42;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->CustomNearClippingPlane = 0.0;
  this->bUseFauxOrthoViewPos = false;
  this->bEnableOrthographicTiling = false;
  this->NumXTiles = 4;
  this->NumYTiles = 4;
  this->bRenderInMainRenderer = false;
  this->UnlitViewmode = Capture;
  this->MainViewFamily = (FSceneViewFamily *)0x0;
  this->FOVAngle = 90.0;
  this->FirstPersonFieldOfView = 90.0;
  this->FirstPersonScale = 1.0;
  this->OrthoWidth = 1536.0;
  this->bAutoCalculateOrthoPlanes = true;
  this->AutoPlaneShift = 0.0;
  this->bUpdateOrthoPlanes = false;
  this->bUseCameraHeightAsViewTarget = false;
  this->Overscan = 0.0;
  this->bUseCustomProjectionMatrix = false;
  this->field_0x40 = 2;
  (this->CustomProjectionMatrix).M[0][1] = 0.0;
  (this->CustomProjectionMatrix).M[0][2] = 0.0;
  (this->CustomProjectionMatrix).M[0][3] = 0.0;
  (this->CustomProjectionMatrix).M[1][0] = 0.0;
  this->field_0x42 = bVar2 & 0xf7 | 2;
  (this->CustomProjectionMatrix).M[0][0] = 1.0;
  (this->CustomProjectionMatrix).M[1][1] = 1.0;
  this->PostProcessBlendWeight = 1.0;
  (this->CustomProjectionMatrix).M[1][2] = 0.0;
  (this->CustomProjectionMatrix).M[1][3] = 0.0;
  (this->CustomProjectionMatrix).M[2][0] = 0.0;
  (this->CustomProjectionMatrix).M[2][1] = 0.0;
  (this->CustomProjectionMatrix).M[2][2] = 1.0;
  (this->CustomProjectionMatrix).M[3][3] = 1.0;
  (this->CustomProjectionMatrix).M[2][3] = 0.0;
  (this->CustomProjectionMatrix).M[3][0] = 0.0;
  (this->CustomProjectionMatrix).M[3][1] = 0.0;
  (this->CustomProjectionMatrix).M[3][2] = 0.0;
  (this->ClipPlaneNormal).field0_0x0._s_0.X = 0.0;
  (this->ClipPlaneNormal).field0_0x0._s_0.Y = 0.0;
  (this->ClipPlaneNormal).field0_0x0._s_0.Z = 1.0;
  this->bCameraCutThisFrame = 0;
  this->bIgnoreScreenPercentage = 0;
  this->bInheritMainViewCameraPostProcessSettings = 0;
  this->bMainViewCamera = 0;
  this->bMainViewResolution = 0;
  this->bMainViewFamily = 0;
  this->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0;
  this->bEnableFirstPersonScale = 0;
  this->bEnableFirstPersonFieldOfView = 0;
  *(uint *)&this->field_0x2d8 = *(uint *)&this->field_0x2d8 & 0xffffffdf;
  *(uint *)&this->field_0x2dc = *(uint *)&this->field_0x2dc & 0xfffffdff;
  *(undefined8 *)&this->field_0x320 = 0;
  *(undefined4 *)&this->field_0x328 = 0x3f800000;
  *(undefined4 *)&this->field_0x32c = 0x3f800000;
  *(undefined8 *)&this->field_0x318 = 0;
  this->TileID = 0;
  (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value = '\0';
  (this->PostProcessSettings).ReflectionMethod.Value = '\0';
  (this->PostProcessSettings).LumenSurfaceCacheResolution = 0.5;
  *(undefined4 *)&this->field_0x2a0 = 1;
  return this;
}

// AddReferencedObjects @ 147930580

void __cdecl
USceneCaptureComponent2D::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<USceneCaptureComponent>(&FStack_48);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = USceneCaptureComponent::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0x15)) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(param_1 + 0x15)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + *(longlong *)&param_1[0x14].field_0x20) + 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x15));
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar7 = GetTypeName<USceneCaptureComponent>(&FStack_38);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&FStack_28,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar11);
}

// CaptureScene @ 147938560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent2D::CaptureScene(USceneCaptureComponent2D *this)

{
  char cVar1;
  bool bVar2;
  UWorld *this_00;
  FMessageLog *this_01;
  FText *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) goto LAB_147938613;
  }
  if (this_00->Scene != (FSceneInterface *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this + 0x560))(this);
    if (cVar1 != '\0') {
      bVar2 = USceneCaptureComponent::IsCulledByDetailMode((USceneCaptureComponent *)this);
      if (!bVar2) {
        this->field_0x252 = this->field_0x252 & 0xef;
        UWorld::SendAllEndOfFrameUpdates(this_00);
        ISceneRenderBuilder::Create((FSceneInterface *)&local_res8);
        (**(code **)(*(longlong *)this + 0x658))(this,this_00->Scene,local_res8);
        (**(code **)(*(longlong *)local_res8 + 0x30))();
        if (local_res8 != (FName)0x0) {
          (*(code *)**(undefined8 **)local_res8)(local_res8,1);
        }
      }
    }
  }
LAB_147938613:
  if ((this->field_0x252 & 1) != 0) {
    ::FName::FName(&local_res8,"Blueprint");
    this_01 = FMessageLog::FMessageLog(&local_38,&local_res8);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"SceneCaptureComponent",L"CaptureScene",
                        L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                       );
    FMessageLog::Warning(this_01,&local_58,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// CaptureSceneDeferred @ 147938800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent2D::CaptureSceneDeferred(USceneCaptureComponent2D *this)

{
  TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *pTVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_&&>
  local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr *local_30;
  
  pUVar4 = *(UWorld **)&this->field_0xb0;
  if ((pUVar4 == (UWorld *)0x0) &&
     (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0)
     ) {
    return;
  }
  if (pUVar4->Scene == (FSceneInterface *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)this + 0x560))(this);
  if (cVar2 == '\0') {
    return;
  }
  bVar3 = USceneCaptureComponent::IsCulledByDetailMode((USceneCaptureComponent *)this);
  if (bVar3) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res8.Value = (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)0x0;
  local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_res8);
  pTVar1 = local_res8.Value;
  if (SceneCapturesToUpdateMap._72_4_ != 0) {
    lVar5 = 0x154c33aa8;
    if (SceneCapturesToUpdateMap._64_8_ != 0) {
      lVar5 = SceneCapturesToUpdateMap._64_8_;
    }
    iVar7 = *(int *)(lVar5 + (longlong)
                             (int)(SceneCapturesToUpdateMap._72_4_ - 1U &
                                  ((uint)((ulonglong)local_res8.Value >> 0x20) ^
                                  (uint)local_res8.Value)) * 4);
    local_38 = local_res18;
    do {
      iVar6 = iVar7;
      iVar7 = iVar6;
      if (iVar6 == -1) break;
      local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pTVar1;
      iVar7 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
      local_res20 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar6 * 0x18);
      bVar3 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                        ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
    } while (!bVar3);
    if (iVar6 != -1) {
      while( true ) {
        bVar3 = TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>::
                UEOpEquals<USceneCaptureComponent,bool>
                          ((TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)
                           (SceneCapturesToUpdateMap._0_8_ + 8 + (longlong)iVar6 * 0x18),
                           (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)&local_38);
        if (bVar3) break;
        do {
          iVar6 = iVar7;
          if (iVar6 == -1) goto LAB_1479389f9;
          local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pTVar1;
          iVar7 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
          local_res20 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar6 * 0x18)
          ;
          bVar3 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                            ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res20,
                             (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
        } while (!bVar3);
      }
      if (SceneCapturesToUpdateMap._0_8_ + 8 + (longlong)iVar6 * 0x18 != 0) goto LAB_147938a20;
    }
  }
LAB_1479389f9:
  local_38 = (FWeakObjectPtr)&local_res8.Value;
  local_30 = &local_res18;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)&SceneCapturesToUpdateMap,&local_res8,(bool *)&local_38);
LAB_147938a20:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  return;
}

// GetCameraView @ 147947520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::GetCameraView
          (USceneCaptureComponent2D *this,float param_1,FMinimalViewInfo *param_2)

{
  double dVar1;
  double dVar2;
  UTextureRenderTarget2D *pUVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  FPayload *pFVar6;
  TRotator<double> *pTVar7;
  int iVar8;
  undefined1 *this_00;
  undefined4 in_EDX;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  dVar1 = *(double *)&this->field_0x218;
  dVar16 = *(double *)&this->field_0x220;
  (param_2->Location).field0_0x0._s_0.X = *(double *)&this->field_0x210;
  (param_2->Location).field0_0x0._s_0.Y = dVar1;
  (param_2->Location).field0_0x0._s_0.Z = dVar16;
  local_28.X = *(double *)&this->field_0x1f0;
  local_28.Y = *(double *)&this->field_0x1f8;
  local_28.Z = *(double *)&this->field_0x200;
  local_28.W = *(double *)&this->field_0x208;
  this_00 = &this->field_0x1e0;
  pFVar6 = FRotationConversionCache::GetOrCreatePayload((FRotationConversionCache *)this_00);
  auVar11._8_8_ = -(ulonglong)((pFVar6->CachedQuat).W != local_28.W);
  auVar11._0_8_ = -(ulonglong)((pFVar6->CachedQuat).Z != local_28.Z);
  uVar9 = movmskpd(in_EDX,auVar11);
  auVar12._8_8_ = -(ulonglong)(local_28.Y != (pFVar6->CachedQuat).Y);
  auVar12._0_8_ = -(ulonglong)(local_28.X != (pFVar6->CachedQuat).X);
  iVar8 = movmskpd((int)this_00,auVar12);
  if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
    (pFVar6->CachedQuat).X = local_28.X;
    (pFVar6->CachedQuat).Y = local_28.Y;
    (pFVar6->CachedQuat).Z = local_28.Z;
    (pFVar6->CachedQuat).W = local_28.W;
    pTVar7 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
    dVar16 = pTVar7->Yaw;
    (pFVar6->CachedRotator).Pitch = pTVar7->Pitch;
    (pFVar6->CachedRotator).Yaw = dVar16;
    (pFVar6->CachedRotator).Roll = pTVar7->Roll;
  }
  fVar19 = __real_3f800000;
  dVar16 = (pFVar6->CachedRotator).Yaw;
  (param_2->Rotation).Pitch = (pFVar6->CachedRotator).Pitch;
  (param_2->Rotation).Yaw = dVar16;
  (param_2->Rotation).Roll = (pFVar6->CachedRotator).Roll;
  fVar15 = this->FOVAngle;
  param_2->FOV = fVar15;
  pUVar3 = (this->TextureTarget).field0_0x0.DebugPtr;
  fVar13 = fVar19;
  if (pUVar3 != (UTextureRenderTarget2D *)0x0) {
    fVar13 = (float)pUVar3->SizeX / (float)pUVar3->SizeY;
  }
  uVar9 = *(uint *)&param_2->field_0x68;
  param_2->AspectRatio = fVar13;
  param_2->bConstrainAspectRatio = 0;
  (param_2->ProjectionMode).Value = (this->ProjectionType).Value;
  param_2->OrthoWidth = this->OrthoWidth;
  param_2->bAutoCalculateOrthoPlanes = this->bAutoCalculateOrthoPlanes;
  param_2->AutoPlaneShift = this->AutoPlaneShift;
  param_2->bUpdateOrthoPlanes = this->bUpdateOrthoPlanes;
  param_2->bUseCameraHeightAsViewTarget = this->bUseCameraHeightAsViewTarget;
  if (this->bEnableFirstPersonFieldOfView != 0) {
    fVar15 = this->FirstPersonFieldOfView;
  }
  param_2->FirstPersonFOV = fVar15;
  if (this->bEnableFirstPersonScale != 0) {
    fVar19 = this->FirstPersonScale;
  }
  param_2->FirstPersonScale = fVar19;
  *(uint *)&param_2->field_0x68 =
       -(uint)(this->bEnableFirstPersonFieldOfView != 0 || this->bEnableFirstPersonScale != 0) & 2 |
       uVar9 & 0xfffffffc;
  auVar11 = ZEXT416((uint)this->Overscan);
  FMinimalViewInfo::ApplyOverscan(param_2,this->Overscan,false,false);
  if ((this->bAutoCalculateOrthoPlanes != false) && (*(longlong *)&this->field_0xa8 != 0)) {
    lVar4 = *(longlong *)(*(longlong *)&this->field_0xa8 + 0x1b8);
    if (lVar4 == 0) {
      dVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      auVar12 = *(undefined1 (*) [16])(lVar4 + 0x210);
      dVar16 = auVar12._0_8_;
      uVar17 = auVar12._8_4_;
      uVar18 = auVar12._12_4_;
      uVar10 = *(double *)(lVar4 + 0x220);
    }
    auVar5._4_8_ = auVar11._8_8_;
    auVar5._0_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar14._0_8_ = auVar5._0_8_ << 0x20;
    auVar14._8_4_ = uVar17;
    auVar14._12_4_ = uVar18;
    dVar1 = (param_2->Location).field0_0x0._s_0.Z;
    dVar2 = (param_2->Location).field0_0x0._s_0.Y;
    (param_2->CameraToViewTarget).field0_0x0._s_0.X = dVar16 - (param_2->Location).field0_0x0._s_0.X
    ;
    (param_2->CameraToViewTarget).field0_0x0._s_0.Y = auVar14._8_8_ - dVar2;
    (param_2->CameraToViewTarget).field0_0x0._s_0.Z = (double)uVar10 - dVar1;
  }
  return;
}

// GetEnableOrthographicTiling @ 147948fb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
USceneCaptureComponent2D::GetEnableOrthographicTiling(USceneCaptureComponent2D *this)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar1 == '\0') {
    return this->bEnableOrthographicTiling;
  }
                    /* WARNING: Could not recover jumptable at 0x000147948fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)CVarSCEnableOrthographicTiling._padding_ + 0xc0))();
  return (bool)uVar2;
}

// GetNumXTiles @ 14794acd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall USceneCaptureComponent2D::GetNumXTiles(USceneCaptureComponent2D *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar1 == '\0') {
    return this->NumXTiles;
  }
  iVar2 = (**(code **)(*(longlong *)CVarSCOrthographicNumXTiles._padding_ + 200))();
  iVar3 = 0x40;
  if (iVar2 < 0x40) {
    iVar3 = iVar2;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}

// GetNumYTiles @ 14794ad30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall USceneCaptureComponent2D::GetNumYTiles(USceneCaptureComponent2D *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar1 == '\0') {
    return this->NumYTiles;
  }
  iVar2 = (**(code **)(*(longlong *)CVarSCOrthographicNumYTiles._padding_ + 200))();
  iVar3 = 0x40;
  if (iVar2 < 0x40) {
    iVar3 = iVar2;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}

// OnComponentDestroyed @ 147958bd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::OnComponentDestroyed(USceneCaptureComponent2D *this,bool param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  UObjectBaseUtility *pUVar4;
  USceneCaptureComponent2D *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FUObjectItem *pFVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  uint uVar18;
  wchar_t *pwVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint uStackX_18;
  ulonglong in_stack_fffffffffffffe08;
  ForAnyElementType FStack_1c8;
  undefined8 uStack_1c0;
  UObject *pUStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  FName FStack_1a0;
  FName FStack_198;
  FName FStack_190;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  *(undefined4 *)&this->field_0x1d8 = 0;
  if (*(int *)&this->field_0x1dc < 0) {
    in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffff00000000;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x1d0,0,(int *)&this->field_0x1dc);
  }
  if ((GExitPurge == false) && (-1 < (char)this->field_0x1a9)) {
    lVar3 = *(longlong *)&this->field_0xa8;
    uStackX_18 = *(uint *)&this->field_0xf0;
    uVar21 = (ulonglong)uStackX_18;
    if (param_1) {
      lVar22 = 0;
      bVar10 = false;
      FStack_1c8.Data = (FScriptContainerElement *)0x0;
      uStack_1c0 = 0;
      if ((int)uStackX_18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar21);
      }
      if (0 < (int)uStackX_18) {
        pwVar19 = (wchar_t *)((longlong)&uStack_1c0 + 4);
        pwVar15 = (wchar_t *)(in_stack_fffffffffffffe08 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uStackX_18,&FStack_1c8,0,(int *)pwVar19);
        puVar23 = &this->field_0xe8;
        do {
          iVar12 = *(int *)&this->field_0xf0;
          pFVar20 = (FScriptContainerElement *)(longlong)iVar12;
          uVar18 = iVar12 - 1;
          uVar11 = 0;
          if ((int)uVar18 < iVar12) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if (uVar11 == 0) {
            pwVar15 = (wchar_t *)(longlong)(int)uVar18;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            pwVar19 = (wchar_t *)pFVar20;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar20 = (FScriptContainerElement *)(longlong)*(int *)&this->field_0xf0;
          pUVar4 = *(UObjectBaseUtility **)(*(longlong *)puVar23 + -8 + (longlong)pFVar20 * 8);
          if ((pUVar4 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar4[4].field_0x8 == lVar3))
          {
            if (*(int *)&this->field_0xf0 < 1) {
              pwVar15 = (wchar_t *)0x0;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              pwVar19 = (wchar_t *)pFVar20;
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 = *(UObject **)
                          (*(longlong *)puVar23 + -8 + (longlong)*(int *)&this->field_0xf0 * 8),
               pUVar6 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            uVar11 = *(int *)&this->field_0xf0 - 1;
            pvVar1 = (void *)(*(longlong *)puVar23 + (longlong)(int)uVar11 * 8);
            iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
            if (iVar12 != 0) {
              memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
            }
            *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
            if (pUVar4 != (UObjectBaseUtility *)0x0) {
              pUStack_1b8 = (UObject *)pUVar4;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              if ((FStack_1c8.Data <= (FScriptContainerElement *)&pUStack_1b8) &&
                 ((FScriptContainerElement *)&pUStack_1b8 <
                  FStack_1c8.Data + (longlong)uStack_1c0._4_4_ * 8)) {
                pwVar15 = (wchar_t *)&pUStack_1b8;
                pwVar19 = (wchar_t *)FStack_1c8.Data;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar12 = (int)uStack_1c0;
              if ((int)uStack_1c0 == uStack_1c0._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&FStack_1c8,(int *)((longlong)&uStack_1c0 + 4));
              }
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar12 + 1);
              *(UObject **)(FStack_1c8.Data + (longlong)iVar12 * 8) = pUStack_1b8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUStack_1b8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUStack_1b8);
              }
            }
          }
          else {
            pUVar5 = *(USceneCaptureComponent2D **)&pUVar4[5].field_0x8;
            if (pUVar5 == (USceneCaptureComponent2D *)0x0) {
              if ((((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) &&
                  ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
                 (1 < (byte)LogSceneComponent._0_1_)) {
                pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_f8,(UObject *)0x0,None);
                if ((pFVar14->Data).ArrayNum == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                }
                UObjectBaseUtility::GetFullName(pUVar4,&FStack_108,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&FStack_118,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
                }
                FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
                  FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                }
LAB_147959024:
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar16.Data);
                }
              }
LAB_147959035:
              pFVar20 = (FScriptContainerElement *)(longlong)*(int *)&this->field_0xf0;
              if (*(int *)&this->field_0xf0 < 1) {
                pwVar15 = (wchar_t *)0x0;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                pwVar19 = (wchar_t *)pFVar20;
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar6 = *(UObject **)
                            (*(longlong *)puVar23 + -8 + (longlong)*(int *)&this->field_0xf0 * 8),
                 pUVar6 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              uVar11 = *(int *)&this->field_0xf0 - 1;
              pvVar1 = (void *)(*(longlong *)puVar23 + (longlong)(int)uVar11 * 8);
              iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
              if (iVar12 != 0) {
                memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
              }
              *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
            }
            else {
              if (pUVar5 != this) {
                if (1 < (byte)LogSceneComponent._0_1_) {
                  pFVar14 = UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pUVar5,&FStack_128,(UObject *)0x0,None)
                  ;
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar19 = L"";
                  }
                  else {
                    pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_138,(UObject *)0x0,None);
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  UObjectBaseUtility::GetFullName(pUVar4,&FStack_148,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this,&FStack_158,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                  if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
                  }
                  if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
                  }
                  FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
                    FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147959024;
                }
                goto LAB_147959035;
              }
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                if (!bVar10) {
                  for (lVar22 = *(longlong *)&this->field_0xd0;
                      (lVar22 != 0 &&
                      ((pFVar13 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,*(int *)(lVar22 + 0xc)),
                       ((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0 ||
                       (*(longlong *)(lVar22 + 0xa8) == lVar3))));
                      lVar22 = *(longlong *)(lVar22 + 0xd0)) {
                  }
                  bVar10 = true;
                }
                if (lVar22 == 0) goto LAB_147958e4d;
                uStack_1b0 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))
                                  (pUVar4,lVar22,&FAttachmentTransformRules::KeepWorldTransform,0,
                                   pwVar15,pwVar19);
                if (cVar9 == '\0') goto LAB_147958e4d;
              }
              else {
LAB_147958e4d:
                (**(code **)(*(longlong *)pUVar4 + 0x518))
                          (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
              }
            }
            if ((int)uStackX_18 <= *(int *)&this->field_0xf0) {
              FStack_1a0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
              FStack_1a0.Number = *(uint *)&pUVar4->field_0x1c;
              ::FName::ToString(&FStack_1a0,&FStack_188);
              pwVar15 = L"";
              if (FStack_188.Data.ArrayNum != 0) {
                pwVar15 = (wchar_t *)FStack_188.Data.AllocatorInstance.Data;
              }
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChildCount > AttachChildren.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                 ,0x612,
                                 L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                );
              if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
              }
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          uStackX_18 = *(uint *)&this->field_0xf0;
        } while (0 < (int)uStackX_18);
      }
      puVar23 = &this->field_0xe8;
      if ((ForAnyElementType *)puVar23 != &FStack_1c8) {
        if (*(void **)puVar23 != (void *)0x0) {
          FMemory::Free(*(void **)puVar23);
        }
        *(FScriptContainerElement **)puVar23 = FStack_1c8.Data;
        *(int *)&this->field_0xf0 = (int)uStack_1c0;
        FStack_1c8.Data = (FScriptContainerElement *)0x0;
        *(int *)&this->field_0xf4 = uStack_1c0._4_4_;
        uStack_1c0 = 0;
      }
      if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data);
      }
    }
    else {
      while (0 < (int)uStackX_18) {
        uVar18 = *(int *)&this->field_0xf0 - 1;
        uVar11 = 0;
        if ((int)uVar18 < *(int *)&this->field_0xf0) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = *(int *)&this->field_0xf0;
        pUVar4 = *(UObjectBaseUtility **)
                  (*(longlong *)&this->field_0xe8 + -8 + (longlong)iVar12 * 8);
        if (pUVar4 == (UObjectBaseUtility *)0x0) {
joined_r0x00014795986d:
          if ((iVar12 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 = *(UObject **)
                        (*(longlong *)&this->field_0xe8 + -8 +
                        (longlong)*(int *)&this->field_0xf0 * 8), pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          uVar11 = *(int *)&this->field_0xf0 - 1;
          pvVar1 = (void *)(*(longlong *)&this->field_0xe8 + (longlong)(int)uVar11 * 8);
          iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
          if (iVar12 != 0) {
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
          }
          *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
        }
        else {
          pUVar5 = *(USceneCaptureComponent2D **)&pUVar4[5].field_0x8;
          if (pUVar5 == (USceneCaptureComponent2D *)0x0) {
            if ((((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) &&
                ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
               (1 < (byte)LogSceneComponent._0_1_)) {
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_58,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_68,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_78,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
              }
              if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
              }
              if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = *(int *)&this->field_0xf0;
            goto joined_r0x00014795986d;
          }
          if (pUVar5 != this) {
            if (1 < (byte)LogSceneComponent._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar5,&FStack_88,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_98,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_a8,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_b8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
              }
              if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
              }
              if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
              }
              if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = *(int *)&this->field_0xf0;
            goto joined_r0x00014795986d;
          }
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
          if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
            for (lVar22 = *(longlong *)&this->field_0xd0; lVar22 != 0;
                lVar22 = *(longlong *)(lVar22 + 0xd0)) {
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar22 + 0xc));
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                uStack_1a8 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))(pUVar4,lVar22);
                if (cVar9 != '\0') {
                  if ((int)uVar21 <= *(int *)&this->field_0xf0) {
                    FStack_198.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
                    FStack_198.Number = *(uint *)&pUVar4->field_0x1c;
                    ::FName::ToString(&FStack_198,&FStack_178);
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ChildCount > AttachChildren.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                        ,0x63e,
                                        L"AttachChildren count did not decrease while reattaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                       );
                    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
                    }
                    if (bVar10) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  goto LAB_147959903;
                }
                break;
              }
            }
          }
          puVar17 = *(undefined8 **)&pUVar5->field_0xe8;
          puVar2 = puVar17 + *(int *)&pUVar5->field_0xf0;
          for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
            if (((UObjectBaseUtility *)*puVar17 != (UObjectBaseUtility *)0x0) &&
               ((UObjectBaseUtility *)*puVar17 == pUVar4)) goto LAB_1479595ca;
          }
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)&pUVar4[5].field_0x8,&FStack_c8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName(pUVar4,&FStack_d8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_e8,(UObject *)0x0,None)
          ;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChildAttachParentWas->GetAttachChildren().Contains(Child)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                              ,0x646,
                              L"Did not find \'%s\', in Child->AttachParent->AttachChildren. Child: \'%s\', Child->AttachParent: \'%s\'"
                             );
          if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
          }
          if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
          }
          if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_1479595ca:
          (**(code **)(*(longlong *)pUVar4 + 0x518))
                    (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
          if ((int)uVar21 <= *(int *)&this->field_0xf0) {
            FStack_190.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
            FStack_190.Number = *(uint *)&pUVar4->field_0x1c;
            ::FName::ToString(&FStack_190,&FStack_168);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChildCount > AttachChildren.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                ,0x648,
                                L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                               );
            if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
LAB_147959903:
        uStackX_18 = *(uint *)&this->field_0xf0;
        uVar21 = (ulonglong)uStackX_18;
      }
    }
    if ((*(longlong *)&this->field_0xd0 != 0) &&
       ((!param_1 || (*(longlong *)(*(longlong *)&this->field_0xd0 + 0xa8) != lVar3)))) {
      (**(code **)(*(longlong *)this + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
  }
  return;
}

// OnRegister @ 14795a080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponent2D::OnRegister(USceneCaptureComponent2D *this)

{
  USceneComponent::OnRegister((USceneComponent *)this);
  USceneCaptureComponent::UpdateShowFlags((USceneCaptureComponent *)this);
  return;
}

// ResetOrthographicTilingCounter @ 147963fd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::ResetOrthographicTilingCounter(USceneCaptureComponent2D *this)

{
  this->TileID = 0;
  return;
}

// SendRenderTransform_Concurrent @ 147965850

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::SendRenderTransform_Concurrent(USceneCaptureComponent2D *this)

{
  if ((this->field_0x252 & 3) == 2) {
    CaptureSceneDeferred(this);
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 147965ef0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::Serialize(USceneCaptureComponent2D *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  UObject *this_00;
  FPostProcessSettings *pFVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar2 < 0x83) {
    this->OrthoWidth = 512.0;
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar2 < 0x33) {
    this->bAutoCalculateOrthoPlanes = false;
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar2 < 0xb9) {
    this_00 = UObject::GetArchetype((UObject *)this);
    bVar1 = UObject::IsInBlueprint(this_00);
    if (!bVar1) {
      pFVar3 = FPostProcessSettings::GetDefault();
      FPostProcessSettings::operator=(&this->PostProcessSettings,pFVar3);
    }
  }
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar2 < 0x13) && ((0 < *(int *)&this->field_0x290 || (0 < *(int *)&this->field_0x280)))) {
    this->field_0x250 = 2;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (iVar2 < 0x10) {
      *(uint *)&this->field_0x2d8 = *(uint *)&this->field_0x2d8 & 0xffffffdf;
      *(uint *)&this->field_0x2dc = *(uint *)&this->field_0x2dc & 0xfffffdff;
    }
  }
  return;
}

// SetCameraView @ 147967670

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::SetCameraView(USceneCaptureComponent2D *this,FMinimalViewInfo *param_1)

{
  TQuat<double> *pTVar1;
  TVector<double>_u_0 local_88;
  TRotator<double> local_68;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  local_88._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  local_88._s_0.Y = (param_1->Location).field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  USceneComponent::SetWorldLocation
            ((USceneComponent *)this,(TVector<double> *)&local_88._s_0,false,(FHitResult *)0x0,None)
  ;
  local_68.Pitch = (param_1->Rotation).Pitch;
  local_68.Yaw = (param_1->Rotation).Yaw;
  local_68.Roll = (param_1->Rotation).Roll;
  if (*(longlong *)&this->field_0xd0 == 0) {
    local_88._s_0.X = local_68.Pitch;
    local_88._s_0.Y = local_68.Yaw;
    local_88._s_0.Z = local_68.Roll;
    USceneComponent::SetRelativeRotation
              ((USceneComponent *)this,(TRotator<double> *)&local_88._s_0,false,(FHitResult *)0x0,
               None);
  }
  else {
    pTVar1 = UE::Math::TRotator<double>::Quaternion(&local_68,&local_28);
    USceneComponent::GetRelativeRotationFromWorld((USceneComponent *)this,&local_48,pTVar1);
    local_88._s_0.X = (double)*(undefined8 *)&this->field_0x148;
    local_88._s_0.Y = (double)*(undefined8 *)&this->field_0x150;
    local_88._s_0.Z = (double)*(undefined8 *)&this->field_0x158;
    USceneComponent::SetRelativeLocationAndRotation
              ((USceneComponent *)this,(TVector<double> *)&local_88._s_0,&local_48,false,
               (FHitResult *)0x0,None);
  }
  this->FOVAngle = param_1->FOV;
  (this->ProjectionType).Value = (param_1->ProjectionMode).Value;
  this->OrthoWidth = param_1->OrthoWidth;
  this->FirstPersonFieldOfView = param_1->FirstPersonFOV;
  this->FirstPersonScale = param_1->FirstPersonScale;
  return;
}

// TickComponent @ 147973960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::TickComponent
          (USceneCaptureComponent2D *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  cVar2 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar2 == '\0') {
    iVar4 = this->NumXTiles;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)CVarSCOrthographicNumXTiles._padding_ + 200))();
    iVar5 = 0x40;
    if (iVar4 < 0x40) {
      iVar5 = iVar4;
    }
    iVar4 = 1;
    if (1 < iVar5) {
      iVar4 = iVar5;
    }
  }
  cVar2 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar2 == '\0') {
    iVar6 = this->NumYTiles;
  }
  else {
    iVar6 = (**(code **)(*(longlong *)CVarSCOrthographicNumYTiles._padding_ + 200))();
    iVar5 = 0x40;
    if (iVar6 < 0x40) {
      iVar5 = iVar6;
    }
    iVar6 = 1;
    if (1 < iVar5) {
      iVar6 = iVar5;
    }
  }
  iVar6 = iVar6 * iVar4;
  if ((iVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTiles >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneCaptureComponent.cpp"
                         ,0x2e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->field_0x252 & 1) == 0) {
    cVar2 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
    if (cVar2 == '\0') {
      cVar2 = this->bEnableOrthographicTiling;
    }
    else {
      cVar2 = (**(code **)(*(longlong *)CVarSCEnableOrthographicTiling._padding_ + 0xc0))();
    }
    if ((cVar2 == '\0') || (iVar6 <= this->TileID)) goto LAB_147973a86;
  }
  CaptureSceneDeferred(this);
LAB_147973a86:
  cVar2 = (**(code **)(*(longlong *)CVarSCOverrideOrthographicTilingValues._padding_ + 0xc0))();
  if (cVar2 == '\0') {
    cVar2 = this->bEnableOrthographicTiling;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)CVarSCEnableOrthographicTiling._padding_ + 0xc0))();
  }
  if (cVar2 != '\0') {
    iVar5 = this->TileID;
    if ((this->field_0x252 & 1) == 0) {
      if (iVar5 < iVar6) {
        this->TileID = iVar5 + 1;
      }
    }
    else {
      this->TileID = (iVar5 + 1) % iVar6;
    }
  }
  return;
}

// UpdateSceneCaptureContents @ 14797b650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponent2D::UpdateSceneCaptureContents
          (USceneCaptureComponent2D *this,FSceneInterface *param_1,ISceneRenderBuilder *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014797b65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x1d8))(param_1,this);
  return;
}

