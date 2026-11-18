// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 24

// StaticClass @ 14acdcf50

UClass * __cdecl UPaperTerrainComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainComponent",
               &Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton,
               StaticRegisterNativesUPaperTerrainComponent,0x5a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTerrainComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton;
}

// UPaperTerrainComponent @ 14aceab10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPaperTerrainComponent * __thiscall
UPaperTerrainComponent::UPaperTerrainComponent(UPaperTerrainComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->TerrainMaterial).field0_0x0.DebugPtr = (UPaperTerrainMaterial *)0x0;
  (this->AssociatedSpline).field0_0x0.DebugPtr = (UPaperTerrainSplineComponent *)0x0;
  (this->CachedBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->GeneratedSpriteGeometry).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedSpriteGeometry).ArrayNum = 0;
  (this->GeneratedSpriteGeometry).ArrayMax = 0;
  return this;
}

// UPaperTerrainComponent @ 14aceaba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPaperTerrainComponent * __thiscall
UPaperTerrainComponent::UPaperTerrainComponent
          (UPaperTerrainComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  FLinearColor FVar3;
  void *pvVar4;
  TObjectPtr<UPaperTerrainMaterial>_u_0 TVar5;
  ulonglong uVar6;
  FString local_18;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  uVar6 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TerrainMaterial).field0_0x0.DebugPtr = (UPaperTerrainMaterial *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->AssociatedSpline).field0_0x0.DebugPtr = (UPaperTerrainSplineComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pvVar4 = ThreadLocalStoragePointer;
  this->bFilledSpline = true;
  this->SegmentOverlapAmount = 100.0;
  FVar3 = FLinearColor::White;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x80;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar6 * 8);
  (this->TerrainColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  this->ReparamStepsPerSegment = 8;
  (this->SpriteCollisionDomain).Value = '\x02';
  this->CollisionThickness = 200.0;
  (this->CachedBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->GeneratedSpriteGeometry).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedSpriteGeometry).ArrayNum = 0;
  (this->GeneratedSpriteGeometry).ArrayMax = 0;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&DefaultMaterialRef);
      DefaultMaterialRef.Object.field0_0x0 = (TObjectPtr<UPaperTerrainMaterial>_u_0)(FObjectPtr)0x0;
      DefaultMaterialRef._padding_ =
           (longlong)&___7__FObjectFinder_VUPaperTerrainMaterial___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor(L"/Paper2D/DefaultPaperTerrainMaterial");
      ::FString::FString(&local_18,L"/Paper2D/DefaultPaperTerrainMaterial");
      ConstructorHelpers::StripObjectClass(&local_18,true);
      TVar5.DebugPtr =
           ConstructorHelpersInternal::FindOrLoadObject<UPaperTerrainMaterial>(&local_18,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (TVar5.DebugPtr == (UPaperTerrainMaterial *)0x0)) {
        DefaultMaterialRef.Object.field0_0x0 =
             (TObjectPtr<UPaperTerrainMaterial>_u_0)
             (TObjectPtr<UPaperTerrainMaterial>_u_0)TVar5.DebugPtr;
        if (TVar5.DebugPtr == (UPaperTerrainMaterial *)0x0) {
          ConstructorHelpers::FailedToFind(L"/Paper2D/DefaultPaperTerrainMaterial");
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        DefaultMaterialRef.Object.field0_0x0 =
             (TObjectPtr<UPaperTerrainMaterial>_u_0)
             (TObjectPtr<UPaperTerrainMaterial>_u_0)TVar5.DebugPtr;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`UPaperTerrainComponent::UPaperTerrainComponent'::__l2::
             _dynamic_atexit_destructor_for__DefaultMaterialRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (DefaultMaterialRef.Object.field0_0x0 != (UPaperTerrainMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)DefaultMaterialRef.Object.field0_0x0);
  }
  (this->TerrainMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)DefaultMaterialRef.Object.field0_0x0;
  return this;
}

// ~UPaperTerrainComponent @ 14acebce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::~UPaperTerrainComponent(UPaperTerrainComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  DestructItems<FPaperTerrainSpriteGeometry,int>
            ((FPaperTerrainSpriteGeometry *)(this->GeneratedSpriteGeometry).AllocatorInstance.Data,
             (this->GeneratedSpriteGeometry).ArrayNum);
  pFVar1 = (this->GeneratedSpriteGeometry).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AdditionalStatObject @ 14acef060

UObject * __thiscall UPaperTerrainComponent::AdditionalStatObject(UPaperTerrainComponent *this)

{
  return (UObject *)(this->TerrainMaterial).field0_0x0.DebugPtr;
}

// CalcBounds @ 14acf05a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UPaperTerrainComponent::CalcBounds
          (UPaperTerrainComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  UBodySetup *pUVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  longlong lVar11;
  UPaperTerrainComponent *pUVar12;
  FScriptContainerElement *pFVar13;
  TTransform<double> *pTVar14;
  TBoxSphereBounds<double,double> *this_00;
  ulonglong uVar15;
  double *pdVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  double *pdVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_268 [32];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240;
  longlong local_238;
  UPaperTerrainComponent *local_230;
  FScriptContainerElement *local_228;
  TTransform<double> *local_220;
  TBoxSphereBounds<double,double> *local_218;
  TVector<double>_u_0 local_210;
  undefined1 auStack_1f8 [12];
  undefined4 uStack_1ec;
  double local_1e8;
  double local_1e0;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TMatrix<double> local_198;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  char local_e8;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_268;
  pFVar18 = (this->GeneratedSpriteGeometry).AllocatorInstance.Data;
  local_e7 = 0;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  bVar10 = false;
  local_e3 = 0;
  dVar1 = 0.0;
  dVar2 = 0.0;
  local_118._s_0.Z = 0.0;
  dStack_100 = 0.0;
  local_e1 = 0;
  local_240 = (this->GeneratedSpriteGeometry).ArrayNum;
  uVar15 = (ulonglong)(int)local_240;
  dVar27 = 0.0;
  dVar29 = 0.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  dVar3 = 0.0;
  local_228 = pFVar18 + uVar15 * 0x20;
  dVar4 = 0.0;
  local_230 = this;
  local_220 = param_1;
  local_218 = __return_storage_ptr__;
  while( true ) {
    pFVar13 = local_228;
    pUVar12 = local_230;
    if ((local_230->GeneratedSpriteGeometry).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FPaperTerrainSpriteGeometry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_248);
    }
    pTVar14 = local_220;
    if (pFVar18 == pFVar13) break;
    local_244 = *(uint *)(pFVar18 + 8);
    uVar15 = (ulonglong)(int)local_244;
    lVar19 = *(longlong *)pFVar18;
    piVar17 = (int *)(lVar19 + 0x130);
    local_238 = uVar15 * 0x140 + lVar19;
    while( true ) {
      lVar11 = local_238;
      if (*(int *)(pFVar18 + 8) != (int)uVar15) {
        `TCheckedPointerIterator<FSpriteDrawCallRecord_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_248);
      }
      if (lVar19 == lVar11) break;
      pdVar16 = *(double **)(piVar17 + -4);
      iVar6 = *piVar17;
      if (pdVar16 == (double *)0x0) {
        pdVar16 = (double *)(piVar17 + -0x34);
      }
      pdVar20 = pdVar16 + (longlong)iVar6 * 4;
      while( true ) {
        if (*piVar17 != iVar6) {
          `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_248);
        }
        if (pdVar16 == pdVar20) break;
        dVar26 = *pdVar16;
        dVar5 = pdVar16[1];
        dVar28 = dVar5 * PaperAxisY.field0_0x0._s_0.X + dVar26 * PaperAxisX.field0_0x0._s_0.X;
        dVar21 = dVar5 * PaperAxisY.field0_0x0._s_0.Y + dVar26 * PaperAxisX.field0_0x0._s_0.Y;
        dVar26 = dVar5 * PaperAxisY.field0_0x0._s_0.Z + dVar26 * PaperAxisX.field0_0x0._s_0.Z;
        if (bVar10) {
          if (dVar28 <= dVar2) {
            dVar2 = dVar28;
          }
          pdVar16 = pdVar16 + 4;
          if (dVar21 <= dVar1) {
            dVar1 = dVar21;
          }
          if (dVar26 <= dVar29) {
            dVar29 = dVar26;
          }
          if (dVar27 <= dVar28) {
            dVar27 = dVar28;
          }
          if (dVar4 <= dVar21) {
            dVar4 = dVar21;
          }
          if (dVar3 <= dVar26) {
            dVar3 = dVar26;
          }
        }
        else {
          bVar10 = true;
          pdVar16 = pdVar16 + 4;
          dVar4 = dVar21;
          dVar3 = dVar26;
          dVar2 = dVar28;
          dVar1 = dVar21;
          dVar27 = dVar28;
          dVar29 = dVar26;
          local_118._s_0.Z = dVar26;
          dStack_f0 = dVar26;
        }
      }
      lVar19 = lVar19 + 0x140;
      uVar15 = (ulonglong)local_244;
      piVar17 = piVar17 + 0x50;
    }
    pFVar18 = pFVar18 + 0x20;
    uVar15 = (ulonglong)local_240;
  }
  dVar2 = dVar2 - PaperAxisZ.field0_0x0._s_0.X * __real_3fe0000000000000;
  dVar1 = dVar1 - PaperAxisZ.field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar29 = dVar29 - PaperAxisZ.field0_0x0._s_0.Z * __real_3fe0000000000000;
  dVar21 = (dVar27 + PaperAxisZ.field0_0x0._s_0.X * __real_3fe0000000000000) - dVar2;
  dVar4 = (dVar4 + PaperAxisZ.field0_0x0._s_0.Y * __real_3fe0000000000000) - dVar1;
  dVar27 = (dVar3 + PaperAxisZ.field0_0x0._s_0.Z * __real_3fe0000000000000) - dVar29;
  dVar5 = dVar21 * __real_3fe0000000000000;
  dVar26 = dVar4 * __real_3fe0000000000000;
  dVar3 = dVar27 * __real_3fe0000000000000;
  dVar1 = dVar26 + dVar1;
  dVar21 = SQRT((dVar4 * dVar4 + dVar21 * dVar21 + dVar27 * dVar27) * __real_3fd0000000000000);
  dVar2 = dVar5 + dVar2;
  dVar29 = dVar3 + dVar29;
  local_1a8 = dVar21;
  UE::Math::TTransform<double>::ToMatrixWithScale(local_220,&local_198);
  this_00 = local_218;
  auVar31._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_198.M[0][0] * dVar5) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.M[0][0] * dVar5,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = SUB84(local_198.M[0][1] * dVar5,0) & _UNK_15061cc88;
  auVar31._12_4_ = (uint)((ulonglong)(local_198.M[0][1] * dVar5) >> 0x20) & _UNK_15061cc8c;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_198.M[2][0] * dVar3) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.M[2][0] * dVar3,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(local_198.M[2][1] * dVar3,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)(local_198.M[2][1] * dVar3) >> 0x20) & _UNK_15061cc8c;
  auStack_1f8._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_198.M[1][0] * dVar26) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.M[1][0] * dVar26,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar31._0_8_ +
       auVar22._0_8_;
  dVar4 = (double)CONCAT44((uint)((ulonglong)(local_198.M[1][1] * dVar26) >> 0x20) & _UNK_15061cc8c,
                           SUB84(local_198.M[1][1] * dVar26,0) & _UNK_15061cc88) + auVar31._8_8_ +
          auVar22._8_8_;
  local_1e8 = (double)CONCAT44((uint)((ulonglong)(local_198.M[1][2] * dVar26) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_198.M[1][2] * dVar26,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(local_198.M[0][2] * dVar5) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_198.M[0][2] * dVar5,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(local_198.M[2][2] * dVar3) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_198.M[2][2] * dVar3,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auStack_1f8._8_4_ = SUB84(dVar4,0);
  local_198.M[3][1] =
       local_198.M[1][1] * dVar1 + local_198.M[0][1] * dVar2 + local_198.M[2][1] * dVar29 +
       local_198.M[3][1];
  auVar30._0_8_ =
       local_198.M[1][0] * local_198.M[1][0] + local_198.M[0][0] * local_198.M[0][0] +
       local_198.M[2][0] * local_198.M[2][0];
  auVar30._8_8_ =
       local_198.M[1][1] * local_198.M[1][1] + local_198.M[0][1] * local_198.M[0][1] +
       local_198.M[2][1] * local_198.M[2][1];
  auVar23._8_4_ = SUB84(auVar30._8_8_,0);
  auVar23._0_8_ = auVar30._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar24._8_8_ = auVar30._8_8_;
  auVar24._0_8_ = auVar23._8_8_;
  auVar31 = maxpd(auVar30,auVar24);
  dVar27 = local_198.M[1][2] * local_198.M[1][2] + local_198.M[0][2] * local_198.M[0][2] +
           local_198.M[2][2] * local_198.M[2][2];
  auVar32._8_4_ = SUB84(local_198.M[3][1],0);
  auVar32._0_8_ =
       local_198.M[1][0] * dVar1 + local_198.M[0][0] * dVar2 + local_198.M[2][0] * dVar29 +
       local_198.M[3][0];
  auVar32._12_4_ = (int)((ulonglong)local_198.M[3][1] >> 0x20);
  *(undefined1 (*) [16])&(local_218->Origin).field0_0x0 = auVar32;
  local_1e0 = SQRT(local_1e8 * local_1e8 + (double)auStack_1f8._0_8_ * (double)auStack_1f8._0_8_ +
                   dVar4 * dVar4);
  auVar8._8_4_ = SUB84(dVar27,0);
  auVar8._0_8_ = dVar27;
  auVar8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  auVar32 = maxpd(auVar31,auVar8);
  local_210._s_0.Z =
       local_198.M[1][2] * dVar1 + local_198.M[0][2] * dVar2 + local_198.M[2][2] * dVar29 +
       local_198.M[3][2];
  dVar21 = SQRT(auVar32._0_8_) * dVar21;
  uStack_1ec = (int)((ulonglong)dVar4 >> 0x20);
  if (dVar21 <= local_1e0) {
    local_1e0 = dVar21;
  }
  (local_218->Origin).field0_0x0._s_0.Z = local_210._s_0.Z;
  (local_218->BoxExtent).field0_0x0._s_0.X = (double)auStack_1f8._0_8_;
  (local_218->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (local_218->BoxExtent).field0_0x0._s_0.Z = local_1e8;
  local_218->SphereRadius = local_1e0;
  pUVar7 = (pUVar12->CachedBodySetup).field0_0x0.DebugPtr;
  if ((pUVar7 != (UBodySetup *)0x0) &&
     (local_1d8._s_0.Z = dVar29, dStack_1b0 = dVar3,
     FKAggregateGeom::CalcAABB(&pUVar7->AggGeom,(TBox<double> *)&local_118._s_0,pTVar14),
     local_e8 != '\0')) {
    dVar2 = dStack_100 - local_118._s_0.X;
    dVar27 = local_f8 - local_118._s_0.Y;
    dVar1 = dStack_f0 - local_118._s_0.Z;
    auVar25._0_8_ = dVar1 * __real_3fe0000000000000;
    auVar25._8_8_ = 0;
    local_210._s_0.X = local_118._s_0.X + dVar2 * __real_3fe0000000000000;
    local_210._s_0.Z = local_118._s_0.Z + auVar25._0_8_;
    stack0xfffffffffffffe10 = dVar27 * __real_3fe0000000000000;
    auStack_1f8._0_8_ = dVar2 * __real_3fe0000000000000;
    local_210._s_0.Y = local_118._s_0.Y + dVar27 * __real_3fe0000000000000;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (dVar27 * dVar27 + dVar2 * dVar2 + dVar1 * dVar1) * __real_3fd0000000000000;
    auVar32 = sqrtpd(auVar25,auVar9);
    local_1e0 = auVar32._0_8_;
    local_1e8 = auVar25._0_8_;
    UE::Math::TBoxSphereBounds<double,double>::operator+
              (this_00,(TBoxSphereBounds<double,double> *)&local_1d8._s_0,
               (TBoxSphereBounds<double,double> *)&local_210._s_0);
    (this_00->Origin).field0_0x0._s_0.X = local_1d8._s_0.X;
    (this_00->Origin).field0_0x0._s_0.Y = local_1d8._s_0.Y;
    (this_00->Origin).field0_0x0._s_0.Z = local_1d8._s_0.Z;
    (this_00->BoxExtent).field0_0x0._s_0.X = dStack_1c0;
    (this_00->BoxExtent).field0_0x0._s_0.Y = local_1b8;
    (this_00->BoxExtent).field0_0x0._s_0.Z = dStack_1b0;
    this_00->SphereRadius = local_1a8;
  }
  dVar2 = (this_00->BoxExtent).field0_0x0._s_0.Y;
  dVar27 = (double)*(float *)((longlong)&pUVar12->_padding_ + 4);
  dVar1 = (this_00->BoxExtent).field0_0x0._s_0.Z;
  (this_00->BoxExtent).field0_0x0._s_0.X = (this_00->BoxExtent).field0_0x0._s_0.X * dVar27;
  (this_00->BoxExtent).field0_0x0._s_0.Y = dVar2 * dVar27;
  (this_00->BoxExtent).field0_0x0._s_0.Z = dVar27 * dVar1;
  this_00->SphereRadius =
       (double)*(float *)((longlong)&pUVar12->_padding_ + 4) * this_00->SphereRadius;
  return this_00;
}

// ConstrainSplinePointsToXZ @ 14acf2160

void __thiscall UPaperTerrainComponent::ConstrainSplinePointsToXZ(UPaperTerrainComponent *this)

{
  UPaperTerrainSplineComponent *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  FSplinePoint local_a8;
  
  this_00 = (this->AssociatedSpline).field0_0x0.DebugPtr;
  if (this_00 != (UPaperTerrainSplineComponent *)0x0) {
    bVar1 = false;
    iVar2 = USplineComponent::GetNumberOfSplinePoints((USplineComponent *)this_00);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        USplineComponent::GetSplinePointAt
                  ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,&local_a8,iVar3,
                   Local);
        if (((local_a8.ArriveTangent.field0_0x0._s_0.Y != 0.0) ||
            (local_a8.LeaveTangent.field0_0x0._s_0.Y != 0.0)) ||
           (local_a8.Position.field0_0x0._s_0.Y != 0.0)) {
          local_e0._s_0.X = local_a8.ArriveTangent.field0_0x0._s_0.X;
          local_e0._s_0.Z = local_a8.ArriveTangent.field0_0x0._s_0.Z;
          local_f8._s_0.X = local_a8.LeaveTangent.field0_0x0._s_0.X;
          local_f8._s_0.Y = 0.0;
          local_e0._s_0.Y = 0.0;
          local_f8._s_0.Z = local_a8.LeaveTangent.field0_0x0._s_0.Z;
          USplineComponent::SetTangentsAtSplinePoint
                    ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,iVar3,
                     (TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_f8._s_0,Local,false
                    );
          local_c8._s_0.X = local_a8.Position.field0_0x0._s_0.X;
          local_c8._s_0.Y = 0.0;
          local_c8._s_0.Z = local_a8.Position.field0_0x0._s_0.Z;
          USplineComponent::SetLocationAtSplinePoint
                    ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,iVar3,
                     (TVector<double> *)&local_c8._s_0,Local,false);
          bVar1 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
      if (bVar1) {
        (**(code **)(*(longlong *)(this->AssociatedSpline).field0_0x0.DebugPtr + 0xad0))();
      }
    }
  }
  return;
}

// CreateSceneProxy @ 14acf4d20

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
UPaperTerrainComponent::CreateSceneProxy(UPaperTerrainComponent *this)

{
  FPaperTerrainSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x660);
  if (pFVar1 != (FPaperTerrainSceneProxy *)0x0) {
    pFVar1 = FPaperTerrainSceneProxy::FPaperTerrainSceneProxy
                       (pFVar1,this,&this->GeneratedSpriteGeometry);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GenerateCollisionDataFromPolygon @ 14acf7d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperTerrainComponent::GenerateCollisionDataFromPolygon
          (UPaperTerrainComponent *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  UBodySetup *pUVar5;
  FKConvexElem *pFVar6;
  code *pcVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  double dVar25;
  undefined1 auStackY_298 [32];
  ForAnyElementType local_248;
  uint local_240;
  uint uStack_23c;
  undefined1 local_238 [4];
  undefined4 local_234;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_230;
  uint local_220;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_218;
  longlong local_210;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_208;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1f8;
  uint local_1e8;
  longlong local_1e0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1d8;
  FScriptContainerElement *local_1c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1b8;
  UPaperTerrainComponent *local_1b0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_1a8;
  FKConvexElem local_198;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (((this->CachedBodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) && (2 < param_3->ArrayNum))
  {
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_218 = param_1;
    local_1b8 = param_2;
    local_1b0 = this;
    FGeomTools2D::GenerateConvexPolygonsFromTriangles(&local_208,param_3);
    dVar12 = __real_3ef4f8b580000000;
    fVar11 = __real_3f000000;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar8 = __real_bf000000;
    uVar18 = (ulonglong)local_208.ArrayNum;
    local_1a8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                (local_208.AllocatorInstance.Data + uVar18 * 0x10);
    local_248.Data = (FScriptContainerElement *)0x0;
    local_240 = 0;
    uStack_23c = 0;
    local_1e8 = local_208.ArrayNum;
    FVar22.Data = local_208.AllocatorInstance.Data;
    while( true ) {
      pTVar14 = local_1a8;
      local_1c0 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar22.Data;
      if (local_208.ArrayNum != (int)uVar18) {
        local_238[0] = 0;
        `TCheckedPointerIterator<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_238);
      }
      if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar22.Data == pTVar14)
      break;
      local_230.ArrayNum =
           ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar22.Data)->ArrayNum
      ;
      lVar20 = (longlong)local_230.ArrayNum;
      pFVar24 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar22.Data)->
                AllocatorInstance).Data;
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_230.ArrayNum == 0) {
        local_230.ArrayMax = 0;
        uVar21 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_230.ArrayNum,0,&local_230.AllocatorInstance,local_230.ArrayNum,
                   &local_230.ArrayMax);
        memcpy(local_230.AllocatorInstance.Data,pFVar24,lVar20 << 4);
        uVar21 = local_230.ArrayNum;
      }
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      local_240 = 0;
      if (uStack_23c != uVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar21,&local_248,0,(int *)&uStack_23c);
        uVar21 = local_230.ArrayNum;
      }
      local_220 = 0;
      if (0 < (int)uVar21) {
        local_210 = 0;
        do {
          lVar20 = local_210;
          uVar16 = local_220;
          uVar19 = 0;
          if ((int)local_220 < (int)uVar21) {
            uVar19 = ~local_220 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar21 = local_230.ArrayNum, bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_1c8 = local_230.AllocatorInstance.Data;
          uVar19 = (int)(uVar16 + 1) % (int)uVar21;
          uVar16 = 0;
          if ((int)uVar19 < (int)uVar21) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = 0;
          pFVar24 = local_230.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10;
          local_1e0 = 0;
          iVar17 = param_1->ArrayNum;
          if (0 < iVar17) {
            lVar23 = 0;
            do {
              uVar19 = (int)(uVar21 + 1) % iVar17;
              lVar20 = (longlong)(int)uVar19;
              uVar16 = 0;
              if ((int)uVar21 < iVar17) {
                uVar16 = ~uVar21 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar4 = (local_218->AllocatorInstance).Data;
              dVar25 = *(double *)(local_1c8 + local_210) - *(double *)(pFVar4 + lVar23);
              if (((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                    SUB84(dVar25,0) & uVar9) <= dVar12) &&
                 (dVar25 = *(double *)(local_1c8 + local_210 + 8) - *(double *)(pFVar4 + lVar23 + 8)
                 , (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                    SUB84(dVar25,0) & uVar9) <= dVar12)) {
                uVar16 = 0;
                if ((int)uVar19 < local_218->ArrayNum) {
                  uVar16 = ~uVar19 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar4 = (local_218->AllocatorInstance).Data;
                dVar25 = *(double *)pFVar24 - *(double *)(pFVar4 + lVar20 * 0x10);
                if ((dVar12 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                               SUB84(dVar25,0) & uVar9)) ||
                   (dVar25 = *(double *)(pFVar24 + 8) - *(double *)(pFVar4 + lVar20 * 0x10 + 8),
                   param_1 = local_218,
                   dVar12 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                             SUB84(dVar25,0) & uVar9))) goto LAB_14acf81c8;
LAB_14acf80c7:
                pTVar13 = local_1b8;
                uVar16 = 0;
                if ((int)uVar21 < local_1b8->ArrayNum) {
                  uVar16 = ~uVar21 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar24 = (pTVar13->AllocatorInstance).Data + local_1e0 * 4;
                if (((local_248.Data <= pFVar24) &&
                    (pFVar24 < local_248.Data + (longlong)(int)uStack_23c * 4)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (local_240 == uStack_23c) {
                  local_240 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_248,(int *)&uStack_23c);
                }
                *(undefined4 *)(local_248.Data + (longlong)(int)local_240 * 4) =
                     *(undefined4 *)pFVar24;
                lVar20 = local_210;
                goto LAB_14acf839c;
              }
LAB_14acf81c8:
              uVar16 = 0;
              if ((int)uVar21 < local_218->ArrayNum) {
                uVar16 = ~uVar21 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              param_1 = local_218;
              pFVar4 = (local_218->AllocatorInstance).Data;
              dVar25 = *(double *)pFVar24 - *(double *)(pFVar4 + lVar23);
              if (((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                    SUB84(dVar25,0) & uVar9) <= dVar12) &&
                 (dVar25 = *(double *)(pFVar24 + 8) - *(double *)(pFVar4 + lVar23 + 8),
                 (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,SUB84(dVar25,0) & uVar9
                                 ) <= dVar12)) {
                uVar16 = 0;
                if ((int)uVar19 < local_218->ArrayNum) {
                  uVar16 = ~uVar19 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar4 = (param_1->AllocatorInstance).Data;
                dVar25 = *(double *)(local_1c8 + local_210) - *(double *)(pFVar4 + lVar20 * 0x10);
                if (((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                      SUB84(dVar25,0) & uVar9) <= dVar12) &&
                   (dVar25 = *(double *)(local_1c8 + local_210 + 8) -
                             *(double *)(pFVar4 + lVar20 * 0x10 + 8),
                   (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,
                                    SUB84(dVar25,0) & uVar9) <= dVar12)) goto LAB_14acf80c7;
              }
              local_1e0 = local_1e0 + 1;
              uVar21 = uVar21 + 1;
              iVar17 = param_1->ArrayNum;
              lVar23 = lVar23 + 0x10;
              lVar20 = local_210;
            } while ((int)uVar21 < iVar17);
          }
          local_234 = 0;
          if (((local_248.Data <= (FScriptContainerElement *)&local_234) &&
              ((FScriptContainerElement *)&local_234 <
               local_248.Data + (longlong)(int)uStack_23c * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_240 == uStack_23c) {
            local_240 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_248,(int *)&uStack_23c);
          }
          *(undefined4 *)(local_248.Data + (longlong)(int)local_240 * 4) = local_234;
LAB_14acf839c:
          local_240 = local_240 + 1;
          local_210 = lVar20 + 0x10;
          local_220 = local_220 + 1;
          this = local_1b0;
          uVar21 = local_230.ArrayNum;
        } while ((int)local_220 < local_230.ArrayNum);
      }
      FVar22.Data = local_248.Data;
      lVar20 = (longlong)(int)local_240;
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = local_240;
      if (local_240 == 0) {
        local_1d8.ArrayMax = local_240;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_240,0,&local_1d8.AllocatorInstance,local_240,&local_1d8.ArrayMax);
        memcpy(local_1d8.AllocatorInstance.Data,FVar22.Data,lVar20 << 2);
      }
      CreateExtrudedConvexHull(&local_1f8,&local_230,&local_1d8);
      FKConvexElem::FKConvexElem(&local_198);
      uVar21 = 0;
      if (0 < local_1f8.ArrayNum) {
        lVar20 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar21 < local_1f8.ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar22.Data = local_1f8.AllocatorInstance.Data;
          if (local_198.VertexData.ArrayNum == local_198.VertexData.ArrayMax) {
            local_198.VertexData.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_198.VertexData.AllocatorInstance,
                            &local_198.VertexData.ArrayMax);
          }
          lVar23 = (longlong)local_198.VertexData.ArrayNum;
          uVar19 = local_198.VertexData.ArrayNum + 1;
          uVar16 = 0;
          if (local_198.VertexData.ArrayNum < (int)uVar19) {
            uVar16 = (uint)~local_198.VertexData.ArrayNum >> 0x1f;
          }
          local_198.VertexData.ArrayNum = uVar19;
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar24 = local_198.VertexData.AllocatorInstance.Data + lVar23 * 0x18;
          if (pFVar24 != (FScriptContainerElement *)0x0) {
            fVar2 = this->CollisionThickness;
            uVar3 = *(undefined8 *)(FVar22.Data + lVar20 + 8);
            *(undefined8 *)pFVar24 = *(undefined8 *)(FVar22.Data + lVar20);
            *(undefined8 *)(pFVar24 + 0x10) = uVar3;
            *(double *)(pFVar24 + 8) = (double)(fVar2 * fVar8);
          }
          uVar16 = local_198.VertexData.ArrayNum;
          if (local_198.VertexData.ArrayNum == local_198.VertexData.ArrayMax) {
            uVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_198.VertexData.AllocatorInstance,
                                &local_198.VertexData.ArrayMax);
          }
          local_198.VertexData.ArrayNum = uVar16 + 1;
          uVar19 = 0;
          if ((int)uVar16 < local_198.VertexData.ArrayNum) {
            uVar19 = ~uVar16 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar24 = local_198.VertexData.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
          if (pFVar24 != (FScriptContainerElement *)0x0) {
            fVar2 = this->CollisionThickness;
            uVar3 = *(undefined8 *)(FVar22.Data + lVar20 + 8);
            *(undefined8 *)pFVar24 = *(undefined8 *)(FVar22.Data + lVar20);
            *(undefined8 *)(pFVar24 + 0x10) = uVar3;
            *(double *)(pFVar24 + 8) = (double)(fVar2 * fVar11);
          }
          uVar21 = uVar21 + 1;
          lVar20 = lVar20 + 0x10;
        } while ((int)uVar21 < local_1f8.ArrayNum);
      }
      FKConvexElem::UpdateElemBox(&local_198);
      pUVar5 = (this->CachedBodySetup).field0_0x0.DebugPtr;
      pFVar6 = (FKConvexElem *)(pUVar5->AggGeom).ConvexElems.AllocatorInstance.Data;
      if (((pFVar6 <= &local_198) && (&local_198 < pFVar6 + (pUVar5->AggGeom).ConvexElems.ArrayMax))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = (pUVar5->AggGeom).ConvexElems.ArrayNum;
      piVar1 = &(pUVar5->AggGeom).ConvexElems.ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,0x10,&(pUVar5->AggGeom).ConvexElems.AllocatorInstance,piVar1);
      }
      (pUVar5->AggGeom).ConvexElems.ArrayNum = iVar17 + 1;
      FKConvexElem::FKConvexElem
                ((FKConvexElem *)
                 ((pUVar5->AggGeom).ConvexElems.AllocatorInstance.Data + (longlong)iVar17 * 0x100),
                 &local_198);
      FKConvexElem::~FKConvexElem(&local_198);
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
      if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.AllocatorInstance.Data);
      }
      FVar22.Data = (FScriptContainerElement *)(local_1c0 + 1);
      uVar18 = (ulonglong)local_1e8;
    }
    if (local_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data);
    }
    DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               local_208.AllocatorInstance.Data,local_208.ArrayNum);
    if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        local_208.AllocatorInstance.Data !=
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  return;
}

