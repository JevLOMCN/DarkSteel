// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 78

// StaticClass @ 14acdefe0

UClass * __cdecl UPaperFlipbookComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookComponent",
               &Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton,
               StaticRegisterNativesUPaperFlipbookComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperFlipbookComponent>,
               InternalVTableHelperCtorCaller<UPaperFlipbookComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton;
}

// UPaperFlipbookComponent @ 14acea320

UPaperFlipbookComponent * __thiscall
UPaperFlipbookComponent::UPaperFlipbookComponent
          (UPaperFlipbookComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->SourceFlipbook).field0_0x0.DebugPtr = (UPaperFlipbook *)0x0;
  (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->CachedBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  *(undefined8 *)&this->OnFinishedPlaying = 0;
  *(undefined8 *)&(this->OnFinishedPlaying).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishedPlaying).field_0x10 = 0;
  return this;
}

// UPaperFlipbookComponent @ 14acea3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPaperFlipbookComponent * __thiscall
UPaperFlipbookComponent::UPaperFlipbookComponent
          (UPaperFlipbookComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  FLinearColor FVar5;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceFlipbook).field0_0x0.DebugPtr = (UPaperFlipbook *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->CachedBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  *(undefined8 *)&this->OnFinishedPlaying = 0;
  *(undefined8 *)&(this->OnFinishedPlaying).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishedPlaying).field_0x10 = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0x7f;
  (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FVar5 = FLinearColor::White;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  puVar3 = &this->field_0x5a4;
  this->bLooping = 1;
  this->bPlaying = 1;
  this->bReversePlayback = 0;
  (this->SpriteColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  *(undefined1 *)&this->_padding_ = 2;
  this->CachedFrameIndex = -1;
  this->AccumulatedTime = 0.0;
  this->PlayRate = 1.0;
  return this;
}

// ~UPaperFlipbookComponent @ 14aceba40

void __thiscall UPaperFlipbookComponent::~UPaperFlipbookComponent(UPaperFlipbookComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pvVar1 = *(void **)&(this->OnFinishedPlaying).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishedPlaying);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AdditionalStatObject @ 14aceefc0

UObject * __thiscall UPaperFlipbookComponent::AdditionalStatObject(UPaperFlipbookComponent *this)

{
  return (UObject *)(this->SourceFlipbook).field0_0x0.DebugPtr;
}

// CalcBounds @ 14acef6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UPaperFlipbookComponent::CalcBounds
          (UPaperFlipbookComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int iVar1;
  UPaperFlipbook *pUVar2;
  UBodySetup *pUVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined8 uVar9;
  UPaperFlipbookComponent *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auVar13 [16];
  double dVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  TVector<double>_u_0 local_260;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_230;
  TVector<double>_u_0 local_228;
  undefined1 auStack_210 [12];
  undefined4 uStack_204;
  undefined8 uStack_200;
  double local_1f8;
  UPaperFlipbookComponent *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TMatrix<double> local_198;
  TVector<double>_u_0 local_118;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char local_e8;
  undefined7 uStack_e7;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_288;
  pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar2 == (UPaperFlipbook *)0x0) {
    dVar21 = (param_1->Translation).XY.m128d_f64[1];
    dVar20 = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar21;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar20;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar9;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->SphereRadius = 0.0;
    return __return_storage_ptr__;
  }
  pFVar11 = (pUVar2->KeyFrames).AllocatorInstance.Data;
  bVar8 = false;
  iVar1 = (pUVar2->KeyFrames).ArrayNum;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  local_260._s_0.X = 0.0;
  local_260._s_0.Y = 0.0;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
  local_230 = 0.0;
  local_260._s_0.Z = 0.0;
  uStack_248._0_4_ = 0;
  uStack_248._4_4_ = 0;
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  uStack_238 = 0.0;
  local_1f0 = this;
  while( true ) {
    if ((pUVar2->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_268);
    }
    if (pFVar11 == pFVar12) break;
    if (*(UPaperSprite **)pFVar11 != (UPaperSprite *)0x0) {
      UPaperSprite::GetRenderBounds
                (*(UPaperSprite **)pFVar11,(TBoxSphereBounds<double,double> *)&local_228._s_0);
      if (bVar8) {
        UE::Math::TBoxSphereBounds<double,double>::operator+
                  ((TBoxSphereBounds<double,double> *)&local_260._s_0,
                   (TBoxSphereBounds<double,double> *)&local_118._s_0,
                   (TBoxSphereBounds<double,double> *)&local_228._s_0);
        local_240._0_4_ = local_f8;
        local_240._4_4_ = uStack_f4;
        uVar23 = uStack_f0;
        uVar24 = uStack_ec;
        uVar25 = local_118._16_4_;
        uVar26 = local_118._20_4_;
        uStack_248._0_4_ = uStack_100;
        uStack_248._4_4_ = uStack_fc;
        uVar30 = local_118._0_4_;
        uVar31 = local_118._4_4_;
        uVar32 = local_118._8_4_;
        uVar33 = local_118._12_4_;
        local_230 = (double)CONCAT71(uStack_e7,local_e8);
      }
      else {
        bVar8 = true;
        local_240._0_4_ = auStack_210._8_4_;
        local_240._4_4_ = uStack_204;
        uVar23 = (undefined4)uStack_200;
        uVar24 = uStack_200._4_4_;
        uVar25 = local_228._16_4_;
        uVar26 = local_228._20_4_;
        uStack_248._0_4_ = auStack_210._0_4_;
        uStack_248._4_4_ = auStack_210._4_4_;
        uVar30 = local_228._0_4_;
        uVar31 = local_228._4_4_;
        uVar32 = local_228._8_4_;
        uVar33 = local_228._12_4_;
        local_230 = local_1f8;
      }
      uStack_238 = (double)CONCAT44(uVar24,uVar23);
      local_260._20_4_ = uVar26;
      local_260._16_4_ = uVar25;
      local_260._4_4_ = uVar31;
      local_260._0_4_ = uVar30;
      local_260._12_4_ = uVar33;
      local_260._8_4_ = uVar32;
    }
    pFVar11 = pFVar11 + 0x10;
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_198);
  pUVar10 = local_1f0;
  dVar7 = (double)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
  auVar28._8_4_ = (undefined4)local_240;
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = local_240._4_4_;
  auVar13._8_4_ = (undefined4)uStack_248;
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = uStack_248._4_4_;
  dVar20 = auVar13._8_8_ * local_198.M[0][1];
  dVar5 = (double)CONCAT44(uVar31,uVar30);
  auVar14._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(dVar7 * local_198.M[0][0]) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar7 * local_198.M[0][0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar14._8_4_ = SUB84(dVar20,0) & _UNK_15061cc88;
  auVar14._12_4_ = (uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c;
  dVar20 = auVar28._8_8_;
  dVar6 = (double)CONCAT44(uVar33,uVar32);
  dVar21 = (double)CONCAT44(uVar24,uVar23);
  auVar15._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_198.M[2][0] * dVar21) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.M[2][0] * dVar21,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar15._8_4_ = SUB84(local_198.M[2][1] * dVar21,0) & _UNK_15061cc88;
  auVar15._12_4_ = (uint)((ulonglong)(local_198.M[2][1] * dVar21) >> 0x20) & _UNK_15061cc8c;
  auStack_210._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_198.M[1][0] * dVar20) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.M[1][0] * dVar20,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar14._0_8_ +
       auVar15._0_8_;
  local_240 = (double)CONCAT44((uint)((ulonglong)(local_198.M[1][1] * dVar20) >> 0x20) &
                               _UNK_15061cc8c,SUB84(local_198.M[1][1] * dVar20,0) & _UNK_15061cc88)
              + auVar14._8_8_ + auVar15._8_8_;
  auVar22._8_4_ = uVar32;
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar33;
  uStack_238 = (double)CONCAT44((uint)((ulonglong)(local_198.M[1][2] * dVar20) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_198.M[1][2] * dVar20,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(dVar7 * local_198.M[0][2]) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar7 * local_198.M[0][2],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(local_198.M[2][2] * dVar21) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_198.M[2][2] * dVar21,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar16._8_4_ = uVar30;
  auVar16._0_8_ = dVar5;
  auVar16._12_4_ = uVar31;
  auVar27._0_8_ =
       local_198.M[1][0] * local_198.M[1][0] + local_198.M[0][0] * local_198.M[0][0] +
       local_198.M[2][0] * local_198.M[2][0];
  auVar27._8_8_ =
       local_198.M[1][1] * local_198.M[1][1] + local_198.M[0][1] * local_198.M[0][1] +
       local_198.M[2][1] * local_198.M[2][1];
  auVar17._8_4_ = SUB84(auVar27._8_8_,0);
  auVar17._0_8_ = auVar27._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar18._8_8_ = auVar27._8_8_;
  auVar18._0_8_ = auVar17._8_8_;
  auVar28 = maxpd(auVar27,auVar18);
  local_260._s_0.X =
       dVar6 * local_198.M[1][0] + dVar5 * local_198.M[0][0] +
       (double)CONCAT44(uVar26,uVar25) * local_198.M[2][0] + local_198.M[3][0];
  local_260._s_0.Y =
       auVar22._8_8_ * local_198.M[1][1] + auVar16._8_8_ * local_198.M[0][1] +
       (double)CONCAT44(uVar26,uVar25) * local_198.M[2][1] + local_198.M[3][1];
  auStack_210._8_4_ = SUB84(local_240,0);
  dVar20 = local_198.M[1][2] * local_198.M[1][2] + local_198.M[0][2] * local_198.M[0][2] +
           local_198.M[2][2] * local_198.M[2][2];
  local_260._s_0.Z =
       dVar6 * local_198.M[1][2] + dVar5 * local_198.M[0][2] +
       (double)CONCAT44(uVar26,uVar25) * local_198.M[2][2] + local_198.M[3][2];
  auVar29._8_4_ = SUB84(dVar20,0);
  auVar29._0_8_ = dVar20;
  auVar29._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar29 = maxpd(auVar28,auVar29);
  pUVar3 = (local_1f0->CachedBodySetup).field0_0x0.DebugPtr;
  dVar21 = SQRT(uStack_238 * uStack_238 + (double)auStack_210._0_8_ * (double)auStack_210._0_8_ +
                local_240 * local_240);
  dVar20 = SQRT(auVar29._0_8_) * local_230;
  uStack_204 = (int)((ulonglong)local_240 >> 0x20);
  local_230 = dVar21;
  if (dVar20 <= dVar21) {
    local_230 = dVar20;
  }
  local_1e8 = (double)local_260._0_8_;
  uStack_1e0 = (double)local_260._8_8_;
  if (pUVar3 != (UBodySetup *)0x0) {
    local_228._s_0.Z = local_260._s_0.Z;
    uStack_200 = uStack_238;
    local_1f8 = local_230;
    uStack_248 = (double)auStack_210._0_8_;
    FKAggregateGeom::CalcAABB(&pUVar3->AggGeom,(TBox<double> *)&local_118._s_0,param_1);
    auStack_210._0_8_ = uStack_248;
    if (local_e8 != '\0') {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = __real_3fe0000000000000;
      dVar21 = (double)CONCAT44(uStack_fc,uStack_100) -
               (double)CONCAT44(local_118._4_4_,local_118._0_4_);
      dVar5 = (double)CONCAT44(uStack_f4,local_f8) -
              (double)CONCAT44(local_118._12_4_,local_118._8_4_);
      dVar20 = (double)CONCAT44(uStack_ec,uStack_f0) -
               (double)CONCAT44(local_118._20_4_,local_118._16_4_);
      uStack_200 = dVar20 * __real_3fe0000000000000;
      local_228._s_0.X =
           (double)CONCAT44(local_118._4_4_,local_118._0_4_) + dVar21 * __real_3fe0000000000000;
      local_228._s_0.Y =
           (double)CONCAT44(local_118._12_4_,local_118._8_4_) + dVar5 * __real_3fe0000000000000;
      local_228._s_0.Z = (double)CONCAT44(local_118._20_4_,local_118._16_4_) + uStack_200;
      stack0xfffffffffffffdf8 = dVar5 * __real_3fe0000000000000;
      auStack_210._0_8_ = dVar21 * __real_3fe0000000000000;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (dVar5 * dVar5 + dVar21 * dVar21 + dVar20 * dVar20) * __real_3fd0000000000000;
      auVar29 = sqrtpd(auVar19,auVar4);
      local_1f8 = auVar29._0_8_;
      UE::Math::TBoxSphereBounds<double,double>::operator+
                ((TBoxSphereBounds<double,double> *)&local_260._s_0,
                 (TBoxSphereBounds<double,double> *)&local_1d8._s_0,
                 (TBoxSphereBounds<double,double> *)&local_228._s_0);
      local_260._s_0.Z = local_1d8._s_0.Z;
      local_230 = local_1a8;
      uStack_238 = dStack_1b0;
      goto LAB_14acefb67;
    }
  }
  local_1d8._0_4_ = (undefined4)local_1e8;
  local_1d8._4_4_ = local_1e8._4_4_;
  local_1d8._8_4_ = (undefined4)uStack_1e0;
  local_1d8._12_4_ = uStack_1e0._4_4_;
  dStack_1c0 = (double)auStack_210._0_8_;
  local_1b8 = local_240;
LAB_14acefb67:
  dVar20 = (double)*(float *)((longlong)&pUVar10->_padding_ + 4);
  *(undefined4 *)&(__return_storage_ptr__->Origin).field0_0x0 = local_1d8._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 4) = local_1d8._4_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 8) = local_1d8._8_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0xc) = local_1d8._12_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_260._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_1c0 * dVar20;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_1b8 * dVar20;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = uStack_238 * dVar20;
  __return_storage_ptr__->SphereRadius = local_230 * dVar20;
  return __return_storage_ptr__;
}

