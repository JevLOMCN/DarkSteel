// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 120

// StaticClass @ 1496e8c70

UClass * __cdecl UBaseDynamicMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"BaseDynamicMeshComponent",
               &Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUBaseDynamicMeshComponent,0x610,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UBaseDynamicMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton;
}

// UBaseDynamicMeshComponent @ 1496f91c0

UBaseDynamicMeshComponent * __thiscall
UBaseDynamicMeshComponent::UBaseDynamicMeshComponent
          (UBaseDynamicMeshComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->bExplicitShowWireframe = false;
  (this->WireframeColor).field0_0x0._s_0.R = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  (this->WireframeColor).field0_0x0._s_0.G = 0.5;
  (this->WireframeColor).field0_0x0._s_0.B = 1.0;
  (this->WireframeColor).field0_0x0._s_0.A = 1.0;
  this->ColorMode = None;
  (this->ConstantColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  (this->OverrideRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->BaseMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseMaterials).ArrayNum = 0;
  (this->BaseMaterials).ArrayMax = 0;
  this->ColorSpaceMode = NoTransform;
  this->bTwoSided = false;
  this->bEnableFlatShading = false;
  this->bEnableViewModeOverrides = true;
  this->bDrawSecondaryBuffers = true;
  this->bEnableRaytracing = true;
  this->DrawPath = DynamicDraw;
  this->DistanceFieldMode_DEPRECATED = NoDistanceField;
  return this;
}

// UBaseDynamicMeshComponent @ 1496f92f0

UBaseDynamicMeshComponent * __thiscall
UBaseDynamicMeshComponent::UBaseDynamicMeshComponent
          (UBaseDynamicMeshComponent *this,FObjectInitializer *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->bExplicitShowWireframe = false;
  (this->WireframeColor).field0_0x0._s_0.R = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  (this->WireframeColor).field0_0x0._s_0.G = 0.5;
  (this->WireframeColor).field0_0x0._s_0.B = 1.0;
  (this->WireframeColor).field0_0x0._s_0.A = 1.0;
  this->ColorMode = None;
  (this->ConstantColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  (this->OverrideRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->BaseMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseMaterials).ArrayNum = 0;
  (this->BaseMaterials).ArrayMax = 0;
  this->ColorSpaceMode = NoTransform;
  this->bTwoSided = false;
  this->bEnableFlatShading = false;
  this->bEnableViewModeOverrides = true;
  this->bDrawSecondaryBuffers = true;
  this->bEnableRaytracing = true;
  this->DrawPath = DynamicDraw;
  this->DistanceFieldMode_DEPRECATED = NoDistanceField;
  return this;
}

// ~UBaseDynamicMeshComponent @ 1496fb120

void __thiscall
UBaseDynamicMeshComponent::~UBaseDynamicMeshComponent(UBaseDynamicMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__IToolFrameworkComponent__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  pFVar1 = (this->BaseMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMeshReplacementCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshVertexCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IToolFrameworkComponent__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AllowFastUpdate @ 149702930

bool __thiscall UBaseDynamicMeshComponent::AllowFastUpdate(UBaseDynamicMeshComponent *this)

{
  return this->DrawPath == DynamicDraw;
}

// ApplyChange @ 149702db0

void __thiscall
UBaseDynamicMeshComponent::ApplyChange
          (UBaseDynamicMeshComponent *this,FMeshChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xcd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyChange @ 149702df0

void __thiscall
UBaseDynamicMeshComponent::ApplyChange
          (UBaseDynamicMeshComponent *this,FMeshReplacementChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xd5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyChange @ 149702e30

void __thiscall
UBaseDynamicMeshComponent::ApplyChange
          (UBaseDynamicMeshComponent *this,FMeshVertexChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xc5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyTransform @ 1497032f0

void __thiscall
UBaseDynamicMeshComponent::ApplyTransform
          (UBaseDynamicMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xdd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearOverrideRenderMaterial @ 149704da0

void __thiscall
UBaseDynamicMeshComponent::ClearOverrideRenderMaterial(UBaseDynamicMeshComponent *this)

{
  if ((this->OverrideRenderMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    (this->OverrideRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000149704db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xb68))();
    return;
  }
  return;
}

// ClearOverrideSecondaryWireframeRenderMaterial @ 149704dd0

void __thiscall
UBaseDynamicMeshComponent::ClearOverrideSecondaryWireframeRenderMaterial
          (UBaseDynamicMeshComponent *this)

{
  if ((this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000149704de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xb68))();
    return;
  }
  return;
}

// ClearOverrideWireframeRenderMaterial @ 149704e00

void __thiscall
UBaseDynamicMeshComponent::ClearOverrideWireframeRenderMaterial(UBaseDynamicMeshComponent *this)

{
  if ((this->WireframeMaterialOverride).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    (this->WireframeMaterialOverride).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000149704e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xb68))();
    return;
  }
  return;
}

// ClearSecondaryRenderMaterial @ 149704e30

void __thiscall
UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial(UBaseDynamicMeshComponent *this)

{
  if ((this->SecondaryRenderMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    (this->SecondaryRenderMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000149704e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xb68))();
    return;
  }
  return;
}

// GetBaseSceneProxy @ 14970e9b0

FBaseDynamicMeshSceneProxy * __thiscall
UBaseDynamicMeshComponent::GetBaseSceneProxy(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FBaseDynamicMeshSceneProxy *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBaseDynamicMeshSceneProxy *)(*pcVar1)();
    return pFVar3;
  }
  return (FBaseDynamicMeshSceneProxy *)0x0;
}

// GetColorOverrideMode @ 14970f1c0

EDynamicMeshComponentColorOverrideMode __thiscall
UBaseDynamicMeshComponent::GetColorOverrideMode(UBaseDynamicMeshComponent *this)

{
  return this->ColorMode;
}

// GetConstantOverrideColor @ 14970f2c0

FColor __thiscall
UBaseDynamicMeshComponent::GetConstantOverrideColor(UBaseDynamicMeshComponent *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (this->ConstantColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetDefaultVertexColorMaterial_RenderThread @ 14970f300

UMaterialInterface * __cdecl
UBaseDynamicMeshComponent::GetDefaultVertexColorMaterial_RenderThread(void)

{
  return DefaultVertexColorMaterial;
}

// GetDefaultWireframeMaterial_RenderThread @ 14970f310

UMaterialInterface * __cdecl
UBaseDynamicMeshComponent::GetDefaultWireframeMaterial_RenderThread(void)

{
  return DefaultWireframeMaterial;
}

// GetDistanceFieldMode @ 14970f320

EDynamicMeshComponentDistanceFieldMode __thiscall
UBaseDynamicMeshComponent::GetDistanceFieldMode(UBaseDynamicMeshComponent *this)

{
  return NoDistanceField;
}

// GetDynamicMesh @ 14970f330

UDynamicMesh * __thiscall UBaseDynamicMeshComponent::GetDynamicMesh(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xb3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UDynamicMesh *)(*pcVar1)();
    return pUVar3;
  }
  return (UDynamicMesh *)0x0;
}

// GetEnableRaytracing @ 149710400

bool __thiscall UBaseDynamicMeshComponent::GetEnableRaytracing(UBaseDynamicMeshComponent *this)

{
  return this->bEnableRaytracing;
}

// GetEnableWireframeRenderPass @ 149710410

bool __thiscall
UBaseDynamicMeshComponent::GetEnableWireframeRenderPass(UBaseDynamicMeshComponent *this)

{
  return this->bExplicitShowWireframe;
}

// GetFlatShadingEnabled @ 1497104a0

bool __thiscall UBaseDynamicMeshComponent::GetFlatShadingEnabled(UBaseDynamicMeshComponent *this)

{
  return this->bEnableFlatShading;
}

// GetMaterial @ 1497106c0

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetMaterial(UBaseDynamicMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  
  if ((-1 < param_1) && (param_1 < (this->BaseMaterials).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UMaterialInterface *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UMaterialInterface **)
              ((this->BaseMaterials).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialByName @ 149710760

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetMaterialByName(UBaseDynamicMeshComponent *this,FName param_1)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  FName *pFVar5;
  UMaterialInterface *pUVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar3 = false;
  bVar2 = false;
  (**(code **)(this->_padding_ + 0x810))();
  iVar8 = 0;
  if (0 < (this->BaseMaterials).ArrayNum) {
    do {
      lVar4 = (**(code **)(this->_padding_ + 0x690))(this,iVar8);
      if (lVar4 == 0) {
        bVar2 = true;
        ::FString::FString(&local_38,L"Material");
      }
      else {
        local_res8 = *(FName *)(lVar4 + 0x18);
        bVar3 = true;
        ::FName::ToString(&local_res8,&local_48);
      }
      ::FString::PrintfImpl(&local_58,L"%s_%d");
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(local_res18,iVar7,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar1 = *pFVar5;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar2) &&
         (bVar2 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((bVar3) &&
         (bVar3 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (param_1 == FVar1) {
        pUVar6 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x690))(this,iVar8);
        return pUVar6;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (this->BaseMaterials).ArrayNum);
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialRelevance @ 1497108c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UBaseDynamicMeshComponent::GetMaterialRelevance
          (UBaseDynamicMeshComponent *this,EShaderPlatform param_1)

{
  uint uVar1;
  UMaterialInterface *pUVar2;
  FMaterialRelevance FVar3;
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  FVar4.Raw._2_6_ = in_register_00000012;
  FVar4.Raw._0_2_ = param_1;
  UMeshComponent::GetMaterialRelevance((UMeshComponent *)this,param_1);
  pUVar2 = (this->OverrideRenderMaterial).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    FVar3 = UMaterialInterface::GetRelevance_Concurrent(pUVar2,(EShaderPlatform)local_res8);
    uVar1 = *(uint *)FVar4;
    *(ulonglong *)FVar4 = *(ulonglong *)FVar4 | *(ulonglong *)FVar3.field0_0x0;
    uVar5 = *(uint *)FVar3.field0_0x0 >> 0x12;
    if (((byte)(*(uint *)FVar3.field0_0x0 >> 0x12) & 0x3f) < ((byte)(uVar1 >> 0x12) & 0x3f)) {
      uVar5 = uVar1 >> 0x12;
    }
    *(uint *)FVar4 =
         (uVar5 << 0x12 ^ (uint)*(ulonglong *)FVar4) & 0xfc0000 ^ (uint)*(ulonglong *)FVar4;
  }
  pUVar2 = (this->SecondaryRenderMaterial).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    FVar3 = UMaterialInterface::GetRelevance_Concurrent(pUVar2,(EShaderPlatform)local_res8);
    uVar1 = *(uint *)FVar4;
    *(ulonglong *)FVar4 = *(ulonglong *)FVar4 | *(ulonglong *)FVar3.field0_0x0;
    uVar5 = *(uint *)FVar3.field0_0x0 >> 0x12;
    if (((byte)(*(uint *)FVar3.field0_0x0 >> 0x12) & 0x3f) < ((byte)(uVar1 >> 0x12) & 0x3f)) {
      uVar5 = uVar1 >> 0x12;
    }
    *(uint *)FVar4 =
         (uVar5 << 0x12 ^ (uint)*(ulonglong *)FVar4) & 0xfc0000 ^ (uint)*(ulonglong *)FVar4;
  }
  return (FMaterialRelevance)FVar4;
}

// GetMaterialRelevance @ 1497109a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UBaseDynamicMeshComponent::GetMaterialRelevance(UBaseDynamicMeshComponent *this,Type param_1)

{
  code *pcVar1;
  FMaterialRelevance_u_0 FVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  pcVar1 = *(code **)(this->_padding_ + 0xaa8);
  if (in_R8D == 5) {
    (*pcVar1)(this,param_1,0x9b);
    return (FMaterialRelevance)FVar2;
  }
  (*pcVar1)(this,param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[in_R8D]);
  return (FMaterialRelevance)FVar2._s_0;
}

// GetMaterialSlotNames @ 1497109f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UBaseDynamicMeshComponent::GetMaterialSlotNames
          (UBaseDynamicMeshComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FName *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FName local_res8;
  FName local_res10;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  uVar10 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar4 = (**(code **)(this->_padding_ + 0x810))();
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar4,&__return_storage_ptr__->AllocatorInstance,__return_storage_ptr__->ArrayNum
               ,piVar1);
  }
  uVar9 = uVar10;
  if (0 < (int)uVar4) {
    do {
      lVar5 = (**(code **)(this->_padding_ + 0x690))(this,uVar10);
      if (lVar5 == 0) {
        uVar9 = uVar9 | 2;
        ::FString::FString(&local_40,L"Material");
      }
      else {
        local_res8 = *(FName *)(lVar5 + 0x18);
        uVar9 = uVar9 | 1;
        ::FName::ToString(&local_res8,&local_50);
      }
      ::FString::PrintfImpl(&local_60,L"%s_%d");
      iVar8 = local_60.Data.ArrayNum + -1;
      if (local_60.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar6 = ::FName::FName(&local_res10,iVar8,(wchar_t *)local_60.Data.AllocatorInstance.Data,
                              FNAME_Add);
      local_68 = *pFVar6;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (((uVar9 & 2) != 0) &&
         (uVar9 = uVar9 & 0xfffffffd,
         local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (((uVar9 & 1) != 0) &&
         (uVar9 = uVar9 & 0xfffffffe,
         local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= &local_68) && (&local_68 < pFVar6 + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      uVar10 = uVar10 + 1;
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_68;
    } while ((int)uVar10 < (int)uVar4);
  }
  return __return_storage_ptr__;
}

// GetMesh @ 149710c50

FDynamicMesh3 * __thiscall UBaseDynamicMeshComponent::GetMesh(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0x98,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetMesh @ 149710c90

FDynamicMesh3 * __thiscall UBaseDynamicMeshComponent::GetMesh(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xa1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetMeshDrawPath @ 149710d20

EDynamicMeshDrawPath __thiscall
UBaseDynamicMeshComponent::GetMeshDrawPath(UBaseDynamicMeshComponent *this)

{
  return this->DrawPath;
}

// GetNumMaterials @ 149710d50

int __thiscall UBaseDynamicMeshComponent::GetNumMaterials(UBaseDynamicMeshComponent *this)

{
  return (this->BaseMaterials).ArrayNum;
}

// GetOverrideRenderMaterial @ 149710f90

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetOverrideRenderMaterial(UBaseDynamicMeshComponent *this,int param_1)

{
  return (this->OverrideRenderMaterial).field0_0x0.DebugPtr;
}

// GetOverrideSecondaryWireframeRenderMaterial @ 149710fa0

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetOverrideSecondaryWireframeRenderMaterial
          (UBaseDynamicMeshComponent *this)

{
  return (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr;
}

// GetOverrideWireframeRenderMaterial @ 149710fb0

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetOverrideWireframeRenderMaterial(UBaseDynamicMeshComponent *this)

{
  return (this->WireframeMaterialOverride).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 149711110

UClass * __cdecl UBaseDynamicMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"BaseDynamicMeshComponent",
               &Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUBaseDynamicMeshComponent,0x610,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UBaseDynamicMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton;
}

// GetSecondaryBuffersVisibility @ 1497117f0

bool __thiscall
UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility(UBaseDynamicMeshComponent *this)

{
  return this->bDrawSecondaryBuffers;
}

// GetSecondaryRenderMaterial @ 149711800

UMaterialInterface * __thiscall
UBaseDynamicMeshComponent::GetSecondaryRenderMaterial(UBaseDynamicMeshComponent *this)

{
  return (this->SecondaryRenderMaterial).field0_0x0.DebugPtr;
}

// GetShadowsEnabled @ 149711810

bool __thiscall UBaseDynamicMeshComponent::GetShadowsEnabled(UBaseDynamicMeshComponent *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 6) & 1);
}

// GetTwoSided @ 149711930

bool __thiscall UBaseDynamicMeshComponent::GetTwoSided(UBaseDynamicMeshComponent *this)

{
  return this->bTwoSided;
}

// GetUsedMaterials @ 149711980

void __thiscall
UBaseDynamicMeshComponent::GetUsedMaterials
          (UBaseDynamicMeshComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 TVar1;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  TObjectPtr<UMaterialInterface>_u_0 local_18;
  TObjectPtr<UMaterialInterface>_u_0 local_10;
  
  UMeshComponent::GetUsedMaterials((UMeshComponent *)this,param_1,param_2);
  TVar1 = (TObjectPtr<UMaterialInterface>_u_0)(this->OverrideRenderMaterial).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar2 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    local_18 = TVar1;
    if (((pTVar2 <= &local_18) && (&local_18 < pTVar2 + param_1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8)
    )->DebugPtr = (UMaterialInterface *)local_18;
  }
  piVar7 = &param_1->ArrayMax;
  TVar1 = (TObjectPtr<UMaterialInterface>_u_0)(this->SecondaryRenderMaterial).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar2 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    local_10 = TVar1;
    if (((pTVar2 <= &local_10) && (&local_10 < pTVar2 + *piVar7)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar8 = &param_1->ArrayNum;
    iVar6 = *piVar8;
    if (iVar6 == *piVar7) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar7);
      *piVar8 = iVar6;
    }
    *piVar8 = iVar6 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8)
    )->DebugPtr = (UMaterialInterface *)local_10;
  }
  piVar8 = &param_1->ArrayNum;
  piVar7 = &param_1->ArrayMax;
  if ((this->ColorMode != None) && (DefaultVertexColorMaterial != (UMaterialInterface *)0x0)) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 < (FScriptContainerElement *)0x155284f69) &&
       ((&DefaultVertexColorMaterial < pFVar3 + (longlong)*piVar7 * 8 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar8;
    if (iVar6 == *piVar7) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar7);
      *piVar8 = iVar6;
    }
    *piVar8 = iVar6 + 1;
    *(UMaterialInterface **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         DefaultVertexColorMaterial;
  }
  return;
}

// GetVertexColorSpaceTransformMode @ 149711c40

EDynamicMeshVertexColorTransformMode __thiscall
UBaseDynamicMeshComponent::GetVertexColorSpaceTransformMode(UBaseDynamicMeshComponent *this)

{
  return this->ColorSpaceMode;
}

// GetViewModeOverridesEnabled @ 149711c50

bool __thiscall
UBaseDynamicMeshComponent::GetViewModeOverridesEnabled(UBaseDynamicMeshComponent *this)

{
  return this->bEnableViewModeOverrides;
}

// HasOverrideRenderMaterial @ 149711e30

bool __thiscall
UBaseDynamicMeshComponent::HasOverrideRenderMaterial(UBaseDynamicMeshComponent *this,int param_1)

{
  return (this->OverrideRenderMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0;
}

// HasOverrideSecondaryWireframeRenderMaterial @ 149711e50

bool __thiscall
UBaseDynamicMeshComponent::HasOverrideSecondaryWireframeRenderMaterial
          (UBaseDynamicMeshComponent *this)

{
  return (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr != (UMaterialInterface *)0x0
  ;
}

// HasOverrideWireframeRenderMaterial @ 149711e70

bool __thiscall
UBaseDynamicMeshComponent::HasOverrideWireframeRenderMaterial(UBaseDynamicMeshComponent *this)

{
  return (this->WireframeMaterialOverride).field0_0x0.DebugPtr != (UMaterialInterface *)0x0;
}

// HasSecondaryRenderMaterial @ 149711f10

bool __thiscall
UBaseDynamicMeshComponent::HasSecondaryRenderMaterial(UBaseDynamicMeshComponent *this)

{
  return (this->SecondaryRenderMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0;
}

// InitializeDefaultMaterials @ 1497133b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UBaseDynamicMeshComponent::InitializeDefaultMaterials(void)

{
  UMaterial *pUVar1;
  
  pUVar1 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterial *)0x0) {
    DefaultWireframeMaterial = (UMaterialInterface *)pUVar1;
  }
  pUVar1 = (GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterial *)0x0) {
    DefaultVertexColorMaterial = (UMaterialInterface *)pUVar1;
  }
  return;
}

// IsMaterialSlotNameValid @ 149713f70

bool __thiscall
UBaseDynamicMeshComponent::IsMaterialSlotNameValid(UBaseDynamicMeshComponent *this,FName param_1)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FName *pFVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar3 = false;
  bVar2 = false;
  iVar4 = (**(code **)(this->_padding_ + 0x810))();
  iVar8 = 0;
  if (0 < iVar4) {
    do {
      lVar5 = (**(code **)(this->_padding_ + 0x690))(this,iVar8);
      if (lVar5 == 0) {
        bVar2 = true;
        ::FString::FString(&local_38,L"Material");
      }
      else {
        local_res8 = *(FName *)(lVar5 + 0x18);
        bVar3 = true;
        ::FName::ToString(&local_res8,&local_48);
      }
      ::FString::PrintfImpl(&local_58,L"%s_%d");
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar6 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar1 = *pFVar6;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar2) &&
         (bVar2 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((bVar3) &&
         (bVar3 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (param_1 == FVar1) {
        return true;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  return false;
}

// NotifyMaterialSetUpdated @ 149714430

void __thiscall UBaseDynamicMeshComponent::NotifyMaterialSetUpdated(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xf1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// NotifyMeshUpdated @ 149714500

void __thiscall UBaseDynamicMeshComponent::NotifyMeshUpdated(UBaseDynamicMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xbd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnNewDistanceFieldMode @ 149714a90

void __thiscall UBaseDynamicMeshComponent::OnNewDistanceFieldMode(UBaseDynamicMeshComponent *this)

{
  return;
}

// OnRenderingStateChanged @ 149714ae0

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
UBaseDynamicMeshComponent::OnRenderingStateChanged(UBaseDynamicMeshComponent *this,bool param_1)

{
  if (!param_1) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  FlushRenderingCommands();
  if ((this->_padding_ & 1) != 0) {
    UActorComponent::ReregisterComponent((UActorComponent *)this);
    return;
  }
  return;
}

// ProcessMesh @ 149715350

void __thiscall
UBaseDynamicMeshComponent::ProcessMesh
          (UBaseDynamicMeshComponent *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0xaa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetColorOverrideMode @ 149719040

void __thiscall
UBaseDynamicMeshComponent::SetColorOverrideMode
          (UBaseDynamicMeshComponent *this,EDynamicMeshComponentColorOverrideMode param_1)

{
  if (this->ColorMode != param_1) {
    this->ColorMode = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149719053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// SetConstantOverrideColor @ 149719110

void __thiscall
UBaseDynamicMeshComponent::SetConstantOverrideColor(UBaseDynamicMeshComponent *this,FColor param_1)

{
  if ((FColor_u_0)(this->ConstantColor).field0_0x0.Bits != param_1.field0_0x0) {
    (this->ConstantColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
                    /* WARNING: Could not recover jumptable at 0x000149719123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// SetDefaultVertexColorMaterial @ 149719140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial(UMaterialInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UMaterialInterface *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UMaterialInterface *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = param_1;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial_::__l2::TSTR_BaseDynamicMeshComponent_SetVertexColorMaterial417>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetVertexColorMaterial417>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetDefaultWireframeMaterial @ 1497192a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UBaseDynamicMeshComponent::SetDefaultWireframeMaterial(UMaterialInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UMaterialInterface *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UMaterialInterface *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = param_1;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UBaseDynamicMeshComponent::SetDefaultWireframeMaterial_::__l2::TSTR_BaseDynamicMeshComponent_SetWireframeMaterial403>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetWireframeMaterial403>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetDistanceFieldMode @ 149719430

void __thiscall
UBaseDynamicMeshComponent::SetDistanceFieldMode
          (UBaseDynamicMeshComponent *this,EDynamicMeshComponentDistanceFieldMode param_1)

{
  return;
}

// SetEnableFlatShading @ 1497196e0

void __thiscall
UBaseDynamicMeshComponent::SetEnableFlatShading(UBaseDynamicMeshComponent *this,bool param_1)

{
  if (this->bEnableFlatShading != param_1) {
    this->bEnableFlatShading = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001497196f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// SetEnableRaytracing @ 149719710

void __thiscall
UBaseDynamicMeshComponent::SetEnableRaytracing(UBaseDynamicMeshComponent *this,bool param_1)

{
  if (this->bEnableRaytracing != param_1) {
    this->bEnableRaytracing = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149719723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,1);
    return;
  }
  return;
}

// SetEnableWireframeRenderPass @ 149719740

void __thiscall
UBaseDynamicMeshComponent::SetEnableWireframeRenderPass
          (UBaseDynamicMeshComponent *this,bool param_1)

{
  this->bExplicitShowWireframe = param_1;
  return;
}

// SetMaterial @ 149719860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
UBaseDynamicMeshComponent::SetMaterial
          (UBaseDynamicMeshComponent *this,int param_1,UMaterialInterface *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBodyInstance *this_00;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\BaseDynamicMeshComponent.cpp"
                       ,0x144,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->BaseMaterials).ArrayNum <= param_1) {
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->BaseMaterials,param_1 + 1,No);
  }
  uVar4 = 0;
  if (param_1 < (this->BaseMaterials).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->BaseMaterials).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UMaterialInterface **)(pFVar1 + (longlong)param_1 * 8) = param_2;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this_00 = (FBodyInstance *)(**(code **)(this->_padding_ + 0x818))(this,0,1,0xffffffff);
  if (this_00 != (FBodyInstance *)0x0) {
    bVar3 = FBodyInstance::IsValidBodyInstance(this_00);
    if (bVar3) {
      FBodyInstance::UpdatePhysicalMaterials(this_00);
    }
  }
  return;
}

// SetMesh @ 1497199a0

void __thiscall
UBaseDynamicMeshComponent::SetMesh(UBaseDynamicMeshComponent *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Public\\Components\\BaseDynamicMeshComponent.h"
                     ,0x8f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetMeshDrawPath @ 149719cb0

void __thiscall
UBaseDynamicMeshComponent::SetMeshDrawPath
          (UBaseDynamicMeshComponent *this,EDynamicMeshDrawPath param_1)

{
  if (this->DrawPath != param_1) {
    this->DrawPath = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149719cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,1);
    return;
  }
  return;
}

// SetNumMaterials @ 14971a3d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UBaseDynamicMeshComponent::SetNumMaterials(UBaseDynamicMeshComponent *this,int param_1)

{
  if (param_1 < (this->BaseMaterials).ArrayNum) {
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->BaseMaterials,param_1,Default);
    return;
  }
  if (param_1 < (this->BaseMaterials).ArrayNum) {
    do {
      (**(code **)(this->_padding_ + 0x6b8))(this,param_1,0);
      param_1 = param_1 + 1;
    } while (param_1 < (this->BaseMaterials).ArrayNum);
  }
  return;
}

// SetOverrideRenderMaterial @ 14971a440

void __thiscall
UBaseDynamicMeshComponent::SetOverrideRenderMaterial
          (UBaseDynamicMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->OverrideRenderMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->OverrideRenderMaterial).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0xb68))(this);
  }
  return;
}

// SetOverrideSecondaryWireframeRenderMaterial @ 14971a4b0

void __thiscall
UBaseDynamicMeshComponent::SetOverrideSecondaryWireframeRenderMaterial
          (UBaseDynamicMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SecondaryWireframeMaterialOverride).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0xb68))(this);
  }
  return;
}

// SetOverrideWireframeRenderMaterial @ 14971a520

void __thiscall
UBaseDynamicMeshComponent::SetOverrideWireframeRenderMaterial
          (UBaseDynamicMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WireframeMaterialOverride).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->WireframeMaterialOverride).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0xb68))(this);
  }
  return;
}

// SetSecondaryBuffersVisibility @ 14971a700

void __thiscall
UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility
          (UBaseDynamicMeshComponent *this,bool param_1)

{
  this->bDrawSecondaryBuffers = param_1;
  return;
}

// SetSecondaryRenderMaterial @ 14971a710

void __thiscall
UBaseDynamicMeshComponent::SetSecondaryRenderMaterial
          (UBaseDynamicMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->SecondaryRenderMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SecondaryRenderMaterial).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0xb68))(this);
  }
  return;
}

// SetShadowsEnabled @ 14971a780

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
UBaseDynamicMeshComponent::SetShadowsEnabled(UBaseDynamicMeshComponent *this,bool param_1)

{
  FlushRenderingCommands();
  UPrimitiveComponent::SetCastShadow((UPrimitiveComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014971a7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc90))(this,1);
  return;
}

// SetTwoSided @ 14971a900

void __thiscall UBaseDynamicMeshComponent::SetTwoSided(UBaseDynamicMeshComponent *this,bool param_1)

{
  if (this->bTwoSided != param_1) {
    this->bTwoSided = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014971a913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// SetVertexColorSpaceTransformMode @ 14971a9d0

void __thiscall
UBaseDynamicMeshComponent::SetVertexColorSpaceTransformMode
          (UBaseDynamicMeshComponent *this,EDynamicMeshVertexColorTransformMode param_1)

{
  if (this->ColorSpaceMode != param_1) {
    this->ColorSpaceMode = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014971a9e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// SetViewModeOverridesEnabled @ 14971aa00

void __thiscall
UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(UBaseDynamicMeshComponent *this,bool param_1)

{
  if (this->bEnableViewModeOverrides != param_1) {
    this->bEnableViewModeOverrides = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014971aa13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xc90))(this,0);
    return;
  }
  return;
}

// StaticRegisterNativesUBaseDynamicMeshComponent @ 14971aa70

void __cdecl UBaseDynamicMeshComponent::StaticRegisterNativesUBaseDynamicMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x24;
  local_18.DataPtr = Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14971dc80

UObject * __thiscall UBaseDynamicMeshComponent::_getUObject(UBaseDynamicMeshComponent *this)

{
  return (UObject *)&this[-1].WireframeMaterialOverride;
}

// _getUObject`adjustor{552}' @ 14971dc8c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_552__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14971dca0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_560__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14971dcb4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_568__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14971dcc8

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_1384__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1392}' @ 14971dcdc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{1392}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_1392__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1400}' @ 14971dcf0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{1400}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_1400__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1408}' @ 14971dd04

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseDynamicMeshComponent::_getUObject`adjustor{1408}' (void)const __ptr64 */

UObject * __thiscall
UBaseDynamicMeshComponent::_getUObject_adjustor_1408__(UBaseDynamicMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseDynamicMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execClearOverrideRenderMaterial @ 14971dea0

void __cdecl
UBaseDynamicMeshComponent::execClearOverrideRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014971deb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xbf8))();
  return;
}

// execClearOverrideSecondaryWireframeRenderMaterial @ 14971ded0

void __cdecl
UBaseDynamicMeshComponent::execClearOverrideSecondaryWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014971dee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xc68))();
  return;
}

// execClearOverrideWireframeRenderMaterial @ 14971df00

void __cdecl
UBaseDynamicMeshComponent::execClearOverrideWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014971df18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xc48))();
  return;
}

// execClearSecondaryRenderMaterial @ 14971df30

void __cdecl
UBaseDynamicMeshComponent::execClearSecondaryRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014971df48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xc18))();
  return;
}

// execGetColorOverrideMode @ 14971e1f0

void __cdecl
UBaseDynamicMeshComponent::execGetColorOverrideMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb88))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetConstantOverrideColor @ 14971e270

void __cdecl
UBaseDynamicMeshComponent::execGetConstantOverrideColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0xb98))(param_1,local_res8);
  *(undefined4 *)param_3 = *puVar1;
  return;
}

// execGetDistanceFieldMode @ 14971e2b0

void __cdecl
UBaseDynamicMeshComponent::execGetDistanceFieldMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xcb8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetDynamicMesh @ 14971e2f0

void __cdecl
UBaseDynamicMeshComponent::execGetDynamicMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb48))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetEnableRaytracing @ 14971e360

void __cdecl
UBaseDynamicMeshComponent::execGetEnableRaytracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc88))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetEnableWireframeRenderPass @ 14971e3a0

