// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e5800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
FGLTFComponentConverter::Convert(FGLTFComponentConverter *this,USceneComponent *param_1)

{
  int *piVar1;
  FGLTFConvertBuilder *this_00;
  FGLTFLogBuilder *this_01;
  FGLTFJsonNode **ppFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong64 uVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  UClass *pUVar17;
  double *pdVar18;
  __m128 *p_Var19;
  FGLTFJsonNode *pFVar20;
  TObjectPtr<USceneComponent>_u_0 TVar21;
  TObjectPtr<USceneComponent>_u_0 *this_02;
  longlong *plVar22;
  longlong lVar23;
  FName FVar24;
  ForAnyElementType FVar25;
  AActor *pAVar26;
  longlong *plVar27;
  TObjectPtr<USceneComponent>_u_0 TVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_308 [32];
  FScriptContainerElement *local_2e8;
  FGLTFJsonNode **local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  FGLTFJsonNode *local_2b8;
  TObjectPtr<USceneComponent>_u_0 local_2b0;
  TObjectPtr<USceneComponent>_u_0 local_2a8;
  AActor *local_2a0;
  float local_298;
  longlong local_288;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float local_270;
  FName local_26c;
  FName local_264;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  FString local_208;
  longlong local_1f8;
  float local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  __m128 local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  __m128 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  __m128 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  __m128 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  TTransform<float> local_108;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1 != (USceneComponent *)0x0) &&
      (local_2b0 = (TObjectPtr<USceneComponent>_u_0)this,
      cVar14 = (**(code **)(param_1->_padding_ + 0x120))(param_1), cVar14 == '\0')) &&
     (pAVar26 = (AActor *)param_1->_padding_, pAVar26 != (AActor *)0x0)) {
    local_2a0 = pAVar26;
    pUVar17 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
    iVar16 = (int)pUVar17->_padding_;
    if ((*(int *)(pAVar26->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar26->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar17->_padding_)) {
      this_00 = *(FGLTFConvertBuilder **)&this->field_0x58;
      bVar15 = FGLTFConvertBuilder::IsSelectedActor(this_00,pAVar26);
      if (bVar15) {
        TVar21.DebugPtr = (USceneComponent *)0x0;
        if (((pAVar26->RootComponent).field0_0x0.DebugPtr == param_1) &&
           (bVar15 = FGLTFConvertBuilder::IsRootActor(this_00,pAVar26), bVar15)) {
          FVar24 = param_1->AttachSocketName;
          bVar15 = true;
          TVar28.DebugPtr = TVar21.DebugPtr;
        }
        else {
          TVar21 = (TObjectPtr<USceneComponent>_u_0)(param_1->AttachParent).field0_0x0.DebugPtr;
          bVar15 = false;
          FVar24 = param_1->AttachSocketName;
          if (TVar21.DebugPtr == (USceneComponent *)0x0) {
            TVar28.DebugPtr = (USceneComponent *)0x0;
          }
          else {
            local_2a8.DebugPtr =
                 (USceneComponent *)
                 TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::GetOrAdd
                           (*(TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> **)
                             (*(longlong *)&this->field_0x58 + 0x8f8),TVar21.DebugPtr,FVar24);
            if (param_1->bAbsoluteScale == '\0') {
              local_1e8 = ((TVar21.DebugPtr)->ComponentToWorld).Scale3D.XY.m128d_f64[0];
              dStack_1e0 = ((TVar21.DebugPtr)->ComponentToWorld).Scale3D.XY.m128d_f64[1];
              dVar4 = ((TVar21.DebugPtr)->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
              local_1d8 = dVar4;
              if (((__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)(local_1e8 - dStack_1e0) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_1e8 - dStack_1e0,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
                  (__real_3f1a36e2e0000000 <
                   (double)CONCAT44((uint)((ulonglong)(local_1e8 - dVar4) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_1e8 - dVar4,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
                 (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dStack_1e0 - dVar4) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dStack_1e0 - dVar4,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
                local_26c = (FName)pAVar26->_padding_;
                this_01 = *(FGLTFLogBuilder **)&this->field_0x58;
                ::FName::ToString(&local_26c,&local_238);
                local_264 = (FName)param_1->_padding_;
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_238.Data.ArrayNum != 0) {
                  FVar25.Data = local_238.Data.AllocatorInstance.Data;
                }
                ::FName::ToString(&local_264,&local_248);
                local_2e8 = (FScriptContainerElement *)dVar4;
                ::FString::PrintfImpl(&local_258,L"X=%3.3f Y=%3.3f Z=%3.3f");
                local_2e8 = FVar25.Data;
                ::FString::PrintfImpl
                          (&local_208,
                           L"Non-uniform parent scale (%s) for component %s (in actor %s) may be represented differently in glTF"
                          );
                FGLTFLogBuilder::LogWarning(this_01,&local_208);
                if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
                if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_258.Data.AllocatorInstance.Data);
                }
                if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_248.Data.AllocatorInstance.Data);
                }
                pAVar26 = local_2a0;
                this = (FGLTFComponentConverter *)local_2b0;
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  pAVar26 = local_2a0;
                  this = (FGLTFComponentConverter *)local_2b0;
                }
              }
            }
            bVar15 = false;
            TVar28 = local_2a8;
          }
        }
        plVar27 = (longlong *)0x0;
        local_168.m128_u64[0] =
             CONCAT44((float)(param_1->ComponentToWorld).Rotation.XY.m128d_f64[1],
                      (float)(param_1->ComponentToWorld).Rotation.XY.m128d_f64[0]);
        local_168.m128_u64[1] =
             CONCAT44((float)(param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1],
                      (float)(param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0]);
        local_158 = (float)(param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
        fStack_154 = (float)(param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
        fStack_150 = (float)(param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
        fStack_14c = (float)(param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
        local_148 = (float)(param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
        fStack_144 = (float)(param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
        fStack_140 = (float)(param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
        fStack_13c = (float)(param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
        if (TVar21.DebugPtr == (USceneComponent *)0x0) {
          local_128 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[0];
          fStack_124 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[1];
          fStack_120 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[2];
          fStack_11c = UE::Math::TTransform<float>::Identity.Translation.m128_f32[3];
          local_118 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[0];
          fStack_114 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[1];
          fStack_110 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[2];
          fStack_10c = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[3];
          local_138 = UE::Math::TTransform<float>::Identity.Rotation;
        }
        else {
          pdVar18 = (double *)
                    (**(code **)((TVar21.DebugPtr)->_padding_ + 0x520))
                              (TVar21.DebugPtr,local_d8,FVar24,0);
          local_198.m128_f32[3] = (float)pdVar18[3];
          local_198.m128_f32[2] = (float)pdVar18[2];
          local_198._0_4_ = (float)*pdVar18;
          local_198._4_4_ = (float)pdVar18[1];
          local_128 = (float)pdVar18[4];
          fStack_124 = (float)pdVar18[5];
          local_118 = (float)pdVar18[8];
          fStack_114 = (float)pdVar18[9];
          fStack_120 = (float)pdVar18[6];
          fStack_11c = (float)pdVar18[7];
          fStack_110 = (float)pdVar18[10];
          fStack_10c = (float)pdVar18[0xb];
          local_188 = local_128;
          fStack_184 = fStack_124;
          fStack_180 = fStack_120;
          fStack_17c = fStack_11c;
          local_178 = local_118;
          fStack_174 = fStack_114;
          fStack_170 = fStack_110;
          fStack_16c = fStack_10c;
          local_138 = local_198;
        }
        if (bVar15) {
          local_1c8.m128_u64[0] = local_168.m128_u64[0];
          local_1c8.m128_u64[1] = local_168.m128_u64[1];
          p_Var19 = &local_1c8;
          local_1b8 = local_158;
          fStack_1b4 = fStack_154;
          fStack_1b0 = fStack_150;
          fStack_1ac = fStack_14c;
          local_1a8 = local_148;
          fStack_1a4 = fStack_144;
          fStack_1a0 = fStack_140;
          fStack_19c = fStack_13c;
        }
        else {
          p_Var19 = &UE::Math::TTransform<float>::GetRelativeTransform
                               ((TTransform<float> *)&local_168,&local_108,
                                (TTransform<float> *)&local_138)->Rotation;
        }
        fVar5 = p_Var19->m128_f32[0];
        fVar6 = *(float *)((longlong)p_Var19 + 4);
        fVar7 = *(float *)((longlong)p_Var19 + 8);
        fVar8 = *(float *)((longlong)p_Var19 + 0xc);
        fVar31 = ((__m128 *)(p_Var19->m128_f32 + 4))->m128_f32[0];
        fVar32 = p_Var19->m128_f32[5];
        uVar13 = ((__m128 *)(p_Var19->m128_f32 + 4))->m128_u64[0];
        fVar9 = p_Var19->m128_f32[6];
        fVar10 = (float)((__m128 *)(p_Var19->m128_i32 + 8))->m128_i32[0];
        fVar11 = p_Var19->m128_f32[9];
        fVar12 = (float)p_Var19->m128_i32[10];
        local_2b8 = FGLTFJsonBuilder::AddNode
                              ((FGLTFJsonBuilder *)((USceneComponent *)this)->_padding_);
        lVar23 = param_1->_padding_;
        if ((lVar23 == 0) || (param_1 != *(USceneComponent **)(lVar23 + 0x1b8))) {
          local_2b0 = (TObjectPtr<USceneComponent>_u_0)param_1->_padding_;
          this_02 = &local_2b0;
        }
        else {
          local_2a8 = *(TObjectPtr<USceneComponent>_u_0 *)(lVar23 + 0x18);
          this_02 = &local_2a8;
        }
        ::FName::ToString((FName *)&this_02->ObjectPtr,&local_228);
        ::FString::operator=(&local_2b8->Name,&local_228);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        fVar33 = *(float *)(*(longlong *)(((USceneComponent *)this)->_padding_ + 0x18) + 0x28);
        local_1f0 = fVar32 * fVar33;
        plVar22 = &local_2b8->_padding_;
        if (local_2b8 == (FGLTFJsonNode *)0xfffffffffffffff0) {
          plVar22 = plVar27;
        }
        local_1f8 = CONCAT44(fVar9 * fVar33,fVar31 * fVar33);
        *plVar22 = local_1f8;
        *(float *)(plVar22 + 1) = local_1f0;
        plVar22 = &local_2b8->_padding_;
        if (local_2b8 == (FGLTFJsonNode *)0xffffffffffffffd8) {
          plVar22 = plVar27;
        }
        fVar31 = fVar6 * fVar6 + fVar5 * fVar5;
        fVar32 = fVar5 * fVar5 + fVar6 * fVar6;
        fVar33 = fVar8 * fVar8 + fVar7 * fVar7;
        fVar34 = fVar7 * fVar7 + fVar8 * fVar8;
        auVar29._0_4_ = fVar33 + fVar31;
        auVar29._4_4_ = fVar34 + fVar32;
        auVar29._8_4_ = fVar31 + fVar33;
        auVar29._12_4_ = fVar32 + fVar34;
        auVar30 = sqrtps(auVar29,auVar29);
        auVar30 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar30);
        uStack_20c = (uint)(auVar30._12_4_ * fVar8) & -(uint)(_UNK_1506895dc <= auVar29._12_4_) |
                     ~-(uint)(_UNK_1506895dc <= auVar29._12_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[3];
        local_218 = ((uint)(auVar30._0_4_ * fVar5) &
                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar29._0_4_) |
                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar29._0_4_) &
                    GlobalVectorConstants::Float0001.m128_u32[0]) ^
                    __xmm_80000000800000008000000080000000;
        uStack_214 = ((uint)(auVar30._8_4_ * fVar7) & -(uint)(_UNK_1506895d8 <= auVar29._8_4_) |
                     ~-(uint)(_UNK_1506895d8 <= auVar29._8_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[2]) ^
                     __xmm_80000000800000008000000080000000;
        uStack_210 = ((uint)(auVar30._4_4_ * fVar6) & -(uint)(_UNK_1506895d4 <= auVar29._4_4_) |
                     ~-(uint)(_UNK_1506895d4 <= auVar29._4_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[1]) ^
                     __xmm_80000000800000008000000080000000;
        *(uint *)plVar22 = local_218;
        *(uint *)((longlong)plVar22 + 4) = uStack_214;
        *(uint *)(plVar22 + 1) = uStack_210;
        *(uint *)((longlong)plVar22 + 0xc) = uStack_20c;
        local_288 = CONCAT44(fVar12,fVar10);
        plVar22 = &local_2b8->_padding_;
        if (local_2b8 == (FGLTFJsonNode *)0xffffffffffffffc0) {
          plVar22 = plVar27;
        }
        *plVar22 = local_288;
        *(float *)(plVar22 + 1) = fVar11;
        local_2a0 = (AActor *)uVar13;
        local_298 = fVar9;
        fStack_280 = fVar11;
        fStack_27c = fVar8;
        local_278 = fVar10;
        fStack_274 = fVar11;
        local_270 = fVar12;
        if (TVar28.DebugPtr != (USceneComponent *)0x0) {
          plVar27 = &(TVar28.DebugPtr)->_padding_;
          ppFVar2 = (FGLTFJsonNode **)*plVar27;
          if ((ppFVar2 <= &local_2b8) &&
             (lVar23 = (longlong)*(int *)((longlong)&(TVar28.DebugPtr)->_padding_ + 4),
             &local_2b8 < ppFVar2 + lVar23)) {
            local_2d0 = (longlong)(int)(TVar28.DebugPtr)->_padding_;
            local_2c8 = 8;
            local_2e8 = (FScriptContainerElement *)&local_2b8;
            local_2e0 = ppFVar2;
            local_2d8 = lVar23;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              pFVar20 = (FGLTFJsonNode *)(*pcVar3)();
              return pFVar20;
            }
          }
          iVar16 = (int)(TVar28.DebugPtr)->_padding_;
          piVar1 = (int *)((longlong)&(TVar28.DebugPtr)->_padding_ + 4);
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)plVar27,piVar1);
          }
          *(int *)&(TVar28.DebugPtr)->_padding_ = iVar16 + 1;
          *(FGLTFJsonNode **)(*plVar27 + (longlong)iVar16 * 8) = local_2b8;
        }
        ConvertComponentSpecialization(this,param_1,pAVar26,local_2b8);
        return local_2b8;
      }
    }
  }
  return (FGLTFJsonNode *)0x0;
}

// ConvertComponentSpecialization @ 14e5ecb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGLTFComponentConverter::ConvertComponentSpecialization
          (FGLTFComponentConverter *this,USceneComponent *param_1,AActor *param_2,
          FGLTFJsonNode *param_3)

{
  int *piVar1;
  TArray<FGLTFJsonNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UStaticMesh *pUVar3;
  FScriptContainerElement *pFVar4;
  USceneComponent *pUVar5;
  TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *pTVar6;
  TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *pTVar7;
  TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *pTVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  __m128 _Var13;
  FGLTFJsonNode *pFVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  UClass *pUVar18;
  FGLTFJsonMesh *pFVar19;
  double *pdVar20;
  FGLTFJsonLightMap *pFVar21;
  USkeletalMesh *pUVar22;
  FGLTFJsonSkin *pFVar23;
  TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *this_00;
  undefined8 *puVar24;
  TGLTFQuaternion<float>_u_0 *pTVar25;
  TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *this_01;
  TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *this_02;
  uint uVar26;
  longlong *plVar27;
  longlong *plVar28;
  AActor *pAVar29;
  FGLTFJsonCamera *pFVar30;
  FName *pFVar31;
  FGLTFJsonLight *pFVar32;
  FGLTFJsonLightIESInstance *pFVar33;
  longlong lVar34;
  undefined1 *puVar35;
  FString *pFVar36;
  longlong *plVar37;
  AActor *pAVar38;
  uint uVar39;
  ForAnyElementType FVar40;
  float fVar41;
  ulong64 uVar42;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulong64 uVar53;
  float fVar54;
  float fVar55;
  undefined1 auStackY_598 [32];
  undefined1 local_548 [8];
  FGLTFJsonNode *local_540;
  FGLTFJsonNode *local_538;
  FGLTFJsonNode *local_530;
  FGLTFJsonNode *local_528;
  FGLTFJsonNode *local_520;
  FGLTFJsonNode *local_518;
  ForAnyElementType local_510;
  undefined8 local_508;
  FGLTFJsonMesh *local_500;
  FString local_4f8;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  __m128 local_4d8;
  __m128 local_4c8;
  FGLTFJsonCamera *local_4b8;
  USceneComponent *local_4b0;
  TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *local_4a8;
  FGLTFJsonLight *local_4a0;
  USceneComponent *local_498;
  TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *local_490;
  FGLTFJsonLightIESInstance *local_488;
  USceneComponent *local_480;
  TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *local_478;
  undefined8 local_470;
  float local_468;
  undefined8 local_464;
  float local_45c;
  undefined8 local_458;
  float local_450;
  undefined8 local_44c;
  int local_444;
  undefined8 local_440;
  float local_438;
  undefined8 local_434;
  int local_42c;
  float local_428;
  float fStack_424;
  float local_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  TRotator<float> local_410;
  TRotator<float> local_404;
  FName local_3f8;
  USceneComponent *local_3f0;
  UStaticMesh *local_3e8;
  FName local_3e0;
  USceneComponent *local_3d8;
  USceneComponent *local_3d0;
  FName local_3c8;
  FName local_3c0;
  USceneComponent *local_3b8;
  USceneComponent *local_3b0;
  USceneComponent *local_3a8;
  FName local_3a0;
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  UCameraComponent *local_388;
  ULightComponent *local_380;
  undefined1 local_378 [8];
  UStaticMesh *local_370;
  FName local_368;
  FGLTFMaterialArray local_360;
  FString local_350;
  FName local_340;
  FGLTFMaterialArray local_338;
  UStaticMesh *local_328;
  uint local_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint local_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  FGLTFMaterialArray local_300;
  FGLTFMaterialArray local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  USceneComponent **local_2a0;
  FGLTFJsonCamera **local_298;
  FString local_290;
  USceneComponent **local_280;
  FGLTFJsonLight **local_278;
  USceneComponent **local_270;
  FGLTFJsonLightIESInstance **local_268;
  longlong local_260;
  float local_258;
  undefined4 local_24c;
  longlong local_248;
  float local_240;
  longlong local_23c;
  float local_234;
  longlong local_230;
  float local_228;
  longlong local_224;
  float local_21c;
  longlong local_218;
  float local_210;
  longlong local_20c;
  float local_204;
  ulong64 local_1f8;
  ulong64 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  __m128 local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  TTransform<double> local_198;
  __m128 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  __m128 local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_598;
  if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xaf) == '\0') {
    if (param_1->bHiddenInGame != '\0') {
      return;
    }
    if ((bool)param_2->bHidden) {
      return;
    }
  }
  pUVar18 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
  iVar16 = (int)pUVar18->_padding_;
  if ((iVar16 <= *(int *)(param_2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar16 * 8)
      == &pUVar18->_padding_)) {
    return;
  }
  pUVar18 = Z_Construct_UClass_APawn_NoRegister();
  iVar16 = (int)pUVar18->_padding_;
  if ((iVar16 <= *(int *)(param_2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar16 * 8)
      == &pUVar18->_padding_)) {
    return;
  }
  if (param_1 == (USceneComponent *)0x0) {
    return;
  }
  pUVar18 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar16 = (int)pUVar18->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8)
      != &pUVar18->_padding_)) {
    pUVar18 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) {
      pUVar18 = Z_Construct_UClass_ULandscapeComponent_NoRegister();
      iVar16 = (int)pUVar18->_padding_;
      if ((iVar16 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar18->_padding_)) {
        local_538 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
        local_3f8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_3f8,&local_2b0);
        ::FString::operator=(&local_538->Name,&local_2b0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        lVar34 = *(longlong *)&this->field_0x58;
        local_3f0 = param_1;
        TSet<ULandscapeComponent_const_*,DefaultKeyFuncs<ULandscapeComponent_const_*,0>,FDefaultSetAllocator>
        ::Emplace<ULandscapeComponent_const_*_const_&>
                  ((TSet<ULandscapeComponent_const_*,DefaultKeyFuncs<ULandscapeComponent_const_*,0>,FDefaultSetAllocator>
                    *)(lVar34 + 0x558),(ULandscapeComponent **)local_390,(bool *)&local_3f0);
        pFVar19 = TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
                  ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
                               **)(lVar34 + 0x870),(ULandscapeComponent *)param_1,
                             (UMaterialInterface *)0x0);
        plVar37 = (longlong *)0x0;
        local_538->Mesh = pFVar19;
        _Var13 = GlobalVectorConstants::Float1110;
        local_4c8 = GlobalVectorConstants::Float0001;
        fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar11 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar48 = GlobalVectorConstants::Float0001.m128_f32[3];
        uVar53 = GlobalVectorConstants::FloatZero.m128_u64[0];
        local_438 = GlobalVectorConstants::FloatZero.m128_f32[2];
        local_42c = GlobalVectorConstants::Float1110.m128_i32[2];
        local_440._0_4_ = GlobalVectorConstants::FloatZero.m128_f32[0];
        local_440._4_4_ = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar49 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
        local_210 = local_440._4_4_ * fVar49;
        plVar28 = &local_538->_padding_;
        if (local_538 == (FGLTFJsonNode *)0xfffffffffffffff0) {
          plVar28 = plVar37;
        }
        local_218 = CONCAT44(local_438 * fVar49,(float)local_440 * fVar49);
        *plVar28 = local_218;
        *(float *)(plVar28 + 1) = local_210;
        fVar49 = fVar11 * fVar11 + fVar10 * fVar10;
        fVar41 = fVar10 * fVar10 + fVar11 * fVar11;
        fVar47 = fVar48 * fVar48 + fVar12 * fVar12;
        fVar54 = fVar12 * fVar12 + fVar48 * fVar48;
        auVar45._0_4_ = fVar47 + fVar49;
        auVar45._4_4_ = fVar54 + fVar41;
        auVar45._8_4_ = fVar49 + fVar47;
        auVar45._12_4_ = fVar41 + fVar54;
        auVar44 = sqrtps(auVar45,auVar45);
        auVar44 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar44);
        uStack_314 = (uint)(auVar44._12_4_ * fVar48) & -(uint)(_UNK_1506895dc <= auVar45._12_4_) |
                     ~-(uint)(_UNK_1506895dc <= auVar45._12_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[3];
        uStack_31c = ((uint)(auVar44._8_4_ * fVar12) & -(uint)(_UNK_1506895d8 <= auVar45._8_4_) |
                     ~-(uint)(_UNK_1506895d8 <= auVar45._8_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[2]) ^
                     __xmm_80000000800000008000000080000000;
        uStack_318 = ((uint)(auVar44._4_4_ * fVar11) & -(uint)(_UNK_1506895d4 <= auVar45._4_4_) |
                     ~-(uint)(_UNK_1506895d4 <= auVar45._4_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[1]) ^
                     __xmm_80000000800000008000000080000000;
        local_320 = ((uint)(auVar44._0_4_ * fVar10) &
                     -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar45._0_4_) |
                    ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar45._0_4_) &
                    GlobalVectorConstants::Float0001.m128_u32[0]) ^
                    __xmm_80000000800000008000000080000000;
        plVar28 = &local_538->_padding_;
        if (local_538 == (FGLTFJsonNode *)0xffffffffffffffd8) {
          plVar28 = plVar37;
        }
        uVar42 = _Var13.m128_u64[0];
        local_434._0_4_ = _Var13.m128_i32[0];
        local_20c = CONCAT44(local_42c,(int)local_434);
        local_434._4_4_ = _Var13.m128_f32[1];
        *(uint *)plVar28 = local_320;
        *(uint *)((longlong)plVar28 + 4) = uStack_31c;
        *(uint *)(plVar28 + 1) = uStack_318;
        *(uint *)((longlong)plVar28 + 0xc) = uStack_314;
        local_204 = local_434._4_4_;
        plVar28 = &local_538->_padding_;
        if (local_538 == (FGLTFJsonNode *)0xffffffffffffffc0) {
          plVar28 = plVar37;
        }
        *plVar28 = local_20c;
        *(float *)(plVar28 + 1) = local_434._4_4_;
        pFVar4 = (param_3->Children).AllocatorInstance.Data;
        local_440 = uVar53;
        local_434 = uVar42;
        if (((pFVar4 <= (FScriptContainerElement *)&local_538) &&
            ((FScriptContainerElement *)&local_538 <
             pFVar4 + (longlong)(param_3->Children).ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (param_3->Children).ArrayNum;
        piVar1 = &(param_3->Children).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_3->Children).AllocatorInstance,piVar1);
        }
        iVar17 = iVar16 + 1;
        lVar34 = (longlong)iVar16;
        local_540 = local_538;
        goto LAB_14e5ee3af;
      }
      pUVar18 = Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
      iVar16 = (int)pUVar18->_padding_;
      if ((iVar16 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar18->_padding_)) {
        pUVar18 = Z_Construct_UClass_ALevelInstance_NoRegister();
        pAVar38 = (AActor *)0x0;
        iVar16 = (int)pUVar18->_padding_;
        if ((*(int *)(param_2->_padding_ + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar18->_padding_)) {
          param_2 = pAVar38;
        }
        local_510.Data = (FScriptContainerElement *)0x0;
        local_508 = 0;
        lVar34 = (**(code **)(param_2[1]._padding_ + 0x78))();
        if ((lVar34 != 0) && (&local_510 != (ForAnyElementType *)(lVar34 + 0xa0))) {
          iVar16 = *(int *)(lVar34 + 0xa8);
          pFVar4 = ((ForAnyElementType *)(lVar34 + 0xa0))->Data;
          local_508 = CONCAT44(local_508._4_4_,iVar16);
          if ((iVar16 != 0) || (local_508._4_4_ != 0)) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,local_508._4_4_,&local_510,iVar16,
                       (int *)((longlong)&local_508 + 4));
            ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
                      (local_510.Data,(TObjectPtr<AActor> *)pFVar4,iVar16);
          }
        }
        fVar12 = _UNK_1506895dc;
        fVar11 = _UNK_1506895d8;
        fVar10 = _UNK_1506895d4;
        fVar49 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
        uVar26 = __xmm_80000000800000008000000080000000;
        iVar16 = (int)local_508;
        local_500 = (FGLTFJsonMesh *)(local_510.Data + (longlong)(int)local_508 * 8);
        FVar40.Data = local_510.Data;
        while( true ) {
          pFVar19 = local_500;
          if ((int)local_508 != iVar16) {
            local_548[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_548);
          }
          if ((FGLTFJsonMesh *)FVar40.Data == pFVar19) break;
          pAVar29 = *(AActor **)FVar40.Data;
          local_528 = FGLTFConvertBuilder::AddUniqueNode
                                (*(FGLTFConvertBuilder **)&this->field_0x58,pAVar29);
          if (local_528 != (FGLTFJsonNode *)0x0) {
            pUVar5 = (pAVar29->RootComponent).field0_0x0.DebugPtr;
            local_108.m128_u64[1] =
                 CONCAT44((float)(pUVar5->ComponentToWorld).Rotation.ZW.m128d_f64[1],
                          (float)(pUVar5->ComponentToWorld).Rotation.ZW.m128d_f64[0]);
            local_108.m128_u64[0] =
                 CONCAT44((float)(pUVar5->ComponentToWorld).Rotation.XY.m128d_f64[1],
                          (float)(pUVar5->ComponentToWorld).Rotation.XY.m128d_f64[0]);
            fStack_f0 = (float)(pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
            fStack_ec = (float)(pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[1];
            local_f8 = (float)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64[0];
            fStack_f4 = (float)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64[1];
            local_e8 = CONCAT44((float)(pUVar5->ComponentToWorld).Scale3D.XY.m128d_f64[1],
                                (float)(pUVar5->ComponentToWorld).Scale3D.XY.m128d_f64[0]);
            uStack_e0 = CONCAT44((float)(pUVar5->ComponentToWorld).Scale3D.ZW.m128d_f64[1],
                                 (float)(pUVar5->ComponentToWorld).Scale3D.ZW.m128d_f64[0]);
            pdVar20 = (double *)
                      (**(code **)(param_1->_padding_ + 0x520))
                                (param_1,local_d8,pUVar5->AttachSocketName,0);
            uStack_1f0 = CONCAT44((float)pdVar20[3],(float)pdVar20[2]);
            local_1f8 = CONCAT44((float)pdVar20[1],(float)*pdVar20);
            local_1e8 = (float)pdVar20[4];
            fStack_1e4 = (float)pdVar20[5];
            local_1d8 = CONCAT44((float)pdVar20[9],(float)pdVar20[8]);
            fStack_1e0 = (float)pdVar20[6];
            fStack_1dc = (float)pdVar20[7];
            uStack_1d0 = CONCAT44((float)pdVar20[0xb],(float)pdVar20[10]);
            local_138.m128_u64[0] = local_1f8;
            local_138.m128_u64[1] = uStack_1f0;
            local_128 = local_1e8;
            fStack_124 = fStack_1e4;
            fStack_120 = fStack_1e0;
            fStack_11c = fStack_1dc;
            local_118 = local_1d8;
            uStack_110 = uStack_1d0;
            UE::Math::TTransform<float>::GetRelativeTransform
                      ((TTransform<float> *)&local_108,(TTransform<float> *)&local_1c8,
                       (TTransform<float> *)&local_138);
            local_428 = local_1b8;
            fStack_424 = fStack_1b4;
            local_420 = fStack_1b0;
            fVar48 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
            local_258 = fStack_1b4 * fVar48;
            pAVar29 = (AActor *)&local_528->_padding_;
            if (local_528 == (FGLTFJsonNode *)0xfffffffffffffff0) {
              pAVar29 = pAVar38;
            }
            local_260 = CONCAT44(fVar48 * fStack_1b0,local_1b8 * fVar48);
            pAVar29->_padding_ = local_260;
            *(float *)&pAVar29->_padding_ = local_258;
            local_4e8 = local_1c8.m128_f32[0];
            fStack_4e4 = local_1c8.m128_f32[1];
            fStack_4e0 = local_1c8.m128_f32[2];
            fStack_4dc = local_1c8.m128_f32[3];
            fVar48 = local_1c8.m128_f32[1] * local_1c8.m128_f32[1] +
                     local_1c8.m128_f32[0] * local_1c8.m128_f32[0];
            fVar41 = local_1c8.m128_f32[0] * local_1c8.m128_f32[0] +
                     local_1c8.m128_f32[1] * local_1c8.m128_f32[1];
            fVar47 = local_1c8.m128_f32[3] * local_1c8.m128_f32[3] +
                     local_1c8.m128_f32[2] * local_1c8.m128_f32[2];
            fVar54 = local_1c8.m128_f32[2] * local_1c8.m128_f32[2] +
                     local_1c8.m128_f32[3] * local_1c8.m128_f32[3];
            auVar46._0_4_ = fVar47 + fVar48;
            auVar46._4_4_ = fVar54 + fVar41;
            auVar46._8_4_ = fVar48 + fVar47;
            auVar46._12_4_ = fVar41 + fVar54;
            auVar44 = sqrtps(auVar46,auVar46);
            auVar44 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar44);
            uStack_304 = (uint)(auVar44._12_4_ * local_1c8.m128_f32[3]) &
                         -(uint)(fVar12 <= auVar46._12_4_) |
                         ~-(uint)(fVar12 <= auVar46._12_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[3];
            local_310 = ((uint)(auVar44._0_4_ * local_1c8.m128_f32[0]) &
                         -(uint)(fVar49 <= auVar46._0_4_) |
                        ~-(uint)(fVar49 <= auVar46._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]) ^ uVar26;
            pAVar29 = (AActor *)&local_528->_padding_;
            if (local_528 == (FGLTFJsonNode *)0xffffffffffffffd8) {
              pAVar29 = pAVar38;
            }
            uStack_30c = ((uint)(auVar44._8_4_ * local_1c8.m128_f32[2]) &
                          -(uint)(fVar11 <= auVar46._8_4_) |
                         ~-(uint)(fVar11 <= auVar46._8_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[2]) ^ uVar26;
            uStack_308 = ((uint)(auVar44._4_4_ * local_1c8.m128_f32[1]) &
                          -(uint)(fVar10 <= auVar46._4_4_) |
                         ~-(uint)(fVar10 <= auVar46._4_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[1]) ^ uVar26;
            *(uint *)&pAVar29->_padding_ = local_310;
            *(uint *)((longlong)&pAVar29->_padding_ + 4) = uStack_30c;
            *(uint *)&pAVar29->_padding_ = uStack_308;
            *(uint *)((longlong)&pAVar29->_padding_ + 4) = uStack_304;
            local_41c = local_1a8;
            uStack_418 = uStack_1a4;
            pAVar29 = (AActor *)&local_528->_padding_;
            if (local_528 == (FGLTFJsonNode *)0xffffffffffffffc0) {
              pAVar29 = pAVar38;
            }
            local_414 = uStack_1a0;
            pAVar29->_padding_ = CONCAT44(uStack_1a0,local_1a8);
            *(undefined4 *)&pAVar29->_padding_ = uStack_1a4;
            local_24c = uStack_1a4;
            if (local_528 != (FGLTFJsonNode *)0x0) {
              pTVar2 = &param_3->Children;
              pFVar4 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_528) &&
                  ((FScriptContainerElement *)&local_528 <
                   pFVar4 + (longlong)(param_3->Children).ArrayMax * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar17 = (param_3->Children).ArrayNum;
              piVar1 = &(param_3->Children).ArrayMax;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar1);
              }
              (param_3->Children).ArrayNum = iVar17 + 1;
              *(FGLTFJsonNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 8) =
                   local_528;
            }
          }
          FVar40.Data = FVar40.Data + 8;
        }
        if (local_510.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_510.Data);
        return;
      }
      pUVar18 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar16 = (int)pUVar18->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar18->_padding_)) {
        pUVar18 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar16 = (int)pUVar18->_padding_;
        if ((iVar16 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
            &pUVar18->_padding_)) {
          local_2f0._0_8_ = 0;
          local_2f0._8_8_ = 0;
          pFVar19 = FGLTFConvertBuilder::AddUniqueMesh
                              (*(FGLTFConvertBuilder **)&this->field_0x58,
                               (USkeletalMeshComponent *)param_1,&local_2f0,-1);
          param_3->Mesh = pFVar19;
          lVar34 = *(longlong *)&this->field_0x58;
          if (*(char *)(*(longlong *)(lVar34 + 0x18) + 0x9e) == '\0') {
            return;
          }
          pUVar22 = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)param_1);
          if (pUVar22 == (USkeletalMesh *)0x0) {
            param_3->Skin = (FGLTFJsonSkin *)0x0;
            return;
          }
          pFVar23 = TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
                              (*(TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>
                                 **)(lVar34 + 0x8c0),param_3,pUVar22);
          param_3->Skin = pFVar23;
          if (pFVar23 == (FGLTFJsonSkin *)0x0) {
            return;
          }
          if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa3) == '\0') {
            return;
          }
          TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::
          GetOrAdd(*(TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>
                     **)(*(longlong *)&this->field_0x58 + 0x8d0),param_3,
                   (USkeletalMeshComponent *)param_1);
          return;
        }
        pUVar18 = Z_Construct_UClass_UCameraComponent_NoRegister();
        iVar16 = (int)pUVar18->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar18->_padding_)) {
          bVar15 = UObjectBaseUtility::IsA<ULightComponent>((UObjectBaseUtility *)param_1);
          if (!bVar15) {
            return;
          }
          if (*(char *)((*(FGLTFJsonBuilder **)&this->field_0x58)->_padding_ + 0xb0) == '\0') {
            return;
          }
          local_520 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
          lVar34 = param_1->_padding_;
          if ((lVar34 == 0) || (param_1 != *(USceneComponent **)(lVar34 + 0x1b8))) {
            local_3c0 = (FName)param_1->_padding_;
            pFVar31 = &local_3c0;
          }
          else {
            local_3c8 = *(FName *)(lVar34 + 0x18);
            pFVar31 = &local_3c8;
          }
          ::FName::ToString(pFVar31,&local_2d0);
          ::FString::ConcatCF(&local_290,L"LightNode_",&local_2d0);
          ::FString::operator=(&local_520->Name,&local_290);
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_404.Pitch = 0.0;
            local_404.Yaw = 90.0;
            local_404.Roll = 0.0;
            FGLTFCoreUtilities::ConvertRotation(&Rotation,&local_404);
            _Init_thread_footer(&::_TSS0);
          }
          pTVar25 = (TGLTFQuaternion<float>_u_0 *)&local_520->_padding_;
          if (local_520 == (FGLTFJsonNode *)0xffffffffffffffd8) {
            pTVar25 = (TGLTFQuaternion<float>_u_0 *)0x0;
          }
          pTVar25->_s_0 = (TGLTFQuaternion<float>_u_0_s_0)Rotation.field0_0x0;
          lVar34 = *(longlong *)&this->field_0x58;
          local_3b8 = param_1;
          TSet<ULightComponent_const_*,DefaultKeyFuncs<ULightComponent_const_*,0>,FDefaultSetAllocator>
          ::Emplace<ULightComponent_const_*_const_&>
                    ((TSet<ULightComponent_const_*,DefaultKeyFuncs<ULightComponent_const_*,0>,FDefaultSetAllocator>
                      *)(lVar34 + 0x738),&local_380,(bool *)&local_3b8);
          pTVar7 = *(TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> **)(lVar34 + 0x928);
          local_4b0 = param_1;
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,&local_4b0);
          local_3b0 = local_4b0;
          uVar26 = ((uint)((ulonglong)local_4b0 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_4b0 >> 4)) * -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          uVar26 = uVar26 >> 0x10 ^ uVar26;
          if (*(int *)&(pTVar7->CachedOutputs).field_0x8 !=
              *(int *)&(pTVar7->CachedOutputs).field_0x34) {
            puVar35 = *(undefined1 **)&(pTVar7->CachedOutputs).field_0x40;
            if (puVar35 == (undefined1 *)0x0) {
              puVar35 = &(pTVar7->CachedOutputs).field_0x38;
            }
            iVar16 = *(int *)(puVar35 +
                             (ulonglong)(*(int *)&(pTVar7->CachedOutputs).field_0x48 - 1U & uVar26)
                             * 4);
            if (iVar16 != -1) {
              lVar34 = *(longlong *)&pTVar7->CachedOutputs;
              do {
                if (*(USceneComponent **)(lVar34 + (longlong)iVar16 * 0x18) == local_4b0) {
                  if (((iVar16 != -1) && (lVar34 = lVar34 + (longlong)iVar16 * 0x18, lVar34 != 0))
                     && (puVar24 = (undefined8 *)(lVar34 + 8), puVar24 != (undefined8 *)0x0)) {
                    pFVar32 = (FGLTFJsonLight *)*puVar24;
                    goto LAB_14e5ee1f8;
                  }
                  break;
                }
                iVar16 = *(int *)(lVar34 + 0x10 + (longlong)iVar16 * 0x18);
              } while (iVar16 != -1);
            }
          }
          local_4a8 = pTVar7;
          this_01 = UE::Core::Private::
                    DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>_*>
                              (&local_4a8);
          local_4a0 = (FGLTFJsonLight *)
                      TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64>::
                      _vcall__16__flat______
                                ((TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64>
                                  *)this_01);
          local_280 = &local_3b0;
          local_278 = &local_4a0;
          TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLight_*_const_&>_>
                    ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*,0>,FDefaultSetAllocator>
                      *)&pTVar7->CachedOutputs,(int)&local_380 + 4,
                     (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLight_*_const_&>
                      *)(ulonglong)uVar26,(bool *)&local_280);
          pFVar32 = local_4a0;
