// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 3

// Call @ 14da41eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr FStackX_8;
  
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  piVar1 = (int *)((longlong)param_1 + 0x28);
  if (*(FWeakObjectPtr **)((longlong)param_1 + 0x20) != (FWeakObjectPtr *)0x0) {
    param_1 = *(FWeakObjectPtr **)((longlong)param_1 + 0x20);
  }
  pFVar2 = (FWeakObjectPtr *)((longlong)param_1 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&FStackX_8);
    }
    if (param_1 == pFVar2) break;
    FStackX_8 = *(FWeakObjectPtr *)param_1;
    pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x4a0))(pUVar4,0);
    }
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// Call @ 14da41ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,void,FInstanceSceneDataBuffers::FWriteView_&>
::Call(void *param_1,FWriteView *param_2)

{
  FNiagaraDataBuffer *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FRenderTransform *pFVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  uint uStack_294;
  FScriptContainerElement *pFStack_290;
  uint uStack_284;
  FScriptContainerElement *pFStack_280;
  TVector<float>_u_0 TStack_278;
  undefined1 auStack_26c [12];
  TVector<float>_u_0 TStack_260;
  undefined1 auStack_254 [12];
  undefined8 uStack_248;
  float fStack_240;
  undefined8 uStack_23c;
  float fStack_234;
  TQuat<float> TStack_228;
  TQuat<float> TStack_218;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> FStack_208;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> FStack_1e8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> FStack_1c8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> FStack_1a8;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> FStack_188;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> FStack_160;
  FRenderTransform FStack_138;
  FRenderTransform aFStack_108 [4];
  
  lVar19 = *(longlong *)param_1;
  if (*(char *)(lVar19 + 0xb0) == '\0') {
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::FNiagaraDataSetReaderFloat<FNiagaraPosition>
              (&FStack_1e8,*(FNiagaraDataBuffer **)((longlong)param_1 + 0x18),
               *(bool *)(lVar19 + 0x278),*(int *)(lVar19 + 0x27c));
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
              (&FStack_188,*(FNiagaraDataBuffer **)((longlong)param_1 + 0x18),
               *(bool *)(*(longlong *)param_1 + 0x280),*(int *)(*(longlong *)param_1 + 0x284));
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>
              (&FStack_208,*(FNiagaraDataBuffer **)((longlong)param_1 + 0x18),
               *(bool *)(*(longlong *)param_1 + 0x288),*(int *)(*(longlong *)param_1 + 0x28c));
    lVar19 = *(longlong *)param_1;
    pFVar1 = *(FNiagaraDataBuffer **)((longlong)param_1 + 0x18);
    bVar15 = false;
    uStack_294 = 0;
    pFStack_290 = (FScriptContainerElement *)0x0;
    if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (*(int *)(lVar19 + 0x290) != -1)) {
      bVar15 = true;
      pFStack_290 = (pFVar1->Int32Data).AllocatorInstance.Data +
                    *(int *)(lVar19 + 0x290) * pFVar1->Int32Stride;
      uStack_294 = pFVar1->NumInstances;
    }
    bVar13 = false;
    uStack_284 = 0;
    pFStack_280 = (FScriptContainerElement *)0x0;
    if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (*(int *)(lVar19 + 0x294) != -1)) {
      uStack_284 = pFVar1->NumInstances;
      bVar13 = true;
      pFStack_280 = (pFVar1->Int32Data).AllocatorInstance.Data +
                    *(int *)(lVar19 + 0x294) * pFVar1->Int32Stride;
    }
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::FNiagaraDataSetReaderFloat<FNiagaraPosition>
              (&FStack_1a8,pFVar1,*(bool *)(lVar19 + 0x298),*(int *)(lVar19 + 0x29c));
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
              (&FStack_160,*(FNiagaraDataBuffer **)((longlong)param_1 + 0x18),
               *(bool *)(*(longlong *)param_1 + 0x2a0),*(int *)(*(longlong *)param_1 + 0x2a4));
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>
              (&FStack_1c8,*(FNiagaraDataBuffer **)((longlong)param_1 + 0x18),
               *(bool *)(*(longlong *)param_1 + 0x2a8),*(int *)(*(longlong *)param_1 + 0x2ac));
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->InstanceToPrimitiveRelative,
               *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124),Default);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->PrevInstanceToPrimitiveRelative,
               *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124),Default);
    pTVar2 = param_2->InstanceCustomData;
    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,*(int *)(*(longlong *)param_1 + 0x1e8) *
                   *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124),
               &pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
    uVar21 = 0;
    uVar22 = 0;
    fVar31 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
    fVar32 = _UNK_1506895d4;
    fVar33 = _UNK_1506895d8;
    fVar35 = _UNK_1506895dc;
    if (*(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124) != 0) {
      do {
        if ((bVar15) && ((int)uVar22 < (int)uStack_294)) {
          iVar17 = *(int *)(pFStack_290 + (longlong)(int)uVar22 * 4);
        }
        else {
          iVar17 = *(int *)((longlong)param_1 + 0x1a0);
        }
        if ((bVar13) && ((int)uVar22 < (int)uStack_284)) {
          iVar18 = *(int *)(pFStack_280 + (longlong)(int)uVar22 * 4);
        }
        else {
          iVar18 = *(int *)((longlong)param_1 + 0x19c);
        }
        if ((iVar17 == *(int *)((longlong)param_1 + 0x1a0)) &&
           (iVar18 == *(int *)((longlong)param_1 + 0x19c))) {
          if ((FStack_208.bIsValid == false) || (FStack_208.NumInstances <= (int)uVar22)) {
            TStack_278._0_8_ = *(undefined8 *)((longlong)param_1 + 0x160);
            TStack_278._s_0.Z = *(float *)((longlong)param_1 + 0x168);
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                      (&FStack_208,(TVector<float> *)&TStack_278._s_0,uVar22);
          }
          fVar55 = TStack_278._s_0.X * *(float *)((longlong)param_1 + 0x120);
          fVar56 = TStack_278._s_0.Y * *(float *)((longlong)param_1 + 0x124);
          fVar57 = TStack_278._s_0.Z * *(float *)((longlong)param_1 + 0x128);
          if ((FStack_188.bIsValid == false) || (FStack_188.NumInstances <= (int)uVar22)) {
            TStack_228.X = *(float *)((longlong)param_1 + 0x150);
            TStack_228.Y = *(float *)((longlong)param_1 + 0x154);
            TStack_228.Z = *(float *)((longlong)param_1 + 0x158);
            TStack_228.W = *(float *)((longlong)param_1 + 0x15c);
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(&FStack_188,&TStack_228,uVar22)
            ;
          }
          fVar46 = *(float *)((longlong)param_1 + 0x130);
          fVar42 = *(float *)((longlong)param_1 + 0x134);
          fVar45 = *(float *)((longlong)param_1 + 0x138);
          fVar6 = *(float *)((longlong)param_1 + 0x13c);
          fVar39 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
          fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
          fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
          fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
          fVar41 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
          fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
          fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
          fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
          fVar44 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar64 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          fVar38 = fVar6 * TStack_228.X * fVar39 + TStack_228.W * fVar46 +
                   fVar45 * TStack_228.Y * fVar41 + fVar42 * TStack_228.Z * fVar44;
          fVar40 = fVar45 * TStack_228.X * fVar47 + TStack_228.W * fVar42 +
                   fVar6 * TStack_228.Y * fVar61 + fVar46 * TStack_228.Z * fVar60;
          fVar43 = fVar42 * TStack_228.X * fVar58 + TStack_228.W * fVar45 +
                   fVar46 * TStack_228.Y * fVar62 + fVar6 * TStack_228.Z * fVar48;
          fVar46 = fVar46 * TStack_228.X * fVar59 + TStack_228.W * fVar6 +
                   fVar42 * TStack_228.Y * fVar63 + fVar45 * TStack_228.Z * fVar64;
          if ((FStack_1e8.bIsValid == false) || (FStack_1e8.NumInstances <= (int)uVar22)) {
            auStack_26c._0_8_ = *(undefined8 *)((longlong)param_1 + 0x140);
            auStack_26c._8_4_ = *(float *)((longlong)param_1 + 0x148);
          }
          else {
            FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                      (&FStack_1e8,(FNiagaraPosition *)auStack_26c,uVar22);
            fVar39 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
            fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
            fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
            fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
            fVar41 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
            fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
            fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
            fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
            fVar44 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
            fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
            fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
            fVar64 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          }
          fVar42 = *(float *)((longlong)param_1 + 0x1b0);
          fVar45 = *(float *)((longlong)param_1 + 0x1b4);
          fVar6 = *(float *)((longlong)param_1 + 0x1b8);
          fVar30 = *(float *)((longlong)param_1 + 0x1bc);
          fVar34 = (float)auStack_26c._0_8_ * *(float *)((longlong)param_1 + 0x1d0);
          fVar36 = SUB84(auStack_26c._0_8_,4) * *(float *)((longlong)param_1 + 0x1d4);
          fVar37 = (float)auStack_26c._8_4_ * *(float *)((longlong)param_1 + 0x1d8);
          fVar49 = fVar36 * fVar42 - fVar45 * fVar34;
          fVar53 = fVar37 * fVar45 - fVar6 * fVar36;
          fVar54 = fVar34 * fVar6 - fVar42 * fVar37;
          fVar53 = fVar53 + fVar53;
          fVar54 = fVar54 + fVar54;
          fVar49 = fVar49 + fVar49;
          fVar24 = fVar40 * fVar40 + fVar38 * fVar38;
          fVar27 = fVar38 * fVar38 + fVar40 * fVar40;
          fVar28 = fVar46 * fVar46 + fVar43 * fVar43;
          fVar29 = fVar43 * fVar43 + fVar46 * fVar46;
          auVar50._0_8_ =
               CONCAT44(fVar54 * fVar30 + fVar36 + (fVar53 * fVar6 - fVar49 * fVar42) +
                        *(float *)((longlong)param_1 + 0x1c4),
                        fVar53 * fVar30 + fVar34 + (fVar49 * fVar45 - fVar54 * fVar6) +
                        *(float *)((longlong)param_1 + 0x1c0));
          auVar50._8_4_ =
               fVar49 * fVar30 + fVar37 + (fVar54 * fVar42 - fVar53 * fVar45) +
               *(float *)((longlong)param_1 + 0x1c8);
          auVar25._0_4_ = fVar28 + fVar24;
          auVar25._4_4_ = fVar29 + fVar27;
          auVar25._8_4_ = fVar24 + fVar28;
          auVar25._12_4_ = fVar27 + fVar29;
          auVar23 = sqrtps(auVar25,auVar25);
          auVar23 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
          fVar31 = (float)((uint)(auVar23._0_4_ * fVar38) & -(uint)(fVar31 <= auVar25._0_4_) |
                          ~-(uint)(fVar31 <= auVar25._0_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[0]);
          fVar32 = (float)((uint)(auVar23._4_4_ * fVar40) & -(uint)(fVar32 <= auVar25._4_4_) |
                          ~-(uint)(fVar32 <= auVar25._4_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[1]);
          fVar33 = (float)((uint)(auVar23._8_4_ * fVar43) & -(uint)(fVar33 <= auVar25._8_4_) |
                          ~-(uint)(fVar33 <= auVar25._8_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[2]);
          fVar35 = (float)((uint)(auVar23._12_4_ * fVar46) & -(uint)(fVar35 <= auVar25._12_4_) |
                          ~-(uint)(fVar35 <= auVar25._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
          fVar39 = fVar42 * fVar35 * fVar39 + fVar31 * fVar30 + fVar45 * fVar33 * fVar41 +
                   fVar6 * fVar32 * fVar44;
          fVar41 = fVar42 * fVar33 * fVar47 + fVar32 * fVar30 + fVar45 * fVar35 * fVar61 +
                   fVar6 * fVar31 * fVar60;
          fVar44 = fVar42 * fVar32 * fVar58 + fVar33 * fVar30 + fVar45 * fVar31 * fVar62 +
                   fVar6 * fVar35 * fVar48;
          fVar47 = fVar42 * fVar31 * fVar59 + fVar35 * fVar30 + fVar45 * fVar32 * fVar63 +
                   fVar6 * fVar33 * fVar64;
          fVar31 = fVar41 + fVar41;
          fVar33 = fVar44 + fVar44;
          fVar35 = (fVar39 + fVar39) * fVar39;
          pTVar3 = param_2->InstanceToPrimitiveRelative;
          fVar32 = (fVar39 + fVar39) * fVar47;
          uVar16 = 0;
          if ((int)uVar21 < pTVar3->ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          auVar50._12_4_ = 0;
          auVar51 = blendps(auVar50,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
          auVar23._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar33 * fVar44 + fVar31 * fVar41)) *
               fVar55;
          auVar23._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar33 * fVar44 + fVar35)) * fVar56;
          auVar23._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar31 * fVar41 + fVar35)) * fVar57;
          auVar23._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar35 + fVar35)) * 0.0;
          auVar25 = insertps(auVar23,auVar23,8);
          uStack_248 = auVar50._0_8_;
          fStack_240 = auVar50._8_4_;
          if ((uVar16 == 0) &&
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
          lVar19 = (longlong)(int)uVar21;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(int *)(pFVar4 + lVar19 * 0x30) = auVar25._0_4_;
          *(float *)(pFVar4 + lVar19 * 0x30 + 4) = (fVar33 * fVar47 + fVar31 * fVar39) * fVar55;
          *(float *)(pFVar4 + lVar19 * 0x30 + 8) = fVar55 * (fVar33 * fVar39 - fVar31 * fVar47);
          *(float *)(pFVar4 + lVar19 * 0x30 + 0xc) = fVar56 * (fVar31 * fVar39 - fVar33 * fVar47);
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x10) = auVar25._4_4_;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x14) = (fVar32 + fVar33 * fVar41) * fVar56;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x18) = (fVar31 * fVar47 + fVar33 * fVar39) * fVar57;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x1c) = fVar57 * (fVar33 * fVar41 - fVar32);
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x20) = auVar25._8_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x24) = auVar51._0_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x28) = auVar51._4_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x2c) = auVar51._8_4_;
          if ((FStack_1c8.bIsValid == false) || (FStack_1c8.NumInstances <= (int)uVar22)) {
            TStack_260._0_8_ = *(undefined8 *)((longlong)param_1 + 400);
            TStack_260._s_0.Z = *(float *)((longlong)param_1 + 0x198);
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                      (&FStack_1c8,(TVector<float> *)&TStack_260._s_0,uVar22);
          }
          fVar31 = TStack_260._s_0.X * *(float *)((longlong)param_1 + 0x120);
          fVar32 = TStack_260._s_0.Y * *(float *)((longlong)param_1 + 0x124);
          fVar33 = TStack_260._s_0.Z * *(float *)((longlong)param_1 + 0x128);
          if ((FStack_160.bIsValid == false) || (FStack_160.NumInstances <= (int)uVar22)) {
            TStack_218.X = *(float *)((longlong)param_1 + 0x180);
            TStack_218.Y = *(float *)((longlong)param_1 + 0x184);
            TStack_218.Z = *(float *)((longlong)param_1 + 0x188);
            TStack_218.W = *(float *)((longlong)param_1 + 0x18c);
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(&FStack_160,&TStack_218,uVar22)
            ;
          }
          fVar48 = *(float *)((longlong)param_1 + 0x130);
          fVar59 = *(float *)((longlong)param_1 + 0x134);
          fVar63 = *(float *)((longlong)param_1 + 0x138);
          fVar64 = *(float *)((longlong)param_1 + 0x13c);
          fVar35 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
          fVar57 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
          fVar44 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
          fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
          fVar55 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
          fVar39 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
          fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
          fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
          fVar56 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          fVar41 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          fVar46 = fVar64 * TStack_218.X * fVar35 + TStack_218.W * fVar48 +
                   fVar63 * TStack_218.Y * fVar55 + fVar59 * TStack_218.Z * fVar56;
          fVar42 = fVar63 * TStack_218.X * fVar57 + TStack_218.W * fVar59 +
                   fVar64 * TStack_218.Y * fVar39 + fVar48 * TStack_218.Z * fVar41;
          fVar45 = fVar59 * TStack_218.X * fVar44 + TStack_218.W * fVar63 +
                   fVar48 * TStack_218.Y * fVar47 + fVar64 * TStack_218.Z * fVar61;
          fVar48 = fVar48 * TStack_218.X * fVar60 + TStack_218.W * fVar64 +
                   fVar59 * TStack_218.Y * fVar58 + fVar63 * TStack_218.Z * fVar62;
          if ((FStack_1a8.bIsValid == false) || (FStack_1a8.NumInstances <= (int)uVar22)) {
            auStack_254._0_8_ = *(undefined8 *)((longlong)param_1 + 0x16c);
            auStack_254._8_4_ = *(float *)((longlong)param_1 + 0x174);
          }
          else {
            FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                      (&FStack_1a8,(FNiagaraPosition *)auStack_254,uVar22);
            fVar35 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
            fVar57 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
            fVar44 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
            fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
            fVar55 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
            fVar39 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
            fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
            fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
            fVar56 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
            fVar41 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
            fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
            fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          }
          fVar59 = *(float *)((longlong)param_1 + 0x1e0);
          fVar63 = *(float *)((longlong)param_1 + 0x1e4);
          fVar64 = *(float *)((longlong)param_1 + 0x1e8);
          fVar6 = *(float *)((longlong)param_1 + 0x1ec);
          fVar24 = (float)auStack_254._0_8_ * *(float *)((longlong)param_1 + 0x200);
          fVar27 = SUB84(auStack_254._0_8_,4) * *(float *)((longlong)param_1 + 0x204);
          fVar28 = (float)auStack_254._8_4_ * *(float *)((longlong)param_1 + 0x208);
          fVar29 = fVar27 * fVar59 - fVar63 * fVar24;
          fVar34 = fVar28 * fVar63 - fVar64 * fVar27;
          fVar36 = fVar24 * fVar64 - fVar59 * fVar28;
          fVar34 = fVar34 + fVar34;
          fVar36 = fVar36 + fVar36;
          fVar29 = fVar29 + fVar29;
          fVar38 = fVar42 * fVar42 + fVar46 * fVar46;
          fVar40 = fVar46 * fVar46 + fVar42 * fVar42;
          fVar43 = fVar48 * fVar48 + fVar45 * fVar45;
          fVar30 = fVar45 * fVar45 + fVar48 * fVar48;
          auVar52._0_8_ =
               CONCAT44(fVar36 * fVar6 + fVar27 + (fVar34 * fVar64 - fVar29 * fVar59) +
                        *(float *)((longlong)param_1 + 500),
                        fVar34 * fVar6 + fVar24 + (fVar29 * fVar63 - fVar36 * fVar64) +
                        *(float *)((longlong)param_1 + 0x1f0));
          auVar52._8_4_ =
               fVar29 * fVar6 + fVar28 + (fVar36 * fVar59 - fVar34 * fVar63) +
               *(float *)((longlong)param_1 + 0x1f8);
          auVar51._0_4_ = fVar43 + fVar38;
          auVar51._4_4_ = fVar30 + fVar40;
          auVar51._8_4_ = fVar38 + fVar43;
          auVar51._12_4_ = fVar40 + fVar30;
          auVar25 = sqrtps(auVar51,auVar51);
          auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
          fVar46 = (float)((uint)(auVar25._0_4_ * fVar46) &
                           -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar51._0_4_) |
                          ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar51._0_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[0]);
          fVar42 = (float)((uint)(auVar25._4_4_ * fVar42) & -(uint)(_UNK_1506895d4 <= auVar51._4_4_)
                          | ~-(uint)(_UNK_1506895d4 <= auVar51._4_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[1]);
          fVar45 = (float)((uint)(auVar25._8_4_ * fVar45) & -(uint)(_UNK_1506895d8 <= auVar51._8_4_)
                          | ~-(uint)(_UNK_1506895d8 <= auVar51._8_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[2]);
          fVar48 = (float)((uint)(auVar25._12_4_ * fVar48) &
                           -(uint)(_UNK_1506895dc <= auVar51._12_4_) |
                          ~-(uint)(_UNK_1506895dc <= auVar51._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
          fVar38 = fVar59 * fVar48 * fVar35 + fVar46 * fVar6 + fVar63 * fVar45 * fVar55 +
                   fVar64 * fVar42 * fVar56;
          fVar39 = fVar59 * fVar45 * fVar57 + fVar42 * fVar6 + fVar63 * fVar48 * fVar39 +
                   fVar64 * fVar46 * fVar41;
          fVar41 = fVar59 * fVar42 * fVar44 + fVar45 * fVar6 + fVar63 * fVar46 * fVar47 +
                   fVar64 * fVar48 * fVar61;
          fVar44 = fVar59 * fVar46 * fVar60 + fVar48 * fVar6 + fVar63 * fVar42 * fVar58 +
                   fVar64 * fVar45 * fVar62;
          fVar35 = fVar39 + fVar39;
          fVar56 = fVar41 + fVar41;
          fVar57 = (fVar38 + fVar38) * fVar38;
          pTVar3 = param_2->PrevInstanceToPrimitiveRelative;
          fVar55 = (fVar38 + fVar38) * fVar44;
          uVar16 = 0;
          if ((int)uVar21 < pTVar3->ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          auVar52._12_4_ = 0;
          auVar23 = blendps(auVar52,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
          auVar26._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar56 * fVar41 + fVar35 * fVar39)) *
               fVar31;
          auVar26._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar56 * fVar41 + fVar57)) * fVar32;
          auVar26._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar35 * fVar39 + fVar57)) * fVar33;
          auVar26._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar57 + fVar57)) * 0.0;
          auVar25 = insertps(auVar26,auVar26,8);
          uStack_23c = auVar52._0_8_;
          fStack_234 = auVar52._8_4_;
          if ((uVar16 == 0) &&
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
          lVar19 = (longlong)(int)uVar21;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(int *)(pFVar4 + lVar19 * 0x30) = auVar25._0_4_;
          *(float *)(pFVar4 + lVar19 * 0x30 + 4) = (fVar56 * fVar44 + fVar35 * fVar38) * fVar31;
          *(float *)(pFVar4 + lVar19 * 0x30 + 8) = fVar31 * (fVar56 * fVar38 - fVar35 * fVar44);
          *(float *)(pFVar4 + lVar19 * 0x30 + 0xc) = fVar32 * (fVar35 * fVar38 - fVar56 * fVar44);
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x10) = auVar25._4_4_;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x14) = (fVar55 + fVar56 * fVar39) * fVar32;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x18) = (fVar35 * fVar44 + fVar56 * fVar38) * fVar33;
          *(float *)(pFVar4 + lVar19 * 0x30 + 0x1c) = fVar33 * (fVar56 * fVar39 - fVar55);
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x20) = auVar25._8_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x24) = auVar23._0_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x28) = auVar23._4_4_;
          *(int *)(pFVar4 + lVar19 * 0x30 + 0x2c) = auVar23._8_4_;
          NiagaraRendererNaniteLocal::FUpdateInstancesContext::CopyInstancePerInstanceData
                    (param_1,param_2,uVar22);
          uVar21 = uVar21 + 1;
          fVar31 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          fVar32 = _UNK_1506895d4;
          fVar33 = _UNK_1506895d8;
          fVar35 = _UNK_1506895dc;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124));
    }
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->InstanceToPrimitiveRelative,uVar21,No);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->PrevInstanceToPrimitiveRelative,uVar21,No);
    pTVar2 = param_2->InstanceCustomData;
    iVar17 = pTVar2->ArrayNum;
    uVar21 = uVar21 * *(int *)(*(longlong *)param_1 + 0x1e8);
    if (iVar17 < (int)uVar21) {
      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar21 - iVar17,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax)
      ;
    }
    else {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        OnInvalidArrayNum((ulonglong)uVar21);
      }
      if ((int)uVar21 < iVar17) {
        uVar22 = iVar17 - uVar21;
        if (((int)(uVar22 | uVar21) < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar22 != 0) {
          pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar21 * 4;
          iVar17 = (pTVar2->ArrayNum - uVar22) - uVar21;
          if (iVar17 != 0) {
            memmove(pFVar4,pFVar4 + (longlong)(int)uVar22 * 4,(longlong)iVar17 << 2);
          }
          pTVar2->ArrayNum = pTVar2->ArrayNum - uVar22;
        }
      }
    }
  }
  else {
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->InstanceToPrimitiveRelative,1,Default);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2->PrevInstanceToPrimitiveRelative,1,Default);
    pTVar2 = param_2->InstanceCustomData;
    iVar17 = pTVar2->ArrayNum;
    uVar21 = *(uint *)(*(longlong *)param_1 + 0x1e8);
    if (iVar17 < (int)uVar21) {
      iVar18 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar21 - iVar17,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,
                          &pTVar2->ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 4,0,
             (longlong)(int)(uVar21 - iVar17) << 2);
    }
    else {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        OnInvalidArrayNum((ulonglong)uVar21);
      }
      if ((int)uVar21 < iVar17) {
        uVar22 = iVar17 - uVar21;
        if (((int)(uVar22 | uVar21) < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar22 != 0) {
          TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar2,uVar21,uVar22);
          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
        }
      }
    }
    pFVar20 = NiagaraRendererNaniteLocal::FUpdateInstancesContext::MakeTransform
                        (param_1,&FStack_138,(TVector<float> *)((longlong)param_1 + 0x140),
                         (TQuat<float> *)((longlong)param_1 + 0x150),
                         (TVector<float> *)((longlong)param_1 + 0x160));
    pTVar3 = param_2->InstanceToPrimitiveRelative;
    uVar7 = *(undefined8 *)&pFVar20->TransformRows[0].field0_0x0;
    uVar8 = *(undefined8 *)((longlong)&pFVar20->TransformRows[0].field0_0x0 + 8);
    uVar9 = *(undefined8 *)((longlong)&pFVar20->TransformRows[1].field0_0x0 + 4);
    uVar10 = *(undefined8 *)&pFVar20->TransformRows[2].field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&pFVar20->TransformRows[2].field0_0x0 + 8);
    uVar12 = *(undefined8 *)((longlong)&(pFVar20->Origin).field0_0x0 + 4);
    if ((pTVar3->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)pFVar4 = uVar7;
    *(undefined8 *)(pFVar4 + 8) = uVar8;
    *(undefined8 *)(pFVar4 + 0x10) = uVar9;
    *(undefined8 *)(pFVar4 + 0x18) = uVar10;
    *(undefined8 *)(pFVar4 + 0x20) = uVar11;
    *(undefined8 *)(pFVar4 + 0x28) = uVar12;
    pFVar20 = NiagaraRendererNaniteLocal::FUpdateInstancesContext::MakeTransform
                        (param_1,aFStack_108,(TVector<float> *)((longlong)param_1 + 0x16c),
                         (TQuat<float> *)((longlong)param_1 + 0x180),
                         (TVector<float> *)((longlong)param_1 + 400));
    pTVar3 = param_2->PrevInstanceToPrimitiveRelative;
    uVar7 = *(undefined8 *)&pFVar20->TransformRows[0].field0_0x0;
    uVar8 = *(undefined8 *)((longlong)&pFVar20->TransformRows[0].field0_0x0 + 8);
    uVar9 = *(undefined8 *)((longlong)&pFVar20->TransformRows[1].field0_0x0 + 4);
    uVar10 = *(undefined8 *)&pFVar20->TransformRows[2].field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&pFVar20->TransformRows[2].field0_0x0 + 8);
    uVar12 = *(undefined8 *)((longlong)&(pFVar20->Origin).field0_0x0 + 4);
    if ((pTVar3->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)pFVar4 = uVar7;
    *(undefined8 *)(pFVar4 + 8) = uVar8;
    *(undefined8 *)(pFVar4 + 0x10) = uVar9;
    *(undefined8 *)(pFVar4 + 0x18) = uVar10;
    *(undefined8 *)(pFVar4 + 0x20) = uVar11;
    *(undefined8 *)(pFVar4 + 0x28) = uVar12;
    NiagaraRendererNaniteLocal::FUpdateInstancesContext::CopyInstancePerInstanceData
              (param_1,param_2,0);
  }
  return;
}

