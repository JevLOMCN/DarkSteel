// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FPrecomputedLightVolume @ 14834b310

FPrecomputedLightVolume * __thiscall
FPrecomputedLightVolume::FPrecomputedLightVolume(FPrecomputedLightVolume *this)

{
  this->Data = (FPrecomputedLightVolumeData *)0x0;
  this->bAddedToScene = false;
  this->OctreeForRendering = (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *)0x0;
  (this->WorldOriginOffset).field0_0x0._s_0.X = 0.0;
  (this->WorldOriginOffset).field0_0x0._s_0.Y = 0.0;
  (this->WorldOriginOffset).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~FPrecomputedLightVolume @ 14834d4f0

void __thiscall FPrecomputedLightVolume::~FPrecomputedLightVolume(FPrecomputedLightVolume *this)

{
  return;
}

// operator() @ 148350df0

void __thiscall
`FPrecomputedLightVolume::InterpolateIncidentRadiancePoint'::__l14::<lambda_1>::operator()
          (void *this,TVolumeLightingSample<3> *param_1)

{
  byte bVar1;
  byte bVar2;
  double *pdVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  
  fVar42 = __real_3f800000;
  pdVar3 = *(double **)((longlong)this + 0x20);
  dVar7 = (double)(param_1->Position).field0_0x0._s_0.Y - pdVar3[1];
  dVar5 = (double)(param_1->Position).field0_0x0._s_0.Z - pdVar3[2];
  dVar6 = (double)(param_1->Position).field0_0x0._s_0.X - *pdVar3;
  fVar43 = param_1->Radius * param_1->Radius;
  fVar44 = (float)(dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5);
  if (fVar44 < fVar43) {
    pfVar4 = *(float **)this;
    fVar43 = __real_3f800000 / fVar43;
    fVar43 = (__real_3f800000 - fVar43 * fVar44) * fVar43;
    fVar44 = (param_1->Lighting).R.V[4];
    fVar8 = (param_1->Lighting).R.V[5];
    fVar9 = (param_1->Lighting).R.V[6];
    fVar10 = (param_1->Lighting).R.V[7];
    fVar11 = (param_1->Lighting).R.V[8];
    fVar12 = (param_1->Lighting).R.V[9];
    fVar13 = (param_1->Lighting).R.V[10];
    fVar14 = (param_1->Lighting).R.V[0xb];
    fVar15 = (param_1->Lighting).G.V[4];
    fVar16 = (param_1->Lighting).G.V[5];
    fVar17 = (param_1->Lighting).G.V[6];
    fVar18 = (param_1->Lighting).G.V[7];
    fVar19 = (param_1->Lighting).G.V[0];
    fVar20 = (param_1->Lighting).G.V[1];
    fVar21 = (param_1->Lighting).G.V[2];
    fVar22 = (param_1->Lighting).G.V[3];
    fVar23 = (param_1->Lighting).G.V[8];
    fVar24 = (param_1->Lighting).G.V[9];
    fVar25 = (param_1->Lighting).G.V[10];
    fVar26 = (param_1->Lighting).G.V[0xb];
    fVar27 = (param_1->Lighting).B.V[0];
    fVar28 = (param_1->Lighting).B.V[1];
    fVar29 = (param_1->Lighting).B.V[2];
    fVar30 = (param_1->Lighting).B.V[3];
    fVar31 = (param_1->Lighting).R.V[1];
    fVar32 = (param_1->Lighting).R.V[2];
    fVar33 = (param_1->Lighting).R.V[3];
    fVar34 = (param_1->Lighting).B.V[4];
    fVar35 = (param_1->Lighting).B.V[5];
    fVar36 = (param_1->Lighting).B.V[6];
    fVar37 = (param_1->Lighting).B.V[7];
    fVar38 = (param_1->Lighting).B.V[8];
    fVar39 = (param_1->Lighting).B.V[9];
    fVar40 = (param_1->Lighting).B.V[10];
    fVar41 = (param_1->Lighting).B.V[0xb];
    *pfVar4 = fVar43 * (param_1->Lighting).R.V[0] + *pfVar4;
    pfVar4[1] = fVar43 * fVar31 + pfVar4[1];
    pfVar4[2] = fVar43 * fVar32 + pfVar4[2];
    pfVar4[3] = fVar43 * fVar33 + pfVar4[3];
    pfVar4[4] = fVar43 * fVar44 + pfVar4[4];
    pfVar4[5] = fVar43 * fVar8 + pfVar4[5];
    pfVar4[6] = fVar43 * fVar9 + pfVar4[6];
    pfVar4[7] = fVar43 * fVar10 + pfVar4[7];
    fVar44 = __real_3c008081;
    pfVar4[8] = fVar43 * fVar11 + pfVar4[8];
    pfVar4[9] = fVar43 * fVar12 + pfVar4[9];
    pfVar4[10] = fVar43 * fVar13 + pfVar4[10];
    pfVar4[0xb] = fVar43 * fVar14 + pfVar4[0xb];
    pfVar4[0xc] = fVar43 * fVar19 + pfVar4[0xc];
    pfVar4[0xd] = fVar43 * fVar20 + pfVar4[0xd];
    pfVar4[0xe] = fVar43 * fVar21 + pfVar4[0xe];
    pfVar4[0xf] = fVar43 * fVar22 + pfVar4[0xf];
    dVar5 = (double)fVar43;
    pfVar4[0x10] = fVar43 * fVar15 + pfVar4[0x10];
    pfVar4[0x11] = fVar43 * fVar16 + pfVar4[0x11];
    pfVar4[0x12] = fVar43 * fVar17 + pfVar4[0x12];
    pfVar4[0x13] = fVar43 * fVar18 + pfVar4[0x13];
    pfVar4[0x14] = fVar43 * fVar23 + pfVar4[0x14];
    pfVar4[0x15] = fVar43 * fVar24 + pfVar4[0x15];
    pfVar4[0x16] = fVar43 * fVar25 + pfVar4[0x16];
    pfVar4[0x17] = fVar43 * fVar26 + pfVar4[0x17];
    pfVar4[0x18] = fVar43 * fVar27 + pfVar4[0x18];
    pfVar4[0x19] = fVar43 * fVar28 + pfVar4[0x19];
    pfVar4[0x1a] = fVar43 * fVar29 + pfVar4[0x1a];
    pfVar4[0x1b] = fVar43 * fVar30 + pfVar4[0x1b];
    pfVar4[0x1c] = fVar43 * fVar34 + pfVar4[0x1c];
    pfVar4[0x1d] = fVar43 * fVar35 + pfVar4[0x1d];
    pfVar4[0x1e] = fVar43 * fVar36 + pfVar4[0x1e];
    pfVar4[0x1f] = fVar43 * fVar37 + pfVar4[0x1f];
    pfVar4[0x20] = fVar43 * fVar38 + pfVar4[0x20];
    pfVar4[0x21] = fVar43 * fVar39 + pfVar4[0x21];
    pfVar4[0x22] = fVar43 * fVar40 + pfVar4[0x22];
    pfVar4[0x23] = fVar43 * fVar41 + pfVar4[0x23];
    pdVar3 = *(double **)((longlong)this + 8);
    bVar1 = (param_1->PackedSkyBentNormal).field0_0x0._s_0.B;
    bVar2 = (param_1->PackedSkyBentNormal).field0_0x0._s_0.R;
    pdVar3[1] = (double)((float)(param_1->PackedSkyBentNormal).field0_0x0._s_0.G * fVar44 - fVar42)
                * dVar5 + pdVar3[1];
    pdVar3[2] = (double)((float)bVar1 * fVar44 - fVar42) * dVar5 + pdVar3[2];
    *pdVar3 = (double)((float)bVar2 * fVar44 - fVar42) * dVar5 + *pdVar3;
    **(float **)((longlong)this + 0x10) =
         fVar43 * param_1->DirectionalLightShadowing + **(float **)((longlong)this + 0x10);
    **(float **)((longlong)this + 0x18) = fVar43 + **(float **)((longlong)this + 0x18);
  }
  return;
}

// AddToScene @ 1483559f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPrecomputedLightVolume::AddToScene
          (FPrecomputedLightVolume *this,FSceneInterface *param_1,UMapBuildDataRegistry *param_2,
          FGuid *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPrecomputedLightVolumeData *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  FGuid local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (this->bAddedToScene != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAddedToScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                       ,0x153,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != (UMapBuildDataRegistry *)0x0) {
    local_b8.A = param_3->A;
    local_b8.B = param_3->B;
    local_b8.C = param_3->C;
    local_b8.D = param_3->D;
    pFVar3 = UMapBuildDataRegistry::GetLevelPrecomputedLightVolumeBuildData(param_2,&local_b8);
    if (((pFVar3 != (FPrecomputedLightVolumeData *)0x0) && (pFVar3->bInitialized != false)) &&
       (param_1 != (FSceneInterface *)0x0)) {
      this->bAddedToScene = true;
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x20,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FPrecomputedLightVolume::AddToScene'::`15'::<lambda_1>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)this;
      local_80[2] = (code *)pFVar3;
      local_80[3] = (code *)param_1;
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FPrecomputedLightVolume::AddToScene'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPrecomputedLightVolume::AddToScene_::__l15::TSTR_SetVolumeDataCommand354>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FPrecomputedLightVolume::AddToScene'::__l15::TSTR_SetVolumeDataCommand354>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar4);
        uVar6 = (ulonglong)local_48;
        if (2 < uVar6) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar5 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar5 = local_50;
            }
            (**(code **)(*ppcVar5 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar5 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar5 = local_80;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
      (**(code **)(param_1->_padding_ + 0x1e8))(param_1,this);
    }
  }
  return;
}