LAB_14e5ee1f8:
          local_520->Light = pFVar32;
          if (param_1[1].CachedLevelCollection != (FLevelCollection *)0x0) {
            pTVar8 = *(TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> **)
                      (*(longlong *)&this->field_0x58 + 0x938);
            local_498 = param_1;
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,&local_498);
            local_3a8 = local_498;
            uVar26 = ((uint)((ulonglong)local_498 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_498 >> 4)) * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            uVar26 = uVar26 >> 0x10 ^ uVar26;
            if (*(int *)&(pTVar8->CachedOutputs).field_0x8 !=
                *(int *)&(pTVar8->CachedOutputs).field_0x34) {
              puVar35 = *(undefined1 **)&(pTVar8->CachedOutputs).field_0x40;
              if (puVar35 == (undefined1 *)0x0) {
                puVar35 = &(pTVar8->CachedOutputs).field_0x38;
              }
              iVar16 = *(int *)(puVar35 +
                               (ulonglong)
                               (*(int *)&(pTVar8->CachedOutputs).field_0x48 - 1U & uVar26) * 4);
              if (iVar16 != -1) {
                lVar34 = *(longlong *)&pTVar8->CachedOutputs;
                do {
                  if (*(USceneComponent **)(lVar34 + (longlong)iVar16 * 0x18) == local_498) {
                    if (((iVar16 != -1) && (lVar34 = lVar34 + (longlong)iVar16 * 0x18, lVar34 != 0))
                       && (puVar24 = (undefined8 *)(lVar34 + 8), puVar24 != (undefined8 *)0x0)) {
                      pFVar33 = (FGLTFJsonLightIESInstance *)*puVar24;
                      goto LAB_14e5ee30b;
                    }
                    break;
                  }
                  iVar16 = *(int *)(lVar34 + 0x10 + (longlong)iVar16 * 0x18);
                } while (iVar16 != -1);
              }
            }
            local_490 = pTVar8;
            this_02 = UE::Core::Private::
                      DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>_*>
                                (&local_490);
            local_488 = (FGLTFJsonLightIESInstance *)
                        TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64>
                        ::_vcall__16__flat______
                                  ((TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64>
                                    *)this_02);
            local_270 = &local_3a8;
            local_268 = &local_488;
            TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIESInstance_*_const_&>_>
                      ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*,0>,FDefaultSetAllocator>
                        *)&pTVar8->CachedOutputs,(uint)local_378,
                       (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIESInstance_*_const_&>
                        *)(ulonglong)uVar26,(bool *)&local_270);
            pFVar33 = local_488;
