// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 24

// FDataflowDebugDraw @ 1462cdef0

FDataflowDebugDraw * __thiscall
FDataflowDebugDraw::FDataflowDebugDraw
          (FDataflowDebugDraw *this,FDataflowDebugRenderSceneProxy *param_1,
          TArray<TSharedPtr<FDataflowBaseElement,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FLinearColor FVar1;
  
  this->DataflowElements = param_2;
  this->_padding_ = (longlong)&___7FDataflowDebugDraw__6B_;
  this->DebugRenderSceneProxy = param_1;
  FVar1 = FLinearColor::White;
  this->PointSize = 5.0;
  this->LineWidth = 1.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bWireframe = true;
  this->bShaded = false;
  this->bTranslucent = false;
  this->PriorityGroup = SDPG_World;
  FVar1 = FLinearColor::White;
  this->DrawType = Invalid;
  (this->ColorWithTranslucency).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->OverlayStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlayStrings).ArrayNum = 0;
  (this->OverlayStrings).ArrayMax = 0;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
  FDataflowDebugRenderSceneProxy::ClearAll(this->DebugRenderSceneProxy);
  FVar1 = FLinearColor::White;
  this->LineWidth = 1.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bWireframe = true;
  this->bShaded = false;
  (this->ColorWithTranslucency).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bTranslucent = false;
  this->PriorityGroup = SDPG_World;
  return this;
}

// ~FDataflowDebugDraw @ 1462cfe20