// ApplyWorldOffset @ 148358960

void __thiscall
FPrecomputedLightVolume::ApplyWorldOffset(FPrecomputedLightVolume *this,TVector<double> *param_1)

{
  (this->WorldOriginOffset).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->WorldOriginOffset).field0_0x0._s_0.X;
  (this->WorldOriginOffset).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y + (this->WorldOriginOffset).field0_0x0._s_0.Y;
  (this->WorldOriginOffset).field0_0x0._s_0.Z =
       (param_1->field0_0x0)._s_0.Z + (this->WorldOriginOffset).field0_0x0._s_0.Z;
  return;
}

// DebugDrawSamples @ 14836a480

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
FPrecomputedLightVolume::DebugDrawSamples
          (FPrecomputedLightVolume *this,FPrimitiveDrawInterface *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  float *pfVar7;
  float *pfVar8;
  FScriptContainerElement *pFVar9;
  float *pfVar10;
  float fVar11;
  undefined1 local_res18 [8];
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *local_res20;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double local_80;
  double local_78;
  
  fVar4 = __real_3ea2f983;
  uVar3 = __real_41200000;
  local_res20 = this->OctreeForRendering;
  uVar1 = (local_res20->TreeElements).ArrayNum;
  uVar5 = (ulonglong)(int)uVar1;
  pFVar9 = (local_res20->TreeElements).AllocatorInstance.Data;
  pFVar6 = pFVar9 + uVar5 * 0x10;
  while( true ) {
    if ((local_res20->TreeElements).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar6) break;
    pfVar10 = *(float **)pFVar9;
    iVar2 = *(int *)(pFVar9 + 8);
    pfVar7 = pfVar10 + 0x1c;
    pfVar8 = pfVar10 + (longlong)iVar2 * 0x2c;
    while( true ) {
      if (*(int *)(pFVar9 + 8) != iVar2) {
        `TCheckedPointerIterator<TVolumeLightingSample<3>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pfVar10 == pfVar8) break;
      if (param_2) {
        fVar11 = pfVar7[0xd];
        uStack_9c = 0x3f800000;
        local_a8 = fVar11;
        fStack_a4 = fVar11;
      }
      else {
        local_a8 = pfVar7[-0x18] * fVar4;
        uStack_9c = 0x3db7e5af;
        fStack_a4 = pfVar7[-0xc] * fVar4;
        fVar11 = *pfVar7 * fVar4;
      }
      local_98 = CONCAT44(fStack_a4,local_a8);
      uStack_90 = CONCAT44(uStack_9c,fVar11);
      local_88 = (double)*pfVar10 + (this->WorldOriginOffset).field0_0x0._s_0.X;
      local_80 = (double)pfVar7[-0x1b] + (this->WorldOriginOffset).field0_0x0._s_0.Y;
      local_78 = (double)pfVar7[-0x1a] + (this->WorldOriginOffset).field0_0x0._s_0.Z;
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_88,&local_98,uVar3,0);
      pfVar10 = pfVar10 + 0x2c;
      pfVar7 = pfVar7 + 0x2c;
    }
    pFVar9 = pFVar9 + 0x10;
    uVar5 = (ulonglong)uVar1;
  }
  return;
}

// InterpolateIncidentRadianceBlock @ 1483916a0

void __thiscall
FPrecomputedLightVolume::InterpolateIncidentRadianceBlock
          (FPrecomputedLightVolume *this,FBoxCenterAndExtent *param_1,TIntVector3<int> *param_2,
          TIntVector3<int> *param_3,TIntVector3<int> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<TSHVectorRGB<2>,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  <lambda_1> local_1f8 [4];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  float local_1e4;
  float local_1e0;
  TArray<TSHVectorRGB<2>,TSizedDefaultAllocator<32>_> *local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  longlong local_1b8;
  float *local_1b0;
  TIntVector3<int> *local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  TVector4<double>_u_0 local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  local_1d8 = param_6;
  local_1a8 = param_3;
  if ((this == (FPrecomputedLightVolume *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                          ,0x1b0,
                          L"FPrecomputedLightVolume::InterpolateIncidentRadianceBlock() is called on a null volume. Fix the call site."
                         ), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->Data->bInitialized != false) {
    local_158 = (param_1->Extent).field0_0x0._s_0.X;
    dStack_150 = (param_1->Extent).field0_0x0._s_0.Y;
    local_178._s_0.W = (param_1->Center).field0_0x0._s_0.W;
    local_148 = (param_1->Extent).field0_0x0._s_0.Z;
    dStack_140 = (param_1->Extent).field0_0x0._s_0.W;
    local_178._s_0.X =
         (param_1->Center).field0_0x0._s_0.X - (this->WorldOriginOffset).field0_0x0._s_0.X;
    local_178._s_0.Y =
         (param_1->Center).field0_0x0._s_0.Y - (this->WorldOriginOffset).field0_0x0._s_0.Y;
    local_178._s_0.Z =
         (param_1->Center).field0_0x0._s_0.Z - (this->WorldOriginOffset).field0_0x0._s_0.Z;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FPrecomputedLightVolume::InterpolateIncidentRadianceBlock'::__l14::
             _dynamic_atexit_destructor_for__PotentiallyIntersectingSamples__);
      _Init_thread_footer(&::_TSS0);
    }
    PotentiallyIntersectingSamples.ArrayNum = 0;
    if (PotentiallyIntersectingSamples.ArrayMax < 100) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,100,&PotentiallyIntersectingSamples.AllocatorInstance,0,
                 &PotentiallyIntersectingSamples.ArrayMax);
    }
    local_1f8[0] = (<lambda_1>)0x0;
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    FindElementsWithBoundsTestInternal<_FPrecomputedLightVolume::InterpolateIncidentRadianceBlock_::__l14::<lambda_1>_>
              (this->OctreeForRendering,0,&this->OctreeForRendering->RootNodeContext,
               (FBoxCenterAndExtent *)&local_178._s_0,local_1f8);
    local_1e8 = 0;
    local_1f4 = ((param_4->field0_0x0)._s_0.Z * (param_3->field0_0x0)._s_0.Y +
                (param_4->field0_0x0)._s_0.Y) * (param_3->field0_0x0)._s_0.X +
                (param_4->field0_0x0)._s_0.X;
    if (0 < PotentiallyIntersectingSamples.ArrayNum) {
      local_1b8 = 0;
      iVar16 = PotentiallyIntersectingSamples.ArrayNum;
      do {
        lVar17 = local_1b8;
        fVar11 = __real_bf800000;
        fVar25 = __real_3f800000;
        uVar14 = 0;
        if ((int)local_1e8 < iVar16) {
          uVar14 = ~local_1e8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar16 = PotentiallyIntersectingSamples.ArrayNum, bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar20 = *(float **)(PotentiallyIntersectingSamples.AllocatorInstance.Data + lVar17);
        fVar38 = pfVar20[3] * pfVar20[3];
        fVar25 = fVar25 / fVar38;
        local_1e4 = fVar11 / (fVar38 * fVar38);
        dVar5 = (local_178._s_0.X - local_158) - (double)*pfVar20;
        local_188 = *(undefined8 *)&param_2->field0_0x0;
        dVar7 = local_158 / (double)(int)local_188;
        local_1ec = 0;
        dVar24 = dStack_150 / (double)(int)((ulonglong)local_188 >> 0x20);
        dVar24 = dVar24 + dVar24;
        dVar21 = local_148 / (double)(param_2->field0_0x0)._s_0.Z;
        auVar22._0_8_ = dVar21 + dVar21;
        dVar21 = (local_178._s_0.Y - dStack_150) - (double)pfVar20[1];
        dVar23 = (local_178._s_0.Z - local_148) - (double)pfVar20[2];
        local_1e0 = fVar25;
        local_1c8 = auVar22._0_8_;
        local_1c0 = dVar23;
        local_1b0 = pfVar20;
        local_1a0 = dVar24;
        local_198 = dVar5;
        local_190 = dVar21;
        if (0 < (param_2->field0_0x0)._s_0.Z) {
          auVar22._8_8_ = 0;
          do {
            local_1f0 = 0;
            iVar16 = local_1ec;
            local_1c0 = dVar23;
            if (0 < (param_2->field0_0x0)._s_0.Y) {
              do {
                fVar11 = local_1e4;
                iVar19 = 0;
                iVar15 = local_1f0;
                dVar12 = dVar5;
                local_1d0 = dVar21;
                if (0 < (param_2->field0_0x0)._s_0.X) {
                  dVar6 = dVar23 * dVar23;
                  do {
                    fVar26 = (float)(dVar5 * dVar5 + dVar21 * dVar21 + dVar6);
                    if (fVar26 < fVar38) {
                      local_108 = pfVar20[4];
                      fStack_104 = pfVar20[5];
                      fStack_100 = pfVar20[6];
                      fStack_fc = pfVar20[7];
                      local_f8 = pfVar20[0x10];
                      fStack_f4 = pfVar20[0x11];
                      fStack_f0 = pfVar20[0x12];
                      fStack_ec = pfVar20[0x13];
                      local_e8 = pfVar20[0x1c];
                      fStack_e4 = pfVar20[0x1d];
                      fStack_e0 = pfVar20[0x1e];
                      fStack_dc = pfVar20[0x1f];
                      fVar25 = fVar26 * fVar11 + fVar25;
                      uVar18 = (iVar15 + iVar16 * (param_3->field0_0x0)._s_0.Y) *
                               (param_3->field0_0x0)._s_0.X + iVar19 + local_1f4;
                      fVar26 = local_108 * fVar25;
                      fVar27 = fStack_104 * fVar25;
                      fVar28 = fStack_100 * fVar25;
                      fVar29 = fStack_fc * fVar25;
                      fVar30 = local_f8 * fVar25;
                      fVar31 = fStack_f4 * fVar25;
                      fVar32 = fStack_f0 * fVar25;
                      fVar33 = fStack_ec * fVar25;
                      fVar34 = local_e8 * fVar25;
                      fVar35 = fStack_e4 * fVar25;
                      fVar36 = fStack_e0 * fVar25;
                      fVar37 = fStack_dc * fVar25;
                      uVar14 = 0;
                      if ((int)uVar18 < local_1d8->ArrayNum) {
                        uVar14 = ~uVar18 >> 0x1f;
                      }
                      local_138 = fVar26;
                      fStack_134 = fVar27;
                      fStack_130 = fVar28;
                      fStack_12c = fVar29;
                      local_128 = fVar30;
                      fStack_124 = fVar31;
                      fStack_120 = fVar32;
                      fStack_11c = fVar33;
                      local_118 = fVar34;
                      fStack_114 = fVar35;
                      fStack_110 = fVar36;
                      fStack_10c = fVar37;
                      if ((uVar14 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      lVar17 = (longlong)(int)uVar18;
                      pFVar3 = (local_1d8->AllocatorInstance).Data;
                      pFVar1 = pFVar3 + lVar17 * 0x30;
                      fVar8 = *(float *)(pFVar1 + 4);
                      fVar9 = *(float *)(pFVar1 + 8);
                      fVar10 = *(float *)(pFVar1 + 0xc);
                      pFVar2 = pFVar3 + lVar17 * 0x30;
                      *(float *)pFVar2 = fVar26 + *(float *)pFVar1;
                      *(float *)(pFVar2 + 4) = fVar27 + fVar8;
                      *(float *)(pFVar2 + 8) = fVar28 + fVar9;
                      *(float *)(pFVar2 + 0xc) = fVar29 + fVar10;
                      pFVar1 = pFVar3 + lVar17 * 0x30 + 0x10;
                      fVar26 = *(float *)(pFVar1 + 4);
                      fVar27 = *(float *)(pFVar1 + 8);
                      fVar28 = *(float *)(pFVar1 + 0xc);
                      pFVar2 = pFVar3 + lVar17 * 0x30 + 0x10;
                      *(float *)pFVar2 = fVar30 + *(float *)pFVar1;
                      *(float *)(pFVar2 + 4) = fVar31 + fVar26;
                      *(float *)(pFVar2 + 8) = fVar32 + fVar27;
                      *(float *)(pFVar2 + 0xc) = fVar33 + fVar28;
                      pFVar1 = pFVar3 + lVar17 * 0x30 + 0x20;
                      fVar26 = *(float *)(pFVar1 + 4);
                      fVar27 = *(float *)(pFVar1 + 8);
                      fVar28 = *(float *)(pFVar1 + 0xc);
                      pFVar3 = pFVar3 + lVar17 * 0x30 + 0x20;
                      *(float *)pFVar3 = fVar34 + *(float *)pFVar1;
                      *(float *)(pFVar3 + 4) = fVar35 + fVar26;
                      *(float *)(pFVar3 + 8) = fVar36 + fVar27;
                      *(float *)(pFVar3 + 0xc) = fVar37 + fVar28;
                      uVar14 = 0;
                      if ((int)uVar18 < param_5->ArrayNum) {
                        uVar14 = ~uVar18 >> 0x1f;
                      }
                      if ((uVar14 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pFVar1 = (param_5->AllocatorInstance).Data;
                      *(float *)(pFVar1 + lVar17 * 4) = fVar25 + *(float *)(pFVar1 + lVar17 * 4);
                      pfVar20 = local_1b0;
                      param_3 = local_1a8;
                      fVar25 = local_1e0;
                      iVar16 = local_1ec;
                      iVar15 = local_1f0;
                    }
                    dVar5 = dVar5 + dVar7 + dVar7;
                    iVar19 = iVar19 + 1;
                    dVar24 = local_1a0;
                    dVar12 = local_198;
                    dVar23 = local_1c0;
                  } while (iVar19 < (param_2->field0_0x0)._s_0.X);
                }
                dVar5 = dVar12;
                local_1d0 = local_1d0 + dVar24;
                local_1f0 = iVar15 + 1;
                dVar21 = local_1d0;
              } while (local_1f0 < (param_2->field0_0x0)._s_0.Y);
              auVar22._8_8_ = 0;
              auVar22._0_8_ = local_1c8;
              dVar21 = local_190;
            }
            dVar23 = dVar23 + auVar22._0_8_;
            local_1ec = iVar16 + 1;
            lVar17 = local_1b8;
            iVar16 = PotentiallyIntersectingSamples.ArrayNum;
            local_1c0 = dVar23;
          } while (local_1ec < (param_2->field0_0x0)._s_0.Z);
        }
        local_1b8 = lVar17 + 8;
        local_1e8 = local_1e8 + 1;
      } while ((int)local_1e8 < iVar16);
    }
  }
  return;
}

// InterpolateIncidentRadiancePoint @ 148391d10

void __thiscall
FPrecomputedLightVolume::InterpolateIncidentRadiancePoint
          (FPrecomputedLightVolume *this,TVector<double> *param_1,float *param_2,float *param_3,
          TSHVectorRGB<3> *param_4,TVector<double> *param_5)

{
  code *pcVar1;
  bool bVar2;
  double local_88;
  double local_80;
  double local_78;
  <lambda_1> local_70;
  TVector4<double>_u_0 local_48;
  double local_28;
  double dStack_20;
  double local_18;
  undefined8 local_10;
  
  if (this == (FPrecomputedLightVolume *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                       ,0x188,
                       L"FPrecomputedLightVolume::InterpolateIncidentRadiancePoint() is called on a null volume. Fix the call site."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Data->bInitialized != false) {
    local_78 = (param_1->field0_0x0)._s_0.Z - (this->WorldOriginOffset).field0_0x0._s_0.Z;
    local_88 = (param_1->field0_0x0)._s_0.X - (this->WorldOriginOffset).field0_0x0._s_0.X;
    local_80 = (param_1->field0_0x0)._s_0.Y - (this->WorldOriginOffset).field0_0x0._s_0.Y;
    local_70.AccumulatedIncidentRadiance = param_4;
    local_70.SkyBentNormal = param_5;
    local_70.WorldPosition = (TVector<double> *)&local_88;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48._s_0.W = 0.0;
    local_10 = 0;
    local_70.AccumulatedDirectionalLightShadowing = param_3;
    local_70.AccumulatedWeight = param_2;
    local_48._s_0.X = local_88;
    local_48._s_0.Y = local_80;
    local_48._s_0.Z = local_78;
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    FindElementsWithBoundsTestInternal<_FPrecomputedLightVolume::InterpolateIncidentRadiancePoint_::__l14::<lambda_1>_>
              (this->OctreeForRendering,0,&this->OctreeForRendering->RootNodeContext,
               (FBoxCenterAndExtent *)&local_48._s_0,&local_70);
  }
  return;
}

// IntersectBounds @ 148391e50

bool __thiscall
FPrecomputedLightVolume::IntersectBounds
          (FPrecomputedLightVolume *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  
  pTVar4 = this->OctreeForRendering;
  if (pTVar4 != (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *)0x0) {
    dVar5 = (pTVar4->RootNodeContext).Bounds.Center.field0_0x0._s_0.X;
    dVar6 = (pTVar4->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y;
    dVar7 = (pTVar4->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X;
    dVar8 = (pTVar4->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y;
    dVar1 = (param_1->Origin).field0_0x0._s_0.X;
    dVar9 = (pTVar4->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z;
    dVar10 = (pTVar4->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z;
    dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar3 = (param_1->Origin).field0_0x0._s_0.Y;
    if ((((dVar5 + dVar7 < dVar1 - (param_1->BoxExtent).field0_0x0._s_0.X) ||
         ((param_1->BoxExtent).field0_0x0._s_0.X + dVar1 < dVar5 - dVar7)) ||
        (dVar6 + dVar8 < dVar3 - (param_1->BoxExtent).field0_0x0._s_0.Y)) ||
       ((((param_1->BoxExtent).field0_0x0._s_0.Y + dVar3 < dVar6 - dVar8 ||
         (dVar10 + dVar9 < dVar2 - (param_1->BoxExtent).field0_0x0._s_0.Z)) ||
        ((param_1->BoxExtent).field0_0x0._s_0.Z + dVar2 < dVar10 - dVar9)))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    return bVar11;
  }
  return false;
}

// RemoveFromScene @ 14839fe00

void __thiscall
FPrecomputedLightVolume::RemoveFromScene(FPrecomputedLightVolume *this,FSceneInterface *param_1)

{
  undefined8 uVar1;
  
  if ((this->bAddedToScene != false) &&
     (this->bAddedToScene = false, param_1 != (FSceneInterface *)0x0)) {
    (**(code **)(param_1->_padding_ + 0x1f0))(param_1,this);
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOriginOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldOriginOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOriginOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// SetData @ 1483a8800

void __thiscall
FPrecomputedLightVolume::SetData
          (FPrecomputedLightVolume *this,FPrecomputedLightVolumeData *param_1,
          FSceneInterface *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  this->Data = param_1;
  bVar1 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_2->FeatureLevel);
  lVar2 = 0x40;
  if (!bVar1) {
    lVar2 = 0xf0;
  }
  this->OctreeForRendering =
       (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *)
       ((this->Data->Bounds).Pad + lVar2 + -0x39);
  return;
}

