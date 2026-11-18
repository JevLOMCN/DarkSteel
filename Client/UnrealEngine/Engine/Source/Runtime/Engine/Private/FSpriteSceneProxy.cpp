// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSpriteSceneProxy @ 1477ee1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSpriteSceneProxy * __thiscall
FSpriteSceneProxy::FSpriteSceneProxy
          (FSpriteSceneProxy *this,UBillboardComponent *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UTexture2D *pUVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UClass *pUVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  uVar9 = _UNK_15061cc8c;
  uVar8 = _UNK_15061cc88;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(undefined ***)this = &___7FSpriteSceneProxy__6B_;
  this->ScreenSize = param_1->ScreenSize;
  this->U = param_1->U;
  this->V = param_1->V;
  uVar1 = *(undefined4 *)&this->field_0x2d0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  this->field_0x7d = this->field_0x7d & 0xfe;
  *(uint *)&this->field_0x2d0 = (ZPULL(uVar1,0,1) ^ param_1->bIsScreenSizeScaled) & 1 ^ uVar1;
  uVar20 = uVar6 & (uint)param_1->_padding_;
  uVar22 = uVar7 & *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar23 = uVar8 & (uint)param_1->_padding_;
  uVar24 = uVar9 & *(uint *)((longlong)&param_1->_padding_ + 4);
  auVar25._0_8_ =
       CONCAT44(uVar7 & *(uint *)((longlong)&param_1->_padding_ + 4),
                uVar6 & (uint)param_1->_padding_);
  auVar25._8_4_ = uVar8 & (uint)param_1->_padding_;
  auVar25._12_4_ = uVar9 & *(uint *)((longlong)&param_1->_padding_ + 4);
  auVar18._4_4_ = uVar22;
  auVar18._0_4_ = uVar20;
  auVar18._8_4_ = uVar23;
  auVar18._12_4_ = uVar24;
  auVar19 = blendpd(auVar18,auVar25,2);
  auVar11._8_4_ = auVar25._8_4_;
  auVar11._0_8_ = auVar25._0_8_;
  auVar11._12_4_ = auVar25._12_4_;
  auVar14._4_4_ = uVar22;
  auVar14._0_4_ = uVar20;
  auVar14._8_4_ = uVar23;
  auVar14._12_4_ = uVar24;
  auVar11 = maxpd(auVar11,auVar19);
  auVar15._8_8_ = auVar25._8_8_;
  auVar15._0_8_ = auVar14._8_8_;
  maxpd(auVar11,auVar15);
  auVar16._4_4_ = uVar22;
  auVar16._0_4_ = uVar20;
  auVar16._8_4_ = uVar23;
  auVar16._12_4_ = uVar24;
  auVar19._4_4_ = uVar22;
  auVar19._0_4_ = uVar20;
  auVar19._8_4_ = uVar23;
  auVar19._12_4_ = uVar24;
  auVar12._8_8_ = auVar25._0_8_;
  auVar12._0_8_ = auVar19._8_8_;
  auVar11 = maxpd(auVar16,auVar12);
  auVar26._12_4_ = uVar22;
  auVar26._8_4_ = uVar20;
  auVar26._0_8_ = auVar25._0_8_;
  auVar11 = maxpd(auVar11,auVar26);
  this->Scale = (float)auVar11._0_8_ * param_2 * __real_3e800000;
  this->OpacityMaskRefVal = param_1->OpacityMaskRefVal;
  pUVar4 = (param_1->Sprite).field0_0x0.DebugPtr;
  if (pUVar4 == (UTexture2D *)0x0) {
    this->Texture = (UTexture2D *)0x0;
    fVar13 = 0.0;
    this->ComponentUL = 0.0;
  }
  else {
    this->Texture = pUVar4;
    this->ComponentUL = param_1->UL;
    fVar13 = param_1->VL;
  }
  this->ComponentVL = fVar13;
  lVar5 = param_1->_padding_;
  if (lVar5 != 0) {
    pUVar10 = Z_Construct_UClass_ALight_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         == &pUVar10->_padding_)) && (lVar5 = *(longlong *)(lVar5 + 0x2c0), lVar5 != 0)) {
      fVar13 = (float)*(byte *)(lVar5 + 0x279) * __real_3b808081;
      fVar17 = (float)*(byte *)(lVar5 + 0x278) * __real_3b808081;
      fVar21 = (float)*(byte *)(lVar5 + 0x27b) * __real_3b808081;
      (this->Color).field0_0x0._s_0.R = (float)*(byte *)(lVar5 + 0x27a) * __real_3b808081;
      (this->Color).field0_0x0._s_0.G = fVar13;
      (this->Color).field0_0x0._s_0.B = fVar17;
      (this->Color).field0_0x0._s_0.A = fVar21;
      (this->Color).field0_0x0._s_0.A = 255.0;
    }
    this->bIsActorLocked = 0;
  }
  return this;
}