void __cdecl
UBaseDynamicMeshComponent::execGetEnableWireframeRenderPass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb78))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetFlatShadingEnabled @ 14971e3e0

void __cdecl
UBaseDynamicMeshComponent::execGetFlatShadingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xbc8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetMeshDrawPath @ 14971e420

void __cdecl
UBaseDynamicMeshComponent::execGetMeshDrawPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xca8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetOverrideRenderMaterial @ 14971e460

void __cdecl
UBaseDynamicMeshComponent::execGetOverrideRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xc08))(param_1,local_res8[0]);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetOverrideSecondaryWireframeRenderMaterial @ 14971e500

void __cdecl
UBaseDynamicMeshComponent::execGetOverrideSecondaryWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc78))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetOverrideWireframeRenderMaterial @ 14971e540

void __cdecl
UBaseDynamicMeshComponent::execGetOverrideWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc58))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetSecondaryBuffersVisibility @ 14971e580

void __cdecl
UBaseDynamicMeshComponent::execGetSecondaryBuffersVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc38))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetSecondaryRenderMaterial @ 14971e5c0

void __cdecl
UBaseDynamicMeshComponent::execGetSecondaryRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc28))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetShadowsEnabled @ 14971e600

void __cdecl
UBaseDynamicMeshComponent::execGetShadowsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xbd8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetVertexColorSpaceTransformMode @ 14971e6d0

