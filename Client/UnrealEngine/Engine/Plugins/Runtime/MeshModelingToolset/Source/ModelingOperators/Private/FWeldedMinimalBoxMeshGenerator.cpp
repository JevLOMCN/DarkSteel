// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// operator() @ 14c94b200

void __thiscall
`CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
<lambda_1>::operator()
          (void *this,int param_1,TVector<float> *param_2,int param_3,float param_4,int param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  int local_28 [2];
  float local_20;
  float fStack_1c;
  
  lVar6 = (longlong)param_1;
  uVar5 = (param_1 - param_5) + 4U & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x120) != '\0') {
    uVar5 = uVar5 + *(int *)((longlong)
                             &`public:___cdecl_`protected:_void___cdecl_CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings(void)___ptr64'::`2'::<lambda_1>::operator()(int,UE::Math::TVector<float>_const&___ptr64,int,float,int)const___ptr64'
                              ::__l5::Adjustments + (longlong)(int)uVar5 * 4);
  }
  dVar7 = (double)(*(FVector2i_u_0 *)&IndexUtil::BoxFacesUV[(int)uVar5].field0_0x0._s_0).X;
  dVar8 = (double)(*(FVector2i_u_0 *)&IndexUtil::BoxFacesUV[(int)uVar5].field0_0x0._s_0).Y;
  if ((param_5 & 1U) == 0) {
    dVar7 = dVar7 * **(double **)((longlong)this + 0x20);
    dVar8 = dVar8 * **(double **)((longlong)this + 0x28) + (double)param_4;
  }
  else {
    dVar7 = dVar7 * **(double **)((longlong)this + 0x28) + (double)param_4;
    dVar8 = dVar8 * **(double **)((longlong)this + 0x20);
  }
  local_20 = (float)dVar7;
  fStack_1c = (float)dVar8;
  local_28[0] = param_3;
  if ((*(float **)(lVar1 + 0x18) <= &local_20) &&
     (&local_20 < *(float **)(lVar1 + 0x18) + (longlong)*(int *)(lVar1 + 0x24) * 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x20);
  if (iVar4 == *(int *)(lVar1 + 0x24)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar4 + 1;
  *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar4 * 8) = CONCAT44(fStack_1c,local_20);
  if (*(int **)(lVar1 + 0x28) <= local_28) {
    if (local_28 < *(int **)(lVar1 + 0x28) + *(int *)(lVar1 + 0x34)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar4 = *(int *)(lVar1 + 0x30);
  if (iVar4 == *(int *)(lVar1 + 0x34)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
  }
  *(int *)(lVar1 + 0x30) = iVar4 + 1;
  *(int *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar4 * 4) = local_28[0];
  *(int *)(*(longlong *)((longlong)this + 8) + lVar6 * 4) = *(int *)(lVar1 + 0x20) + -1;
  iVar4 = UE::Geometry::FMeshShapeGenerator::AppendNormal
                    (*(FMeshShapeGenerator **)this,param_2,param_3);
  *(int *)(*(longlong *)((longlong)this + 0x10) + lVar6 * 4) = iVar4;
  *(int *)(*(longlong *)((longlong)this + 0x18) + lVar6 * 4) = param_3;
  return;
}

// operator() @ 14c955620

void __thiscall
`CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_48;
  
  lVar5 = *(longlong *)((longlong)this + 0x18);
  lVar1 = (longlong)param_3 * 4;
  lVar2 = (longlong)param_2 * 4;
  lVar3 = (longlong)param_1 * 4;
  uVar10 = UE::Geometry::FMeshShapeGenerator::AppendTriangle
                     (*(FMeshShapeGenerator **)this,*(int *)(lVar3 + lVar5),
                      *(int *)(lVar5 + (longlong)param_2 * 4),*(int *)(lVar1 + lVar5));
  lVar5 = *(longlong *)this;
  uVar4 = **(undefined4 **)((longlong)this + 0x20);
  uVar13 = ~uVar10 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar10 < *(int *)(lVar5 + 0x90)) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar5 + 0x88) + (longlong)(int)uVar10 * 4) = uVar4;
  lVar5 = *(longlong *)((longlong)this + 8);
  lVar6 = *(longlong *)this;
  uVar4 = *(undefined4 *)(lVar5 + lVar2);
  local_48 = *(undefined4 *)(lVar5 + lVar3);
  uVar12 = *(undefined4 *)(lVar5 + lVar1);
  if (*(char *)(lVar6 + 0x98) != '\0') {
    uVar12 = local_48;
    local_48 = *(undefined4 *)(lVar5 + lVar1);
  }
  uVar11 = 0;
  if ((int)uVar10 < *(int *)(lVar6 + 0x70)) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = (longlong)(int)uVar10 * 0xc;
  lVar6 = *(longlong *)(lVar6 + 0x68);
  *(ulonglong *)(lVar5 + lVar6) = CONCAT44(uVar4,local_48);
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar12;
  lVar6 = *(longlong *)((longlong)this + 0x10);
  lVar7 = *(longlong *)this;
  uVar4 = *(undefined4 *)(lVar6 + lVar2);
  local_48 = *(undefined4 *)(lVar6 + lVar3);
  uVar12 = *(undefined4 *)(lVar6 + lVar1);
  if (*(char *)(lVar7 + 0x98) != '\0') {
    uVar12 = local_48;
    local_48 = *(undefined4 *)(lVar6 + lVar1);
  }
  uVar11 = 0;
  if ((int)uVar10 < *(int *)(lVar7 + 0x80)) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar1 = *(longlong *)(lVar7 + 0x78);
  *(ulonglong *)(lVar5 + lVar1) = CONCAT44(uVar4,local_48);
  *(undefined4 *)(lVar5 + 8 + lVar1) = uVar12;
  return;
}

// AppendUsingCurrentSettings @ 14c95cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings
          (FWeldedMinimalBoxMeshGenerator *this)

{
  int *piVar1;
  TVector<float> *pTVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  double dVar18;
  FWeldedMinimalBoxMeshGenerator *pFVar19;
  FWeldedMinimalBoxMeshGenerator *pFVar20;
  bool bVar21;
  int iVar22;
  TVector<double> *pTVar23;
  TVector<double> *pTVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  TVector<float>_u_0 *pTVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  double *pdVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  double dVar38;
  double dVar39;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  float fVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  float fVar58;
  float fVar59;
  uint uVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  uint uVar64;
  uint uVar65;
  undefined1 auStackY_618 [32];
  uint local_5c0;
  char local_5bc [8];
  int local_5b4;
  ulonglong local_5b0;
  int local_5a8;
  TVector<float>_u_0 local_5a0;
  FWeldedMinimalBoxMeshGenerator *local_590;
  int *local_588;
  uint *local_580;
  uint *local_578;
  uint *local_570;
  undefined8 local_568;
  double local_560;
  FWeldedMinimalBoxMeshGenerator *local_558;
  int *local_550;
  uint *local_548;
  uint *local_540;
  undefined8 *local_538;
  double *local_530;
  double local_528 [12];
  TVector<float>_u_0 local_4c8;
  TVector<float>_u_0 local_4bc;
  TVector<float>_u_0 local_4b0;
  TVector<float>_u_0 local_4a4;
  TVector<float>_u_0 local_498;
  TVector<float>_u_0 local_48c;
  TVector<float>_u_0 local_480;
  TVector<float>_u_0 local_474;
  TVector<float>_u_0 local_468;
  double local_458;
  double dStack_450;
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  TVector<float>_u_0 local_428;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_400;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3d0;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_370;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_310;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  TVector<double> local_2d0;
  TVector<double> local_2b8;
  TVector<double> local_2a0;
  TVector<double> local_288;
  TVector<double> local_270;
  TVector<double> local_258;
  TVector<double> local_240;
  TVector<double> local_228;
  TVector<double> local_210;
  TVector<double> local_1f8;
  TVector<double> local_1e0;
  TVector<double> local_1c8;
  TVector<double> local_1b0;
  TVector<double> local_198;
  TVector<double> local_180;
  TVector<double> local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_130 [4];
  uint local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0 [4];
  ulonglong local_d0;
  
  dVar18 = __real_3ff0000000000000;
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_618;
  dVar3 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
  dVar39 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
  uVar26 = (uint)__xmm_80000000000000008000000000000000;
  uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar46 = dVar39 + dVar39;
  dVar38 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
  local_150 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_148 = _UNK_15060db28;
  local_550 = local_e0;
  local_140 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_138 = _UNK_15060db28;
  local_548 = local_130 + 4;
  dVar45 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
  local_540 = local_130;
  dVar12 = dVar45 + dVar45;
  local_538 = &local_568;
  local_530 = &local_560;
  local_558 = this;
  local_590 = this;
  local_588 = local_e0;
  local_580 = local_130 + 4;
  local_578 = local_130;
  local_570 = &local_5c0;
  dVar52 = dVar38 * dVar12 + dVar3 * dVar46;
  dVar13 = dVar3 * dVar46 - dVar38 * dVar12;
  dVar11 = dVar3 * dVar12 - dVar38 * dVar46;
  dVar46 = __real_3ff0000000000000 - (dVar46 * dVar39 + dVar12 * dVar45);
  local_110 = (float)(double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar30,
                                      SUB84(dVar46,0) ^ uVar26);
  local_10c = (float)(double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) ^ uVar30,
                                      SUB84(dVar52,0) ^ uVar26);
  local_108 = (float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar30,
                                      SUB84(dVar11,0) ^ uVar26);
  dVar39 = (dVar3 + dVar3) * dVar38 + dVar12 * dVar39;
  dVar3 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + dVar12 * dVar45);
  local_104 = (float)(double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar30,
                                      SUB84(dVar13,0) ^ uVar26);
  uVar28 = 0;
  local_5b0 = 0;
  local_100 = (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar30,
                                      SUB84(dVar3,0) ^ uVar26);
  local_fc = (float)(double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar30,
                                     SUB84(dVar39,0) ^ uVar26);
  local_f8 = (float)dVar46;
  local_f4 = (float)dVar52;
  local_f0 = (float)dVar11;
  local_ec = (float)dVar13;
  local_e8 = (float)dVar3;
  local_e4 = (float)dVar39;
  local_2e0 = ___xmm_00000002000000050000000300000004;
  uStack_2d8 = _UNK_1528d8ab8;
  do {
    uVar37 = local_5b0;
    uVar25 = *(uint *)((longlong)&local_2e0 + local_5b0 * 4);
    uVar61 = (uint)uVar28;
    uVar32 = 0;
    if ((int)uVar25 < (this->FaceUVOrientations).ArrayNum) {
      uVar32 = ~uVar25 >> 0x1f;
    }
    local_5c0 = uVar61;
    if ((uVar32 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_5b4 = *(int *)(this->FaceUVOrientations).AllocatorInstance.InlineData[(int)uVar25].Pad;
    uVar25 = uVar61 + 3 & 0x80000003;
    if ((int)uVar25 < 0) {
      uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
    }
    if (((this->CornerInfo).WeldedAtBase[uVar37] == false) ||
       ((this->CornerInfo).WeldedAtBase[(int)uVar25] == false)) {
      uVar32 = uVar61 + 4;
      if (*(int *)((longlong)&local_150 + uVar37 * 4) < 0) {
        local_3d0._s_0.X = (double)*(undefined8 *)&(this->Box).Extents.field0_0x0;
        if ((((uint)(uVar28 >> 1) ^ uVar61) & 1) == 0) {
          local_3d0._s_0.X =
               (double)CONCAT44((uint)((ulonglong)local_3d0._s_0.X >> 0x20) ^ uVar30,
                                SUB84(local_3d0._s_0.X,0) ^ uVar26);
        }
        local_3d0._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
        if ((uVar28 & 2) == 0) {
          local_3d0._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)local_3d0._s_0.Y >> 0x20) ^ uVar30,
                                SUB84(local_3d0._s_0.Y,0) ^ uVar26);
        }
        uVar4 = *(undefined8 *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
        local_3d0._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar30,(uint)uVar4 ^ uVar26);
        pTVar23 = UE::Geometry::operator*<double>
                            (&local_2d0,&(this->Box).Frame.Rotation,
                             (TVector<double> *)&local_3d0._s_0);
        local_448 = (this->Box).Frame.Origin.field0_0x0._s_0.Z + (pTVar23->field0_0x0)._s_0.Z;
        dStack_450 = (this->Box).Frame.Origin.field0_0x0._s_0.Y + (pTVar23->field0_0x0)._s_0.Y;
        local_458 = (this->Box).Frame.Origin.field0_0x0._s_0.X + (pTVar23->field0_0x0)._s_0.X;
        if ((((double *)this->_padding_ <= &local_458) &&
            (&local_458 <
             (double *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 3)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (int)this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
        }
        *(int *)&this->_padding_ = iVar22 + 1;
        lVar36 = this->_padding_;
        pdVar33 = (double *)(lVar36 + (longlong)iVar22 * 0x18);
        *pdVar33 = local_458;
        pdVar33[1] = dStack_450;
        *(double *)(lVar36 + 0x10 + (longlong)iVar22 * 0x18) = local_448;
        *(int *)((longlong)&local_150 + uVar37 * 4) = (int)this->_padding_ + -1;
      }
      if (*(int *)((longlong)&local_150 + (longlong)(int)uVar25 * 4) < 0) {
        if ((7 < uVar25) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0 && Index <= 7",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                                ,0x9e,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined8 *)&(this->Box).Extents.field0_0x0;
        uVar50 = (uint)uVar4;
        uVar51 = (uint)((ulonglong)uVar4 >> 0x20);
        if (((uVar25 >> 1 ^ uVar25) & 1) == 0) {
          uVar50 = uVar50 ^ uVar26;
          uVar51 = uVar51 ^ uVar30;
        }
        local_3b8._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
        if (((int)uVar25 / 2 & 1U) == 0) {
          local_3b8._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Y >> 0x20) ^ uVar30,
                                SUB84(local_3b8._s_0.Y,0) ^ uVar26);
        }
        local_3b8._s_0.Z = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
        if ((int)uVar25 < 4) {
          local_3b8._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Z >> 0x20) ^ uVar30,
                                SUB84(local_3b8._s_0.Z,0) ^ uVar26);
        }
        local_3b8._s_0.X = (double)CONCAT44(uVar51,uVar50);
        pTVar23 = UE::Geometry::operator*<double>
                            (&local_2b8,&(this->Box).Frame.Rotation,
                             (TVector<double> *)&local_3b8._s_0);
        local_440 = (this->Box).Frame.Origin.field0_0x0._s_0.X + (pTVar23->field0_0x0)._s_0.X;
        local_430 = (pTVar23->field0_0x0)._s_0.Z + (this->Box).Frame.Origin.field0_0x0._s_0.Z;
        dStack_438 = (pTVar23->field0_0x0)._s_0.Y + (this->Box).Frame.Origin.field0_0x0._s_0.Y;
        if ((((double *)this->_padding_ <= &local_440) &&
            (&local_440 <
             (double *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 3)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (int)this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
        }
        *(int *)&this->_padding_ = iVar22 + 1;
        lVar36 = this->_padding_;
        pdVar33 = (double *)(lVar36 + (longlong)iVar22 * 0x18);
        *pdVar33 = local_440;
        pdVar33[1] = dStack_438;
        *(double *)(lVar36 + 0x10 + (longlong)iVar22 * 0x18) = local_430;
        *(int *)((longlong)&local_150 + (longlong)(int)uVar25 * 4) = (int)this->_padding_ + -1;
      }
      if (((this->CornerInfo).WeldedAtBase[uVar37] == false) &&
         (*(int *)((longlong)&local_140 + uVar37 * 4) < 0)) {
        pTVar23 = UE::Geometry::TOrientedBox3<double>::GetCorner(&this->Box,&local_2a0,uVar32);
        iVar22 = UE::Geometry::FMeshShapeGenerator::AppendVertex
                           ((FMeshShapeGenerator *)this,pTVar23);
        *(int *)((longlong)&local_140 + uVar37 * 4) = iVar22;
      }
      if (((this->CornerInfo).WeldedAtBase[(int)uVar25] == false) &&
         (*(int *)((longlong)&local_140 + (longlong)(int)uVar25 * 4) < 0)) {
        pTVar23 = UE::Geometry::TOrientedBox3<double>::GetCorner(&this->Box,&local_288,uVar25 + 4);
        iVar22 = UE::Geometry::FMeshShapeGenerator::AppendVertex
                           ((FMeshShapeGenerator *)this,pTVar23);
        *(int *)((longlong)&local_140 + (longlong)(int)uVar25 * 4) = iVar22;
      }
      if ((7 < uVar25) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index <= 7",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                              ,0x9e,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_3e8._s_0.X = (double)*(undefined8 *)&(this->Box).Extents.field0_0x0;
      uVar50 = SUB84(local_3e8._s_0.X,0);
      uVar51 = (uint)((ulonglong)local_3e8._s_0.X >> 0x20);
      if (((uVar25 >> 1 ^ uVar25) & 1) == 0) {
        local_3e8._s_0.X = (double)CONCAT44(uVar51 ^ uVar30,uVar50 ^ uVar26);
      }
      local_3e8._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
      uVar57 = SUB84(local_3e8._s_0.Y,0);
      uVar60 = (uint)((ulonglong)local_3e8._s_0.Y >> 0x20);
      if (((int)uVar25 / 2 & 1U) == 0) {
        local_3e8._s_0.Y = (double)CONCAT44(uVar60 ^ uVar30,uVar57 ^ uVar26);
      }
      uVar4 = *(undefined8 *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
      uVar53 = (uint)uVar4;
      uVar56 = (uint)((ulonglong)uVar4 >> 0x20);
      uVar64 = uVar53 ^ uVar26;
      uVar65 = uVar56 ^ uVar30;
      if ((int)uVar25 < 4) {
        uVar53 = uVar64;
        uVar56 = uVar65;
      }
      local_3e8._s_0.Z = (double)CONCAT44(uVar56,uVar53);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_270,&(this->Box).Frame.Rotation,(TVector<double> *)&local_3e8._s_0
                          );
      dVar3 = (pTVar23->field0_0x0)._s_0.X;
      dVar39 = (pTVar23->field0_0x0)._s_0.Y;
      dVar38 = (pTVar23->field0_0x0)._s_0.Z;
      if ((((uint)(uVar28 >> 1) ^ uVar61) & 1) == 0) {
        uVar50 = uVar50 ^ uVar26;
        uVar51 = uVar51 ^ uVar30;
      }
      if ((uVar28 & 2) == 0) {
        uVar57 = uVar57 ^ uVar26;
        uVar60 = uVar60 ^ uVar30;
      }
      local_388._s_0.X = (double)CONCAT44(uVar51,uVar50);
      local_388._s_0.Y = (double)CONCAT44(uVar60,uVar57);
      local_388._s_0.Z = (double)CONCAT44(uVar65,uVar64);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_258,&(this->Box).Frame.Rotation,(TVector<double> *)&local_388._s_0
                          );
      dVar39 = dVar39 - (pTVar23->field0_0x0)._s_0.Y;
      dVar3 = dVar3 - (pTVar23->field0_0x0)._s_0.X;
      dVar38 = dVar38 - (pTVar23->field0_0x0)._s_0.Z;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = dVar39 * dVar39 + dVar3 * dVar3 + dVar38 * dVar38;
      auVar40 = sqrtpd(extraout_XMM0,auVar40);
      local_568 = auVar40._0_8_;
      if ((7 < (int)uVar32) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index <= 7",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                              ,0x9e,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(undefined8 *)&(this->Box).Extents.field0_0x0;
      uVar57 = (uint)uVar4;
      uVar60 = (uint)((ulonglong)uVar4 >> 0x20);
      uVar50 = uVar57;
      uVar51 = uVar60;
      if (((uVar32 >> 1 ^ uVar32) & 1) == 0) {
        uVar50 = uVar57 ^ uVar26;
        uVar51 = uVar60 ^ uVar30;
      }
      local_370._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
      uVar53 = SUB84(local_370._s_0.Y,0);
      uVar56 = (uint)((ulonglong)local_370._s_0.Y >> 0x20);
      if (((int)uVar32 / 2 & 1U) == 0) {
        local_370._s_0.Y = (double)CONCAT44(uVar56 ^ uVar30,uVar53 ^ uVar26);
      }
      local_370._s_0.Z = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
      uVar32 = SUB84(local_370._s_0.Z,0);
      uVar17 = (ulonglong)local_370._s_0.Z >> 0x20;
      local_370._s_0.X = (double)CONCAT44(uVar51,uVar50);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_1b0,&(this->Box).Frame.Rotation,(TVector<double> *)&local_370._s_0
                          );
      dVar3 = (pTVar23->field0_0x0)._s_0.X;
      dVar39 = (pTVar23->field0_0x0)._s_0.Y;
      dVar38 = (pTVar23->field0_0x0)._s_0.Z;
      if ((((uint)(uVar28 >> 1) ^ uVar61) & 1) == 0) {
        uVar57 = uVar57 ^ uVar26;
        uVar60 = uVar60 ^ uVar30;
      }
      if ((uVar28 & 2) == 0) {
        uVar53 = uVar53 ^ uVar26;
        uVar56 = uVar56 ^ uVar30;
      }
      local_358._s_0.X = (double)CONCAT44(uVar60,uVar57);
      local_358._s_0.Y = (double)CONCAT44(uVar56,uVar53);
      local_358._s_0.Z = (double)CONCAT44((uint)uVar17 ^ uVar30,uVar32 ^ uVar26);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_240,&(this->Box).Frame.Rotation,(TVector<double> *)&local_358._s_0
                          );
      iVar22 = local_5b4;
      dVar3 = dVar3 - (pTVar23->field0_0x0)._s_0.X;
      dVar39 = dVar39 - (pTVar23->field0_0x0)._s_0.Y;
      dVar38 = dVar38 - (pTVar23->field0_0x0)._s_0.Z;
      pTVar2 = (TVector<float> *)(&local_110 + uVar28 * 3);
      auVar49._8_8_ = 0;
      auVar49._0_8_ = dVar3 * dVar3 + dVar39 * dVar39 + dVar38 * dVar38;
      auVar40 = sqrtpd(extraout_XMM0_00,auVar49);
      local_560 = auVar40._0_8_;
      `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
      <lambda_1>::operator()
                (&local_558,0,pTVar2,*(int *)((longlong)&local_150 + uVar37 * 4),
                 (float)this->HeightUVOffset,local_5b4);
      `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
      <lambda_1>::operator()
                (&local_558,1,pTVar2,*(int *)((longlong)&local_150 + (longlong)(int)uVar25 * 4),
                 (float)this->HeightUVOffset,iVar22);
      if ((this->CornerInfo).WeldedAtBase[uVar37] == false) {
        `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2
        ::<lambda_1>::operator()
                  (&local_558,3,pTVar2,*(int *)((longlong)&local_140 + uVar37 * 4),
                   (float)this->HeightUVOffset,iVar22);
        pFVar19 = local_590;
        uVar51 = UE::Geometry::FMeshShapeGenerator::AppendTriangle
                           ((FMeshShapeGenerator *)local_590,*local_578,local_578[1],local_578[3]);
        lVar36 = (longlong)(int)uVar51;
        uVar32 = *local_570;
        uVar50 = 0;
        if ((int)uVar51 < (int)pFVar19->_padding_) {
          uVar50 = ~uVar51 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = local_590;
        *(uint *)(pFVar19->_padding_ + lVar36 * 4) = uVar32;
        bVar21 = (char)local_590->_padding_ == '\0';
        iVar22 = local_588[1];
        iVar31 = local_588[3];
        if (bVar21) {
          iVar31 = *local_588;
        }
        local_5a8 = *local_588;
        if (bVar21) {
          local_5a8 = local_588[3];
        }
        uVar32 = 0;
        if ((int)uVar51 < (int)local_590->_padding_) {
          uVar32 = ~uVar51 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar19 = local_590;
        lVar27 = pFVar20->_padding_;
        *(int *)(lVar27 + lVar36 * 0xc) = iVar31;
        *(int *)(lVar27 + 4 + lVar36 * 0xc) = iVar22;
        *(int *)(lVar27 + 8 + lVar36 * 0xc) = local_5a8;
        bVar21 = (char)local_590->_padding_ == '\0';
        uVar32 = local_580[1];
        uVar50 = local_580[3];
        if (bVar21) {
          uVar50 = *local_580;
        }
        uVar57 = *local_580;
        if (bVar21) {
          uVar57 = local_580[3];
        }
        uVar60 = 0;
        if ((int)uVar51 < (int)local_590->_padding_) {
          uVar60 = ~uVar51 >> 0x1f;
        }
        if ((uVar60 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar27 = pFVar19->_padding_;
        *(uint *)(lVar27 + lVar36 * 0xc) = uVar50;
        *(uint *)(lVar27 + 4 + lVar36 * 0xc) = uVar32;
        *(uint *)(lVar27 + 8 + lVar36 * 0xc) = uVar57;
        uVar37 = local_5b0;
        if ((this->CornerInfo).WeldedAtBase[(int)uVar25] == false) {
          `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::
          __l2::<lambda_1>::operator()
                    (&local_558,2,(TVector<float> *)(&local_110 + uVar28 * 3),
                     *(int *)((longlong)&local_140 + (longlong)(int)uVar25 * 4),
                     (float)this->HeightUVOffset,local_5b4);
          `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::
          __l2::<lambda_2>::operator()(&local_590,3,1,2);
          uVar37 = local_5b0;
        }
      }
      else {
        `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2
        ::<lambda_1>::operator()
                  (&local_558,2,pTVar2,*(int *)((longlong)&local_140 + (longlong)(int)uVar25 * 4),
                   (float)this->HeightUVOffset,iVar22);
        pFVar19 = local_590;
        uVar50 = UE::Geometry::FMeshShapeGenerator::AppendTriangle
                           ((FMeshShapeGenerator *)local_590,*local_578,local_578[1],local_578[2]);
        lVar36 = (longlong)(int)uVar50;
        uVar25 = *local_570;
        uVar32 = 0;
        if ((int)uVar50 < (int)pFVar19->_padding_) {
          uVar32 = ~uVar50 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = local_590;
        *(uint *)(pFVar19->_padding_ + lVar36 * 4) = uVar25;
        bVar21 = (char)local_590->_padding_ == '\0';
        iVar22 = local_588[1];
        local_5b4 = local_588[2];
        if (bVar21) {
          local_5b4 = *local_588;
        }
        iVar31 = *local_588;
        if (bVar21) {
          iVar31 = local_588[2];
        }
        uVar25 = 0;
        if ((int)uVar50 < (int)local_590->_padding_) {
          uVar25 = ~uVar50 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar19 = local_590;
        lVar27 = pFVar20->_padding_;
        *(int *)(lVar27 + lVar36 * 0xc) = local_5b4;
        *(int *)(lVar27 + 4 + lVar36 * 0xc) = iVar22;
        *(int *)(lVar27 + 8 + lVar36 * 0xc) = iVar31;
        bVar21 = (char)local_590->_padding_ == '\0';
        uVar25 = local_580[1];
        uVar32 = local_580[2];
        if (bVar21) {
          uVar32 = *local_580;
        }
        uVar51 = *local_580;
        if (bVar21) {
          uVar51 = local_580[2];
        }
        uVar57 = 0;
        if ((int)uVar50 < (int)local_590->_padding_) {
          uVar57 = ~uVar50 >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar27 = pFVar19->_padding_;
        *(uint *)(lVar27 + lVar36 * 0xc) = uVar32;
        *(uint *)(lVar27 + 4 + lVar36 * 0xc) = uVar25;
        *(uint *)(lVar27 + 8 + lVar36 * 0xc) = uVar51;
        uVar37 = local_5b0;
      }
    }
    uVar28 = (ulonglong)(uVar61 + 1);
    local_5b0 = uVar37 + 1;
  } while ((int)(uVar61 + 1) < 4);
  bVar21 = (this->CornerInfo).WeldedAtBase[1];
  local_5c0 = 4;
  if ((bVar21 != (this->CornerInfo).WeldedAtBase[3]) ||
     (((iVar22 = 0, bVar21 == false && (iVar22 = 0, (this->CornerInfo).WeldedAtBase[0] != false)) &&
      ((this->CornerInfo).WeldedAtBase[2] != false)))) {
    iVar22 = 1;
  }
  iVar31 = 1 - iVar22;
  if (this->bCrosswiseDiagonal == false) {
    iVar31 = iVar22;
  }
  uVar25 = iVar31 + 3U & 0x80000003;
  if ((int)uVar25 < 0) {
    uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
  }
  lVar36 = (longlong)iVar31;
  if (*(int *)((longlong)&local_150 + lVar36 * 4) < 0) {
    pTVar23 = UE::Geometry::TOrientedBox3<double>::GetCorner(&this->Box,&local_228,iVar31);
    iVar22 = UE::Geometry::FMeshShapeGenerator::AppendVertex((FMeshShapeGenerator *)this,pTVar23);
    *(int *)((longlong)&local_150 + lVar36 * 4) = iVar22;
  }
  if (*(int *)((longlong)&uStack_148 + lVar36 * 4) < 0) {
    pTVar23 = UE::Geometry::TOrientedBox3<double>::GetCorner(&this->Box,&local_210,iVar31 + 2);
    iVar22 = UE::Geometry::FMeshShapeGenerator::AppendVertex((FMeshShapeGenerator *)this,pTVar23);
    *(int *)((longlong)&uStack_148 + lVar36 * 4) = iVar22;
  }
  dVar3 = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
  uVar4 = *(undefined8 *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
  local_340._s_0.X = (double)*(undefined8 *)&(this->Box).Extents.field0_0x0;
  uVar57 = SUB84(local_340._s_0.X,0);
  uVar28 = (ulonglong)local_340._s_0.X >> 0x20;
  uVar50 = SUB84(dVar3,0) ^ uVar26;
  uVar51 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar30;
  uVar32 = (uint)uVar4 ^ uVar26;
  uVar61 = (uint)((ulonglong)uVar4 >> 0x20) ^ uVar30;
  local_340._s_0.Y = (double)CONCAT44(uVar51,uVar50);
  local_340._s_0.Z = (double)CONCAT44(uVar61,uVar32);
  pTVar23 = UE::Geometry::operator*<double>
                      (&local_1f8,&(this->Box).Frame.Rotation,(TVector<double> *)&local_340._s_0);
  uVar57 = uVar57 ^ uVar26;
  uVar60 = (uint)uVar28 ^ uVar30;
  local_328._s_0.Y = (double)CONCAT44(uVar51,uVar50);
  local_328._s_0.X = (double)CONCAT44(uVar60,uVar57);
  local_328._s_0.Z = (double)CONCAT44(uVar61,uVar32);
  pTVar24 = UE::Geometry::operator*<double>
                      (&local_1e0,&(this->Box).Frame.Rotation,(TVector<double> *)&local_328._s_0);
  dVar39 = (pTVar23->field0_0x0)._s_0.X - (pTVar24->field0_0x0)._s_0.X;
  dVar38 = (pTVar23->field0_0x0)._s_0.Y - (pTVar24->field0_0x0)._s_0.Y;
  dVar45 = (pTVar23->field0_0x0)._s_0.Z - (pTVar24->field0_0x0)._s_0.Z;
  local_310._s_0.X = (double)CONCAT44(uVar60,uVar57);
  auVar41._0_8_ = dVar38 * dVar38;
  auVar41._8_8_ = 0;
  local_310._s_0.Z = (double)CONCAT44(uVar61,uVar32);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar39 * dVar39 + auVar41._0_8_ + dVar45 * dVar45;
  auVar40 = sqrtpd(auVar41,auVar6);
  local_568 = auVar40._0_8_;
  local_310._8_8_ = dVar3;
  pTVar23 = UE::Geometry::operator*<double>
                      (&local_1c8,&(this->Box).Frame.Rotation,(TVector<double> *)&local_310._s_0);
  local_3a0._s_0.X = (double)CONCAT44(uVar60,uVar57);
  local_3a0._s_0.Y = (double)CONCAT44(uVar51,uVar50);
  local_3a0._s_0.Z = (double)CONCAT44(uVar61,uVar32);
  pTVar24 = UE::Geometry::operator*<double>
                      (&local_168,&(this->Box).Frame.Rotation,(TVector<double> *)&local_3a0._s_0);
  dVar3 = (pTVar23->field0_0x0)._s_0.Y - (pTVar24->field0_0x0)._s_0.Y;
  dVar39 = (pTVar23->field0_0x0)._s_0.Z - (pTVar24->field0_0x0)._s_0.Z;
  dVar38 = (pTVar23->field0_0x0)._s_0.X - (pTVar24->field0_0x0)._s_0.X;
  auVar42._0_8_ = dVar39 * dVar39;
  auVar42._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar3 * dVar3 + dVar38 * dVar38 + auVar42._0_8_;
  auVar40 = sqrtpd(auVar42,auVar7);
  local_560 = auVar40._0_8_;
  if (((this->FaceUVOrientations).ArrayNum < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar3 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
  dVar39 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
  dVar38 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
  dVar45 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
  iVar22 = *(int *)(this->FaceUVOrientations).AllocatorInstance.InlineData[0].Pad;
  dVar45 = dVar45 + dVar45;
  dVar46 = dVar38 * (dVar3 + dVar3) + dVar45 * dVar39;
  local_4c8._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar30,SUB84(dVar46,0) ^ uVar26);
  local_4c8._s_0.Y = (float)(dVar38 * (dVar39 + dVar39) - dVar45 * dVar3);
  local_4c8._s_0.Z = (float)(((dVar3 + dVar3) * dVar3 + (dVar39 + dVar39) * dVar39) - dVar18);
  `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
  <lambda_1>::operator()
            (&local_558,iVar31,(TVector<float> *)&local_4c8._s_0,
             *(int *)((longlong)&local_150 + (longlong)iVar31 * 4),0.0,iVar22);
  dVar3 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
  dVar39 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
  dVar38 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
  dVar45 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
  dVar45 = dVar45 + dVar45;
  dVar46 = dVar38 * (dVar3 + dVar3) + dVar39 * dVar45;
  local_4bc._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar30,SUB84(dVar46,0) ^ uVar26);
  local_4bc._s_0.Y = (float)(dVar38 * (dVar39 + dVar39) - dVar3 * dVar45);
  local_4bc._s_0.Z = (float)(((dVar3 + dVar3) * dVar3 + (dVar39 + dVar39) * dVar39) - dVar18);
  `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
  <lambda_1>::operator()
            (&local_558,iVar31 + 2,(TVector<float> *)&local_4bc._s_0,
             *(int *)((longlong)&uStack_148 + lVar36 * 4),0.0,iVar22);
  if (((this->CornerInfo).WeldedAtBase[iVar31] == false) ||
     ((this->CornerInfo).WeldedAtBase[(longlong)iVar31 + 2] == false)) {
    bVar21 = false;
LAB_14c95df1b:
    dVar3 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
    dVar39 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
    dVar38 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
    dVar45 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
    dVar45 = dVar45 + dVar45;
    dVar46 = dVar39 * dVar45 + dVar38 * (dVar3 + dVar3);
    local_4b0._s_0.X =
         (float)(double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar30,SUB84(dVar46,0) ^ uVar26
                                );
    local_4b0._s_0.Y = (float)(dVar38 * (dVar39 + dVar39) - dVar3 * dVar45);
    local_4b0._s_0.Z = (float)(((dVar3 + dVar3) * dVar3 + (dVar39 + dVar39) * dVar39) - dVar18);
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_1>::operator()
              (&local_558,iVar31 + 1,(TVector<float> *)&local_4b0._s_0,
               *(int *)((longlong)&local_150 + (longlong)iVar31 * 4 + 4),0.0,iVar22);
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_2>::operator()(&local_590,iVar31,iVar31 + 1,iVar31 + 2);
    if (bVar21) goto LAB_14c95dfe0;
LAB_14c95dff1:
    dVar3 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
    dVar39 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
    dVar38 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
    dVar45 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
    dVar45 = dVar45 + dVar45;
    dVar46 = dVar39 * dVar45 + dVar38 * (dVar3 + dVar3);
    local_4a4._s_0.X =
         (float)(double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar30,SUB84(dVar46,0) ^ uVar26
                                );
    local_4a4._s_0.Y = (float)(dVar38 * (dVar39 + dVar39) - dVar3 * dVar45);
    local_4a4._s_0.Z = (float)(((dVar3 + dVar3) * dVar3 + (dVar39 + dVar39) * dVar39) - dVar18);
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_1>::operator()
              (&local_558,uVar25,(TVector<float> *)&local_4a4._s_0,
               *(int *)((longlong)&local_150 + (longlong)(int)uVar25 * 4),0.0,iVar22);
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_2>::operator()(&local_590,iVar31,iVar31 + 2,uVar25);
  }
  else {
    bVar21 = true;
    if ((this->CornerInfo).WeldedAtBase[(longlong)iVar31 + 1] == false) goto LAB_14c95df1b;
LAB_14c95dfe0:
    if ((this->CornerInfo).WeldedAtBase[(int)uVar25] == false) goto LAB_14c95dff1;
  }
  local_5c0 = local_5c0 + 1;
  pdVar33 = local_528 + 1;
  lVar36 = 0;
  local_2f0 = ___xmm_00000006000000070000000400000005;
  uStack_2e8 = _UNK_1528d8ac8;
  local_5bc[0] = '\0';
  local_5bc[1] = '\0';
  local_5bc[2] = '\0';
  local_5bc[3] = '\0';
  do {
    uVar25 = *(uint *)((longlong)&local_2f0 + lVar36 * 4);
    lVar27 = (longlong)(int)uVar25;
    uVar32 = uVar25 - 4;
    if (*(char *)((longlong)(&this->CornerInfo + -1) + lVar27) == '\0') {
      if ((7 < uVar25) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index <= 7",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                              ,0x9e,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(undefined8 *)&(this->Box).Extents.field0_0x0;
      uVar32 = (uint)uVar4;
      uVar61 = (uint)((ulonglong)uVar4 >> 0x20);
      if (((uVar25 >> 1 ^ uVar25) & 1) == 0) {
        uVar32 = uVar32 ^ uVar26;
        uVar61 = uVar61 ^ uVar30;
      }
      local_400._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
      if (((int)uVar25 / 2 & 1U) == 0) {
        local_400._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)local_400._s_0.Y >> 0x20) ^ uVar30,
                              SUB84(local_400._s_0.Y,0) ^ uVar26);
      }
      local_400._s_0.Z = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
      if ((int)uVar25 < 4) {
        local_400._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)local_400._s_0.Z >> 0x20) ^ uVar30,
                              SUB84(local_400._s_0.Z,0) ^ uVar26);
      }
      local_400._s_0.X = (double)CONCAT44(uVar61,uVar32);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_180,&(this->Box).Frame.Rotation,(TVector<double> *)&local_400._s_0
                          );
      dVar3 = (this->Box).Frame.Origin.field0_0x0._s_0.Y;
      dVar39 = (this->Box).Frame.Origin.field0_0x0._s_0.Z;
      dVar38 = (pTVar23->field0_0x0)._s_0.Y;
      dVar45 = (pTVar23->field0_0x0)._s_0.Z;
      pdVar33[-1] = (this->Box).Frame.Origin.field0_0x0._s_0.X + (pTVar23->field0_0x0)._s_0.X;
      *pdVar33 = dVar3 + dVar38;
      pdVar33[1] = dVar39 + dVar45;
    }
    else {
      *(undefined4 *)((longlong)&local_150 + lVar27 * 4) =
           *(undefined4 *)((longlong)&local_168.field0_0x0 + lVar27 * 4 + 8);
      if ((((int)uVar32 < 0) || (7 < (int)uVar32)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index <= 7",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                              ,0x9e,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(undefined8 *)&(this->Box).Extents.field0_0x0;
      uVar25 = (uint)uVar4;
      uVar61 = (uint)((ulonglong)uVar4 >> 0x20);
      if (((uVar32 >> 1 ^ uVar32) & 1) == 0) {
        uVar25 = uVar25 ^ uVar26;
        uVar61 = uVar61 ^ uVar30;
      }
      local_418._s_0.Y = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
      if (((int)uVar32 / 2 & 1U) == 0) {
        local_418._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)local_418._s_0.Y >> 0x20) ^ uVar30,
                              SUB84(local_418._s_0.Y,0) ^ uVar26);
      }
      local_418._s_0.Z = *(double *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
      if ((int)uVar32 < 4) {
        local_418._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)local_418._s_0.Z >> 0x20) ^ uVar30,
                              SUB84(local_418._s_0.Z,0) ^ uVar26);
      }
      local_418._s_0.X = (double)CONCAT44(uVar61,uVar25);
      pTVar23 = UE::Geometry::operator*<double>
                          (&local_198,&(this->Box).Frame.Rotation,(TVector<double> *)&local_418._s_0
                          );
      dVar3 = (this->Box).Frame.Origin.field0_0x0._s_0.Y;
      dVar39 = (this->Box).Frame.Origin.field0_0x0._s_0.Z;
      dVar38 = (pTVar23->field0_0x0)._s_0.Y;
      dVar45 = (pTVar23->field0_0x0)._s_0.Z;
      pdVar33[-1] = (pTVar23->field0_0x0)._s_0.X + (this->Box).Frame.Origin.field0_0x0._s_0.X;
      *pdVar33 = dVar3 + dVar38;
      pdVar33[1] = dVar39 + dVar45;
      local_5bc[lVar36] = '\x01';
    }
    pdVar33 = pdVar33 + 3;
    local_130[lVar36] = *(uint *)((longlong)&local_150 + lVar27 * 4);
    lVar36 = lVar36 + 1;
  } while (lVar36 < 4);
  auVar43._0_8_ = (local_528[5] - local_528[2]) * (local_528[5] - local_528[2]);
  auVar43._8_8_ = 0;
  auVar47._0_8_ = (local_528[0xb] - local_528[8]) * (local_528[0xb] - local_528[8]);
  auVar47._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (local_528[4] - local_528[1]) * (local_528[4] - local_528[1]) +
                 (local_528[3] - local_528[0]) * (local_528[3] - local_528[0]) + auVar43._0_8_;
  auVar40 = sqrtpd(auVar43,auVar9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       (local_528[10] - local_528[7]) * (local_528[10] - local_528[7]) +
       (local_528[9] - local_528[6]) * (local_528[9] - local_528[6]) + auVar47._0_8_;
  auVar48 = sqrtpd(auVar47,auVar10);
  if (auVar48._0_8_ <= auVar40._0_8_) {
    auVar48._0_8_ = auVar40._0_8_;
  }
  local_568 = auVar48._0_8_;
  auVar44._0_8_ = (local_528[6] - local_528[3]) * (local_528[6] - local_528[3]);
  auVar44._8_8_ = 0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ =
       (local_528[10] - local_528[1]) * (local_528[10] - local_528[1]) +
       (local_528[9] - local_528[0]) * (local_528[9] - local_528[0]) +
       (local_528[0xb] - local_528[2]) * (local_528[0xb] - local_528[2]);
  auVar49 = sqrtpd(auVar48,auVar14);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (local_528[7] - local_528[4]) * (local_528[7] - local_528[4]) + auVar44._0_8_ +
                 (local_528[8] - local_528[5]) * (local_528[8] - local_528[5]);
  auVar40 = sqrtpd(auVar44,auVar8);
  local_560 = auVar49._0_8_;
  if (auVar49._0_8_ <= auVar40._0_8_) {
    local_560 = auVar40._0_8_;
  }
  if (((this->FaceUVOrientations).ArrayNum < 2) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar22 = *(int *)(this->FaceUVOrientations).AllocatorInstance.InlineData[1].Pad;
  iVar31 = -iVar31;
  uVar30 = iVar31 + 1;
  local_5b0 = (ulonglong)uVar30;
  iVar35 = iVar31 + 3;
  uVar26 = iVar31 + 4U & 0x80000003;
  if ((int)uVar26 < 0) {
    uVar26 = (uVar26 - 1 | 0xfffffffc) + 1;
  }
  if ((local_5bc[(int)uVar30] == '\0') || (local_5bc[(longlong)(int)uVar30 + 2] == '\0')) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if (((local_5bc[0] == local_5bc[1]) && (local_5bc[2] == local_5bc[3])) ||
     ((local_5bc[1] == local_5bc[2] && (local_5bc[3] == local_5bc[0])))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if ((bVar21) && (local_5bc[(longlong)(int)uVar30 + 1] != '\0')) {
    bVar16 = false;
  }
  else {
    lVar27 = (longlong)(int)uVar30;
    lVar36 = (longlong)(int)uVar30;
    fVar62 = (float)(local_528[lVar27 * 3 + 6] - local_528[lVar36 * 3]);
    fVar58 = (float)(local_528[lVar27 * 3 + 7] - local_528[lVar36 * 3 + 1]);
    fVar63 = (float)(local_528[lVar27 * 3 + 8] - local_528[lVar36 * 3 + 2]);
    fVar54 = (float)(local_528[lVar36 * 3 + 3] - local_528[lVar36 * 3]);
    fVar59 = (float)(local_528[lVar36 * 3 + 4] - local_528[lVar36 * 3 + 1]);
    fVar55 = (float)(local_528[lVar36 * 3 + 5] - local_528[lVar36 * 3 + 2]);
    local_5a0._s_0.Y = fVar54 * fVar63 - fVar55 * fVar62;
    local_5a0._s_0.X = fVar55 * fVar58 - fVar59 * fVar63;
    local_5a0._s_0.Z = fVar59 * fVar62 - fVar54 * fVar58;
    fVar55 = local_5a0._s_0.Y * local_5a0._s_0.Y + local_5a0._s_0.X * local_5a0._s_0.X +
             local_5a0._s_0.Z * local_5a0._s_0.Z;
    if (__real_322bcc77 < fVar55) {
      fVar55 = __real_3f800000 / SQRT(fVar55);
      local_5a0._s_0.X = fVar55 * local_5a0._s_0.X;
      local_5a0._s_0.Y = fVar55 * local_5a0._s_0.Y;
      local_5a0._s_0.Z = fVar55 * local_5a0._s_0.Z;
    }
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_1>::operator()
              (&local_558,uVar30,(TVector<float> *)&local_5a0._s_0,local_130[(int)uVar30],0.0,iVar22
              );
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_1>::operator()
              (&local_558,(int)local_5b0 + 1,(TVector<float> *)&local_5a0._s_0,
               local_130[(longlong)(int)local_5b0 + 1],0.0,iVar22);
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_1>::operator()
              (&local_558,iVar35,(TVector<float> *)&local_5a0._s_0,local_130[lVar27 + 2],0.0,iVar22)
    ;
    `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
    <lambda_2>::operator()(&local_590,(int)local_5b0,(int)local_5b0 + 1,iVar35);
    if (!bVar15) {
      local_5c0 = local_5c0 + 1;
    }
    bVar16 = true;
    if (!bVar21) goto LAB_14c95e665;
  }
  if (local_5bc[(int)uVar26] != '\0') {
    return;
  }
LAB_14c95e665:
  iVar31 = (int)local_5b0;
  lVar36 = (longlong)iVar31;
  lVar27 = (longlong)(int)uVar26;
  if (bVar15) {
    uVar25 = local_130[lVar36 + 4];
    uVar30 = local_130[lVar27];
    uVar32 = 0;
    if ((int)uVar25 < (int)this->_padding_) {
      uVar32 = ~uVar25 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar29 = &local_428;
    local_428._0_8_ = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar25 * 0xc);
    local_428._s_0.Z = *(float *)(this->_padding_ + 8 + (longlong)(int)uVar25 * 0xc);
  }
  else {
    lVar34 = (longlong)iVar31;
    dVar45 = local_528[lVar27 * 3] - local_528[lVar36 * 3];
    dVar46 = local_528[lVar34 * 3 + 7] - local_528[lVar36 * 3 + 1];
    dVar52 = local_528[lVar34 * 3 + 6] - local_528[lVar36 * 3];
    dVar38 = local_528[lVar27 * 3 + 1] - local_528[lVar36 * 3 + 1];
    dVar3 = local_528[lVar34 * 3 + 8] - local_528[lVar36 * 3 + 2];
    dVar39 = local_528[lVar27 * 3 + 2] - local_528[lVar36 * 3 + 2];
    dVar11 = dVar46 * dVar45 - dVar52 * dVar38;
    dVar38 = dVar3 * dVar38 - dVar46 * dVar39;
    dVar39 = dVar52 * dVar39 - dVar3 * dVar45;
    dVar3 = dVar39 * dVar39 + dVar38 * dVar38 + dVar11 * dVar11;
    if (__real_3e45798ee0000000 < dVar3) {
      dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
      dVar38 = dVar38 * dVar3;
      dVar39 = dVar39 * dVar3;
      dVar11 = dVar11 * dVar3;
    }
    fVar55 = (float)dVar38;
    fVar63 = (float)dVar39;
    fVar59 = (float)dVar11;
    if (bVar16) {
      local_498._s_0.X = fVar55;
      local_498._s_0.Y = fVar63;
      local_498._s_0.Z = fVar59;
      uVar30 = UE::Geometry::FMeshShapeGenerator::AppendNormal
                         ((FMeshShapeGenerator *)this,(TVector<float> *)&local_498._s_0,
                          local_130[iVar31]);
      local_130[(longlong)iVar31 + 4] = uVar30;
      local_48c._s_0.X = fVar55;
      local_48c._s_0.Y = fVar63;
      local_48c._s_0.Z = fVar59;
      uVar30 = UE::Geometry::FMeshShapeGenerator::AppendNormal
                         ((FMeshShapeGenerator *)this,(TVector<float> *)&local_48c._s_0,
                          local_130[lVar34 + 2]);
      local_130[lVar34 + 6] = uVar30;
    }
    else {
      local_480._s_0.X = fVar55;
      local_480._s_0.Y = fVar63;
      local_480._s_0.Z = fVar59;
      `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
      <lambda_1>::operator()
                (&local_558,iVar31,(TVector<float> *)&local_480._s_0,local_130[iVar31],0.0,iVar22);
      local_474._s_0.X = fVar55;
      local_474._s_0.Y = fVar63;
      local_474._s_0.Z = fVar59;
      `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
      <lambda_1>::operator()
                (&local_558,iVar35,(TVector<float> *)&local_474._s_0,local_130[lVar34 + 2],0.0,
                 iVar22);
    }
    uVar30 = local_130[lVar27];
    pTVar29 = &local_468;
    local_468._s_0.X = fVar55;
    local_468._s_0.Y = fVar63;
    local_468._s_0.Z = fVar59;
  }
  `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
  <lambda_1>::operator()(&local_558,uVar26,(TVector<float> *)&pTVar29->_s_0,uVar30,0.0,iVar22);
  `CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::AppendUsingCurrentSettings'::__l2::
  <lambda_2>::operator()(&local_590,(int)local_5b0,iVar35,uVar26);
  return;
}

// Generate @ 14c97d6e0

FMeshShapeGenerator * __thiscall
CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::Generate
          (FWeldedMinimalBoxMeshGenerator *this)

{
  int *_Dst;
  undefined1 uVar1;
  code *pcVar2;
  ForElementType<int> *pFVar3;
  bool bVar4;
  int iVar5;
  FMeshShapeGenerator *pFVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<int,TFixedAllocator<6>_> *pTVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  pTVar10 = &this->FaceUVOrientations;
  iVar8 = (this->FaceUVOrientations).ArrayNum;
  _Dst = &(this->FaceUVOrientations).ArrayNum;
  if (iVar8 < 6) {
    iVar5 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<6>::ForElementType<int>_>
                      (4,4,6 - iVar8,&pTVar10->AllocatorInstance,_Dst,
                       &(this->FaceUVOrientations).ArrayMax);
    memset((pTVar10->AllocatorInstance).InlineData + iVar5,0,(longlong)(6 - iVar8) << 2);
  }
  else if (6 < iVar8) {
    iVar8 = iVar8 + -6;
    if (iVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMeshShapeGenerator *)(*pcVar2)();
        return pFVar6;
      }
    }
    else if (iVar8 == 0) goto LAB_14c97d7b7;
    iVar5 = (*_Dst - iVar8) + -6;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + iVar8,(longlong)iVar5 << 2);
    }
    *_Dst = *_Dst - iVar8;
  }