LAB_14e5ee30b:
            local_520->LightIESInstance = pFVar33;
          }
          pFVar4 = (param_3->Children).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_520) &&
              ((FScriptContainerElement *)&local_520 <
               pFVar4 + (longlong)(param_3->Children).ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = (param_3->Children).ArrayNum;
          piVar1 = &(param_3->Children).ArrayMax;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(param_3->Children).AllocatorInstance,piVar1);
          }
          iVar17 = iVar16 + 1;
          lVar34 = (longlong)iVar16;
          local_540 = local_520;
        }
        else {
          if (*(char *)((*(FGLTFJsonBuilder **)&this->field_0x58)->_padding_ + 0xb1) == '\0') {
            return;
          }
          local_518 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
          lVar34 = param_1->_padding_;
          if ((lVar34 == 0) || (param_1 != *(USceneComponent **)(lVar34 + 0x1b8))) {
            local_3e0 = (FName)param_1->_padding_;
            pFVar31 = &local_3e0;
          }
          else {
            local_3a0 = *(FName *)(lVar34 + 0x18);
            pFVar31 = &local_3a0;
          }
          ::FName::ToString(pFVar31,&local_2e0);
          ::FString::operator=(&local_518->Name,&local_2e0);
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_410.Pitch = 0.0;
            local_410.Yaw = 90.0;
            local_410.Roll = 0.0;
            FGLTFCoreUtilities::ConvertRotation(&Rotation,&local_410);
            _Init_thread_footer(&::_TSS0);
          }
          pTVar25 = (TGLTFQuaternion<float>_u_0 *)&local_518->_padding_;
          if (local_518 == (FGLTFJsonNode *)0xffffffffffffffd8) {
            pTVar25 = (TGLTFQuaternion<float>_u_0 *)0x0;
          }
          pTVar25->_s_0 = (TGLTFQuaternion<float>_u_0_s_0)Rotation.field0_0x0;
          lVar34 = *(longlong *)&this->field_0x58;
          local_3d8 = param_1;
          TSet<UCameraComponent_const_*,DefaultKeyFuncs<UCameraComponent_const_*,0>,FDefaultSetAllocator>
          ::Emplace<UCameraComponent_const_*_const_&>
                    ((TSet<UCameraComponent_const_*,DefaultKeyFuncs<UCameraComponent_const_*,0>,FDefaultSetAllocator>
                      *)(lVar34 + 0x6e8),&local_388,(bool *)&local_3d8);
          pTVar6 = *(TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> **)(lVar34 + 0x920);
          local_480 = param_1;
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,&local_480);
          local_3d0 = local_480;
          uVar26 = ((uint)((ulonglong)local_480 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_480 >> 4)) * -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          uVar26 = uVar26 >> 0x10 ^ uVar26;
          if (*(int *)&(pTVar6->CachedOutputs).field_0x8 !=
              *(int *)&(pTVar6->CachedOutputs).field_0x34) {
            puVar35 = *(undefined1 **)&(pTVar6->CachedOutputs).field_0x40;
            if (puVar35 == (undefined1 *)0x0) {
              puVar35 = &(pTVar6->CachedOutputs).field_0x38;
            }
            iVar16 = *(int *)(puVar35 +
                             (ulonglong)(*(int *)&(pTVar6->CachedOutputs).field_0x48 - 1U & uVar26)
                             * 4);
            if (iVar16 != -1) {
              lVar34 = *(longlong *)&pTVar6->CachedOutputs;
              do {
                if (*(USceneComponent **)(lVar34 + (longlong)iVar16 * 0x18) == local_480) {
                  if (((iVar16 != -1) && (lVar34 = lVar34 + (longlong)iVar16 * 0x18, lVar34 != 0))
                     && (puVar24 = (undefined8 *)(lVar34 + 8), puVar24 != (undefined8 *)0x0)) {
                    pFVar30 = (FGLTFJsonCamera *)*puVar24;
                    goto LAB_14e5edef8;
                  }
                  break;
                }
                iVar16 = *(int *)(lVar34 + 0x10 + (longlong)iVar16 * 0x18);
              } while (iVar16 != -1);
            }
          }
          local_478 = pTVar6;
          this_00 = UE::Core::Private::
                    DereferenceIfNecessary<TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>,TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>_*>
                              (&local_478);
          local_4b8 = (FGLTFJsonCamera *)
                      TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64>::
                      _vcall__16__flat______
                                ((TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64>
                                  *)this_00);
          local_2a0 = &local_3d0;
          local_298 = &local_4b8;
          TSet<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>,TDefaultMapHashableKeyFuncs<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<TTuple<UCameraComponent_const_*>_&&,FGLTFJsonCamera_*_const_&>_>
                    ((TSet<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>,TDefaultMapHashableKeyFuncs<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*,0>,FDefaultSetAllocator>
                      *)&pTVar6->CachedOutputs,(int)&local_388 + 4,
                     (TPairInitializer<TTuple<UCameraComponent_const_*>_&&,FGLTFJsonCamera_*_const_&>
                      *)(ulonglong)uVar26,(bool *)&local_2a0);
          pFVar30 = local_4b8;