// CalculateCurrentFrame @ 14acf10d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperFlipbookComponent::CalculateCurrentFrame(UPaperFlipbookComponent *this)

{
  int iVar1;
  UPaperFlipbook *pUVar2;
  int iVar3;
  
  iVar1 = this->CachedFrameIndex;
  pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar2 == (UPaperFlipbook *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = UPaperFlipbook::GetKeyFrameIndexAtTime(pUVar2,this->AccumulatedTime,false);
  }
  this->CachedFrameIndex = iVar3;
  if (iVar3 != iVar1) {
    USceneComponent::UpdateChildTransforms((USceneComponent *)this,None,None);
    pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
    if ((pUVar2 != (UPaperFlipbook *)0x0) && ((pUVar2->CollisionSource).Value == '\x02')) {
      UActorComponent::RecreatePhysicsState((UActorComponent *)this);
      USceneComponent::UpdateOverlaps
                ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                 (TArrayView<FOverlapInfo_const_,int> *)0x0);
    }
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  return;
}

// CreateRenderState_Concurrent @ 14acf4200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPaperFlipbookComponent::CreateRenderState_Concurrent
          (UPaperFlipbookComponent *this,FRegisterComponentContext *param_1)

{
  UPrimitiveComponent::CreateRenderState_Concurrent
            ((UPrimitiveComponent *)this,(FRegisterComponentContext *)0x0);
  return;
}

