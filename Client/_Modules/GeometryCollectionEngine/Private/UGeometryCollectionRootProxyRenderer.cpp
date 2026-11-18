// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 18

// StaticClass @ 146399590

UClass * __cdecl UGeometryCollectionRootProxyRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionRootProxyRenderer",
               &Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionRootProxyRenderer,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionRootProxyRenderer>,
               InternalVTableHelperCtorCaller<UGeometryCollectionRootProxyRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton;
}

// UGeometryCollectionRootProxyRenderer @ 1463a4900

UGeometryCollectionRootProxyRenderer * __thiscall
UGeometryCollectionRootProxyRenderer::UGeometryCollectionRootProxyRenderer
          (UGeometryCollectionRootProxyRenderer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsVisible = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  (this->StaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  return this;
}

// UGeometryCollectionRootProxyRenderer @ 1463a4940

UGeometryCollectionRootProxyRenderer * __thiscall
UGeometryCollectionRootProxyRenderer::UGeometryCollectionRootProxyRenderer
          (UGeometryCollectionRootProxyRenderer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsVisible = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  (this->StaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  return this;
}

// ~UGeometryCollectionRootProxyRenderer @ 1463a5e30

void __thiscall
UGeometryCollectionRootProxyRenderer::~UGeometryCollectionRootProxyRenderer
          (UGeometryCollectionRootProxyRenderer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGeometryCollectionExternalRenderInterface__;
  pFVar1 = (this->StaticMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGeometryCollectionExternalRenderInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanEverUseNativeFallback @ 1463ae360

bool __thiscall
UGeometryCollectionRootProxyRenderer::CanEverUseNativeFallback
          (UGeometryCollectionRootProxyRenderer *this)

{
  return true;
}

// ClearRootProxyComponents @ 1463ae500

void __thiscall
UGeometryCollectionRootProxyRenderer::ClearRootProxyComponents
          (UGeometryCollectionRootProxyRenderer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->StaticMeshComponents).AllocatorInstance.Data;
  iVar2 = (this->StaticMeshComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StaticMeshComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x4a0))();
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->StaticMeshComponents).ArrayNum = 0;
  if ((this->StaticMeshComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->StaticMeshComponents).AllocatorInstance,0,
               &(this->StaticMeshComponents).ArrayMax);
  }
  return;
}