LAB_14e5edef8:
          local_518->Camera = pFVar30;
          pFVar4 = (param_3->Children).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_518) &&
              ((FScriptContainerElement *)&local_518 <
               pFVar4 + (longlong)(param_3->Children).ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = (param_3->Children).ArrayNum;
          piVar1 = &(param_3->Children).ArrayMax;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(param_3->Children).AllocatorInstance,piVar1);
          }
          iVar17 = iVar16 + 1;
          lVar34 = (longlong)iVar16;
          local_540 = local_518;
        }
        goto LAB_14e5ee3af;
      }
      lVar34 = *(longlong *)&this->field_0x58;
      pUVar3 = *(UStaticMesh **)&param_1[2].ClientAttachedChildren.ArrayNum;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UStaticMesh *)0x0) goto LAB_14e5edb7d;
LAB_14e5edc0b:
        pFVar19 = (FGLTFJsonMesh *)0x0;
      }
      else {
        if (pUVar3 == (UStaticMesh *)0x0) goto LAB_14e5edc0b;
        UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14e5edb7d:
        local_3e8 = pUVar3;
        TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
        Emplace<UStaticMesh_const_*_const_&>
                  ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                    *)(lVar34 + 0x468),(UStaticMesh **)(local_390 + 4),(bool *)&local_3e8);
        local_300._0_8_ = 0;
        local_300._8_8_ = 0;
        pFVar19 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                  ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                               **)(lVar34 + 0x878),pUVar3,(UStaticMeshComponent *)param_1,&local_300
                             ,-1);
      }
      param_3->Mesh = pFVar19;
      goto LAB_14e5edbd9;
    }
    local_540 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
    local_340 = (FName)param_1->_padding_;
    ::FName::ToString(&local_340,&local_2c0);
    ::FString::operator=(&local_540->Name,&local_2c0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    lVar34 = *(longlong *)&this->field_0x58;
    pUVar3 = *(UStaticMesh **)&param_1[2].ClientAttachedChildren.ArrayNum;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UStaticMesh *)0x0) goto LAB_14e5ed179;