void __thiscall FDataflowDebugDraw::~FDataflowDebugDraw(FDataflowDebugDraw *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->OverlayStrings).AllocatorInstance.Data,
             (this->OverlayStrings).ArrayNum);
  pFVar1 = (this->OverlayStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DrawBox @ 1462d6d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDataflowDebugDraw::DrawBox
          (FDataflowDebugDraw *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,double param_4)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EDrawType EVar5;
  FDataflowDebugRenderSceneProxy *pFVar6;
  uint *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  uint *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_158;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120;
  undefined7 uStack_11f;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  float fStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  EDrawType local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar6 = this->DebugRenderSceneProxy;
  EVar5 = this->DrawType;
  plVar19 = &pFVar6->_padding_;
  dVar9 = param_2->X;
  dVar10 = param_2->Y;
  dVar11 = param_2->Z;
  dVar12 = param_2->W;
  dVar13 = (param_3->field0_0x0)._s_0.X;
  dVar14 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  fVar20 = (float)this->LineWidth;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  uStack_df = (undefined1)((uint)local_158 >> 8);
  uStack_e0 = (undefined1)local_158;
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uStack_128 = (undefined4)uVar4;
  uStack_124 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_140 = (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_13c = (uint)((ulonglong)uVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_150 = *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_14c = *(uint *)((longlong)&param_1->field0_0x0 + 4) ^
               __xmm_80000000000000008000000000000000._4_4_;
  uStack_148 = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
  uStack_144 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  uStack_dd = (undefined1)((uint)local_158 >> 0x18);
  uVar3 = *(undefined8 *)&param_1->field0_0x0;
  uStack_130 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_12c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_120 = 1;
  uStack_de = (undefined1)((uint)local_158 >> 0x10);
  local_138._0_4_ = (undefined4)uVar3;
  local_138._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_100 = (undefined4)local_138;
  uStack_fc = local_138._4_4_;
  local_e8 = CONCAT71(uStack_11f,1);
  local_98 = param_4;
  dStack_90 = param_4;
  local_88 = param_4;
  uStack_80 = 0;
  uStack_a0 = 0;
  puVar7 = (uint *)*plVar19;
  local_138 = uVar3;
  local_118 = local_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  local_108 = uStack_140;
  uStack_104 = uStack_13c;
  local_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  fStack_dc = fVar20;
  local_d8 = dVar9;
  dStack_d0 = dVar10;
  local_c8 = dVar11;
  dStack_c0 = dVar12;
  local_b8 = dVar13;
  dStack_b0 = dVar14;
  local_a8 = dVar2;
  local_78 = EVar5;
  if ((puVar7 <= &local_118) &&
     (lVar17 = (longlong)*(int *)((longlong)&pFVar6->_padding_ + 4),
     &local_118 < puVar7 + lVar17 * 0x2c)) {
    local_170 = (longlong)(int)pFVar6->_padding_;
    local_168 = 0xb0;
    local_188 = &local_118;
    local_180 = puVar7;
    local_178 = lVar17;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar16 = (int)pFVar6->_padding_;
  piVar1 = (int *)((longlong)&pFVar6->_padding_ + 4);
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10b0,(ForAnyElementType *)plVar19,piVar1);
  }
  *(int *)&pFVar6->_padding_ = iVar16 + 1;
  puVar18 = (undefined8 *)((longlong)iVar16 * 0xb0 + *plVar19);
  *puVar18 = CONCAT44(uStack_114,local_118);
  puVar18[1] = CONCAT44(uStack_10c,uStack_110);
  puVar18[2] = CONCAT44(uStack_104,local_108);
  puVar18[3] = CONCAT44(uStack_fc,uStack_100);
  puVar18[4] = CONCAT44(uStack_f4,local_f8);
  puVar18[5] = CONCAT44(uStack_ec,uStack_f0);
  puVar18[6] = local_e8;
  puVar18[7] = CONCAT44(fStack_dc,
                        CONCAT13(uStack_dd,CONCAT12(uStack_de,CONCAT11(uStack_df,uStack_e0))));
  puVar18[8] = local_d8;
  puVar18[9] = dStack_d0;
  puVar18[10] = local_c8;
  puVar18[0xb] = dStack_c0;
  puVar18[0xc] = local_b8;
  puVar18[0xd] = dStack_b0;
  puVar18[0xe] = local_a8;
  puVar18[0xf] = uStack_a0;
  puVar18[0x10] = local_98;
  puVar18[0x11] = dStack_90;
  puVar18[0x12] = local_88;
  puVar18[0x13] = uStack_80;
  puVar18[0x14] = CONCAT44(uStack_74,local_78);
  puVar18[0x15] = uStack_70;
  return;
}

// DrawCapsule @ 1462d6fd0

void __thiscall
FDataflowDebugDraw::DrawCapsule
          (FDataflowDebugDraw *this,TVector<double> *param_1,double *param_2,double *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  EDrawType EVar4;
  FDataflowDebugRenderSceneProxy *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  float local_98;
  undefined4 uStack_94;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  EDrawType EStack_20;
  undefined4 uStack_1c;
  
  dStack_90 = (param_1->field0_0x0)._s_0.X;
  dStack_88 = (param_1->field0_0x0)._s_0.Y;
  pFVar5 = this->DebugRenderSceneProxy;
  plVar11 = &pFVar5->_padding_;
  EVar4 = this->DrawType;
  local_98 = (float)*param_2;
  dStack_80 = (param_1->field0_0x0)._s_0.Z;
  fVar12 = (float)*param_3;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  uStack_74 = 0;
  local_68 = (param_4->field0_0x0)._s_0.X;
  dStack_60 = (param_4->field0_0x0)._s_0.Y;
  local_58 = (param_4->field0_0x0)._s_0.Z;
  dStack_50 = (param_5->field0_0x0)._s_0.X;
  dStack_48 = (param_5->field0_0x0)._s_0.Y;
  dStack_40 = (param_5->field0_0x0)._s_0.Z;
  local_38 = (param_6->field0_0x0)._s_0.X;
  dStack_30 = (param_6->field0_0x0)._s_0.Y;
  local_28 = (param_6->field0_0x0)._s_0.Z;
  fStack_70 = fVar12;
  EStack_20 = EVar4;
  if (((float *)*plVar11 <= &local_98) &&
     (&local_98 < (float *)*plVar11 + (longlong)*(int *)((longlong)&pFVar5->_padding_ + 4) * 0x20))
  {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (int)pFVar5->_padding_;
  piVar1 = (int *)((longlong)&pFVar5->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,(ForAnyElementType *)plVar11,piVar1);
  }
  *(int *)&pFVar5->_padding_ = iVar9 + 1;
  lVar6 = *plVar11;
  lVar10 = (longlong)iVar9 * 0x80;
  *(undefined8 *)(lVar10 + lVar6) = CONCAT44(uStack_94,local_98);
  ((undefined8 *)(lVar10 + lVar6))[1] = dStack_90;
  pdVar2 = (double *)(lVar10 + 0x10 + lVar6);
  *pdVar2 = dStack_88;
  pdVar2[1] = dStack_80;
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar6);
  *puVar3 = CONCAT44(uStack_74,local_78);
  puVar3[1] = CONCAT44(uStack_6c,fStack_70);
  pdVar2 = (double *)(lVar10 + 0x30 + lVar6);
  *pdVar2 = local_68;
  pdVar2[1] = dStack_60;
  pdVar2 = (double *)(lVar10 + 0x40 + lVar6);
  *pdVar2 = local_58;
  pdVar2[1] = dStack_50;
  pdVar2 = (double *)(lVar10 + 0x50 + lVar6);
  *pdVar2 = dStack_48;
  pdVar2[1] = dStack_40;
  pdVar2 = (double *)(lVar10 + 0x60 + lVar6);
  *pdVar2 = local_38;
  pdVar2[1] = dStack_30;
  pdVar2 = (double *)(lVar10 + 0x70 + lVar6);
  *pdVar2 = local_28;
  pdVar2[1] = (double)CONCAT44(uStack_1c,EStack_20);
  return;
}

// DrawLine @ 1462d7180

void __thiscall
FDataflowDebugDraw::DrawLine
          (FDataflowDebugDraw *this,TVector<double> *param_1,TVector<double> *param_2)

