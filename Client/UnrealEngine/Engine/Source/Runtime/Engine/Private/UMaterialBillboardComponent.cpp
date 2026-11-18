// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1478882a0

UClass * __cdecl UMaterialBillboardComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialBillboardComponent",
               &Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton,
               StaticRegisterNativesUMaterialBillboardComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialBillboardComponent>,
               InternalVTableHelperCtorCaller<UMaterialBillboardComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton;
}

// UMaterialBillboardComponent @ 1478aa050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMaterialBillboardComponent * __thiscall
UMaterialBillboardComponent::UMaterialBillboardComponent
          (UMaterialBillboardComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  return this;
}

// UMaterialBillboardComponent @ 1478aa0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMaterialBillboardComponent * __thiscall
UMaterialBillboardComponent::UMaterialBillboardComponent
          (UMaterialBillboardComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  return this;
}

// ~UMaterialBillboardComponent @ 1478ac200

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
UMaterialBillboardComponent::~UMaterialBillboardComponent(UMaterialBillboardComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AddElement @ 1478b2320

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
UMaterialBillboardComponent::AddElement
          (UMaterialBillboardComponent *this,UMaterialInterface *param_1,UCurveFloat *param_2,
          bool param_3,float param_4,float param_5,UCurveFloat *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->Elements).AllocatorInstance,piVar1);
  }
  (this->Elements).ArrayNum = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    *(uint *)(pFVar2 + 0x10) = *(uint *)(pFVar2 + 0x10) & 0xfffffffe;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(undefined4 *)(pFVar2 + 0x14) = 0x42000000;
    *(undefined4 *)(pFVar2 + 0x18) = 0x42000000;
    *(undefined8 *)(pFVar2 + 0x20) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UMaterialInterface **)pFVar2 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UCurveFloat **)(pFVar2 + 8) = param_2;
  *(uint *)(pFVar2 + 0x10) = *(uint *)(pFVar2 + 0x10) & 0xfffffffe;
  *(uint *)(pFVar2 + 0x10) = *(uint *)(pFVar2 + 0x10) | (uint)param_3;
  *(float *)(pFVar2 + 0x14) = param_4;
  *(float *)(pFVar2 + 0x18) = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_6);
  }
  *(UCurveFloat **)(pFVar2 + 0x20) = param_6;
  (**(code **)(*(longlong *)this + 0x378))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// CalcBounds @ 1478b8100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UMaterialBillboardComponent::CalcBounds
          (UMaterialBillboardComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  
  uVar6 = 0;
  dVar13 = __real_3ff0000000000000;
  if (0 < (this->Elements).ArrayNum) {
    lVar7 = 0;
    dVar1 = __real_3ff0000000000000;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar6 < (this->Elements).ArrayNum) {
        uVar21 = uVar8;
      }
      if ((uVar21 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar5;
      }
      dVar13 = __real_4290000000000000;
      if (((byte)(this->Elements).AllocatorInstance.Data[lVar7 + 0x10] & 1) != 0) break;
      uVar21 = 0;
      if ((int)uVar6 < (this->Elements).ArrayNum) {
        uVar21 = uVar8;
      }
      if ((uVar21 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar5;
      }
      dVar13 = (double)*(float *)((this->Elements).AllocatorInstance.Data + lVar7 + 0x18);
      uVar21 = 0;
      if ((int)uVar6 < (this->Elements).ArrayNum) {
        uVar21 = uVar8;
      }
      if ((uVar21 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar5;
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar7 + 0x14;
      lVar7 = lVar7 + 0x28;
      dVar9 = (double)*(float *)((this->Elements).AllocatorInstance.Data + lVar3);
      if (dVar9 <= dVar1) {
        dVar9 = dVar1;
      }
      dVar1 = dVar9;
      if (dVar9 <= dVar13) {
        dVar1 = dVar13;
      }
      dVar13 = dVar1;
    } while ((int)uVar6 < (this->Elements).ArrayNum);
  }
  auVar20._0_8_ =
       CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                *(uint *)(param_1->Scale3D).ZW.m128d_f64);
  auVar20._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1);
  auVar20._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(param_1->Scale3D).XY.m128d_f64;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
  uVar8 = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
  uVar22 = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  auVar14._12_4_ = uVar21;
  auVar14._8_4_ = uVar6;
  auVar14._0_8_ = auVar20._0_8_;
  auVar18._4_4_ = uVar21;
  auVar18._0_4_ = uVar6;
  auVar18._8_4_ = uVar8;
  auVar18._12_4_ = uVar22;
  auVar19._8_8_ = auVar20._0_8_;
  auVar19._0_8_ = auVar18._8_8_;
  auVar17._4_4_ = uVar21;
  auVar17._0_4_ = uVar6;
  auVar17._8_4_ = uVar8;
  auVar17._12_4_ = uVar22;
  auVar18 = maxpd(auVar17,auVar19);
  auVar10._4_4_ = uVar21;
  auVar10._0_4_ = uVar6;
  auVar10._8_4_ = uVar8;
  auVar10._12_4_ = uVar22;
  auVar12._4_4_ = uVar22;
  auVar12._0_4_ = uVar8;
  auVar19 = maxpd(auVar18,auVar14);
  auVar18 = blendpd(auVar10,auVar20,2);
  auVar15._8_4_ = auVar20._8_4_;
  auVar15._0_8_ = auVar20._0_8_;
  auVar15._12_4_ = auVar20._12_4_;
  auVar18 = maxpd(auVar15,auVar18);
  auVar12._8_4_ = auVar20._8_4_;
  auVar12._12_4_ = auVar20._12_4_;
  maxpd(auVar18,auVar12);
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar1;
  dVar13 = (double)(float)auVar19._0_8_ * dVar13;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar13;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar13;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar13;
  auVar16._0_8_ = dVar13 * dVar13 * __real_4008000000000000;
  auVar16._8_8_ = dVar13;
  auVar12 = sqrtpd(auVar11,auVar16);
  __return_storage_ptr__->SphereRadius = auVar12._0_8_;
  return __return_storage_ptr__;
}

