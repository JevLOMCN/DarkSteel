// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 31

// FXRTrackingSystemBase @ 14cf7e040

FXRTrackingSystemBase * __thiscall
FXRTrackingSystemBase::FXRTrackingSystemBase(FXRTrackingSystemBase *this,IARSystemSupport *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  FXRTrackingSystemBase *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FARSupportInterface *pFVar12;
  FARSupportInterface *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  (this->XRCamera).Object = (FDefaultXRCamera *)0x0;
  (this->XRCamera).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined ***)this = &___7FXRTrackingSystemBase__6B_;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0] = (double)fVar6;
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar5;
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CalibratedOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CalibratedOffset).Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->CalibratedOffset).Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->CalibratedOffset).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CalibratedOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CalibratedOffset).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->CalibratedOffset).Translation.ZW.m128d_f64[0] = (double)fVar6;
  (this->CalibratedOffset).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CalibratedOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CalibratedOffset).Scale3D.XY.m128d_f64[1] = (double)fVar5;
  (this->CalibratedOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  (this->CalibratedOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  this->LoadingScreen = (IXRLoadingScreen *)0x0;
  (this->ARCompositionComponent).Object = (FARSupportInterface *)0x0;
  (this->ARCompositionComponent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar9 = ::operator_new(0xf0);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar12 = (FARSupportInterface *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFARSupportInterface___00_SharedPointerInternals__6B_;
    FARSupportInterface::FARSupportInterface
              ((FARSupportInterface *)(pTVar9 + 1),param_1,(IXRTrackingSystem *)this);
    pFVar12 = (FARSupportInterface *)(pTVar9 + 1);
    pTVar11 = pTVar9;
    if (pFVar12 == (FARSupportInterface *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FXRTrackingSystemBase *)(*pcVar4)();
        return pFVar10;
      }
      goto LAB_14cf7e20b;
    }
  }
  if (((*(longlong *)&pFVar12->field_0x10 == 0) || (*(longlong *)&pFVar12->field_0x18 == 0)) ||
     (*(int *)(*(longlong *)&pFVar12->field_0x18 + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FARSupportInterface **)&pFVar12->field_0x10 = pFVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar12->field_0x18) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar12->field_0x18;
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
      *(TReferenceControllerBase<1> **)&pFVar12->field_0x18 = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14cf7e20b:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pFVar12;
  local_10.ReferenceController = pTVar11;
  if (&this->ARCompositionComponent != (TSharedPtr<FARSupportInterface,1> *)&local_18) {
    (this->ARCompositionComponent).Object = pFVar12;
    local_18 = (FARSupportInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ARCompositionComponent).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return this;
}

// ~FXRTrackingSystemBase @ 14cf7ef00

void __thiscall FXRTrackingSystemBase::~FXRTrackingSystemBase(FXRTrackingSystemBase *this)

{
  IXRLoadingScreen *pIVar1;
  TSharedPtr<FARSupportInterface,1> *pTVar2;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  *(undefined ***)this = &___7FXRTrackingSystemBase__6B_;
  pTVar2 = &this->ARCompositionComponent;
  if (pTVar2->Object != (FARSupportInterface *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FARSupportInterface,1> *)&local_18) {
      pTVar2->Object = (FARSupportInterface *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ARCompositionComponent).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  if (this->LoadingScreen != (IXRLoadingScreen *)0x0) {
    (**(code **)((longlong)*this->LoadingScreen + 0x20))();
    pIVar1 = this->LoadingScreen;
    if (pIVar1 != (IXRLoadingScreen *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->LoadingScreen = (IXRLoadingScreen *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ARCompositionComponent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XRCamera).SharedReferenceCount.ReferenceController);
  return;
}

// CalibrateExternalTrackingSource @ 14cf841d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FXRTrackingSystemBase::CalibrateExternalTrackingSource
          (FXRTrackingSystemBase *this,TTransform<double> *param_1)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  FString local_1e0;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  undefined1 local_d8 [96];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_218;
  (**(code **)(*(longlong *)this + 0x58))(this,0,&local_1b8,&local_1f8);
  local_138.Rotation.ZW.m128d_f64[0] = local_1a8;
  local_138.Rotation.ZW.m128d_f64[1] = dStack_1a0;
  local_138.Translation.ZW.m128d_f64[0] = local_1e8;
  local_138.Translation.ZW.m128d_f64[1] = 0.0;
  local_138.Rotation.XY.m128d_f64[0] = local_1b8;
  local_138.Rotation.XY.m128d_f64[1] = dStack_1b0;
  local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_138.Translation.XY.m128d_f64[0]._0_4_ = local_1f8;
  local_138.Translation.XY.m128d_f64[0]._4_4_ = uStack_1f4;
  local_138.Translation.XY.m128d_f64[1]._0_4_ = uStack_1f0;
  local_138.Translation.XY.m128d_f64[1]._4_4_ = uStack_1ec;
  local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  pTVar2 = (TTransform<double> *)(**(code **)(*(longlong *)this + 0x90))(this,local_d8);
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_198,&local_138,pTVar2);
  pTVar2 = UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_78,&local_198);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (this->CalibratedOffset).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (this->CalibratedOffset).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (this->CalibratedOffset).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (this->CalibratedOffset).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (this->CalibratedOffset).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (this->CalibratedOffset).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (this->CalibratedOffset).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (this->CalibratedOffset).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (this->CalibratedOffset).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (this->CalibratedOffset).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (this->CalibratedOffset).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (this->CalibratedOffset).Scale3D.ZW.m128d_f64[1] = dVar1;
  if (4 < (byte)LogHMD._0_1_) {
    local_1d0._s_0.X = (this->CalibratedOffset).Translation.XY.m128d_f64[0];
    local_1d0._s_0.Y = (this->CalibratedOffset).Translation.XY.m128d_f64[1];
    local_1d0._s_0.Z = (this->CalibratedOffset).Translation.ZW.m128d_f64[0];
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1d0._s_0,&local_1e0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeTrackingToWorldTransform @ 14cf84e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FXRTrackingSystemBase::ComputeTrackingToWorldTransform
          (FXRTrackingSystemBase *this,TTransform<double> *__return_storage_ptr__,
          FWorldContext *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  UWorld *pUVar7;
  FDefaultXRCamera *pFVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  __m128d _Var17;
  __m128d _Var18;
  int iVar19;
  char cVar20;
  ULocalPlayer *this_00;
  APlayerController *pAVar21;
  AActor *this_01;
  IXRTrackingSystem *pIVar22;
  TQuat<double> *pTVar23;
  TRotator<double> *pTVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_res10 [8];
  TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> local_178;
  TRotator<double> local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_d8 [24];
  TRotator<double> local_c0;
  TQuat<double> local_a8;
  TQuat<double> local_88 [3];
  
  _Var17.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  pUVar7 = (param_1->ThisCurrentWorld).field0_0x0.DebugPtr;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var18 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var17.m128d_f64;
  _Var17 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var18.m128d_f64;
  _Var18 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var17.m128d_f64;
  _Var17 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var18.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var17.m128d_f64;
  if (pUVar7 == (UWorld *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = UEngine::GetFirstGamePlayer(GEngine,pUVar7);
  if (this_00 == (ULocalPlayer *)0x0) {
    return __return_storage_ptr__;
  }
  pAVar21 = UPlayer::GetPlayerController((UPlayer *)this_00,pUVar7);
  if (pAVar21 == (APlayerController *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (AActor *)(**(code **)(pAVar21->_padding_ + 0x7e0))(pAVar21);
  pFVar8 = (this->XRCamera).Object;
  if (pFVar8 == (FDefaultXRCamera *)0x0) {
    if (this_01 == (AActor *)0x0) goto LAB_14cf85013;
    cVar20 = (**(code **)(this_01->_padding_ + 0x6e0))(this_01,0);
  }
  else {
    cVar20 = (**(code **)(*(longlong *)pFVar8 + 0x18))();
  }
  if (cVar20 != '\0') {
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>(this_01,&local_178,false);
    iVar19 = local_178.ArrayNum;
    uVar25 = (ulonglong)local_178.ArrayNum;
    pFVar1 = local_178.AllocatorInstance.Data + uVar25 * 8;
    FVar26.Data = local_178.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar19) {
        `TCheckedPointerIterator<UCameraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar25 = local_178._8_8_ & 0xffffffff;
      }
      if (FVar26.Data == pFVar1) goto LAB_14cf84ffb;
      lVar9 = *(longlong *)FVar26.Data;
      if ((*(byte *)(lVar9 + 0x9a) & 0x10) != 0) break;
      FVar26.Data = FVar26.Data + 8;
    }
    lVar10 = *(longlong *)(lVar9 + 0xd0);
    if (lVar10 != 0) {
      dVar11 = *(double *)(lVar10 + 0x1f8);
      dVar12 = *(double *)(lVar10 + 0x200);
      dVar13 = *(double *)(lVar10 + 0x208);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar10 + 0x1f0);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
      dVar11 = *(double *)(lVar10 + 0x210);
      dVar14 = *(double *)(lVar10 + 0x218);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar12;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
      dVar12 = *(double *)(lVar10 + 0x220);
      dVar13 = *(double *)(lVar10 + 0x228);
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar11;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar14;
      dVar11 = *(double *)(lVar10 + 0x230);
      dVar14 = *(double *)(lVar10 + 0x238);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar12;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
      dVar12 = *(double *)(lVar10 + 0x240);
      dVar13 = *(double *)(lVar10 + 0x248);
      bVar6 = *(byte *)(lVar9 + 0x1a8);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar11;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar14;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar12;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar13;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if ((bVar6 & 4) != 0) {
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)uVar15;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)uVar16;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      }
      dVar13 = UE::Math::TQuat<double>::Identity.W;
      dVar12 = UE::Math::TQuat<double>::Identity.Z;
      dVar11 = UE::Math::TQuat<double>::Identity.Y;
      if ((bVar6 & 8) != 0) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar12;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
      }
      uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      if ((bVar6 & 0x10) != 0) {
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)uVar15;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)uVar16;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
      }
    }
LAB_14cf84ffb:
    if (local_178.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_178.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
LAB_14cf85013:
  (**(code **)(pAVar21->_padding_ + 0x840))(pAVar21,&local_150,&local_168);
  if ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0) {
    pIVar22 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    cVar20 = (**(code **)((longlong)*pIVar22 + 0x58))(pIVar22,0,&local_138,local_d8);
    if (cVar20 != '\0') {
      pTVar23 = UE::Math::TRotator<double>::Quaternion(&local_168,&local_a8);
      local_128 = local_128 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dStack_120 = dStack_120 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar2 = pTVar23->X;
      uVar4 = pTVar23->Y;
      uVar3 = pTVar23->Z;
      uVar5 = pTVar23->W;
      local_138 = local_138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dStack_130 = dStack_130 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar27._8_4_ = (int)uVar5;
      auVar27._0_8_ = uVar5;
      auVar27._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
      auVar29._8_4_ = (int)uVar4;
      auVar29._0_8_ = uVar4;
      auVar29._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
      auVar28._8_4_ = (int)uVar3;
      auVar28._0_8_ = uVar3;
      auVar28._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
      dVar11 = (double)uVar2 * local_128 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar27._8_8_ * dStack_130 +
               auVar29._8_8_ * dStack_120 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar28._8_8_ * local_138 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar12 = (double)uVar2 * local_138 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               (double)uVar5 * dStack_120 +
               (double)uVar4 * dStack_130 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               (double)uVar3 * local_128 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_118._8_4_ = SUB84(dVar11,0);
      local_118._0_8_ =
           (double)uVar2 * dStack_120 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           (double)uVar5 * local_138 +
           (double)uVar4 * local_128 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)uVar3 * dStack_130 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_118._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_108._8_4_ = SUB84(dVar12,0);
      local_108._0_8_ =
           (double)uVar2 * dStack_130 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           (double)uVar5 * local_128 +
           (double)uVar4 * local_138 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)uVar3 * dStack_120 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_108._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      pTVar24 = UE::Math::TRotator<double>::TRotator<double>(&local_c0,(TQuat<double> *)local_118);
      local_168.Pitch = pTVar24->Pitch;
      local_168.Yaw = pTVar24->Yaw;
      local_168.Roll = pTVar24->Roll;
    }
  }
  pTVar23 = UE::Math::TRotator<double>::Quaternion(&local_168,local_88);
  dVar11 = pTVar23->Z;
  dVar12 = pTVar23->W;
  dVar13 = pTVar23->Y;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar23->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar11;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_150;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dStack_148;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_140;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar11 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar11;
  dVar11 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar11;
  return __return_storage_ptr__;
}

// CountTrackedDevices @ 14cf85b20

uint __thiscall
FXRTrackingSystemBase::CountTrackedDevices(FXRTrackingSystemBase *this,EXRTrackedDeviceType param_1)

{
  char cVar1;
  uint uVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)(*(longlong *)this + 0x38))(this,&local_18,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = (uint)local_10;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}

// CreateLoadingScreen @ 14cf869d0

IXRLoadingScreen * __thiscall
FXRTrackingSystemBase::CreateLoadingScreen(FXRTrackingSystemBase *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  IXRLoadingScreen *pIVar11;
  longlong lVar12;
  LARGE_INTEGER local_res10;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  bVar2 = false;
  bVar8 = false;
  plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0x120))(this,local_38);
  if (*plVar10 == 0) {
LAB_14cf86abe:
    bVar3 = false;
    bVar7 = false;
    if (!bVar8) goto LAB_14cf86ad0;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0x120))(this,local_48);
    if (*plVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        pIVar11 = (IXRLoadingScreen *)(*pcVar1)();
        return pIVar11;
      }
    }
    bVar2 = true;
    bVar8 = false;
    lVar12 = (**(code **)(*(longlong *)*plVar10 + 0x88))();
    if (lVar12 == 0) goto LAB_14cf86abe;
    plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0x120))(this,local_58);
    if (*plVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        pIVar11 = (IXRLoadingScreen *)(*pcVar1)();
        return pIVar11;
      }
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x88))();
    bVar2 = true;
    bVar8 = true;
    cVar9 = (**(code **)(*plVar10 + 0x28))(plVar10);
    if (cVar9 == '\0') goto LAB_14cf86abe;
    bVar7 = true;
  }
  bVar3 = bVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
LAB_14cf86ad0:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (bVar3) {
    pIVar11 = ::operator_new(0x70);
    if (pIVar11 == (IXRLoadingScreen *)0x0) {
      pIVar11 = (IXRLoadingScreen *)0x0;
    }
    else {
      *pIVar11 = (IXRLoadingScreen)&___7IXRLoadingScreen__6B_;
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)(pIVar11 + 1),NewObject);
      *pIVar11 = (IXRLoadingScreen)
                 &TXRLoadingScreenBase<FSplashData>::_vftable__for__IXRLoadingScreen__;
      pIVar11[1] = (IXRLoadingScreen)
                   &TXRLoadingScreenBase<FSplashData>::_vftable__for__FTickableGameObject__;
      pIVar11[2] = (IXRLoadingScreen)0x0;
      pIVar11[3] = (IXRLoadingScreen)0x0;
      pIVar11[4] = (IXRLoadingScreen)this;
      uVar6 = UE::Math::TQuat<double>::Identity.Y._4_4_;
      uVar5 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar4 = UE::Math::TQuat<double>::Identity.X._4_4_;
      *(undefined4 *)(pIVar11 + 6) = UE::Math::TQuat<double>::Identity.X._0_4_;
      *(undefined4 *)&pIVar11[6].field_0x4 = uVar4;
      *(undefined4 *)(pIVar11 + 7) = uVar5;
      *(undefined4 *)&pIVar11[7].field_0x4 = uVar6;
      uVar6 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar5 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar4 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      *(undefined4 *)(pIVar11 + 8) = UE::Math::TQuat<double>::Identity.Z._0_4_;
      *(undefined4 *)&pIVar11[8].field_0x4 = uVar4;
      *(undefined4 *)(pIVar11 + 9) = uVar5;
      *(undefined4 *)&pIVar11[9].field_0x4 = uVar6;
      *(undefined1 *)(pIVar11 + 10) = 0;
      *(undefined4 *)&pIVar11[10].field_0x4 = 0x3c360b61;
      QueryPerformanceCounter(&local_res10);
      pIVar11[0xb] = (IXRLoadingScreen)
                     ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000);
      if (pIVar11[4] == (IXRLoadingScreen)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrackingSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\XRLoadingScreenBase.h"
                           ,0x1a,L"");
        if (bVar8) {
          pcVar1 = (code *)swi(3);
          pIVar11 = (IXRLoadingScreen *)(*pcVar1)();
          return pIVar11;
        }
      }
      *(undefined2 *)(pIVar11 + 0xd) = 0;
      pIVar11[0xc] = (IXRLoadingScreen)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)(pIVar11 + 0xc));
      *pIVar11 = (IXRLoadingScreen)&FDefaultXRLoadingScreen::_vftable__for__IXRLoadingScreen__;
      pIVar11[1] = (IXRLoadingScreen)&FDefaultXRLoadingScreen::_vftable__for__FTickableGameObject__;
      pIVar11[0xc] = (IXRLoadingScreen)&___7FDefaultXRLoadingScreen__6B_;
      plVar10 = (longlong *)(**(code **)(*(longlong *)pIVar11[4] + 0x120))(pIVar11[4],local_28);
      lVar12 = *plVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      if (lVar12 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrackingSystem->GetStereoRenderingDevice().IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRLoadingScreen.cpp"
                           ,0xe,L"");
        if (bVar8) {
          pcVar1 = (code *)swi(3);
          pIVar11 = (IXRLoadingScreen *)(*pcVar1)();
          return pIVar11;
        }
      }
    }
    return pIVar11;
  }
  return (IXRLoadingScreen *)0x0;
}

// DoesSupportPositionalTracking @ 14cf87f10

bool __thiscall FXRTrackingSystemBase::DoesSupportPositionalTracking(FXRTrackingSystemBase *this)

{
  return false;
}

// GetARCompositionComponent @ 14cf8dab0

TSharedPtr<FARSupportInterface,1> * __thiscall
FXRTrackingSystemBase::GetARCompositionComponent
          (FXRTrackingSystemBase *this,TSharedPtr<FARSupportInterface,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ARCompositionComponent).Object;
  pTVar1 = (this->ARCompositionComponent).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetARCompositionComponent @ 14cf8dae0

TSharedPtr<FARSupportInterface_const_,1> * __thiscall
FXRTrackingSystemBase::GetARCompositionComponent
          (FXRTrackingSystemBase *this,
          TSharedPtr<FARSupportInterface_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ARCompositionComponent).Object;
  pTVar1 = (this->ARCompositionComponent).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCurrentInteractionProfile @ 14cf8ea70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FXRTrackingSystemBase::GetCurrentInteractionProfile
          (FXRTrackingSystemBase *this,EControllerHand param_1,FString *param_2)

{
  if (2 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
  return false;
}

// GetFloorToEyeTrackingTransform @ 14cf8f640

bool __thiscall
FXRTrackingSystemBase::GetFloorToEyeTrackingTransform
          (FXRTrackingSystemBase *this,TTransform<double> *param_1)

{
  *&(param_1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_1->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_1->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_1->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return false;
}

// GetHandTrackingState @ 14cf8f970

void __thiscall
FXRTrackingSystemBase::GetHandTrackingState
          (FXRTrackingSystemBase *this,UObject *param_1,EXRSpaceType param_2,EControllerHand param_3
          ,FXRHandTrackingState *param_4)

{
  param_4->bValid = false;
  param_4->XRSpaceType = param_2;
  param_4->Hand = param_3;
  return;
}

// GetLoadingScreen @ 14cf8fc50

IXRLoadingScreen * __thiscall FXRTrackingSystemBase::GetLoadingScreen(FXRTrackingSystemBase *this)

{
  IXRLoadingScreen *pIVar1;
  
  pIVar1 = this->LoadingScreen;
  if (pIVar1 == (IXRLoadingScreen *)0x0) {
    pIVar1 = (IXRLoadingScreen *)(**(code **)(*(longlong *)this + 0x210))();
    this->LoadingScreen = pIVar1;
  }
  return pIVar1;
}

// GetMotionControllerState @ 14cf8fdc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FXRTrackingSystemBase::GetMotionControllerState
          (FXRTrackingSystemBase *this,UObject *param_1,EXRSpaceType param_2,EControllerHand param_3
          ,EXRControllerPoseType param_4,FXRMotionControllerState *param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FXRMotionControllerState *pFVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  EControllerHand EVar14;
  uint uVar15;
  FName *pFVar16;
  FGuid *pFVar17;
  UClass *pUVar18;
  UMotionControllerComponent *pUVar19;
  uint uVar20;
  UMotionControllerComponent *pUVar21;
  UMotionControllerComponent *pUVar22;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_98;
  FGuid local_88 [7];
  
  pFVar10 = param_5;
  param_5->bValid = false;
  pFVar16 = (FName *)(*(code *)**(undefined8 **)this)(this,&param_5);
  pFVar10->DeviceName = *pFVar16;
  pFVar17 = FApp::GetInstanceId(local_88);
  pUVar21 = (UMotionControllerComponent *)0x0;
  uVar15 = pFVar17->A;
  uVar20 = pFVar17->B;
  uVar11 = pFVar17->C;
  uVar12 = pFVar17->D;
  pFVar10->XRSpaceType = param_2;
  (pFVar10->ApplicationInstanceID).A = uVar15;
  (pFVar10->ApplicationInstanceID).B = uVar20;
  (pFVar10->ApplicationInstanceID).C = uVar11;
  (pFVar10->ApplicationInstanceID).D = uVar12;
  pFVar10->Hand = param_3;
  pFVar10->XRControllerPoseType = param_4;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pUVar18 = Z_Construct_UClass_UMotionControllerComponent_NoRegister();
  GetObjectsOfClass(pUVar18,&local_98,true,RF_ClassDefaultObject,Borrowed);
  pUVar19 = pUVar21;
  pUVar22 = pUVar21;
  if (0 < local_98.ArrayNum) {
    do {
      uVar20 = (uint)pUVar19;
      uVar15 = 0;
      if ((int)uVar20 < local_98.ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar19 = *(UMotionControllerComponent **)
                 (local_98.AllocatorInstance.Data + (longlong)&pUVar22->field_0x0);
      if (pUVar19 == (UMotionControllerComponent *)0x0) {
LAB_14cf8feea:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("MotionController",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRTrackingSystemBase.cpp"
                            ,0x92,L"");
        pUVar19 = pUVar21;
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pUVar18 = Z_Construct_UClass_UMotionControllerComponent_NoRegister();
        iVar2 = (int)pUVar18->_padding_;
        if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar18->_padding_)) goto LAB_14cf8feea;
      }
      lVar3 = *(longlong *)&pUVar19->field_0xa8;
      if (((lVar3 != 0) &&
          (EVar14 = UMotionControllerComponent::GetTrackingSource(pUVar19), EVar14 == param_3)) &&
         (*(char *)(lVar3 + 0x168) == '\x03')) {
        pFVar10->bValid = true;
        pFVar10->TrackingStatus = pUVar19->CurrentTrackingStatus;
        dVar5 = *(double *)&pUVar19->field_0x1f0;
        dVar6 = *(double *)&pUVar19->field_0x1f8;
        dVar7 = *(double *)&pUVar19->field_0x218;
        dVar8 = *(double *)&pUVar19->field_0x200;
        dVar9 = *(double *)&pUVar19->field_0x208;
        dVar1 = *(double *)&pUVar19->field_0x220;
        (pFVar10->ControllerLocation).field0_0x0._s_0.X = *(double *)&pUVar19->field_0x210;
        (pFVar10->ControllerLocation).field0_0x0._s_0.Y = dVar7;
        (pFVar10->ControllerRotation).X = dVar5;
        (pFVar10->ControllerRotation).Y = dVar6;
        (pFVar10->ControllerLocation).field0_0x0._s_0.Z = dVar1;
        (pFVar10->ControllerRotation).Z = dVar8;
        (pFVar10->ControllerRotation).W = dVar9;
        goto LAB_14cf8ff6f;
      }
      pUVar19 = (UMotionControllerComponent *)(ulonglong)(uVar20 + 1);
      pUVar22 = (UMotionControllerComponent *)&pUVar22->field_0x8;
    } while ((int)(uVar20 + 1) < local_98.ArrayNum);
  }
  if ((pFVar10->bValid == false) && (2 < (byte)LogHMD._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
LAB_14cf8ff6f:
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// GetRelativeEyePose @ 14cf90ae0

bool __thiscall
FXRTrackingSystemBase::GetRelativeEyePose
          (FXRTrackingSystemBase *this,int param_1,int param_2,TQuat<double> *param_3,
          TVector<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  param_3->X = UE::Math::TQuat<double>::Identity.X;
  param_3->Y = dVar2;
  uVar3 = UE::Math::TQuat<double>::Identity.W._4_4_;
  uVar6 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar5 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  *(undefined4 *)&param_3->Z = UE::Math::TQuat<double>::Identity.Z._0_4_;
  *(undefined4 *)((longlong)&param_3->Z + 4) = uVar5;
  *(undefined4 *)&param_3->W = uVar6;
  *(undefined4 *)((longlong)&param_3->W + 4) = uVar3;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1 != 0) {
    return false;
  }
  if (param_2 == 0) {
    uVar5 = (undefined4)__real_bfa0624de0000000;
    uVar6 = (undefined4)((ulonglong)__real_bfa0624de0000000 >> 0x20);
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    uVar5 = (undefined4)__real_3fa0624de0000000;
    uVar6 = (undefined4)((ulonglong)__real_3fa0624de0000000 >> 0x20);
  }
  fVar4 = (float)(**(code **)(*(longlong *)this + 0x98))();
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = (double)fVar4 * (double)CONCAT44(uVar6,uVar5);
  (param_4->field0_0x0)._s_0.Z = 0.0;
  return true;
}

// GetTrackedDevicePropertySerialNumber @ 14cf91500

FString * __thiscall
FXRTrackingSystemBase::GetTrackedDevicePropertySerialNumber
          (FXRTrackingSystemBase *this,FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"NoSerial");
  return __return_storage_ptr__;
}

// GetTrackedDeviceType @ 14cf91530

EXRTrackedDeviceType __thiscall
FXRTrackingSystemBase::GetTrackedDeviceType(FXRTrackingSystemBase *this,int param_1)

{
  return Invalid;
}

// GetTrackingOrigin @ 14cf91540

Type __thiscall FXRTrackingSystemBase::GetTrackingOrigin(FXRTrackingSystemBase *this)

{
  return Local;
}

// GetTrackingSensorProperties @ 14cf918e0

bool __thiscall
FXRTrackingSystemBase::GetTrackingSensorProperties
          (FXRTrackingSystemBase *this,int param_1,TQuat<double> *param_2,TVector<double> *param_3,
          FXRSensorProperties *param_4)

{
  return false;
}

// GetTrackingToWorldTransform @ 14cf918f0

TTransform<double> * __thiscall
FXRTrackingSystemBase::GetTrackingToWorldTransform
          (FXRTrackingSystemBase *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1];
  dVar2 = (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0];
  dVar4 = (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0];
  dVar3 = (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetVersionString @ 14cf91af0

FString * __thiscall
FXRTrackingSystemBase::GetVersionString(FXRTrackingSystemBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GenericHMD");
  return __return_storage_ptr__;
}

// GetXRCamera @ 14cf91cf0

TSharedPtr<IXRCamera,1> * __thiscall
FXRTrackingSystemBase::GetXRCamera
          (FXRTrackingSystemBase *this,TSharedPtr<IXRCamera,1> *__return_storage_ptr__,int param_1)

{
  TSharedPtr<FDefaultXRCamera,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<IXRCamera,1> *pTVar5;
  TSharedRef<FDefaultXRCamera,1> *pTVar6;
  FXRTrackingSystemBase *local_res8;
  int local_res18 [2];
  FDefaultXRCamera *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FDefaultXRCamera,1> local_18;
  
  local_res18[0] = param_1;
  if (param_1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeviceId == HMDDeviceId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRTrackingSystemBase.cpp"
                       ,0x40,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IXRCamera,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = &this->XRCamera;
  if ((this->XRCamera).Object == (FDefaultXRCamera *)0x0) {
    bVar4 = IsInGameThread();
    if (bVar4) {
      local_res8 = this;
      pTVar6 = FSceneViewExtensions::NewExtension<FDefaultXRCamera,FXRTrackingSystemBase_*,int_&>
                         (&local_18,&local_res8,local_res18);
      local_20.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
      local_28 = pTVar6->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FDefaultXRCamera,1> *)&local_28) {
        pTVar1->Object = local_28;
        local_28 = (FDefaultXRCamera *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XRCamera).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  __return_storage_ptr__->Object = (IXRCamera *)pTVar1->Object;
  pTVar2 = (this->XRCamera).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HasValidTrackingPosition @ 14cf924c0

bool __thiscall FXRTrackingSystemBase::HasValidTrackingPosition(FXRTrackingSystemBase *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cf924c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x18))();
  return (bool)uVar1;
}

// IsTracking @ 14cf933b0

bool __thiscall FXRTrackingSystemBase::IsTracking(FXRTrackingSystemBase *this,int param_1)

{
  undefined1 uVar1;
  undefined1 local_48 [32];
  undefined1 local_28 [40];
  
  uVar1 = (**(code **)(*(longlong *)this + 0x58))(this,param_1,local_28,local_48);
  return (bool)uVar1;
}

// OnInteractionProfileChanged @ 14cf937c0

void __thiscall FXRTrackingSystemBase::OnInteractionProfileChanged(FXRTrackingSystemBase *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FXRTrackingSystemDelegates::OnXRInteractionProfileChanged);
  return;
}

// OnPlayAreaChanged @ 14cf938b0

void __thiscall FXRTrackingSystemBase::OnPlayAreaChanged(FXRTrackingSystemBase *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FXRTrackingSystemDelegates::OnXRPlayAreaChanged);
  return;
}

// OnTrackingOriginChanged @ 14cf93cb0

void __thiscall FXRTrackingSystemBase::OnTrackingOriginChanged(FXRTrackingSystemBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FXRTrackingSystemDelegates::OnXRTrackingOriginChanged,(FWriteAccessScope *)&local_28);
  bVar3 = false;
  FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._28_4_ =
       FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._28_4_ + 1;
  uVar7 = FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._8_8_) == 0)
          || (plVar1 = *(longlong **)
                        (lVar8 + FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._8_8_),
             plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._28_4_ =
       FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FXRTrackingSystemDelegates::OnXRTrackingOriginChanged,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// RefreshTrackingToWorldTransform @ 14cf98290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FXRTrackingSystemBase::RefreshTrackingToWorldTransform
          (FXRTrackingSystemBase *this,TTransform<double> *__return_storage_ptr__,
          FWorldContext *param_1)

{
  UWorld *this_00;
  TReferenceControllerBase<1> *pTVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  bool bVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  AWorldSettings *pAVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  FXRTrackingSystemBase *pFVar26;
  longlong lVar27;
  FARSupportInterface *local_108;
  TReferenceControllerBase<1> *local_100;
  TTransform<double> local_f8 [2];
  
  pFVar26 = this;
  pTVar21 = ComputeTrackingToWorldTransform(this,local_f8,param_1);
  bVar19 = false;
  dVar9 = local_f8[0].Translation.ZW.m128d_f64[0] -
          (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0];
  dVar10 = local_f8[0].Translation.ZW.m128d_f64[1] -
           (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1];
  lVar27 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar10,0) & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar27;
  auVar4._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  uVar23 = movmskpd((int)pFVar26,auVar4);
  dVar9 = local_f8[0].Translation.XY.m128d_f64[0] -
          (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0];
  dVar10 = local_f8[0].Translation.XY.m128d_f64[1] -
           (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1];
  lVar27 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar10,0) & _UNK_15061cc88));
  auVar11._8_4_ = (int)lVar27;
  auVar11._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar11._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  iVar20 = movmskpd((int)pTVar21,auVar11);
  if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar9 = local_f8[0].Rotation.ZW.m128d_f64[0] -
            (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0];
    dVar10 = local_f8[0].Rotation.ZW.m128d_f64[1] -
             (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1];
    dVar14 = local_f8[0].Rotation.XY.m128d_f64[0] +
             (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0];
    dVar15 = local_f8[0].Rotation.XY.m128d_f64[1] +
             (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1];
    dVar16 = local_f8[0].Rotation.ZW.m128d_f64[0] +
             (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0];
    dVar17 = local_f8[0].Rotation.ZW.m128d_f64[1] +
             (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1];
    lVar27 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar27;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar24 = movmskpd(0,auVar5);
    dVar9 = local_f8[0].Rotation.XY.m128d_f64[0] -
            (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0];
    dVar10 = local_f8[0].Rotation.XY.m128d_f64[1] -
             (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1];
    lVar27 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar27;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar6._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar23 = movmskpd(iVar20,auVar6);
    uVar25 = iVar24 << 2 | uVar23;
    if (uVar25 != 0) {
      lVar27 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar27;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar25 = movmskpd(uVar25,auVar7);
      lVar27 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar15,0) & _UNK_15061cc88));
      auVar12._8_4_ = (int)lVar27;
      auVar12._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar12._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar12);
      if ((uVar25 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_14cf9841b;
    }
    dVar9 = local_f8[0].Scale3D.ZW.m128d_f64[0] -
            (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0];
    dVar10 = local_f8[0].Scale3D.ZW.m128d_f64[1] -
             (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1];
    lVar27 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar27;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar8._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar25 = movmskpd(0,auVar8);
    dVar9 = local_f8[0].Scale3D.XY.m128d_f64[0] -
            (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0];
    dVar10 = local_f8[0].Scale3D.XY.m128d_f64[1] -
             (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1];
    lVar27 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar13._8_4_ = (int)lVar27;
    auVar13._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar13._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar20 = movmskpd(uVar23,auVar13);
    if ((uVar25 & 0x3fffffff) == 0 && iVar20 == 0) goto LAB_14cf9843a;
  }
LAB_14cf9841b:
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0] = local_f8[0].Rotation.XY.m128d_f64[0];
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1] = local_f8[0].Rotation.XY.m128d_f64[1];
  bVar19 = true;
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0] = local_f8[0].Rotation.ZW.m128d_f64[0];
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1] = local_f8[0].Rotation.ZW.m128d_f64[1];
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0] =
       local_f8[0].Translation.XY.m128d_f64[0];
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1] =
       local_f8[0].Translation.XY.m128d_f64[1];
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0] =
       local_f8[0].Translation.ZW.m128d_f64[0];
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1] =
       local_f8[0].Translation.ZW.m128d_f64[1];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0] = local_f8[0].Scale3D.XY.m128d_f64[0];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1] = local_f8[0].Scale3D.XY.m128d_f64[1];
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0] = local_f8[0].Scale3D.ZW.m128d_f64[0];
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1] = local_f8[0].Scale3D.ZW.m128d_f64[1];
LAB_14cf9843a:
  this_00 = (param_1->ThisCurrentWorld).field0_0x0.DebugPtr;
  if ((((this_00 != (UWorld *)0x0) &&
       (pAVar22 = UWorld::GetWorldSettings(this_00,false,true), pAVar22 != (AWorldSettings *)0x0))
      && (fVar18 = pAVar22->WorldToMeters, pAVar22->WorldToMeters != CachedWorldToMetersScale)) ||
     (fVar18 = CachedWorldToMetersScale, bVar19)) {
    CachedWorldToMetersScale = fVar18;
    pTVar1 = (GEngine->XRSystem).SharedReferenceCount.ReferenceController;
    pIVar2 = (GEngine->XRSystem).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar2 == (IXRTrackingSystem *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar3 = (code *)swi(3);
      pTVar21 = (TTransform<double> *)(*pcVar3)();
      return pTVar21;
    }
    (**(code **)((longlong)*pIVar2 + 0x138))(pIVar2,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (local_108 != (FARSupportInterface *)0x0) {
      pTVar21 = FARSupportInterface::GetAlignmentTransform(local_108);
      FARSupportInterface::SetAlignmentTransform(local_108,pTVar21);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  }
  dVar9 = (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1];
  dVar10 = (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0];
  dVar14 = (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
  dVar9 = (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0];
  dVar15 = (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar14;
  dVar10 = (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0];
  dVar14 = (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar9;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar15;
  dVar9 = (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0];
  dVar15 = (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar14;
  dVar10 = (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0];
  dVar14 = (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar9;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar15;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar14;
  return __return_storage_ptr__;
}

// SetTrackingOrigin @ 14cf9b800

void __thiscall FXRTrackingSystemBase::SetTrackingOrigin(FXRTrackingSystemBase *this,Type param_1)

{
  return;
}

// UpdateExternalTrackingPosition @ 14cf9da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FXRTrackingSystemBase::UpdateExternalTrackingPosition
          (FXRTrackingSystemBase *this,TTransform<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  TTransform<double> *pTVar10;
  undefined1 (*pauVar11) [16];
  double *pdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [32];
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_308;
  (**(code **)(*(longlong *)this + 0x58))(this,0,&local_288,&local_2e8);
  local_1e8.Rotation.ZW.m128d_f64[0] = local_278;
  local_1e8.Rotation.ZW.m128d_f64[1] = dStack_270;
  local_1e8.Translation.ZW.m128d_f64[0] = local_2d8;
  local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1e8.Rotation.XY.m128d_f64[0] = local_288;
  local_1e8.Rotation.XY.m128d_f64[1] = dStack_280;
  local_1e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_1e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_1e8.Translation.XY.m128d_f64[0]._0_4_ = local_2e8;
  local_1e8.Translation.XY.m128d_f64[0]._4_4_ = uStack_2e4;
  local_1e8.Translation.XY.m128d_f64[1]._0_4_ = uStack_2e0;
  local_1e8.Translation.XY.m128d_f64[1]._4_4_ = uStack_2dc;
  local_1e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_1e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  pTVar10 = (TTransform<double> *)(**(code **)(*(longlong *)this + 0x90))(this,local_c8);
  local_248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_248.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_248.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_248.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_248.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_248.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_248.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_248,&local_1e8,pTVar10);
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_128,&local_248);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_128,&local_188,&this->CalibratedOffset);
  lVar1 = *(longlong *)this;
  dVar19 = local_188.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar24 = local_188.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = local_188.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = local_188.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
  pauVar11 = (undefined1 (*) [16])(**(code **)(lVar1 + 0xe8))(this,local_268);
  auVar25._8_4_ = SUB84(dVar3,0);
  auVar25._0_8_ = dVar2;
  auVar25._12_4_ = uVar34;
  dVar28 = auVar25._8_8_;
  dVar8 = *(double *)pauVar11[1];
  dVar9 = *(double *)(pauVar11[1] + 8);
  auVar30._8_4_ = SUB84(dVar3,0);
  auVar30._0_8_ = dVar28;
  auVar30._12_4_ = uVar34;
  auVar27 = *pauVar11;
  dVar29 = auVar27._0_8_;
  dVar31 = auVar27._8_8_;
  auVar20._8_4_ = SUB84(dVar24,0);
  auVar20._0_8_ = dVar24;
  auVar20._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar15._8_4_ = auVar27._0_4_;
  auVar15._0_8_ = dVar31;
  auVar15._12_4_ = auVar27._4_4_;
  dVar4 = dVar9 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar28 * dVar29 +
          dVar24 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar31 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar5 = dVar8 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar30._8_8_ * dVar31 +
          auVar20._8_8_ * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar15._8_8_ * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar5,0);
  auVar27._0_8_ = dVar4;
  auVar27._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar26._0_8_ = dVar28 * dVar8;
  auVar26._8_8_ = dVar3 * dVar9;
  dVar3 = dVar31 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          auVar26._0_8_ +
          dVar24 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar9 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar2 = dVar29 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          auVar26._8_8_ +
          dVar24 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar2,0);
  auVar21._0_8_ = dVar3;
  auVar21._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar19 = dVar3 * dVar3 + dVar4 * dVar4;
  dVar24 = auVar21._8_8_ * dVar2 + auVar27._8_8_ * dVar5;
  auVar16._8_4_ = SUB84(dVar24,0);
  auVar16._0_8_ = dVar19;
  auVar16._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar17._0_8_ = auVar16._8_8_ + dVar19;
  auVar17._8_8_ = dVar19 + dVar24;
  auVar27 = sqrtpd(auVar26,auVar17);
  uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= auVar17._0_8_);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar17._8_8_);
  uVar32 = (uint)(uVar13 >> 0x20);
  uVar33 = (uint)(uVar14 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  auVar22._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar22._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2a8._0_8_ = uVar13 & (ulonglong)(auVar30._0_8_ * dVar4);
  uVar7 = uVar14 & (ulonglong)(auVar30._8_8_ * dVar5);
  local_2a8._8_4_ = (undefined4)uVar7;
  local_2a8._12_4_ = (undefined4)(uVar7 >> 0x20);
  local_2a8 = local_2a8 | auVar22;
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  local_298._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  local_298._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  local_298._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_298._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar23._0_8_ = (ulonglong)(auVar27._0_8_ * dVar3) & uVar13;
  uVar14 = (ulonglong)(auVar27._8_8_ * dVar2) & uVar14;
  auVar23._8_4_ = (undefined4)uVar14;
  auVar23._12_4_ = (undefined4)(uVar14 >> 0x20);
  local_298 = local_298 | auVar23;
  (**(code **)(lVar1 + 0xe0))(this,local_2a8);
  lVar1 = *(longlong *)this;
  pdVar12 = (double *)(**(code **)(lVar1 + 0xf8))(this,local_268);
  local_2c0 = pdVar12[2] - local_188.Translation.ZW.m128d_f64[0];
  auVar6._4_8_ = local_188.Translation.ZW.m128d_f64[1];
  auVar6._0_4_ = local_188.Translation.XY.m128d_f64[0]._4_4_;
  auVar18._0_8_ = auVar6._0_8_ << 0x20;
  auVar18._8_4_ = local_188.Translation.XY.m128d_f64[1]._0_4_;
  auVar18._12_4_ = local_188.Translation.XY.m128d_f64[1]._4_4_;
  local_2d0 = *pdVar12 - local_188.Translation.XY.m128d_f64[0];
  local_2c8 = pdVar12[1] - auVar18._8_8_;
  (**(code **)(lVar1 + 0xf0))(this,&local_2d0);
  return;
}

// UpdateTrackingToWorldTransform @ 14cf9e180

void __thiscall
FXRTrackingSystemBase::UpdateTrackingToWorldTransform
          (FXRTrackingSystemBase *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->CachedTrackingToWorld).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->CachedTrackingToWorld).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0]
  ;
  (this->CachedTrackingToWorld).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0]
  ;
  (this->CachedTrackingToWorld).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->CachedTrackingToWorld).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->CachedTrackingToWorld).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

