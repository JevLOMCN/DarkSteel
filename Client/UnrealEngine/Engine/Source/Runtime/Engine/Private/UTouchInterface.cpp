// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b981c0

UClass * __cdecl UTouchInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTouchInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TouchInterface",
               &Z_Registration_Info_UClass_UTouchInterface.InnerSingleton,
               StaticRegisterNativesUTouchInterface,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTouchInterface>,InternalVTableHelperCtorCaller<UTouchInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTouchInterface.InnerSingleton;
}

// UTouchInterface @ 147bbddd0

UTouchInterface * __thiscall
UTouchInterface::UTouchInterface(UTouchInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTouchInterface__6B_;
  (this->Controls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Controls).ArrayNum = 0;
  (this->Controls).ArrayMax = 0;
  return this;
}

// UTouchInterface @ 147bbde10

UTouchInterface * __thiscall
UTouchInterface::UTouchInterface(UTouchInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ActiveOpacity = 1.0;
  this->_padding_ = (longlong)&___7UTouchInterface__6B_;
  (this->Controls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Controls).ArrayNum = 0;
  (this->Controls).ArrayMax = 0;
  this->StartupDelay = 0.0;
  this->bPreventRecenter = false;
  this->InactiveOpacity = 0.1;
  this->TimeUntilDeactive = 0.5;
  this->TimeUntilReset = 2.0;
  this->ActivationDelay = 0.0;
  return this;
}

// ~UTouchInterface @ 147bbfb40