// CreateRootProxyComponents @ 1463af600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
UGeometryCollectionRootProxyRenderer::CreateRootProxyComponents
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollectionComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  UGeometryCollection *pUVar3;
  code *pcVar4;
  UGeometryCollectionComponent *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  USceneComponent *this_00;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  undefined1 auStackY_168 [32];
  longlong local_118;
  USceneComponent *local_110;
  longlong local_108;
  undefined8 local_100;
  UGeometryCollectionRootProxyRenderer *local_f8;
  undefined8 local_f0;
  TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_> *local_e8;
  UGeometryCollectionComponent *local_e0;
  longlong local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar3 = (param_1->RestCollection).field0_0x0.DebugPtr;
  if (pUVar3 != (UGeometryCollection *)0x0) {
    local_f8 = this;
    local_e0 = param_1;
    ClearRootProxyComponents(this);
    uVar11 = (pUVar3->RootProxyData).ProxyMeshes.ArrayNum;
    pTVar15 = &this->StaticMeshComponents;
    local_e8 = pTVar15;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar2 = &(this->StaticMeshComponents).ArrayMax;
    piVar1 = &(this->StaticMeshComponents).ArrayNum;
    if (*piVar2 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&pTVar15->AllocatorInstance,*piVar1,piVar2);
    }
    uVar16 = 0;
    if (0 < (int)uVar11) {
      local_108 = 0;
      local_118 = 0;
      local_d8 = (longlong)(int)uVar11;
      do {
        lVar12 = local_108;
        this_00 = (USceneComponent *)0x0;
        uVar11 = 0;
        if ((int)uVar16 < (pUVar3->RootProxyData).ProxyMeshes.ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((pUVar3->RootProxyData).ProxyMeshes.AllocatorInstance.Data + lVar12 * 8)
            != 0) {
          local_100 = 0;
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)local_f8,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_c8,pUVar9);
          local_c8._8_8_ = local_f8;
          local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_c8._56_8_ = (UPackage *)0x0;
          local_c8._16_4_ = 0;
          local_c8._20_4_ = 0;
          local_c8._24_4_ = RF_DuplicateTransient|RF_Transient;
          local_c8._40_8_ = (UObject *)0x0;
          local_c8[0x20] = false;
          this_00 = (USceneComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
          if (local_c8._64_8_ != 0) {
            plVar10 = (longlong *)(local_c8 + 0x50);
            if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
              plVar10 = (longlong *)local_c8._104_8_;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          (**(code **)(this_00->_padding_ + 0xb28))(this_00);
          UActorComponent::SetCanEverAffectNavigation((UActorComponent *)this_00,false);
          (**(code **)(this_00->_padding_ + 0x788))
                    (this_00,UCollisionProfile::NoCollision_ProfileName,1);
          pUVar5 = local_e0;
          (**(code **)(this_00->_padding_ + 0x5f8))(this_00,local_e0->field_0x1ab);
          local_f0 = 0;
          USceneComponent::SetupAttachment(this_00,(USceneComponent *)pUVar5,(FName)0x0);
          UActorComponent::RegisterComponent((UActorComponent *)this_00);
          lVar12 = local_108;
          if ((-1 < (int)uVar16) &&
             ((int)uVar16 < (pUVar3->RootProxyData).MeshOverrideMaterials.ArrayNum)) {
            uVar11 = 0;
            if ((int)uVar16 < (pUVar3->RootProxyData).MeshOverrideMaterials.ArrayNum) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = 0;
            pFVar14 = (pUVar3->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data +
                      local_118;
            iVar8 = *(int *)(pFVar14 + 8);
            lVar12 = local_108;
            pTVar15 = local_e8;
            if (0 < iVar8) {
              lVar13 = 0;
              do {
                pcVar4 = *(code **)(this_00->_padding_ + 0x6b8);
                uVar7 = 0;
                if ((int)uVar11 < iVar8) {
                  uVar7 = ~uVar11 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (*pcVar4)(this_00,uVar11,*(undefined8 *)(*(longlong *)pFVar14 + lVar13));
                iVar8 = *(int *)(pFVar14 + 8);
                uVar11 = uVar11 + 1;
                lVar13 = lVar13 + 8;
                lVar12 = local_108;
                pTVar15 = local_e8;
              } while ((int)uVar11 < iVar8);
            }
          }
        }
        local_110 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar14 = (pTVar15->AllocatorInstance).Data;
        piVar2 = &pTVar15->ArrayMax;
        if (((pFVar14 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 < pFVar14 + (longlong)*piVar2 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *piVar1;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar15->AllocatorInstance,piVar2);
          *piVar1 = iVar8;
        }
        *piVar1 = iVar8 + 1;
        *(USceneComponent **)((pTVar15->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_110;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_110 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_110);
        }
        local_108 = lVar12 + 1;
        local_118 = local_118 + 0x10;
        uVar16 = uVar16 + 1;
      } while (local_108 < local_d8);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1463b7880

UClass * __cdecl UGeometryCollectionRootProxyRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionRootProxyRenderer",
               &Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionRootProxyRenderer,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCollectionRootProxyRenderer>,
               InternalVTableHelperCtorCaller<UGeometryCollectionRootProxyRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.InnerSingleton;
}

// OnRegisterGeometryCollection @ 1463bd5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGeometryCollectionRootProxyRenderer::OnRegisterGeometryCollection
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollectionComponent *param_1)

{
  CreateRootProxyComponents((UGeometryCollectionRootProxyRenderer *)&this[-1]._padding_,param_1);
  return;
}

// OnUnregisterGeometryCollection @ 1463bd650

void __thiscall
UGeometryCollectionRootProxyRenderer::OnUnregisterGeometryCollection
          (UGeometryCollectionRootProxyRenderer *this)

{
  ClearRootProxyComponents((UGeometryCollectionRootProxyRenderer *)&this[-1]._padding_);
  return;
}

// ShouldUseNativeFallback @ 1463c9ae0

bool __thiscall
UGeometryCollectionRootProxyRenderer::ShouldUseNativeFallback
          (UGeometryCollectionRootProxyRenderer *this,uint param_1)

{
  return (bool)((byte)(param_1 >> 1) & 1);
}

// StaticRegisterNativesUGeometryCollectionRootProxyRenderer @ 1463c9c80

void __cdecl
UGeometryCollectionRootProxyRenderer::StaticRegisterNativesUGeometryCollectionRootProxyRenderer
          (void)

{
  return;
}

// UpdateRootProxyTransforms @ 1463cf350

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

void __thiscall
UGeometryCollectionRootProxyRenderer::UpdateRootProxyTransforms
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,TArrayView<UE::Math::TTransform<float>_const_,int> *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  USceneComponent *this_00;
  TTransform<float> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar9 = 0;
  if (0 < (this->StaticMeshComponents).ArrayNum) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->StaticMeshComponents).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(USceneComponent **)((this->StaticMeshComponents).AllocatorInstance.Data + lVar10);
      if (this_00 != (USceneComponent *)0x0) {
        pTVar8 = param_2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < param_3->ArrayNum)) {
          if (((int)uVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = param_3->DataPtr;
          pfVar1 = (float *)((longlong)&pTVar4->Rotation + lVar11);
          pfVar2 = (float *)((longlong)&pTVar4->Scale3D + lVar11);
          pfVar3 = (float *)((longlong)&pTVar4->Translation + lVar11);
          local_a8.Rotation.XY.m128d_f64[0] = (double)*pfVar1;
          local_a8.Rotation.XY.m128d_f64[1] = (double)pfVar1[1];
          local_a8.Rotation.ZW.m128d_f64[0] = (double)pfVar1[2];
          local_a8.Rotation.ZW.m128d_f64[1] = (double)pfVar1[3];
          local_a8.Translation.ZW.m128d_f64[0] = (double)pfVar3[2];
          local_a8.Translation.ZW.m128d_f64[1] = (double)pfVar3[3];
          local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar3[1],0);
          local_a8.Translation.XY.m128d_f64[0] = (double)*pfVar3;
          local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar3[1] >> 0x20);
          local_a8.Scale3D.ZW.m128d_f64[0] = (double)pfVar2[2];
          local_a8.Scale3D.ZW.m128d_f64[1] = (double)pfVar2[3];
          local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar2[1],0);
          local_a8.Scale3D.XY.m128d_f64[0] = (double)*pfVar2;
          local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar2[1] >> 0x20);
          local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_108.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_108.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_108.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_108.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_108.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_108.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_108.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_108,&local_a8,param_2);
          pTVar8 = &local_108;
        }
        USceneComponent::SetRelativeTransform(this_00,pTVar8,false,(FHitResult *)0x0,None);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
      lVar11 = lVar11 + 0x30;
    } while ((int)uVar9 < (this->StaticMeshComponents).ArrayNum);
  }
  return;
}