{
  int *piVar1;
  double *pdVar2;
  FDataflowDebugRenderSceneProxy *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 local_res8;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  float fStack_24;
  
  pFVar3 = this->DebugRenderSceneProxy;
  plVar9 = &pFVar3->_padding_;
  fVar10 = (float)this->LineWidth;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  uStack_27 = (undefined1)((uint)local_res8 >> 8);
  local_28 = (undefined1)local_res8;
  local_58 = (param_1->field0_0x0)._s_0.X;
  dStack_50 = (param_1->field0_0x0)._s_0.Y;
  local_48 = (param_1->field0_0x0)._s_0.Z;
  dStack_40 = (param_2->field0_0x0)._s_0.X;
  dStack_38 = (param_2->field0_0x0)._s_0.Y;
  uStack_25 = (undefined1)((uint)local_res8 >> 0x18);
  dStack_30 = (param_2->field0_0x0)._s_0.Z;
  uStack_26 = (undefined1)((uint)local_res8 >> 0x10);
  fStack_24 = fVar10;
  if (((double *)*plVar9 <= &local_58) &&
     (&local_58 < (double *)*plVar9 + (longlong)*(int *)((longlong)&pFVar3->_padding_ + 4) * 7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (int)pFVar3->_padding_;
  piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)plVar9,piVar1);
  }
  *(int *)&pFVar3->_padding_ = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  lVar4 = *plVar9;
  *(double *)(lVar8 + lVar4) = local_58;
  ((double *)(lVar8 + lVar4))[1] = dStack_50;
  pdVar2 = (double *)(lVar8 + 0x10 + lVar4);
  *pdVar2 = local_48;
  pdVar2[1] = dStack_40;
  pdVar2 = (double *)(lVar8 + 0x20 + lVar4);
  *pdVar2 = dStack_38;
  pdVar2[1] = dStack_30;
  *(ulonglong *)(lVar8 + 0x30 + lVar4) =
       CONCAT44(fStack_24,CONCAT13(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  return;
}

// DrawMesh @ 1462d7300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDataflowDebugDraw::DrawMesh(FDataflowDebugDraw *this,IDebugDrawMesh *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDataflowDebugRenderSceneProxy *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_2b8 [32];
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  FColor_u_0 local_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  TVector<float>_u_0 local_220;
  TVector<float>_u_0 local_214;
  TVector<float>_u_0 local_208;
  TVector<float>_u_0 local_1fc;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined4 uStack_1af;
  undefined2 uStack_1ab;
  undefined1 uStack_1a9;
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [32];
  FMesh local_158;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  <unnamed_type_Vector> local_ac;
  <unnamed_type_Vector> local_a8;
  undefined4 uStack_a4;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  <unnamed_type_Vector> local_4c;
  <unnamed_type_Vector> local_48;
  FColor_u_0 FStack_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  iVar11 = 0;
  if (this->bWireframe != false) {
    pFVar3 = this->DebugRenderSceneProxy;
    iVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
    uVar12 = (int)pFVar3->_padding_ + iVar7 * 3;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (*piVar1 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar12,(ForAnyElementType *)&pFVar3->_padding_,(int)pFVar3->_padding_,piVar1
                );
    }
    iVar8 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
    iVar7 = iVar11;
    if (0 < iVar8) {
      do {
        cVar5 = (**(code **)((longlong)*param_1 + 0x30))(param_1,iVar7);
        if (cVar5 != '\0') {
          (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_230,iVar7);
          (**(code **)((longlong)*param_1 + 0x18))(param_1,local_190,local_230);
          (**(code **)((longlong)*param_1 + 0x18))(param_1,local_1a8,local_22c);
          (**(code **)((longlong)*param_1 + 0x18))(param_1,local_178,local_228);
          (**(code **)(this->_padding_ + 0x68))(this,local_190,local_1a8);
          (**(code **)(this->_padding_ + 0x68))(this,local_1a8,local_178);
          (**(code **)(this->_padding_ + 0x68))(this,local_178,local_190);
        }
        iVar7 = iVar7 + 1;
        iVar8 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
      } while (iVar7 < iVar8);
    }
  }
  if (this->bShaded != false) {
    FDebugRenderSceneProxy::FMesh::FMesh(&local_158);
    local_1b0 = 0;
    uStack_1af = 0;
    uStack_1ab = 0;
    uStack_1a9 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_158.Box.Max.field0_0x0._s_0.Y = 0.0;
    local_158.Box.Max.field0_0x0._s_0.Z = 0.0;
    local_158.Box.IsValid = '\0';
    local_158.Box.Pad[0] = '\0';
    local_158.Box.Pad[1] = '\0';
    local_158.Box.Pad[2] = '\0';
    local_158.Box.Pad[3] = '\0';
    local_158.Box.Pad[4] = '\0';
    local_158.Box.Pad[5] = '\0';
    local_158.Box.Pad[6] = '\0';
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_158.Box.Min.field0_0x0._s_0.X = 0.0;
    local_158.Box.Min.field0_0x0._s_0.Y = 0.0;
    local_158.Box.Min.field0_0x0._s_0.Z = 0.0;
    local_158.Box.Max.field0_0x0._s_0.X = 0.0;
    uVar12 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (local_158.Vertices.ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,uVar12,(ForAnyElementType *)&local_158,local_158.Vertices.ArrayNum,
                 &local_158.Vertices.ArrayMax);
    }
    iVar8 = (**(code **)((longlong)*param_1 + 8))(param_1);
    iVar7 = iVar11;
    if (0 < iVar8) {
      do {
        cVar5 = (**(code **)((longlong)*param_1 + 0x10))(param_1,iVar7);
        if (cVar5 == '\0') {
          local_258 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_220._0_8_ = 0x3f800000;
          local_220._s_0.Z = 0.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_ac._s_0,(TVector<float> *)&local_220._s_0);
          local_214._0_8_ = 0;
          local_214._s_0.Z = 1.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_a8._s_0,(TVector<float> *)&local_214._s_0);
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          local_cc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_a4 = 0;
          local_a8._s_0.W = 0x7f;
          if (((local_158.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8)
              && ((FScriptContainerElement *)&local_f8 <
                  local_158.Vertices.AllocatorInstance.Data +
                  (longlong)local_158.Vertices.ArrayMax * 0x58)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_158.Vertices.ArrayNum == local_158.Vertices.ArrayMax) {
            local_158.Vertices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x458,(ForAnyElementType *)&local_158,&local_158.Vertices.ArrayMax);
          }
          lVar9 = (longlong)local_158.Vertices.ArrayNum * 0x58;
          *(undefined8 *)(local_158.Vertices.AllocatorInstance.Data + lVar9) = local_f8;
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 8) =
               CONCAT44(uStack_ec,uStack_f0);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x10) =
               CONCAT44(uStack_e4,uStack_e8);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x10 + 8) =
               CONCAT44(uStack_dc,uStack_e0);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x20) =
               CONCAT44(uStack_d4,uStack_d8);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x20 + 8) =
               CONCAT44(local_cc,uStack_d0);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x30) =
               CONCAT44(uStack_c4,uStack_c8);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x30 + 8) =
               CONCAT44(uStack_bc,uStack_c0);
          pFVar2 = local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x40;
          *(undefined4 *)pFVar2 = uStack_b8;
          *(undefined4 *)(pFVar2 + 4) = (undefined4)uStack_b4;
          *(undefined4 *)(pFVar2 + 8) = uStack_b4._4_4_;
          *(<unnamed_type_Vector> *)(pFVar2 + 0xc) = local_ac;
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x50) =
               CONCAT44(uStack_a4,local_a8.Packed);
          local_158.Vertices.ArrayNum = local_158.Vertices.ArrayNum + 1;
        }
        else {
          (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_248,iVar7);
          local_98 = (float)(double)CONCAT44(uStack_244,local_248);
          local_250 = 0;
          local_208._0_8_ = 0x3f800000;
          local_208._s_0.Z = 0.0;
          fStack_94 = (float)(double)CONCAT44(uStack_23c,uStack_240);
          fStack_90 = (float)local_238;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_4c._s_0,(TVector<float> *)&local_208._s_0);
          local_1fc._0_8_ = 0;
          local_1fc._s_0.Z = 1.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_48._s_0,(TVector<float> *)&local_1fc._s_0);
          FStack_44 = local_25c;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          local_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          local_48._s_0.W = 0x7f;
          if (((local_158.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98)
              && ((FScriptContainerElement *)&local_98 <
                  local_158.Vertices.AllocatorInstance.Data +
                  (longlong)local_158.Vertices.ArrayMax * 0x58)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_158.Vertices.ArrayNum == local_158.Vertices.ArrayMax) {
            local_158.Vertices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x458,(ForAnyElementType *)&local_158,&local_158.Vertices.ArrayMax);
          }
          lVar9 = (longlong)local_158.Vertices.ArrayNum * 0x58;
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9) =
               CONCAT44(fStack_94,local_98);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 8) =
               CONCAT44(uStack_8c,fStack_90);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x10) =
               CONCAT44(uStack_84,uStack_88);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x10 + 8) =
               CONCAT44(uStack_7c,uStack_80);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x20) =
               CONCAT44(uStack_74,uStack_78);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x20 + 8) =
               CONCAT44(local_6c,uStack_70);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x30) =
               CONCAT44(uStack_64,uStack_68);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x30 + 8) =
               CONCAT44(uStack_5c,uStack_60);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x40) =
               CONCAT44(uStack_54,uStack_58);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x40 + 8) =
               CONCAT44(local_4c.Packed,uStack_50);
          *(ulonglong *)(local_158.Vertices.AllocatorInstance.Data + lVar9 + 0x50) =
               CONCAT44(FStack_44.Bits,local_48.Packed);
          if (local_158.Box.IsValid == '\0') {
            local_158.Box.IsValid = '\x01';
            local_158.Box.Max.field0_0x0._4_4_ = uStack_244;
            local_158.Box.Max.field0_0x0._0_4_ = local_248;
            local_158.Box.Max.field0_0x0._12_4_ = uStack_23c;
            local_158.Box.Max.field0_0x0._8_4_ = uStack_240;
            local_158.Box.Min.field0_0x0._4_4_ = uStack_244;
            local_158.Box.Min.field0_0x0._0_4_ = local_248;
            local_158.Box.Min.field0_0x0._12_4_ = uStack_23c;
            local_158.Box.Min.field0_0x0._8_4_ = uStack_240;
            local_158.Box.Max.field0_0x0._s_0.Z = local_238;
            local_158.Box.Min.field0_0x0._s_0.Z = local_238;
            local_158.Vertices.ArrayNum = local_158.Vertices.ArrayNum + 1;
          }
          else {
            uVar13 = SUB84(local_158.Box.Min.field0_0x0._s_0.X,0);
            uVar15 = (int)((ulonglong)local_158.Box.Min.field0_0x0._0_8_ >> 0x20);
            if ((double)CONCAT44(uStack_244,local_248) <= local_158.Box.Min.field0_0x0._s_0.X) {
              uVar13 = local_248;
              uVar15 = uStack_244;
            }
            uVar16 = SUB84(local_158.Box.Min.field0_0x0._s_0.Y,0);
            uVar17 = (int)((ulonglong)local_158.Box.Min.field0_0x0._8_8_ >> 0x20);
            if ((double)CONCAT44(uStack_23c,uStack_240) <= local_158.Box.Min.field0_0x0._s_0.Y) {
              uVar16 = uStack_240;
              uVar17 = uStack_23c;
            }
            local_158.Box.Min.field0_0x0._s_0.X = (double)CONCAT44(uVar15,uVar13);
            uVar14 = (undefined4)((ulonglong)local_238 >> 0x20);
            uVar13 = SUB84(local_158.Box.Min.field0_0x0._s_0.Z,0);
            uVar15 = (int)((ulonglong)local_158.Box.Min.field0_0x0._16_8_ >> 0x20);
            if (local_238 <= local_158.Box.Min.field0_0x0._s_0.Z) {
              uVar13 = SUB84(local_238,0);
              uVar15 = uVar14;
            }
            local_158.Box.Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar17,uVar16);
            uVar16 = SUB84(local_158.Box.Max.field0_0x0._s_0.Y,0);
            uVar17 = (int)((ulonglong)local_158.Box.Max.field0_0x0._8_8_ >> 0x20);
            if (local_158.Box.Max.field0_0x0._s_0.Y <= (double)CONCAT44(uStack_23c,uStack_240)) {
              uVar16 = uStack_240;
              uVar17 = uStack_23c;
            }
            local_158.Box.Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar15,uVar13);
            uVar13 = SUB84(local_158.Box.Max.field0_0x0._s_0.X,0);
            uVar15 = (int)((ulonglong)local_158.Box.Max.field0_0x0._0_8_ >> 0x20);
            if (local_158.Box.Max.field0_0x0._s_0.X <= (double)CONCAT44(uStack_244,local_248)) {
              uVar13 = local_248;
              uVar15 = uStack_244;
            }
            local_158.Box.Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar17,uVar16);
            local_158.Box.Max.field0_0x0._s_0.X = (double)CONCAT44(uVar15,uVar13);
            uVar13 = SUB84(local_158.Box.Max.field0_0x0._s_0.Z,0);
            uVar15 = (int)((ulonglong)local_158.Box.Max.field0_0x0._16_8_ >> 0x20);
            if (local_158.Box.Max.field0_0x0._s_0.Z <= local_238) {
              uVar13 = SUB84(local_238,0);
              uVar15 = uVar14;
            }
            local_158.Box.Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar15,uVar13);
            local_158.Vertices.ArrayNum = local_158.Vertices.ArrayNum + 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = (**(code **)((longlong)*param_1 + 8))(param_1);
      } while (iVar7 < iVar8);
    }
    iVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
    uVar12 = iVar7 * 3;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (local_158.Indices.ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_158.Indices.AllocatorInstance,local_158.Indices.ArrayNum,
                 &local_158.Indices.ArrayMax);
    }
    iVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
    if (0 < iVar7) {
      do {
        cVar5 = (**(code **)((longlong)*param_1 + 0x30))(param_1,iVar11);
        if (cVar5 != '\0') {
          (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_1f0,iVar11);
          local_268 = local_1f0;
          if (((local_158.Indices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_268)
              && ((FScriptContainerElement *)&local_268 <
                  local_158.Indices.AllocatorInstance.Data +
                  (longlong)local_158.Indices.ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_158.Indices.ArrayNum == local_158.Indices.ArrayMax) {
            local_158.Indices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_158.Indices.AllocatorInstance,&local_158.Indices.ArrayMax);
          }
          iVar7 = local_158.Indices.ArrayNum + 1;
          *(undefined4 *)
           (local_158.Indices.AllocatorInstance.Data + (longlong)local_158.Indices.ArrayNum * 4) =
               local_268;
          local_264 = local_1ec;
          local_158.Indices.ArrayNum = iVar7;
          if (((local_158.Indices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_264)
              && ((FScriptContainerElement *)&local_264 <
                  local_158.Indices.AllocatorInstance.Data +
                  (longlong)local_158.Indices.ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_158.Indices.ArrayNum == local_158.Indices.ArrayMax) {
            local_158.Indices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_158.Indices.AllocatorInstance,&local_158.Indices.ArrayMax);
          }
          iVar7 = local_158.Indices.ArrayNum + 1;
          *(undefined4 *)
           (local_158.Indices.AllocatorInstance.Data + (longlong)local_158.Indices.ArrayNum * 4) =
               local_264;
          local_260 = local_1e8;
          local_158.Indices.ArrayNum = iVar7;
          if (((local_158.Indices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_260)
              && ((FScriptContainerElement *)&local_260 <
                  local_158.Indices.AllocatorInstance.Data +
                  (longlong)local_158.Indices.ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_158.Indices.ArrayNum == local_158.Indices.ArrayMax) {
            local_158.Indices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_158.Indices.AllocatorInstance,&local_158.Indices.ArrayMax);
          }
          *(undefined4 *)
           (local_158.Indices.AllocatorInstance.Data + (longlong)local_158.Indices.ArrayNum * 4) =
               local_260;
          local_158.Indices.ArrayNum = local_158.Indices.ArrayNum + 1;
        }
        iVar11 = iVar11 + 1;
        iVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
      } while (iVar11 < iVar7);
    }
    pFVar3 = this->DebugRenderSceneProxy;
    plVar10 = &pFVar3->_padding_;
    local_158.Color.field0_0x0 = local_25c;
    if ((((FMesh *)*plVar10 <= &local_158) &&
        (&local_158 < (FMesh *)*plVar10 + *(int *)((longlong)&pFVar3->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = (int)pFVar3->_padding_;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,(ForAnyElementType *)plVar10,piVar1);
    }
    *(int *)&pFVar3->_padding_ = iVar11 + 1;
    FDebugRenderSceneProxy::FMesh::FMesh((FMesh *)((longlong)iVar11 * 0x60 + *plVar10),&local_158);
    FDebugRenderSceneProxy::FMesh::~FMesh(&local_158);
  }
  return;
}

// DrawObject @ 1462d7c90

void __thiscall
FDataflowDebugDraw::DrawObject
          (FDataflowDebugDraw *this,TRefCountPtr<IDataflowDebugDrawObject> *param_1)

{
  int *piVar1;
  FDataflowDebugRenderSceneProxy *pFVar2;
  FScriptContainerElement *pFVar3;
  IDataflowDebugDrawObject *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TRefCountPtr<IDataflowDebugDrawObject>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pFVar2 = this->DebugRenderSceneProxy;
  pTVar8 = &pFVar2->Objects;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(pFVar2->Objects).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pFVar2->Objects).ArrayNum;
  piVar1 = &(pFVar2->Objects).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (pFVar2->Objects).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  pIVar4 = param_1->Reference;
  *(IDataflowDebugDrawObject **)(pFVar3 + (longlong)iVar7 * 8) = pIVar4;
  if (pIVar4 != (IDataflowDebugDrawObject *)0x0) {
    *(int *)&pIVar4->field_0x8 = *(int *)&pIVar4->field_0x8 + 1;
  }
  return;
}

// DrawOverlayText @ 1462d7d60

void __thiscall FDataflowDebugDraw::DrawOverlayText(FDataflowDebugDraw *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->OverlayStrings;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->OverlayStrings).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OverlayStrings).ArrayNum;
  piVar2 = &(this->OverlayStrings).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OverlayStrings).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  return;
}