// GetDynamicMeshElements @ 147839160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteSceneProxy::GetDynamicMeshElements
          (FSpriteSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  double dVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  float fVar8;
  FSceneView *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  ESceneDepthPriorityGroup EVar13;
  uint uVar14;
  FName *pFVar15;
  TStatIdData *pTVar16;
  TVector4<double> *pTVar17;
  FPrimitiveDrawInterface *pFVar18;
  FLinearColor *pFVar19;
  undefined8 *puVar20;
  byte bVar21;
  int iVar22;
  FName FVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_168;
  undefined8 uStack_160;
  FSceneView *local_158;
  uint local_150;
  FColor_u_0 local_14c;
  FName local_148;
  longlong local_140;
  FName local_138;
  FName local_130;
  FName local_120;
  FName local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  TVector4<double> local_f8 [6];
  
  uVar24 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_SpriteSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_120,"STAT_SpriteSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_SpriteSceneProxy_GetDynamicMeshElements,*pFVar15,
               L"STAT_SpriteSceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_SpriteSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_SpriteSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(local_118,"STAT_SpriteSceneProxy_GetDynamicMeshElements");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_SpriteSceneProxy_GetDynamicMeshElements,*pFVar15,
                         L"STAT_SpriteSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)&pTVar16->Name;
  bVar6 = false;
  bVar5 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_14c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_14c._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar5 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_148.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BillboardComponent.cpp"
                   ,0x71);
        bVar6 = true;
        bVar5 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar10 = true;
      goto LAB_147839305;
    }
  }
  bVar6 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_138 = local_130;
  FVar23 = local_130;
