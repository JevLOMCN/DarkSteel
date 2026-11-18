// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147336630

UClass * __cdecl UVectorFieldComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldComponent",
               &Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton,
               StaticRegisterNativesUVectorFieldComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UVectorFieldComponent>,
               InternalVTableHelperCtorCaller<UVectorFieldComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton;
}

// UVectorFieldComponent @ 147340de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UVectorFieldComponent * __thiscall
UVectorFieldComponent::UVectorFieldComponent(UVectorFieldComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->VectorField).field0_0x0.DebugPtr = (UVectorField *)0x0;
  return this;
}

// ~UVectorFieldComponent @ 147342300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UVectorFieldComponent::~UVectorFieldComponent(UVectorFieldComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147350260

UClass * __cdecl UVectorFieldComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldComponent",
               &Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton,
               StaticRegisterNativesUVectorFieldComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UVectorFieldComponent>,
               InternalVTableHelperCtorCaller<UVectorFieldComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton;
}

// StaticRegisterNativesUVectorFieldComponent @ 147358940

void __cdecl UVectorFieldComponent::StaticRegisterNativesUVectorFieldComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UVectorFieldComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetIntensity @ 147361840

void __cdecl UVectorFieldComponent::execSetIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_res8[0]);
  return;
}

// UVectorFieldComponent @ 14890bdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UVectorFieldComponent * __thiscall
UVectorFieldComponent::UVectorFieldComponent
          (UVectorFieldComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VectorField).field0_0x0.DebugPtr = (UVectorField *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  this->Intensity = 1.0;
  return this;
}

