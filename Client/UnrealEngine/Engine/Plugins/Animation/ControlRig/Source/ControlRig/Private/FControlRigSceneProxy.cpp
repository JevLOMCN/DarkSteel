// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// FControlRigSceneProxy @ 14a21eb90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FControlRigSceneProxy * __thiscall
FControlRigSceneProxy::FControlRigSceneProxy
          (FControlRigSceneProxy *this,UControlRigComponent *param_1)

{
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->field_0x7d = this->field_0x7d & 0xfe;
  *(undefined ***)this = &___7FControlRigSceneProxy__6B_;
  this->ControlRigComponent = param_1;
  return this;
}

// operator() @ 14a22e560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
`FControlRigSceneProxy::GetDynamicMeshElements'::__l22::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  URigHierarchy *this_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  FLinearColor_u_0 local_140;
  TVector<double>_u_0 local_130;
  double local_108;
  double local_e8;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar9 = URigHierarchy::GetFirstParent
                    (*(URigHierarchy **)((longlong)this + 8),
                     *(int *)((longlong)&param_1->_padding_ + 4));
  this_00 = *(URigHierarchy **)((longlong)this + 8);
  local_140 = FLinearColor::White.field0_0x0;
  if (iVar9 < 0) {
    local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_d8,iVar9,false);
    this_00 = *(URigHierarchy **)((longlong)this + 8);
    local_158._s_0.X = local_d8.Translation.XY.m128d_f64[0];
    local_158._s_0.Y = local_d8.Translation.XY.m128d_f64[1];
    local_158._s_0.Z = local_d8.Translation.ZW.m128d_f64[0];
  }
  URigHierarchy::GetGlobalTransformByIndex
            (this_00,&local_d8,*(int *)((longlong)&param_1->_padding_ + 4),false);
  auVar18 = *(undefined1 (*) [16])((longlong)this + 0x20);
  dVar4 = local_158._s_0.Z * *(double *)((longlong)this + 0x60);
  dVar6 = *(double *)((longlong)this + 0x68) * 0.0;
  dVar8 = *(double *)((longlong)this + 0x28);
  dVar2 = *(double *)((longlong)this + 0x50) * local_158._s_0.X;
  dVar3 = *(double *)((longlong)this + 0x58) * local_158._s_0.Y;
  uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar10 = *(undefined1 (*) [16])((longlong)this + 0x10);
  auVar16 = blendpd(auVar10,auVar18,2);
  auVar27._8_4_ = SUB84(dVar3,0);
  auVar27._0_8_ = dVar2;
  auVar27._12_4_ = uVar33;
  dVar5 = auVar18._0_8_;
  auVar28._0_8_ = auVar27._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar2;
  auVar28._8_8_ = dVar4 * auVar10._8_8_ - dVar5 * dVar3;
  auVar17._8_4_ = SUB84(dVar3,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar33;
  auVar10._8_4_ = SUB84(dVar6,0);
  auVar10._0_8_ = dVar4;
  auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar10 = blendpd(auVar17,auVar10,2);
  dVar1 = auVar18._8_8_;
  auVar11._0_8_ = auVar10._0_8_ * dVar5 - auVar16._0_8_ * dVar4;
  auVar11._8_8_ = auVar10._8_8_ * dVar1 - auVar16._8_8_ * dVar6;
  auVar10 = *(undefined1 (*) [16])((longlong)this + 0x10);
  auVar16 = blendpd(auVar28,auVar11,2);
  auVar29._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar29._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  dVar6 = auVar28._8_8_ + auVar28._8_8_;
  dVar7 = auVar11._0_8_ + auVar11._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar23._8_4_ = SUB84(dVar7,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar33;
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar6;
  auVar19._12_4_ = uVar33;
  auVar16 = blendpd(auVar19,auVar29,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar6;
  auVar24._8_8_ = auVar29._0_8_ * auVar10._8_8_ - dVar5 * dVar7;
  auVar10 = blendpd(auVar10,auVar18,2);
  auVar12._8_4_ = SUB84(auVar24._8_8_,0);
  auVar12._0_8_ = auVar24._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
  local_d8.Translation.XY.m128d_f64[0] =
       *(double *)((longlong)this + 0x50) * local_d8.Translation.XY.m128d_f64[0];
  local_d8.Translation.XY.m128d_f64[1] =
       *(double *)((longlong)this + 0x58) * local_d8.Translation.XY.m128d_f64[1];
  uVar33 = (undefined4)((ulonglong)local_d8.Translation.XY.m128d_f64[1] >> 0x20);
  auVar20._0_8_ = auVar16._0_8_ * dVar5 - auVar10._0_8_ * auVar29._0_8_;
  auVar20._8_8_ = auVar16._8_8_ * dVar1 - auVar10._8_8_ * auVar29._8_8_;
  dVar2 = dVar6 * dVar8 + dVar2 + auVar12._8_8_ + *(double *)((longlong)this + 0x30);
  dVar6 = dVar7 * dVar8 + dVar3 + auVar20._0_8_ + *(double *)((longlong)this + 0x38);
  auVar10 = *(undefined1 (*) [16])((longlong)this + 0x10);
  local_d8.Translation.ZW.m128d_f64[0] =
       local_d8.Translation.ZW.m128d_f64[0] * *(double *)((longlong)this + 0x60);
  dVar3 = *(double *)((longlong)this + 0x68) * 0.0;
  auVar16 = blendpd(auVar24,auVar20,2);
  auVar17 = blendpd(auVar10,auVar18,2);
  local_158._s_0.Z =
       auVar29._0_8_ * dVar8 + dVar4 + auVar16._0_8_ + *(double *)((longlong)this + 0x40);
  auVar30._8_4_ = SUB84(local_d8.Translation.XY.m128d_f64[1],0);
  auVar30._0_8_ = local_d8.Translation.XY.m128d_f64[0];
  auVar30._12_4_ = uVar33;
  local_158._8_4_ = SUB84(dVar6,0);
  local_158._s_0.X = dVar2;
  local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar31._0_8_ =
       auVar30._8_8_ * auVar10._0_8_ - auVar10._8_8_ * local_d8.Translation.XY.m128d_f64[0];
  auVar31._8_8_ =
       local_d8.Translation.ZW.m128d_f64[0] * auVar10._8_8_ -
       dVar5 * local_d8.Translation.XY.m128d_f64[1];
  auVar13._8_4_ = SUB84(local_d8.Translation.XY.m128d_f64[1],0);
  auVar13._0_8_ = local_d8.Translation.XY.m128d_f64[0];
  auVar13._12_4_ = uVar33;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = local_d8.Translation.ZW.m128d_f64[0];
  auVar16._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar10 = blendpd(auVar13,auVar16,2);
  auVar14._0_8_ = auVar10._0_8_ * dVar5 - auVar17._0_8_ * local_d8.Translation.ZW.m128d_f64[0];
  auVar14._8_8_ = auVar10._8_8_ * dVar1 - auVar17._8_8_ * dVar3;
  auVar10 = *(undefined1 (*) [16])((longlong)this + 0x10);
  auVar16 = blendpd(auVar31,auVar14,2);
  dVar3 = auVar31._8_8_ + auVar31._8_8_;
  dVar4 = auVar14._0_8_ + auVar14._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar32._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar32._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar25._8_4_ = SUB84(dVar4,0);
  auVar25._0_8_ = dVar3;
  auVar25._12_4_ = uVar33;
  auVar21._8_4_ = SUB84(dVar4,0);
  auVar21._0_8_ = dVar3;
  auVar21._12_4_ = uVar33;
  auVar16 = blendpd(auVar21,auVar32,2);
  auVar18 = blendpd(auVar10,auVar18,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
  auVar26._8_8_ = auVar32._0_8_ * auVar10._8_8_ - dVar5 * dVar4;
  auVar22._0_8_ = auVar16._0_8_ * dVar5 - auVar18._0_8_ * auVar32._0_8_;
  auVar22._8_8_ = auVar16._8_8_ * dVar1 - auVar18._8_8_ * auVar32._8_8_;
  auVar18._8_4_ = SUB84(auVar26._8_8_,0);
  auVar18._0_8_ = auVar26._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  dVar5 = dVar3 * dVar1 + local_d8.Translation.XY.m128d_f64[0] + auVar18._8_8_ +
          *(double *)((longlong)this + 0x30);
  dVar3 = dVar4 * dVar1 + local_d8.Translation.XY.m128d_f64[1] + auVar22._0_8_ +
          *(double *)((longlong)this + 0x38);
  auVar18 = blendpd(auVar26,auVar22,2);
  dVar2 = dVar5 - dVar2;
  local_130._8_4_ = SUB84(dVar3,0);
  local_130._0_8_ = dVar5;
  local_130._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_130._s_0.Z =
       auVar32._0_8_ * dVar1 + local_d8.Translation.ZW.m128d_f64[0] + auVar18._0_8_ +
       *(double *)((longlong)this + 0x40);
  fVar15 = (float)SQRT((dVar3 - dVar6) * (dVar3 - dVar6) + dVar2 * dVar2 +
                       (local_130._s_0.Z - local_158._s_0.Z) * (local_130._s_0.Z - local_158._s_0.Z)
                      ) * __real_3d4ccccd;
  if (*(float *)((longlong)this + 0x70) <= fVar15) {
    fVar15 = *(float *)((longlong)this + 0x70);
  }
  if (fVar15 <= __real_3dcccccd) {
    fVar15 = __real_3dcccccd;
  }
  local_108 = local_130._s_0.Z;
  local_e8 = local_158._s_0.Z;
  SkeletalDebugRendering::DrawWireBone
            (*(FPrimitiveDrawInterface **)this,(TVector<double> *)&local_158._s_0,
             (TVector<double> *)&local_130._s_0,(FLinearColor *)&local_140._s_0,SDPG_Foreground,
             fVar15 * *(float *)((longlong)this + 0x74));
  return true;
}

// GetAllocatedSize @ 14a25de30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FControlRigSceneProxy::GetAllocatedSize(FControlRigSceneProxy *this)

{
  return *(int *)&this->field_0x104 << 2;
}

// GetDynamicMeshElements @ 14a2622c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FControlRigSceneProxy::GetDynamicMeshElements
          (FControlRigSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  char cVar2;
  UControlRigComponent *pUVar3;
  UControlRig *pUVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  bool bVar19;
  FPrimitiveDrawInterface *pFVar20;
  UWorld *this_00;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  double *pdVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined4 uVar58;
  undefined4 uVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
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
  double dVar77;
  double dVar81;
  double dVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298 [4];
  uint local_294;
  uint local_290;
  uint local_28c;
  FControlRigSceneProxy *local_288;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_280;
  FMeshElementCollector *local_278;
  FSceneViewFamily *local_270;
  longlong local_268;
  UControlRig *local_260;
  code *local_258;
  FPrimitiveDrawInterface **local_250;
  undefined1 local_248 [16];
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  TTransform<double> local_1c8;
  FPrimitiveDrawInterface *local_168;
  URigHierarchy *local_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  float local_f8;
  float local_f4;
  ulonglong local_e8;
  
  dVar18 = __real_3f947ae140000000;
  fVar17 = __real_322bcc77;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_278 = param_4;
  if ((this->ControlRigComponent->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    iVar21 = param_1->ArrayNum;
    local_28c = 0;
    local_290 = param_3;
    local_288 = this;
    local_280 = param_1;
    local_270 = param_2;
    if (0 < iVar21) {
      do {
        uVar22 = local_28c;
        if ((param_3 >> (local_28c & 0x1f) & 1) != 0) {
          uVar25 = 0;
          if ((int)local_28c < iVar21) {
            uVar25 = ~local_28c >> 0x1f;
          }
          if (uVar25 == 0) {
            local_2b0 = (longlong)iVar21;
            local_2b8 = (longlong)(int)local_28c;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar20 = FMeshElementCollector::GetPDI(param_4,uVar22);
          pUVar3 = this->ControlRigComponent;
          if (((pUVar3->bDrawBones != false) &&
              ((pUVar3->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0)) &&
             (((this_00 = (UWorld *)pUVar3->_padding_, this_00 == (UWorld *)0x0 &&
               (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar3),
               this_00 == (UWorld *)0x0)) ||
              ((bVar19 = UWorld::IsPreviewWorld(this_00), bVar19 ||
               ((param_2->EngineShowFlags).Bones != 0)))))) {
            pUVar3 = this->ControlRigComponent;
            local_258 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FControlRigSceneProxy::GetDynamicMeshElements'::__l22::<lambda_1>,bool,FRigBoneElement_*>
                        ::Call;
            pUVar4 = (pUVar3->ControlRig).field0_0x0.DebugPtr;
            local_158 = pUVar3->_padding_;
            lStack_150 = pUVar3->_padding_;
            local_148 = pUVar3->_padding_;
            lStack_140 = pUVar3->_padding_;
            local_138 = pUVar3->_padding_;
            lStack_130 = pUVar3->_padding_;
            local_160 = (pUVar4->DynamicHierarchy).field0_0x0.DebugPtr;
            local_118 = pUVar3->_padding_;
            lStack_110 = pUVar3->_padding_;
            local_128 = pUVar3->_padding_;
            lStack_120 = pUVar3->_padding_;
            local_108 = pUVar3->_padding_;
            lStack_100 = pUVar3->_padding_;
            local_250 = &local_168;
            local_f4 = pUVar4->DebugBoneRadiusMultiplier;
            local_f8 = (float)((double)pUVar3->_padding_ * dVar18);
            local_168 = pFVar20;
            URigHierarchy::ForEach<FRigBoneElement>
                      (local_160,(TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_258);
          }
          param_1 = local_280;
          param_4 = local_278;
          param_3 = local_290;
          if (this->ControlRigComponent->bShowDebugDrawing != false) {
            local_260 = (this->ControlRigComponent->ControlRig).field0_0x0.DebugPtr;
            local_294 = 0;
            param_2 = local_270;
            if (0 < (int)local_260->_padding_) {
              lVar23 = 0;
              do {
                pUVar4 = local_260;
                uVar22 = local_294;
                iVar21 = (int)local_260->_padding_;
                uVar25 = 0;
                if ((int)local_294 < iVar21) {
                  uVar25 = ~local_294 >> 0x1f;
                }
                if (uVar25 == 0) {
                  local_2b8 = (longlong)(int)local_294;
                  local_2b0 = (longlong)iVar21;
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar19) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                lVar5 = pUVar4->_padding_;
                if (*(int *)(lVar23 + 0x18 + lVar5) != 0) {
                  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_1c8.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_1c8.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_1c8.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_1c8.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_1c8.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_1c8.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_1c8.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_1c8.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_1c8,(TTransform<double> *)(lVar5 + 0x40 + lVar23),
                             (TTransform<double> *)&this->ControlRigComponent->_padding_);
                  cVar2 = *(char *)(lVar23 + 8 + lVar5);
                  if (cVar2 == '\0') {
                    iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                    pdVar26 = *(double **)(lVar23 + 0x10 + lVar5);
                    pdVar1 = pdVar26 + (longlong)iVar21 * 3;
                    while( true ) {
                      if (*(int *)(lVar23 + 0x18 + lVar5) != iVar21) {
                        local_298[0] = 0;
                        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::
                        operator!='::__l2::<lambda_1>::operator()(local_298);
                      }
                      this = local_288;
                      if (pdVar26 == pdVar1) break;
                      dVar61 = local_1c8.Rotation.XY.m128d_f64[1];
                      dVar82 = *pdVar26 * local_1c8.Scale3D.XY.m128d_f64[0];
                      dVar8 = pdVar26[1] * local_1c8.Scale3D.XY.m128d_f64[1];
                      uVar59 = (undefined4)((ulonglong)dVar8 >> 0x20);
                      local_2b8 = CONCAT71(local_2b8._1_7_,1);
                      dVar14 = pdVar26[2] * local_1c8.Scale3D.ZW.m128d_f64[0];
                      dVar9 = local_1c8.Scale3D.ZW.m128d_f64[1] * 0.0;
                      dVar77 = local_1c8.Rotation.ZW.m128d_f64[0];
                      auVar78._8_4_ = SUB84(dVar8,0);
                      auVar78._0_8_ = dVar82;
                      auVar78._12_4_ = uVar59;
                      auVar29._8_4_ = SUB84(dVar8,0);
                      auVar29._0_8_ = dVar82;
                      auVar29._12_4_ = uVar59;
                      auVar79._0_8_ =
                           auVar78._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar82 * dVar61;
                      auVar79._8_8_ = dVar14 * dVar61 - dVar8 * dVar77;
                      auVar62._8_4_ = SUB84(dVar9,0);
                      auVar62._0_8_ = dVar14;
                      auVar62._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                      auVar62 = blendpd(auVar29,auVar62,2);
                      dVar81 = local_1c8.Rotation.ZW.m128d_f64[1];
                      auVar29 = blendpd((undefined1  [16])local_1c8.Rotation.XY.m128d_f64,
                                        (undefined1  [16])local_1c8.Rotation.ZW.m128d_f64,2);
                      auVar45._0_8_ = auVar62._0_8_ * dVar77 - dVar14 * auVar29._0_8_;
                      auVar45._8_8_ = auVar62._8_8_ * dVar81 - dVar9 * auVar29._8_8_;
                      auVar62 = blendpd(auVar79,auVar45,2);
                      dVar9 = auVar79._8_8_ + auVar79._8_8_;
                      dVar60 = auVar45._0_8_ + auVar45._0_8_;
                      uVar59 = (undefined4)((ulonglong)dVar60 >> 0x20);
                      auVar80._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                      auVar80._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                      auVar56._8_4_ = SUB84(dVar60,0);
                      auVar56._0_8_ = dVar9;
                      auVar56._12_4_ = uVar59;
                      auVar46._8_4_ = SUB84(dVar60,0);
                      auVar46._0_8_ = dVar9;
                      auVar46._12_4_ = uVar59;
                      auVar62 = blendpd(auVar46,auVar80,2);
                      auVar57._0_8_ =
                           auVar56._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar9 * dVar61;
                      auVar57._8_8_ = auVar80._0_8_ * dVar61 - dVar60 * dVar77;
                      auVar47._0_8_ = auVar62._0_8_ * dVar77 - auVar80._0_8_ * auVar29._0_8_;
                      auVar47._8_8_ = auVar62._8_8_ * dVar81 - auVar80._8_8_ * auVar29._8_8_;
                      auVar62 = blendpd(auVar57,auVar47,2);
                      dVar60 = dVar60 * dVar81 + dVar8 + auVar47._0_8_ +
                               local_1c8.Translation.XY.m128d_f64[1];
                      local_1e8._8_4_ = SUB84(dVar60,0);
                      local_1e8._0_8_ =
                           dVar9 * dVar81 + dVar82 + auVar57._8_8_ +
                           local_1c8.Translation.XY.m128d_f64[0];
                      local_1e8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                      local_1d8 = auVar80._0_8_ * dVar81 + dVar14 + auVar62._0_8_ +
                                  local_1c8.Translation.ZW.m128d_f64[0];
                      (**(code **)(pFVar20->_padding_ + 0x40))
                                (pFVar20,local_1e8,lVar5 + 0x20 + lVar23,
                                 *(undefined4 *)(lVar23 + 0x30 + lVar5));
                      pdVar26 = pdVar26 + 3;
                    }
                  }
                  else if (cVar2 == '\x01') {
                    iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                    local_2b8 = CONCAT71(local_2b8._1_7_,fVar17 < *(float *)(lVar23 + 0x30 + lVar5))
                    ;
                    (**(code **)(pFVar20->_padding_ + 0x20))
                              (pFVar20,CONCAT71((uint7)(uint3)(iVar21 >> 0x1f),1),iVar21 / 2,0);
                    iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                    uVar25 = 0;
                    this = local_288;
                    if (0 < iVar21 + -1) {
                      lVar27 = 0;
                      do {
                        uVar24 = uVar25 + 1;
                        uVar59 = *(undefined4 *)(lVar23 + 0x30 + lVar5);
                        pcVar7 = *(code **)(pFVar20->_padding_ + 0x30);
                        uVar22 = 0;
                        if ((int)uVar24 < iVar21) {
                          uVar22 = ~uVar24 >> 0x1f;
                        }
                        if (uVar22 == 0) {
                          local_2b8 = (longlong)(int)uVar24;
                          local_2b0 = (longlong)iVar21;
                          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar19) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                        lVar6 = *(longlong *)(lVar23 + 0x10 + lVar5);
                        dVar60 = local_1c8.Rotation.XY.m128d_f64[1];
                        iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                        dVar9 = local_1c8.Rotation.ZW.m128d_f64[0];
                        auVar62 = blendpd((undefined1  [16])local_1c8.Rotation.XY.m128d_f64,
                                          (undefined1  [16])local_1c8.Rotation.ZW.m128d_f64,2);
                        pdVar1 = (double *)(lVar6 + 0x18 + lVar27);
                        dVar77 = *pdVar1 * local_1c8.Scale3D.XY.m128d_f64[0];
                        dVar81 = pdVar1[1] * local_1c8.Scale3D.XY.m128d_f64[1];
                        uVar22 = 0;
                        if ((int)uVar25 < iVar21) {
                          uVar22 = ~uVar25 >> 0x1f;
                        }
                        dVar61 = local_1c8.Rotation.ZW.m128d_f64[1];
                        auVar71._8_4_ = SUB84(dVar81,0);
                        auVar71._0_8_ = dVar77;
                        uVar58 = (undefined4)((ulonglong)dVar81 >> 0x20);
                        auVar71._12_4_ = uVar58;
                        auVar37._8_4_ = SUB84(dVar81,0);
                        auVar37._0_8_ = dVar77;
                        auVar37._12_4_ = uVar58;
                        dVar14 = *(double *)(lVar6 + 0x28 + lVar27) *
                                 local_1c8.Scale3D.ZW.m128d_f64[0];
                        dVar82 = local_1c8.Scale3D.ZW.m128d_f64[1] * 0.0;
                        auVar12._8_4_ = SUB84(dVar82,0);
                        auVar12._0_8_ = dVar14;
                        auVar12._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
                        auVar29 = blendpd(auVar37,auVar12,2);
                        auVar72._0_8_ =
                             auVar71._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar77 * dVar60;
                        auVar72._8_8_ = dVar14 * dVar60 - dVar81 * dVar9;
                        auVar38._0_8_ = auVar29._0_8_ * dVar9 - dVar14 * auVar62._0_8_;
                        auVar38._8_8_ = auVar29._8_8_ * dVar61 - dVar82 * auVar62._8_8_;
                        auVar29 = blendpd(auVar72,auVar38,2);
                        dVar82 = auVar72._8_8_ + auVar72._8_8_;
                        dVar8 = auVar38._0_8_ + auVar38._0_8_;
                        uVar58 = (undefined4)((ulonglong)dVar8 >> 0x20);
                        auVar73._0_8_ = auVar29._0_8_ + auVar29._0_8_;
                        auVar73._8_8_ = auVar29._8_8_ + auVar29._8_8_;
                        auVar52._8_4_ = SUB84(dVar8,0);
                        auVar52._0_8_ = dVar82;
                        auVar52._12_4_ = uVar58;
                        auVar39._8_4_ = SUB84(dVar8,0);
                        auVar39._0_8_ = dVar82;
                        auVar39._12_4_ = uVar58;
                        auVar29 = blendpd(auVar39,auVar73,2);
                        auVar53._0_8_ =
                             auVar52._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar82 * dVar60;
                        auVar53._8_8_ = auVar73._0_8_ * dVar60 - dVar8 * dVar9;
                        auVar40._0_8_ = auVar29._0_8_ * dVar9 - auVar73._0_8_ * auVar62._0_8_;
                        auVar40._8_8_ = auVar29._8_8_ * dVar61 - auVar73._8_8_ * auVar62._8_8_;
                        auVar62 = blendpd(auVar53,auVar40,2);
                        dVar9 = dVar8 * dVar61 + dVar81 + auVar40._0_8_ +
                                local_1c8.Translation.XY.m128d_f64[1];
                        local_208 = auVar73._0_8_ * dVar61 + dVar14 + auVar62._0_8_ +
                                    local_1c8.Translation.ZW.m128d_f64[0];
                        local_218._8_4_ = SUB84(dVar9,0);
                        local_218._0_8_ =
                             dVar82 * dVar61 + dVar77 + auVar53._8_8_ +
                             local_1c8.Translation.XY.m128d_f64[0];
                        local_218._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                        if (uVar22 == 0) {
                          local_2b8 = (longlong)(int)uVar25;
                          local_2b0 = (longlong)iVar21;
                          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar19) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                        lVar6 = *(longlong *)(lVar23 + 0x10 + lVar5);
                        local_2a0 = 0;
                        auVar64._4_4_ = local_1c8.Rotation.XY.m128d_f64[0]._4_4_;
                        auVar64._0_4_ = local_1c8.Rotation.XY.m128d_f64[0]._0_4_;
                        auVar64._8_4_ = local_1c8.Rotation.XY.m128d_f64[1]._0_4_;
                        auVar64._12_4_ = local_1c8.Rotation.XY.m128d_f64[1]._4_4_;
                        local_2a8 = 0;
                        pdVar1 = (double *)(lVar6 + lVar27);
                        dVar81 = *pdVar1 * local_1c8.Scale3D.XY.m128d_f64[0];
                        dVar82 = pdVar1[1] * local_1c8.Scale3D.XY.m128d_f64[1];
                        dVar77 = *(double *)(lVar6 + 0x10 + lVar27) *
                                 local_1c8.Scale3D.ZW.m128d_f64[0];
                        dVar9 = local_1c8.Scale3D.ZW.m128d_f64[1] * 0.0;
                        auVar16._4_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._4_4_;
                        auVar16._0_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._0_4_;
                        auVar16._8_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._0_4_;
                        auVar16._12_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._4_4_;
                        auVar29 = blendpd(auVar64,auVar16,2);
                        auVar74._8_4_ = SUB84(dVar82,0);
                        auVar74._0_8_ = dVar81;
                        uVar58 = (undefined4)((ulonglong)dVar82 >> 0x20);
                        auVar74._12_4_ = uVar58;
                        auVar41._8_4_ = SUB84(dVar82,0);
                        auVar41._0_8_ = dVar81;
                        auVar41._12_4_ = uVar58;
                        local_2b0 = CONCAT44(local_2b0._4_4_,uVar59);
                        auVar75._0_8_ =
                             auVar74._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[0]._0_4_) -
                             dVar81 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                       local_1c8.Rotation.XY.m128d_f64[1]._0_4_);
                        auVar75._8_8_ =
                             dVar77 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                       local_1c8.Rotation.XY.m128d_f64[1]._0_4_) -
                             dVar82 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                       local_1c8.Rotation.ZW.m128d_f64[0]._0_4_);
                        local_2b8 = CONCAT71(local_2b8._1_7_,1);
                        auVar13._8_4_ = SUB84(dVar9,0);
                        auVar13._0_8_ = dVar77;
                        auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                        auVar62 = blendpd(auVar41,auVar13,2);
                        auVar42._0_8_ =
                             auVar62._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[0]._0_4_) -
                             dVar77 * auVar29._0_8_;
                        auVar42._8_8_ =
                             auVar62._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) -
                             dVar9 * auVar29._8_8_;
                        auVar62 = blendpd(auVar75,auVar42,2);
                        dVar9 = auVar75._8_8_ + auVar75._8_8_;
                        dVar60 = auVar42._0_8_ + auVar42._0_8_;
                        uVar59 = (undefined4)((ulonglong)dVar60 >> 0x20);
                        auVar76._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                        auVar76._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                        auVar54._8_4_ = SUB84(dVar60,0);
                        auVar54._0_8_ = dVar9;
                        auVar54._12_4_ = uVar59;
                        auVar43._8_4_ = SUB84(dVar60,0);
                        auVar43._0_8_ = dVar9;
                        auVar43._12_4_ = uVar59;
                        auVar62 = blendpd(auVar43,auVar76,2);
                        auVar55._0_8_ =
                             auVar54._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[0]._0_4_) -
                             dVar9 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                      local_1c8.Rotation.XY.m128d_f64[1]._0_4_);
                        auVar55._8_8_ =
                             auVar76._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[1]._0_4_) -
                             dVar60 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                       local_1c8.Rotation.ZW.m128d_f64[0]._0_4_);
                        auVar44._0_8_ =
                             auVar62._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[0]._0_4_) -
                             auVar76._0_8_ * auVar29._0_8_;
                        auVar44._8_8_ =
                             auVar62._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) -
                             auVar76._8_8_ * auVar29._8_8_;
                        auVar62 = blendpd(auVar55,auVar44,2);
                        dVar60 = dVar60 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                           local_1c8.Rotation.ZW.m128d_f64[1]._0_4_)
                                 + dVar82 + auVar44._0_8_ + local_1c8.Translation.XY.m128d_f64[1];
                        local_1f0 = auVar76._0_8_ *
                                    (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                     local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) +
                                    dVar77 + auVar62._0_8_ + local_1c8.Translation.ZW.m128d_f64[0];
                        local_200._8_4_ = SUB84(dVar60,0);
                        local_200._0_8_ =
                             dVar9 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) +
                             dVar81 + auVar55._8_8_ + local_1c8.Translation.XY.m128d_f64[0];
                        local_200._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                        (*pcVar7)(pFVar20,local_200,local_218);
                        iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                        uVar25 = uVar25 + 2;
                        lVar27 = lVar27 + 0x30;
                        this = local_288;
                        uVar22 = local_294;
                      } while ((int)uVar25 < iVar21 + -1);
                    }
                  }
                  else if (cVar2 == '\x02') {
                    local_2b8 = CONCAT71(local_2b8._1_7_,fVar17 < *(float *)(lVar23 + 0x30 + lVar5))
                    ;
                    (**(code **)(pFVar20->_padding_ + 0x20))
                              (pFVar20,1,*(int *)(lVar23 + 0x18 + lVar5) + -1);
                    iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                    if (0 < iVar21 + -1) {
                      lVar27 = 0;
                      uVar25 = 0;
                      do {
                        uVar24 = uVar25 + 1;
                        uVar59 = *(undefined4 *)(lVar23 + 0x30 + lVar5);
                        pcVar7 = *(code **)(pFVar20->_padding_ + 0x30);
                        uVar22 = 0;
                        if ((int)uVar24 < iVar21) {
                          uVar22 = ~uVar24 >> 0x1f;
                        }
                        if (uVar22 == 0) {
                          local_2b0 = (longlong)iVar21;
                          local_2b8 = (longlong)(int)uVar24;
                          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar19) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                        local_268 = lVar27 + 0x18;
                        lVar6 = *(longlong *)(lVar23 + 0x10 + lVar5);
                        dVar60 = local_1c8.Rotation.XY.m128d_f64[1];
                        iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                        dVar9 = local_1c8.Rotation.ZW.m128d_f64[0];
                        auVar62 = blendpd((undefined1  [16])local_1c8.Rotation.XY.m128d_f64,
                                          (undefined1  [16])local_1c8.Rotation.ZW.m128d_f64,2);
                        pdVar1 = (double *)(lVar6 + local_268);
                        dVar77 = *pdVar1 * local_1c8.Scale3D.XY.m128d_f64[0];
                        dVar81 = pdVar1[1] * local_1c8.Scale3D.XY.m128d_f64[1];
                        uVar22 = 0;
                        if ((int)uVar25 < iVar21) {
                          uVar22 = ~uVar25 >> 0x1f;
                        }
                        dVar61 = local_1c8.Rotation.ZW.m128d_f64[1];
                        auVar65._8_4_ = SUB84(dVar81,0);
                        auVar65._0_8_ = dVar77;
                        uVar58 = (undefined4)((ulonglong)dVar81 >> 0x20);
                        auVar65._12_4_ = uVar58;
                        auVar28._8_4_ = SUB84(dVar81,0);
                        auVar28._0_8_ = dVar77;
                        auVar28._12_4_ = uVar58;
                        dVar14 = *(double *)(lVar6 + 0x10 + local_268) *
                                 local_1c8.Scale3D.ZW.m128d_f64[0];
                        dVar82 = local_1c8.Scale3D.ZW.m128d_f64[1] * 0.0;
                        auVar10._8_4_ = SUB84(dVar82,0);
                        auVar10._0_8_ = dVar14;
                        auVar10._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
                        auVar29 = blendpd(auVar28,auVar10,2);
                        auVar66._0_8_ =
                             auVar65._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar60 * dVar77;
                        auVar66._8_8_ = dVar14 * dVar60 - dVar9 * dVar81;
                        auVar30._0_8_ = auVar29._0_8_ * dVar9 - auVar62._0_8_ * dVar14;
                        auVar30._8_8_ = auVar29._8_8_ * dVar61 - auVar62._8_8_ * dVar82;
                        auVar29 = blendpd(auVar66,auVar30,2);
                        dVar82 = auVar66._8_8_ + auVar66._8_8_;
                        dVar8 = auVar30._0_8_ + auVar30._0_8_;
                        uVar58 = (undefined4)((ulonglong)dVar8 >> 0x20);
                        auVar67._0_8_ = auVar29._0_8_ + auVar29._0_8_;
                        auVar67._8_8_ = auVar29._8_8_ + auVar29._8_8_;
                        auVar48._8_4_ = SUB84(dVar8,0);
                        auVar48._0_8_ = dVar82;
                        auVar48._12_4_ = uVar58;
                        auVar31._8_4_ = SUB84(dVar8,0);
                        auVar31._0_8_ = dVar82;
                        auVar31._12_4_ = uVar58;
                        auVar29 = blendpd(auVar31,auVar67,2);
                        auVar49._0_8_ =
                             auVar48._8_8_ * local_1c8.Rotation.XY.m128d_f64[0] - dVar82 * dVar60;
                        auVar49._8_8_ = auVar67._0_8_ * dVar60 - dVar8 * dVar9;
                        auVar32._0_8_ = auVar29._0_8_ * dVar9 - auVar67._0_8_ * auVar62._0_8_;
                        auVar32._8_8_ = auVar29._8_8_ * dVar61 - auVar67._8_8_ * auVar62._8_8_;
                        auVar62 = blendpd(auVar49,auVar32,2);
                        dVar9 = dVar8 * dVar61 + dVar81 + auVar32._0_8_ +
                                local_1c8.Translation.XY.m128d_f64[1];
                        local_238 = auVar67._0_8_ * dVar61 + dVar14 + auVar62._0_8_ +
                                    local_1c8.Translation.ZW.m128d_f64[0];
                        local_248._8_4_ = SUB84(dVar9,0);
                        local_248._0_8_ =
                             dVar82 * dVar61 + dVar77 + auVar49._8_8_ +
                             local_1c8.Translation.XY.m128d_f64[0];
                        local_248._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                        if (uVar22 == 0) {
                          local_2b8 = (longlong)(int)uVar25;
                          local_2b0 = (longlong)iVar21;
                          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar19) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                        lVar6 = *(longlong *)(lVar23 + 0x10 + lVar5);
                        local_2a0 = 0;
                        auVar63._4_4_ = local_1c8.Rotation.XY.m128d_f64[0]._4_4_;
                        auVar63._0_4_ = local_1c8.Rotation.XY.m128d_f64[0]._0_4_;
                        auVar63._8_4_ = local_1c8.Rotation.XY.m128d_f64[1]._0_4_;
                        auVar63._12_4_ = local_1c8.Rotation.XY.m128d_f64[1]._4_4_;
                        local_2a8 = 0;
                        pdVar1 = (double *)(lVar6 + lVar27);
                        dVar81 = *pdVar1 * local_1c8.Scale3D.XY.m128d_f64[0];
                        dVar82 = pdVar1[1] * local_1c8.Scale3D.XY.m128d_f64[1];
                        dVar77 = *(double *)(lVar6 + 0x10 + lVar27) *
                                 local_1c8.Scale3D.ZW.m128d_f64[0];
                        dVar9 = local_1c8.Scale3D.ZW.m128d_f64[1] * 0.0;
                        auVar15._4_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._4_4_;
                        auVar15._0_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._0_4_;
                        auVar15._8_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._0_4_;
                        auVar15._12_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._4_4_;
                        auVar29 = blendpd(auVar63,auVar15,2);
                        auVar68._8_4_ = SUB84(dVar82,0);
                        auVar68._0_8_ = dVar81;
                        uVar58 = (undefined4)((ulonglong)dVar82 >> 0x20);
                        auVar68._12_4_ = uVar58;
                        auVar33._8_4_ = SUB84(dVar82,0);
                        auVar33._0_8_ = dVar81;
                        auVar33._12_4_ = uVar58;
                        local_2b0 = CONCAT44(local_2b0._4_4_,uVar59);
                        auVar69._0_8_ =
                             auVar68._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[0]._0_4_) -
                             dVar81 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                       local_1c8.Rotation.XY.m128d_f64[1]._0_4_);
                        auVar69._8_8_ =
                             dVar77 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                       local_1c8.Rotation.XY.m128d_f64[1]._0_4_) -
                             dVar82 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                       local_1c8.Rotation.ZW.m128d_f64[0]._0_4_);
                        local_2b8 = CONCAT71(local_2b8._1_7_,1);
                        auVar11._8_4_ = SUB84(dVar9,0);
                        auVar11._0_8_ = dVar77;
                        auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                        auVar62 = blendpd(auVar33,auVar11,2);
                        auVar34._0_8_ =
                             auVar62._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[0]._0_4_) -
                             dVar77 * auVar29._0_8_;
                        auVar34._8_8_ =
                             auVar62._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) -
                             dVar9 * auVar29._8_8_;
                        auVar62 = blendpd(auVar69,auVar34,2);
                        dVar9 = auVar69._8_8_ + auVar69._8_8_;
                        dVar60 = auVar34._0_8_ + auVar34._0_8_;
                        uVar59 = (undefined4)((ulonglong)dVar60 >> 0x20);
                        auVar70._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                        auVar70._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                        auVar50._8_4_ = SUB84(dVar60,0);
                        auVar50._0_8_ = dVar9;
                        auVar50._12_4_ = uVar59;
                        auVar35._8_4_ = SUB84(dVar60,0);
                        auVar35._0_8_ = dVar9;
                        auVar35._12_4_ = uVar59;
                        auVar62 = blendpd(auVar35,auVar70,2);
                        auVar51._0_8_ =
                             auVar50._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[0]._0_4_) -
                             dVar9 * (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                                      local_1c8.Rotation.XY.m128d_f64[1]._0_4_);
                        auVar51._8_8_ =
                             auVar70._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.XY.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.XY.m128d_f64[1]._0_4_) -
                             dVar60 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                       local_1c8.Rotation.ZW.m128d_f64[0]._0_4_);
                        auVar36._0_8_ =
                             auVar62._0_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[0]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[0]._0_4_) -
                             auVar70._0_8_ * auVar29._0_8_;
                        auVar36._8_8_ =
                             auVar62._8_8_ *
                             (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                              local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) -
                             auVar70._8_8_ * auVar29._8_8_;
                        auVar62 = blendpd(auVar51,auVar36,2);
                        dVar60 = dVar60 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                           local_1c8.Rotation.ZW.m128d_f64[1]._0_4_)
                                 + dVar82 + auVar36._0_8_ + local_1c8.Translation.XY.m128d_f64[1];
                        local_220 = auVar70._0_8_ *
                                    (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                     local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) +
                                    dVar77 + auVar62._0_8_ + local_1c8.Translation.ZW.m128d_f64[0];
                        local_230._8_4_ = SUB84(dVar60,0);
                        local_230._0_8_ =
                             dVar9 * (double)CONCAT44(local_1c8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_) +
                             dVar81 + auVar51._8_8_ + local_1c8.Translation.XY.m128d_f64[0];
                        local_230._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                        (*pcVar7)(pFVar20,local_230,local_248);
                        iVar21 = *(int *)(lVar23 + 0x18 + lVar5);
                        this = local_288;
                        lVar27 = local_268;
                        uVar22 = local_294;
                        uVar25 = uVar24;
                      } while ((int)uVar24 < iVar21 + -1);
                    }
                  }
                }
                local_294 = uVar22 + 1;
                lVar23 = lVar23 + 0xd0;
                param_1 = local_280;
                param_2 = local_270;
                param_4 = local_278;
                uVar22 = local_28c;
                param_3 = local_290;
              } while ((int)local_294 < (int)local_260->_padding_);
            }
          }
        }
        iVar21 = param_1->ArrayNum;
        local_28c = uVar22 + 1;
      } while ((int)local_28c < iVar21);
    }
  }
  return;
}

// GetMemoryFootprint @ 14a265250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FControlRigSceneProxy::GetMemoryFootprint(FControlRigSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x290;
}

// GetTypeHash @ 14a26cbb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ulong64 __thiscall FControlRigSceneProxy::GetTypeHash(FControlRigSceneProxy *this)

{
  return 0x1552adb18;
}

// GetViewRelevance @ 14a26dc30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FControlRigSceneProxy::GetViewRelevance
          (FControlRigSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 0x80;
  return __return_storage_ptr__;
}