void __cdecl
UBaseDynamicMeshComponent::execGetVertexColorSpaceTransformMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xba8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetViewModeOverridesEnabled @ 14971e710

void __cdecl
UBaseDynamicMeshComponent::execGetViewModeOverridesEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xbe8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execHasOverrideRenderMaterial @ 14971e750

void __cdecl
UBaseDynamicMeshComponent::execHasOverrideRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xc00))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetColorOverrideMode @ 14971f190

void __cdecl
UBaseDynamicMeshComponent::execSetColorOverrideMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb80))(param_1,local_res8[0]);
  return;
}

// execSetConstantOverrideColor @ 14971f300

void __cdecl
UBaseDynamicMeshComponent::execSetConstantOverrideColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb90))(param_1,local_res8[0]);
  return;
}

// execSetDistanceFieldMode @ 14971f470

void __cdecl
UBaseDynamicMeshComponent::execSetDistanceFieldMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xcb0))(param_1,local_res8[0]);
  return;
}

// execSetEnableFlatShading @ 14971f810

void __cdecl
UBaseDynamicMeshComponent::execSetEnableFlatShading(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xbc0))(param_1,local_res8[0] != 0);
  return;
}

// execSetEnableRaytracing @ 14971f8b0

void __cdecl
UBaseDynamicMeshComponent::execSetEnableRaytracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc80))(param_1,local_res8[0] != 0);
  return;
}