// DrawPoint @ 1462d7e20

void __thiscall FDataflowDebugDraw::DrawPoint(FDataflowDebugDraw *this,TVector<double> *param_1)

{
  int *piVar1;
  FDataflowDebugRenderSceneProxy *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArray<FDataflowDebugRenderSceneProxy::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar8;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  double local_38;
  double dStack_30;
  double local_28;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  ESceneDepthPriorityGroup EStack_c;
  
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  fStack_20 = this->PointSize;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  fStack_1c = FLinearColor::sRGBToLinearTable[local_resa];
  local_18 = FLinearColor::sRGBToLinearTable[local_res9];
  fStack_14 = FLinearColor::sRGBToLinearTable[local_res8];
  EStack_c = this->PriorityGroup;
  pFVar2 = this->DebugRenderSceneProxy;
  pTVar8 = &pFVar2->Points;
  fStack_10 = (float)local_resb * __real_3b808081;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(pFVar2->Points).ArrayMax * 0x30)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->Points).ArrayNum;
  piVar1 = &(pFVar2->Points).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar8->AllocatorInstance,piVar1);
  }
  lVar7 = (longlong)iVar6;
  (pFVar2->Points).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7 * 0x30) = local_38;
  *(double *)(pFVar3 + lVar7 * 0x30 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar3 + lVar7 * 0x30 + 0x10 + 8) = CONCAT44(fStack_1c,fStack_20);
  *(ulonglong *)(pFVar3 + lVar7 * 0x30 + 0x20) = CONCAT44(fStack_14,local_18);
  *(ulonglong *)(pFVar3 + lVar7 * 0x30 + 0x20 + 8) = CONCAT44(EStack_c,fStack_10);
  return;
}