// CollectPSOPrecacheData @ 1478b9af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
UMaterialBillboardComponent::CollectPSOPrecacheData
          (UMaterialBillboardComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar4;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar5;
  code *pcVar6;
  TTypeCompatibleBytes<FVertexElement> TVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar12;
  undefined8 uVar13;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1c8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> *local_1a8;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [2];
  undefined1 local_176 [10];
  uchar auStack_16c [6];
  undefined1 local_166 [10];
  uchar auStack_15c [6];
  undefined1 local_156 [10];
  uchar auStack_14c [6];
  undefined1 local_146 [10];
  uchar auStack_13c [6];
  undefined1 local_136 [10];
  uchar auStack_12c [6];
  undefined1 local_126 [10];
  uchar auStack_11c [8];
  uint local_114;
  longlong *local_110;
  TTypeCompatibleBytes<FVertexElement> local_108;
  longlong *local_100;
  undefined1 local_f8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar3 = (param_1->field0_0x0).Data;
  local_110 = (longlong *)0x0;
  local_108.Pad[0] = '\0';
  local_108.Pad[1] = '\0';
  local_108.Pad[2] = '\0';
  local_108.Pad[3] = '\0';
  local_108.Pad[4] = '\0';
  local_108.Pad[5] = '\0';
  local_108.Pad[6] = '\0';
  local_108.Pad[7] = '\0';
  (**(code **)(*(longlong *)this + 0x7f0))(this,&local_110,0);
  TVar7.Pad = local_108.Pad;
  uVar15 = (ulonglong)(int)local_108.Pad._0_4_;
  local_114._0_1_ = local_108.Pad[0];
  local_114._1_1_ = local_108.Pad[1];
  local_114._2_1_ = local_108.Pad[2];
  local_114._3_1_ = local_108.Pad[3];
  plVar18 = local_110 + uVar15;
  plVar19 = local_110;
  local_108.Pad = TVar7.Pad;
  local_100 = plVar18;
  do {
    if (local_108.Pad._0_4_ != (int)uVar15) {
      local_178[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (plVar19 == plVar18) {
      if (local_110 != (longlong *)0x0) {
        FMemory::Free(local_110);
      }
      return;
    }
    lVar16 = *plVar19;
    if (lVar16 != 0) {
      uVar9 = param_2->ArrayNum;
      if (uVar9 == param_2->ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_>
                          (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = uVar9 + 1;
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar17 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
      if (FVar4 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
        FVar17 = FVar4;
      }
      lVar20 = (longlong)(int)uVar9 * 0x48;
      DefaultConstructItems<FMaterialInterfacePSOPrecacheParams,int>
                ((void *)(lVar20 + (longlong)FVar17),1);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(longlong)(int)uVar9;
        local_1a0 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(longlong)param_2->ArrayNum;
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
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar17 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
      if (FVar4 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
        FVar17 = FVar4;
      }
      lVar20 = (longlong)FVar17 + lVar20;
      *(longlong *)(lVar20 + 8) = lVar16;
      *(ulonglong *)(lVar20 + 0x10) = uVar3 & 0xffffffffffffffc1 | 0x40001;
      uVar15 = (ulonglong)GMaxRHIShaderPlatform;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsManualVertexFetch == 0) {
        local_d8.ArrayMax = 0x11;
        local_176[2] = '\x03';
        local_176[3] = '\0';
        local_176[4] = '\f';
        local_176[5] = '\0';
        local_d8.ArrayNum = 0;
        local_176[0] = '\0';
        local_176[1] = '\0';
        local_176[6] = '\0';
        local_176[7] = '\0';
        iVar11 = 0;
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_176) &&
           (local_176 < &local_d8.ArrayNum)) {
          local_188 = 8;
          local_1a0 = &local_d8;
          local_190 = 0;
          local_198 = 0x11;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_176;
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
          iVar11 = local_d8.ArrayNum;
          if (local_d8.ArrayNum == local_d8.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                               (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          }
        }
        local_d8.ArrayNum = iVar11 + 1;
        local_176[8] = '\x01';
        local_176[9] = '\0';
        builtin_memcpy(auStack_16c,"\x05\x01\b",4);
        auStack_16c[4] = '\0';
        auStack_16c[5] = '\0';
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[iVar11].Pad =
             CONCAT26(local_176._6_2_,CONCAT42(local_176._2_4_,local_176._0_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_176 + 8)) &&
           (local_176 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_176 + 8);
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_166[0] = '\x01';
        local_166[1] = '\x04';
        lVar16 = (longlong)local_d8.ArrayNum;
        local_166[2] = '\x05';
        local_166[3] = '\x02';
        local_166[4] = '\b';
        local_166[5] = '\0';
        local_166[6] = '\0';
        local_166[7] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(auStack_16c._4_2_,CONCAT42(auStack_16c._0_4_,local_176._8_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_166) &&
           (local_166 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_166;
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_166[8] = '\x02';
        local_166[9] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        builtin_memcpy(auStack_15c,"\b\x03\x04",4);
        auStack_15c[4] = '\0';
        auStack_15c[5] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(local_166._6_2_,CONCAT42(local_166._2_4_,local_166._0_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_166 + 8)) &&
           (local_166 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_166 + 8);
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_156[0] = '\x03';
        local_156[1] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        local_156[2] = '\f';
        local_156[3] = '\x04';
        local_156[4] = '\x04';
        local_156[5] = '\0';
        local_156[6] = '\0';
        local_156[7] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(auStack_15c._4_2_,CONCAT42(auStack_15c._0_4_,local_166._8_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_156) &&
           (local_156 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_156;
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_156[8] = '\x03';
        local_156[9] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        builtin_memcpy(auStack_14c,"\f\x05\x04",4);
        auStack_14c[4] = '\0';
        auStack_14c[5] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(local_156._6_2_,CONCAT42(local_156._2_4_,local_156._0_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_156 + 8)) &&
           (local_156 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_156 + 8);
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_146[0] = '\x03';
        local_146[1] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        local_146[2] = '\f';
        local_146[3] = '\x06';
        local_146[4] = '\x04';
        local_146[5] = '\0';
        local_146[6] = '\0';
        local_146[7] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(auStack_14c._4_2_,CONCAT42(auStack_14c._0_4_,local_156._8_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_146) &&
           (local_146 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_146;
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_146[8] = '\x03';
        local_146[9] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        builtin_memcpy(auStack_13c,"\f\a\x04",4);
        auStack_13c[4] = '\0';
        auStack_13c[5] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(local_146._6_2_,CONCAT42(local_146._2_4_,local_146._0_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_146 + 8)) &&
           (local_146 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_146 + 8);
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_136[0] = '\x03';
        local_136[1] = '\0';
        lVar16 = (longlong)local_d8.ArrayNum;
        local_136[2] = '\f';
        local_136[3] = '\x0f';
        local_136[4] = '\x04';
        local_136[5] = '\0';
        local_136[6] = '\0';
        local_136[7] = '\0';
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(auStack_13c._4_2_,CONCAT42(auStack_13c._0_4_,local_146._8_2_));
        if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_136) &&
           (local_136 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
          local_190 = (longlong)local_d8.ArrayNum;
          local_188 = 8;
          local_1a0 = &local_d8;
          local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_136;
          local_198 = (longlong)local_d8.ArrayMax;
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
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        lVar16 = (longlong)local_d8.ArrayNum;
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
             CONCAT26(local_136._6_2_,CONCAT42(local_136._2_4_,local_136._0_2_));
        bVar8 = IsGPUSkinPassThroughSupported(GMaxRHIShaderPlatform);
        if (bVar8) {
          local_136[8] = '\x04';
          local_136[9] = '\0';
          auStack_12c[0] = '\x04';
          auStack_12c[1] = '\x0e';
          auStack_12c[2] = '\0';
          auStack_12c[3] = '\0';
          auStack_12c[4] = '\0';
          auStack_12c[5] = '\0';
          if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_136 + 8)) &&
             (local_136 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
            local_190 = (longlong)local_d8.ArrayNum;
            local_188 = 8;
            local_1a0 = &local_d8;
            local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_136 + 8);
            local_198 = (longlong)local_d8.ArrayMax;
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
          if (local_d8.ArrayNum == local_d8.ArrayMax) {
            local_d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          }
          local_126[0] = '\x05';
          local_126[1] = '\0';
          lVar16 = (longlong)local_d8.ArrayNum;
          local_126[2] = '\x14';
          local_126[3] = '\r';
          local_126[4] = '\0';
          local_126[5] = '\0';
          local_d8.ArrayNum = local_d8.ArrayNum + 1;
          *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar16].Pad =
               CONCAT26(auStack_12c._4_2_,CONCAT42(auStack_12c._0_4_,local_136._8_2_));
          local_126[6] = '\x01';
          local_126[7] = '\0';
          if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_126) &&
             (local_126 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
            local_190 = (longlong)local_d8.ArrayNum;
            local_188 = 8;
            local_1a0 = &local_d8;
            local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_126;
            local_198 = (longlong)local_d8.ArrayMax;
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
          if (local_d8.ArrayNum == local_d8.ArrayMax) {
            local_d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          }
          uVar13 = CONCAT26(local_126._6_2_,CONCAT42(local_126._2_4_,local_126._0_2_));
          iVar11 = local_d8.ArrayNum;
        }
        else {
          local_126[8] = '\x04';
          local_126[9] = '\0';
          auStack_11c[4] = '\x01';
          auStack_11c[5] = '\0';
          auStack_11c[0] = '\x14';
          auStack_11c[1] = '\r';
          auStack_11c[2] = '\0';
          auStack_11c[3] = '\0';
          if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_126 + 8)) &&
             (local_126 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) {
            local_190 = (longlong)local_d8.ArrayNum;
            local_188 = 8;
            local_1a0 = &local_d8;
            local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_126 + 8);
            local_198 = (longlong)local_d8.ArrayMax;
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
          if (local_d8.ArrayNum == local_d8.ArrayMax) {
            local_d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          }
          uVar13 = CONCAT26(auStack_11c._4_2_,CONCAT42(auStack_11c._0_4_,local_126._8_2_));
          iVar11 = local_d8.ArrayNum;
        }
        local_d8.ArrayNum = iVar11 + 1;
        *(undefined8 *)local_d8.AllocatorInstance.InlineData[iVar11].Pad = uVar13;
        pTVar1 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(lVar20 + 0x18);
        pTVar14 = (TArray<FVertexElement,TFixedAllocator<17>_> *)
                  FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                            ((FPSOPrecacheVertexFactoryData *)(local_f8 + 0x10),
                             &FLocalVertexFactory::StaticType,&local_d8);
        pTVar5 = *(TArray<FVertexElement,TFixedAllocator<17>_> **)(lVar20 + 0x38);
        pTVar12 = pTVar1;
        if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
          pTVar12 = pTVar5;
        }
        if (pTVar12 <= pTVar14) {
          pTVar12 = pTVar1;
          if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
            pTVar12 = pTVar5;
          }
          if (pTVar14 < (TArray<FVertexElement,TFixedAllocator<17>_> *)
                        ((pTVar12->AllocatorInstance).InlineData +
                        (longlong)*(int *)(lVar20 + 0x44) * 2)) {
            local_190 = (longlong)*(int *)(lVar20 + 0x40);
            local_188 = 0x10;
            local_1a0 = pTVar1;
            if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
              local_1a0 = pTVar5;
            }
            local_1a8 = pTVar14;
            local_198 = (longlong)*(int *)(lVar20 + 0x44);
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
        }
        iVar11 = *(int *)(lVar20 + 0x40);
        if (iVar11 == *(int *)(lVar20 + 0x44)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                             (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)pTVar1,
                              (int *)(lVar20 + 0x44));
        }
        *(int *)(lVar20 + 0x40) = iVar11 + 1;
        uVar21 = *(undefined4 *)(pTVar14->AllocatorInstance).InlineData[0].Pad;
        uVar22 = *(undefined4 *)((pTVar14->AllocatorInstance).InlineData[0].Pad + 4);
        uVar23 = *(undefined4 *)(pTVar14->AllocatorInstance).InlineData[1].Pad;
        uVar24 = *(undefined4 *)((pTVar14->AllocatorInstance).InlineData[1].Pad + 4);
      }
      else {
        pTVar5 = *(TArray<FVertexElement,TFixedAllocator<17>_> **)(lVar20 + 0x38);
        local_f8._0_8_ = &FLocalVertexFactory::StaticType;
        pTVar1 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(lVar20 + 0x18);
        local_f8[8] = '\0';
        local_f8[9] = '\0';
        local_f8[10] = '\0';
        local_f8[0xb] = '\0';
        local_f8[0xc] = '\0';
        local_f8[0xd] = '\0';
        local_f8[0xe] = '\0';
        local_f8[0xf] = '\0';
        pTVar12 = pTVar1;
        if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
          pTVar12 = pTVar5;
        }
        if (pTVar12 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) {
          pTVar12 = pTVar1;
          if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
            pTVar12 = pTVar5;
          }
          if (local_f8 <
              (pTVar12->AllocatorInstance).InlineData + (longlong)*(int *)(lVar20 + 0x44) * 2) {
            local_190 = (longlong)*(int *)(lVar20 + 0x40);
            local_188 = 0x10;
            local_1a0 = pTVar1;
            if (pTVar5 != (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
              local_1a0 = pTVar5;
            }
            local_1a8 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8;
            local_198 = (longlong)*(int *)(lVar20 + 0x44);
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
        }
        iVar11 = *(int *)(lVar20 + 0x40);
        if (iVar11 == *(int *)(lVar20 + 0x44)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                             (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)pTVar1,
                              (int *)(lVar20 + 0x44));
        }
        *(int *)(lVar20 + 0x40) = iVar11 + 1;
        uVar21 = local_f8._0_4_;
        uVar22 = local_f8._4_4_;
        uVar23 = local_f8._8_4_;
        uVar24 = local_f8._12_4_;
      }
      lVar16 = lVar20 + 0x18;
      if (*(longlong *)(lVar20 + 0x38) != 0) {
        lVar16 = *(longlong *)(lVar20 + 0x38);
      }
      puVar2 = (uchar *)(lVar16 + (longlong)iVar11 * 0x10);
      *(undefined4 *)puVar2 = uVar21;
      *(undefined4 *)(puVar2 + 4) = uVar22;
      *(undefined4 *)(puVar2 + 8) = uVar23;
      *(undefined4 *)(puVar2 + 0xc) = uVar24;
      plVar18 = local_100;
    }
    uVar15 = (ulonglong)local_114;
    plVar19 = plVar19 + 1;
  } while( true );
}