LAB_14c97d7b7:
  iVar8 = *_Dst;
  pFVar3 = &pTVar10->AllocatorInstance;
  while( true ) {
    if (*_Dst != iVar8) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar10 == (TArray<int,TFixedAllocator<6>_> *)(pFVar3->InlineData + iVar8)) break;
    uVar7 = *(uint *)(pTVar10->AllocatorInstance).InlineData[0].Pad;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7 & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      uVar7 = 4 - uVar7;
    }
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(pTVar10->AllocatorInstance).InlineData[0].Pad = uVar7;
    pTVar10 = (TArray<int,TFixedAllocator<6>_> *)((pTVar10->AllocatorInstance).InlineData + 1);
  }
  if (this->bCrosswiseDiagonal != false) {
    bVar4 = (this->CornerInfo).WeldedAtBase[0];
    if ((bVar4 == false) || ((this->CornerInfo).WeldedAtBase[2] == false)) {
      if ((this->CornerInfo).WeldedAtBase[1] == false) goto LAB_14c97d899;
    }
    else if ((this->CornerInfo).WeldedAtBase[1] == false) {
      if ((this->CornerInfo).WeldedAtBase[3] != false) goto LAB_14c97d899;
      lVar9 = 0xf1;
      lVar11 = 0xf3;
      goto LAB_14c97d871;
    }
    if ((((this->CornerInfo).WeldedAtBase[3] != false) && (bVar4 == false)) &&
       ((this->CornerInfo).WeldedAtBase[2] == false)) {
      lVar9 = 0xf0;
      lVar11 = 0xf2;
LAB_14c97d871:
      *(undefined1 *)((longlong)&this->_padding_ + lVar9) = 1;
      AppendUsingCurrentSettings(this);
      uVar1 = *(undefined1 *)((longlong)&this->_padding_ + lVar9);
      *(undefined1 *)((longlong)&this->_padding_ + lVar9) =
           *(undefined1 *)((longlong)&this->_padding_ + lVar11);
      *(undefined1 *)((longlong)&this->_padding_ + lVar11) = uVar1;
      AppendUsingCurrentSettings(this);
      *(undefined1 *)((longlong)&this->_padding_ + lVar11) = 0;
      return (FMeshShapeGenerator *)this;
    }
  }
LAB_14c97d899:
  AppendUsingCurrentSettings(this);
  return (FMeshShapeGenerator *)this;
}