LAB_14e5ed404:
      pFVar19 = (FGLTFJsonMesh *)0x0;
    }
    else {
      if (pUVar3 == (UStaticMesh *)0x0) goto LAB_14e5ed404;
      UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14e5ed179:
      local_328 = pUVar3;
      TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
      Emplace<UStaticMesh_const_*_const_&>
                ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                  *)(lVar34 + 0x508),(UStaticMesh **)(local_398 + 4),(bool *)&local_328);
      local_338._0_8_ = 0;
      local_338._8_8_ = 0;
      pFVar19 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
                ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
                             **)(lVar34 + 0x868),pUVar3,(USplineMeshComponent *)param_1,&local_338,
                           -1);
    }
    plVar37 = (longlong *)0x0;
    local_540->Mesh = pFVar19;
    _Var13 = GlobalVectorConstants::Float1110;
    local_4d8 = GlobalVectorConstants::Float0001;
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar11 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar48 = GlobalVectorConstants::Float0001.m128_f32[3];
    uVar42 = GlobalVectorConstants::FloatZero.m128_u64[0];
    local_450 = GlobalVectorConstants::FloatZero.m128_f32[2];
    local_444 = GlobalVectorConstants::Float1110.m128_i32[2];
    uVar53 = GlobalVectorConstants::Float1110.m128_u64[0];
    fVar49 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
    local_458._0_4_ = GlobalVectorConstants::FloatZero.m128_f32[0];
    local_458._4_4_ = GlobalVectorConstants::FloatZero.m128_f32[1];
    local_228 = fVar49 * local_458._4_4_;
    plVar28 = &local_540->_padding_;
    if (local_540 == (FGLTFJsonNode *)0xfffffffffffffff0) {
      plVar28 = plVar37;
    }
    local_230 = CONCAT44(fVar49 * local_450,fVar49 * (float)local_458);
    *plVar28 = local_230;
    *(float *)(plVar28 + 1) = local_228;
    plVar28 = &local_540->_padding_;
    if (local_540 == (FGLTFJsonNode *)0xffffffffffffffd8) {
      plVar28 = plVar37;
    }
    fVar49 = fVar11 * fVar11 + fVar10 * fVar10;
    fVar41 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar47 = fVar48 * fVar48 + fVar12 * fVar12;
    fVar54 = fVar12 * fVar12 + fVar48 * fVar48;
    auVar44._0_4_ = fVar47 + fVar49;
    auVar44._4_4_ = fVar54 + fVar41;
    auVar44._8_4_ = fVar49 + fVar47;
    auVar44._12_4_ = fVar41 + fVar54;
    auVar45 = sqrtps(auVar44,auVar44);
    auVar45 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar45);
    local_4c8.m128_u32[3] =
         (uint)(auVar45._12_4_ * fVar48) & -(uint)(_UNK_1506895dc <= auVar44._12_4_) |
         ~-(uint)(_UNK_1506895dc <= auVar44._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
    local_4c8.m128_u32[0] =
         ((uint)(auVar45._0_4_ * fVar10) &
          -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar44._0_4_) |
         ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar44._0_4_) &
         GlobalVectorConstants::Float0001.m128_u32[0]) ^ __xmm_80000000800000008000000080000000;
    local_4c8.m128_u32[1] =
         ((uint)(auVar45._8_4_ * fVar12) & -(uint)(_UNK_1506895d8 <= auVar44._8_4_) |
         ~-(uint)(_UNK_1506895d8 <= auVar44._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2]) ^
         __xmm_80000000800000008000000080000000;
    local_4c8.m128_u32[2] =
         ((uint)(auVar45._4_4_ * fVar11) & -(uint)(_UNK_1506895d4 <= auVar44._4_4_) |
         ~-(uint)(_UNK_1506895d4 <= auVar44._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1]) ^
         __xmm_80000000800000008000000080000000;
    *(undefined4 *)plVar28 = local_4c8.m128_f32[0];
    *(undefined4 *)((longlong)plVar28 + 4) = local_4c8.m128_f32[1];
    *(undefined4 *)(plVar28 + 1) = local_4c8.m128_f32[2];
    *(undefined4 *)((longlong)plVar28 + 0xc) = local_4c8.m128_f32[3];
    local_44c._4_4_ = _Var13.m128_f32[1];
    local_44c._0_4_ = _Var13.m128_i32[0];
    local_224 = CONCAT44(local_444,(int)local_44c);
    plVar28 = &local_540->_padding_;
    if (local_540 == (FGLTFJsonNode *)0xffffffffffffffc0) {
      plVar28 = plVar37;
    }
    local_21c = local_44c._4_4_;
    *plVar28 = local_224;
    *(float *)(plVar28 + 1) = local_44c._4_4_;
    pFVar4 = (param_3->Children).AllocatorInstance.Data;
    local_458 = uVar42;
    local_44c = uVar53;
    if (((pFVar4 <= (FScriptContainerElement *)&local_540) &&
        ((FScriptContainerElement *)&local_540 < pFVar4 + (longlong)(param_3->Children).ArrayMax * 8
        )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar16 = (param_3->Children).ArrayNum;
    piVar1 = &(param_3->Children).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(param_3->Children).AllocatorInstance,piVar1);
    }
    iVar17 = iVar16 + 1;
    lVar34 = (longlong)iVar16;
