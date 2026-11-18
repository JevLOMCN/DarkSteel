// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 30

// StaticClass @ 14ace17c0

UClass * __cdecl UPaperSpriteComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteComponent",
               &Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton,
               StaticRegisterNativesUPaperSpriteComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton;
}

// UPaperSpriteComponent @ 14acea9d0

UPaperSpriteComponent * __thiscall
UPaperSpriteComponent::UPaperSpriteComponent(UPaperSpriteComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->SourceSprite).field0_0x0.DebugPtr = (UPaperSprite *)0x0;
  (this->MaterialOverride_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// UPaperSpriteComponent @ 14aceaa50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPaperSpriteComponent * __thiscall
UPaperSpriteComponent::UPaperSpriteComponent
          (UPaperSpriteComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FLinearColor FVar2;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceSprite).field0_0x0.DebugPtr = (UPaperSprite *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->MaterialOverride_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
  (this->MaterialOverride_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FVar2 = FLinearColor::White;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf7;
  (this->SpriteColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  return this;
}

// ~UPaperSpriteComponent @ 14acebc80

void __thiscall UPaperSpriteComponent::~UPaperSpriteComponent(UPaperSpriteComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AdditionalStatObject @ 14acef050

UObject * __thiscall UPaperSpriteComponent::AdditionalStatObject(UPaperSpriteComponent *this)

{
  return (UObject *)(this->SourceSprite).field0_0x0.DebugPtr;
}

// CalcBounds @ 14acf0130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UPaperSpriteComponent::CalcBounds
          (UPaperSpriteComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  UPaperSprite *this_00;
  UBodySetup *pUVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  TBoxSphereBounds<double,double> *pTVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_258 [32];
  TVector<double>_u_0 local_238;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double>_u_0 local_200;
  undefined1 auStack_1e8 [12];
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TMatrix<double> local_188;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  char local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_258;
  this_00 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (this_00 == (UPaperSprite *)0x0) {
    dVar1 = (param_1->Translation).XY.m128d_f64[1];
    dVar11 = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar11;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->SphereRadius = 0.0;
  }
  else {
    pTVar10 = UPaperSprite::GetRenderBounds
                        (this_00,(TBoxSphereBounds<double,double> *)&local_1c8._s_0);
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_188);
    auVar21 = *(undefined1 (*) [16])&(pTVar10->BoxExtent).field0_0x0;
    dVar18 = auVar21._0_8_;
    auVar20 = *(undefined1 (*) [16])&(pTVar10->Origin).field0_0x0;
    dVar11 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
    dVar1 = (pTVar10->Origin).field0_0x0._s_0.Z;
    dVar3 = auVar20._0_8_;
    auVar12._8_4_ = auVar21._0_4_;
    auVar12._0_8_ = dVar18;
    auVar12._12_4_ = auVar21._4_4_;
    dVar5 = auVar21._8_8_;
    dVar6 = auVar20._8_8_;
    dVar17 = auVar12._8_8_ * local_188.M[0][1];
    auVar13._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar18 * local_188.M[0][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar18 * local_188.M[0][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar13._8_4_ = SUB84(dVar17,0) & _UNK_15061cc88;
    auVar13._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c;
    auVar14._8_4_ = auVar20._0_4_;
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = auVar20._4_4_;
    dStack_220 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][0]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5 * local_188.M[1][0],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar13._0_8_ +
                 (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][0]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar11 * local_188.M[2][0],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_218 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][1]) >> 0x20) &
                                 _UNK_15061cc8c,SUB84(dVar5 * local_188.M[1][1],0) & _UNK_15061cc88)
                + auVar13._8_8_ +
                (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][1]) >> 0x20) &
                                 _UNK_15061cc8c,SUB84(dVar11 * local_188.M[2][1],0) & _UNK_15061cc88
                                );
    uVar8 = dVar6 * local_188.M[1][0] + dVar3 * local_188.M[0][0] + dVar1 * local_188.M[2][0] +
            local_188.M[3][0];
    uVar9 = dVar6 * local_188.M[1][1] + auVar14._8_8_ * local_188.M[0][1] +
            dVar1 * local_188.M[2][1] + local_188.M[3][1];
    local_238._s_0.Z =
         dVar6 * local_188.M[1][2] + dVar3 * local_188.M[0][2] + dVar1 * local_188.M[2][2] +
         local_188.M[3][2];
    dStack_210 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5 * local_188.M[1][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dVar18 * local_188.M[0][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar18 * local_188.M[0][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar11 * local_188.M[2][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auStack_1e8._8_4_ = SUB84(local_218,0);
    auStack_1e8._0_8_ = dStack_220;
    auVar19._0_8_ =
         local_188.M[1][0] * local_188.M[1][0] + local_188.M[0][0] * local_188.M[0][0] +
         local_188.M[2][0] * local_188.M[2][0];
    auVar19._8_8_ =
         local_188.M[1][1] * local_188.M[1][1] + local_188.M[0][1] * local_188.M[0][1] +
         local_188.M[2][1] * local_188.M[2][1];
    dVar11 = local_188.M[1][2] * local_188.M[1][2] + local_188.M[0][2] * local_188.M[0][2] +
             local_188.M[2][2] * local_188.M[2][2];
    auVar20._8_4_ = SUB84(auVar19._8_8_,0);
    auVar20._0_8_ = auVar19._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
    auVar15._8_8_ = auVar19._8_8_;
    auVar15._0_8_ = auVar20._8_8_;
    auVar20 = maxpd(auVar19,auVar15);
    pUVar2 = (((this->SourceSprite).field0_0x0.DebugPtr)->BodySetup).field0_0x0.DebugPtr;
    auVar21._8_4_ = SUB84(dVar11,0);
    auVar21._0_8_ = dVar11;
    auVar21._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar21 = maxpd(auVar20,auVar21);
    local_208 = SQRT(dStack_210 * dStack_210 + dStack_220 * dStack_220 + local_218 * local_218);
    dVar11 = SQRT(auVar21._0_8_) * pTVar10->SphereRadius;
    local_238._8_4_ = (int)uVar9;
    local_238._0_8_ = uVar8;
    local_238._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
    uStack_1dc = (int)((ulonglong)local_218 >> 0x20);
    if (dVar11 <= local_208) {
      local_208 = dVar11;
    }
    if (pUVar2 != (UBodySetup *)0x0) {
      local_200._s_0.Z = local_238._s_0.Z;
      local_1d8 = dStack_210;
      local_1d0 = local_208;
      FKAggregateGeom::CalcAABB(&pUVar2->AggGeom,(TBox<double> *)&local_108._s_0,param_1);
      if (local_d8 != '\0') {
        local_e8 = local_e8 - local_108._s_0.Y;
        local_f0 = local_f0 - local_108._s_0.X;
        local_e0 = local_e0 - local_108._s_0.Z;
        local_1d8 = local_e0 * __real_3fe0000000000000;
        local_200._s_0.Y = local_e8 * __real_3fe0000000000000 + local_108._s_0.Y;
        local_200._s_0.X = local_f0 * __real_3fe0000000000000 + local_108._s_0.X;
        stack0xfffffffffffffe20 = local_e8 * __real_3fe0000000000000;
        auStack_1e8._0_8_ = local_f0 * __real_3fe0000000000000;
        auVar16._0_8_ = local_1d8 + local_108._s_0.Z;
        auVar16._8_8_ = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (local_e8 * local_e8 + local_f0 * local_f0 + local_e0 * local_e0) *
                       __real_3fd0000000000000;
        auVar21 = sqrtpd(auVar16,auVar4);
        local_1d0 = auVar21._0_8_;
        local_200._s_0.Z = auVar16._0_8_;
        UE::Math::TBoxSphereBounds<double,double>::operator+
                  ((TBoxSphereBounds<double,double> *)&local_238._s_0,
                   (TBoxSphereBounds<double,double> *)&local_1c8._s_0,
                   (TBoxSphereBounds<double,double> *)&local_200._s_0);
        local_238._s_0.Z = local_1c8._s_0.Z;
        dStack_220 = dStack_1b0;
        local_208 = local_198;
        local_218 = local_1a8;
        dStack_210 = dStack_1a0;
        uVar8 = local_1c8._s_0.X;
        uVar9 = local_1c8._s_0.Y;
      }
    }
    dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4);
    auVar7._8_4_ = (int)uVar9;
    auVar7._0_8_ = uVar8;
    auVar7._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar7;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_238._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_220 * dVar11;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_218 * dVar11;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_210 * dVar11;
    __return_storage_ptr__->SphereRadius = local_208 * dVar11;
  }
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14acf47e0

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

FPrimitiveSceneProxy * __thiscall
UPaperSpriteComponent::CreateSceneProxy(UPaperSpriteComponent *this)

{
  int iVar1;
  UPaperSprite *pUVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FPaperRenderSceneProxy_SpriteBase *this_00;
  undefined8 uVar6;
  code **ppcVar7;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar8;
  FPrimitiveSceneProxy *pFVar9;
  ForElementType<UTexture_*> _Dst;
  ForElementType<UE::Math::TVector4<double>_> _Dst_00;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  FPaperRenderSceneProxy_SpriteBase *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_3a8 [32];
  float local_364;
  float fStack_360;
  float fStack_35c;
  code *local_348 [2];
  code *local_338 [3];
  code **local_320;
  undefined1 local_318 [40];
  code **local_2f0;
  byte local_2e8;
  TVector<double>_u_0 local_2d8;
  UObject *local_2c0;
  undefined1 local_2b8 [32];
  undefined1 *local_298;
  int local_290;
  undefined4 local_28c;
  FColor_u_0 local_288;
  undefined1 local_278 [192];
  undefined1 *local_1b8;
  int local_1a8;
  undefined4 local_1a4;
  FPaperRenderSceneProxy_SpriteBase *local_198;
  TVector<double>_u_0 local_188;
  UObject *local_170;
  ForElementType<UTexture_*> local_168;
  int local_140;
  int local_13c;
  undefined4 local_138;
  ForElementType<UE::Math::TVector4<double>_> local_128;
  int local_58;
  int local_54 [3];
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  this_00 = ::operator_new(0x670);
  fVar4 = __real_3f800000;
  pFVar13 = (FPaperRenderSceneProxy_SpriteBase *)0x0;
  if (this_00 == (FPaperRenderSceneProxy_SpriteBase *)0x0) goto LAB_14acf48d1;
  FPaperRenderSceneProxy_SpriteBase::FPaperRenderSceneProxy_SpriteBase
            (this_00,(UMeshComponent *)this);
  *(undefined ***)this_00 = &___7FPaperSpriteSceneProxy__6B_;
  uVar6 = (**(code **)(this->_padding_ + 0x800))(this);
  *(undefined8 *)&this_00->field_0x668 = uVar6;
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    local_364 = FLinearColor::sRGBToLinearTable[0];
    fStack_360 = FLinearColor::sRGBToLinearTable[0xff];
LAB_14acf48b5:
    fStack_35c = FLinearColor::sRGBToLinearTable[0xff];
  }
  else {
    if ((this->_padding_ & 1) == 0) {
      local_364 = FLinearColor::sRGBToLinearTable[0xff];
      fStack_360 = FLinearColor::sRGBToLinearTable[0];
      goto LAB_14acf48b5;
    }
    local_364 = FLinearColor::sRGBToLinearTable[0];
    fStack_35c = FLinearColor::sRGBToLinearTable[0x80];
    fStack_360 = FLinearColor::sRGBToLinearTable[0xff];
  }
  *(ulonglong *)&this_00->field_0x30 = CONCAT44(fStack_360,local_364);
  *(ulonglong *)&this_00->field_0x38 = CONCAT44(0x3f800000,fStack_35c);
  pFVar13 = this_00;
LAB_14acf48d1:
  pUVar2 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar2 != (UPaperSprite *)0x0) {
    local_2d8._s_0.X = 0.0;
    local_2d8._s_0.Y = 0.0;
    local_2d8._s_0.Z = 0.0;
    local_2c0 = (UObject *)0x0;
    local_298 = (undefined1 *)0x0;
    local_290 = 0;
    local_28c = 4;
    local_288 = FColor::White.field0_0x0;
    local_1b8 = (undefined1 *)0x0;
    local_1a8 = 0;
    local_1a4 = 6;
    FSpriteDrawCallRecord::BuildFromSprite((FSpriteDrawCallRecord *)&local_2d8._s_0,pUVar2);
    fVar14 = (this->SpriteColor).field0_0x0._s_0.B;
    fVar17 = (this->SpriteColor).field0_0x0._s_0.R;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (fVar4 <= fVar14) {
      fVar14 = fVar4;
    }
    if (fVar4 <= fVar17) {
      fVar17 = fVar4;
    }
    fVar15 = (this->SpriteColor).field0_0x0._s_0.G;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (fVar4 <= fVar15) {
      fVar15 = fVar4;
    }
    fVar16 = (this->SpriteColor).field0_0x0._s_0.A;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (fVar4 <= fVar16) {
      fVar16 = fVar4;
    }
    local_288 = (FColor_u_0)
                CONCAT13((char)(int)(fVar16 * __real_437f0000 + __real_3f000000),
                         CONCAT12((char)(int)(fVar17 * __real_437f0000 + __real_3f000000),
                                  CONCAT11((char)(int)(fVar15 * __real_437f0000 + __real_3f000000),
                                           (char)(int)(fVar14 * __real_437f0000 + __real_3f000000)))
                        );
    iVar1 = ((this->SourceSprite).field0_0x0.DebugPtr)->AlternateMaterialSplitIndex;
    local_188._s_0.X = local_2d8._s_0.X;
    local_188._s_0.Y = local_2d8._s_0.Y;
    local_188._s_0.Z = local_2d8._s_0.Z;
    local_170 = local_2c0;
    local_198 = pFVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_2c0);
    }
    lVar10 = (longlong)local_290;
    local_168.SecondaryData = (ForElementType<UTexture_*>)0x0;
    puVar12 = local_2b8;
    if (local_298 != (undefined1 *)0x0) {
      puVar12 = local_298;
    }
    local_140 = local_290;
    if (local_290 == 0) {
      local_13c = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                (8,8,local_290,0,&local_168,local_290,&local_13c);
      _Dst = (ForElementType<UTexture_*>)&local_168;
      if (local_168.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        _Dst = local_168.SecondaryData;
      }
      memcpy((void *)_Dst,puVar12,lVar10 << 3);
    }
    lVar10 = (longlong)local_1a8;
    local_138 = local_288;
    local_128.SecondaryData = (ForElementType<UE::Math::TVector4<double>_>)0x0;
    local_58 = local_1a8;
    puVar12 = local_278;
    if (local_1b8 != (undefined1 *)0x0) {
      puVar12 = local_1b8;
    }
    if (local_1a8 == 0) {
      local_54[0] = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                (0x20,0x10,local_1a8,0,&local_128,local_1a8,local_54);
      _Dst_00 = (ForElementType<UE::Math::TVector4<double>_>)&local_128;
      if (local_128.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        _Dst_00 = local_128.SecondaryData;
      }
      memcpy((void *)_Dst_00,puVar12,lVar10 << 5);
    }
    local_348[0] = (code *)0x0;
    local_48 = iVar1;
    ppcVar7 = FMemory::Malloc(0x170,0x10);
    *ppcVar7 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar7[2] = (code *)local_198;
    local_320 = ppcVar7;
    FSpriteDrawCallRecord::FSpriteDrawCallRecord
              ((FSpriteDrawCallRecord *)(ppcVar7 + 4),(FSpriteDrawCallRecord *)&local_188._s_0);
    *(int *)(ppcVar7 + 0x2c) = local_48;
    if (ppcVar7 + 2 != (code **)0x0) {
      local_348[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPaperSpriteComponent::CreateSceneProxy_::__l5::TSTR_FCreatePaperSpriteProxy_SetSprite81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_348);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_318._0_8_ = local_348[0];
      local_2f0 = local_320;
      local_320 = (code **)0x0;
      local_318._16_8_ = local_338[0];
      local_318._24_8_ = local_338[1];
      local_318._32_8_ = local_338[2];
      local_348[0] = (code *)0x0;
      local_2e8 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`UPaperSpriteComponent::CreateSceneProxy'::__l5::TSTR_FCreatePaperSpriteProxy_SetSprite81>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_318,pFVar8);
      uVar11 = (ulonglong)local_2e8;
      if ((2 < uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FPrimitiveSceneProxy *)(*pcVar3)();
        return pFVar9;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_318._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_318 + 0x10);
          if (local_2f0 != (code **)0x0) {
            ppcVar7 = local_2f0;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_318);
      }
    }
    if (local_348[0] != (code *)0x0) {
      ppcVar7 = local_348 + 2;
      if (local_320 != (code **)0x0) {
        ppcVar7 = local_320;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    if (local_128.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      FMemory::Free((void *)local_128.SecondaryData);
    }
    if (local_168.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FMemory::Free((void *)local_168.SecondaryData);
    }
    if (local_1b8 != (undefined1 *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_298 != (undefined1 *)0x0) {
      FMemory::Free(local_298);
    }
  }
  return (FPrimitiveSceneProxy *)pFVar13;
}

// DoesSocketExist @ 14acf5d40

bool __thiscall UPaperSpriteComponent::DoesSocketExist(UPaperSpriteComponent *this,FName param_1)

{
  UPaperSprite *this_00;
  FPaperSpriteSocket *pFVar1;
  
  this_00 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (this_00 != (UPaperSprite *)0x0) {
    pFVar1 = UPaperSprite::FindSocket(this_00,param_1);
    return pFVar1 != (FPaperSpriteSocket *)0x0;
  }
  return false;
}

// GetBodySetup @ 14acf9470

UBodySetup * __thiscall UPaperSpriteComponent::GetBodySetup(UPaperSpriteComponent *this)

{
  UPaperSprite *pUVar1;
  UBodySetup *pUVar2;
  
  pUVar1 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperSprite *)0x0) {
    pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return pUVar2;
  }
  return (UBodySetup *)0x0;
}

// GetMaterial @ 14acfb4e0

UMaterialInterface * __thiscall
UPaperSpriteComponent::GetMaterial(UPaperSpriteComponent *this,int param_1)

{
  UPaperSprite *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(this->_padding_ + (longlong)param_1 * 8);
    }
  }
  pUVar1 = (this->SourceSprite).field0_0x0.DebugPtr;
  pUVar5 = (UMaterialInterface *)0x0;
  if (pUVar1 != (UPaperSprite *)0x0) {
    if (param_1 == 0) {
      pUVar5 = (pUVar1->DefaultMaterial).field0_0x0.DebugPtr;
    }
    else {
      pUVar5 = (UMaterialInterface *)0x0;
      if (param_1 == 1) {
        pUVar5 = (pUVar1->AlternateMaterial).field0_0x0.DebugPtr;
      }
    }
  }
  return pUVar5;
}

// GetNumMaterials @ 14acfc6c0

int __thiscall UPaperSpriteComponent::GetNumMaterials(UPaperSpriteComponent *this)

{
  int iVar1;
  UPaperSprite *pUVar2;
  int iVar3;
  
  pUVar2 = (this->SourceSprite).field0_0x0.DebugPtr;
  iVar1 = (int)this->_padding_;
  if (pUVar2 != (UPaperSprite *)0x0) {
    iVar3 = (pUVar2->AlternateMaterialSplitIndex != -1) + 1;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    return iVar3;
  }
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// GetPrivateStaticClass @ 14acfd450

UClass * __cdecl UPaperSpriteComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteComponent",
               &Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton,
               StaticRegisterNativesUPaperSpriteComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton;
}

// GetSocketTransform @ 14acfe7e0

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

TTransform<double> * __thiscall
UPaperSpriteComponent::GetSocketTransform
          (UPaperSpriteComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  UPaperSprite *this_00;
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  FPaperSpriteSocket *pFVar17;
  TTransform<double> *pTVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  double local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = (this->SourceSprite).field0_0x0.DebugPtr;
  if ((this_00 != (UPaperSprite *)0x0) &&
     (pFVar17 = UPaperSprite::FindSocket(this_00,param_1), pFVar17 != (FPaperSpriteSocket *)0x0)) {
    local_118.Rotation.XY.m128d_f64[0] = (pFVar17->LocalTransform).Rotation.XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] = (pFVar17->LocalTransform).Rotation.XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] = (pFVar17->LocalTransform).Rotation.ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] = (pFVar17->LocalTransform).Rotation.ZW.m128d_f64[1];
    local_118.Scale3D.XY.m128d_f64[0] = (pFVar17->LocalTransform).Scale3D.XY.m128d_f64[0];
    local_118.Scale3D.XY.m128d_f64[1] = (pFVar17->LocalTransform).Scale3D.XY.m128d_f64[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (pFVar17->LocalTransform).Scale3D.ZW.m128d_f64[0];
    local_118.Scale3D.ZW.m128d_f64[1] = (pFVar17->LocalTransform).Scale3D.ZW.m128d_f64[1];
    local_128 = (double)(__real_3f800000 /
                        ((this->SourceSprite).field0_0x0.DebugPtr)->PixelsPerUnrealUnit);
    dVar12 = (pFVar17->LocalTransform).Translation.XY.m128d_f64[0] * local_128;
    dVar13 = (pFVar17->LocalTransform).Translation.XY.m128d_f64[1] * local_128;
    uVar19 = SUB84(dVar13,0);
    uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar13 = (pFVar17->LocalTransform).Translation.ZW.m128d_f64[0] * local_128;
    dVar15 = (pFVar17->LocalTransform).Translation.ZW.m128d_f64[1] * 0.0;
    uVar21 = SUB84(dVar15,0);
    uVar22 = (undefined4)((ulonglong)dVar15 >> 0x20);
    local_118.Translation.XY.m128d_f64[1]._0_4_ = uVar19;
    local_118.Translation.XY.m128d_f64[0] = dVar12;
    local_118.Translation.XY.m128d_f64[1]._4_4_ = uVar20;
    local_118.Translation.ZW.m128d_f64[1]._0_4_ = uVar21;
    local_118.Translation.ZW.m128d_f64[0] = dVar13;
    local_118.Translation.ZW.m128d_f64[1]._4_4_ = uVar22;
    local_138._8_4_ = SUB84(local_128,0);
    local_138._0_8_ = local_128;
    local_138._12_4_ = (int)((ulonglong)local_128 >> 0x20);
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    if (param_2 == RTS_World) {
      dVar12 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      auVar5._8_4_ = SUB84(dVar12,0);
      auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
      dVar12 = (double)fVar4;
      auVar6._8_4_ = SUB84(dVar12,0);
      auVar6._0_8_ = (double)fVar3;
      auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
      auVar8._8_4_ = SUB84((double)fVar4,0);
      auVar8._0_8_ = (double)fVar3;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
      auVar10._8_4_ = SUB84((double)fVar4,0);
      auVar10._0_8_ = (double)fVar3;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,&local_118,(TTransform<double> *)&this->_padding_);
      return __return_storage_ptr__;
    }
    if (param_2 == RTS_Actor) {
      lVar1 = this->_padding_;
      if (lVar1 != 0) {
        dVar12 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_b8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
        local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)fVar4;
        local_b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
        local_b8.Rotation.ZW.m128d_f64[0] = (double)fVar3;
        local_b8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_b8,&local_118,(TTransform<double> *)&this->_padding_);
        lVar1 = *(longlong *)(lVar1 + 0x1b8);
        if (lVar1 != 0) {
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&local_b8,__return_storage_ptr__,(TTransform<double> *)(lVar1 + 0x1f0));
          return __return_storage_ptr__;
        }
        UE::Math::TTransform<double>::GetRelativeTransform
                  (&local_b8,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
        return __return_storage_ptr__;
      }
    }
    else {
      if ((param_2 == RTS_Component) || (param_2 == RTS_ParentBoneSpace)) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
        auVar11._8_4_ = uVar19;
        auVar11._0_8_ = dVar12;
        auVar11._12_4_ = uVar20;
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
        auVar14._8_4_ = uVar21;
        auVar14._0_8_ = dVar13;
        auVar14._12_4_ = uVar22;
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar14;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
        return __return_storage_ptr__;
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSpriteComponent.cpp"
                          ,0xbb,L"");
      if (bVar16) {
        pcVar2 = (code *)swi(3);
        pTVar18 = (TTransform<double> *)(*pcVar2)();
        return pTVar18;
      }
    }
  }
  USceneComponent::GetSocketTransform
            ((USceneComponent *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetSprite @ 14acfea80

UPaperSprite * __thiscall UPaperSpriteComponent::GetSprite(UPaperSpriteComponent *this)

{
  return (this->SourceSprite).field0_0x0.DebugPtr;
}

// GetStreamingRenderAssetInfo @ 14acfed20

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
UPaperSpriteComponent::GetStreamingRenderAssetInfo
          (UPaperSpriteComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  UMaterialInterface *pUStack_58;
  UMaterialInterface **ppUStack_50;
  undefined8 uStack_48;
  FPrimitiveMaterialInfo FStack_40;
  
  pTVar2 = CVarStreamingUseNewMetrics.Ref;
  if ((GEnableAutoDetectNoStreamableTextures == 0) || ((this->_padding_ & 0x200000000) == 0)) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) &&
       ((bVar3 = IsInGameThread(), !bVar3 &&
        (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar3)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar2->ShadowedValue[0] != 0) {
      FStreamingTextureLevelContext::BindBuildData
                (param_1,(TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0);
      ppUStack_50 = (UMaterialInterface **)0x0;
      uStack_48 = 0;
      (**(code **)(this->_padding_ + 0x7f0))(this,&ppUStack_50,0);
      if ((int)uStack_48 != 0) {
        FStack_40.UVChannelData = &UVChannelData;
        FStack_40.Material = (UMaterialInterface *)0x0;
        FStack_40.PackedRelativeBox = 0xffff0000;
        iVar6 = (int)uStack_48;
        do {
          if (iVar6 < 1) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar6 = (int)uStack_48;
          }
          pUStack_58 = *ppUStack_50;
          if (pUStack_58 != (UMaterialInterface *)0x0) {
            FStack_40.Material = pUStack_58;
            FStreamingTextureLevelContext::ProcessMaterial
                      (param_1,(TBoxSphereBounds<double,double> *)&this->_padding_,&FStack_40,
                       (float)(double)this->_padding_,param_2,
                       (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 2 & 1),
                       (UPrimitiveComponent *)this);
            iVar6 = (int)uStack_48;
          }
          if ((ppUStack_50 <= &pUStack_58) && (&pUStack_58 < ppUStack_50 + uStack_48._4_4_)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar6 = (int)uStack_48;
          }
          uVar8 = 0;
          if (0 < iVar6) {
            lVar9 = 0;
            do {
              uVar7 = 0;
              if ((int)uVar8 < iVar6) {
                uVar7 = ~uVar8 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar6 = (int)uStack_48;
              }
              uVar7 = uVar8;
              if (*(UMaterialInterface **)(lVar9 + (longlong)ppUStack_50) == pUStack_58) {
                lVar9 = lVar9 + -8;
                uVar7 = uVar8 - 1;
                uVar4 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar4 = ~uVar8 >> 0x1f;
                }
                if (uVar4 == 0) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar6 = (int)uStack_48;
                }
                iVar5 = (iVar6 - uVar8) + -1;
                if (1 < iVar5) {
                  iVar5 = 1;
                }
                if (iVar5 != 0) {
                  memmove(ppUStack_50 + (int)uVar8,ppUStack_50 + (iVar6 - iVar5),
                          (longlong)iVar5 << 3);
                  iVar6 = (int)uStack_48;
                }
                iVar6 = iVar6 + -1;
                uStack_48 = CONCAT44(uStack_48._4_4_,iVar6);
              }
              uVar8 = uVar7 + 1;
              lVar9 = lVar9 + 8;
            } while ((int)uVar8 < iVar6);
          }
        } while (iVar6 != 0);
      }
      if (ppUStack_50 != (UMaterialInterface **)0x0) {
        FMemory::Free(ppUStack_50);
      }
    }
  }
  return;
}

// GetUsedMaterials @ 14ad01df0

void __thiscall
UPaperSpriteComponent::GetUsedMaterials
          (UPaperSpriteComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined7 in_register_00000081;
  undefined1 auStackX_8 [8];
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> TStack_30;
  
  iVar7 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0x810))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (0 < iVar6) {
    do {
      lStack_40 = (**(code **)(this->_padding_ + 0x690))(this,iVar7);
      if (lStack_40 != 0) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&lStack_40) &&
            ((FScriptContainerElement *)&lStack_40 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = lStack_40;
      }
      iVar7 = iVar7 + 1;
      iVar6 = (**(code **)(this->_padding_ + 0x810))(this);
    } while (iVar7 < iVar6);
  }
  TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_30.ArrayNum = 0;
  TStack_30.ArrayMax = 0;
  FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<UMeshComponent>
            ((UMeshComponent *)this,&TStack_30);
  iVar6 = TStack_30.ArrayNum;
  pFVar1 = TStack_30.AllocatorInstance.Data + (longlong)TStack_30.ArrayNum * 8;
  FVar8.Data = TStack_30.AllocatorInstance.Data;
  while( true ) {
    if (TStack_30.ArrayNum != iVar6) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (FVar8.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar8.Data;
    if (lVar2 != 0) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      lStack_38 = lVar2;
      if (((pFVar3 <= (FScriptContainerElement *)&lStack_38) &&
          ((FScriptContainerElement *)&lStack_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
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
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = lStack_38;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  lStack_48 = this->_padding_;
  if ((lStack_48 != 0) || (lStack_48 = (**(code **)(this->_padding_ + 0xb18))(this), lStack_48 != 0)
     ) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&lStack_48) &&
       (((FScriptContainerElement *)&lStack_48 < pFVar1 + (longlong)param_1->ArrayMax * 8 &&
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
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = lStack_48;
  }
  if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_30.AllocatorInstance.Data);
  }
  return;
}

// GetUsedTextures @ 14ad020f0

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

void __thiscall
UPaperSpriteComponent::GetUsedTextures
          (UPaperSpriteComponent *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2)

{
  ForElementType<UTexture_*> FVar1;
  int iVar2;
  UPaperSprite *pUVar3;
  FScriptContainerElement *_Src;
  ForElementType<UTexture_*> FVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [8];
  TObjectPtr<UTexture2D>_u_0 local_70;
  ForElementType<UTexture_*> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pUVar3 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar3 != (UPaperSprite *)0x0) {
    local_70 = (TObjectPtr<UTexture2D>_u_0)(pUVar3->BakedSourceTexture).field0_0x0.DebugPtr;
    if (local_70.DebugPtr != (UTexture2D *)0x0) {
      TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                (param_1,(UTexture **)&local_70.DebugPtr);
    }
    pUVar3 = (this->SourceSprite).field0_0x0.DebugPtr;
    local_68.SecondaryData = (ForElementType<UTexture_*>)0x0;
    local_3c = 4;
    iVar2 = (pUVar3->AdditionalSourceTextures).ArrayNum;
    _Src = (pUVar3->AdditionalSourceTextures).AllocatorInstance.Data;
    local_40 = iVar2;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
              (8,8,iVar2,4,&local_68,iVar2,&local_3c);
    FVar4 = (ForElementType<UTexture_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FVar4 = local_68.SecondaryData;
    }
    if (iVar2 != 0) {
      memcpy((void *)FVar4,_Src,(longlong)iVar2 << 3);
    }
    iVar2 = local_40;
    FVar4 = (ForElementType<UTexture_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FVar4 = local_68.SecondaryData;
    }
    FVar1 = (ForElementType<UTexture_*>)((longlong)FVar4 + (longlong)local_40 * 8);
    while( true ) {
      if (local_40 != iVar2) {
        `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (FVar4 == FVar1) break;
      local_70 = (TObjectPtr<UTexture2D>_u_0)*(TObjectPtr<UTexture2D>_u_0 *)FVar4;
      if (local_70.DebugPtr != (UTexture2D *)0x0) {
        TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                  (param_1,(UTexture **)&local_70.DebugPtr);
      }
      FVar4 = (ForElementType<UTexture_*>)((longlong)FVar4 + 8);
    }
    if (local_68.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
  }
  UPrimitiveComponent::GetUsedTextures((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// GetWireframeColor @ 14ad02530

FLinearColor * __thiscall
UPaperSpriteComponent::GetWireframeColor
          (UPaperSpriteComponent *this,FLinearColor *__return_storage_ptr__)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = FLinearColor::sRGBToLinearTable[0xff];
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[0];
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  }
  lVar1 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  fVar3 = FLinearColor::sRGBToLinearTable[0xff];
  fVar2 = FLinearColor::sRGBToLinearTable[0];
  if ((lVar1 & 1) != 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[0];
    (__return_storage_ptr__->field0_0x0)._s_0.B = FLinearColor::sRGBToLinearTable[0x80];
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  return __return_storage_ptr__;
}

// HasAnySockets @ 14ad02700

bool __thiscall UPaperSpriteComponent::HasAnySockets(UPaperSpriteComponent *this)

{
  UPaperSprite *pUVar1;
  
  pUVar1 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperSprite *)0x0) {
    return 0 < (pUVar1->Sockets).ArrayNum;
  }
  return false;
}