// DrawSphere @ 1462d7f90

void __thiscall
FDataflowDebugDraw::DrawSphere(FDataflowDebugDraw *this,TVector<double> *param_1,double param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  EDrawType EVar4;
  FDataflowDebugRenderSceneProxy *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  float local_38;
  undefined4 uStack_34;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  undefined4 local_18;
  EDrawType EStack_14;
  
  dStack_30 = (param_1->field0_0x0)._s_0.X;
  dStack_28 = (param_1->field0_0x0)._s_0.Y;
  pFVar5 = this->DebugRenderSceneProxy;
  EVar4 = this->DrawType;
  local_38 = (float)param_2;
  plVar11 = &pFVar5->_padding_;
  dStack_20 = (param_1->field0_0x0)._s_0.Z;
  FLinearColor::ToFColorSRGB(&this->ColorWithTranslucency);
  EStack_14 = EVar4;
  if (((float *)*plVar11 <= &local_38) &&
     (&local_38 < (float *)*plVar11 + (longlong)*(int *)((longlong)&pFVar5->_padding_ + 4) * 10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (int)pFVar5->_padding_;
  piVar1 = (int *)((longlong)&pFVar5->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)plVar11,piVar1);
  }
  *(int *)&pFVar5->_padding_ = iVar9 + 1;
  lVar10 = (longlong)iVar9;
  lVar6 = *plVar11;
  puVar2 = (undefined8 *)(lVar6 + lVar10 * 0x28);
  *puVar2 = CONCAT44(uStack_34,local_38);
  puVar2[1] = dStack_30;
  pdVar3 = (double *)(lVar6 + 0x10 + lVar10 * 0x28);
  *pdVar3 = dStack_28;
  pdVar3[1] = dStack_20;
  *(ulonglong *)(lVar6 + 0x20 + lVar10 * 0x28) = CONCAT44(EStack_14,local_18);
  return;
}