void __thiscall UTouchInterface::~UTouchInterface(UTouchInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTouchInterface__6B_;
  DestructItems<FTouchInputControl,int>
            ((FTouchInputControl *)(this->Controls).AllocatorInstance.Data,(this->Controls).ArrayNum
            );
  pFVar1 = (this->Controls).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 147bc75c0

/* WARNING: Removing unreachable block (ram,0x000147bc7ae6) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UTouchInterface::Activate(UTouchInterface *this,TSharedPtr<SVirtualJoystick,1> *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  UTexture *pUVar3;
  UTexture *pUVar4;
  double dVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FDeprecateSlateVector2D FVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TObjectPtr<UObject>_u_0 TVar16;
  TObjectPtr<UObject>_u_0 TVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  TReferenceControllerBase<1> *pTVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  TSharedRef<FDeferredCleanupSlateBrush,1> *pTVar32;
  uint uVar33;
  int iVar34;
  FDeferredCleanupSlateBrush **ppFVar35;
  longlong lVar36;
  FDeferredCleanupSlateBrush *pFVar37;
  FDeferredCleanupSlateBrush *pFVar38;
  FDeferredCleanupSlateBrush *pFVar39;
  longlong lVar40;
  uint local_res18;
  TArray<SVirtualJoystick::FControlInfo,TSizedDefaultAllocator<32>_> local_248;
  undefined8 local_238;
  FDeferredCleanupSlateBrush *local_230;
  TReferenceControllerBase<1> *local_228;
  FDeferredCleanupSlateBrush *local_220;
  TReferenceControllerBase<1> *local_218;
  TReferenceControllerBase<1> *local_210;
  TReferenceControllerBase<1> *local_208;
  FScriptContainerElement local_1f8;
  UTexture *local_1f0;
  UTexture *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  FDeprecateSlateVector2D FStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  TObjectPtr<UObject>_u_0 local_1b0;
  TObjectPtr<UObject>_u_0 TStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined8 local_188;
  TReferenceControllerBase<1> *local_180;
  undefined8 local_178;
  undefined8 local_170;
  TReferenceControllerBase<1> *local_168;
  FDeferredCleanupSlateBrush *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  FDeferredCleanupSlateBrush *local_148;
  undefined8 uStack_140;
  FMargin local_138;
  FLinearColor_u_0 local_128;
  TSharedRef<FDeferredCleanupSlateBrush,1> local_118;
  FMargin local_108;
  FLinearColor_u_0 local_f8;
  TSharedRef<FDeferredCleanupSlateBrush,1> local_e8;
  undefined8 local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  TVector2<float>_u_0 TStack_c0;
  
  bVar23 = false;
  bVar22 = false;
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  bVar29 = false;
  if (param_1->Object != (SVirtualJoystick *)0x0) {
    SVirtualJoystick::SetGlobalParameters
              (param_1->Object,this->ActiveOpacity,this->InactiveOpacity,this->TimeUntilDeactive,
               this->TimeUntilReset,this->ActivationDelay,this->bPreventRecenter,this->StartupDelay)
    ;
    dVar26 = __real_3ddb7cdfc0000000;
    uVar25 = _UNK_15076b1f8;
    uVar24 = ___xmm_3f8000003f8000003f8000003f800000;
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    local_res18 = 0;
    if (0 < (this->Controls).ArrayNum) {
      lVar40 = 0;
      do {
        uVar30 = 0;
        if ((int)local_res18 < (this->Controls).ArrayNum) {
          uVar30 = ~local_res18 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (this->Controls).AllocatorInstance.Data;
        FVar1 = pFVar2[lVar40];
        pUVar3 = *(UTexture **)(pFVar2 + lVar40 + 8);
        local_1f8 = FVar1;
        local_1f0 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        pUVar4 = *(UTexture **)(pFVar2 + lVar40 + 0x10);
        local_1e8 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_238 = *(undefined8 *)(pFVar2 + lVar40 + 0x70);
        uVar10 = *(undefined8 *)(pFVar2 + lVar40 + 0x18);
        uVar11 = *(undefined8 *)(pFVar2 + lVar40 + 0x18 + 8);
        dVar5 = *(double *)(pFVar2 + lVar40 + 0x68);
        uVar12 = *(undefined8 *)(pFVar2 + lVar40 + 0x28);
        FVar13 = *(FDeprecateSlateVector2D *)(pFVar2 + lVar40 + 0x28 + 8);
        uVar14 = *(undefined8 *)(pFVar2 + lVar40 + 0x38);
        uVar15 = *(undefined8 *)(pFVar2 + lVar40 + 0x38 + 8);
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar40 + 0x78);
        TVar16 = *(TObjectPtr<UObject>_u_0 *)(pFVar2 + lVar40 + 0x48);
        TVar17 = ((TObjectPtr<UObject>_u_0 *)(pFVar2 + lVar40 + 0x48))[1];
        dVar8 = *(double *)(pFVar2 + lVar40 + 0x58);
        dVar9 = *(double *)(pFVar2 + lVar40 + 0x58 + 8);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_178 = *(undefined8 *)(pFVar2 + lVar40 + 0x80);
        local_170 = *(undefined8 *)(pFVar2 + lVar40 + 0x88);
        local_168 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar40 + 0x90);
        if (local_168 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_168->SharedReferenceCount = (atomic<int>)((int)local_168->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e0 = uVar10;
        uStack_1d8 = uVar11;
        local_1d0 = uVar12;
        FStack_1c8 = FVar13;
        local_1c0 = uVar14;
        uStack_1b8 = uVar15;
        local_1b0 = TVar16;
        TStack_1a8 = TVar17;
        local_1a0 = dVar8;
        dStack_198 = dVar9;
        local_190 = dVar5;
        local_188 = local_238;
        local_180 = pTVar6;
        if (local_248.ArrayNum == local_248.ArrayMax) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a8,&local_248.AllocatorInstance,&local_248.ArrayMax);
          local_248.ArrayNum = iVar31;
        }
        iVar31 = local_248.ArrayNum;
        lVar36 = (longlong)local_248.ArrayNum;
        uVar33 = ~local_248.ArrayNum;
        iVar34 = local_248.ArrayNum + 1;
        local_248.ArrayNum = iVar34;
        uVar30 = 0;
        if (iVar31 < iVar34) {
          uVar30 = uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar39 = (FDeferredCleanupSlateBrush *)0x0;
        pFVar37 = (FDeferredCleanupSlateBrush *)(local_248.AllocatorInstance.Data + lVar36 * 0xa8);
        pFVar38 = pFVar39;
        if (pFVar37 != (FDeferredCleanupSlateBrush *)0x0) {
          pFVar37->_padding_ = 0;
          pFVar37->_padding_ = 0;
          pFVar37->_padding_ = 0;
          (pFVar37->InternalBrush)._padding_ = 0;
          *(undefined1 *)&pFVar37->_padding_ = 0;
          (pFVar37->InternalBrush).TintColor.SpecifiedColor.field0_0x0._s_0 =
               (FLinearColor_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          *(TVector2<double>_u_0 *)&(pFVar37->InternalBrush).TintColor.ColorUseRule =
               (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          (pFVar37->InternalBrush).Margin =
               (FMargin)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          *(TVector2<double>_u_0 *)&(pFVar37->InternalBrush).ResourceObject =
               (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          (pFVar37->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = 1.0;
          (pFVar37->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z = 1.0;
          (pFVar37->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = 0.0;
          *(undefined8 *)&(pFVar37->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
               0;
          *(undefined8 *)
           ((longlong)&(pFVar37->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8)
               = 0;
          *(undefined8 *)&(pFVar37->InternalBrush).OutlineSettings.Color.ColorUseRule = 0;
          (pFVar37->InternalBrush).OutlineSettings.RoundingType = '\0';
          (pFVar37->InternalBrush).OutlineSettings.bUseBrushTransparency = false;
          *(undefined6 *)&(pFVar37->InternalBrush).OutlineSettings.field_0x3a = 0;
          (pFVar37->InternalBrush).UVRegion.Min.field0_0x0 = (TVector2<float>_u_0)0x0;
          pFVar38 = pFVar37;
        }
        *(FScriptContainerElement *)&pFVar38->_padding_ = FVar1;
        if (pUVar3 == (UTexture *)0x0) {
          ppFVar35 = &local_158;
          bVar18 = true;
          local_158 = (FDeferredCleanupSlateBrush *)0x0;
          pTStack_150 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_138.Left = 0.0;
          local_138.Top = 0.0;
          local_138.Right = 0.0;
          local_138.Bottom = 0.0;
          bVar20 = true;
          bVar19 = true;
          bVar29 = true;
          local_128._0_8_ = uVar24;
          local_128._8_8_ = uVar25;
          pTVar32 = FDeferredCleanupSlateBrush::CreateBrush
                              (&local_118,pUVar3,(FLinearColor *)&local_128._s_0,NoTile,FullColor,
                               Image,&local_138);
          local_228 = (pTVar32->SharedReferenceCount).ReferenceController;
          pFVar39 = pTVar32->Object;
          if (local_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_228->SharedReferenceCount =
                 (atomic<int>)((int)local_228->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            local_228->SharedReferenceCount =
                 (atomic<int>)((int)local_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          ppFVar35 = &local_230;
          local_230 = pFVar39;
          local_210 = local_228;
        }
        pTVar27 = local_210;
        if ((FDeferredCleanupSlateBrush **)&pFVar38->_padding_ != ppFVar35) {
          pFVar38->_padding_ = (longlong)pFVar39;
          *ppFVar35 = (FDeferredCleanupSlateBrush *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pFVar38->_padding_,
                     (FSharedReferencer<1> *)(ppFVar35 + 1));
        }
        if (bVar18) {
          bVar18 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_150);
        }
        if (bVar19) {
          bVar19 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228);
        }
        if (bVar20) {
          bVar20 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar27);
        }
        if (bVar29) {
          bVar29 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.SharedReferenceCount.ReferenceController);
        }
        if (pUVar4 == (UTexture *)0x0) {
          ppFVar35 = &local_148;
          pFVar39 = (FDeferredCleanupSlateBrush *)0x0;
          local_148 = (FDeferredCleanupSlateBrush *)0x0;
          uStack_140 = 0;
        }
        else {
          local_108.Left = 0.0;
          local_108.Top = 0.0;
          local_108.Right = 0.0;
          local_108.Bottom = 0.0;
          bVar23 = true;
          bVar22 = true;
          bVar21 = true;
          local_f8._0_8_ = uVar24;
          local_f8._8_8_ = uVar25;
          pTVar32 = FDeferredCleanupSlateBrush::CreateBrush
                              (&local_e8,pUVar4,(FLinearColor *)&local_f8._s_0,NoTile,FullColor,
                               Image,&local_108);
          local_218 = (pTVar32->SharedReferenceCount).ReferenceController;
          pFVar39 = pTVar32->Object;
          if (local_218 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_218->SharedReferenceCount =
                 (atomic<int>)((int)local_218->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            local_218->SharedReferenceCount =
                 (atomic<int>)((int)local_218->SharedReferenceCount + 1);
            UNLOCK();
          }
          ppFVar35 = &local_220;
          local_220 = pFVar39;
          local_208 = local_218;
        }
        pTVar27 = local_208;
        if ((FDeferredCleanupSlateBrush **)&pFVar38->_padding_ != ppFVar35) {
          pFVar38->_padding_ = (longlong)pFVar39;
          *ppFVar35 = (FDeferredCleanupSlateBrush *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pFVar38->InternalBrush,
                     (FSharedReferencer<1> *)(ppFVar35 + 1));
        }
        if (bVar21) {
          bVar21 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_218);
        }
        if (bVar22) {
          bVar22 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar27);
        }
        if (bVar23) {
          bVar23 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        *(undefined8 *)&(pFVar38->InternalBrush).TintColor.SpecifiedColor.field0_0x0 = uVar10;
        *(undefined8 *)((longlong)&(pFVar38->InternalBrush).TintColor.SpecifiedColor.field0_0x0 + 8)
             = uVar11;
        *(undefined8 *)&(pFVar38->InternalBrush).TintColor.ColorUseRule = uVar12;
        (pFVar38->InternalBrush).ImageSize = FVar13;
        (pFVar38->InternalBrush).Margin.Left = (float)(int)uVar14;
        (pFVar38->InternalBrush).Margin.Top = (float)(int)((ulonglong)uVar14 >> 0x20);
        (pFVar38->InternalBrush).Margin.Right = (float)(int)uVar15;
        (pFVar38->InternalBrush).Margin.Bottom = (float)(int)((ulonglong)uVar15 >> 0x20);
        if (dVar26 < dVar9 * dVar9 + dVar8 * dVar8) {
          (pFVar38->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar8;
          (pFVar38->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z = dVar9;
        }
        (pFVar38->InternalBrush).ResourceObject.field0_0x0 = TVar16;
        (pFVar38->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X = (double)TVar17;
        (pFVar38->InternalBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar5;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d8 = *(undefined8 *)
                    &(pFVar38->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0;
        pTStack_d0 = *(TReferenceControllerBase<1> **)
                      ((longlong)
                       &(pFVar38->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8
                      );
        *(undefined8 *)&(pFVar38->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
             local_238;
        *(TReferenceControllerBase<1> **)
         ((longlong)&(pFVar38->InternalBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) =
             local_180;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
        *(undefined8 *)&(pFVar38->InternalBrush).OutlineSettings.Color.ColorUseRule = local_178;
        if (local_168 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_168->SharedReferenceCount = (atomic<int>)((int)local_168->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c8._0_1_ = (pFVar38->InternalBrush).OutlineSettings.RoundingType;
        local_c8._1_1_ = (pFVar38->InternalBrush).OutlineSettings.bUseBrushTransparency;
        local_c8._2_6_ = *(undefined6 *)&(pFVar38->InternalBrush).OutlineSettings.field_0x3a;
        TStack_c0 = (pFVar38->InternalBrush).UVRegion.Min.field0_0x0;
        (pFVar38->InternalBrush).OutlineSettings.RoundingType =
             (TEnumAsByte<ESlateBrushRoundingType::Type>)(undefined1)local_170;
        (pFVar38->InternalBrush).OutlineSettings.bUseBrushTransparency = (bool)local_170._1_1_;
        *(undefined6 *)&(pFVar38->InternalBrush).OutlineSettings.field_0x3a = local_170._2_6_;
        *(TReferenceControllerBase<1> **)(pFVar38->InternalBrush).UVRegion.Min.field0_0x0.XY =
             local_168;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TStack_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180);
        lVar40 = lVar40 + 0x98;
        local_res18 = local_res18 + 1;
      } while ((int)local_res18 < (this->Controls).ArrayNum);
    }
    if ((param_1->Object == (SVirtualJoystick *)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SVirtualJoystick::SetControls(param_1->Object,&local_248);
    DestructItems<SVirtualJoystick::FControlInfo,int>
              ((FControlInfo *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
    if ((FControlInfo *)local_248.AllocatorInstance.Data != (FControlInfo *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 147be60a0

UClass * __cdecl UTouchInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTouchInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TouchInterface",
               &Z_Registration_Info_UClass_UTouchInterface.InnerSingleton,
               StaticRegisterNativesUTouchInterface,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTouchInterface>,InternalVTableHelperCtorCaller<UTouchInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTouchInterface.InnerSingleton;
}

// StaticRegisterNativesUTouchInterface @ 147c03850

void __cdecl UTouchInterface::StaticRegisterNativesUTouchInterface(void)

{
  return;
}