// PostLoad @ 14ad05910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperSpriteComponent::PostLoad(UPaperSpriteComponent *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  FGuid local_18;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  local_18 = FPaperCustomVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 8) {
    if ((this->MaterialOverride_DEPRECATED).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
      (**(code **)(this->_padding_ + 0x6b8))(this,0);
    }
  }
  else if (0x10 < iVar2) {
    return;
  }
  FLinearColor::ToFColorSRGB(&this->SpriteColor);
  fVar1 = __real_3b808081;
  fVar4 = (float)local_res11 * __real_3b808081;
  fVar3 = (float)local_res10 * __real_3b808081;
  (this->SpriteColor).field0_0x0._s_0.R = (float)local_res12 * __real_3b808081;
  (this->SpriteColor).field0_0x0._s_0.G = fVar4;
  (this->SpriteColor).field0_0x0._s_0.B = fVar3;
  (this->SpriteColor).field0_0x0._s_0.A = (float)local_res13 * fVar1;
  return;
}

// QuerySupportedSockets @ 14ad06480

void __thiscall
UPaperSpriteComponent::QuerySupportedSockets
          (UPaperSpriteComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UPaperSprite *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  pUVar3 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar3 == (UPaperSprite *)0x0) {
    return;
  }
  uVar8 = 0;
  if (0 < (pUVar3->Sockets).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (pUVar3->Sockets).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = param_1->ArrayNum;
      pFVar2 = (pUVar3->Sockets).AllocatorInstance.Data;
      if (uVar6 == param_1->ArrayMax) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar6 + 1;
      uVar7 = 0;
      if ((int)uVar6 < (int)(uVar6 + 1)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0xc;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + lVar9 + 0x60);
        pFVar1[8] = (FScriptContainerElement)0x2;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x70;
    } while ((int)uVar8 < (pUVar3->Sockets).ArrayNum);
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 14ad09450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPaperSpriteComponent::SendRenderDynamicData_Concurrent(UPaperSpriteComponent *this)