// DrawText3d @ 1462d80b0

/* WARNING: Removing unreachable block (ram,0x0001462d81ed) */

void __thiscall
FDataflowDebugDraw::DrawText3d(FDataflowDebugDraw *this,FString *param_1,TVector<double> *param_2)

{
  int *piVar1;
  double *pdVar2;
  FDataflowDebugRenderSceneProxy *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  FString local_38;
  double local_28;
  double dStack_20;
  double local_18;
  undefined4 local_10;
  
  pFVar3 = this->DebugRenderSceneProxy;
  plVar9 = &pFVar3->_padding_;
  ::FString::FString(&local_38,param_1);
  local_28 = (param_2->field0_0x0)._s_0.X;
  dStack_20 = (param_2->field0_0x0)._s_0.Y;
  local_18 = (param_2->field0_0x0)._s_0.Z;
  FLinearColor::ToFColorSRGB(&this->Color);
  if ((((FString *)*plVar9 <= &local_38) &&
      (&local_38 < (FString *)*plVar9 + (longlong)*(int *)((longlong)&pFVar3->_padding_ + 4) * 3))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)pFVar3->_padding_;
  piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)plVar9,piVar1);
  }
  *(int *)&pFVar3->_padding_ = iVar7 + 1;
  lVar4 = *plVar9;
  lVar8 = (longlong)iVar7;
  *(undefined8 *)(lVar4 + lVar8 * 0x30) = 0;
  *(FScriptContainerElement **)(lVar4 + lVar8 * 0x30) = local_38.Data.AllocatorInstance.Data;
  *(int *)(lVar4 + 8 + lVar8 * 0x30) = local_38.Data.ArrayNum;
  *(int *)(lVar4 + 0xc + lVar8 * 0x30) = local_38.Data.ArrayMax;
  pdVar2 = (double *)(lVar4 + 0x10 + lVar8 * 0x30);
  *pdVar2 = local_28;
  pdVar2[1] = dStack_20;
  *(double *)(lVar4 + 0x20 + lVar8 * 0x30) = local_18;
  *(undefined4 *)(lVar4 + 0x28 + lVar8 * 0x30) = local_10;
  return;
}