// GenerateFillRenderDataFromPolygon @ 14acf87a0

void __thiscall
UPaperTerrainComponent::GenerateFillRenderDataFromPolygon
          (UPaperTerrainComponent *this,UPaperSprite *param_1,FSpriteDrawCallRecord *param_2,
          TVector2<double> *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<UE::Math::TVector4<double>_> FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<UE::Math::TVector4<double>_> FVar13;
  int iVar14;
  double *pdVar15;
  longlong lVar16;
  uint uVar17;
  
  dVar9 = __real_bff0000000000000;
  iVar14 = param_4->ArrayNum;
  dVar8 = (double)(__real_3f800000 / param_1->PixelsPerUnrealUnit);
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if (2 < iVar14) {
    uVar17 = 0;
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar17 < iVar14) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = (param_2->RenderVerts).ArrayNum;
      pFVar5 = (param_4->AllocatorInstance).Data;
      if (uVar11 == (param_2->RenderVerts).ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                           (0x1020,&(param_2->RenderVerts).AllocatorInstance,
                            &(param_2->RenderVerts).ArrayMax);
      }
      (param_2->RenderVerts).ArrayNum = uVar11 + 1;
      uVar12 = 0;
      if ((int)uVar11 < (int)(uVar11 + 1)) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (param_2->RenderVerts).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<UE::Math::TVector4<double>_>)&param_2->RenderVerts;
      if (FVar6 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        FVar13 = FVar6;
      }
      pdVar15 = (double *)((longlong)(int)uVar11 * 0x20 + (longlong)FVar13);
      if (pdVar15 != (double *)0x0) {
        dVar3 = *(double *)(pFVar5 + lVar16);
        dVar4 = *(double *)(pFVar5 + lVar16 + 8);
        *pdVar15 = dVar3;
        pdVar15[1] = dVar4;
        pdVar15[2] = dVar3 / (dVar8 * dVar2);
        pdVar15[3] = (dVar9 / (dVar8 * dVar1)) * dVar4;
      }
      iVar14 = param_4->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar17 < iVar14);
  }
  return;
}

// GetBodySetup @ 14acf94c0

UBodySetup * __thiscall UPaperTerrainComponent::GetBodySetup(UPaperTerrainComponent *this)

{
  return (this->CachedBodySetup).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14acfd510

UClass * __cdecl UPaperTerrainComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainComponent",
               &Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton,
               StaticRegisterNativesUPaperTerrainComponent,0x5a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTerrainComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton;
}