{
  UPaperSprite *pUVar1;
  code *pcVar2;
  bool bVar3;
  code **ppcVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  ForElementType<UTexture_*> _Dst;
  ForElementType<UE::Math::TVector4<double>_> _Dst_00;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_388 [32];
  code *local_338 [2];
  code *local_328 [3];
  code **local_310;
  undefined1 local_308 [40];
  code **local_2e0;
  byte local_2d8;
  TVector<double>_u_0 local_2c8;
  UObject *local_2b0;
  undefined1 local_2a8 [32];
  undefined1 *local_288;
  int local_280;
  undefined4 local_27c;
  FColor_u_0 local_278;
  undefined1 local_268 [192];
  undefined1 *local_1a8;
  int local_198;
  undefined4 local_194;
  code *local_188;
  TVector<double>_u_0 local_178;
  UObject *local_160;
  ForElementType<UTexture_*> local_158;
  int local_130;
  int local_12c;
  undefined4 local_128;
  ForElementType<UE::Math::TVector4<double>_> local_118;
  int local_48;
  int local_44 [3];
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if (this->_padding_ != 0) {
    local_2b0 = (UObject *)0x0;
    local_288 = (undefined1 *)0x0;
    local_280 = 0;
    local_1a8 = (undefined1 *)0x0;
    local_198 = 0;
    local_2c8._s_0.Z = 0.0;
    local_2c8._s_0.X = 0.0;
    local_2c8._s_0.Y = 0.0;
    local_27c = 4;
    local_278 = FColor::White.field0_0x0;
    local_194 = 6;
    FSpriteDrawCallRecord::BuildFromSprite
              ((FSpriteDrawCallRecord *)&local_2c8._s_0,(this->SourceSprite).field0_0x0.DebugPtr);
    fVar10 = (this->SpriteColor).field0_0x0._s_0.B;
    fVar13 = (this->SpriteColor).field0_0x0._s_0.R;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    pUVar1 = (this->SourceSprite).field0_0x0.DebugPtr;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    fVar11 = (this->SpriteColor).field0_0x0._s_0.G;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    fVar12 = (this->SpriteColor).field0_0x0._s_0.A;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    local_278 = (FColor_u_0)
                CONCAT13((char)(int)(fVar12 * __real_437f0000 + __real_3f000000),
                         CONCAT12((char)(int)(fVar13 * __real_437f0000 + __real_3f000000),
                                  CONCAT11((char)(int)(fVar11 * __real_437f0000 + __real_3f000000),
                                           (char)(int)(fVar10 * __real_437f0000 + __real_3f000000)))
                        );
    if (pUVar1 == (UPaperSprite *)0x0) {
      iVar8 = -1;
    }
    else {
      iVar8 = pUVar1->AlternateMaterialSplitIndex;
    }
    local_188 = (code *)this->_padding_;
    local_178._s_0.X = local_2c8._s_0.X;
    local_178._s_0.Y = local_2c8._s_0.Y;
    local_178._s_0.Z = local_2c8._s_0.Z;
    local_160 = local_2b0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_2b0);
    }
    lVar6 = (longlong)local_280;
    local_158.SecondaryData = (ForElementType<UTexture_*>)0x0;
    puVar9 = local_2a8;
    if (local_288 != (undefined1 *)0x0) {
      puVar9 = local_288;
    }
    local_130 = local_280;
    if (local_280 == 0) {
      local_12c = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                (8,8,local_280,0,&local_158,local_280,&local_12c);
      _Dst = (ForElementType<UTexture_*>)&local_158;
      if (local_158.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        _Dst = local_158.SecondaryData;
      }
      memcpy((void *)_Dst,puVar9,lVar6 << 3);
    }
    lVar6 = (longlong)local_198;
    local_128 = local_278;
    local_118.SecondaryData = (ForElementType<UE::Math::TVector4<double>_>)0x0;
    local_48 = local_198;
    puVar9 = local_268;
    if (local_1a8 != (undefined1 *)0x0) {
      puVar9 = local_1a8;
    }
    if (local_198 == 0) {
      local_44[0] = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                (0x20,0x10,local_198,0,&local_118,local_198,local_44);
      _Dst_00 = (ForElementType<UE::Math::TVector4<double>_>)&local_118;
      if (local_118.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        _Dst_00 = local_118.SecondaryData;
      }
      memcpy((void *)_Dst_00,puVar9,lVar6 << 5);
    }
    local_338[0] = (code *)0x0;
    local_38 = iVar8;
    ppcVar4 = FMemory::Malloc(0x170,0x10);
    *ppcVar4 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar4[2] = local_188;
    local_310 = ppcVar4;
    FSpriteDrawCallRecord::FSpriteDrawCallRecord
              ((FSpriteDrawCallRecord *)(ppcVar4 + 4),(FSpriteDrawCallRecord *)&local_178._s_0);
    *(int *)(ppcVar4 + 0x2c) = local_38;
    if (ppcVar4 + 2 != (code **)0x0) {
      local_338[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPaperSpriteComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendPaperSpriteComponentDynamicData129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_338);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_308._0_8_ = local_338[0];
      local_2e0 = local_310;
      local_310 = (code **)0x0;
      local_308._16_8_ = local_328[0];
      local_308._24_8_ = local_328[1];
      local_308._32_8_ = local_328[2];
      local_338[0] = (code *)0x0;
      local_2d8 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperSpriteComponentDynamicData129>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_308,pFVar5);
      uVar7 = (ulonglong)local_2d8;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_308._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_308 + 0x10);
          if (local_2e0 != (code **)0x0) {
            ppcVar4 = local_2e0;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_308);
      }
    }
    if (local_338[0] != (code *)0x0) {
      ppcVar4 = local_338 + 2;
      if (local_310 != (code **)0x0) {
        ppcVar4 = local_310;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
    if (local_118.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      FMemory::Free((void *)local_118.SecondaryData);
    }
    if (local_158.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FMemory::Free((void *)local_158.SecondaryData);
    }
    if (local_1a8 != (undefined1 *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_288 != (undefined1 *)0x0) {
      FMemory::Free(local_288);
    }
  }
  return;
}

// Serialize @ 14ad09b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperSpriteComponent::Serialize(UPaperSpriteComponent *this,FArchive *param_1)

{
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad09b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  return;
}

// Serialize @ 14ad09b80

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
UPaperSpriteComponent::Serialize(UPaperSpriteComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  return;
}

// SetSprite @ 14ad0a5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPaperSpriteComponent::SetSprite(UPaperSpriteComponent *this,UPaperSprite *param_1)

{
  UPaperSprite *pUVar1;
  FStreamingManagerCollection *pFVar2;
  bool bVar3;
  
  pUVar1 = (this->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperSprite *)0x0) {
    bVar3 = param_1 == (UPaperSprite *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if (bVar3) {
    return false;
  }
  if ((((this->_padding_ != 0) &&
       (bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this),
       !bVar3)) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPaperSprite *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceSprite).field0_0x0.DebugPtr = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  pFVar2 = IStreamingManager::Get();
  (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return true;
}

// SetSpriteColor @ 14ad0a710

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
UPaperSpriteComponent::SetSpriteColor(UPaperSpriteComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->SpriteColor).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->SpriteColor).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->SpriteColor).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->SpriteColor).field0_0x0._s_0.A)))))) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->SpriteColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->SpriteColor).field0_0x0 + 8) = uVar1;
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesUPaperSpriteComponent @ 14ad0e080

void __cdecl UPaperSpriteComponent::StaticRegisterNativesUPaperSpriteComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPaperSpriteComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSprite @ 14ad112f0

void __cdecl UPaperSpriteComponent::execGetSprite(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb30))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execSetSprite @ 14ad136c0

void __cdecl UPaperSpriteComponent::execSetSprite(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetSpriteColor @ 14ad138a0

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
UPaperSpriteComponent::execSetSpriteColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_68;
  fStack_54 = local_64;
  fStack_50 = local_60;
  fStack_4c = local_5c;
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_68 != *(float *)(param_1 + 0x24) || (local_64 != *(float *)&param_1[0x24].field_0x4))
      || ((local_60 != *(float *)&param_1[0x24].field_0x8 ||
          (local_5c != *(float *)&param_1[0x24].field_0xc)))))) {
    *(ulonglong *)(param_1 + 0x24) = CONCAT44(fStack_54,local_58);
    *(ulonglong *)&param_1[0x24].field_0x8 = CONCAT44(fStack_4c,fStack_50);
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  }
  return;
}