// UpdateRootTransform @ 1463cf660

void __thiscall
UGeometryCollectionRootProxyRenderer::UpdateRootTransform
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2)

{
  TArrayView<UE::Math::TTransform<float>_const_,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (TTransform<float> *)0x0;
  UpdateRootProxyTransforms
            ((UGeometryCollectionRootProxyRenderer *)&this[-1]._padding_,param_1,param_2,&local_18);
  return;
}

// UpdateRootTransforms @ 1463cf7b0

void __thiscall
UGeometryCollectionRootProxyRenderer::UpdateRootTransforms
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,TArrayView<UE::Math::TTransform<float>_const_,int> *param_3)

{
  TArrayView<UE::Math::TTransform<float>_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  UpdateRootProxyTransforms
            ((UGeometryCollectionRootProxyRenderer *)&this[-1]._padding_,param_1,param_2,&local_18);
  return;
}

// UpdateState @ 1463cfbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGeometryCollectionRootProxyRenderer::UpdateState
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 local_res20 [8];
  
  bVar4 = ((byte)param_3 & 3) == 1;
  if ((bool)(char)this->_padding_ != bVar4) {
    *(bool *)&this->_padding_ = bVar4;
    puVar3 = (undefined8 *)this->_padding_;
    iVar2 = (int)this->_padding_;
    puVar1 = puVar3 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar3 == puVar1) break;
      if ((USceneComponent *)*puVar3 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility
                  ((USceneComponent *)*puVar3,SUB81(this->_padding_,0),DirtyOnly);
      }
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

// UpdateTransforms @ 1463cfd10

void __thiscall
UGeometryCollectionRootProxyRenderer::UpdateTransforms
          (UGeometryCollectionRootProxyRenderer *this,UGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_2)

{
  return;
}

// _getUObject @ 1463d1540

UObject * __thiscall
UGeometryCollectionRootProxyRenderer::_getUObject(UGeometryCollectionRootProxyRenderer *this)

{
  return (UObject *)&this[-1]._padding_;
}