// GetTransformAtDistance @ 14ad01940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UPaperTerrainComponent::GetTransformAtDistance
          (UPaperTerrainComponent *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  TVector<double> *pTVar8;
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  TQuat<double> *pTVar9;
  float fVar10;
  undefined1 extraout_var [12];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auStack_1e8 [32];
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TQuat<double> local_188;
  TMatrix<double> local_168;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  fVar10 = USplineComponent::GetSplineLength
                     ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr);
  auVar11._4_4_ = extraout_var._0_4_;
  auVar11._0_4_ = fVar10;
  auVar11._8_4_ = extraout_var._4_4_;
  auVar11._12_4_ = extraout_var._8_4_;
  if (param_1 <= fVar10) {
    auVar11._0_4_ = param_1;
  }
  if (auVar11._0_4_ <= 0.0) {
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar11._4_12_;
    auVar11 = auVar7 << 0x20;
  }
  fVar10 = USplineComponent::GetInputKeyValueAtDistanceAlongSpline
                     ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,auVar11._0_4_
                     );
  USplineComponent::GetLocationAtSplineInputKey
            ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,
             (TVector<double> *)&local_1a8._s_0,fVar10,Local);
  pTVar8 = USplineComponent::GetTangentAtSplineInputKey
                     ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,
                      (TVector<double> *)&local_1c8._s_0,fVar10,Local);
  local_168.M[3][3] = __real_3ff0000000000000;
  dVar1 = (pTVar8->field0_0x0)._s_0.X;
  dVar2 = (pTVar8->field0_0x0)._s_0.Y;
  dVar3 = (pTVar8->field0_0x0)._s_0.Z;
  dVar12 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar12 == __real_3ff0000000000000) {
    local_1c8._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    uVar6 = (pTVar8->field0_0x0)._s_0.X;
    uVar5 = (pTVar8->field0_0x0)._s_0.Y;
    uVar4 = local_1c8._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar12) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar6 = dVar1 * dVar12;
    uVar5 = dVar2 * dVar12;
    uVar4 = dVar3 * dVar12;
  }
  else {
    local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)
            USplineComponent::GetSplinePointsPosition
                      ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr);
  local_1c8._s_0.Z = 0.0;
  local_1c8._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_1c8._s_0.Y = _UNK_15061cbc8;
  FInterpCurve<UE::Math::TVector<double>_>::EvalSecondDerivative
            (this_00,(TVector<double> *)&local_188,fVar10,(TVector<double> *)&local_1c8._s_0);
  local_168.M[2][0] =
       (double)uVar4 * PaperAxisZ.field0_0x0._s_0.Y - (double)uVar5 * PaperAxisZ.field0_0x0._s_0.Z;
  local_168.M[2][1] =
       (double)uVar6 * PaperAxisZ.field0_0x0._s_0.Z - (double)uVar4 * PaperAxisZ.field0_0x0._s_0.X;
  local_168.M[3][0] = local_1a8._s_0.X;
  local_168.M[3][1] = local_1a8._s_0.Y;
  local_168.M[3][2] = local_1a8._s_0.Z;
  local_168.M[2][2] =
       (double)uVar5 * PaperAxisZ.field0_0x0._s_0.X - (double)uVar6 * PaperAxisZ.field0_0x0._s_0.Y;
  local_168.M[0][3] = 0.0;
  local_168.M[1][0] = PaperAxisZ.field0_0x0._s_0.X;
  local_168.M[1][1] = PaperAxisZ.field0_0x0._s_0.Y;
  local_168.M[1][2] = PaperAxisZ.field0_0x0._s_0.Z;
  local_168.M[1][3] = 0.0;
  local_168.M[2][3] = 0.0;
  local_168.M[0][0] = (double)uVar6;
  local_168.M[0][1] = (double)uVar5;
  local_168.M[0][2] = (double)uVar4;
  UE::Math::TTransform<double>::SetFromMatrix(__return_storage_ptr__,&local_168);
  local_1c8._s_0.Z = 0.0;
  local_1c8._s_0.X = ___xmm_40668000000000000000000000000000;
  local_1c8._s_0.Y = _UNK_15076bfd8;
  pTVar9 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_1c8._s_0,&local_188);
  local_168.M[0][2] = pTVar9->Z;
  local_168.M[0][3] = pTVar9->W;
  local_168.M[0][0] = pTVar9->X;
  local_168.M[0][1] = pTVar9->Y;
  local_168.M[1][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_168.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_168.M[1][3] = 0.0;
  local_168.M[2][0] = ___xmm_3ff00000000000003ff0000000000000;
  local_168.M[2][1] = _UNK_150689688;
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_168.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_168.M[2][3] = _UNK_150689518;
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_e8,(TTransform<double> *)&local_168,__return_storage_ptr__);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_e8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_e8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// InsertConvexCollisionDataFromPolygon @ 14ad02d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperTerrainComponent::InsertConvexCollisionDataFromPolygon
          (UPaperTerrainComponent *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  UBodySetup *pUVar6;
  FKConvexElem *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  ForAnyElementType FVar11;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1e0;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_1b0;
  uint local_1a0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_198;
  TArray<float,TSizedDefaultAllocator<32>_> local_188;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_178;
  FKConvexElem local_168;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((this->CachedBodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
    local_198.ArrayNum = param_1->ArrayNum;
    lVar19 = (longlong)local_198.ArrayNum;
    if (2 < local_198.ArrayNum) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_198.ArrayNum,0,&local_198.AllocatorInstance,local_198.ArrayNum,
                 &local_198.ArrayMax);
      memcpy(local_198.AllocatorInstance.Data,pFVar4,lVar19 << 4);
      if ((param_1->ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar17 = param_1->ArrayNum - 1;
      uVar14 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar10 = __real_3f000000;
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar22 = *(double *)(pFVar4 + 8) - *(double *)(pFVar5 + (longlong)(int)uVar17 * 0x10 + 8);
      dVar24 = *(double *)pFVar4 - *(double *)(pFVar5 + (longlong)(int)uVar17 * 0x10);
      auVar23._0_8_ = dVar22 * dVar22 + dVar24 * dVar24;
      auVar23._8_8_ = 0;
      auVar23 = sqrtpd(auVar23,auVar23);
      SimplifyPolygon(&local_198,&local_188,(float)auVar23._0_8_ * __real_3f000000);
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      FGeomTools2D::CorrectPolygonWinding(&local_1e0,&local_198,false);
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_1c0.ArrayMax = 0;
      bVar13 = FGeomTools2D::TriangulatePoly(&local_1c0,&local_1e0,false);
      if (!bVar13) {
        iVar15 = local_1e0.ArrayMax;
        local_1e0._8_8_ = local_1e0._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_1e0.AllocatorInstance,0,&local_1e0.ArrayMax);
        }
        FGeomTools2D::CorrectPolygonWinding(&local_1e0,param_1,false);
        iVar15 = local_1c0.ArrayMax;
        local_1c0._8_8_ = local_1c0._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
        }
        FGeomTools2D::TriangulatePoly(&local_1c0,&local_1e0,false);
      }
      local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.ArrayNum = 0;
      local_1b0.ArrayMax = 0;
      FGeomTools2D::GenerateConvexPolygonsFromTriangles(&local_1b0,&local_1c0);
      fVar9 = __real_bf000000;
      uVar16 = (ulonglong)local_1b0.ArrayNum;
      local_178 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  (local_1b0.AllocatorInstance.Data + uVar16 * 0x10);
      local_1a0 = local_1b0.ArrayNum;
      FVar21.Data = local_1b0.AllocatorInstance.Data;
      while( true ) {
        pTVar12 = local_178;
        uVar20 = 0;
        if (local_1b0.ArrayNum != (int)uVar16) {
          local_1e8[0] = 0;
          `TCheckedPointerIterator<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar21.Data == pTVar12
           ) break;
        local_1c8 = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar21.Data)
                    ->ArrayNum;
        lVar19 = (longlong)local_1c8;
        pFVar4 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar21.Data)->
                 AllocatorInstance).Data;
        local_1d0.Data = (FScriptContainerElement *)0x0;
        if (local_1c8 == 0) {
          local_1c4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_1c8,0,&local_1d0,local_1c8,&local_1c4);
          memcpy(local_1d0.Data,pFVar4,lVar19 << 4);
        }
        FKConvexElem::FKConvexElem(&local_168);
        uVar16 = uVar20;
        if (0 < local_1c8) {
          do {
            uVar17 = (uint)uVar20;
            uVar14 = 0;
            if ((int)uVar17 < local_1c8) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar11.Data = local_1d0.Data;
            if (local_168.VertexData.ArrayNum == local_168.VertexData.ArrayMax) {
              local_168.VertexData.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_168.VertexData.AllocatorInstance,
                              &local_168.VertexData.ArrayMax);
            }
            lVar19 = (longlong)local_168.VertexData.ArrayNum;
            uVar18 = local_168.VertexData.ArrayNum + 1;
            uVar14 = 0;
            if (local_168.VertexData.ArrayNum < (int)uVar18) {
              uVar14 = (uint)~local_168.VertexData.ArrayNum >> 0x1f;
            }
            local_168.VertexData.ArrayNum = uVar18;
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar4 = local_168.VertexData.AllocatorInstance.Data + lVar19 * 0x18;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              fVar2 = this->CollisionThickness;
              uVar3 = *(undefined8 *)(FVar11.Data + uVar16 + 8);
              *(undefined8 *)pFVar4 = *(undefined8 *)(FVar11.Data + uVar16);
              *(undefined8 *)(pFVar4 + 0x10) = uVar3;
              *(double *)(pFVar4 + 8) = (double)(fVar2 * fVar9);
            }
            uVar14 = local_168.VertexData.ArrayNum;
            if (local_168.VertexData.ArrayNum == local_168.VertexData.ArrayMax) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_168.VertexData.AllocatorInstance,
                                  &local_168.VertexData.ArrayMax);
            }
            local_168.VertexData.ArrayNum = uVar14 + 1;
            uVar18 = 0;
            if ((int)uVar14 < local_168.VertexData.ArrayNum) {
              uVar18 = ~uVar14 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar4 = local_168.VertexData.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x18;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              fVar2 = this->CollisionThickness;
              uVar3 = *(undefined8 *)(FVar11.Data + uVar16 + 8);
              *(undefined8 *)pFVar4 = *(undefined8 *)(FVar11.Data + uVar16);
              *(undefined8 *)(pFVar4 + 0x10) = uVar3;
              *(double *)(pFVar4 + 8) = (double)(fVar2 * fVar10);
            }
            uVar20 = (ulonglong)(uVar17 + 1);
            uVar16 = uVar16 + 0x10;
          } while ((int)(uVar17 + 1) < local_1c8);
        }
        FKConvexElem::UpdateElemBox(&local_168);
        pUVar6 = (this->CachedBodySetup).field0_0x0.DebugPtr;
        pFVar7 = (FKConvexElem *)(pUVar6->AggGeom).ConvexElems.AllocatorInstance.Data;
        if (((pFVar7 <= &local_168) &&
            (&local_168 < pFVar7 + (pUVar6->AggGeom).ConvexElems.ArrayMax)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (pUVar6->AggGeom).ConvexElems.ArrayNum;
        piVar1 = &(pUVar6->AggGeom).ConvexElems.ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x100,0x10,&(pUVar6->AggGeom).ConvexElems.AllocatorInstance,piVar1);
        }
        (pUVar6->AggGeom).ConvexElems.ArrayNum = iVar15 + 1;
        FKConvexElem::FKConvexElem
                  ((FKConvexElem *)
                   ((pUVar6->AggGeom).ConvexElems.AllocatorInstance.Data + (longlong)iVar15 * 0x100)
                   ,&local_168);
        FKConvexElem::~FKConvexElem(&local_168);
        if (local_1d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data);
        }
        FVar21.Data = FVar21.Data + 0x10;
        uVar16 = (ulonglong)local_1a0;
      }
      DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
      if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
          local_1b0.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnRegister @ 14ad038e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::OnRegister(UPaperTerrainComponent *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UPaperTerrainComponent *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if ((this->AssociatedSpline).field0_0x0.DebugPtr != (UPaperTerrainSplineComponent *)0x0) {
    local_78 = OnSplineEdited;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUPaperTerrainComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->AssociatedSpline).field0_0x0.DebugPtr)->OnSplineEdited,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  OnSplineEdited(this);
  return;
}

// OnSplineEdited @ 14ad03ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::OnSplineEdited(UPaperTerrainComponent *this)

{
  float *pfVar1;
  int *piVar2;
  UPaperTerrainSplineComponent *pUVar3;
  UPaperTerrainMaterial *pUVar4;
  void *pvVar5;
  UPaperSprite *pUVar6;
  ForElementType<UE::Math::TVector4<double>_> FVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  UBodySetup *pUVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  FSpriteDrawCallRecord *pFVar22;
  ulonglong uVar23;
  ForElementType<UE::Math::TVector4<double>_> FVar24;
  uint uVar25;
  FSpriteDrawCallRecord *pFVar26;
  double *pdVar27;
  FScriptContainerElement *pFVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  FSpriteDrawCallRecord *this_00;
  FTerrainSegment *pFVar31;
  uint uVar32;
  byte bVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar53 [16];
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  double dVar62;
  float fVar63;
  float fVar64;
  undefined1 auStackY_438 [32];
  TArray<FTerrainSegment,TSizedDefaultAllocator<32>_> local_3e0;
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined1 local_3ce;
  undefined1 local_3cd;
  float local_3cc;
  float local_3c8;
  FColor_u_0 local_3c4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_3c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_3b0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_3a0;
  uint local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined8 local_368;
  double local_360;
  double dStack_358;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_350;
  float local_340;
  float local_33c;
  void *local_338;
  uint local_330;
  void *local_328;
  int local_320;
  undefined1 local_318 [8];
  double dStack_310;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  UPaperTerrainComponent *local_2e0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  undefined1 local_278 [16];
  undefined8 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  TVector2<double>_u_0 local_248;
  double local_238;
  TVector2<double>_u_0 local_220;
  double local_210;
  TVector2<double>_u_0 local_1f8;
  double local_1e8;
  FSplinePoint local_1c8;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pFVar30 = (FScriptContainerElement *)0x0;
  pUVar3 = (this->AssociatedSpline).field0_0x0.DebugPtr;
  local_2e0 = this;
  if (pUVar3 != (UPaperTerrainSplineComponent *)0x0) {
    bVar14 = false;
    iVar16 = USplineComponent::GetNumberOfSplinePoints((USplineComponent *)pUVar3);
    pFVar20 = pFVar30;
    if (0 < iVar16) {
      do {
        iVar17 = (int)pFVar20;
        USplineComponent::GetSplinePointAt
                  ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,&local_1c8,
                   iVar17,Local);
        if (((local_1c8.ArriveTangent.field0_0x0._s_0.Y != 0.0) ||
            (local_1c8.LeaveTangent.field0_0x0._s_0.Y != 0.0)) ||
           (local_1c8.Position.field0_0x0._s_0.Y != 0.0)) {
          local_2c0._s_0.X = local_1c8.ArriveTangent.field0_0x0._s_0.X;
          local_2c0._s_0.Z = local_1c8.ArriveTangent.field0_0x0._s_0.Z;
          local_2d8._s_0.X = local_1c8.LeaveTangent.field0_0x0._s_0.X;
          local_2d8._s_0.Y = 0.0;
          local_2c0._s_0.Y = 0.0;
          local_2d8._s_0.Z = local_1c8.LeaveTangent.field0_0x0._s_0.Z;
          USplineComponent::SetTangentsAtSplinePoint
                    ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,iVar17,
                     (TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_2d8._s_0,Local,
                     false);
          local_2a8._s_0.X = local_1c8.Position.field0_0x0._s_0.X;
          local_2a8._s_0.Y = 0.0;
          local_2a8._s_0.Z = local_1c8.Position.field0_0x0._s_0.Z;
          USplineComponent::SetLocationAtSplinePoint
                    ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,iVar17,
                     (TVector<double> *)&local_2a8._s_0,Local,false);
          bVar14 = true;
        }
        pFVar20 = (FScriptContainerElement *)(ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar16);
      if (bVar14) {
        (**(code **)(*(longlong *)(this->AssociatedSpline).field0_0x0.DebugPtr + 0xad0))();
      }
    }
  }
  if ((this->SpriteCollisionDomain).Value == '\x02') {
    pUVar19 = NewObject<UBodySetup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
  }
  else {
    pUVar19 = (UBodySetup *)0x0;
  }
  (this->CachedBodySetup).field0_0x0.DebugPtr = pUVar19;
  DestructItems<FPaperTerrainSpriteGeometry,int>
            ((FPaperTerrainSpriteGeometry *)(this->GeneratedSpriteGeometry).AllocatorInstance.Data,
             (this->GeneratedSpriteGeometry).ArrayNum);
  piVar2 = &(this->GeneratedSpriteGeometry).ArrayMax;
  (this->GeneratedSpriteGeometry).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->GeneratedSpriteGeometry).AllocatorInstance,0,piVar2);
  }
  pUVar3 = (this->AssociatedSpline).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPaperTerrainSplineComponent *)0x0) &&
     ((this->TerrainMaterial).field0_0x0.DebugPtr != (UPaperTerrainMaterial *)0x0)) {
    if (*(int *)&pUVar3->field_0x600 != this->ReparamStepsPerSegment) {
      *(int *)&pUVar3->field_0x600 = this->ReparamStepsPerSegment;
      (**(code **)(*(longlong *)(this->AssociatedSpline).field0_0x0.DebugPtr + 0xad0))();
    }
    local_390 = this->RandomSeed;
    fVar36 = USplineComponent::GetSplineLength
                       ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr);
    local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e0.ArrayNum = 0;
    local_3e0.ArrayMax = 0;
    local_3c8 = fVar36;
    pFVar20 = operator_new<FTerrainSegment,TSizedDefaultAllocator<32>_>(0x20,&local_3e0);
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(pFVar20 + 8) = 0;
      *(undefined8 *)(pFVar20 + 0x10) = 0;
      *(undefined8 *)(pFVar20 + 0x18) = 0;
      pFVar30 = pFVar20;
    }
    fVar64 = __real_41200000;
    *(undefined4 *)&pFVar30->field_0x0 = 0;
    *(float *)(pFVar30 + 4) = fVar36;
    fVar55 = __real_c3340000;
    fVar13 = __real_43b40000;
    fVar12 = __real_43340000;
    fVar63 = 0.0;
    if (0.0 < fVar36) {
      local_2f0 = ___xmm_00000000000000003ff0000000000000;
      do {
        auVar9 = local_2f0;
        pFVar20 = (FScriptContainerElement *)0x0;
        GetTransformAtDistance(this,&local_138,fVar63);
        dVar45 = local_138.Rotation.XY.m128d_f64[1];
        local_268 = 0;
        dVar62 = local_138.Rotation.ZW.m128d_f64[0];
        auVar42 = blendpd(auVar9,ZEXT816(0),2);
        dVar61 = local_138.Rotation.ZW.m128d_f64[1];
        auVar49 = blendpd((undefined1  [16])local_138.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
        auVar58._0_8_ = auVar9._8_8_ * local_138.Rotation.XY.m128d_f64[0] - auVar9._0_8_ * dVar45;
        auVar58._8_8_ = dVar45 * 0.0 - auVar9._8_8_ * dVar62;
        auVar52._8_4_ = SUB84(auVar58._8_8_,0);
        auVar52._0_8_ = auVar58._0_8_;
        auVar52._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
        auVar43._0_8_ = auVar42._0_8_ * dVar62 - auVar49._0_8_ * 0.0;
        auVar43._8_8_ = auVar42._8_8_ * dVar61 - auVar49._8_8_ * 0.0;
        auVar42 = blendpd(auVar58,auVar43,2);
        dVar51 = auVar52._8_8_ + auVar52._8_8_;
        dVar54 = auVar43._0_8_ + auVar43._0_8_;
        auVar59._0_8_ = auVar42._0_8_ + auVar42._0_8_;
        auVar59._8_8_ = auVar42._8_8_ + auVar42._8_8_;
        auVar46._8_4_ = SUB84(dVar54,0);
        auVar46._0_8_ = dVar51;
        uVar38 = (undefined4)((ulonglong)dVar54 >> 0x20);
        auVar46._12_4_ = uVar38;
        auVar42._8_4_ = SUB84(dVar54,0);
        auVar42._0_8_ = dVar51;
        auVar42._12_4_ = uVar38;
        auVar42 = blendpd(auVar42,auVar59,2);
        auVar47._0_8_ = auVar46._8_8_ * local_138.Rotation.XY.m128d_f64[0] - dVar51 * dVar45;
        auVar47._8_8_ = auVar59._0_8_ * dVar45 - dVar54 * dVar62;
        auVar44._0_8_ = auVar42._0_8_ * dVar62 - auVar59._0_8_ * auVar49._0_8_;
        auVar44._8_8_ = auVar42._8_8_ * dVar61 - auVar59._8_8_ * auVar49._8_8_;
        local_260 = dVar51 * dVar61 + (double)local_2f0._0_8_ + auVar47._8_8_;
        dStack_258 = dVar54 * dVar61 + (double)local_2f0._8_8_ + auVar44._0_8_;
        auVar42 = blendpd(auVar47,auVar44,2);
        local_250 = auVar59._0_8_ * dVar61 + 0.0 + auVar42._0_8_;
        local_278 = auVar9;
        dVar62 = FGenericPlatformMath::Atan2
                           (dStack_258 * PaperAxisY.field0_0x0._s_0.Y +
                            local_260 * PaperAxisY.field0_0x0._s_0.X +
                            local_250 * PaperAxisY.field0_0x0._s_0.Z,
                            dStack_258 * PaperAxisX.field0_0x0._s_0.Y +
                            local_260 * PaperAxisX.field0_0x0._s_0.X +
                            local_250 * PaperAxisX.field0_0x0._s_0.Z);
        for (fVar36 = (float)dVar62 * __real_42652ee0; fVar12 < fVar36;
            fVar36 = fVar36 + __real_c3b40000) {
        }
        for (; fVar36 < fVar55; fVar36 = fVar36 + fVar13) {
        }
        fVar36 = FGenericPlatformMath::Fmod(fVar36 + fVar13,fVar13);
        pUVar4 = (this->TerrainMaterial).field0_0x0.DebugPtr;
        if (0 < (pUVar4->Rules).ArrayNum) {
          pFVar20 = (pUVar4->Rules).AllocatorInstance.Data;
        }
        iVar16 = (pUVar4->Rules).ArrayNum;
        pFVar28 = (pUVar4->Rules).AllocatorInstance.Data;
        pFVar35 = pFVar28 + (longlong)iVar16 * 0x38;
        while( true ) {
          if ((pUVar4->Rules).ArrayNum != iVar16) {
            local_3d0 = 0;
            `TCheckedPointerIterator<FPaperTerrainMaterialRule,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_3d0);
          }
          if (pFVar28 == pFVar35) break;
          if ((*(float *)(pFVar28 + 0x20) <= fVar36) && (fVar36 < *(float *)(pFVar28 + 0x24))) {
            pFVar20 = pFVar28;
          }
          pFVar28 = pFVar28 + 0x38;
        }
        if (*(FScriptContainerElement **)(pFVar30 + 8) != pFVar20) {
          if (*(FScriptContainerElement **)(pFVar30 + 8) == (FScriptContainerElement *)0x0) {
            *(FScriptContainerElement **)(pFVar30 + 8) = pFVar20;
          }
          else {
            *(float *)(pFVar30 + 4) = fVar63;
            pFVar28 = (FScriptContainerElement *)0x0;
            if (this->SegmentOverlapAmount + this->SegmentOverlapAmount +
                *(float *)&pFVar30->field_0x0 <= fVar63) {
LAB_14ad041bd:
              uVar32 = local_3e0.ArrayNum;
            }
            else {
              if (local_3e0.ArrayNum < 1) {
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              lVar21 = (longlong)local_3e0.ArrayNum * 0x20;
              pvVar5 = *(void **)(local_3e0.AllocatorInstance.Data + lVar21 + -0x10);
              *(undefined8 *)(local_3e0.AllocatorInstance.Data + lVar21 + -0x10) = 0;
              *(undefined8 *)(local_3e0.AllocatorInstance.Data + lVar21 + -8) = 0;
              iVar16 = local_3e0.ArrayNum + -1;
              pFVar30 = local_3e0.AllocatorInstance.Data + (longlong)iVar16 * 0x20;
              if (*(void **)(pFVar30 + 0x10) != (void *)0x0) {
                FMemory::Free(*(void **)(pFVar30 + 0x10));
              }
              iVar17 = (local_3e0.ArrayNum - iVar16) + -1;
              iVar16 = local_3e0.ArrayNum;
              if (iVar17 != 0) {
                memmove(pFVar30,pFVar30 + 0x20,(longlong)iVar17 << 5);
                iVar16 = local_3e0.ArrayNum;
              }
              local_3e0.ArrayNum = iVar16 - 1U;
              uVar32 = iVar16 - 1U;
              if (pvVar5 != (void *)0x0) {
                FMemory::Free(pvVar5);
                goto LAB_14ad041bd;
              }
            }
            if (uVar32 == local_3e0.ArrayMax) {
              uVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
            }
            local_3e0.ArrayNum = uVar32 + 1;
            uVar34 = 0;
            if ((int)uVar32 < (int)(uVar32 + 1)) {
              uVar34 = ~uVar32 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar30 = local_3e0.AllocatorInstance.Data + (longlong)(int)uVar32 * 0x20;
            if (pFVar30 != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(pFVar30 + 0x10) = 0;
              *(undefined8 *)(pFVar30 + 0x18) = 0;
              pFVar28 = pFVar30;
            }
            *(float *)(pFVar28 + 4) = local_3c8;
            *(float *)&pFVar28->field_0x0 = fVar63;
            *(FScriptContainerElement **)(pFVar28 + 8) = pFVar20;
            pFVar30 = pFVar28;
          }
        }
        fVar63 = fVar63 + __real_41200000;
        fVar36 = local_3c8;
        fVar64 = __real_41200000;
      } while (fVar63 < local_3c8);
    }
    iVar16 = local_3e0.ArrayNum;
    pFVar31 = (FTerrainSegment *)
              (local_3e0.AllocatorInstance.Data + (longlong)local_3e0.ArrayNum * 0x20);
    FVar29.Data = local_3e0.AllocatorInstance.Data;
    while( true ) {
      if (local_3e0.ArrayNum != iVar16) {
        local_3cf = 0;
        `TCheckedPointerIterator<FTerrainSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3cf);
      }
      fVar13 = __real_3f000000;
      fVar12 = __real_3f800000;
      if ((FTerrainSegment *)FVar29.Data == pFVar31) break;
      ((FTerrainSegment *)FVar29.Data)->StartTime =
           ((FTerrainSegment *)FVar29.Data)->StartTime - this->SegmentOverlapAmount;
      ((FTerrainSegment *)FVar29.Data)->EndTime =
           ((FTerrainSegment *)FVar29.Data)->EndTime + this->SegmentOverlapAmount;
      FVar29.Data = FVar29.Data + 0x20;
    }
    uVar23 = (ulonglong)local_3e0.ArrayNum;
    pFVar30 = local_3e0.AllocatorInstance.Data + 0x18;
    local_3c8 = (float)local_3e0.ArrayNum;
    local_2f0._0_8_ = local_3e0.AllocatorInstance.Data + uVar23 * 0x20;
    pFVar20 = local_3e0.AllocatorInstance.Data + uVar23 * 0x20;
    uVar32 = local_390;
    while( true ) {
      this_00 = (FSpriteDrawCallRecord *)0x0;
      if (local_3e0.ArrayNum != (int)uVar23) {
        local_3ce = 0;
        `TCheckedPointerIterator<FTerrainSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3ce);
      }
      this = local_2e0;
      uVar34 = 0;
      if (pFVar30 + -0x18 == pFVar20) break;
      if ((*(longlong *)(pFVar30 + -0x10) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Segment.Rule",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\Terrain\\PaperTerrainComponent.cpp"
                              ,0x21f,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      `UPaperTerrainComponent::OnSplineEdited'::__l10::FTerrainRuleHelper::FTerrainRuleHelper
                (&local_340,*(FPaperTerrainMaterialRule **)(pFVar30 + -0x10));
      fVar55 = local_340 + *(float *)&pFVar30[-0x18].field_0x0;
      fVar63 = (*(float *)(pFVar30 + -0x14) - local_33c) - fVar55;
      if ((fVar63 <= 0.0) || ((int)local_330 < 1)) {
        bVar33 = 0;
      }
      else {
        bVar33 = 1;
      }
      if (0.0 < local_340) {
        uVar18 = *(uint *)pFVar30;
        if (uVar18 == *(uint *)(pFVar30 + 4)) {
          uVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)(pFVar30 + -8),(int *)(pFVar30 + 4));
        }
        *(uint *)pFVar30 = uVar18 + 1;
        uVar25 = uVar34;
        if ((int)uVar18 < (int)(uVar18 + 1)) {
          uVar25 = ~uVar18 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar20 = (((TArray<FTerrainSpriteStamp,TSizedDefaultAllocator<32>_> *)(pFVar30 + -8))->
                  AllocatorInstance).Data + (longlong)(int)uVar18 * 0x18;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          lVar21 = **(longlong **)(pFVar30 + -0x10);
          fVar50 = *(float *)(pFVar30 + -0x18);
          *(longlong *)pFVar20 = lVar21;
          *(undefined4 *)(pFVar20 + 0x10) = 0x3f800000;
          pFVar20[0x14] = (FScriptContainerElement)(bVar33 ^ 1);
          *(float *)(pFVar20 + 0xc) = local_340 * fVar13 + fVar50;
          GetSpriteRenderDataBounds2D
                    ((TBox2<double> *)&local_248._s_0,
                     (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
                     (lVar21 + 0xa8));
          fVar50 = (float)(local_238 - local_248._s_0.X);
          if ((float)(local_238 - local_248._s_0.X) <= fVar12) {
            fVar50 = fVar12;
          }
          *(float *)(pFVar20 + 8) = fVar50;
        }
      }
      fVar50 = fVar63;
      if (bVar33 != 0) {
        for (; 0.0 < fVar50; fVar50 = fVar50 - fVar37) {
          uVar34 = (uint)this_00;
          if (((int)local_330 < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidBodies.Num() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\Terrain\\PaperTerrainComponent.cpp"
                                  ,0x1db,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar32 = uVar32 * 0xbb38435 + 0x3619636b;
          uVar25 = uVar32 % local_330;
          uVar18 = 0;
          if ((int)uVar25 < (int)local_330) {
            uVar18 = ~uVar25 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar21 = *(longlong *)((longlong)local_338 + (longlong)(int)uVar25 * 8);
          uVar18 = 0;
          if ((int)uVar25 < local_320) {
            uVar18 = ~uVar25 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar37 = *(float *)((longlong)local_328 + (longlong)(int)uVar25 * 4);
          if ((0 < (int)uVar34) && (fVar50 < fVar37 * fVar13)) break;
          uVar18 = *(uint *)pFVar30;
          if (uVar18 == *(uint *)(pFVar30 + 4)) {
            uVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)(pFVar30 + -8),(int *)(pFVar30 + 4));
          }
          *(uint *)pFVar30 = uVar18 + 1;
          uVar25 = 0;
          if ((int)uVar18 < (int)(uVar18 + 1)) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar20 = (((TArray<FTerrainSpriteStamp,TSizedDefaultAllocator<32>_> *)(pFVar30 + -8))->
                    AllocatorInstance).Data + (longlong)(int)uVar18 * 0x18;
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            *(longlong *)pFVar20 = lVar21;
            *(undefined4 *)(pFVar20 + 0x10) = 0x3f800000;
            pFVar20[0x14] = (FScriptContainerElement)0x1;
            *(float *)(pFVar20 + 0xc) = fVar37 * fVar13 + fVar55;
            GetSpriteRenderDataBounds2D
                      ((TBox2<double> *)&local_220._s_0,
                       (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
                       (lVar21 + 0xa8));
            fVar11 = (float)(local_210 - local_220._s_0.X);
            if ((float)(local_210 - local_220._s_0.X) <= fVar12) {
              fVar11 = fVar12;
            }
            *(float *)(pFVar20 + 8) = fVar11;
          }
          uVar34 = uVar34 + 1;
          this_00 = (FSpriteDrawCallRecord *)(ulonglong)uVar34;
          fVar55 = fVar55 + fVar37;
        }
        iVar16 = 0;
        auVar53 = ZEXT816(0);
        fVar63 = fVar63 / (fVar63 - fVar50);
        if (0 < (int)uVar34) {
          do {
            uVar25 = (*(uint *)pFVar30 - uVar34) + iVar16;
            uVar18 = 0;
            if ((int)uVar25 < (int)*(uint *)pFVar30) {
              uVar18 = ~uVar25 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar21 = (longlong)(int)uVar25;
            pFVar20 = (((TArray<FTerrainSpriteStamp,TSizedDefaultAllocator<32>_> *)(pFVar30 + -8))->
                      AllocatorInstance).Data;
            fVar55 = fVar12;
            if (iVar16 == 0) {
              fVar55 = fVar13;
            }
            iVar16 = iVar16 + 1;
            *(float *)(pFVar20 + lVar21 * 0x18 + 0x10) = fVar63;
            auVar53._0_4_ =
                 auVar53._0_4_ +
                 fVar55 * (fVar63 - fVar12) * *(float *)(pFVar20 + lVar21 * 0x18 + 8);
            *(float *)(pFVar20 + lVar21 * 0x18 + 0xc) =
                 auVar53._0_4_ + *(float *)(pFVar20 + lVar21 * 0x18 + 0xc);
          } while (iVar16 < (int)uVar34);
        }
      }
      if (0.0 < local_33c) {
        uVar34 = *(uint *)pFVar30;
        if (uVar34 == *(uint *)(pFVar30 + 4)) {
          uVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)(pFVar30 + -8),(int *)(pFVar30 + 4));
        }
        *(uint *)pFVar30 = uVar34 + 1;
        uVar18 = 0;
        if ((int)uVar34 < (int)(uVar34 + 1)) {
          uVar18 = ~uVar34 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar20 = (((TArray<FTerrainSpriteStamp,TSizedDefaultAllocator<32>_> *)(pFVar30 + -8))->
                  AllocatorInstance).Data + (longlong)(int)uVar34 * 0x18;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          fVar55 = *(float *)(pFVar30 + -0x14);
          lVar21 = *(longlong *)(*(longlong *)(pFVar30 + -0x10) + 0x18);
          *(longlong *)pFVar20 = lVar21;
          *(undefined4 *)(pFVar20 + 0x10) = 0x3f800000;
          pFVar20[0x14] = (FScriptContainerElement)(bVar33 ^ 1);
          *(float *)(pFVar20 + 0xc) = fVar55 - local_33c * fVar13;
          GetSpriteRenderDataBounds2D
                    ((TBox2<double> *)&local_1f8._s_0,
                     (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
                     (lVar21 + 0xa8));
          fVar55 = (float)(local_1e8 - local_1f8._s_0.X);
          if ((float)(local_1e8 - local_1f8._s_0.X) <= fVar12) {
            fVar55 = fVar12;
          }
          *(float *)(pFVar20 + 8) = fVar55;
        }
      }
      if (local_328 != (void *)0x0) {
        FMemory::Free(local_328);
      }
      if (local_338 != (void *)0x0) {
        FMemory::Free(local_338);
      }
      pFVar30 = pFVar30 + 0x20;
      uVar23 = (ulonglong)(uint)local_3c8;
      pFVar20 = (FScriptContainerElement *)local_2f0._0_8_;
    }
    if ((local_2e0->bClosedSpline == false) || (local_2e0->bFilledSpline == false)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    SpawnSegments(local_2e0,&local_3e0,bVar14);
    fVar63 = __real_3e800000;
    fVar55 = __real_42c80000;
    if ((this->bClosedSpline != false) && (this->bFilledSpline != false)) {
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368 = 0;
      local_3c0.ArrayNum = 0;
      local_3c0.ArrayMax = 0;
      local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b0.ArrayNum = 0;
      local_3b0.ArrayMax = 0;
      fVar50 = 0.0;
      local_388 = 0.0;
      dStack_380 = 0.0;
      local_378 = 0.0;
      dStack_370 = 0.0;
      if (0.0 < fVar36) {
        do {
          fVar37 = USplineComponent::GetInputKeyValueAtDistanceAlongSpline
                             ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,
                              fVar50);
          USplineComponent::GetLocationAtSplineInputKey
                    ((USplineComponent *)(this->AssociatedSpline).field0_0x0.DebugPtr,
                     (TVector<double> *)&local_290._s_0,fVar37,Local);
          local_360 = local_290._s_0.Y * PaperAxisX.field0_0x0._s_0.Y +
                      local_290._s_0.X * PaperAxisX.field0_0x0._s_0.X +
                      local_290._s_0.Z * PaperAxisX.field0_0x0._s_0.Z;
          dStack_358 = local_290._s_0.Y * PaperAxisY.field0_0x0._s_0.Y +
                       local_290._s_0.X * PaperAxisY.field0_0x0._s_0.X +
                       local_290._s_0.Z * PaperAxisY.field0_0x0._s_0.Z;
          if ((char)local_368 == '\0') {
            local_368 = CONCAT71(local_368._1_7_,1);
            local_388 = local_360;
            dStack_380 = dStack_358;
            local_378 = local_360;
            dStack_370 = dStack_358;
          }
          else {
            uVar38 = SUB84(local_388,0);
            uVar40 = (undefined4)((ulonglong)local_388 >> 0x20);
            if (local_360 <= local_388) {
              uVar38 = SUB84(local_360,0);
              uVar40 = (undefined4)((ulonglong)local_360 >> 0x20);
            }
            if (dStack_358 <= dStack_380) {
              dStack_380 = dStack_358;
            }
            local_388 = (double)CONCAT44(uVar40,uVar38);
            if (local_378 <= local_360) {
              local_378 = local_360;
            }
            if (dStack_370 <= dStack_358) {
              dStack_370 = dStack_358;
            }
          }
          if (((local_3c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_360) &&
              ((FScriptContainerElement *)&local_360 <
               local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayMax * 0x10)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar16 = local_3c0.ArrayNum;
          if (local_3c0.ArrayNum == local_3c0.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_3c0.AllocatorInstance,&local_3c0.ArrayMax);
          }
          local_3c0.ArrayNum = iVar16 + 1;
          *(double *)(local_3c0.AllocatorInstance.Data + (longlong)iVar16 * 0x10) = local_360;
          *(double *)(local_3c0.AllocatorInstance.Data + (longlong)iVar16 * 0x10 + 8) = dStack_358;
          local_3cc = 0.0;
          pFVar22 = this_00;
          pFVar26 = this_00;
          iVar16 = local_3e0.ArrayNum;
          if (0 < local_3e0.ArrayNum) {
            do {
              uVar18 = (uint)pFVar22;
              uVar32 = uVar34;
              if ((int)uVar18 < iVar16) {
                uVar32 = ~uVar18 >> 0x1f;
              }
              if (uVar32 == 0) {
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar16 = local_3e0.ArrayNum;
              }
              if ((*(float *)(local_3e0.AllocatorInstance.Data +
                             (longlong)(&pFVar26->AdditionalTextures + -1) + 0x10) <= fVar50) &&
                 (pfVar1 = (float *)((undefined1 *)
                                     ((longlong)&(pFVar26->Destination).field0_0x0 + 4) +
                                    (longlong)local_3e0.AllocatorInstance.Data),
                 fVar50 < *pfVar1 || fVar50 == *pfVar1)) {
                lVar21 = *(longlong *)
                          ((undefined1 *)((longlong)&(pFVar26->Destination).field0_0x0 + 8) +
                          (longlong)local_3e0.AllocatorInstance.Data);
                if (lVar21 == 0) {
                  local_3cc = 0.0;
                }
                else {
                  local_3cc = *(float *)(lVar21 + 0x2c) * fVar63;
                }
                break;
              }
              pFVar22 = (FSpriteDrawCallRecord *)(ulonglong)(uVar18 + 1);
              pFVar26 = (FSpriteDrawCallRecord *)&pFVar26->AdditionalTextures;
            } while ((int)(uVar18 + 1) < iVar16);
          }
          if (((local_3b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3cc) &&
              ((FScriptContainerElement *)&local_3cc <
               local_3b0.AllocatorInstance.Data + (longlong)local_3b0.ArrayMax * 4)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar16 = local_3b0.ArrayNum;
          if (local_3b0.ArrayNum == local_3b0.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_3b0.AllocatorInstance,&local_3b0.ArrayMax);
          }
          fVar50 = fVar50 + fVar55;
          local_3b0.ArrayNum = iVar16 + 1;
          *(float *)(local_3b0.AllocatorInstance.Data + (longlong)iVar16 * 4) = local_3cc;
        } while (fVar50 < fVar36);
      }
      SimplifyPolygon(&local_3c0,&local_3b0,fVar64);
      local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.ArrayNum = 0;
      local_350.ArrayMax = 0;
      FGeomTools2D::CorrectPolygonWinding(&local_350,&local_3c0,false);
      local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a0.ArrayNum = 0;
      local_3a0.ArrayMax = 0;
      FGeomTools2D::TriangulatePoly(&local_3a0,&local_350,false);
      GenerateCollisionDataFromPolygon(this,&local_3c0,&local_3b0,&local_3a0);
      pUVar6 = *(UPaperSprite **)((longlong)(this->TerrainMaterial).field0_0x0 + 0x40);
      if (pUVar6 != (UPaperSprite *)0x0) {
        uVar32 = (this->GeneratedSpriteGeometry).ArrayNum;
        if (uVar32 == (this->GeneratedSpriteGeometry).ArrayMax) {
          uVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->GeneratedSpriteGeometry).AllocatorInstance,
                              &(this->GeneratedSpriteGeometry).ArrayMax);
        }
        (this->GeneratedSpriteGeometry).ArrayNum = uVar32 + 1;
        if ((int)uVar32 < (int)(uVar32 + 1)) {
          uVar34 = ~uVar32 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = (FSpriteDrawCallRecord *)
                  ((this->GeneratedSpriteGeometry).AllocatorInstance.Data +
                  (longlong)(int)uVar32 * 0x20);
        pFVar22 = this_00;
        if (pFVar26 != (FSpriteDrawCallRecord *)0x0) {
          (pFVar26->Destination).field0_0x0._s_0.Z = 0.0;
          (pFVar26->BaseTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
          (pFVar26->Destination).field0_0x0._s_0.X = 0.0;
          (pFVar26->Destination).field0_0x0._s_0.Y = 0.0;
          pFVar22 = pFVar26;
        }
        (pFVar22->Destination).field0_0x0._s_0.Z = (double)(pUVar6->DefaultMaterial).field0_0x0;
        pFVar22 = operator_new<FSpriteDrawCallRecord,TSizedDefaultAllocator<32>_>
                            (0x140,(TArray<FSpriteDrawCallRecord,TSizedDefaultAllocator<32>_> *)
                                   pFVar22);
        if (pFVar22 != (FSpriteDrawCallRecord *)0x0) {
          (pFVar22->BaseTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
          (pFVar22->AdditionalTextures).AllocatorInstance.SecondaryData =
               (ForElementType<UTexture_*>)0x0;
          (pFVar22->Destination).field0_0x0._s_0.X = 0.0;
          (pFVar22->Destination).field0_0x0._s_0.Y = 0.0;
          (pFVar22->Destination).field0_0x0._s_0.Z = 0.0;
          (pFVar22->AdditionalTextures).ArrayNum = 0;
          (pFVar22->AdditionalTextures).ArrayMax = 4;
          (pFVar22->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
          (pFVar22->RenderVerts).AllocatorInstance.SecondaryData =
               (ForElementType<UE::Math::TVector4<double>_>)0x0;
          (pFVar22->RenderVerts).ArrayNum = 0;
          (pFVar22->RenderVerts).ArrayMax = 6;
          this_00 = pFVar22;
        }
        FSpriteDrawCallRecord::BuildFromSprite(this_00,pUVar6);
        piVar2 = &(this_00->RenderVerts).ArrayMax;
        (this_00->RenderVerts).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                    (0x20,0x10,0,&(this_00->RenderVerts).AllocatorInstance,0,piVar2);
        }
        dVar61 = _UNK_15219d438;
        dVar62 = ___xmm_3fb99999a00000003fb99999a0000000;
        fVar36 = (this->TerrainColor).field0_0x0._s_0.B;
        fVar64 = (this->TerrainColor).field0_0x0._s_0.R;
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        if (fVar64 <= 0.0) {
          fVar64 = 0.0;
        }
        if (fVar12 <= fVar36) {
          fVar36 = fVar12;
        }
        if (fVar12 <= fVar64) {
          fVar64 = fVar12;
        }
        fVar55 = (this->TerrainColor).field0_0x0._s_0.G;
        if (fVar55 <= 0.0) {
          fVar55 = 0.0;
        }
        if (fVar12 <= fVar55) {
          fVar55 = fVar12;
        }
        fVar63 = (this->TerrainColor).field0_0x0._s_0.A;
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        local_3c4._s_0.G = (char)(int)(fVar55 * __real_437f0000 + fVar13);
        local_3c4._s_0.B = (char)(int)(fVar36 * __real_437f0000 + fVar13);
        if (fVar12 <= fVar63) {
          fVar63 = fVar12;
        }
        local_3c4._s_0.R = (char)(int)(fVar64 * __real_437f0000 + fVar13);
        local_3c4._s_0.A = (char)(int)(fVar63 * __real_437f0000 + fVar13);
        (this_00->Color).field0_0x0 = local_3c4;
        cVar15 = '\0';
        dVar45 = PaperAxisZ.field0_0x0._s_0.Z * dVar62;
        auVar9._8_4_ = SUB84(PaperAxisZ.field0_0x0._s_0.Y * dVar61,0);
        auVar9._0_8_ = PaperAxisZ.field0_0x0._s_0.X * dVar62;
        auVar9._12_4_ = (int)((ulonglong)(PaperAxisZ.field0_0x0._s_0.Y * dVar61) >> 0x20);
        *(undefined1 (*) [16])&(this_00->Destination).field0_0x0 = auVar9;
        (this_00->Destination).field0_0x0._s_0.Z = dVar45;
        iVar16 = (pUVar6->BakedRenderData).ArrayNum;
        pFVar30 = (pUVar6->BakedRenderData).AllocatorInstance.Data;
        _local_318 = ZEXT816(0);
        auVar9 = _local_318;
        dStack_310 = 0.0;
        pFVar20 = pFVar30 + (longlong)iVar16 * 0x20;
        local_308 = ZEXT816(0);
        local_2f8 = 0;
        auVar49 = ZEXT816(0);
        uVar38 = 0;
        uVar40 = 0;
        uVar56 = 0;
        uVar57 = 0;
        dVar62 = dStack_310;
        dVar61 = 0.0;
        _local_318 = auVar9;
        while( true ) {
          if ((pUVar6->BakedRenderData).ArrayNum != iVar16) {
            local_3cd = 0;
            `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3cd);
          }
          dVar45 = __real_bff0000000000000;
          if (pFVar30 == pFVar20) break;
          local_308._0_8_ = *(undefined8 *)&pFVar30->field_0x0;
          local_308._8_8_ = *(undefined8 *)(pFVar30 + 8);
          _local_318 = *(undefined1 (*) [16])pFVar30;
          uVar41 = (undefined4)((ulonglong)local_308._0_8_ >> 0x20);
          uVar48 = (undefined4)((ulonglong)local_308._8_8_ >> 0x20);
          uVar39 = (undefined4)local_308._0_8_;
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            auVar10._4_8_ = dVar61;
            auVar10._0_4_ = uVar41;
            auVar60._0_8_ = auVar10._0_8_ << 0x20;
            auVar60._8_4_ = (int)local_308._8_8_;
            auVar60._12_4_ = uVar48;
            dVar62 = auVar60._8_8_;
            pFVar30 = pFVar30 + 0x20;
            auVar49 = _local_318;
            uVar38 = (int)local_308._8_8_;
            uVar40 = uVar48;
            uVar56 = uVar39;
            uVar57 = uVar41;
            dVar61 = (double)local_308._8_8_;
            local_308 = _local_318;
          }
          else {
            if (auVar49._0_8_ <= (double)local_308._0_8_) {
              uVar39 = auVar49._0_4_;
              uVar41 = auVar49._4_4_;
            }
            pFVar30 = pFVar30 + 0x20;
            dStack_310 = (double)local_308._8_8_;
            if (dVar62 <= (double)local_308._8_8_) {
              dStack_310 = dVar62;
            }
            if ((double)local_308._0_8_ <= (double)CONCAT44(uVar57,uVar56)) {
              local_308._0_8_ = CONCAT44(uVar57,uVar56);
            }
            if ((double)local_308._8_8_ <= (double)CONCAT44(uVar40,uVar38)) {
              local_308._8_8_ = CONCAT44(uVar40,uVar38);
            }
            local_318._4_4_ = uVar41;
            local_318._0_4_ = uVar39;
            auVar49._4_4_ = uVar41;
            auVar49._0_4_ = uVar39;
            auVar49._8_8_ = 0;
            uVar38 = (int)local_308._8_8_;
            uVar40 = (int)((ulonglong)local_308._8_8_ >> 0x20);
            uVar56 = (int)local_308._0_8_;
            uVar57 = (int)((ulonglong)local_308._0_8_ >> 0x20);
            dVar62 = dStack_310;
            dVar61 = 0.0;
          }
        }
        local_2f8 = CONCAT71(local_2f8._1_7_,cVar15);
        dVar61 = (double)(fVar12 / pUVar6->PixelsPerUnrealUnit);
        if ((2 < local_3a0.ArrayNum) && (uVar32 = 0, 0 < local_3a0.ArrayNum)) {
          lVar21 = 0;
          do {
            uVar34 = 0;
            if ((int)uVar32 < local_3a0.ArrayNum) {
              uVar34 = ~uVar32 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar29.Data = local_3a0.AllocatorInstance.Data;
            uVar34 = (this_00->RenderVerts).ArrayNum;
            if (uVar34 == (this_00->RenderVerts).ArrayMax) {
              uVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                                 (0x1020,&(this_00->RenderVerts).AllocatorInstance,
                                  &(this_00->RenderVerts).ArrayMax);
            }
            (this_00->RenderVerts).ArrayNum = uVar34 + 1;
            uVar18 = 0;
            if ((int)uVar34 < (int)(uVar34 + 1)) {
              uVar18 = ~uVar34 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar7 = (this_00->RenderVerts).AllocatorInstance.SecondaryData;
            FVar24 = (ForElementType<UE::Math::TVector4<double>_>)&this_00->RenderVerts;
            if (FVar7 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
              FVar24 = FVar7;
            }
            pdVar27 = (double *)((longlong)(int)uVar34 * 0x20 + (longlong)FVar24);
            if (pdVar27 != (double *)0x0) {
              dVar51 = *(double *)(FVar29.Data + lVar21);
              dVar54 = *(double *)(FVar29.Data + lVar21 + 8);
              *pdVar27 = dVar51;
              pdVar27[1] = dVar54;
              pdVar27[2] = dVar51 / (((double)CONCAT44(uVar57,uVar56) - auVar49._0_8_) * dVar61);
              pdVar27[3] = (dVar45 / (((double)CONCAT44(uVar40,uVar38) - dVar62) * dVar61)) * dVar54
              ;
            }
            uVar32 = uVar32 + 1;
            lVar21 = lVar21 + 0x10;
          } while ((int)uVar32 < local_3a0.ArrayNum);
        }
      }
      if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.AllocatorInstance.Data);
      }
      if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.AllocatorInstance.Data);
      }
      if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.AllocatorInstance.Data);
      }
      if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.AllocatorInstance.Data);
      }
    }
    DestructItems<FTerrainSegment,int>
              ((FTerrainSegment *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum);
    if ((FTerrainSegment *)local_3e0.AllocatorInstance.Data != (FTerrainSegment *)0x0) {
      FMemory::Free(local_3e0.AllocatorInstance.Data);
    }
  }
  pUVar19 = (this->CachedBodySetup).field0_0x0.DebugPtr;
  if (pUVar19 != (UBodySetup *)0x0) {
    (**(code **)(pUVar19->_padding_ + 0x2d0))();
    (**(code **)(((this->CachedBodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  }
  UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this);
  return;
}

// OnUnregister @ 14ad05180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::OnUnregister(UPaperTerrainComponent *this)

{
  UPaperTerrainSplineComponent *pUVar1;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  pUVar1 = (this->AssociatedSpline).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperTerrainSplineComponent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnSplineEdited);
    return;
  }
  return;
}