LAB_147839305:
  if ((this->Texture != (UTexture2D *)0x0) &&
     (local_158 = (FSceneView *)UTexture::GetResource((UTexture *)this->Texture),
     local_158 != (FSceneView *)0x0)) {
    fVar33 = this->ComponentUL;
    if (fVar33 == 0.0) {
      uVar12 = (**(code **)(*(longlong *)local_158 + 0x30))(local_158);
      fVar33 = (float)uVar12;
    }
    fVar32 = this->ComponentVL;
    if (fVar32 == 0.0) {
      uVar12 = (**(code **)(*(longlong *)local_158 + 0x38))(local_158);
      fVar32 = (float)uVar12;
    }
    pFVar9 = local_158;
    fVar8 = __real_41200000;
    dVar7 = __real_3ff0000000000000;
    iVar22 = param_1->ArrayNum;
    if (0 < iVar22) {
      local_150 = 1;
      local_140 = 0;
      fVar28 = __real_3b808081;
      fVar29 = __real_3f800000;
      do {
        lVar25 = local_140;
        if ((param_3 & local_150) != 0) {
          uVar12 = 0;
          if ((int)uVar24 < iVar22) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar31 = this->Scale * fVar33;
          fVar30 = this->Scale * fVar32;
          local_158 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar25);
          if ((this->bIsScreenSizeScaled != 0) &&
             (dVar7 != (local_158->ViewMatrices).ProjectionMatrix.M[3][3])) {
            dVar26 = (double)(float)(local_158->ViewMatrices).ProjectionMatrix.M[0][0];
            dVar1 = (local_158->ViewMatrices).ProjectionMatrix.M[1][1];
            if (dVar1 <= dVar26) {
              dVar26 = dVar1;
            }
            fVar28 = __real_3b808081;
            if ((float)dVar26 != 0.0) {
              pTVar17 = FSceneView::WorldToScreen(local_158,local_f8,&this->Origin);
              fVar27 = (float)((double)(this->ScreenSize / (float)dVar26) *
                              (pTVar17->field0_0x0)._s_0.W);
              fVar28 = __real_3b808081;
              if (fVar27 < fVar29) {
                fVar31 = fVar31 * fVar27;
                fVar30 = fVar30 * fVar27;
              }
            }
          }
          local_168 = *(undefined8 *)&(this->Color).field0_0x0;
          uStack_160 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
          bVar21 = this->field_0x79 & 6;
          if ((bVar21 != 0) || ((this->field_0x79 & 0x10) != 0)) {
            pFVar19 = &GEngine->SelectedMaterialColorOverride;
            if (GEngine->bIsOverridingSelectedColor == false) {
              pFVar19 = &GEngine->SelectedMaterialColor;
            }
            fVar29 = GEngine->SelectionHighlightIntensityBillboards;
            uStack_160 = CONCAT44(fVar29 * (pFVar19->field0_0x0)._s_0.A * fVar8 +
                                  FLinearColor::White.field0_0x0._s_0.A,
                                  fVar29 * (pFVar19->field0_0x0)._s_0.B * fVar8 +
                                  FLinearColor::White.field0_0x0._s_0.B);
            local_168 = CONCAT44(fVar29 * (pFVar19->field0_0x0)._s_0.G * fVar8 +
                                 FLinearColor::White.field0_0x0._s_0.G,
                                 fVar29 * (pFVar19->field0_0x0)._s_0.R * fVar8 +
                                 FLinearColor::White.field0_0x0._s_0.R);
          }
          if (this->bIsActorLocked != 0) {
            local_168 = CONCAT44(FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G],
                                 FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R]);
            uStack_160 = CONCAT44((float)FColor::Red.field0_0x0._3_1_ * fVar28,
                                  FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B]);
          }
          local_108 = local_168;
          uStack_100 = uStack_160;
          if (bVar21 == 0) {
            local_108 = *(undefined8 *)&this->field_0x40;
            uStack_100 = *(undefined8 *)&this->field_0x48;
          }
          uStack_160 = CONCAT44(0x3f800000,(undefined4)uStack_160);
          pFVar18 = FMeshElementCollector::GetPDI(param_4,uVar24);
          fVar28 = this->OpacityMaskRefVal;
          fVar29 = this->V;
          fVar27 = this->U;
          pcVar4 = *(code **)(pFVar18->_padding_ + 0x28);
          EVar13 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                             ((FPrimitiveSceneProxy *)this,local_158);
          puVar20 = &local_108;
          if ((local_158->Family->EngineShowFlags).ActorColoration == 0) {
            puVar20 = &local_168;
          }
          (*pcVar4)(pFVar18,&this->Origin,fVar31,fVar30,pFVar9,puVar20,(char)EVar13,fVar27,fVar33,
                    fVar29,fVar32,1,fVar28);
          fVar28 = __real_3b808081;
          fVar29 = __real_3f800000;
        }
        iVar22 = param_1->ArrayNum;
        local_140 = local_140 + 8;
        local_150 = local_150 << 1 | (uint)((int)local_150 < 0);
        uVar24 = uVar24 + 1;
        FVar23 = local_138;
      } while ((int)uVar24 < iVar22);
    }
    uVar24 = 1;
    uVar12 = 0;
    if (0 < iVar22) {
      lVar25 = 0;
      do {
        if ((param_3 & uVar24) != 0) {
          uVar14 = 0;
          if ((int)uVar12 < iVar22) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar21 = this->field_0x79;
          lVar3 = *(longlong *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar25) + 8);
          pFVar18 = FMeshElementCollector::GetPDI(param_4,uVar12);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar18,(FEngineShowFlags *)(lVar3 + 0x48),
                     (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar21 & 6) != 0);
        }
        iVar22 = param_1->ArrayNum;
        uVar12 = uVar12 + 1;
        uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
        lVar25 = lVar25 + 8;
      } while ((int)uVar12 < iVar22);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14783a7c0

uint __thiscall FSpriteSceneProxy::GetMemoryFootprint(FSpriteSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x2e0;
}

// GetTypeHash @ 14783dff0

ulong64 __thiscall FSpriteSceneProxy::GetTypeHash(FSpriteSceneProxy *this)

{
  return 0x1551f61b8;
}

// GetViewRelevance @ 14783e950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FSpriteSceneProxy::GetViewRelevance
          (FSpriteSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar3 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if ((bVar3) && ((param_1->Family->EngineShowFlags).BillboardSprites != 0)) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar4 | 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  bVar3 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 8;
  return __return_storage_ptr__;
}

// OnTransformChanged @ 147847a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteSceneProxy::OnTransformChanged(FSpriteSceneProxy *this,FRHICommandListBase *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&this->field_0x178;
  dVar2 = *(double *)&this->field_0x180;
  (this->Origin).field0_0x0._s_0.X = *(double *)&this->field_0x170;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = dVar2;
  return;
}