// CreateSceneProxy @ 14acf42f0

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
UPaperFlipbookComponent::CreateSceneProxy(UPaperFlipbookComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FPaperRenderSceneProxy_SpriteBase *this_00;
  UPaperSprite *pUVar3;
  code **ppcVar4;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar5;
  FPrimitiveSceneProxy *pFVar6;
  ForElementType<UTexture_*> _Dst;
  ForElementType<UE::Math::TVector4<double>_> _Dst_00;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  FPaperRenderSceneProxy_SpriteBase *pFVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  FPaperRenderSceneProxy_SpriteBase *local_188;
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
  this_00 = ::operator_new(0x670);
  pFVar10 = (FPaperRenderSceneProxy_SpriteBase *)0x0;
  if (this_00 != (FPaperRenderSceneProxy_SpriteBase *)0x0) {
    FPaperRenderSceneProxy_SpriteBase::FPaperRenderSceneProxy_SpriteBase
              (this_00,(UMeshComponent *)this);
    *(undefined ***)this_00 = &___7FPaperFlipbookSceneProxy__6B_;
    pFVar10 = this_00;
  }
  CalculateCurrentFrame(this);
  pUVar3 = GetSpriteAtCachedIndex(this);
  if (pUVar3 == (UPaperSprite *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = pUVar3->AlternateMaterialSplitIndex;
  }
  local_2b0 = (UObject *)0x0;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  local_2c8._s_0.Z = 0.0;
  local_288 = (undefined1 *)0x0;
  local_280 = 0;
  local_27c = 4;
  local_278 = FColor::White.field0_0x0;
  local_1a8 = (undefined1 *)0x0;
  local_198 = 0;
  local_194 = 6;
  FSpriteDrawCallRecord::BuildFromSprite((FSpriteDrawCallRecord *)&local_2c8._s_0,pUVar3);
  fVar12 = (this->SpriteColor).field0_0x0._s_0.B;
  fVar15 = (this->SpriteColor).field0_0x0._s_0.R;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  local_160 = local_2b0;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar15) {
    fVar15 = __real_3f800000;
  }
  fVar13 = (this->SpriteColor).field0_0x0._s_0.G;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (__real_3f800000 <= fVar13) {
    fVar13 = __real_3f800000;
  }
  fVar14 = (this->SpriteColor).field0_0x0._s_0.A;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  local_178._s_0.Z = local_2c8._s_0.Z;
  local_278 = (FColor_u_0)
              CONCAT13((char)(int)(fVar14 * __real_437f0000 + __real_3f000000),
                       CONCAT12((char)(int)(fVar15 * __real_437f0000 + __real_3f000000),
                                CONCAT11((char)(int)(fVar13 * __real_437f0000 + __real_3f000000),
                                         (char)(int)(fVar12 * __real_437f0000 + __real_3f000000))));
  local_178._s_0.X = local_2c8._s_0.X;
  local_178._s_0.Y = local_2c8._s_0.Y;
  local_188 = pFVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2b0);
  }
  lVar7 = (longlong)local_280;
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
    memcpy((void *)_Dst,puVar9,lVar7 << 3);
  }
  lVar7 = (longlong)local_198;
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
    memcpy((void *)_Dst_00,puVar9,lVar7 << 5);
  }
  local_338[0] = (code *)0x0;
  local_38 = iVar11;
  ppcVar4 = FMemory::Malloc(0x170,0x10);
  *ppcVar4 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  ppcVar4[2] = (code *)local_188;
  local_310 = ppcVar4;
  FSpriteDrawCallRecord::FSpriteDrawCallRecord
            ((FSpriteDrawCallRecord *)(ppcVar4 + 4),(FSpriteDrawCallRecord *)&local_178._s_0);
  *(int *)(ppcVar4 + 0x2c) = local_38;
  if (ppcVar4 + 2 != (code **)0x0) {
    local_338[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UPaperFlipbookComponent::CreateSceneProxy_::__l2::TSTR_FCreatePaperFlipbookProxy_SetSprite103>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_338);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_308._0_8_ = local_338[0];
    local_2e0 = local_310;
    local_310 = (code **)0x0;
    local_308._16_8_ = local_328[0];
    local_308._24_8_ = local_328[1];
    local_308._32_8_ = local_328[2];
    local_338[0] = (code *)0x0;
    local_2d8 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::TSTR_FCreatePaperFlipbookProxy_SetSprite103>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_308,pFVar5);
    uVar8 = (ulonglong)local_2d8;
    if ((2 < uVar8) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FPrimitiveSceneProxy *)(*pcVar1)();
      return pFVar6;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
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
                  ::__l2::Destructors)[uVar8])(local_308);
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
  return (FPrimitiveSceneProxy *)pFVar10;
}

// DoesSocketExist @ 14acf5cb0

bool __thiscall
UPaperFlipbookComponent::DoesSocketExist(UPaperFlipbookComponent *this,FName param_1)

{
  int iVar1;
  UPaperFlipbook *pUVar2;
  FPaperSpriteSocket *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar2 != (UPaperFlipbook *)0x0) {
    iVar1 = (pUVar2->KeyFrames).ArrayNum;
    pFVar5 = (pUVar2->KeyFrames).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pUVar2->KeyFrames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      if ((*(UPaperSprite **)pFVar5 != (UPaperSprite *)0x0) &&
         (pFVar3 = UPaperSprite::FindSocket(*(UPaperSprite **)pFVar5,param_1),
         pFVar3 != (FPaperSpriteSocket *)0x0)) {
        return true;
      }
      pFVar5 = pFVar5 + 0x10;
    }
  }
  return false;
}

// FlipbookChangedPhysicsState @ 14acf7ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperFlipbookComponent::FlipbookChangedPhysicsState(UPaperFlipbookComponent *this)

{
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  USceneComponent::UpdateOverlaps
            ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
             (TArrayView<FOverlapInfo_const_,int> *)0x0);
  return;
}

// GetBodySetup @ 14acf93e0

UBodySetup * __thiscall UPaperFlipbookComponent::GetBodySetup(UPaperFlipbookComponent *this)

{
  uchar uVar1;
  UPaperFlipbook *this_00;
  UBodySetup *pUVar2;
  UPaperSprite *pUVar3;
  int iVar4;
  
  iVar4 = 0;
  (this->CachedBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if ((this_00 != (UPaperFlipbook *)0x0) &&
     (uVar1 = (this_00->CollisionSource).Value, uVar1 != '\0')) {
    if (uVar1 != '\x01') {
      iVar4 = this->CachedFrameIndex;
    }
    pUVar3 = UPaperFlipbook::GetSpriteAtFrame(this_00,iVar4);
    if (pUVar3 != (UPaperSprite *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (pUVar3->BodySetup).field0_0x0.DebugPtr, pUVar2 != (UBodySetup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->CachedBodySetup).field0_0x0 = (pUVar3->BodySetup).field0_0x0;
    }
    return (this->CachedBodySetup).field0_0x0.DebugPtr;
  }
  return (UBodySetup *)0x0;
}

// GetFlipbook @ 14acfa860

UPaperFlipbook * __thiscall UPaperFlipbookComponent::GetFlipbook(UPaperFlipbookComponent *this)

{
  return (this->SourceFlipbook).field0_0x0.DebugPtr;
}

// GetFlipbookFramerate @ 14acfa870

float __thiscall UPaperFlipbookComponent::GetFlipbookFramerate(UPaperFlipbookComponent *this)

{
  UPaperFlipbook *pUVar1;
  
  pUVar1 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperFlipbook *)0x0) {
    return pUVar1->FramesPerSecond;
  }
  return __real_41700000;
}

// GetFlipbookLength @ 14acfa8a0

float __thiscall UPaperFlipbookComponent::GetFlipbookLength(UPaperFlipbookComponent *this)

{
  float fVar1;
  UPaperFlipbook *this_00;
  int iVar2;
  float fVar3;
  
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  fVar3 = 0.0;
  if ((this_00 != (UPaperFlipbook *)0x0) &&
     (fVar1 = this_00->FramesPerSecond, fVar3 = 0.0, fVar1 != 0.0)) {
    iVar2 = UPaperFlipbook::GetNumFrames(this_00);
    fVar3 = (float)iVar2 / fVar1;
  }
  return fVar3;
}

// GetFlipbookLengthInFrames @ 14acfa8f0

int __thiscall UPaperFlipbookComponent::GetFlipbookLengthInFrames(UPaperFlipbookComponent *this)

{
  UPaperFlipbook *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  pUVar1 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperFlipbook *)0x0) {
    return 0;
  }
  iVar5 = 0;
  uVar6 = 0;
  if (0 < (pUVar1->KeyFrames).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar1->KeyFrames).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + *(int *)((pUVar1->KeyFrames).AllocatorInstance.Data + lVar7 + 8);
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (pUVar1->KeyFrames).ArrayNum);
  }
  return iVar5;
}