// PostLoad @ 14ad059f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::PostLoad(UPaperTerrainComponent *this)

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
  if (iVar2 < 0x11) {
    FLinearColor::ToFColorSRGB(&this->TerrainColor);
    fVar1 = __real_3b808081;
    fVar4 = (float)local_res11 * __real_3b808081;
    fVar3 = (float)local_res10 * __real_3b808081;
    (this->TerrainColor).field0_0x0._s_0.R = (float)local_res12 * __real_3b808081;
    (this->TerrainColor).field0_0x0._s_0.G = fVar4;
    (this->TerrainColor).field0_0x0._s_0.B = fVar3;
    (this->TerrainColor).field0_0x0._s_0.A = (float)local_res13 * fVar1;
  }
  return;
}

// Serialize @ 14ad09be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTerrainComponent::Serialize(UPaperTerrainComponent *this,FArchive *param_1)

{
  FString local_18;
  
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// Serialize @ 14ad09c80

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
UPaperTerrainComponent::Serialize(UPaperTerrainComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  FString local_18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// SetTerrainColor @ 14ad0b0f0

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
UPaperTerrainComponent::SetTerrainColor(UPaperTerrainComponent *this,FLinearColor *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res18 [8];
  undefined4 local_res20;
  
  bVar9 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar8 = __real_437f0000;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  if ((((bVar9) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->TerrainColor).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->TerrainColor).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->TerrainColor).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->TerrainColor).field0_0x0._s_0.A)))))) {
    fVar16 = (param_1->field0_0x0)._s_0.R;
    fVar15 = (param_1->field0_0x0)._s_0.G;
    fVar3 = (param_1->field0_0x0)._s_0.B;
    fVar4 = (param_1->field0_0x0)._s_0.A;
    fVar14 = fVar3;
    if (fVar3 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar17 = fVar4;
    if (fVar4 <= 0.0) {
      fVar17 = 0.0;
    }
    (this->TerrainColor).field0_0x0._s_0.R = fVar16;
    (this->TerrainColor).field0_0x0._s_0.G = fVar15;
    (this->TerrainColor).field0_0x0._s_0.B = fVar3;
    (this->TerrainColor).field0_0x0._s_0.A = fVar4;
    iVar1 = (this->GeneratedSpriteGeometry).ArrayNum;
    pFVar11 = (this->GeneratedSpriteGeometry).AllocatorInstance.Data;
    if (fVar6 <= fVar14) {
      fVar14 = fVar6;
    }
    if (fVar6 <= fVar17) {
      fVar17 = fVar6;
    }
    pFVar13 = pFVar11 + (longlong)iVar1 * 0x20;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (fVar6 <= fVar15) {
      fVar15 = fVar6;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (fVar6 <= fVar16) {
      fVar16 = fVar6;
    }
    uVar5 = CONCAT13((char)(int)(fVar17 * fVar8 + fVar7),
                     CONCAT12((char)(int)(fVar16 * fVar8 + fVar7),
                              CONCAT11((char)(int)(fVar15 * fVar8 + fVar7),
                                       (char)(int)(fVar14 * fVar8 + fVar7))));
    local_res20 = uVar5;
    while( true ) {
      if ((this->GeneratedSpriteGeometry).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPaperTerrainSpriteGeometry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar11 == pFVar13) break;
      iVar2 = *(int *)(pFVar11 + 8);
      lVar12 = *(longlong *)pFVar11;
      lVar10 = (longlong)iVar2 * 0x140 + lVar12;
      while( true ) {
        if (*(int *)(pFVar11 + 8) != iVar2) {
          `TCheckedPointerIterator<FSpriteDrawCallRecord,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (lVar12 == lVar10) break;
        *(undefined4 *)(lVar12 + 0x50) = uVar5;
        lVar12 = lVar12 + 0x140;
      }
      pFVar11 = pFVar11 + 0x20;
    }
    UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this);
  }
  return;
}

// SpawnSegments @ 14ad0c5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPaperTerrainComponent::SpawnSegments
          (UPaperTerrainComponent *this,TArray<FTerrainSegment,TSizedDefaultAllocator<32>_> *param_1
          ,bool param_2)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UPaperSprite *pUVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  FSpriteDrawCallRecord *pFVar23;
  ForElementType<UE::Math::TVector4<double>_> FVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FSpriteDrawCallRecord *pFVar27;
  FSpriteDrawCallRecord *this_00;
  ForElementType<UE::Math::TVector4<double>_> FVar28;
  undefined8 *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar93;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined4 uVar109;
  double dVar110;
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  double dVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar123;
  undefined1 auVar124 [16];
  double dVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar132;
  double dVar133;
  double dVar134;
  undefined1 auVar135 [16];
  double dVar136;
  double dVar137;
  float fVar138;
  undefined8 uVar139;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  float fVar148;
  undefined8 uVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  double dVar154;
  undefined8 uVar155;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  float fVar159;
  undefined8 uVar160;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auStackY_528 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_4d8;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  char local_4c5;
  FIdentityFunctor local_4c4 [4];
  float local_4c0;
  float local_4bc;
  float local_4b8;
  FColor_u_0 local_4b4;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  uint local_498;
  uint local_494;
  double local_490;
  double dStack_488;
  FScriptContainerElement *local_480;
  double local_478;
  double dStack_470;
  undefined8 *local_468;
  FScriptContainerElement *local_460;
  TArray<FTerrainSegment,TSizedDefaultAllocator<32>_> *local_458;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  undefined1 local_428 [16];
  double local_418;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_328 [16];
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined1 local_2e0 [16];
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TVector2<double>_u_0 local_118;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  pFVar25 = (param_1->AllocatorInstance).Data;
  dVar63 = 0.0;
  local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.ArrayNum = 0;
  local_4d8.ArrayMax = 0;
  local_494 = param_1->ArrayNum;
  uVar22 = (ulonglong)(int)local_494;
  local_4b0 = 0.0;
  local_460 = pFVar25 + uVar22 * 0x20;
  local_490 = ___xmm_00000000000000003ff0000000000000;
  dStack_488 = _UNK_150689518;
  fVar132 = __real_3f000000;
  fVar138 = __real_3f800000;
  fVar119 = __real_437f0000;
  dVar134 = ___xmm_00000000000000003ff0000000000000;
  dVar62 = _UNK_150689518;
  uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_4c5 = param_2;
  local_458 = param_1;
  do {
    pFVar15 = local_460;
    local_480 = pFVar25;
    if (local_458->ArrayNum != (int)uVar22) {
      local_4c8 = 0;
      `TCheckedPointerIterator<FTerrainSegment_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_4c8);
    }
    if (pFVar25 == pFVar15) {
      AlgoImpl::
      IntroSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,_UPaperTerrainComponent::SpawnSegments_::__l2::<lambda_1>_>_>
                ((FPaperTerrainSpriteGeometry *)
                 (this->GeneratedSpriteGeometry).AllocatorInstance.Data,
                 (this->GeneratedSpriteGeometry).ArrayNum,local_4c4[0],(<lambda_1> *)local_4c4);
      if (0 < local_4d8.ArrayNum) {
        InsertConvexCollisionDataFromPolygon(this,&local_4d8);
      }
      if ((TVector2<double>_u_0 *)local_4d8.AllocatorInstance.Data != (TVector2<double>_u_0 *)0x0) {
        FMemory::Free(local_4d8.AllocatorInstance.Data);
      }
      return;
    }
    local_498 = *(uint *)(pFVar25 + 0x18);
    uVar22 = (ulonglong)(int)local_498;
    puVar29 = *(undefined8 **)(pFVar25 + 0x10);
    local_468 = puVar29 + uVar22 * 3;
    while( true ) {
      puVar14 = local_468;
      if (*(int *)(pFVar25 + 0x18) != (int)uVar22) {
        local_4c7 = 0;
        `TCheckedPointerIterator<FTerrainSpriteStamp_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4c7);
      }
      if (puVar29 == puVar14) break;
      local_4c0 = *(float *)((longlong)puVar29 + 0xc);
      fVar3 = *(float *)(puVar29 + 2);
      fVar159 = *(float *)(puVar29 + 1);
      pUVar8 = (UPaperSprite *)*puVar29;
      lVar9 = *(longlong *)(pFVar25 + 8);
      dVar123 = dVar63;
      local_4bc = fVar3;
      local_4b8 = fVar159;
      if (((param_2 != false) && (*(char *)(lVar9 + 0x28) != '\0')) &&
         ((this->CachedBodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) {
        GetTransformAtDistance(this,&local_298,local_4c0);
        fVar119 = (float)((uint)(*(float *)(lVar9 + 0x2c) * fVar132) & uVar20);
        if (fVar119 <= fVar138) {
          fVar119 = fVar138;
        }
        auVar65._8_8_ = local_298.Rotation.ZW.m128d_f64[1];
        auVar65._0_8_ = local_298.Rotation.ZW.m128d_f64[0];
        local_3b8 = (double)(fVar159 * fVar132 * fVar3);
        local_478 = local_298.Rotation.ZW.m128d_f64[1];
        dStack_470 = local_298.Rotation.ZW.m128d_f64[1];
        local_3a8 = (double)(fVar119 * fVar132);
        dVar134 = local_298.Scale3D.XY.m128d_f64[0] * local_3b8;
        dVar62 = local_298.Scale3D.XY.m128d_f64[1] * dVar63;
        uVar93 = (undefined4)((ulonglong)dVar62 >> 0x20);
        auVar112._0_8_ = local_3a8 * local_298.Scale3D.ZW.m128d_f64[0];
        auVar112._8_8_ = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar137 = local_298.Rotation.XY.m128d_f64[1];
        uVar109 = (undefined4)((ulonglong)local_298.Rotation.ZW.m128d_f64[0] >> 0x20);
        auVar150._8_4_ = SUB84(dVar62,0);
        auVar150._0_8_ = dVar134;
        auVar150._12_4_ = uVar93;
        auVar98._8_4_ = SUB84(local_298.Rotation.ZW.m128d_f64[0],0);
        auVar98._0_8_ = dVar137;
        auVar98._12_4_ = uVar109;
        dVar110 = local_298.Rotation.XY.m128d_f64[0];
        auVar76._8_4_ = SUB84(local_298.Rotation.ZW.m128d_f64[0],0);
        auVar76._0_8_ = dVar137;
        auVar76._12_4_ = uVar109;
        auVar151._0_8_ = auVar150._8_8_ * dVar110 - dVar137 * dVar134;
        auVar151._8_8_ = auVar112._0_8_ * dVar137 - auVar98._8_8_ * dVar62;
        local_448 = blendpd((undefined1  [16])local_298.Rotation.XY.m128d_f64,auVar65,2);
        auVar124._8_4_ = SUB84(auVar151._8_8_,0);
        auVar124._0_8_ = auVar151._0_8_;
        auVar124._12_4_ = (int)((ulonglong)auVar151._8_8_ >> 0x20);
        auVar64._8_4_ = SUB84(dVar62,0);
        auVar64._0_8_ = dVar134;
        auVar64._12_4_ = uVar93;
        dVar120 = local_448._0_8_;
        dVar154 = local_448._8_8_;
        auVar65 = blendpd(auVar64,auVar112,2);
        auVar66._0_8_ =
             auVar65._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - dVar120 * auVar112._0_8_;
        auVar66._8_8_ =
             auVar65._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - dVar154 * auVar112._8_8_;
        auVar65 = blendpd(auVar151,auVar66,2);
        dVar123 = auVar124._8_8_ + auVar124._8_8_;
        dVar131 = auVar66._0_8_ + auVar66._0_8_;
        auVar152._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar152._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        uVar93 = SUB84(dVar131,0);
        auVar94._8_4_ = uVar93;
        auVar94._0_8_ = dVar123;
        uVar109 = (undefined4)((ulonglong)dVar131 >> 0x20);
        auVar94._12_4_ = uVar109;
        auVar30._8_4_ = uVar93;
        auVar30._0_8_ = dVar123;
        auVar30._12_4_ = uVar109;
        auVar67._8_4_ = uVar93;
        auVar67._0_8_ = dVar123;
        auVar67._12_4_ = uVar109;
        auVar65 = blendpd(auVar67,auVar152,2);
        auVar95._0_8_ = auVar94._8_8_ * dVar110 - dVar123 * dVar137;
        auVar95._8_8_ =
             auVar152._0_8_ * dVar137 - auVar30._8_8_ * local_298.Rotation.ZW.m128d_f64[0];
        auVar31._8_4_ = SUB84(auVar152._8_8_,0);
        auVar31._0_8_ = auVar152._0_8_;
        auVar31._12_4_ = (int)((ulonglong)auVar152._8_8_ >> 0x20);
        auVar68._0_8_ =
             auVar65._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar152._0_8_ * dVar120;
        auVar68._8_8_ = auVar65._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar31._8_8_ * dVar154
        ;
        auVar32._8_4_ = SUB84(auVar95._8_8_,0);
        auVar32._0_8_ = auVar95._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
        auVar65 = blendpd(auVar95,auVar68,2);
        local_3c8 = dVar123 * local_298.Rotation.ZW.m128d_f64[1] + dVar134 + auVar32._8_8_ +
                    local_298.Translation.XY.m128d_f64[0];
        dStack_3c0 = dVar131 * local_298.Rotation.ZW.m128d_f64[1] + dVar62 + auVar68._0_8_ +
                     local_298.Translation.XY.m128d_f64[1];
        local_438 = auVar152._0_8_ * local_298.Rotation.ZW.m128d_f64[1] + auVar112._0_8_ +
                    auVar65._0_8_ + local_298.Translation.ZW.m128d_f64[0];
        dStack_430 = auVar152._8_8_ * local_298.Rotation.ZW.m128d_f64[1] + auVar112._8_8_ +
                     auVar65._8_8_ + local_298.Translation.ZW.m128d_f64[1];
        auVar113._0_8_ = local_3a8 * local_298.Scale3D.ZW.m128d_f64[0];
        auVar113._8_8_ = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
        local_3a0 = (double)(local_4b8 * __real_bf000000 * local_4bc);
        dVar134 = local_298.Scale3D.XY.m128d_f64[0] * local_3a0;
        dVar123 = local_298.Scale3D.XY.m128d_f64[1] * local_4b0;
        uVar93 = SUB84(dVar123,0);
        uVar109 = (undefined4)((ulonglong)dVar123 >> 0x20);
        dStack_398 = local_4b0;
        auVar140._8_4_ = uVar93;
        auVar140._0_8_ = dVar134;
        auVar140._12_4_ = uVar109;
        auVar33._8_4_ = uVar93;
        auVar33._0_8_ = dVar134;
        auVar33._12_4_ = uVar109;
        auVar69._8_4_ = uVar93;
        auVar69._0_8_ = dVar134;
        auVar69._12_4_ = uVar109;
        auVar65 = blendpd(auVar69,auVar113,2);
        auVar141._0_8_ = auVar140._8_8_ * dVar110 - dVar134 * dVar137;
        auVar141._8_8_ =
             auVar113._0_8_ * dVar137 - auVar33._8_8_ * local_298.Rotation.ZW.m128d_f64[0];
        auVar34._8_4_ = SUB84(auVar113._8_8_,0);
        auVar34._0_8_ = auVar113._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
        auVar135._8_4_ = SUB84(auVar141._8_8_,0);
        auVar135._0_8_ = auVar141._0_8_;
        auVar135._12_4_ = (int)((ulonglong)auVar141._8_8_ >> 0x20);
        auVar70._0_8_ =
             auVar65._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar113._0_8_ * dVar120;
        auVar70._8_8_ = auVar65._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar34._8_8_ * dVar154
        ;
        auVar65 = blendpd(auVar141,auVar70,2);
        dVar133 = auVar135._8_8_ + auVar135._8_8_;
        dVar136 = auVar70._0_8_ + auVar70._0_8_;
        auVar142._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar142._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        uVar93 = SUB84(dVar136,0);
        auVar96._8_4_ = uVar93;
        auVar96._0_8_ = dVar133;
        uVar109 = (undefined4)((ulonglong)dVar136 >> 0x20);
        auVar96._12_4_ = uVar109;
        auVar35._8_4_ = uVar93;
        auVar35._0_8_ = dVar133;
        auVar35._12_4_ = uVar109;
        auVar71._8_4_ = uVar93;
        auVar71._0_8_ = dVar133;
        auVar71._12_4_ = uVar109;
        auVar65 = blendpd(auVar71,auVar142,2);
        auVar97._0_8_ = auVar96._8_8_ * dVar110 - dVar133 * dVar137;
        auVar97._8_8_ =
             auVar142._0_8_ * dVar137 - auVar35._8_8_ * local_298.Rotation.ZW.m128d_f64[0];
        auVar36._8_4_ = SUB84(auVar142._8_8_,0);
        auVar36._0_8_ = auVar142._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar142._8_8_ >> 0x20);
        auVar72._0_8_ =
             auVar65._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar142._0_8_ * dVar120;
        auVar72._8_8_ = auVar65._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar36._8_8_ * dVar154
        ;
        auVar37._8_4_ = SUB84(auVar97._8_8_,0);
        auVar37._0_8_ = auVar97._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
        auVar98 = blendpd(auVar97,auVar72,2);
        local_378 = (double)(fVar119 * __real_bf000000);
        local_388 = (double)CONCAT44((uint)((ulonglong)local_3b8 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(local_3b8,0) ^
                                     (uint)__xmm_80000000000000008000000000000000);
        auVar114._0_8_ = local_378 * local_298.Scale3D.ZW.m128d_f64[0];
        auVar114._8_8_ = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar62 = local_298.Scale3D.XY.m128d_f64[0] * local_388;
        dVar131 = local_298.Scale3D.XY.m128d_f64[1] * local_4b0;
        uVar93 = SUB84(dVar131,0);
        uVar109 = (undefined4)((ulonglong)dVar131 >> 0x20);
        dStack_380 = local_4b0;
        auVar125._8_4_ = uVar93;
        auVar125._0_8_ = dVar62;
        auVar125._12_4_ = uVar109;
        auVar38._8_4_ = uVar93;
        auVar38._0_8_ = dVar62;
        auVar38._12_4_ = uVar109;
        auVar73._8_4_ = uVar93;
        auVar73._0_8_ = dVar62;
        auVar73._12_4_ = uVar109;
        auVar65 = blendpd(auVar73,auVar114,2);
        auVar126._0_8_ = auVar125._8_8_ * dVar110 - dVar62 * dVar137;
        auVar126._8_8_ =
             auVar114._0_8_ * dVar137 - auVar38._8_8_ * local_298.Rotation.ZW.m128d_f64[0];
        auVar39._8_4_ = SUB84(auVar114._8_8_,0);
        auVar39._0_8_ = auVar114._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
        auVar74._0_8_ =
             auVar65._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar114._0_8_ * dVar120;
        auVar74._8_8_ = auVar65._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar39._8_8_ * dVar154
        ;
        local_340 = dVar133 * local_298.Rotation.ZW.m128d_f64[1] + dVar134 + auVar37._8_8_ +
                    local_298.Translation.XY.m128d_f64[0];
        dStack_338 = dVar136 * local_298.Rotation.ZW.m128d_f64[1] + dVar123 + auVar72._0_8_ +
                     local_298.Translation.XY.m128d_f64[1];
        auVar65 = blendpd(auVar126,auVar74,2);
        local_330 = auVar142._0_8_ * local_298.Rotation.ZW.m128d_f64[1] + auVar113._0_8_ +
                    auVar98._0_8_ + local_298.Translation.ZW.m128d_f64[0];
        local_360 = (double)CONCAT44((uint)((ulonglong)local_3a8 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(local_3a8,0) ^
                                     (uint)__xmm_80000000000000008000000000000000);
        dVar134 = auVar126._8_8_ + auVar126._8_8_;
        dVar123 = auVar74._0_8_ + auVar74._0_8_;
        uVar93 = SUB84(dVar123,0);
        uVar109 = (undefined4)((ulonglong)dVar123 >> 0x20);
        auVar127._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar127._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        auVar99._8_4_ = uVar93;
        auVar99._0_8_ = dVar134;
        auVar99._12_4_ = uVar109;
        auVar40._8_4_ = uVar93;
        auVar40._0_8_ = dVar134;
        auVar40._12_4_ = uVar109;
        local_428._8_8_ = auVar76._8_8_;
        auVar75._8_4_ = uVar93;
        auVar75._0_8_ = dVar134;
        auVar75._12_4_ = uVar109;
        auVar100._0_8_ = auVar99._8_8_ * dVar110 - dVar134 * dVar137;
        auVar100._8_8_ = auVar127._0_8_ * dVar137 - auVar40._8_8_ * (double)local_428._8_8_;
        auVar76 = blendpd(auVar75,auVar127,2);
        auVar41._8_4_ = SUB84(auVar127._8_8_,0);
        auVar41._0_8_ = auVar127._0_8_;
        auVar41._12_4_ = (int)((ulonglong)auVar127._8_8_ >> 0x20);
        auVar77._0_8_ =
             auVar76._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar127._0_8_ * dVar120;
        auVar77._8_8_ = auVar76._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar41._8_8_ * dVar154
        ;
        auVar42._8_4_ = SUB84(auVar100._8_8_,0);
        auVar42._0_8_ = auVar100._0_8_;
        auVar42._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
        auVar65 = blendpd(auVar100,auVar77,2);
        auVar121._0_8_ = local_360 * local_298.Scale3D.ZW.m128d_f64[0];
        auVar121._8_8_ = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
        local_3d8._0_8_ = local_298.Scale3D.XY.m128d_f64[0] * local_3b8;
        local_3d8._8_8_ = local_298.Scale3D.XY.m128d_f64[1] * local_4b0;
        dStack_368 = local_4b0;
        auVar115._8_4_ = SUB84(local_3d8._8_8_,0);
        auVar115._0_8_ = local_3d8._0_8_;
        uVar93 = (undefined4)((ulonglong)local_3d8._8_8_ >> 0x20);
        auVar115._12_4_ = uVar93;
        auVar43._8_4_ = SUB84(local_3d8._8_8_,0);
        auVar43._0_8_ = local_3d8._0_8_;
        auVar43._12_4_ = uVar93;
        auVar76 = blendpd(local_3d8,auVar121,2);
        auVar116._0_8_ = auVar115._8_8_ * dVar110 - local_3d8._0_8_ * dVar137;
        auVar116._8_8_ = auVar121._0_8_ * dVar137 - auVar43._8_8_ * (double)local_428._8_8_;
        auVar44._8_4_ = SUB84(auVar121._8_8_,0);
        auVar44._0_8_ = auVar121._0_8_;
        auVar44._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
        auVar78._0_8_ =
             auVar76._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar121._0_8_ * dVar120;
        auVar78._8_8_ = auVar76._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar44._8_8_ * dVar154
        ;
        local_f8._s_0.X =
             dVar134 * local_298.Rotation.ZW.m128d_f64[1] + dVar62 + auVar42._8_8_ +
             local_298.Translation.XY.m128d_f64[0];
        dVar123 = dVar123 * local_298.Rotation.ZW.m128d_f64[1] + dVar131 + auVar77._0_8_ +
                  local_298.Translation.XY.m128d_f64[1];
        auVar76 = blendpd(auVar116,auVar78,2);
        dVar134 = auVar116._8_8_ + auVar116._8_8_;
        dVar62 = auVar78._0_8_ + auVar78._0_8_;
        uVar93 = SUB84(dVar62,0);
        uVar109 = (undefined4)((ulonglong)dVar62 >> 0x20);
        auVar117._0_8_ = auVar76._0_8_ + auVar76._0_8_;
        auVar117._8_8_ = auVar76._8_8_ + auVar76._8_8_;
        auVar101._8_4_ = uVar93;
        auVar101._0_8_ = dVar134;
        auVar101._12_4_ = uVar109;
        auVar45._8_4_ = uVar93;
        auVar45._0_8_ = dVar134;
        auVar45._12_4_ = uVar109;
        auVar79._8_4_ = uVar93;
        auVar79._0_8_ = dVar134;
        auVar79._12_4_ = uVar109;
        auVar76 = blendpd(auVar79,auVar117,2);
        local_328._8_4_ = SUB84(dVar123,0);
        local_328._0_8_ = local_f8._s_0.X;
        local_328._12_4_ = (int)((ulonglong)dVar123 >> 0x20);
        auVar102._0_8_ = auVar101._8_8_ * dVar110 - dVar134 * dVar137;
        auVar102._8_8_ = auVar117._0_8_ * dVar137 - auVar45._8_8_ * (double)local_428._8_8_;
        auVar46._8_4_ = SUB84(auVar117._8_8_,0);
        auVar46._0_8_ = auVar117._0_8_;
        auVar46._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
        auVar80._0_8_ =
             auVar76._0_8_ * local_298.Rotation.ZW.m128d_f64[0] - auVar117._0_8_ * dVar120;
        auVar80._8_8_ = auVar76._8_8_ * local_298.Rotation.ZW.m128d_f64[1] - auVar46._8_8_ * dVar154
        ;
        auVar47._8_4_ = SUB84(auVar102._8_8_,0);
        auVar47._0_8_ = auVar102._0_8_;
        auVar47._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
        auVar76 = blendpd(auVar102,auVar80,2);
        local_e8._s_0.X =
             dVar134 * local_298.Rotation.ZW.m128d_f64[1] + local_3d8._0_8_ + auVar47._8_8_ +
             local_298.Translation.XY.m128d_f64[0];
        dVar134 = dVar62 * local_298.Rotation.ZW.m128d_f64[1] + local_3d8._8_8_ + auVar80._0_8_ +
                  local_298.Translation.XY.m128d_f64[1];
        local_428._8_4_ = SUB84(dVar134,0);
        local_428._0_8_ = local_e8._s_0.X;
        local_428._12_4_ = (int)((ulonglong)dVar134 >> 0x20);
        local_318 = auVar127._0_8_ * local_298.Rotation.ZW.m128d_f64[1] + auVar114._0_8_ +
                    auVar65._0_8_ + local_298.Translation.ZW.m128d_f64[0];
        local_418 = auVar117._0_8_ * local_298.Rotation.ZW.m128d_f64[1] + auVar121._0_8_ +
                    auVar76._0_8_ + local_298.Translation.ZW.m128d_f64[0];
        dStack_3b0 = dVar63;
        local_390 = local_3a8;
        local_370 = local_3b8;
        local_358 = local_3c8;
        dStack_350 = dStack_3c0;
        local_348 = local_438;
        local_118._s_0.X = local_3c8;
        local_118._s_0.Y = local_438;
        local_108._s_0.X = local_340;
        local_108._s_0.Y = local_330;
        local_f8._s_0.Y = local_318;
        local_e8._s_0.Y = local_418;
        if (local_4d8.ArrayNum < 4) {
          iVar19 = local_4d8.ArrayNum;
          if ((local_4d8.AllocatorInstance.Data <= &local_118) &&
             (&local_118 <
              (TVector2<double>_u_0 *)
              (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar19 = local_4d8.ArrayNum;
          }
          if (iVar19 == local_4d8.ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
          }
          iVar18 = iVar19 + 1;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)iVar19 * 0x10) = local_118._s_0.X
          ;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)iVar19 * 0x10 + 8) =
               local_118._s_0.Y;
          local_4d8.ArrayNum = iVar18;
          if (((local_4d8.AllocatorInstance.Data <= &local_108) &&
              (&local_108 <
               (TVector2<double>_u_0 *)
               (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
            local_4d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
          }
          iVar19 = local_4d8.ArrayNum + 1;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10) =
               local_108._s_0.X;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10 + 8) =
               local_108._s_0.Y;
          local_4d8.ArrayNum = iVar19;
          if (((local_4d8.AllocatorInstance.Data <= &local_f8) &&
              (&local_f8 <
               (TVector2<double>_u_0 *)
               (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
            local_4d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
          }
          iVar19 = local_4d8.ArrayNum + 1;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10) =
               local_f8._s_0.X;
          *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10 + 8) =
               local_f8._s_0.Y;
          local_4d8.ArrayNum = iVar19;
          if (((local_4d8.AllocatorInstance.Data <= &local_e8) &&
              (&local_e8 <
               (TVector2<double>_u_0 *)
               (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
            local_4d8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
          }
          lVar21 = (longlong)local_4d8.ArrayNum;
          local_4d8.ArrayNum = local_4d8.ArrayNum + 1;
          *(double *)(local_4d8.AllocatorInstance.Data + lVar21 * 0x10) = local_e8._s_0.X;
          *(double *)(local_4d8.AllocatorInstance.Data + lVar21 * 0x10 + 8) = local_e8._s_0.Y;
          local_4a8 = local_108._s_0.X - local_118._s_0.X;
          local_4a0 = local_108._s_0.Y - local_118._s_0.Y;
          dVar63 = local_4a0 * local_4a0 + local_4a8 * local_4a8;
          fVar138 = __real_3f800000;
          fVar119 = __real_437f0000;
          dVar123 = local_4b0;
          fVar132 = __real_3f000000;
          dVar134 = local_490;
          dVar62 = dStack_488;
          if (dVar63 <= __real_3e45798ee0000000) {
            local_4a8 = local_4b0;
            local_4a0 = local_4b0;
          }
          else {
            local_3f8 = __real_3ff0000000000000 / SQRT(dVar63);
            local_4a0 = local_3f8 * local_4a0;
            local_4a8 = local_3f8 * local_4a8;
          }
        }
        else {
          uVar17 = local_4d8.ArrayNum / 2;
          uVar26 = uVar17 - 1;
          uVar20 = 0;
          if ((int)uVar26 < local_4d8.ArrayNum) {
            uVar20 = ~uVar26 >> 0x1f;
          }
          if (uVar20 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          uVar20 = 0;
          if ((int)uVar17 < local_4d8.ArrayNum) {
            uVar20 = ~uVar17 >> 0x1f;
          }
          auVar48._0_8_ =
               (local_118._s_0.Y -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10 + 8)) *
               (local_118._s_0.Y -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10 + 8)) +
               (local_118._s_0.X -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10)) *
               (local_118._s_0.X -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10));
          auVar48._8_8_ = 0;
          auVar76 = sqrtpd(auVar48,auVar48);
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          dVar123 = local_4b0;
          dVar137 = __real_3e45798ee0000000;
          dVar131 = __real_3ff0000000000000;
          dVar110 = local_108._s_0.X - local_118._s_0.X;
          dVar120 = local_108._s_0.Y - local_118._s_0.Y;
          auVar49._0_8_ =
               (local_e8._s_0.Y -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10 + 8)) *
               (local_e8._s_0.Y -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10 + 8)) +
               (local_e8._s_0.X -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10)) *
               (local_e8._s_0.X -
               *(double *)(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10));
          auVar49._8_8_ = 0;
          auVar65 = sqrtpd(auVar49,auVar49);
          dVar62 = dVar120 * dVar120 + dVar110 * dVar110;
          dVar63 = local_4b0;
          dVar134 = local_4b0;
          if (__real_3e45798ee0000000 < dVar62) {
            local_408 = __real_3ff0000000000000 / SQRT(dVar62);
            dVar63 = local_408 * dVar120;
            dVar134 = local_408 * dVar110;
          }
          if ((__real_41200000 <= (float)auVar76._0_8_) || (__real_41200000 <= (float)auVar65._0_8_)
             ) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if ((dVar63 * local_4a0 + dVar134 * local_4a8 <= local_4b0) || (!bVar16)) {
            InsertConvexCollisionDataFromPolygon(this,&local_4d8);
            iVar19 = local_4d8.ArrayMax;
            local_4d8._8_8_ = local_4d8._8_8_ & 0xffffffff00000000;
            iVar18 = 0;
            if (iVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,&local_4d8.AllocatorInstance,0,&local_4d8.ArrayMax);
              iVar18 = local_4d8.ArrayNum;
            }
            if ((local_4d8.AllocatorInstance.Data <= &local_118) &&
               (&local_118 <
                (TVector2<double>_u_0 *)
                (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar18 = local_4d8.ArrayNum;
            }
            if (iVar18 == local_4d8.ArrayMax) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
            }
            iVar19 = iVar18 + 1;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)iVar18 * 0x10) =
                 local_118._s_0.X;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)iVar18 * 0x10 + 8) =
                 local_118._s_0.Y;
            local_4d8.ArrayNum = iVar19;
            if (((local_4d8.AllocatorInstance.Data <= &local_108) &&
                (&local_108 <
                 (TVector2<double>_u_0 *)
                 (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
              local_4d8.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
            }
            iVar19 = local_4d8.ArrayNum + 1;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10) =
                 local_108._s_0.X;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10 + 8)
                 = local_108._s_0.Y;
            local_4d8.ArrayNum = iVar19;
            if (((local_4d8.AllocatorInstance.Data <= &local_f8) &&
                (&local_f8 <
                 (TVector2<double>_u_0 *)
                 (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
              local_4d8.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
            }
            iVar19 = local_4d8.ArrayNum + 1;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10) =
                 local_f8._s_0.X;
            *(double *)(local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayNum * 0x10 + 8)
                 = local_f8._s_0.Y;
            local_4d8.ArrayNum = iVar19;
            if (((local_4d8.AllocatorInstance.Data <= &local_e8) &&
                (&local_e8 <
                 (TVector2<double>_u_0 *)
                 (local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 0x10))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
              local_4d8.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
            }
            fVar119 = __real_437f0000;
            fVar138 = __real_3f800000;
            lVar21 = (longlong)local_4d8.ArrayNum;
            local_4d8.ArrayNum = local_4d8.ArrayNum + 1;
            *(double *)(local_4d8.AllocatorInstance.Data + lVar21 * 0x10) = local_e8._s_0.X;
            *(double *)(local_4d8.AllocatorInstance.Data + lVar21 * 0x10 + 8) = local_e8._s_0.Y;
            local_4a8 = local_108._s_0.X - local_118._s_0.X;
            local_4a0 = local_108._s_0.Y - local_118._s_0.Y;
            dVar63 = local_4a0 * local_4a0 + local_4a8 * local_4a8;
            fVar132 = __real_3f000000;
            dVar134 = local_490;
            dVar62 = dStack_488;
            if (dVar63 <= dVar137) {
              local_4a8 = dVar123;
              local_4a0 = dVar123;
            }
            else {
              local_400 = dVar131 / SQRT(dVar63);
              local_4a0 = local_400 * local_4a0;
              local_4a8 = local_400 * local_4a8;
            }
          }
          else {
            TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_4d8,(TVector2<double> *)&local_f8._s_0,uVar17);
            TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_4d8,(TVector2<double> *)&local_108._s_0,uVar17);
            fVar132 = __real_3f000000;
            fVar138 = __real_3f800000;
            fVar119 = __real_437f0000;
            dVar134 = local_490;
            dVar62 = dStack_488;
          }
        }
      }
      fVar6 = local_4b8;
      fVar159 = local_4bc;
      fVar3 = local_4c0;
      dVar63 = dVar123;
      if (pUVar8 != (UPaperSprite *)0x0) {
        uVar20 = (this->GeneratedSpriteGeometry).ArrayNum;
        piVar2 = &(this->GeneratedSpriteGeometry).ArrayMax;
        if (uVar20 == *piVar2) {
          uVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->GeneratedSpriteGeometry).AllocatorInstance,piVar2);
        }
        this_00 = (FSpriteDrawCallRecord *)0x0;
        (this->GeneratedSpriteGeometry).ArrayNum = uVar20 + 1;
        uVar17 = 0;
        if ((int)uVar20 < (int)(uVar20 + 1)) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar23 = (FSpriteDrawCallRecord *)
                  ((this->GeneratedSpriteGeometry).AllocatorInstance.Data +
                  (longlong)(int)uVar20 * 0x20);
        pFVar27 = this_00;
        if (pFVar23 != (FSpriteDrawCallRecord *)0x0) {
          (pFVar23->Destination).field0_0x0._s_0.Z = 0.0;
          (pFVar23->BaseTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
          (pFVar23->Destination).field0_0x0._s_0.X = 0.0;
          (pFVar23->Destination).field0_0x0._s_0.Y = 0.0;
          pFVar27 = pFVar23;
        }
        puVar1 = (uint *)((longlong)&(pFVar27->Destination).field0_0x0 + 0xc);
        (pFVar27->Destination).field0_0x0._s_0.Z = (double)(pUVar8->DefaultMaterial).field0_0x0;
        *(undefined4 *)&(pFVar27->BaseTexture).field0_0x0 = *(undefined4 *)(lVar9 + 0x30);
        uVar20 = *(uint *)((longlong)&(pFVar27->Destination).field0_0x0 + 8);
        if (uVar20 == *puVar1) {
          uVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x140,0x10,(ForAnyElementType *)pFVar27,(int *)puVar1);
        }
        *(uint *)((longlong)&(pFVar27->Destination).field0_0x0 + 8) = uVar20 + 1;
        uVar17 = 0;
        if ((int)uVar20 < (int)(uVar20 + 1)) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar27 = (FSpriteDrawCallRecord *)
                  ((longlong)(pFVar27->Destination).field0_0x0._s_0.X +
                  (longlong)(int)uVar20 * 0x140);
        if (pFVar27 != (FSpriteDrawCallRecord *)0x0) {
          (pFVar27->BaseTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
          (pFVar27->AdditionalTextures).AllocatorInstance.SecondaryData =
               (ForElementType<UTexture_*>)0x0;
          (pFVar27->Destination).field0_0x0._s_0.X = 0.0;
          (pFVar27->Destination).field0_0x0._s_0.Y = 0.0;
          (pFVar27->Destination).field0_0x0._s_0.Z = 0.0;
          (pFVar27->AdditionalTextures).ArrayNum = 0;
          (pFVar27->AdditionalTextures).ArrayMax = 4;
          (pFVar27->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
          (pFVar27->RenderVerts).AllocatorInstance.SecondaryData =
               (ForElementType<UE::Math::TVector4<double>_>)0x0;
          (pFVar27->RenderVerts).ArrayNum = 0;
          (pFVar27->RenderVerts).ArrayMax = 6;
          this_00 = pFVar27;
        }
        FSpriteDrawCallRecord::BuildFromSprite(this_00,pUVar8);
        fVar4 = (this->TerrainColor).field0_0x0._s_0.B;
        fVar5 = (this->TerrainColor).field0_0x0._s_0.G;
        fVar148 = 0.0;
        if (fVar4 <= 0.0) {
          fVar4 = fVar148;
        }
        if (fVar5 <= 0.0) {
          fVar5 = fVar148;
        }
        if (fVar138 <= fVar4) {
          fVar4 = fVar138;
        }
        fVar159 = fVar6 * fVar132 * fVar159;
        if (fVar138 <= fVar5) {
          fVar5 = fVar138;
        }
        fVar6 = (this->TerrainColor).field0_0x0._s_0.R;
        if (fVar6 <= 0.0) {
          fVar6 = fVar148;
        }
        fVar7 = (this->TerrainColor).field0_0x0._s_0.A;
        if (fVar138 <= fVar6) {
          fVar6 = fVar138;
        }
        if (fVar7 <= 0.0) {
          fVar7 = fVar148;
        }
        local_4b4._s_0.G = (char)(int)(fVar5 * fVar119 + fVar132);
        local_4b4._s_0.B = (char)(int)(fVar4 * fVar119 + fVar132);
        if (fVar138 <= fVar7) {
          fVar7 = fVar138;
        }
        local_4b4._s_0.R = (char)(int)(fVar6 * fVar119 + fVar132);
        local_4b4._s_0.A = (char)(int)(fVar7 * fVar119 + fVar132);
        (this_00->Color).field0_0x0 = local_4b4;
        local_310 = dVar134;
        dStack_308 = dVar62;
        GetTransformAtDistance(this,&local_178,fVar3 - fVar159);
        dVar134 = dVar134 * local_178.Scale3D.XY.m128d_f64[0];
        dVar110 = dVar62 * local_178.Scale3D.XY.m128d_f64[1];
        auVar143._0_8_ = dVar123 * local_178.Scale3D.ZW.m128d_f64[0];
        auVar143._8_8_ = local_178.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar63 = local_178.Rotation.ZW.m128d_f64[0];
        dVar137 = local_178.Rotation.XY.m128d_f64[1];
        auVar156._8_4_ = SUB84(dVar110,0);
        auVar156._0_8_ = dVar134;
        uVar93 = (undefined4)((ulonglong)dVar110 >> 0x20);
        auVar156._12_4_ = uVar93;
        auVar50._8_4_ = local_178.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar50._0_8_ = dVar137;
        auVar50._12_4_ = local_178.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar81._8_4_ = SUB84(dVar110,0);
        auVar81._0_8_ = dVar134;
        auVar81._12_4_ = uVar93;
        auVar157._0_8_ = auVar156._8_8_ * local_178.Rotation.XY.m128d_f64[0] - dVar137 * dVar134;
        auVar157._8_8_ = auVar143._0_8_ * dVar137 - auVar50._8_8_ * dVar110;
        auVar76 = blendpd(auVar81,auVar143,2);
        dVar131 = local_178.Rotation.ZW.m128d_f64[1];
        auVar153._8_4_ = SUB84(auVar157._8_8_,0);
        auVar153._0_8_ = auVar157._0_8_;
        auVar153._12_4_ = (int)((ulonglong)auVar157._8_8_ >> 0x20);
        auVar65 = blendpd((undefined1  [16])local_178.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_178.Rotation.ZW.m128d_f64,2);
        auVar82._0_8_ = auVar76._0_8_ * dVar63 - auVar65._0_8_ * auVar143._0_8_;
        auVar82._8_8_ = auVar76._8_8_ * dVar131 - auVar65._8_8_ * auVar143._8_8_;
        dVar120 = auVar153._8_8_ + auVar153._8_8_;
        dVar154 = auVar82._0_8_ + auVar82._0_8_;
        auVar76 = blendpd(auVar157,auVar82,2);
        auVar158._0_8_ = auVar76._0_8_ + auVar76._0_8_;
        auVar158._8_8_ = auVar76._8_8_ + auVar76._8_8_;
        uVar93 = SUB84(dVar154,0);
        auVar103._8_4_ = uVar93;
        auVar103._0_8_ = dVar120;
        uVar109 = (undefined4)((ulonglong)dVar154 >> 0x20);
        auVar103._12_4_ = uVar109;
        auVar51._8_4_ = uVar93;
        auVar51._0_8_ = dVar120;
        auVar51._12_4_ = uVar109;
        auVar83._8_4_ = uVar93;
        auVar83._0_8_ = dVar120;
        auVar83._12_4_ = uVar109;
        auVar76 = blendpd(auVar83,auVar158,2);
        auVar104._0_8_ = auVar103._8_8_ * local_178.Rotation.XY.m128d_f64[0] - dVar120 * dVar137;
        auVar104._8_8_ = auVar158._0_8_ * dVar137 - auVar51._8_8_ * dVar63;
        auVar52._8_4_ = SUB84(auVar158._8_8_,0);
        auVar52._0_8_ = auVar158._0_8_;
        auVar52._12_4_ = (int)((ulonglong)auVar158._8_8_ >> 0x20);
        auVar84._0_8_ = auVar76._0_8_ * dVar63 - auVar158._0_8_ * auVar65._0_8_;
        auVar84._8_8_ = auVar76._8_8_ * dVar131 - auVar52._8_8_ * auVar65._8_8_;
        auVar53._8_4_ = SUB84(auVar104._8_8_,0);
        auVar53._0_8_ = auVar104._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
        auVar76 = blendpd(auVar104,auVar84,2);
        local_2f8 = dVar120 * dVar131 + dVar134 + auVar53._8_8_;
        dStack_2f0 = dVar154 * dVar131 + dVar110 + auVar84._0_8_;
        local_2e8 = auVar158._0_8_ * dVar131 + auVar143._0_8_ + auVar76._0_8_;
        auVar11._4_8_ = dVar62;
        auVar11._0_4_ = (int)((ulonglong)local_2f8 >> 0x20);
        auVar161._0_8_ = auVar11._0_8_ << 0x20;
        auVar161._8_4_ = SUB84(dStack_2f0,0);
        auVar161._12_4_ = (int)((ulonglong)dStack_2f0 >> 0x20);
        dVar134 = auVar161._8_8_;
        dVar63 = dVar134 * dVar134 + local_2f8 * local_2f8 + local_2e8 * local_2e8;
        uVar160 = dVar134;
        uVar155 = local_2e8;
        uVar149 = local_2f8;
        if ((dVar63 != __real_3ff0000000000000) &&
           (uVar160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar155 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar149 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           __real_3e45798ee0000000 <= dVar63)) {
          local_3f0 = __real_3ff0000000000000 / SQRT(dVar63);
          uVar160 = dVar134 * local_3f0;
          uVar155 = local_2e8 * local_3f0;
          uVar149 = local_2f8 * local_3f0;
        }
        local_300 = dVar123;
        GetTransformAtDistance(this,&local_1d8,fVar159 + local_4c0);
        fVar138 = local_4c0;
        auVar162._0_8_ = dVar123 * local_1d8.Scale3D.ZW.m128d_f64[0];
        auVar162._8_8_ = local_1d8.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar134 = local_1d8.Rotation.ZW.m128d_f64[1];
        dVar110 = local_490 * local_1d8.Scale3D.XY.m128d_f64[0];
        dVar120 = dStack_488 * local_1d8.Scale3D.XY.m128d_f64[1];
        dVar63 = local_1d8.Rotation.ZW.m128d_f64[0];
        dVar137 = local_1d8.Rotation.XY.m128d_f64[1];
        auVar54._8_4_ = local_1d8.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar54._0_8_ = dVar137;
        auVar54._12_4_ = local_1d8.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar144._8_4_ = SUB84(dVar120,0);
        auVar144._0_8_ = dVar110;
        uVar93 = (undefined4)((ulonglong)dVar120 >> 0x20);
        auVar144._12_4_ = uVar93;
        auVar85._8_4_ = SUB84(dVar120,0);
        auVar85._0_8_ = dVar110;
        auVar85._12_4_ = uVar93;
        auVar76 = blendpd(auVar85,auVar162,2);
        auVar65 = blendpd((undefined1  [16])local_1d8.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_1d8.Rotation.ZW.m128d_f64,2);
        auVar145._0_8_ = auVar144._8_8_ * local_1d8.Rotation.XY.m128d_f64[0] - dVar137 * dVar110;
        auVar145._8_8_ = auVar162._0_8_ * dVar137 - auVar54._8_8_ * dVar120;
        auVar86._0_8_ = auVar76._0_8_ * dVar63 - auVar65._0_8_ * auVar162._0_8_;
        auVar86._8_8_ = auVar76._8_8_ * dVar134 - auVar65._8_8_ * auVar162._8_8_;
        auVar76 = blendpd(auVar145,auVar86,2);
        dVar62 = auVar145._8_8_ + auVar145._8_8_;
        dVar131 = auVar86._0_8_ + auVar86._0_8_;
        uVar93 = SUB84(dVar131,0);
        uVar109 = (undefined4)((ulonglong)dVar131 >> 0x20);
        auVar146._0_8_ = auVar76._0_8_ + auVar76._0_8_;
        auVar146._8_8_ = auVar76._8_8_ + auVar76._8_8_;
        auVar105._8_4_ = uVar93;
        auVar105._0_8_ = dVar62;
        auVar105._12_4_ = uVar109;
        auVar55._8_4_ = uVar93;
        auVar55._0_8_ = dVar62;
        auVar55._12_4_ = uVar109;
        auVar87._8_4_ = uVar93;
        auVar87._0_8_ = dVar62;
        auVar87._12_4_ = uVar109;
        auVar76 = blendpd(auVar87,auVar146,2);
        auVar106._0_8_ = auVar105._8_8_ * local_1d8.Rotation.XY.m128d_f64[0] - dVar62 * dVar137;
        auVar106._8_8_ = auVar146._0_8_ * dVar137 - auVar55._8_8_ * dVar63;
        auVar56._8_4_ = SUB84(auVar146._8_8_,0);
        auVar56._0_8_ = auVar146._0_8_;
        auVar56._12_4_ = (int)((ulonglong)auVar146._8_8_ >> 0x20);
        auVar88._0_8_ = auVar76._0_8_ * dVar63 - auVar146._0_8_ * auVar65._0_8_;
        auVar88._8_8_ = auVar76._8_8_ * dVar134 - auVar56._8_8_ * auVar65._8_8_;
        auVar57._8_4_ = SUB84(auVar106._8_8_,0);
        auVar57._0_8_ = auVar106._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
        dVar62 = dVar62 * dVar134 + dVar110 + auVar57._8_8_;
        dVar131 = dVar131 * dVar134 + dVar120 + auVar88._0_8_;
        uVar93 = SUB84(dVar131,0);
        uVar109 = (undefined4)((ulonglong)dVar131 >> 0x20);
        auVar76 = blendpd(auVar106,auVar88,2);
        auVar12._4_8_ = dVar63;
        auVar12._0_4_ = (int)((ulonglong)dVar62 >> 0x20);
        auVar118._0_8_ = auVar12._0_8_ << 0x20;
        auVar118._8_4_ = uVar93;
        auVar118._12_4_ = uVar109;
        dVar131 = auVar118._8_8_;
        local_2d0 = auVar146._0_8_ * dVar134 + auVar162._0_8_ + auVar76._0_8_;
        local_2e0._8_4_ = uVar93;
        local_2e0._0_8_ = dVar62;
        local_2e0._12_4_ = uVar109;
        dVar63 = dVar131 * dVar131 + dVar62 * dVar62 + local_2d0 * local_2d0;
        uVar13 = dVar62;
        uVar139 = local_2d0;
        uVar111 = dVar131;
        if ((dVar63 != __real_3ff0000000000000) &&
           (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar139 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar111 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           __real_3e45798ee0000000 <= dVar63)) {
          local_3e8 = __real_3ff0000000000000 / SQRT(dVar63);
          uVar13 = dVar62 * local_3e8;
          uVar139 = local_2d0 * local_3e8;
          uVar111 = dVar131 * local_3e8;
        }
        iVar19 = (this_00->RenderVerts).ArrayNum;
        FVar24 = (ForElementType<UE::Math::TVector4<double>_>)&this_00->RenderVerts;
        FVar28 = (this_00->RenderVerts).AllocatorInstance.SecondaryData;
        if (FVar28 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
          FVar24 = FVar28;
        }
        FVar28 = (ForElementType<UE::Math::TVector4<double>_>)
                 ((longlong)iVar19 * 0x20 + (longlong)FVar24);
        while( true ) {
          if ((this_00->RenderVerts).ArrayNum != iVar19) {
            local_4c6 = 0;
            `TCheckedPointerIterator<UE::Math::TVector4<double>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_4c6);
          }
          dVar63 = local_4b0;
          param_2 = (bool)local_4c5;
          if (FVar24 == FVar28) break;
          GetTransformAtDistance
                    (this,&local_238,
                     (float)((double)local_4bc * *(double *)FVar24 + (double)fVar138));
          if ((double)uVar149 * (double)uVar13 + (double)uVar160 * (double)uVar111 +
              (double)uVar155 * (double)uVar139 < dVar123) {
            local_238.Rotation.XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
            local_238.Rotation.XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
            local_238.Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
            local_238.Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
          }
          local_2b8 = *(double *)((longlong)FVar24 + 8);
          dVar110 = local_238.Rotation.ZW.m128d_f64[0];
          dVar120 = local_238.Rotation.ZW.m128d_f64[1];
          dVar63 = local_238.Rotation.XY.m128d_f64[1];
          local_2c8 = local_2b8 * PaperAxisY.field0_0x0._s_0.X;
          dStack_2c0 = local_2b8 * PaperAxisY.field0_0x0._s_0.Y;
          local_2b8 = local_2b8 * PaperAxisY.field0_0x0._s_0.Z;
          auVar65 = blendpd((undefined1  [16])local_238.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_238.Rotation.ZW.m128d_f64,2);
          auVar58._8_4_ = local_238.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar58._0_8_ = dVar63;
          auVar58._12_4_ = local_238.Rotation.ZW.m128d_f64[0]._4_4_;
          dVar131 = local_2c8 * local_238.Scale3D.XY.m128d_f64[0];
          dVar137 = dStack_2c0 * local_238.Scale3D.XY.m128d_f64[1];
          auVar147._0_8_ = local_2b8 * local_238.Scale3D.ZW.m128d_f64[0];
          auVar147._8_8_ = local_238.Scale3D.ZW.m128d_f64[1] * 0.0;
          auVar128._8_4_ = SUB84(dVar137,0);
          auVar128._0_8_ = dVar131;
          uVar93 = (undefined4)((ulonglong)dVar137 >> 0x20);
          auVar128._12_4_ = uVar93;
          auVar89._8_4_ = SUB84(dVar137,0);
          auVar89._0_8_ = dVar131;
          auVar89._12_4_ = uVar93;
          auVar76 = blendpd(auVar89,auVar147,2);
          auVar129._0_8_ = auVar128._8_8_ * local_238.Rotation.XY.m128d_f64[0] - dVar63 * dVar131;
          auVar129._8_8_ = auVar147._0_8_ * dVar63 - auVar58._8_8_ * dVar137;
          auVar122._8_4_ = SUB84(auVar129._8_8_,0);
          auVar122._0_8_ = auVar129._0_8_;
          auVar122._12_4_ = (int)((ulonglong)auVar129._8_8_ >> 0x20);
          auVar90._0_8_ = auVar76._0_8_ * dVar110 - auVar65._0_8_ * auVar147._0_8_;
          auVar90._8_8_ = auVar76._8_8_ * dVar120 - auVar65._8_8_ * auVar147._8_8_;
          auVar76 = blendpd(auVar129,auVar90,2);
          dVar134 = auVar122._8_8_ + auVar122._8_8_;
          dVar62 = auVar90._0_8_ + auVar90._0_8_;
          auVar130._0_8_ = auVar76._0_8_ + auVar76._0_8_;
          auVar130._8_8_ = auVar76._8_8_ + auVar76._8_8_;
          uVar93 = SUB84(dVar62,0);
          auVar107._8_4_ = uVar93;
          auVar107._0_8_ = dVar134;
          uVar109 = (undefined4)((ulonglong)dVar62 >> 0x20);
          auVar107._12_4_ = uVar109;
          auVar59._8_4_ = uVar93;
          auVar59._0_8_ = dVar134;
          auVar59._12_4_ = uVar109;
          auVar91._8_4_ = uVar93;
          auVar91._0_8_ = dVar134;
          auVar91._12_4_ = uVar109;
          auVar76 = blendpd(auVar91,auVar130,2);
          auVar108._0_8_ = auVar107._8_8_ * local_238.Rotation.XY.m128d_f64[0] - dVar134 * dVar63;
          auVar108._8_8_ = auVar130._0_8_ * dVar63 - auVar59._8_8_ * dVar110;
          auVar60._8_4_ = SUB84(auVar130._8_8_,0);
          auVar60._0_8_ = auVar130._0_8_;
          auVar60._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
          auVar92._0_8_ = auVar76._0_8_ * dVar110 - auVar130._0_8_ * auVar65._0_8_;
          auVar92._8_8_ = auVar76._8_8_ * dVar120 - auVar60._8_8_ * auVar65._8_8_;
          auVar61._8_4_ = SUB84(auVar108._8_8_,0);
          auVar61._0_8_ = auVar108._0_8_;
          auVar61._12_4_ = (int)((ulonglong)auVar108._8_8_ >> 0x20);
          auVar76 = blendpd(auVar108,auVar92,2);
          local_2b0 = dVar134 * dVar120 + dVar131 + auVar61._8_8_ +
                      local_238.Translation.XY.m128d_f64[0];
          dStack_2a8 = dVar62 * dVar120 + dVar137 + auVar92._0_8_ +
                       local_238.Translation.XY.m128d_f64[1];
          local_2a0 = auVar130._0_8_ * dVar120 + auVar147._0_8_ + auVar76._0_8_ +
                      local_238.Translation.ZW.m128d_f64[0];
          dVar62 = local_2b0 * PaperAxisY.field0_0x0._s_0.X;
          dVar63 = dStack_2a8 * PaperAxisY.field0_0x0._s_0.Y;
          dVar134 = local_2a0 * PaperAxisY.field0_0x0._s_0.Z;
          *(double *)FVar24 =
               (double)(float)(dStack_2a8 * PaperAxisX.field0_0x0._s_0.Y +
                               local_2b0 * PaperAxisX.field0_0x0._s_0.X +
                              local_2a0 * PaperAxisX.field0_0x0._s_0.Z);
          *(double *)((longlong)FVar24 + 8) = (double)(float)(dVar62 + dVar63 + dVar134);
          FVar24 = (ForElementType<UE::Math::TVector4<double>_>)((longlong)FVar24 + 0x20);
        }
      }
      puVar29 = puVar29 + 3;
      uVar22 = (ulonglong)local_498;
      pFVar25 = local_480;
      fVar132 = __real_3f000000;
      fVar138 = __real_3f800000;
      fVar119 = __real_437f0000;
      dVar134 = local_490;
      dVar62 = dStack_488;
      uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    }
    pFVar25 = pFVar25 + 0x20;
    uVar22 = (ulonglong)local_494;
  } while( true );
}