LAB_14e5ee3af:
    (param_3->Children).ArrayNum = iVar17;
    *(FGLTFJsonNode **)((param_3->Children).AllocatorInstance.Data + lVar34 * 8) = local_540;
    return;
  }
  pUVar3 = *(UStaticMesh **)&param_1[2].ClientAttachedChildren.ArrayNum;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UStaticMesh *)0x0)) {
    lVar34 = *(longlong *)&this->field_0x58;
    if (pUVar3 != (UStaticMesh *)0x0) goto LAB_14e5ecc90;
    pFVar19 = (FGLTFJsonMesh *)0x0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    lVar34 = *(longlong *)&this->field_0x58;
LAB_14e5ecc90:
    local_370 = pUVar3;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)(lVar34 + 0x468),(UStaticMesh **)local_398,(bool *)&local_370);
    local_360._0_8_ = 0;
    local_360._8_8_ = 0;
    pFVar19 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
              ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                           **)(lVar34 + 0x878),pUVar3,(UStaticMeshComponent *)0x0,&local_360,-1);
  }
  plVar37 = (longlong *)0x0;
  local_500 = pFVar19;
  iVar16 = UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)param_1)
  ;
  fVar12 = _UNK_1506895dc;
  fVar11 = _UNK_1506895d8;
  fVar10 = _UNK_1506895d4;
  fVar49 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  uVar26 = __xmm_80000000800000008000000080000000;
  plVar28 = plVar37;
  if (0 < iVar16) {
    do {
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
      bVar15 = UInstancedStaticMeshComponent::GetInstanceTransform
                         ((UInstancedStaticMeshComponent *)param_1,(int)plVar28,&local_198,false);
      if (bVar15) {
        local_530 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
        local_530->Mesh = pFVar19;
        local_368 = (FName)param_1->_padding_;
        ::FName::ToString(&local_368,&local_350);
        ::FString::PrintfImpl(&local_4f8,L"%s:%d");
        pFVar14 = local_530;
        pFVar36 = &local_530->Name;
        if (pFVar36 != &local_4f8) {
          pFVar4 = (pFVar36->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pFVar36->Data).AllocatorInstance.Data = local_4f8.Data.AllocatorInstance.Data;
          local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Name).Data.ArrayNum = local_4f8.Data.ArrayNum;
          (pFVar14->Name).Data.ArrayMax = local_4f8.Data.ArrayMax;
          local_4f8.Data.ArrayNum = 0;
          local_4f8.Data.ArrayMax = 0;
        }
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        fVar54 = (float)local_198.Rotation.XY.m128d_f64[0];
        fVar55 = (float)local_198.Rotation.XY.m128d_f64[1];
        fVar48 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
        fVar41 = (float)local_198.Rotation.ZW.m128d_f64[0];
        fVar47 = (float)local_198.Rotation.ZW.m128d_f64[1];
        local_470 = CONCAT44((float)local_198.Translation.XY.m128d_f64[1],
                             (float)local_198.Translation.XY.m128d_f64[0]);
        local_234 = (float)local_198.Scale3D.XY.m128d_f64[1];
        plVar27 = &local_530->_padding_;
        if (local_530 == (FGLTFJsonNode *)0xfffffffffffffff0) {
          plVar27 = plVar37;
        }
        local_468 = (float)local_198.Translation.ZW.m128d_f64[0];
        local_45c = (float)local_198.Scale3D.ZW.m128d_f64[0];
        local_240 = fVar48 * (float)local_198.Translation.XY.m128d_f64[1];
        local_248 = CONCAT44(fVar48 * local_468,
                             fVar48 * (float)local_198.Translation.XY.m128d_f64[0]);
        *plVar27 = local_248;
        *(float *)(plVar27 + 1) = local_240;
        plVar27 = &local_530->_padding_;
        if (local_530 == (FGLTFJsonNode *)0xffffffffffffffd8) {
          plVar27 = plVar37;
        }
        fVar48 = fVar55 * fVar55 + fVar54 * fVar54;
        fVar50 = fVar54 * fVar54 + fVar55 * fVar55;
        fVar51 = fVar47 * fVar47 + fVar41 * fVar41;
        fVar52 = fVar41 * fVar41 + fVar47 * fVar47;
        auVar43._0_4_ = fVar51 + fVar48;
        auVar43._4_4_ = fVar52 + fVar50;
        auVar43._8_4_ = fVar48 + fVar51;
        auVar43._12_4_ = fVar50 + fVar52;
        auVar44 = sqrtps(auVar43,auVar43);
        auVar44 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar44);
        local_4d8.m128_u32[3] =
             (uint)(auVar44._12_4_ * fVar47) & -(uint)(fVar12 <= auVar43._12_4_) |
             ~-(uint)(fVar12 <= auVar43._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
        local_4d8.m128_u32[0] =
             ((uint)(auVar44._0_4_ * fVar54) & -(uint)(fVar49 <= auVar43._0_4_) |
             ~-(uint)(fVar49 <= auVar43._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0]) ^
             uVar26;
        local_4d8.m128_u32[1] =
             ((uint)(auVar44._8_4_ * fVar41) & -(uint)(fVar11 <= auVar43._8_4_) |
             ~-(uint)(fVar11 <= auVar43._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2]) ^
             uVar26;
        local_4d8.m128_u32[2] =
             ((uint)(auVar44._4_4_ * fVar55) & -(uint)(fVar10 <= auVar43._4_4_) |
             ~-(uint)(fVar10 <= auVar43._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1]) ^
             uVar26;
        *(undefined4 *)plVar27 = local_4d8.m128_f32[0];
        *(undefined4 *)((longlong)plVar27 + 4) = local_4d8.m128_f32[1];
        *(undefined4 *)(plVar27 + 1) = local_4d8.m128_f32[2];
        *(undefined4 *)((longlong)plVar27 + 0xc) = local_4d8.m128_f32[3];
        pTVar2 = &param_3->Children;
        local_464 = CONCAT44(local_234,(float)local_198.Scale3D.XY.m128d_f64[0]);
        local_23c = CONCAT44(local_45c,(float)local_198.Scale3D.XY.m128d_f64[0]);
        plVar27 = &local_530->_padding_;
        if (local_530 == (FGLTFJsonNode *)0xffffffffffffffc0) {
          plVar27 = plVar37;
        }
        *plVar27 = local_23c;
        *(float *)(plVar27 + 1) = local_234;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_530) &&
            ((FScriptContainerElement *)&local_530 <
             pFVar4 + (longlong)(param_3->Children).ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = (param_3->Children).ArrayNum;
        piVar1 = &(param_3->Children).ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (param_3->Children).ArrayNum = iVar17 + 1;
        *(FGLTFJsonNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_530;
      }
      else {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6312144054305947473>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFNodeConverters.cpp"
                            ,0xaf,
                            "InstancedMeshComp->GetInstanceTransform(InstanceIndex, RelativeTransform, false)"
                           );
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar39 = (int)plVar28 + 1;
      pFVar19 = local_500;
      plVar28 = (longlong *)(ulonglong)uVar39;
    } while ((int)uVar39 < iVar16);
  }
LAB_14e5edbd9:
  if (*(char *)((*(FGLTFConvertBuilder **)&this->field_0x58)->_padding_ + 0xad) != '\0') {
    pFVar21 = FGLTFConvertBuilder::AddUniqueLightMap
                        (*(FGLTFConvertBuilder **)&this->field_0x58,(UStaticMeshComponent *)param_1)
    ;
    param_3->LightMap = pFVar21;
  }
  return;
}

