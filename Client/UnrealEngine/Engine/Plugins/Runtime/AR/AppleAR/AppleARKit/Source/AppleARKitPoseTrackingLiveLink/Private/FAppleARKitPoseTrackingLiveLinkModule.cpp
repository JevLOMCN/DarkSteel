// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 4

// StartupModule @ 14cfe1840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAppleARKitPoseTrackingLiveLinkModule::StartupModule(FAppleARKitPoseTrackingLiveLinkModule *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  FSharedReferencer<1> FVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  int iVar12;
  FModuleManager *this_00;
  FName *pFVar13;
  IModuleInterface *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  FString *pFVar16;
  IModularFeatures *pIVar17;
  TQuat<double> *pTVar18;
  uint uVar19;
  TVector<double>_u_0 *this_01;
  wchar_t *pwVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  FAppleARKitPoseTrackingLiveLink *pFVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  FName local_260;
  FString local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TQuat<double> local_218;
  TQuat<double> local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_288;
  this_00 = FModuleManager::Get();
  pFVar13 = ::FName::FName(&local_260,"AppleARKit");
  pIVar14 = FModuleManager::LoadModule(this_00,*pFVar13,None);
  if (pIVar14 == (IModuleInterface *)0x0) {
    local_268[0] = 0;
    `FAppleARKitPoseTrackingLiveLinkModule::StartupModule'::__l2::<lambda_1>::operator()(local_268);
  }
  pTVar15 = ::operator_new(0x50);
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pFVar24 = (FAppleARKitPoseTrackingLiveLink *)&DAT_00000010;
    pTVar15 = pTVar21;
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleARKitPoseTrackingLiveLink___00_SharedPointerInternals__6B_
    ;
    pTVar15[1]._padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLink__6B_;
    pTVar15[2]._padding_ = 0;
    pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[3]._padding_ = 0;
    pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[4]._padding_ = 0;
    pFVar16 = FGenericPlatformMisc::GetDeviceId(&local_258);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&pTVar15[4].SharedReferenceCount,pwVar20);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    pFVar24 = (FAppleARKitPoseTrackingLiveLink *)(pTVar15 + 1);
    if (pFVar24 == (FAppleARKitPoseTrackingLiveLink *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14cfe19dc;
    }
  }
  if (((pFVar24->_padding_ == 0) || (pFVar24->_padding_ == 0)) ||
     (*(int *)(pFVar24->_padding_ + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar24->_padding_ = (longlong)pFVar24;
    if (pTVar15 != (TReferenceControllerBase<1> *)pFVar24->_padding_) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar24->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar24->_padding_ = (longlong)pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_14cfe19dc:
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar9.ReferenceController = PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController;
  pTVar23 = pTVar15;
  PoseTrackingLiveLinkInstance.Object = pFVar24;
  FVar10.ReferenceController = PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController
  ;
  if (pTVar15 != PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController) {
    pTVar22 = (TReferenceControllerBase<1> *)0x0;
    pTVar23 = pTVar21;
    FVar10.ReferenceController = pTVar15;
    if (PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount;
      aVar3 = *paVar2;
      PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController = pTVar15;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      pTVar23 = pTVar22;
      FVar10.ReferenceController =
           PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController;
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(FVar9.ReferenceController)->_padding_)(FVar9.ReferenceController);
        LOCK();
        paVar2 = &(FVar9.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        FVar10 = PoseTrackingLiveLinkInstance.SharedReferenceCount;
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar9.ReferenceController)->_padding_ + 8))(FVar9.ReferenceController,1);
          FVar10 = PoseTrackingLiveLinkInstance.SharedReferenceCount;
        }
      }
    }
  }
  PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController = FVar10.ReferenceController
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (PoseTrackingLiveLinkInstance.Object == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar24 = PoseTrackingLiveLinkInstance.Object;
  pIVar17 = IModularFeatures::Get();
  pTVar15 = (TReferenceControllerBase<1> *)&pFVar24->_padding_;
  if (pFVar24 == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    pTVar15 = pTVar21;
  }
  pcVar5 = *(code **)((longlong)*pIVar17 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar5)(pIVar17,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pTVar15);
  local_248._s_0.X = ___xmm_0000000000000000bff0000000000000;
  local_248._s_0.Y = _UNK_15076ad98;
  local_248._s_0.Z = 0.0;
  UE::Math::TVector<double>::ToOrientationQuat((TVector<double> *)&local_248._s_0,&local_218);
  this_01 = &local_230;
  local_230._s_0.Z = 0.0;
  local_230._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_230._s_0.Y = _UNK_15061cbc8;
  pTVar18 = UE::Math::TVector<double>::ToOrientationQuat
                      ((TVector<double> *)&this_01->_s_0,&local_1f8);
  fVar36 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar37 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar38 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar39 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar40 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar41 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar42 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar43 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_1d8.Rotation.XY.m128d_f64[0] = local_218.X;
  local_1d8.Rotation.XY.m128d_f64[1] = local_218.Y;
  local_1d8.Rotation.ZW.m128d_f64[0] = local_218.Z;
  local_1d8.Rotation.ZW.m128d_f64[1] = local_218.W;
  local_1d8.Translation.XY.m128d_f64[0] = (double)fVar36;
  local_1d8.Translation.XY.m128d_f64[1] = (double)fVar37;
  dVar8 = (double)fVar40;
  uVar32 = SUB84((double)fVar41,0);
  uVar34 = (uint)((ulonglong)(double)fVar41 >> 0x20);
  local_1d8.Translation.ZW.m128d_f64[0] = (double)fVar38;
  local_1d8.Translation.ZW.m128d_f64[1] = (double)fVar39;
  local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar32;
  local_1d8.Scale3D.XY.m128d_f64[0] = dVar8;
  local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar34;
  dVar7 = (double)fVar42;
  uVar19 = SUB84((double)fVar43,0);
  uVar30 = (uint)((ulonglong)(double)fVar43 >> 0x20);
  local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_1d8.Scale3D.ZW.m128d_f64[0] = dVar7;
  local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar30;
  lVar25 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(uVar30 & _UNK_15061cc8c,uVar19 & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar25;
  auVar6._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  uVar19 = movmskpd((int)this_01,auVar6);
  auVar26._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
        (double)CONCAT44(uVar34 & _UNK_15061cc8c,uVar32 & _UNK_15061cc88));
  auVar26._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar12 = movmskpd((int)pTVar18,auVar26);
  if ((uVar19 & 0x3fffffff) == 0 && iVar12 == 0) {
    local_178.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_178.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_178.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_178.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_1d8,&local_178);
    fVar36 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar37 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar38 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar39 = GlobalVectorConstants::FloatZero.m128_f32[3];
    fVar40 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar41 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar42 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar43 = GlobalVectorConstants::Float1110.m128_f32[3];
  }
  uVar33 = SUB84((double)fVar37,0);
  uVar35 = (undefined4)((ulonglong)(double)fVar37 >> 0x20);
  uVar29 = SUB84((double)fVar41,0);
  uVar31 = (undefined4)((ulonglong)(double)fVar41 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[0] = local_1f8.Z;
  local_118.Rotation.ZW.m128d_f64[1] = local_1f8.W;
  local_118.Rotation.XY.m128d_f64[0] = local_1f8.X;
  local_118.Rotation.XY.m128d_f64[1] = local_1f8.Y;
  local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118.Translation.ZW.m128d_f64[0] = (double)fVar38;
  local_118.Translation.ZW.m128d_f64[1] = (double)fVar39;
  uVar27 = SUB84((double)fVar43,0);
  uVar28 = (undefined4)((ulonglong)(double)fVar43 >> 0x20);
  local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Translation.XY.m128d_f64[1]._0_4_ = uVar33;
  local_118.Translation.XY.m128d_f64[0] = (double)fVar36;
  local_118.Translation.XY.m128d_f64[1]._4_4_ = uVar35;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar40;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar42;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
  local_b8.Translation.XY.m128d_f64[1]._0_4_ = uVar33;
  local_b8.Translation.XY.m128d_f64[0] = (double)fVar36;
  local_b8.Translation.XY.m128d_f64[1]._4_4_ = uVar35;
  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
  local_b8.Scale3D.XY.m128d_f64[0] = (double)fVar40;
  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
  local_b8.Scale3D.ZW.m128d_f64[0] = (double)fVar42;
  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
  local_b8.Translation.ZW.m128d_f64[0] = local_118.Translation.ZW.m128d_f64[0];
  local_b8.Translation.ZW.m128d_f64[1] = local_118.Translation.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_b8,&local_178,&local_118);
  pIVar17 = IModularFeatures::Get();
  pcVar5 = *(code **)((longlong)*pIVar17 + 0x28);
  if (this != (FAppleARKitPoseTrackingLiveLinkModule *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)(this + 1);
  }
  pFVar13 = IARLiveLinkRetargetingLogic::GetModularFeatureName();
  (*pcVar5)(pIVar17,*pFVar13,pTVar21);
  return;
}

// ShutdownModule @ 14cfe1d30

void __thiscall
FAppleARKitPoseTrackingLiveLinkModule::ShutdownModule(FAppleARKitPoseTrackingLiveLinkModule *this)

{
  code *pcVar1;
  FAppleARKitPoseTrackingLiveLink *pFVar2;
  bool bVar3;
  IModularFeatures *pIVar4;
  FName *pFVar5;
  FAppleARKitPoseTrackingLiveLinkModule *pFVar6;
  TSharedPtr<FAppleARKitPoseTrackingLiveLink,1> local_18;
  
  pIVar4 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x30);
  pFVar5 = IARLiveLinkRetargetingLogic::GetModularFeatureName();
  pFVar6 = this + 1;
  if (this == (FAppleARKitPoseTrackingLiveLinkModule *)0x0) {
    pFVar6 = (FAppleARKitPoseTrackingLiveLinkModule *)0x0;
  }
  (*pcVar1)(pIVar4,*pFVar5,pFVar6);
  if (PoseTrackingLiveLinkInstance.Object == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = PoseTrackingLiveLinkInstance.Object;
  pIVar4 = IModularFeatures::Get();
  pFVar6 = (FAppleARKitPoseTrackingLiveLinkModule *)&pFVar2->_padding_;
  if (pFVar2 == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    pFVar6 = (FAppleARKitPoseTrackingLiveLinkModule *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar4,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pFVar6);
  local_18.Object = (FAppleARKitPoseTrackingLiveLink *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FAppleARKitPoseTrackingLiveLink,1>::operator=(&PoseTrackingLiveLinkInstance,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// BuildPoseFromAnimationData @ 14cfe1e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cfe2a65) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAppleARKitPoseTrackingLiveLinkModule::BuildPoseFromAnimationData
          (FAppleARKitPoseTrackingLiveLinkModule *this,UARLiveLinkRetargetAsset *param_1,
          float param_2,FLiveLinkSkeletonStaticData *param_3,FLiveLinkAnimationFrameData *param_4,
          FCompactPose *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  double *pdVar3;
  ushort *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FLiveLinkAnimationFrameData *pFVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  TTransform<double> *pTVar20;
  undefined7 extraout_var;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  ushort *puVar27;
  FName *pFVar28;
  uint uVar29;
  ulonglong uVar30;
  ForElementType<FName> FVar31;
  longlong lVar32;
  longlong lVar33;
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
  double dVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar57;
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  uint uVar70;
  double dVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  double dVar79;
  uint uVar81;
  uint uVar83;
  undefined1 auVar80 [16];
  double dVar82;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined1 auStackY_788 [32];
  undefined1 local_738 [8];
  ForElementType<FName> local_730;
  undefined8 local_728;
  ForAnyElementType local_720;
  int local_718;
  int iStack_714;
  FName local_710;
  FLiveLinkAnimationFrameData *local_708;
  undefined1 local_700 [16];
  undefined1 local_6e8 [16];
  double local_6d8;
  double dStack_6d0;
  TQuat<double> local_6c8;
  TQuat<double> local_6a8;
  double local_688 [2];
  double local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar55;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  local_708 = param_4;
  local_6e8._0_8_ = param_5;
  local_700._0_8_ = param_1;
  if ((param_3 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSkeletonData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkModule.cpp"
                          ,0x62,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (FLiveLinkAnimationFrameData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFrameData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkModule.cpp"
                          ,99,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = (param_3->BoneNames).ArrayNum;
  uVar25 = 0;
  local_730.Data = (FName *)0x0;
  local_728 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  uVar30 = uVar25;
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_>
              (8,4,uVar18,&local_730,0,(int *)((longlong)&local_728 + 4));
    uVar30 = local_728 & 0xffffffff;
  }
  FVar31.Data = local_730.Data;
  local_720.Data = (FScriptContainerElement *)0x0;
  local_718 = 0;
  iStack_714 = 0;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)&param_5->field_0x10 + 0x48) + 0x28);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar18,&local_720,0,&iStack_714);
    do {
      pTVar19 = GetRefMeshBoneToComponent(&local_1a8,param_5,(int)uVar25);
      if (local_718 == iStack_714) {
        local_718 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_720,&iStack_714);
      }
      iVar17 = local_718 + 1;
      uVar29 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar29;
      dVar66 = (pTVar19->Rotation).XY.m128d_f64[1];
      lVar22 = (longlong)local_718 * 0x60;
      *(double *)(local_720.Data + lVar22) = (pTVar19->Rotation).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 8) = dVar66;
      dVar66 = (pTVar19->Rotation).ZW.m128d_f64[1];
      *(double *)(local_720.Data + lVar22 + 0x10) = (pTVar19->Rotation).ZW.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 0x10 + 8) = dVar66;
      dVar66 = (pTVar19->Translation).XY.m128d_f64[1];
      *(double *)(local_720.Data + lVar22 + 0x20) = (pTVar19->Translation).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 0x20 + 8) = dVar66;
      dVar66 = (pTVar19->Translation).ZW.m128d_f64[1];
      *(double *)(local_720.Data + lVar22 + 0x30) = (pTVar19->Translation).ZW.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 0x30 + 8) = dVar66;
      dVar66 = (pTVar19->Scale3D).XY.m128d_f64[1];
      *(double *)(local_720.Data + lVar22 + 0x40) = (pTVar19->Scale3D).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 0x40 + 8) = dVar66;
      dVar66 = (pTVar19->Scale3D).ZW.m128d_f64[1];
      *(double *)(local_720.Data + lVar22 + 0x50) = (pTVar19->Scale3D).ZW.m128d_f64[0];
      *(double *)(local_720.Data + lVar22 + 0x50 + 8) = dVar66;
      local_718 = iVar17;
    } while ((int)uVar29 < (int)uVar18);
  }
  pFVar26 = (param_3->BoneNames).AllocatorInstance.Data;
  iVar17 = (param_3->BoneNames).ArrayNum;
  uVar13 = local_700._0_8_;
  pFVar1 = pFVar26 + (longlong)iVar17 * 8;
  while( true ) {
    iVar15 = (int)uVar30;
    if ((param_3->BoneNames).ArrayNum != iVar17) {
      local_738[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_738);
    }
    if (pFVar26 == pFVar1) break;
    UARLiveLinkRetargetAsset::GetRemappedBoneName
              ((UARLiveLinkRetargetAsset *)uVar13,(FName)&local_710);
    if (((FVar31.Data <= &local_710) && (&local_710 < FVar31.Data + local_728._4_4_)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (iVar15 == local_728._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                         (0x408,&local_730,(int *)((longlong)&local_728 + 4));
      FVar31.Data = local_730.Data;
    }
    pFVar26 = pFVar26 + 8;
    uVar30 = (ulonglong)(iVar15 + 1U);
    FVar31.Data[iVar15] = local_710;
    local_728 = CONCAT44(local_728._4_4_,iVar15 + 1U);
  }
  UE::Math::TVector<double>::ToOrientationQuat((TVector<double> *)(uVar13 + 0x80),&local_6c8);
  UE::Math::TVector<double>::ToOrientationQuat
            (&((FARKitPoseTrackingConfig *)(uVar13 + 0x80))->MeshForward,&local_6a8);
  local_628.Rotation.XY.m128d_f64[0] = local_6c8.X;
  local_628.Rotation.XY.m128d_f64[1] = local_6c8.Y;
  local_628.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_628.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_628.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_628.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_628.Rotation.ZW.m128d_f64[0] = local_6c8.Z;
  local_628.Rotation.ZW.m128d_f64[1] = local_6c8.W;
  local_628.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_628.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_628.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_628.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar19 = UE::Math::TTransform<double>::Inverse(&local_628,&local_148);
  local_388.Rotation.XY.m128d_f64[0] = local_6a8.X;
  local_388.Rotation.XY.m128d_f64[1] = local_6a8.Y;
  local_5c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_5c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  uVar62 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar63 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_5c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_5c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_388.Rotation.ZW.m128d_f64[0] = local_6a8.Z;
  local_388.Rotation.ZW.m128d_f64[1] = local_6a8.W;
  local_5c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_5c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_5c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_5c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_388.Translation.ZW.m128d_f64[1]._0_4_ = uVar62;
  local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_388.Translation.ZW.m128d_f64[1]._4_4_ = uVar63;
  local_5c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar62;
  local_5c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_5c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar63;
  local_388.Translation.XY.m128d_f64[0] = local_5c8.Translation.XY.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[1] = local_5c8.Translation.XY.m128d_f64[1];
  local_388.Scale3D.XY.m128d_f64[0] = local_5c8.Scale3D.XY.m128d_f64[0];
  local_388.Scale3D.XY.m128d_f64[1] = local_5c8.Scale3D.XY.m128d_f64[1];
  local_388.Scale3D.ZW.m128d_f64[0] = local_5c8.Scale3D.ZW.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[1] = local_5c8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_5c8,pTVar19,&local_388);
  pFVar12 = local_708;
  uVar23 = 0;
  uVar13 = local_6e8._0_8_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar81 = _UNK_15061cc88;
  uVar83 = _UNK_15061cc8c;
  if (0 < iVar15) {
    do {
      uVar16 = 0;
      if ((int)uVar23 < iVar15) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = FBoneContainer::GetPoseBoneIndexForBoneName
                         (*(FBoneContainer **)(uVar13 + 0x10),FVar31.Data + (int)uVar23);
      if (uVar16 != 0xffffffff) {
        GetAppleBoneToComponentTransformFromRefSkeleton(&local_2c8,param_3,uVar23);
        GetAppleBoneToComponentTransform
                  (&local_268,&param_3->BoneParents,&pFVar12->Transforms,uVar23);
        pTVar19 = &local_208;
        dVar56 = local_268.Rotation.ZW.m128d_f64[0];
        local_708 = (FLiveLinkAnimationFrameData *)
                    (local_268.Translation.XY.m128d_f64[0] - local_2c8.Translation.XY.m128d_f64[0]);
        dVar66 = local_2c8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar72 = local_2c8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar79 = local_2c8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar82 = local_2c8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_670 = local_2c8.Translation.XY.m128d_f64[0];
        dStack_668 = local_2c8.Translation.XY.m128d_f64[1];
        dVar71 = local_268.Rotation.ZW.m128d_f64[1];
        local_678 = local_268.Translation.ZW.m128d_f64[0];
        dVar57 = local_268.Rotation.XY.m128d_f64[0];
        dVar61 = local_268.Rotation.XY.m128d_f64[1];
        local_6d8 = local_268.Translation.ZW.m128d_f64[0] - local_2c8.Translation.ZW.m128d_f64[0];
        local_660 = local_2c8.Translation.ZW.m128d_f64[0];
        auVar42._8_4_ = local_268.Rotation.XY.m128d_f64[1]._0_4_;
        auVar42._0_8_ = dVar61;
        auVar42._12_4_ = local_268.Rotation.XY.m128d_f64[1]._4_4_;
        local_688[0] = local_268.Translation.XY.m128d_f64[0];
        local_688[1] = local_268.Translation.XY.m128d_f64[1];
        dVar10 = local_268.Translation.XY.m128d_f64[1] - local_2c8.Translation.XY.m128d_f64[1];
        dStack_6d0 = local_268.Translation.ZW.m128d_f64[1];
        auVar65._8_4_ = local_268.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar65._0_8_ = dVar71;
        auVar65._12_4_ = local_268.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar49._8_4_ = SUB84(dVar82,0);
        auVar49._0_8_ = dVar79;
        auVar49._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
        auVar34._8_4_ = local_268.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar34._0_8_ = dVar56;
        auVar34._12_4_ = local_268.Rotation.ZW.m128d_f64[0]._4_4_;
        dVar8 = dVar57 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar71 * dVar79 +
                dVar61 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar56 * auVar49._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = dVar57 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                auVar65._8_8_ * dVar82 +
                auVar42._8_8_ * dVar72 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                auVar34._8_8_ * dVar79 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_6e8._8_4_ = SUB84(dVar9,0);
        local_6e8._0_8_ = dVar8;
        local_6e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_700._8_4_ = local_268.Translation.XY.m128d_f64[1]._0_4_;
        local_700._0_8_ = dVar10;
        local_700._12_4_ = local_268.Translation.XY.m128d_f64[1]._4_4_;
        dVar11 = dVar57 * auVar49._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar71 * dVar66 +
                 dVar61 * dVar79 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar56 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar66 = dVar57 * dVar79 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar71 * dVar72 +
                 dVar61 * dVar82 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar56 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        pTVar20 = GetRefMeshBoneToComponent(pTVar19,(FCompactPose *)uVar13,uVar16);
        uVar55 = (uint)((ulonglong)local_5c8.Scale3D.ZW.m128d_f64[0] >> 0x20);
        auVar50._0_8_ =
             (double)CONCAT44(uVar55 & uVar29,SUB84(local_5c8.Scale3D.ZW.m128d_f64[0],0) & uVar18);
        auVar50._8_4_ = SUB84(local_5c8.Scale3D.ZW.m128d_f64[1],0) & uVar81;
        auVar50._12_4_ = (uint)((ulonglong)local_5c8.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar83;
        auVar43._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar50._8_8_);
        auVar43._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar50._0_8_);
        uVar21 = movmskpd((int)pTVar19,auVar43);
        auVar45._8_8_ = local_5c8.Scale3D.XY.m128d_f64[1];
        auVar45._0_8_ = local_5c8.Scale3D.XY.m128d_f64[0];
        uVar24 = (uint)((ulonglong)local_5c8.Scale3D.XY.m128d_f64[1] >> 0x20);
        uVar70 = (uint)((ulonglong)local_5c8.Scale3D.XY.m128d_f64[0] >> 0x20);
        auVar44._0_8_ =
             (double)CONCAT44(uVar70 & uVar29,SUB84(local_5c8.Scale3D.XY.m128d_f64[0],0) & uVar18);
        auVar44._8_4_ = SUB84(local_5c8.Scale3D.XY.m128d_f64[1],0) & uVar81;
        auVar44._12_4_ = uVar24 & uVar83;
        auVar35._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar44._8_8_);
        auVar35._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar44._0_8_);
        iVar17 = movmskpd((int)pTVar20,auVar35);
        if ((uVar21 & 0x3fffffff) == 0 && iVar17 == 0) {
          local_568.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_568.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_568.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_568.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_568.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_568.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          dVar57 = local_5c8.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar61 = local_5c8.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar74 = SUB84(dVar61,0);
          uVar75 = (undefined4)((ulonglong)dVar61 >> 0x20);
          dVar9 = local_5c8.Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = local_5c8.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar73 = (undefined4)((ulonglong)dVar10 >> 0x20);
          lVar22 = -(ulonglong)
                    ((double)CONCAT44(uVar29 & uVar55,
                                      uVar18 & SUB84(local_5c8.Scale3D.ZW.m128d_f64[0],0)) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
          lVar32 = -(ulonglong)
                    ((double)CONCAT44(uVar70 & uVar29,
                                      SUB84(local_5c8.Scale3D.XY.m128d_f64[0],0) & uVar18) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar33 = -(ulonglong)
                    ((double)CONCAT44(uVar24 & uVar83,
                                      SUB84(local_5c8.Scale3D.XY.m128d_f64[1],0) & uVar81) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_568.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar32 & auVar45._0_4_;
          local_568.Scale3D.XY.m128d_f64[0]._4_4_ =
               ~(uint)((ulonglong)lVar32 >> 0x20) & auVar45._4_4_;
          local_568.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar33 & auVar45._8_4_;
          local_568.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar33 >> 0x20) & auVar45._12_4_;
          auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar6._0_8_ = local_5c8.Scale3D.ZW.m128d_f64[0];
          auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
          dVar82 = local_5c8.Translation.XY.m128d_f64[0] *
                   (double)CONCAT44(local_568.Scale3D.XY.m128d_f64[0]._4_4_,
                                    local_568.Scale3D.XY.m128d_f64[0]._0_4_);
          dVar8 = local_5c8.Translation.XY.m128d_f64[1] *
                  (double)CONCAT44(local_568.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_568.Scale3D.XY.m128d_f64[1]._0_4_);
          uVar62 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar51._8_4_ = uVar74;
          auVar51._0_8_ = dVar57;
          auVar51._12_4_ = uVar75;
          local_568.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar45._4_4_,
                                ~(uint)lVar22 & auVar45._0_4_);
          dVar56 = auVar51._8_8_;
          auVar36._8_4_ = SUB84(dVar9,0);
          auVar36._0_8_ = dVar56;
          auVar36._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar67._8_4_ = SUB84(dVar8,0);
          auVar67._0_8_ = dVar82;
          auVar67._12_4_ = uVar62;
          auVar80._0_8_ = local_5c8.Translation.ZW.m128d_f64[0] * local_568.Scale3D.ZW.m128d_f64[0];
          auVar80._8_8_ = local_5c8.Translation.ZW.m128d_f64[1] * 0.0;
          auVar64._8_4_ = uVar74;
          auVar64._0_8_ = dVar57;
          auVar64._12_4_ = uVar75;
          auVar46._8_4_ = SUB84(dVar8,0);
          auVar46._0_8_ = dVar82;
          auVar46._12_4_ = uVar62;
          auVar45 = blendpd(auVar46,auVar80,2);
          auVar68._0_8_ = auVar67._8_8_ * dVar57 - dVar56 * dVar82;
          auVar68._8_8_ = auVar80._0_8_ * dVar61 - auVar36._8_8_ * dVar8;
          auVar7._8_4_ = SUB84(dVar10,0);
          auVar7._0_8_ = dVar9;
          auVar7._12_4_ = uVar73;
          auVar65 = blendpd(auVar64,auVar7,2);
          auVar47._0_8_ = auVar45._0_8_ * dVar9 - auVar65._0_8_ * auVar80._0_8_;
          auVar47._8_8_ = auVar45._8_8_ * dVar10 - auVar65._8_8_ * auVar80._8_8_;
          dVar72 = auVar68._8_8_ + auVar68._8_8_;
          dVar79 = auVar47._0_8_ + auVar47._0_8_;
          uVar62 = SUB84(dVar79,0);
          uVar63 = (undefined4)((ulonglong)dVar79 >> 0x20);
          auVar45 = blendpd(auVar68,auVar47,2);
          auVar69._0_8_ = auVar45._0_8_ + auVar45._0_8_;
          auVar69._8_8_ = auVar45._8_8_ + auVar45._8_8_;
          auVar58._8_4_ = uVar62;
          auVar58._0_8_ = dVar72;
          auVar58._12_4_ = uVar63;
          auVar37._8_4_ = uVar62;
          auVar37._0_8_ = dVar72;
          auVar37._12_4_ = uVar63;
          auVar52._8_4_ = uVar62;
          auVar52._0_8_ = dVar72;
          auVar52._12_4_ = uVar63;
          auVar45 = blendpd(auVar52,auVar69,2);
          auVar59._0_8_ = auVar58._8_8_ * dVar57 - dVar72 * dVar56;
          auVar59._8_8_ = auVar69._0_8_ * dVar61 - auVar37._8_8_ * dVar9;
          auVar38._8_4_ = SUB84(auVar69._8_8_,0);
          auVar38._0_8_ = auVar69._0_8_;
          auVar38._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
          auVar53._0_8_ = auVar45._0_8_ * dVar9 - auVar69._0_8_ * auVar65._0_8_;
          auVar53._8_8_ = auVar45._8_8_ * dVar10 - auVar38._8_8_ * auVar65._8_8_;
          auVar39._8_4_ = SUB84(auVar59._8_8_,0);
          auVar39._0_8_ = auVar59._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
          auVar45 = blendpd(auVar59,auVar53,2);
          local_568.Rotation.XY.m128d_f64[1]._0_4_ = uVar74;
          local_568.Rotation.XY.m128d_f64[0] = dVar57;
          local_568.Rotation.XY.m128d_f64[1]._4_4_ = uVar75;
          local_568.Translation.ZW.m128d_f64[1] = 0.0;
          local_568.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar69._0_8_ * dVar10 + auVar80._0_8_ + auVar45._0_8_);
          local_568.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
          local_568.Rotation.ZW.m128d_f64[0] = dVar9;
          local_568.Rotation.ZW.m128d_f64[1]._4_4_ = uVar73;
          local_568.Translation.XY.m128d_f64[1] = 0.0 - (dVar79 * dVar10 + dVar8 + auVar53._0_8_);
          local_568.Translation.XY.m128d_f64[0] = 0.0 - (dVar72 * dVar10 + dVar82 + auVar39._8_8_);
          local_568.Scale3D.ZW.m128d_f64[1] = 0.0;
          dVar10 = (double)local_700._0_8_;
          dVar8 = (double)local_6e8._0_8_;
          dVar9 = (double)local_6e8._8_8_;
        }
        local_508.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_508.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_508.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_508.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_508.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_508.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_508.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_508.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_508.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_508,&local_208,&local_568);
        auVar54._8_4_ = SUB84(dVar11,0);
        auVar54._0_8_ = dVar11;
        auVar54._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar40._8_4_ = SUB84(dVar8,0);
        auVar40._0_8_ = dVar8;
        auVar40._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_648 = local_508.Translation.ZW.m128d_f64[0];
        local_328.Translation.XY.m128d_f64[0] =
             (double)local_708 + local_508.Translation.XY.m128d_f64[0];
        local_328.Rotation.XY.m128d_f64[0] =
             dVar11 * local_508.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_508.Rotation.XY.m128d_f64[0] * dVar9 +
             local_508.Rotation.ZW.m128d_f64[0] * dVar66 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar8 * local_508.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_328.Rotation.XY.m128d_f64[1] =
             auVar54._8_8_ * local_508.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_508.Rotation.XY.m128d_f64[1] * dVar9 +
             local_508.Rotation.ZW.m128d_f64[1] * dVar66 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar40._8_8_ * local_508.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_658 = local_508.Translation.XY.m128d_f64[0];
        dStack_650 = local_508.Translation.XY.m128d_f64[1];
        local_328.Translation.XY.m128d_f64[1] = dVar10 + local_508.Translation.XY.m128d_f64[1];
        local_328.Translation.ZW.m128d_f64[0] = local_6d8 + local_508.Translation.ZW.m128d_f64[0];
        dVar72 = dVar11 * local_508.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_508.Rotation.ZW.m128d_f64[1] * dVar9 +
                 local_508.Rotation.XY.m128d_f64[1] * dVar66 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar8 * local_508.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_640 = local_508.Scale3D.XY.m128d_f64[0];
        dStack_638 = local_508.Scale3D.XY.m128d_f64[1];
        local_328.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar72,0);
        local_328.Rotation.ZW.m128d_f64[0] =
             dVar11 * local_508.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_508.Rotation.ZW.m128d_f64[0] * dVar9 +
             local_508.Rotation.XY.m128d_f64[0] * dVar66 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar8 * local_508.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_328.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar72 >> 0x20);
        local_328.Translation.ZW.m128d_f64[1] = 0.0;
        local_630 = local_508.Scale3D.ZW.m128d_f64[0];
        local_328.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
        local_328.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
        local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_4a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_4a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_328.Scale3D.ZW.m128d_f64[0] = local_508.Scale3D.ZW.m128d_f64[0];
        local_328.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_4a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_4a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_4a8,&local_328,&local_5c8);
        dVar71 = local_4a8.Scale3D.ZW.m128d_f64[1];
        dVar56 = local_4a8.Scale3D.ZW.m128d_f64[0];
        dVar61 = local_4a8.Scale3D.XY.m128d_f64[1];
        dVar57 = local_4a8.Scale3D.XY.m128d_f64[0];
        dVar11 = local_4a8.Translation.ZW.m128d_f64[1];
        dVar10 = local_4a8.Translation.ZW.m128d_f64[0];
        dVar9 = local_4a8.Translation.XY.m128d_f64[1];
        dVar8 = local_4a8.Translation.XY.m128d_f64[0];
        dVar82 = local_4a8.Rotation.ZW.m128d_f64[1];
        dVar79 = local_4a8.Rotation.ZW.m128d_f64[0];
        dVar72 = local_4a8.Rotation.XY.m128d_f64[1];
        dVar66 = local_4a8.Rotation.XY.m128d_f64[0];
        uVar18 = 0;
        if ((int)uVar16 < local_718) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar22 = (longlong)(int)uVar16 * 0x60;
        *(double *)(local_720.Data + lVar22) = dVar66;
        *(double *)(local_720.Data + lVar22 + 8) = dVar72;
        *(double *)(local_720.Data + lVar22 + 0x10) = dVar79;
        *(double *)(local_720.Data + lVar22 + 0x10 + 8) = dVar82;
        *(double *)(local_720.Data + lVar22 + 0x20) = dVar8;
        *(double *)(local_720.Data + lVar22 + 0x20 + 8) = dVar9;
        *(double *)(local_720.Data + lVar22 + 0x30) = dVar10;
        *(double *)(local_720.Data + lVar22 + 0x30 + 8) = dVar11;
        uVar83 = _UNK_15061cc8c;
        uVar81 = _UNK_15061cc88;
        uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        *(double *)(local_720.Data + lVar22 + 0x40) = dVar57;
        *(double *)(local_720.Data + lVar22 + 0x40 + 8) = dVar61;
        *(double *)(local_720.Data + lVar22 + 0x50) = dVar56;
        *(double *)(local_720.Data + lVar22 + 0x50 + 8) = dVar71;
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar15);
  }
  pFVar28 = FVar31.Data + iVar15;
  local_700._0_8_ = pFVar28;
  do {
    if (FVar31.Data == pFVar28) {
      if (local_720.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_720.Data);
      }
      return;
    }
    uVar23 = FBoneContainer::GetPoseBoneIndexForBoneName
                       (*(FBoneContainer **)(uVar13 + 0x10),FVar31.Data);
    if (uVar23 != 0xffffffff) {
      uVar16 = FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)(uVar13 + 0x10),uVar23);
      puVar4 = (ushort *)**(undefined8 **)(uVar13 + 0x10);
      for (puVar27 = puVar4; puVar27 != puVar4 + *(int *)(*(undefined8 **)(uVar13 + 0x10) + 1);
          puVar27 = puVar27 + 1) {
        if (*puVar27 == uVar23) {
          uVar24 = (uint)((longlong)puVar27 - (longlong)puVar4 >> 1);
          goto LAB_14cfe2ad9;
        }
      }
      uVar24 = 0xffffffff;
LAB_14cfe2ad9:
      if (uVar24 != 0xffffffff) {
        if (uVar16 == 0xffffffff) {
          uVar18 = 0;
          if ((int)uVar23 < local_718) {
            uVar18 = ~uVar23 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar22 = (longlong)(int)uVar23 * 0x60;
          dVar66 = *(double *)(local_720.Data + lVar22);
          dVar72 = *(double *)(local_720.Data + lVar22 + 8);
          pFVar1 = local_720.Data + lVar22 + 0x10;
          uVar62 = *(undefined4 *)pFVar1;
          uVar63 = *(undefined4 *)(pFVar1 + 4);
          uVar73 = *(undefined4 *)(pFVar1 + 8);
          uVar74 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = local_720.Data + lVar22 + 0x20;
          uVar75 = *(undefined4 *)pFVar1;
          uVar76 = *(undefined4 *)(pFVar1 + 4);
          uVar77 = *(undefined4 *)(pFVar1 + 8);
          uVar78 = *(undefined4 *)(pFVar1 + 0xc);
          dVar79 = *(double *)(local_720.Data + lVar22 + 0x30);
          dVar82 = *(double *)(local_720.Data + lVar22 + 0x30 + 8);
          pFVar1 = local_720.Data + lVar22 + 0x40;
          uVar84 = *(undefined4 *)pFVar1;
          uVar85 = *(undefined4 *)(pFVar1 + 4);
          uVar86 = *(undefined4 *)(pFVar1 + 8);
          uVar87 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = local_720.Data + lVar22 + 0x50;
          uVar88 = *(undefined4 *)pFVar1;
          uVar89 = *(undefined4 *)(pFVar1 + 4);
          uVar90 = *(undefined4 *)(pFVar1 + 8);
          uVar91 = *(undefined4 *)(pFVar1 + 0xc);
        }
        else {
          uVar21 = 0;
          if ((int)uVar23 < local_718) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = (TTransform<double> *)(local_720.Data + (longlong)(int)uVar23 * 0x60);
          uVar23 = 0;
          if ((int)uVar16 < local_718) {
            uVar23 = ~uVar16 >> 0x1f;
          }
          iVar17 = local_718;
          if (uVar23 == 0) {
            iVar17 = 0x506109c0;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar23 = (uint)CONCAT71(extraout_var,bVar14);
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar20 = (TTransform<double> *)(local_720.Data + (longlong)(int)uVar16 * 0x60);
          auVar60._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 4) & uVar29,
                                *(uint *)(pTVar20->Scale3D).ZW.m128d_f64 & uVar18);
          auVar60._8_4_ = *(uint *)((pTVar20->Scale3D).ZW.m128d_f64 + 1) & uVar81;
          auVar60._12_4_ = *(uint *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 0xc) & uVar83;
          auVar48._8_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar60._8_8_);
          auVar48._0_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar60._0_8_);
          uVar16 = movmskpd(iVar17,auVar48);
          auVar41._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 0xc) & uVar83
                                 ,*(uint *)((pTVar20->Scale3D).XY.m128d_f64 + 1) & uVar81));
          auVar41._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 4) & uVar29,
                                 *(uint *)(pTVar20->Scale3D).XY.m128d_f64 & uVar18));
          iVar17 = movmskpd(uVar23,auVar41);
          if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
            local_3e8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_3e8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_3e8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_3e8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_3e8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_3e8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(pTVar20,&local_3e8);
          }
          local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_448.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_448.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_448.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_448.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_448,pTVar19,&local_3e8);
          uVar62 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar63 = local_448.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar73 = local_448.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar74 = local_448.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar75 = local_448.Translation.XY.m128d_f64[0]._0_4_;
          uVar76 = local_448.Translation.XY.m128d_f64[0]._4_4_;
          uVar77 = local_448.Translation.XY.m128d_f64[1]._0_4_;
          uVar78 = local_448.Translation.XY.m128d_f64[1]._4_4_;
          uVar84 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar85 = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar86 = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar87 = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar88 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar89 = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar90 = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar91 = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
          dVar66 = local_448.Rotation.XY.m128d_f64[0];
          dVar72 = local_448.Rotation.XY.m128d_f64[1];
          dVar79 = local_448.Translation.ZW.m128d_f64[0];
          dVar82 = local_448.Translation.ZW.m128d_f64[1];
        }
        uVar18 = 0;
        if ((int)uVar24 < *(int *)(uVar13 + 8)) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar22 = *(longlong *)uVar13;
        lVar32 = (longlong)(int)uVar24 * 0x60;
        *(double *)(lVar32 + lVar22) = dVar66;
        ((double *)(lVar32 + lVar22))[1] = dVar72;
        puVar2 = (undefined4 *)(lVar32 + 0x10 + lVar22);
        *puVar2 = uVar62;
        puVar2[1] = uVar63;
        puVar2[2] = uVar73;
        puVar2[3] = uVar74;
        puVar2 = (undefined4 *)(lVar32 + 0x20 + lVar22);
        *puVar2 = uVar75;
        puVar2[1] = uVar76;
        puVar2[2] = uVar77;
        puVar2[3] = uVar78;
        pdVar3 = (double *)(lVar32 + 0x30 + lVar22);
        *pdVar3 = dVar79;
        pdVar3[1] = dVar82;
        puVar2 = (undefined4 *)(lVar32 + 0x40 + lVar22);
        *puVar2 = uVar84;
        puVar2[1] = uVar85;
        puVar2[2] = uVar86;
        puVar2[3] = uVar87;
        puVar2 = (undefined4 *)(lVar32 + 0x50 + lVar22);
        *puVar2 = uVar88;
        puVar2[1] = uVar89;
        puVar2[2] = uVar90;
        puVar2[3] = uVar91;
      }
      pFVar28 = (FName *)local_700._0_8_;
    }
    FVar31.Data = FVar31.Data + 1;
    uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar81 = _UNK_15061cc88;
    uVar83 = _UNK_15061cc8c;
  } while( true );
}

// operator() @ 150578c20

bool __thiscall
`FAppleARKitPoseTrackingLiveLinkModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6048547518915018773>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6048547518915018773>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