// StaticRegisterNativesUPaperTerrainComponent @ 14ad0e0c0

void __cdecl UPaperTerrainComponent::StaticRegisterNativesUPaperTerrainComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPaperTerrainComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetTerrainColor @ 14ad139d0

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
UPaperTerrainComponent::execSetTerrainColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res10 [16];
  undefined4 local_res20;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_98;
  fStack_84 = local_94;
  fStack_80 = local_90;
  fStack_7c = local_8c;
  bVar8 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  fVar7 = __real_437f0000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  if ((((bVar8) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_98 != *(float *)&param_1[0x22].field_0x18 ||
       (local_94 != *(float *)&param_1[0x22].field_0x1c)) ||
      ((local_90 != *(float *)&param_1[0x22].field_0x20 ||
       (local_8c != *(float *)&param_1[0x22].field_0x24)))))) {
    fVar13 = fStack_80;
    if (fStack_80 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar16 = fStack_7c;
    if (fStack_7c <= 0.0) {
      fVar16 = 0.0;
    }
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    *(float *)&param_1[0x22].field_0x18 = local_88;
    *(float *)&param_1[0x22].field_0x1c = fStack_84;
    *(float *)&param_1[0x22].field_0x20 = fStack_80;
    *(float *)&param_1[0x22].field_0x24 = fStack_7c;
    iVar1 = *(int *)&param_1[0x23].field_0x20;
    plVar10 = *(longlong **)&param_1[0x23].field_0x18;
    if (fVar5 <= fVar16) {
      fVar16 = fVar5;
    }
    plVar12 = plVar10 + (longlong)iVar1 * 4;
    fVar14 = fStack_84;
    if (fStack_84 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar5 <= fVar14) {
      fVar14 = fVar5;
    }
    fVar15 = local_88;
    if (local_88 <= 0.0) {
      fVar15 = 0.0;
    }
    if (fVar5 <= fVar15) {
      fVar15 = fVar5;
    }
    uVar3 = CONCAT13((char)(int)(fVar16 * fVar7 + fVar6),
                     CONCAT12((char)(int)(fVar15 * fVar7 + fVar6),
                              CONCAT11((char)(int)(fVar14 * fVar7 + fVar6),
                                       (char)(int)(fVar13 * fVar7 + fVar6))));
    local_res20 = uVar3;
    while( true ) {
      if (*(int *)&param_1[0x23].field_0x20 != iVar1) {
        `TCheckedPointerIterator<FPaperTerrainSpriteGeometry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (plVar10 == plVar12) break;
      lVar4 = plVar10[1];
      lVar11 = *plVar10;
      lVar9 = (longlong)(int)lVar4 * 0x140 + lVar11;
      while( true ) {
        if ((int)plVar10[1] != (int)lVar4) {
          `TCheckedPointerIterator<FSpriteDrawCallRecord,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (lVar11 == lVar9) break;
        *(undefined4 *)(lVar11 + 0x50) = uVar3;
        lVar11 = lVar11 + 0x140;
      }
      plVar10 = plVar10 + 4;
    }
    UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)param_1);
  }
  return;
}