// GetDataflowElements @ 1462dc7a0

TArray<TSharedPtr<FDataflowBaseElement,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowDebugDraw::GetDataflowElements(FDataflowDebugDraw *this)

{
  return this->DataflowElements;
}

// GetOverlayText @ 1462dd950

FString * __thiscall
FDataflowDebugDraw::GetOverlayText(FDataflowDebugDraw *this,FString *__return_storage_ptr__)

{
  if (0 < (this->OverlayStrings).ArrayNum) {
    ::FString::FString(__return_storage_ptr__,
                       (FString *)(this->OverlayStrings).AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ModifyDataflowElements @ 1462e0010

TArray<TSharedPtr<FDataflowBaseElement,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowDebugDraw::ModifyDataflowElements(FDataflowDebugDraw *this)

{
  return this->DataflowElements;
}

// ReservePoints @ 1462e3d60

void __thiscall FDataflowDebugDraw::ReservePoints(FDataflowDebugDraw *this,int param_1)

{
  uint uVar1;
  int iVar2;
  FDataflowDebugRenderSceneProxy *pFVar3;
  
  pFVar3 = this->DebugRenderSceneProxy;
  iVar2 = (pFVar3->Points).ArrayNum;
  uVar1 = iVar2 + param_1;
  if (-1 < (int)uVar1) {
    if ((pFVar3->Points).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&(pFVar3->Points).AllocatorInstance,iVar2,&(pFVar3->Points).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ResetAllState @ 1462e3e90

void __thiscall FDataflowDebugDraw::ResetAllState(FDataflowDebugDraw *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FLinearColor::White.field0_0x0;
  this->bWireframe = true;
  this->bShaded = false;
  this->LineWidth = 1.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bTranslucent = false;
  (this->ColorWithTranslucency).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->PriorityGroup = SDPG_World;
  return;
}

// SetColor @ 1462e4b60

void __thiscall FDataflowDebugDraw::SetColor(FDataflowDebugDraw *this,FLinearColor *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_10;
  
  bVar1 = this->bTranslucent;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar3;
  if (bVar1 != false) {
    uStack_10 = CONCAT44(0x3e800000,(int)uVar3);
    *(undefined8 *)&(this->ColorWithTranslucency).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ColorWithTranslucency).field0_0x0 + 8) = uStack_10;
    return;
  }
  *(undefined8 *)&(this->ColorWithTranslucency).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->ColorWithTranslucency).field0_0x0 + 8) = uVar3;
  return;
}

// SetForegroundPriority @ 1462e54f0

void __thiscall FDataflowDebugDraw::SetForegroundPriority(FDataflowDebugDraw *this)

{
  this->PriorityGroup = SDPG_Foreground;
  return;
}

// SetLineWidth @ 1462e55a0

void __thiscall FDataflowDebugDraw::SetLineWidth(FDataflowDebugDraw *this,double param_1)

{
  this->LineWidth = param_1;
  return;
}

// SetPointSize @ 1462e5990

void __thiscall FDataflowDebugDraw::SetPointSize(FDataflowDebugDraw *this,float param_1)

{
  this->PointSize = param_1;
  return;
}

// SetShaded @ 1462e59a0

void __thiscall FDataflowDebugDraw::SetShaded(FDataflowDebugDraw *this,bool param_1)

{
  this->bShaded = param_1;
  if (this->bWireframe != false) {
    this->DrawType = param_1 + WireMesh;
    return;
  }
  if (param_1) {
    this->DrawType = SolidMesh;
  }
  return;
}

// SetTranslucent @ 1462e5d20

void __thiscall FDataflowDebugDraw::SetTranslucent(FDataflowDebugDraw *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_10;
  
  this->bTranslucent = param_1;
  uVar1 = *(undefined8 *)&(this->Color).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  if (param_1) {
    uStack_10 = CONCAT44(0x3e800000,(int)uVar2);
    *(undefined8 *)&(this->ColorWithTranslucency).field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->ColorWithTranslucency).field0_0x0 + 8) = uStack_10;
    return;
  }
  *(undefined8 *)&(this->ColorWithTranslucency).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->ColorWithTranslucency).field0_0x0 + 8) = uVar2;
  return;
}

// SetWireframe @ 1462e60f0

void __thiscall FDataflowDebugDraw::SetWireframe(FDataflowDebugDraw *this,bool param_1)

{
  this->bWireframe = param_1;
  if (param_1) {
    this->DrawType = (this->bShaded != false) + WireMesh;
    return;
  }
  if (this->bShaded != false) {
    this->DrawType = SolidMesh;
  }
  return;
}

// SetWorldPriority @ 1462e6120

void __thiscall FDataflowDebugDraw::SetWorldPriority(FDataflowDebugDraw *this)

{
  this->PriorityGroup = SDPG_World;
  return;
}