// CreateSceneProxy @ 1478c2400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UMaterialBillboardComponent::CreateSceneProxy(UMaterialBillboardComponent *this)

{
  FMaterialSpriteSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x630);
  if (pFVar1 != (FMaterialSpriteSceneProxy *)0x0) {
    pFVar1 = FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetMaterial @ 1478d5cc0

UMaterialInterface * __thiscall
UMaterialBillboardComponent::GetMaterial(UMaterialBillboardComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Elements).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Elements).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    return *(UMaterialInterface **)
            ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x28);
  }
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 1478d98f0

UClass * __cdecl UMaterialBillboardComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialBillboardComponent",
               &Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton,
               StaticRegisterNativesUMaterialBillboardComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialBillboardComponent>,
               InternalVTableHelperCtorCaller<UMaterialBillboardComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialBillboardComponent.InnerSingleton;
}

// GetUsedMaterials @ 1478ddf20

void __thiscall
UMaterialBillboardComponent::GetUsedMaterials
          (UMaterialBillboardComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  UMaterialInterface *local_res8;
  
  iVar1 = 0;
  if (0 < (this->Elements).ArrayNum) {
    do {
      local_res8 = (UMaterialInterface *)(**(code **)(*(longlong *)this + 0x690))(this,iVar1);
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,&local_res8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->Elements).ArrayNum);
  }
  return;
}