// execSetEnableWireframeRenderPass @ 14971f950

void __cdecl
UBaseDynamicMeshComponent::execSetEnableWireframeRenderPass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb70))(param_1,local_res8[0] != 0);
  return;
}

// execSetMeshDrawPath @ 14971f9f0

void __cdecl
UBaseDynamicMeshComponent::execSetMeshDrawPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xca0))(param_1,local_res8[0]);
  return;
}

// execSetOverrideRenderMaterial @ 14971fa80

void __cdecl
UBaseDynamicMeshComponent::execSetOverrideRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xbf0))(param_1,local_res8);
  return;
}

// execSetOverrideSecondaryWireframeRenderMaterial @ 14971fb10

void __cdecl
UBaseDynamicMeshComponent::execSetOverrideSecondaryWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc60))(param_1,local_res8);
  return;
}

// execSetOverrideWireframeRenderMaterial @ 14971fba0

void __cdecl
UBaseDynamicMeshComponent::execSetOverrideWireframeRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc40))(param_1,local_res8);
  return;
}

// execSetSecondaryBuffersVisibility @ 14971fc30

void __cdecl
UBaseDynamicMeshComponent::execSetSecondaryBuffersVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc30))(param_1,local_res8[0] != 0);
  return;
}

// execSetSecondaryRenderMaterial @ 14971fcd0

void __cdecl
UBaseDynamicMeshComponent::execSetSecondaryRenderMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc10))(param_1,local_res8);
  return;
}

// execSetShadowsEnabled @ 14971fd60

void __cdecl
UBaseDynamicMeshComponent::execSetShadowsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xbd0))(param_1,local_res8[0] != 0);
  return;
}

// execSetVertexColorSpaceTransformMode @ 14971fea0

void __cdecl
UBaseDynamicMeshComponent::execSetVertexColorSpaceTransformMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xba0))(param_1,local_res8[0]);
  return;
}

// execSetViewModeOverridesEnabled @ 14971ff30

void __cdecl
UBaseDynamicMeshComponent::execSetViewModeOverridesEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xbe0))(param_1,local_res8[0] != 0);
  return;
}