// CalcBounds @ 14891b8d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UVectorFieldComponent::CalcBounds
          (UVectorFieldComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  UVectorField *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  TMatrix<double> local_128 [2];
  
  dVar4 = 0.0;
  dVar12 = 0.0;
  dVar14 = 0.0;
  pUVar1 = (this->VectorField).field0_0x0.DebugPtr;
  local_158 = 0.0;
  uStack_150 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  if (pUVar1 != (UVectorField *)0x0) {
    dVar7 = (pUVar1->Bounds).Max.field0_0x0._s_0.Y - (pUVar1->Bounds).Min.field0_0x0._s_0.Y;
    dVar6 = (pUVar1->Bounds).Max.field0_0x0._s_0.X - (pUVar1->Bounds).Min.field0_0x0._s_0.X;
    dVar14 = (pUVar1->Bounds).Max.field0_0x0._s_0.Z - (pUVar1->Bounds).Min.field0_0x0._s_0.Z;
    local_148 = dVar7 * __real_3fe0000000000000;
    uStack_150 = dVar6 * __real_3fe0000000000000;
    dStack_140 = dVar14 * __real_3fe0000000000000;
    dVar4 = uStack_150 + (pUVar1->Bounds).Min.field0_0x0._s_0.X;
    dVar12 = local_148 + (pUVar1->Bounds).Min.field0_0x0._s_0.Y;
    local_158 = dStack_140 + (pUVar1->Bounds).Min.field0_0x0._s_0.Z;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (dVar7 * dVar7 + dVar6 * dVar6 + dVar14 * dVar14) * __real_3fd0000000000000;
    auVar15 = sqrtpd(ZEXT816(0),auVar15);
    dVar14 = auVar15._0_8_;
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar7 = (double)CONCAT44((uint)((ulonglong)(local_148 * local_128[0].M[1][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_148 * local_128[0].M[1][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(uStack_150 * local_128[0].M[0][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(uStack_150 * local_128[0].M[0][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dStack_140 * local_128[0].M[2][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dStack_140 * local_128[0].M[2][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(local_148 * local_128[0].M[1][1]) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_148 * local_128[0].M[1][1],0) & _UNK_15061cc88
                          ) +
          (double)CONCAT44((uint)((ulonglong)(uStack_150 * local_128[0].M[0][1]) >> 0x20) &
                           _UNK_15061cc8c,
                           SUB84(uStack_150 * local_128[0].M[0][1],0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dStack_140 * local_128[0].M[2][1]) >> 0x20) &
                           _UNK_15061cc8c,
                           SUB84(dStack_140 * local_128[0].M[2][1],0) & _UNK_15061cc88);
  dVar9 = (double)CONCAT44((uint)((ulonglong)(local_148 * local_128[0].M[1][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_148 * local_128[0].M[1][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(uStack_150 * local_128[0].M[0][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(uStack_150 * local_128[0].M[0][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dStack_140 * local_128[0].M[2][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dStack_140 * local_128[0].M[2][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar13._0_8_ =
       local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
       local_128[0].M[2][0] * local_128[0].M[2][0];
  auVar13._8_8_ =
       local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
       local_128[0].M[2][1] * local_128[0].M[2][1];
  auVar2._8_4_ = SUB84(auVar13._8_8_,0);
  auVar2._0_8_ = auVar13._8_8_;
  auVar2._12_4_ = (int)((ulonglong)auVar13._8_8_ >> 0x20);
  auVar15 = maxpd(auVar13,auVar2);
  dVar6 = local_128[0].M[1][2] * local_128[0].M[1][2] + local_128[0].M[0][2] * local_128[0].M[0][2]
          + local_128[0].M[2][2] * local_128[0].M[2][2];
  dVar10 = SQRT(dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8);
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar15 = maxpd(auVar15,auVar5);
  dVar14 = SQRT(auVar15._0_8_) * dVar14;
  if (dVar14 <= dVar10) {
    dVar10 = dVar14;
  }
  uStack_150._0_4_ = SUB84(dVar7,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar12 * local_128[0].M[1][0] + dVar4 * local_128[0].M[0][0] +
       local_158 * local_128[0].M[2][0] + local_128[0].M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       auVar11._8_8_ * local_128[0].M[1][1] + dVar4 * local_128[0].M[0][1] +
       local_158 * local_128[0].M[2][1] + local_128[0].M[3][1];
  auVar3._8_4_ = (undefined4)uStack_150;
  auVar3._0_8_ = dVar12 * local_128[0].M[1][2] + dVar4 * local_128[0].M[0][2] +
                 local_158 * local_128[0].M[2][2] + local_128[0].M[3][2];
  auVar3._12_4_ = uStack_150._4_4_;
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar9;
  __return_storage_ptr__->SphereRadius = dVar10;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 148924690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UVectorFieldComponent::CreateSceneProxy(UVectorFieldComponent *this)

{
  FVectorFieldInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPrimitiveSceneProxy *pFVar4;
  
  if (this->VectorFieldInstance == (FVectorFieldInstance *)0x0) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar4 = ::operator_new(0x3d0);
  if (pFVar4 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(pFVar4,(UPrimitiveComponent *)this,(FName)0x0);
    pFVar4->_padding_ = (longlong)&___7FVectorFieldSceneProxy__6B_;
    FVectorFieldVisualizationVertexFactory::FVectorFieldVisualizationVertexFactory
              ((FVectorFieldVisualizationVertexFactory *)&pFVar4[1]._padding_,
               pFVar4->Scene->FeatureLevel);
    pFVar4->bWillEverBeLit = '\0';
    pFVar1 = this->VectorFieldInstance;
    pFVar4[1]._padding_ = (longlong)pFVar1;
    if ((pFVar1->Resource).Reference == (FVectorFieldResource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VectorFieldInstance->Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x2a4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPrimitiveSceneProxy *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (pFVar4[1]._padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VectorFieldInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x2a5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPrimitiveSceneProxy *)(*pcVar2)();
        return pFVar4;
      }
    }
    return pFVar4;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetUsedMaterials @ 14895f150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UVectorFieldComponent::GetUsedMaterials
          (UVectorFieldComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TObjectPtr<UMaterial>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UMaterial>_u_0 local_18 [2];
  
  local_18[0] = (TObjectPtr<UMaterial>_u_0)
                (GEngine->LevelColorationUnlitMaterial).field0_0x0.DebugPtr;
  if (local_18[0].DebugPtr != (UMaterial *)0x0) {
    pTVar1 = (TObjectPtr<UMaterial>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    ((TObjectPtr<UMaterial>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8))->
    DebugPtr = (UMaterial *)local_18[0];
  }
  return;
}

// OnRegister @ 14896dad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UVectorFieldComponent::OnRegister(UVectorFieldComponent *this)

{
  undefined1 *puVar1;
  UVectorField *pUVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  bool bVar9;
  FVectorFieldInstance *this_00;
  TMatrix<double> *pTVar10;
  UWorld *pUVar11;
  longlong lVar12;
  FFXSystemInterface *pFVar13;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if ((this->VectorField).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    if (this->bPreviewVectorField == 0) {
      pUVar11 = (UWorld *)this->_padding_;
      if ((((pUVar11 != (UWorld *)0x0) ||
           (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
           pUVar11 != (UWorld *)0x0)) && (pUVar11->Scene != (FSceneInterface *)0x0)) &&
         (lVar12 = (**(code **)(pUVar11->Scene->_padding_ + 0x478))(), lVar12 != 0)) {
        if ((this->FXSystem != (FFXSystemInterface *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FXSystem == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                               ,0x32d,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FFXSystemInterface *)(**(code **)(pUVar11->Scene->_padding_ + 0x478))();
        this->FXSystem = pFVar13;
        if ((pFVar13 == (FFXSystemInterface *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FXSystem != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                               ,0x32f,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(this->FXSystem->_padding_ + 0x48))(this->FXSystem,this);
      }
    }
    else {
      this_00 = ::operator_new(0x1e0);
      if (this_00 != (FVectorFieldInstance *)0x0) {
        (this_00->Resource).Reference = (FVectorFieldResource *)0x0;
        (this_00->WorldBounds).IsValid = '\0';
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
        (this_00->VolumeToWorldNoScale).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        (this_00->VolumeToWorldNoScale).M[0][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][3];
        (this_00->VolumeToWorldNoScale).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        (this_00->VolumeToWorldNoScale).M[0][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
        (this_00->VolumeToWorldNoScale).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        (this_00->VolumeToWorldNoScale).M[1][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][3];
        (this_00->VolumeToWorldNoScale).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        (this_00->VolumeToWorldNoScale).M[1][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
        (this_00->VolumeToWorldNoScale).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        (this_00->VolumeToWorldNoScale).M[2][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][3];
        (this_00->VolumeToWorldNoScale).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        (this_00->VolumeToWorldNoScale).M[2][3] = dVar4;
        dVar4 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                                 UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
        (this_00->VolumeToWorldNoScale).M[3][0] =
             (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                              UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
        (this_00->VolumeToWorldNoScale).M[3][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[3][3];
        (this_00->VolumeToWorldNoScale).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
        (this_00->VolumeToWorldNoScale).M[3][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
        (this_00->WorldToVolume).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        (this_00->WorldToVolume).M[0][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][3];
        (this_00->WorldToVolume).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        (this_00->WorldToVolume).M[0][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
        (this_00->WorldToVolume).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        (this_00->WorldToVolume).M[1][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][3];
        (this_00->WorldToVolume).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        (this_00->WorldToVolume).M[1][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
        (this_00->WorldToVolume).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        (this_00->WorldToVolume).M[2][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][3];
        (this_00->WorldToVolume).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        (this_00->WorldToVolume).M[2][3] = dVar4;
        dVar4 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                                 UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
        (this_00->WorldToVolume).M[3][0] =
             (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                              UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
        (this_00->WorldToVolume).M[3][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[3][3];
        (this_00->WorldToVolume).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
        (this_00->WorldToVolume).M[3][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
        (this_00->VolumeToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        (this_00->VolumeToWorld).M[0][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[0][3];
        (this_00->VolumeToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        (this_00->VolumeToWorld).M[0][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
        (this_00->VolumeToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        (this_00->VolumeToWorld).M[1][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[1][3];
        (this_00->VolumeToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        (this_00->VolumeToWorld).M[1][3] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
        (this_00->VolumeToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        (this_00->VolumeToWorld).M[2][1] = dVar4;
        dVar4 = UE::Math::TMatrix<double>::Identity.M[2][3];
        (this_00->VolumeToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        (this_00->VolumeToWorld).M[2][3] = dVar4;
        uVar7 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
        uVar6 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
        uVar5 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
        *(undefined4 *)(this_00->VolumeToWorld).M[3] =
             UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
        *(undefined4 *)((longlong)(this_00->VolumeToWorld).M[3] + 4) = uVar5;
        *(undefined4 *)((this_00->VolumeToWorld).M[3] + 1) = uVar6;
        *(undefined4 *)((longlong)(this_00->VolumeToWorld).M[3] + 0xc) = uVar7;
        dVar8 = UE::Math::TMatrix<double>::Identity.M[3][3];
        dVar4 = UE::Math::TMatrix<double>::Identity.M[3][2];
        this_00->bTileX = 0;
        this_00->bUseFixDT = 0;
        this_00->bTileZ = 0;
        this_00->bTileY = 0;
        (this_00->VolumeToWorld).M[3][2] = dVar4;
        (this_00->VolumeToWorld).M[3][3] = dVar8;
        this_00->Tightness = 0.0;
        this_00->Intensity = 0.0;
        this_00->Index = -1;
        this_00->bInstancedResource = false;
      }
      pUVar2 = (this->VectorField).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,this_00,1);
      pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale
                          ((TTransform<double> *)&this->_padding_,&local_98);
      FVectorFieldInstance::UpdateTransforms(this_00,pTVar10);
      this->VectorFieldInstance = this_00;
    }
  }
  return;
}

// OnUnregister @ 14896e3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UVectorFieldComponent::OnUnregister(UVectorFieldComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FVectorFieldInstance *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVectorFieldInstance *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->VectorFieldInstance != (FVectorFieldInstance *)0x0) {
    if (this->bPreviewVectorField == 0) {
      if (this->FXSystem == (FFXSystemInterface *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FXSystem != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                           ,0x34a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)(this->FXSystem->_padding_ + 0x50))(this->FXSystem,this);
    }
    else {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UVectorFieldComponent::OnUnregister'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UVectorFieldComponent::OnUnregister'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = this->VectorFieldInstance;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UVectorFieldComponent::OnUnregister_::__l8::TSTR_FDestroyVectorFieldInstanceCommand832>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`UVectorFieldComponent::OnUnregister'::__l8::TSTR_FDestroyVectorFieldInstanceCommand832>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
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
      this->VectorFieldInstance = (FVectorFieldInstance *)0x0;
    }
  }
  this->FXSystem = (FFXSystemInterface *)0x0;
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  return;
}

// SendRenderTransform_Concurrent @ 14897d080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UVectorFieldComponent::SendRenderTransform_Concurrent(UVectorFieldComponent *this)

{
  FFXSystemInterface *pFVar1;
  
  UPrimitiveComponent::SendRenderTransform_Concurrent((UPrimitiveComponent *)this);
  pFVar1 = this->FXSystem;
  if (pFVar1 != (FFXSystemInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014897d0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,this);
    return;
  }
  return;
}

// SetIntensity @ 14897f270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UVectorFieldComponent::SetIntensity(UVectorFieldComponent *this,float param_1)

{
  FFXSystemInterface *pFVar1;
  
  pFVar1 = this->FXSystem;
  this->Intensity = param_1;
  if (pFVar1 != (FFXSystemInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014897f28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,this);
    return;
  }
  return;
}