// PostLoad @ 1478e7730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMaterialBillboardComponent::PostLoad(UMaterialBillboardComponent *this)

{
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x0001478e7749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x378))(this);
  return;
}

// SetElements @ 1478f2030

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
UMaterialBillboardComponent::SetElements
          (UMaterialBillboardComponent *this,
          TArray<FMaterialSpriteElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FMaterialSpriteElement,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FMaterialSpriteElement *pFVar5;
  
  pTVar2 = &this->Elements;
  if (pTVar2 != param_1) {
    iVar3 = (this->Elements).ArrayMax;
    piVar1 = &(this->Elements).ArrayMax;
    pFVar5 = (FMaterialSpriteElement *)(param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->Elements).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FMaterialSpriteElement,FMaterialSpriteElement,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  (**(code **)(*(longlong *)this + 0x378))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetMaterial @ 1478f3c00

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
UMaterialBillboardComponent::SetMaterial
          (UMaterialBillboardComponent *this,int param_1,UMaterialInterface *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Elements).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Elements).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Elements).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(UMaterialInterface **)(pFVar1 + (longlong)param_1 * 0x28) = param_2;
    (**(code **)(*(longlong *)this + 0x378))(this);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesUMaterialBillboardComponent @ 1478f80a0

void __cdecl UMaterialBillboardComponent::StaticRegisterNativesUMaterialBillboardComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMaterialBillboardComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddElement @ 147900390

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
UMaterialBillboardComponent::execAddElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  UObject *local_78;
  UObject *local_70;
  UObject *local_68 [6];
  
  local_68[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar12 = local_res8[0] != 0;
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar8 = local_68[0];
  pUVar7 = local_70;
  pUVar6 = local_78;
  uVar5 = local_res20[0];
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar10 = *(uint *)(param_1 + 0x22);
  if (uVar10 == *(uint *)&param_1[0x22].field_0x4) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)&param_1[0x21].field_0x20,
                        (int *)&param_1[0x22].field_0x4);
  }
  *(uint *)(param_1 + 0x22) = uVar10 + 1;
  uVar11 = 0;
  if ((int)uVar10 < (int)(uVar10 + 1)) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&param_1[0x21].field_0x20 + (longlong)(int)uVar10 * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffffffe;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x42000000;
    *(undefined4 *)(puVar1 + 3) = 0x42000000;
    puVar1[4] = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *puVar1 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  puVar1[1] = pUVar7;
  *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffffffe;
  *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) | (uint)bVar12;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
  *(undefined4 *)(puVar1 + 3) = uVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  puVar1[4] = pUVar6;
  (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetElements @ 14790be50

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
UMaterialBillboardComponent::execSetElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  FMaterialSpriteElement *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  puVar2 = &param_1[0x21].field_0x20;
  pFVar7 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar7 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((ForAnyElementType *)puVar2 != pFVar7) {
    iVar3 = *(int *)&pFVar7[1].Data;
    puVar1 = &param_1[0x22].field_0x4;
    iVar4 = *(int *)puVar1;
    pFVar6 = (FMaterialSpriteElement *)pFVar7->Data;
    *(int *)(param_1 + 0x22) = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar4,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
      ConstructItems<FMaterialSpriteElement,FMaterialSpriteElement,int>
                (*(void **)puVar2,pFVar6,iVar3);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