// GetLifetimeReplicatedProps @ 14acfae00

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
UPaperFlipbookComponent::GetLifetimeReplicatedProps
          (UPaperFlipbookComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xe,L"SourceFlipbook",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetMaterial @ 14acfb290

UMaterialInterface * __thiscall
UPaperFlipbookComponent::GetMaterial(UPaperFlipbookComponent *this,int param_1)

{
  UPaperFlipbook *pUVar1;
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
  pUVar1 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  pUVar5 = (UMaterialInterface *)0x0;
  if (pUVar1 != (UPaperFlipbook *)0x0) {
    pUVar5 = (pUVar1->DefaultMaterial).field0_0x0.DebugPtr;
  }
  return pUVar5;
}

// GetNumMaterials @ 14acfc650

int __thiscall UPaperFlipbookComponent::GetNumMaterials(UPaperFlipbookComponent *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this->_padding_;
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// GetPlayRate @ 14acfc980

float __thiscall UPaperFlipbookComponent::GetPlayRate(UPaperFlipbookComponent *this)

{
  return this->PlayRate;
}

// GetPlaybackPosition @ 14acfc990

float __thiscall UPaperFlipbookComponent::GetPlaybackPosition(UPaperFlipbookComponent *this)

{
  return this->AccumulatedTime;
}

// GetPlaybackPositionInFrames @ 14acfc9a0

int __thiscall UPaperFlipbookComponent::GetPlaybackPositionInFrames(UPaperFlipbookComponent *this)

{
  float fVar1;
  UPaperFlipbook *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (this_00 != (UPaperFlipbook *)0x0) {
    fVar1 = this_00->FramesPerSecond;
    iVar3 = UPaperFlipbook::GetNumFrames(this_00);
    if (0 < iVar3) {
      iVar4 = (int)(fVar1 * this->AccumulatedTime);
      iVar2 = iVar3 + -1;
      if (iVar4 < iVar3 + -1) {
        iVar2 = iVar4;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      return iVar3;
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 14acfd000

UClass * __cdecl UPaperFlipbookComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookComponent",
               &Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton,
               StaticRegisterNativesUPaperFlipbookComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperFlipbookComponent>,
               InternalVTableHelperCtorCaller<UPaperFlipbookComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton;
}

// GetSocketTransform @ 14acfe490

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
UPaperFlipbookComponent::GetSocketTransform
          (UPaperFlipbookComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  __m128d *p_Var1;
  VectorRegister4Double *pVVar2;
  int iVar3;
  UPaperFlipbook *pUVar4;
  UPaperSprite *this_00;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  TTransform<double> *pTVar28;
  FPaperSpriteSocket *pFVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  double local_138;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar4 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar4 != (UPaperFlipbook *)0x0) {
    uVar31 = this->CachedFrameIndex;
    if (uVar31 == 0xffffffff) {
      uVar31 = 0;
    }
    local_128.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_128.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_128.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    if (((-1 < (int)uVar31) && ((int)uVar31 < (pUVar4->KeyFrames).ArrayNum)) &&
       (param_1 != (FName)0x0)) {
      iVar3 = (pUVar4->KeyFrames).ArrayNum;
      uVar30 = 0;
      if ((int)uVar31 < iVar3) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_158 = (longlong)(int)uVar31;
        local_150 = (longlong)iVar3;
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar6 = (code *)swi(3);
          pTVar28 = (TTransform<double> *)(*pcVar6)();
          return pTVar28;
        }
      }
      this_00 = *(UPaperSprite **)
                 ((pUVar4->KeyFrames).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10);
      if ((this_00 != (UPaperSprite *)0x0) &&
         (pFVar29 = UPaperSprite::FindSocket(this_00,param_1), pFVar29 != (FPaperSpriteSocket *)0x0)
         ) {
        dVar20 = (pFVar29->LocalTransform).Rotation.XY.m128d_f64[1];
        local_128.Rotation.XY.m128d_f64 = *&(pFVar29->LocalTransform).Rotation.XY.m128d_f64;
        p_Var1 = &(pFVar29->LocalTransform).Rotation.ZW;
        dVar21 = p_Var1->m128d_f64[0];
        dVar22 = (pFVar29->LocalTransform).Rotation.ZW.m128d_f64[1];
        local_128.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
        pVVar2 = &(pFVar29->LocalTransform).Scale3D;
        dVar23 = (pVVar2->XY).m128d_f64[0];
        dVar24 = (pFVar29->LocalTransform).Scale3D.XY.m128d_f64[1];
        local_128.Scale3D.XY.m128d_f64 = *&(pVVar2->XY).m128d_f64;
        p_Var1 = &(pFVar29->LocalTransform).Scale3D.ZW;
        dVar25 = p_Var1->m128d_f64[0];
        dVar26 = (pFVar29->LocalTransform).Scale3D.ZW.m128d_f64[1];
        local_128.Scale3D.ZW.m128d_f64 = *&p_Var1->m128d_f64;
        local_138 = (double)(__real_3f800000 / this_00->PixelsPerUnrealUnit);
        dVar16 = (pFVar29->LocalTransform).Translation.XY.m128d_f64[0] * local_138;
        dVar17 = (pFVar29->LocalTransform).Translation.XY.m128d_f64[1] * local_138;
        uVar32 = SUB84(dVar17,0);
        uVar33 = (undefined4)((ulonglong)dVar17 >> 0x20);
        dVar17 = (pFVar29->LocalTransform).Translation.ZW.m128d_f64[0] * local_138;
        dVar19 = (pFVar29->LocalTransform).Translation.ZW.m128d_f64[1] * 0.0;
        uVar34 = SUB84(dVar19,0);
        uVar35 = (undefined4)((ulonglong)dVar19 >> 0x20);
        local_128.Translation.XY.m128d_f64[1]._0_4_ = uVar32;
        local_128.Translation.XY.m128d_f64[0] = dVar16;
        local_128.Translation.XY.m128d_f64[1]._4_4_ = uVar33;
        local_128.Translation.ZW.m128d_f64[1]._0_4_ = uVar34;
        local_128.Translation.ZW.m128d_f64[0] = dVar17;
        local_128.Translation.ZW.m128d_f64[1]._4_4_ = uVar35;
        local_148._8_4_ = SUB84(local_138,0);
        local_148._0_8_ = local_138;
        local_148._12_4_ = (int)((ulonglong)local_138 >> 0x20);
        fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
        if (param_2 == RTS_World) {
          dVar16 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          auVar9._8_4_ = SUB84(dVar16,0);
          auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          auVar9._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
          dVar16 = (double)fVar8;
          auVar10._8_4_ = SUB84(dVar16,0);
          auVar10._0_8_ = (double)fVar7;
          auVar10._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar10;
          fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
          auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          auVar11._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
          auVar12._8_4_ = SUB84((double)fVar8,0);
          auVar12._0_8_ = (double)fVar7;
          auVar12._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar12;
          fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
          auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          auVar13._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar13;
          auVar14._8_4_ = SUB84((double)fVar8,0);
          auVar14._0_8_ = (double)fVar7;
          auVar14._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar14;
          UE::Math::TTransform<double>::Multiply
                    (__return_storage_ptr__,&local_128,(TTransform<double> *)&this->_padding_);
          return __return_storage_ptr__;
        }
        if (param_2 == RTS_Actor) {
          lVar5 = this->_padding_;
          if (lVar5 != 0) {
            dVar16 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_c8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
            local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
            ;
            local_c8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)fVar8;
            local_c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
            local_c8.Rotation.ZW.m128d_f64[0] = (double)fVar7;
            local_c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
            local_c8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_c8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_c8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_c8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_c8,&local_128,(TTransform<double> *)&this->_padding_);
            lVar5 = *(longlong *)(lVar5 + 0x1b8);
            if (lVar5 != 0) {
              UE::Math::TTransform<double>::GetRelativeTransform
                        (&local_c8,__return_storage_ptr__,(TTransform<double> *)(lVar5 + 0x1f0));
              return __return_storage_ptr__;
            }
            UE::Math::TTransform<double>::GetRelativeTransform
                      (&local_c8,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
            return __return_storage_ptr__;
          }
        }
        else {
          if ((param_2 == RTS_Component) || (param_2 == RTS_ParentBoneSpace)) {
            (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
                 (pFVar29->LocalTransform).Rotation.XY.m128d_f64[0];
            (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar20;
            (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar21;
            (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar22;
            auVar15._8_4_ = uVar32;
            auVar15._0_8_ = dVar16;
            auVar15._12_4_ = uVar33;
            *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar15;
            auVar18._8_4_ = uVar34;
            auVar18._0_8_ = dVar17;
            auVar18._12_4_ = uVar35;
            *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar18;
            (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar23;
            (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar24;
            (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar25;
            (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar26;
            return __return_storage_ptr__;
          }
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperFlipbookComponent.cpp"
                              ,0x29e,L"");
          if (bVar27) {
            pcVar6 = (code *)swi(3);
            pTVar28 = (TTransform<double> *)(*pcVar6)();
            return pTVar28;
          }
        }
      }
    }
  }
  USceneComponent::GetSocketTransform
            ((USceneComponent *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetSpriteAtCachedIndex @ 14acfea90

UPaperSprite * __thiscall
UPaperFlipbookComponent::GetSpriteAtCachedIndex(UPaperFlipbookComponent *this)

{
  int iVar1;
  UPaperFlipbook *this_00;
  FPaperFlipbookKeyFrame *pFVar2;
  
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (((this_00 != (UPaperFlipbook *)0x0) && (iVar1 = this->CachedFrameIndex, -1 < iVar1)) &&
     (iVar1 < (this_00->KeyFrames).ArrayNum)) {
    pFVar2 = UPaperFlipbook::GetKeyFrameChecked(this_00,iVar1);
    return (pFVar2->Sprite).field0_0x0.DebugPtr;
  }
  return (UPaperSprite *)0x0;
}

// GetStreamingRenderAssetInfo @ 14acfed10

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
UPaperFlipbookComponent::GetStreamingRenderAssetInfo
          (UPaperFlipbookComponent *this,FStreamingTextureLevelContext *param_1,
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

// GetUsedMaterials @ 14ad01de0

void __thiscall
UPaperFlipbookComponent::GetUsedMaterials
          (UPaperFlipbookComponent *this,
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

// GetUsedTextures @ 14ad01e00

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
UPaperFlipbookComponent::GetUsedTextures
          (UPaperFlipbookComponent *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  UPaperFlipbook *pUVar7;
  UTexture *local_res8;
  
  pUVar7 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if ((pUVar7 != (UPaperFlipbook *)0x0) && (uVar5 = 0, 0 < (pUVar7->KeyFrames).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (pUVar7->KeyFrames).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      lVar1 = *(longlong *)((pUVar7->KeyFrames).AllocatorInstance.Data + lVar6);
      if ((lVar1 != 0) && (local_res8 = *(UTexture **)(lVar1 + 0x68), local_res8 != (UTexture *)0x0)
         ) {
        TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                  (param_1,&local_res8);
      }
      pUVar7 = (this->SourceFlipbook).field0_0x0.DebugPtr;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (pUVar7->KeyFrames).ArrayNum);
  }
  UPrimitiveComponent::GetUsedTextures((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// HasAnySockets @ 14ad02660

bool __thiscall UPaperFlipbookComponent::HasAnySockets(UPaperFlipbookComponent *this)

{
  int iVar1;
  UPaperFlipbook *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar2 == (UPaperFlipbook *)0x0) {
    return false;
  }
  pFVar3 = (pUVar2->KeyFrames).AllocatorInstance.Data;
  iVar1 = (pUVar2->KeyFrames).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pUVar2->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(longlong *)pFVar3 != 0) && (0 < *(int *)(*(longlong *)pFVar3 + 0x88))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// IsLooping @ 14ad034c0

bool __thiscall UPaperFlipbookComponent::IsLooping(UPaperFlipbookComponent *this)

{
  return this->bLooping;
}

// IsPlaying @ 14ad034d0

bool __thiscall UPaperFlipbookComponent::IsPlaying(UPaperFlipbookComponent *this)

{
  return this->bPlaying;
}

// IsReversing @ 14ad034f0

bool __thiscall UPaperFlipbookComponent::IsReversing(UPaperFlipbookComponent *this)

{
  return this->bReversePlayback == 1 && this->bPlaying == 1;
}

// OnRep_SourceFlipbook @ 14ad03a90

void __thiscall
UPaperFlipbookComponent::OnRep_SourceFlipbook(UPaperFlipbookComponent *this,UPaperFlipbook *param_1)

{
  UPaperFlipbook *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperFlipbook *)0x0) {
    bVar2 = param_1 == (UPaperFlipbook *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    (this->SourceFlipbook).field0_0x0.DebugPtr = (UPaperFlipbook *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014ad03abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xb28))();
    return;
  }
  return;
}

// Play @ 14ad05390

void __thiscall UPaperFlipbookComponent::Play(UPaperFlipbookComponent *this)

{
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  this->bReversePlayback = 0;
  this->bPlaying = 1;
  return;
}

// PlayFromStart @ 14ad053c0

void __thiscall UPaperFlipbookComponent::PlayFromStart(UPaperFlipbookComponent *this)

{
  float fVar1;
  
  fVar1 = this->AccumulatedTime;
  this->AccumulatedTime = 0.0;
  if (fVar1 != 0.0) {
    CalculateCurrentFrame(this);
  }
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  this->bReversePlayback = 0;
  this->bPlaying = 1;
  return;
}

// PostLoad @ 14ad05620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperFlipbookComponent::PostLoad(UPaperFlipbookComponent *this)

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
  if (iVar2 < 10) {
    if ((this->Material_DEPRECATED).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
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

// QuerySupportedSockets @ 14ad06310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperFlipbookComponent::QuerySupportedSockets
          (UPaperFlipbookComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_108 [32];
  undefined1 uStack_b8;
  undefined1 auStack_b7 [7];
  TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> TStack_b0;
  uint uStack_a0;
  undefined1 auStack_9c [20];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> TStack_88;
  ulonglong uStack_38;
  
  auStack_9c._4_8_ = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if ((UPaperFlipbook *)auStack_9c._4_8_ == (UPaperFlipbook *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar12 = (((UPaperFlipbook *)auStack_9c._4_8_)->KeyFrames).AllocatorInstance.Data;
  iVar6 = 0;
  uStack_a0 = (((UPaperFlipbook *)auStack_9c._4_8_)->KeyFrames).ArrayNum;
  uVar9 = (ulonglong)(int)uStack_a0;
  TStack_88.Elements._0_8_ = 0;
  pFVar13 = pFVar12 + uVar9 * 0x10;
  TStack_88.Elements._8_8_ = 0;
  TStack_88.Elements._32_8_ = 0;
  TStack_88.Elements._40_4_ = 0;
  TStack_88.Elements._44_4_ = 0x80;
  TStack_88.Elements._48_4_ = 0xffffffff;
  TStack_88.Elements._52_4_ = 0;
  TStack_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_88.HashSize = 0;
  TStack_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_b0.ArrayNum = 0;
  TStack_b0.ArrayMax = 0;
  do {
    if (((TArray<FPaperFlipbookKeyFrame,TSizedDefaultAllocator<32>_> *)(auStack_9c._4_8_ + 0x30))->
        ArrayNum != (int)uVar9) {
      uStack_b8 = 0;
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_b8);
      iVar6 = TStack_b0.ArrayMax;
    }
    if (pFVar12 == pFVar13) {
      if (TStack_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_b0.AllocatorInstance.Data);
      }
      TStack_88.HashSize = 0;
      if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_88.Elements);
      return;
    }
    if (*(longlong *)pFVar12 != 0) {
      TStack_b0._8_8_ = TStack_b0._8_8_ & 0xffffffff00000000;
      if ((iVar6 < 0) && (iVar6 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&TStack_b0.AllocatorInstance,0,&TStack_b0.ArrayMax);
      }
      UPaperSprite::QuerySupportedSockets(*(UPaperSprite **)pFVar12,&TStack_b0);
      iVar6 = TStack_b0.ArrayNum;
      uVar9 = (ulonglong)TStack_b0.ArrayNum;
      pFVar1 = TStack_b0.AllocatorInstance.Data + uVar9 * 0xc;
      FVar11.Data = TStack_b0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar6) {
          auStack_b7[0] = 0;
          `TCheckedPointerIterator<FComponentSocketDescription,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_b7);
        }
        if (FVar11.Data == pFVar1) break;
        lVar2 = *(longlong *)FVar11.Data;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (TStack_88.Elements._8_4_ != TStack_88.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&TStack_88.Hash;
          if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = TStack_88.Hash.SecondaryData;
          }
          for (iVar8 = *(int *)((longlong)FVar10 +
                               (ulonglong)
                               (TStack_88.HashSize - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar7) *
                               4); iVar8 != -1;
              iVar8 = *(int *)(TStack_88.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
            if (*(longlong *)(TStack_88.Elements._0_8_ + (longlong)iVar8 * 0x10) == lVar2)
            goto LAB_14ad06287;
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&TStack_88,(FName *)auStack_9c,(bool *)FVar11.Data);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= FVar11.Data) && (FVar11.Data < pFVar3 + (longlong)param_1->ArrayMax * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0xc) = *(undefined8 *)FVar11.Data;
        *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)(FVar11.Data + 8);
LAB_14ad06287:
        uVar9 = TStack_b0._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 0xc;
      }
      iVar6 = TStack_b0.ArrayMax;
    }
    pFVar12 = pFVar12 + 0x10;
    uVar9 = (ulonglong)uStack_a0;
  } while( true );
}

// Reverse @ 14ad08ed0

void __thiscall UPaperFlipbookComponent::Reverse(UPaperFlipbookComponent *this)

{
  undefined1 *puVar1;
  
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  this->bReversePlayback = 1;
  this->bPlaying = 1;
  return;
}

// ReverseFromEnd @ 14ad08f00

void __thiscall UPaperFlipbookComponent::ReverseFromEnd(UPaperFlipbookComponent *this)

{
  undefined1 *puVar1;
  float fVar2;
  UPaperFlipbook *this_00;
  int iVar3;
  float fVar4;
  
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  fVar4 = 0.0;
  if ((this_00 != (UPaperFlipbook *)0x0) &&
     (fVar2 = this_00->FramesPerSecond, fVar4 = 0.0, fVar2 != 0.0)) {
    iVar3 = UPaperFlipbook::GetNumFrames(this_00);
    fVar4 = (float)iVar3 / fVar2;
  }
  fVar2 = this->AccumulatedTime;
  this->AccumulatedTime = fVar4;
  if (fVar2 != fVar4) {
    CalculateCurrentFrame(this);
  }
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  this->bReversePlayback = 1;
  this->bPlaying = 1;
  return;
}

// SendRenderDynamicData_Concurrent @ 14ad08f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperFlipbookComponent::SendRenderDynamicData_Concurrent(UPaperFlipbookComponent *this)

{
  UPaperFlipbook *this_00;
  TObjectPtr<UBodySetup>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  FPaperFlipbookKeyFrame *pFVar4;
  code **ppcVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  ForElementType<UTexture_*> _Dst;
  ForElementType<UE::Math::TVector4<double>_> _Dst_00;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  UPaperSprite *pUVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_388 [32];
  code *local_338 [2];
  code *local_328 [3];
  code **local_310;
  undefined1 local_308 [40];
  code **local_2e0;
  byte local_2d8;
  code *local_2c8;
  TVector<double>_u_0 local_2b8;
  UObject *local_2a0;
  ForElementType<UTexture_*> local_298;
  int local_270;
  int local_26c;
  undefined4 local_268;
  ForElementType<UE::Math::TVector4<double>_> local_258;
  int local_188;
  int local_184 [3];
  TObjectPtr<UBodySetup>_u_0 local_178;
  int local_170;
  TVector<double>_u_0 local_168;
  UObject *local_150;
  undefined1 local_148 [32];
  undefined1 *local_128;
  int local_120;
  undefined4 local_11c;
  FColor_u_0 local_118;
  undefined1 local_108 [192];
  undefined1 *local_48;
  int local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if (this->_padding_ != 0) {
    this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
    pUVar10 = (UPaperSprite *)0x0;
    if (((this_00 != (UPaperFlipbook *)0x0) &&
        (iVar9 = this->CachedFrameIndex, pUVar10 = (UPaperSprite *)0x0, -1 < iVar9)) &&
       (iVar9 < (this_00->KeyFrames).ArrayNum)) {
      pFVar4 = UPaperFlipbook::GetKeyFrameChecked(this_00,iVar9);
      pUVar10 = (pFVar4->Sprite).field0_0x0.DebugPtr;
    }
    local_150 = (UObject *)0x0;
    local_168._s_0.X = 0.0;
    local_168._s_0.Y = 0.0;
    local_168._s_0.Z = 0.0;
    local_128 = (undefined1 *)0x0;
    local_120 = 0;
    local_11c = 4;
    local_118 = FColor::White.field0_0x0;
    local_48 = (undefined1 *)0x0;
    local_38 = 0;
    local_34 = 6;
    FSpriteDrawCallRecord::BuildFromSprite((FSpriteDrawCallRecord *)&local_168._s_0,pUVar10);
    fVar12 = (this->SpriteColor).field0_0x0._s_0.B;
    fVar15 = (this->SpriteColor).field0_0x0._s_0.R;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    fVar13 = (this->SpriteColor).field0_0x0._s_0.G;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    fVar14 = (this->SpriteColor).field0_0x0._s_0.A;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (__real_3f800000 <= fVar14) {
      fVar14 = __real_3f800000;
    }
    local_118 = (FColor_u_0)
                CONCAT13((char)(int)(fVar14 * __real_437f0000 + __real_3f000000),
                         CONCAT12((char)(int)(fVar15 * __real_437f0000 + __real_3f000000),
                                  CONCAT11((char)(int)(fVar13 * __real_437f0000 + __real_3f000000),
                                           (char)(int)(fVar12 * __real_437f0000 + __real_3f000000)))
                        );
    if (pUVar10 == (UPaperSprite *)0x0) {
      iVar9 = -1;
    }
    else {
      iVar9 = pUVar10->AlternateMaterialSplitIndex;
    }
    local_2c8 = (code *)this->_padding_;
    TVar1 = (this->CachedBodySetup).field0_0x0;
    local_2b8._s_0.X = local_168._s_0.X;
    local_2b8._s_0.Y = local_168._s_0.Y;
    local_2b8._s_0.Z = local_168._s_0.Z;
    local_2a0 = local_150;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_150);
    }
    lVar7 = (longlong)local_120;
    local_298.SecondaryData = (ForElementType<UTexture_*>)0x0;
    puVar11 = local_148;
    if (local_128 != (undefined1 *)0x0) {
      puVar11 = local_128;
    }
    local_270 = local_120;
    if (local_120 == 0) {
      local_26c = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                (8,8,local_120,0,&local_298,local_120,&local_26c);
      _Dst = (ForElementType<UTexture_*>)&local_298;
      if (local_298.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        _Dst = local_298.SecondaryData;
      }
      memcpy((void *)_Dst,puVar11,lVar7 << 3);
    }
    lVar7 = (longlong)local_38;
    local_268 = local_118;
    local_258.SecondaryData = (ForElementType<UE::Math::TVector4<double>_>)0x0;
    local_188 = local_38;
    puVar11 = local_108;
    if (local_48 != (undefined1 *)0x0) {
      puVar11 = local_48;
    }
    if (local_38 == 0) {
      local_184[0] = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                (0x20,0x10,local_38,0,&local_258,local_38,local_184);
      _Dst_00 = (ForElementType<UE::Math::TVector4<double>_>)&local_258;
      if (local_258.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        _Dst_00 = local_258.SecondaryData;
      }
      memcpy((void *)_Dst_00,puVar11,lVar7 << 5);
    }
    local_338[0] = (code *)0x0;
    local_178 = TVar1;
    local_170 = iVar9;
    ppcVar5 = FMemory::Malloc(0x170,0x10);
    *ppcVar5 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar5[2] = local_2c8;
    local_310 = ppcVar5;
    FSpriteDrawCallRecord::FSpriteDrawCallRecord
              ((FSpriteDrawCallRecord *)(ppcVar5 + 4),(FSpriteDrawCallRecord *)&local_2b8._s_0);
    *(TObjectPtr<UBodySetup>_u_0 *)(ppcVar5 + 0x2c) = local_178;
    *(int *)(ppcVar5 + 0x2d) = local_170;
    if (ppcVar5 + 2 != (code **)0x0) {
      local_338[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPaperFlipbookComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendPaperRenderComponentDynamicData370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_338);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_308._0_8_ = local_338[0];
      local_2e0 = local_310;
      local_310 = (code **)0x0;
      local_308._16_8_ = local_328[0];
      local_308._24_8_ = local_328[1];
      local_308._32_8_ = local_328[2];
      local_338[0] = (code *)0x0;
      local_2d8 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperRenderComponentDynamicData370>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_308,pFVar6);
      uVar8 = (ulonglong)local_2d8;
      if (2 < uVar8) {
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
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_308._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_308 + 0x10);
          if (local_2e0 != (code **)0x0) {
            ppcVar5 = local_2e0;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_308);
      }
    }
    if (local_338[0] != (code *)0x0) {
      ppcVar5 = local_338 + 2;
      if (local_310 != (code **)0x0) {
        ppcVar5 = local_310;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_258.SecondaryData != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      FMemory::Free((void *)local_258.SecondaryData);
    }
    if (local_298.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FMemory::Free((void *)local_298.SecondaryData);
    }
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_128 != (undefined1 *)0x0) {
      FMemory::Free(local_128);
    }
  }
  return;
}

// Serialize @ 14ad09970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperFlipbookComponent::Serialize(UPaperFlipbookComponent *this,FArchive *param_1)

{
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad09990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  return;
}

// Serialize @ 14ad099a0

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
UPaperFlipbookComponent::Serialize(UPaperFlipbookComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  return;
}

// SetFlipbook @ 14ad0a130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPaperFlipbookComponent::SetFlipbook(UPaperFlipbookComponent *this,UPaperFlipbook *param_1)

{
  UPaperFlipbook *pUVar1;
  FStreamingManagerCollection *pFVar2;
  bool bVar3;
  
  pUVar1 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperFlipbook *)0x0) {
    bVar3 = param_1 == (UPaperFlipbook *)0x0;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPaperFlipbook *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceFlipbook).field0_0x0.DebugPtr = param_1;
  this->AccumulatedTime = 0.0;
  CalculateCurrentFrame(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  USceneComponent::UpdateOverlaps
            ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
             (TArrayView<FOverlapInfo_const_,int> *)0x0);
  pFVar2 = IStreamingManager::Get();
  (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return true;
}

// SetLooping @ 14ad0a460

void __thiscall UPaperFlipbookComponent::SetLooping(UPaperFlipbookComponent *this,bool param_1)

{
  this->bLooping = 0;
  *(uint *)&this->field_0x5a4 = *(uint *)&this->field_0x5a4 | (uint)param_1;
  return;
}

// SetNewTime @ 14ad0a480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperFlipbookComponent::SetNewTime(UPaperFlipbookComponent *this,float param_1)

{
  float fVar1;
  int iVar2;
  UPaperFlipbook *pUVar3;
  int iVar4;
  
  fVar1 = this->AccumulatedTime;
  this->AccumulatedTime = param_1;
  if (fVar1 == param_1) {
    return;
  }
  iVar2 = this->CachedFrameIndex;
  pUVar3 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar3 == (UPaperFlipbook *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = UPaperFlipbook::GetKeyFrameIndexAtTime(pUVar3,this->AccumulatedTime,false);
  }
  this->CachedFrameIndex = iVar4;
  if (iVar4 != iVar2) {
    USceneComponent::UpdateChildTransforms((USceneComponent *)this,None,None);
    pUVar3 = (this->SourceFlipbook).field0_0x0.DebugPtr;
    if ((pUVar3 != (UPaperFlipbook *)0x0) && ((pUVar3->CollisionSource).Value == '\x02')) {
      UActorComponent::RecreatePhysicsState((UActorComponent *)this);
      USceneComponent::UpdateOverlaps
                ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                 (TArrayView<FOverlapInfo_const_,int> *)0x0);
    }
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  return;
}

// SetPlayRate @ 14ad0a4a0

void __thiscall UPaperFlipbookComponent::SetPlayRate(UPaperFlipbookComponent *this,float param_1)

{
  this->PlayRate = param_1;
  return;
}

// SetPlaybackPosition @ 14ad0a4b0

void __thiscall
UPaperFlipbookComponent::SetPlaybackPosition
          (UPaperFlipbookComponent *this,float param_1,bool param_2)

{
  float fVar1;
  UPaperFlipbook *this_00;
  
  fVar1 = this->AccumulatedTime;
  this->AccumulatedTime = param_1;
  if ((((param_2) && (this->bReversePlayback == 0)) &&
      (this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr, this_00 != (UPaperFlipbook *)0x0)) &&
     (this_00->FramesPerSecond != 0.0)) {
    UPaperFlipbook::GetNumFrames(this_00);
  }
  if (fVar1 != this->AccumulatedTime) {
    CalculateCurrentFrame(this);
  }
  return;
}

// SetPlaybackPositionInFrames @ 14ad0a520

void __thiscall
UPaperFlipbookComponent::SetPlaybackPositionInFrames
          (UPaperFlipbookComponent *this,int param_1,bool param_2)

{
  float fVar1;
  UPaperFlipbook *this_00;
  float fVar2;
  
  this_00 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  fVar2 = __real_41700000;
  if ((this_00 == (UPaperFlipbook *)0x0) || (fVar2 = this_00->FramesPerSecond, 0.0 < fVar2)) {
    fVar2 = (float)param_1 / fVar2;
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = this->AccumulatedTime;
  this->AccumulatedTime = fVar2;
  if ((((param_2) && (this->bReversePlayback == 0)) && (this_00 != (UPaperFlipbook *)0x0)) &&
     (this_00->FramesPerSecond != 0.0)) {
    UPaperFlipbook::GetNumFrames(this_00);
  }
  if (fVar1 != this->AccumulatedTime) {
    CalculateCurrentFrame(this);
  }
  return;
}

// SetSpriteColor @ 14ad0a680

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
UPaperFlipbookComponent::SetSpriteColor(UPaperFlipbookComponent *this,FLinearColor *param_1)

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

// StaticRegisterNativesUPaperFlipbookComponent @ 14ad0df90

void __cdecl UPaperFlipbookComponent::StaticRegisterNativesUPaperFlipbookComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_UPaperFlipbookComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 14ad0e1d0

void __thiscall UPaperFlipbookComponent::Stop(UPaperFlipbookComponent *this)

{
  this->bPlaying = 0;
  return;
}

// TickComponent @ 14ad0e1e0

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
UPaperFlipbookComponent::TickComponent
          (UPaperFlipbookComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_TickFlipbook> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_48;
  FStatMessage local_40;
  FName local_30;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_TickFlipbook;
  if (StatPtr_STAT_TickFlipbook == (FThreadSafeStaticStat<FStat_STAT_TickFlipbook>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_40,"STAT_TickFlipbook");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_TickFlipbook>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickFlipbook,*pFVar5,
                       L"Tick Flipbook","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar6;
  bVar3 = false;
  bVar4 = false;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  FVar8 = FVar2.ComparisonIndex.Value;
  uVar7 = FVar2.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    TickFlipbook(this,param_1);
    CalculateCurrentFrame(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_48.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_48.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_48.s.LowPart = FVar8.Value;
        local_48.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_48.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperFlipbookComponent.cpp"
                   ,0x15c);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable != false;
    FVar9 = local_30;
    if (bVar11) {
      local_48.s.LowPart = FVar8.Value;
      local_48.s.HighPart = uVar7;
      local_30 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar9 = FVar2;
      FVar10.Value = local_30.ComparisonIndex.Value;
    }
    TickFlipbook(this,param_1);
    CalculateCurrentFrame(this);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_40.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_40.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_48);
        local_40.StatData.Pad[4] = '\0';
        local_40.StatData.Pad[5] = '\0';
        local_40.StatData.Pad[6] = '\0';
        local_40.StatData.Pad[7] = '\0';
        local_40.StatData.Pad[0] = local_48.s.LowPart._0_1_;
        local_40.StatData.Pad[1] = local_48.s.LowPart._1_1_;
        local_40.StatData.Pad[2] = local_48.s.LowPart._2_1_;
        local_40.StatData.Pad[3] = local_48.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_40);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// TickFlipbook @ 14ad0e450

void __thiscall UPaperFlipbookComponent::TickFlipbook(UPaperFlipbookComponent *this,float param_1)

{
  float fVar1;
  UPaperFlipbook *pUVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = *(uint *)&this->field_0x5a4;
  bVar3 = false;
  if (ZPULL(uVar6,2,1) == 0) {
    return;
  }
  pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr;
  if (pUVar2 == (UPaperFlipbook *)0x0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = pUVar2->FramesPerSecond;
    if (fVar10 == 0.0) {
      uVar6 = *(uint *)&this->field_0x5a4;
      fVar10 = 0.0;
    }
    else {
      iVar5 = UPaperFlipbook::GetNumFrames(pUVar2);
      uVar6 = *(uint *)&this->field_0x5a4;
      fVar10 = (float)iVar5 / fVar10;
    }
  }
  fVar8 = this->PlayRate;
  uVar7 = uVar6 & 2;
  if (uVar7 != 0) {
    fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  }
  fVar1 = this->AccumulatedTime;
  fVar9 = fVar1 + fVar8 * param_1;
  bVar4 = false;
  if (fVar8 * param_1 <= 0.0) {
    if (0.0 <= fVar9) goto LAB_14ad0e61b;
    if ((uVar6 & 1) == 0) {
      *(uint *)&this->field_0x5a4 = uVar6 & 0xfffffffb;
      bVar4 = true;
    }
    else {
      this->AccumulatedTime = 0.0;
      if (((uVar7 == 0) &&
          (pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr, pUVar2 != (UPaperFlipbook *)0x0)) &&
         (pUVar2->FramesPerSecond != 0.0)) {
        UPaperFlipbook::GetNumFrames(pUVar2);
      }
      if (fVar1 != this->AccumulatedTime) {
        CalculateCurrentFrame(this);
      }
      fVar8 = this->AccumulatedTime;
      this->AccumulatedTime = fVar10;
      if (fVar8 != fVar10) {
        CalculateCurrentFrame(this);
      }
      if (0.0 < fVar10) {
        do {
          fVar9 = fVar9 + fVar10;
        } while (fVar9 < 0.0);
        goto LAB_14ad0e61b;
      }
    }
  }
  else {
    if (fVar9 <= fVar10) goto LAB_14ad0e61b;
    if ((uVar6 & 1) == 0) {
      *(uint *)&this->field_0x5a4 = uVar6 & 0xfffffffb;
      bVar3 = true;
      fVar9 = fVar10;
      goto LAB_14ad0e61b;
    }
    this->AccumulatedTime = fVar10;
    if (((uVar7 == 0) &&
        (pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr, pUVar2 != (UPaperFlipbook *)0x0)) &&
       (pUVar2->FramesPerSecond != 0.0)) {
      UPaperFlipbook::GetNumFrames(pUVar2);
    }
    if (fVar1 != this->AccumulatedTime) {
      CalculateCurrentFrame(this);
    }
    fVar8 = this->AccumulatedTime;
    this->AccumulatedTime = 0.0;
    if (fVar8 != 0.0) {
      CalculateCurrentFrame(this);
    }
    if (0.0 < fVar10) {
      do {
        fVar9 = fVar9 - fVar10;
      } while (fVar10 < fVar9);
      goto LAB_14ad0e61b;
    }
  }
  bVar3 = bVar4;
  fVar9 = 0.0;
LAB_14ad0e61b:
  fVar10 = this->AccumulatedTime;
  this->AccumulatedTime = fVar9;
  if (((this->bReversePlayback == 0) &&
      (pUVar2 = (this->SourceFlipbook).field0_0x0.DebugPtr, pUVar2 != (UPaperFlipbook *)0x0)) &&
     (pUVar2->FramesPerSecond != 0.0)) {
    UPaperFlipbook::GetNumFrames(pUVar2);
  }
  if (fVar10 != this->AccumulatedTime) {
    CalculateCurrentFrame(this);
  }
  if (bVar3) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFinishedPlaying,
               (void *)0x0);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14ad0f6f0

void __thiscall
UPaperFlipbookComponent::ValidateGeneratedRepEnums
          (UPaperFlipbookComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_SourceFlipbook,L"SourceFlipbook");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
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
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_SourceFlipbook != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Paper2D\\UHT\\PaperFlipbookComponent.gen.cpp"
                       ,0x620,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPaperFlipbookComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execGetFlipbook @ 14ad109f0

void __cdecl
UPaperFlipbookComponent::execGetFlipbook(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb30))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetFlipbookFramerate @ 14ad10a30

void __cdecl
UPaperFlipbookComponent::execGetFlipbookFramerate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x23].field_0x18 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x23].field_0x18 + 0x28);
    return;
  }
  *(undefined4 *)param_3 = __real_41700000;
  return;
}

// execGetFlipbookLength @ 14ad10a70

void __cdecl
UPaperFlipbookComponent::execGetFlipbookLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  UPaperFlipbook *this;
  int iVar2;
  float fVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPaperFlipbook **)&param_1[0x23].field_0x18;
  fVar3 = 0.0;
  if (this != (UPaperFlipbook *)0x0) {
    fVar1 = this->FramesPerSecond;
    if (fVar1 != 0.0) {
      iVar2 = UPaperFlipbook::GetNumFrames(this);
      fVar3 = (float)iVar2 / fVar1;
    }
    *(float *)param_3 = fVar3;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFlipbookLengthInFrames @ 14ad10ae0

void __cdecl
UPaperFlipbookComponent::execGetFlipbookLengthInFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UPaperFlipbook **)&param_1[0x23].field_0x18 != (UPaperFlipbook *)0x0) {
    iVar1 = UPaperFlipbook::GetNumFrames(*(UPaperFlipbook **)&param_1[0x23].field_0x18);
    *(int *)param_3 = iVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetPlayRate @ 14ad11210

void __cdecl
UPaperFlipbookComponent::execGetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}

// execGetPlaybackPosition @ 14ad11240

void __cdecl
UPaperFlipbookComponent::execGetPlaybackPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x24].field_0x8;
  return;
}

// execGetPlaybackPositionInFrames @ 14ad11270

void __cdecl
UPaperFlipbookComponent::execGetPlaybackPositionInFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  UPaperFlipbook *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPaperFlipbook **)&param_1[0x23].field_0x18;
  if (this != (UPaperFlipbook *)0x0) {
    fVar1 = this->FramesPerSecond;
    iVar2 = UPaperFlipbook::GetNumFrames(this);
    if (0 < iVar2) {
      iVar3 = (int)(fVar1 * *(float *)&param_1[0x24].field_0x8);
      iVar4 = iVar2 + -1;
      if (iVar3 < iVar2 + -1) {
        iVar4 = iVar3;
      }
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
    }
  }
  *(int *)param_3 = iVar5;
  return;
}

// execGetSpriteColor @ 14ad11540

void __cdecl
UPaperFlipbookComponent::execGetSpriteColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x24].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x24].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execIsLooping @ 14ad11fb0

void __cdecl UPaperFlipbookComponent::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x24].field_0x4 & 1;
  return;
}

// execIsPlaying @ 14ad11fe0

void __cdecl UPaperFlipbookComponent::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x24].field_0x4 >> 2) & 1;
  return;
}

// execIsReversing @ 14ad12010

void __cdecl
UPaperFlipbookComponent::execIsReversing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = ((byte)*(undefined4 *)&param_1[0x24].field_0x4 & 6) == 6;
  return;
}

// execOnRep_SourceFlipbook @ 14ad12710

void __cdecl
UPaperFlipbookComponent::execOnRep_SourceFlipbook(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res8;
  
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
  if (local_res8 != *(longlong *)&param_1[0x23].field_0x18) {
    *(undefined8 *)&param_1[0x23].field_0x18 = 0;
    (**(code **)(*(longlong *)param_1 + 0xb28))(param_1);
  }
  return;
}

// execPlay @ 14ad12800

void __cdecl UPaperFlipbookComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,0);
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 & 0xfffffffd;
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 | 4;
  return;
}

// execPlayFromStart @ 14ad12850

void __cdecl
UPaperFlipbookComponent::execPlayFromStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x24].field_0x8;
  *(undefined4 *)&param_1[0x24].field_0x8 = 0;
  if (fVar1 != 0.0) {
    CalculateCurrentFrame((UPaperFlipbookComponent *)param_1);
  }
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,0);
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 & 0xfffffffd;
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 | 4;
  return;
}

// execReverse @ 14ad12b70

void __cdecl UPaperFlipbookComponent::execReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,0);
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 | 6;
  return;
}

// execReverseFromEnd @ 14ad12bb0

void __cdecl
UPaperFlipbookComponent::execReverseFromEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  UPaperFlipbook *this;
  int iVar2;
  float fVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPaperFlipbook **)&param_1[0x23].field_0x18;
  fVar3 = 0.0;
  if ((this != (UPaperFlipbook *)0x0) && (fVar1 = this->FramesPerSecond, fVar3 = 0.0, fVar1 != 0.0))
  {
    iVar2 = UPaperFlipbook::GetNumFrames(this);
    fVar3 = (float)iVar2 / fVar1;
  }
  fVar1 = *(float *)&param_1[0x24].field_0x8;
  *(float *)&param_1[0x24].field_0x8 = fVar3;
  if (fVar1 != fVar3) {
    CalculateCurrentFrame((UPaperFlipbookComponent *)param_1);
  }
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,0);
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 | 6;
  return;
}

// execSetFlipbook @ 14ad12d70

void __cdecl
UPaperFlipbookComponent::execSetFlipbook(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetLooping @ 14ad13280

void __cdecl UPaperFlipbookComponent::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 & 0xfffffffe;
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 | (uint)(local_res8[0] != 0)
  ;
  return;
}

// execSetNewTime @ 14ad13320

void __cdecl UPaperFlipbookComponent::execSetNewTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x24].field_0x8;
  *(float *)&param_1[0x24].field_0x8 = local_res8[0];
  if (fVar1 != local_res8[0]) {
    CalculateCurrentFrame((UPaperFlipbookComponent *)param_1);
  }
  return;
}

// execSetPlayRate @ 14ad133c0

void __cdecl
UPaperFlipbookComponent::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  return;
}

// execSetPlaybackPosition @ 14ad13450

void __cdecl
UPaperFlipbookComponent::execSetPlaybackPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  UPaperFlipbook *this;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x24].field_0x8;
  *(undefined4 *)&param_1[0x24].field_0x8 = local_res8[0];
  if ((((local_res10[0] != 0) && ((param_1[0x24].field_0x4 & 2) == 0)) &&
      (this = *(UPaperFlipbook **)&param_1[0x23].field_0x18, this != (UPaperFlipbook *)0x0)) &&
     (this->FramesPerSecond != 0.0)) {
    UPaperFlipbook::GetNumFrames(this);
  }
  if (fVar1 != *(float *)&param_1[0x24].field_0x8) {
    CalculateCurrentFrame((UPaperFlipbookComponent *)param_1);
  }
  return;
}

// execSetPlaybackPositionInFrames @ 14ad13580

void __cdecl
UPaperFlipbookComponent::execSetPlaybackPositionInFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  UPaperFlipbook *this;
  float fVar3;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPaperFlipbook **)&param_1[0x23].field_0x18;
  fVar3 = __real_41700000;
  if ((this == (UPaperFlipbook *)0x0) || (fVar3 = this->FramesPerSecond, 0.0 < fVar3)) {
    fVar3 = (float)local_res10[0] / fVar3;
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = *(float *)&param_1[0x24].field_0x8;
  *(float *)&param_1[0x24].field_0x8 = fVar3;
  if ((((local_res8[0] != 0) && ((param_1[0x24].field_0x4 & 2) == 0)) &&
      (this != (UPaperFlipbook *)0x0)) && (this->FramesPerSecond != 0.0)) {
    UPaperFlipbook::GetNumFrames(this);
  }
  if (fVar1 != *(float *)&param_1[0x24].field_0x8) {
    CalculateCurrentFrame((UPaperFlipbookComponent *)param_1);
  }
  return;
}

// execSetSpriteColor @ 14ad13770

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
UPaperFlipbookComponent::execSetSpriteColor(UObject *param_1,FFrame *param_2,void *param_3)

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
     (((local_68 != *(float *)&param_1[0x24].field_0x10 ||
       (local_64 != *(float *)&param_1[0x24].field_0x14)) ||
      ((local_60 != *(float *)&param_1[0x24].field_0x18 ||
       (local_5c != *(float *)&param_1[0x24].field_0x1c)))))) {
    *(ulonglong *)&param_1[0x24].field_0x10 = CONCAT44(fStack_54,local_58);
    *(ulonglong *)&param_1[0x24].field_0x18 = CONCAT44(fStack_4c,fStack_50);
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  }
  return;
}

// execStop @ 14ad14000

void __cdecl UPaperFlipbookComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x24].field_0x4 = *(uint *)&param_1[0x24].field_0x4 & 0xfffffffb;
  return;
}