// Call @ 14da41ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,void,FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FGPUSceneWriteDelegateParams *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FRDGBufferUAV *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  FRHIShaderResourceView *pFVar16;
  FGlobalShaderMap *this;
  FShaderType *pFVar17;
  FName this_00;
  FRDGEventName *pFVar18;
  FShaderParametersMetadata *pFVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  uint uVar23;
  longlong lVar24;
  FParameters *pFVar25;
  int iVar26;
  int iStackX_8;
  undefined8 *puStack_120;
  int iStack_118;
  int iStack_114;
  float fStack_110;
  longlong lStack_108;
  longlong lStack_100;
  FParameters *pFStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  TIntVector3<int>_u_0 TStack_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_a8;
  undefined1 auStack_98 [8];
  FString FStack_90;
  TShaderRefBase<FNiagaraNaniteGPUSceneCS,FShaderMapPointerTable> TStack_78;
  FRDGEventName FStack_68;
  
  if ((param_3->PersistentPrimitiveId == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GpuSceneParams.PersistentPrimitiveId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraRendererNanite.cpp"
                         ,0xb3,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar21 = *(longlong *)param_1;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar24 = *(longlong *)(lVar21 + 0x260);
  iVar13 = *(int *)(lVar21 + 0x268);
  lStack_f0 = lVar24;
  if ((iVar13 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar21 = 0x10;
  iVar26 = 0x40;
  if (*(int *)(*(longlong *)param_1 + 0x1e8) < 0x40) {
    iVar26 = *(int *)(*(longlong *)param_1 + 0x1e8);
  }
  iVar8 = (int)(iVar26 + 3 + (iVar26 + 3 >> 0x1f & 3U)) >> 2;
  puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x3d0,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar14 + 9) = 1;
    puVar14[2] = 0;
    *puVar14 = &___7__TObject_VFParameters_FNiagaraNaniteGPUSceneCS___FRDGAllocator__6B_;
    puVar15 = puVar14 + 0x36;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[8] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    do {
      *puVar15 = 0;
      *(undefined4 *)(puVar15 + 1) = 0;
      *(undefined4 *)((longlong)puVar15 + 0xc) = 0x3f800000;
      puVar15 = puVar15 + 2;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  puStack_120 = puVar14;
  if ((((undefined8 **)param_2->_padding_ <= &puStack_120) &&
      (&puStack_120 <
       (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = (int)param_2->_padding_;
  piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_2->_padding_,piVar1);
  }
  pFVar25 = (FParameters *)(puVar14 + 2);
  *(int *)&param_2->_padding_ = iVar9 + 1;
  *(undefined8 **)(param_2->_padding_ + (longlong)iVar9 * 8) = puStack_120;
  pFVar4 = (param_3->GPUWriteParams).GPUSceneInstancePayloadDataRW;
  (pFVar25->GPUSceneWriterParameters).GPUSceneInstanceSceneDataRW =
       (param_3->GPUWriteParams).GPUSceneInstanceSceneDataRW;
  puVar14[3] = pFVar4;
  uVar5 = *(undefined8 *)&(param_3->GPUWriteParams).GPUSceneInstanceSceneDataSOAStride;
  puVar14[4] = (param_3->GPUWriteParams).GPUScenePrimitiveSceneDataRW;
  puVar14[5] = uVar5;
  lVar21 = (param_3->GPUWriteParams)._padding_;
  puVar14[6] = *(undefined8 *)&(param_3->GPUWriteParams).GPUSceneNumAllocatedPrimitives;
  puVar14[7] = lVar21;
  uVar5 = *(undefined8 *)&(param_3->GPUWriteParams).GPUSceneWriterUB.field_0x8;
  puVar14[8] = *(undefined8 *)&(param_3->GPUWriteParams).GPUSceneWriterUB;
  puVar14[9] = uVar5;
  uVar5 = *(undefined8 *)&(param_3->GPUWriteParams).CommonParameters.GPUSceneInstanceDataTileStride;
  puVar14[10] = *(undefined8 *)&(param_3->GPUWriteParams).CommonParameters;
  puVar14[0xb] = uVar5;
  uVar5 = *(undefined8 *)&(param_3->GPUWriteParams).CommonParameters.GPUSceneNumLightmapDataItems;
  puVar14[0xc] = *(undefined8 *)
                  &(param_3->GPUWriteParams).CommonParameters.GPUSceneMaxAllocatedInstanceId;
  puVar14[0xd] = uVar5;
  *(undefined4 *)(puVar14 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x10);
  *(undefined4 *)((longlong)puVar14 + 0x74) =
       *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x124);
  *(undefined4 *)(puVar14 + 0xf) = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x5c);
  *(uint *)((longlong)puVar14 + 0x7c) =
       *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 300) >> 2;
  pFVar16 = *(FRHIShaderResourceView **)(*(longlong *)((longlong)param_1 + 0x18) + 0x70);
  pFStack_f8 = pFVar25;
  if (pFVar16 == (FRHIShaderResourceView *)0x0) {
    pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
  }
  puVar14[0x10] = pFVar16;
  pFVar16 = *(FRHIShaderResourceView **)(*(longlong *)((longlong)param_1 + 0x18) + 0x100);
  if (pFVar16 == (FRHIShaderResourceView *)0x0) {
    pFVar16 = FNiagaraRenderer::GetDummyHalfBuffer();
  }
  puVar14[0x11] = pFVar16;
  pFVar16 = *(FRHIShaderResourceView **)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0);
  if (pFVar16 == (FRHIShaderResourceView *)0x0) {
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
  }
  puVar14[0x12] = pFVar16;
  lVar21 = *(longlong *)((longlong)param_1 + 8);
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)(lVar21 + 0x54) < *(int *)(lVar21 + 0x50)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = *(FRHIShaderResourceView **)(lVar21 + 0x78);
  if (pFVar16 == (FRHIShaderResourceView *)0x0) {
    pFVar16 = FNiagaraRenderer::GetDummyUIntBuffer();
  }
  puVar14[0x13] = pFVar16;
  lStack_108 = (longlong)iVar8;
  *(int *)(puVar14 + 0x14) = iVar26;
  uVar12 = 0xffffffff;
  *(int *)((longlong)puVar14 + 0xa4) = iVar8;
  if (0 < lStack_108) {
    puVar22 = (undefined4 *)((longlong)puVar14 + 0x1b4);
    lVar21 = -(longlong)pFVar25;
    lStack_100 = lVar21 + -0x1a4;
    lVar24 = 0;
    iStackX_8 = 0;
    uVar23 = 2;
    do {
      if (iStackX_8 < 0) {
LAB_14da481d3:
        uVar20 = 0xffffffff;
      }
      else {
        lVar2 = *(longlong *)param_1;
        if (*(int *)(lVar2 + 0x1e8) <= (int)(uVar23 - 2)) goto LAB_14da481d3;
        uVar10 = 0;
        if ((int)(uVar23 - 2) < *(int *)(lVar2 + 0x1e8)) {
          uVar10 = ~(uVar23 - 2) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = *(undefined4 *)(lVar24 + *(longlong *)(lVar2 + 0x1e0));
      }
      puVar22[-0x41] = uVar20;
      iVar26 = uVar23 - 1;
      puVar22[-1] = *(undefined4 *)(lVar24 + 0x20 + (longlong)param_1);
      if ((iVar26 < 0) || (lVar2 = *(longlong *)param_1, *(int *)(lVar2 + 0x1e8) <= iVar26)) {
        uVar20 = 0xffffffff;
      }
      else {
        uVar10 = 0;
        if (iVar26 < *(int *)(lVar2 + 0x1e8)) {
          uVar10 = ~(uVar23 - 1) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = *(undefined4 *)((longlong)puVar22 + *(longlong *)(lVar2 + 0x1e0) + lVar21 + -0x1a0)
        ;
      }
      puVar22[-0x40] = uVar20;
      *puVar22 = *(undefined4 *)
                  ((longlong)param_1 + (-0x180 - (longlong)pFVar25) + (longlong)puVar22);
      if (((int)uVar23 < 0) ||
         (lVar2 = *(longlong *)param_1, *(int *)(lVar2 + 0x1e8) <= (int)uVar23)) {
        uVar20 = 0xffffffff;
      }
      else {
        uVar10 = 0;
        if ((int)uVar23 < *(int *)(lVar2 + 0x1e8)) {
          uVar10 = ~uVar23 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = *(undefined4 *)((longlong)puVar22 + *(longlong *)(lVar2 + 0x1e0) + lVar21 + -0x19c)
        ;
      }
      puVar22[-0x3f] = uVar20;
      uVar10 = uVar23 + 1;
      puVar22[1] = *(undefined4 *)
                    ((longlong)param_1 + (-0x17c - (longlong)pFVar25) + (longlong)puVar22);
      if (((int)uVar10 < 0) ||
         (lVar2 = *(longlong *)param_1, *(int *)(lVar2 + 0x1e8) <= (int)uVar10)) {
        uVar20 = 0xffffffff;
      }
      else {
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar2 + 0x1e8)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = *(undefined4 *)((longlong)puVar22 + *(longlong *)(lVar2 + 0x1e0) + lVar21 + -0x198)
        ;
      }
      puVar22[-0x3e] = uVar20;
      uVar23 = uVar23 + 4;
      lVar24 = lVar24 + 0x10;
      puVar22[2] = *(undefined4 *)
                    ((longlong)puVar22 + (longlong)param_1 + (-0x178 - (longlong)pFVar25));
      puVar22 = puVar22 + 4;
      lStack_108 = lStack_108 + -1;
      iStackX_8 = iStackX_8 + 4;
    } while (lStack_108 != 0);
    lStack_108 = 0;
    lVar24 = lStack_f0;
    pFVar25 = pFStack_f8;
  }
  if ((iVar13 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0xffffffff;
  if (*(ushort *)(lVar24 + 2) != 0xffff) {
    uVar23 = (uint)*(ushort *)(lVar24 + 2);
  }
  pFVar25->PositionComponentOffset = -(uint)(*(char *)(lVar24 + 7) != '\0') & 0x80000000 | uVar23;
  if ((iVar13 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0xffffffff;
  if (*(ushort *)(lVar24 + 10) != 0xffff) {
    uVar23 = (uint)*(ushort *)(lVar24 + 10);
  }
  pFVar25->RotationComponentOffset = -(uint)(*(char *)(lVar24 + 0xf) != '\0') & 0x80000000 | uVar23;
  if ((iVar13 < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0xffffffff;
  if (*(ushort *)(lVar24 + 0x12) != 0xffff) {
    uVar23 = (uint)*(ushort *)(lVar24 + 0x12);
  }
  pFVar25->ScaleComponentOffset = -(uint)(*(char *)(lVar24 + 0x17) != '\0') & 0x80000000 | uVar23;
  if ((iVar13 < 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0xffffffff;
  if (*(ushort *)(lVar24 + 0x1a) != 0xffff) {
    uVar23 = (uint)*(ushort *)(lVar24 + 0x1a);
  }
  pFVar25->PrevPositionComponentOffset =
       -(uint)(*(char *)(lVar24 + 0x1f) != '\0') & 0x80000000 | uVar23;
  if ((iVar13 < 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0xffffffff;
  if (*(ushort *)(lVar24 + 0x22) != 0xffff) {
    uVar23 = (uint)*(ushort *)(lVar24 + 0x22);
  }
  pFVar25->PrevRotationComponentOffset =
       -(uint)(*(char *)(lVar24 + 0x27) != '\0') & 0x80000000 | uVar23;
  if ((iVar13 < 6) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ushort *)(lVar24 + 0x2a) != 0xffff) {
    uVar12 = (uint)*(ushort *)(lVar24 + 0x2a);
  }
  pFVar25->PrevScaleComponentOffset =
       -(uint)(*(char *)(lVar24 + 0x2f) != '\0') & 0x80000000 | uVar12;
  *(undefined8 *)&(pFVar25->DefaultPosition).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x140)
  ;
  (pFVar25->DefaultPosition).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x148);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x150);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x158);
  (pFVar25->DefaultRotation).X = (float)(int)uVar5;
  (pFVar25->DefaultRotation).Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar25->DefaultRotation).Z = (float)(int)uVar6;
  (pFVar25->DefaultRotation).W = (float)(int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&(pFVar25->DefaultScale).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x160);
  (pFVar25->DefaultScale).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x168);
  *(undefined8 *)&(pFVar25->DefaultPrevPosition).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x16c);
  (pFVar25->DefaultPrevPosition).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x174);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x180);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x188);
  (pFVar25->DefaultPrevRotation).X = (float)(int)uVar5;
  (pFVar25->DefaultPrevRotation).Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar25->DefaultPrevRotation).Z = (float)(int)uVar6;
  (pFVar25->DefaultPrevRotation).W = (float)(int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&(pFVar25->DefaultPrevScale).field0_0x0 = *(undefined8 *)((longlong)param_1 + 400);
  (pFVar25->DefaultPrevScale).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x198);
  *(undefined8 *)&(pFVar25->MeshScale).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x120);
  (pFVar25->MeshScale).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x128);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x130);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x138);
  (pFVar25->MeshRotation).X = (float)(int)uVar5;
  (pFVar25->MeshRotation).Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar25->MeshRotation).Z = (float)(int)uVar6;
  (pFVar25->MeshRotation).W = (float)(int)((ulonglong)uVar6 >> 0x20);
  pFVar25->MeshIndex = *(int *)((longlong)param_1 + 0x19c);
  pFVar25->RendererVis = *(int *)((longlong)param_1 + 0x1a0);
  pFVar25->MeshIndexComponentOffset = *(uint *)((longlong)param_1 + 0x1a4);
  pFVar25->RendererVisComponentOffset = *(uint *)((longlong)param_1 + 0x1a8);
  uStack_e8 = *(undefined4 *)((longlong)param_1 + 0x1c0);
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x1c4);
  fStack_e0 = *(float *)((longlong)param_1 + 0x1c8);
  *(undefined8 *)&(pFVar25->SimulationToComponent_Translation).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x1c0);
  (pFVar25->SimulationToComponent_Translation).field0_0x0._s_0.Z = fStack_e0;
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x1b0);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x1b8);
  (pFVar25->SimulationToComponent_Rotation).X = (float)(int)uVar5;
  (pFVar25->SimulationToComponent_Rotation).Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar25->SimulationToComponent_Rotation).Z = (float)(int)uVar6;
  (pFVar25->SimulationToComponent_Rotation).W = (float)(int)((ulonglong)uVar6 >> 0x20);
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0x1d0);
  uStack_d8 = *(undefined4 *)((longlong)param_1 + 0x1d4);
  fStack_d4 = *(float *)((longlong)param_1 + 0x1d8);
  *(undefined8 *)&(pFVar25->SimulationToComponent_Scale).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x1d0);
  (pFVar25->SimulationToComponent_Scale).field0_0x0._s_0.Z = fStack_d4;
  uStack_d0 = *(undefined4 *)((longlong)param_1 + 0x1f0);
  uStack_cc = *(undefined4 *)((longlong)param_1 + 500);
  fStack_c8 = *(float *)((longlong)param_1 + 0x1f8);
  *(undefined8 *)&(pFVar25->PreviousSimulationToComponent_Translation).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x1f0);
  (pFVar25->PreviousSimulationToComponent_Translation).field0_0x0._s_0.Z = fStack_c8;
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x1e0);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x1e8);
  (pFVar25->PreviousSimulationToComponent_Rotation).X = (float)(int)uVar5;
  (pFVar25->PreviousSimulationToComponent_Rotation).Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar25->PreviousSimulationToComponent_Rotation).Z = (float)(int)uVar6;
  (pFVar25->PreviousSimulationToComponent_Rotation).W = (float)(int)((ulonglong)uVar6 >> 0x20);
  iStack_118 = *(int *)((longlong)param_1 + 0x200);
  iStack_114 = *(undefined4 *)((longlong)param_1 + 0x204);
  fStack_110 = *(float *)((longlong)param_1 + 0x208);
  *(undefined8 *)&(pFVar25->PreviousSimulationToComponent_Scale).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x200);
  (pFVar25->PreviousSimulationToComponent_Scale).field0_0x0._s_0.Z = fStack_110;
  *(undefined8 *)&(pFVar25->SimulationLWCTile).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0x210);
  (pFVar25->SimulationLWCTile).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x218);
  pFVar25->PrimitiveId = param_3->PersistentPrimitiveId;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar17 = (FShaderType *)FNiagaraNaniteGPUSceneCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_a8,pFVar17,0);
  if (TStack_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_98);
    ::FName::ToString((FName *)this_00,&FStack_90);
    FNiagaraNaniteGPUSceneCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraNaniteGPUSceneCS::GetStaticType();
  iVar13 = pFVar25->NumAllocatedInstances + 0x3f;
  TStack_78.ShaderContent = (FNiagaraNaniteGPUSceneCS *)TStack_a8.ShaderContent;
  TStack_78.ShaderMap = TStack_a8.ShaderMap;
  iVar13 = (int)((iVar13 >> 0x1f & 0x3fU) + iVar13) >> 6;
  if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
      (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,400,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = 1;
  iVar8 = 1;
  iVar26 = iVar13;
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < iVar13) {
    iVar26 = 0x80;
    iVar9 = (int)((iVar13 + 0x7f >> 0x1f & 0x7fU) + iVar13 + 0x7f) >> 7;
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < iVar9) {
    iVar8 = iVar9 + 0x7f;
    iVar9 = 0x80;
    iVar8 = (int)((iVar8 >> 0x1f & 0x7fU) + iVar8) >> 7;
  }
  if ((iVar8 * iVar9 * iVar26 < iVar13) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,0x19f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_118 = iVar26;
  iStack_114 = iVar9;
  pFVar18 = FRDGEventName::FRDGEventName(&FStack_68,1,L"NiagaraNanite");
  pFVar19 = FNiagaraNaniteGPUSceneCS::FParameters::FTypeInfo::GetStructMetadata();
  TStack_b8._0_8_ = CONCAT44(iStack_114,iStack_118);
  TStack_b8._s_0.Z = iVar8;
  FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>
            (param_2,pFVar18,NeverCull|Compute,&TStack_78,pFVar19,pFVar25,
             (TIntVector3<int> *)&TStack_b8._s_0);
  if (FStack_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

