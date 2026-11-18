// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// AddJoint @ 14d598310

void __thiscall
UE::Cameras::FCameraRigJoints::AddJoint(FCameraRigJoints *this,FCameraRigJoint *param_1)

{
  int *piVar1;
  double *pdVar2;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar9;
  longlong lVar10;
  
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar9 = FVar3;
  }
  if ((ulonglong)FVar9 <= param_1) {
    FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      FVar9 = FVar3;
    }
    if ((param_1 < (FCameraRigJoint *)((longlong)(this->Joints).ArrayMax * 0x70 + (longlong)FVar9))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Joints).ArrayNum;
  piVar1 = &(this->Joints).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                      (0x1070,(ForElementType<UE::Cameras::FCameraRigJoint> *)this,piVar1);
  }
  (this->Joints).ArrayNum = iVar8 + 1;
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  lVar5 = param_1->_padding_;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    this = (FCameraRigJoints *)FVar3;
  }
  lVar10 = (longlong)iVar8 * 0x70;
  *(undefined8 *)(lVar10 + (longlong)this) = *(undefined8 *)param_1;
  ((undefined8 *)(lVar10 + (longlong)this))[1] = lVar5;
  dVar6 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x10 + (longlong)this);
  *pdVar2 = (param_1->Transform).Rotation.XY.m128d_f64[0];
  pdVar2[1] = dVar6;
  dVar6 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x20 + (longlong)this);
  *pdVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  pdVar2[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.XY.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x30 + (longlong)this);
  *pdVar2 = (param_1->Transform).Translation.XY.m128d_f64[0];
  pdVar2[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x40 + (longlong)this);
  *pdVar2 = (param_1->Transform).Translation.ZW.m128d_f64[0];
  pdVar2[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x50 + (longlong)this);
  *pdVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  pdVar2[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar10 + 0x60 + (longlong)this);
  *pdVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  pdVar2[1] = dVar6;
  return;
}

// AddJoint @ 14d598430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraRigJoints::AddJoint
          (FCameraRigJoints *this,FCameraVariableDefinition *param_1,TTransform<double> *param_2)

{
  int *piVar1;
  double *pdVar2;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  ForElementType<UE::Cameras::FCameraRigJoint> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = (param_1->VariableID).Value;
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  local_78 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_2->Rotation).XY.m128d_f64[1];
  local_68 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_2->Rotation).ZW.m128d_f64[1];
  local_58 = (param_2->Translation).XY.m128d_f64[0];
  dStack_50 = (param_2->Translation).XY.m128d_f64[1];
  FVar7 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar7 = FVar3;
  }
  local_48 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_2->Translation).ZW.m128d_f64[1];
  local_38 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).XY.m128d_f64[1];
  local_28 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_20 = (param_2->Scale3D).ZW.m128d_f64[1];
  if ((ulonglong)FVar7 <= &local_88) {
    lVar8 = (longlong)(this->Joints).ArrayMax;
    FVar7 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_88 < (uint *)(lVar8 * 0x70 + (longlong)FVar7)) {
      local_a0 = (longlong)(this->Joints).ArrayNum;
      local_98 = 0x70;
      local_b0 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
      if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
        local_b0 = FVar3;
      }
      local_b8 = &local_88;
      local_a8 = lVar8;
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
  }
  iVar6 = (this->Joints).ArrayNum;
  piVar1 = &(this->Joints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                      (0x1070,(ForElementType<UE::Cameras::FCameraRigJoint> *)this,piVar1);
  }
  (this->Joints).ArrayNum = iVar6 + 1;
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    this = (FCameraRigJoints *)FVar3;
  }
  lVar8 = (longlong)iVar6 * 0x70;
  *(undefined8 *)(lVar8 + (longlong)this) = CONCAT44(uStack_84,local_88);
  ((undefined8 *)(lVar8 + (longlong)this))[1] = uStack_80;
  pdVar2 = (double *)(lVar8 + 0x10 + (longlong)this);
  *pdVar2 = local_78;
  pdVar2[1] = dStack_70;
  pdVar2 = (double *)(lVar8 + 0x20 + (longlong)this);
  *pdVar2 = local_68;
  pdVar2[1] = dStack_60;
  pdVar2 = (double *)(lVar8 + 0x30 + (longlong)this);
  *pdVar2 = local_58;
  pdVar2[1] = dStack_50;
  pdVar2 = (double *)(lVar8 + 0x40 + (longlong)this);
  *pdVar2 = local_48;
  pdVar2[1] = dStack_40;
  pdVar2 = (double *)(lVar8 + 0x50 + (longlong)this);
  *pdVar2 = local_38;
  pdVar2[1] = dStack_30;
  pdVar2 = (double *)(lVar8 + 0x60 + (longlong)this);
  *pdVar2 = local_28;
  pdVar2[1] = dStack_20;
  return;
}

// AddYawPitchJoint @ 14d598e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraRigJoints::AddYawPitchJoint(FCameraRigJoints *this,TTransform<double> *param_1)

{
  int *piVar1;
  double *pdVar2;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBuiltInCameraVariables *pFVar7;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  ForElementType<UE::Cameras::FCameraRigJoint> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar7 = FBuiltInCameraVariables::Get();
  local_78 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_1->Rotation).XY.m128d_f64[1];
  local_68 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  local_88 = (pFVar7->YawPitchDefinition).VariableID.Value;
  local_58 = (param_1->Translation).XY.m128d_f64[0];
  dStack_50 = (param_1->Translation).XY.m128d_f64[1];
  FVar8 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar8 = FVar3;
  }
  local_48 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_1->Translation).ZW.m128d_f64[1];
  local_38 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).XY.m128d_f64[1];
  local_28 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_20 = (param_1->Scale3D).ZW.m128d_f64[1];
  if ((ulonglong)FVar8 <= &local_88) {
    lVar9 = (longlong)(this->Joints).ArrayMax;
    FVar8 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_88 < (uint *)(lVar9 * 0x70 + (longlong)FVar8)) {
      local_a0 = (longlong)(this->Joints).ArrayNum;
      local_98 = 0x70;
      local_b0 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
      if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
        local_b0 = FVar3;
      }
      local_b8 = &local_88;
      local_a8 = lVar9;
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
  }
  iVar6 = (this->Joints).ArrayNum;
  piVar1 = &(this->Joints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                      (0x1070,(ForElementType<UE::Cameras::FCameraRigJoint> *)this,piVar1);
  }
  (this->Joints).ArrayNum = iVar6 + 1;
  FVar3 = (this->Joints).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    this = (FCameraRigJoints *)FVar3;
  }
  lVar9 = (longlong)iVar6 * 0x70;
  *(undefined8 *)(lVar9 + (longlong)this) = CONCAT44(uStack_84,local_88);
  ((undefined8 *)(lVar9 + (longlong)this))[1] = uStack_80;
  pdVar2 = (double *)(lVar9 + 0x10 + (longlong)this);
  *pdVar2 = local_78;
  pdVar2[1] = dStack_70;
  pdVar2 = (double *)(lVar9 + 0x20 + (longlong)this);
  *pdVar2 = local_68;
  pdVar2[1] = dStack_60;
  pdVar2 = (double *)(lVar9 + 0x30 + (longlong)this);
  *pdVar2 = local_58;
  pdVar2[1] = dStack_50;
  pdVar2 = (double *)(lVar9 + 0x40 + (longlong)this);
  *pdVar2 = local_48;
  pdVar2[1] = dStack_40;
  pdVar2 = (double *)(lVar9 + 0x50 + (longlong)this);
  *pdVar2 = local_38;
  pdVar2[1] = dStack_30;
  pdVar2 = (double *)(lVar9 + 0x60 + (longlong)this);
  *pdVar2 = local_28;
  pdVar2[1] = dStack_20;
  return;
}

// LerpAll @ 14d5b4d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraRigJoints::LerpAll
          (FCameraRigJoints *this,FCameraRigJoints *param_1,float param_2)

{
  int *piVar1;
  uchar *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar15;
  longlong *plVar16;
  int *piVar17;
  bool bVar18;
  TQuat<double> *pTVar19;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar20;
  byte bVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  uint *puVar24;
  int iVar25;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar26;
  uint uVar27;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar28;
  uint *puVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_438 [32];
  char local_3e8 [8];
  int *local_3e0;
  ForElementType<UE::Cameras::FCameraRigJoint> local_3d8;
  undefined1 local_3d0 [8];
  int local_3c8;
  longlong *local_3c0;
  int iStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  longlong *local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_388;
  undefined8 uStack_368;
  ForElementType<UE::Cameras::FCameraRigJoint> local_360;
  undefined8 *local_358;
  ForElementType<UE::Cameras::FCameraRigJoint> local_350;
  ForElementType<UE::Cameras::FCameraRigJoint> *local_348;
  double local_340;
  TQuat<double> local_338;
  TQuat<double> local_318;
  double local_2f8;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_2b0;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  TQuat<double> local_248;
  undefined4 local_20c;
  undefined1 local_208 [32];
  uint *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined1 local_1d0 [8];
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  ForElementType<UE::Cameras::FCameraRigJoint> local_138;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_130;
  undefined8 local_128;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_120;
  undefined8 local_118;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_110;
  undefined8 local_108;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_100;
  undefined8 local_f8;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_f0;
  undefined8 local_e8;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_e0;
  undefined8 local_d8;
  ForElementType<UE::Cameras::FCameraRigJoint> FStack_d0;
  undefined1 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  FVar26 = (this->Joints).AllocatorInstance.SecondaryData;
  piVar17 = &(this->Joints).ArrayNum;
  iVar25 = *piVar17;
  local_3e8[0] = __real_3f000000 <= param_2;
  local_1dc = 0x80;
  local_1d8 = 0xffffffff;
  bVar18 = !(bool)local_3e8[0];
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_1e8 = (uint *)0x0;
  local_1e0 = 0;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  FVar28 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
  if (FVar26 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar28 = FVar26;
  }
  FVar26 = (ForElementType<UE::Cameras::FCameraRigJoint>)
           ((longlong)iVar25 * 0x70 + (longlong)FVar28);
  local_3e0 = piVar17;
  local_3d8 = (ForElementType<UE::Cameras::FCameraRigJoint>)this;
  while( true ) {
    if (*piVar17 != iVar25) {
      local_3e8[1] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraRigJoint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3e8 + 1);
    }
    FVar15 = local_3d8;
    cVar14 = local_3e8[0];
    dVar8 = __real_3e45798ee0000000;
    if (FVar28 == FVar26) break;
    local_1b8 = *(undefined8 *)FVar28;
    uStack_1b0 = *(undefined8 *)((longlong)FVar28 + 8);
    local_358 = &local_1b8;
    local_1a8 = *(undefined8 *)((longlong)FVar28 + 0x10);
    uStack_1a0 = *(undefined8 *)((longlong)FVar28 + 0x18);
    local_198 = *(undefined8 *)((longlong)FVar28 + 0x20);
    uStack_190 = *(undefined8 *)((longlong)FVar28 + 0x28);
    local_178 = *(undefined8 *)((longlong)FVar28 + 0x40);
    uStack_170 = *(undefined8 *)((longlong)FVar28 + 0x48);
    local_188 = *(undefined8 *)((longlong)FVar28 + 0x30);
    uStack_180 = *(undefined8 *)((longlong)FVar28 + 0x38);
    local_158 = *(undefined8 *)((longlong)FVar28 + 0x60);
    uStack_150 = *(undefined8 *)((longlong)FVar28 + 0x68);
    local_168 = *(undefined8 *)((longlong)FVar28 + 0x50);
    uStack_160 = *(undefined8 *)((longlong)FVar28 + 0x58);
    local_360 = FVar28;
    local_148 = bVar18;
    TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>_>
              ((TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
                *)local_208,
               (TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>
                *)local_3d0,(bool *)&local_360);
    FVar28 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)FVar28 + 0x70);
  }
  FVar26 = (param_1->Joints).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->Joints).ArrayNum;
  iVar25 = *piVar1;
  if (FVar26 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    param_1 = (FCameraRigJoints *)FVar26;
    piVar17 = local_3e0;
  }
  local_3e0 = piVar17;
  FVar26 = (ForElementType<UE::Cameras::FCameraRigJoint>)
           ((longlong)iVar25 * 0x70 + (longlong)param_1);
  while( true ) {
    if (*piVar1 != iVar25) {
      local_3e8[0] = '\0';
      `TCheckedPointerIterator<UE::Cameras::FCameraRigJoint_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3e8);
    }
    piVar17 = local_3e0;
    if ((ForElementType<UE::Cameras::FCameraRigJoint>)param_1 == FVar26) break;
    if (local_208._8_4_ != local_1d4) {
      FVar23 = (ForElementType<FSetElementId>)local_1d0;
      if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
        FVar23 = local_1c8;
      }
      uVar27 = *(uint *)((longlong)FVar23 + (ulonglong)(local_1c0 - 1U & *(uint *)param_1) * 4);
      while (uVar27 != 0xffffffff) {
        puVar24 = (uint *)((longlong)(int)uVar27 * 0xa0 + local_208._0_8_);
        if (*puVar24 == *(uint *)param_1) goto LAB_14d5b4f7f;
        uVar27 = puVar24[0x24];
      }
    }
    puVar24 = (uint *)0x0;
LAB_14d5b4f7f:
    puVar29 = puVar24 + 4;
    if (puVar24 == (uint *)0x0) {
      puVar29 = (uint *)0x0;
    }
    if (puVar29 == (uint *)0x0) {
      if (cVar14 != '\0') {
        local_138 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)param_1;
        FStack_130 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 8);
        local_348 = &local_138;
        local_128 = *(undefined8 *)((longlong)param_1 + 0x10);
        FStack_120 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x18);
        local_118 = *(undefined8 *)((longlong)param_1 + 0x20);
        FStack_110 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x28);
        local_f8 = *(undefined8 *)((longlong)param_1 + 0x40);
        FStack_f0 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x48);
        local_108 = *(undefined8 *)((longlong)param_1 + 0x30);
        FStack_100 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x38);
        local_d8 = *(undefined8 *)((longlong)param_1 + 0x60);
        FStack_d0 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x68);
        local_e8 = *(undefined8 *)((longlong)param_1 + 0x50);
        FStack_e0 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x58);
        local_c8 = 1;
        local_350 = (ForElementType<UE::Cameras::FCameraRigJoint>)param_1;
        TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>_>
                  ((TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
                    *)local_208,
                   (TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>
                    *)(local_3d0 + 4),(bool *)&local_350);
      }
      param_1 = (FCameraRigJoints *)((longlong)param_1 + 0x70);
    }
    else {
      local_2e0 = *(double *)(puVar29 + 0xc);
      dStack_2d8 = *(double *)(puVar29 + 0xe);
      local_2f8 = *(double *)((longlong)param_1 + 0x30);
      FStack_2f0 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x38);
      local_2d0 = *(double *)(puVar29 + 0x10);
      local_2e8 = *(double *)((longlong)param_1 + 0x40);
      local_338.X = *(double *)((longlong)param_1 + 0x10);
      local_338.Y = *(double *)((longlong)param_1 + 0x18);
      dVar7 = (double)param_2;
      local_318.X = *(double *)(puVar29 + 4);
      local_318.Y = *(double *)(puVar29 + 6);
      dVar6 = (local_2f8 - local_2e0) * dVar7 + local_2e0;
      dVar40 = (local_2e8 - local_2d0) * dVar7 + local_2d0;
      dVar37 = ((double)FStack_2f0 - dStack_2d8) * dVar7 + dStack_2d8;
      local_338.Z = *(double *)((longlong)param_1 + 0x20);
      local_338.W = *(double *)((longlong)param_1 + 0x28);
      local_318.Z = *(double *)(puVar29 + 8);
      local_318.W = *(double *)(puVar29 + 10);
      uVar42 = SUB84(dVar37,0);
      uVar43 = (undefined4)((ulonglong)dVar37 >> 0x20);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = dVar7;
      local_2c8._8_4_ = uVar42;
      local_2c8._0_8_ = dVar6;
      local_2c8._12_4_ = uVar43;
      local_2b8 = dVar40;
      pTVar19 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_248,&local_318,&local_338,dVar7)
      ;
      dVar9 = pTVar19->X;
      dVar10 = pTVar19->Y;
      dVar11 = pTVar19->Z;
      dVar12 = pTVar19->W;
      dVar33 = dVar9 * dVar9 + dVar11 * dVar11;
      dVar36 = dVar10 * dVar10 + dVar12 * dVar12;
      dVar37 = dVar36 + dVar33;
      dVar33 = dVar33 + dVar36;
      auVar39._8_4_ = SUB84(dVar33,0);
      auVar39._0_8_ = dVar37;
      auVar39._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar39 = sqrtpd(auVar38,auVar39);
      uVar31 = -(ulonglong)(dVar8 <= dVar37);
      uVar32 = -(ulonglong)(dVar8 <= dVar33);
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
      uVar27 = (uint)(uVar31 >> 0x20);
      uVar30 = (uint)(uVar32 >> 0x20);
      local_268._0_8_ = uVar31 & (ulonglong)(auVar41._0_8_ * dVar9);
      uVar3 = uVar32 & (ulonglong)(auVar41._8_8_ * dVar10);
      local_268._8_4_ = (undefined4)uVar3;
      local_268._12_4_ = (undefined4)(uVar3 >> 0x20);
      auVar34._0_4_ = ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar34._4_4_ =
           ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar34._8_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar34._12_4_ =
           ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_268 = local_268 | auVar34;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
      local_2b0 = *(double *)((longlong)param_1 + 0x50);
      FStack_2a8 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)param_1 + 0x58);
      local_288 = *(double *)(puVar29 + 0x18);
      local_258._0_4_ =
           ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      local_258._4_4_ =
           ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_258._8_4_ =
           ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_258._12_4_ =
           ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_298 = *(double *)(puVar29 + 0x14);
      dStack_290 = *(double *)(puVar29 + 0x16);
      auVar35._0_8_ = (ulonglong)(auVar39._0_8_ * dVar11) & uVar31;
      uVar32 = (ulonglong)(auVar39._8_8_ * dVar12) & uVar32;
      auVar35._8_4_ = (undefined4)uVar32;
      auVar35._12_4_ = (undefined4)(uVar32 >> 0x20);
      local_2a0 = *(double *)((longlong)param_1 + 0x60);
      local_258 = local_258 | auVar35;
      param_1 = (FCameraRigJoints *)((longlong)param_1 + 0x70);
      local_280 = (local_2b0 - local_298) * dVar7 + local_298;
      local_270 = (local_2a0 - local_288) * dVar7 + local_288;
      dStack_278 = ((double)FStack_2a8 - dStack_290) * dVar7 + dStack_290;
      *(undefined1 (*) [16])(puVar29 + 4) = local_268;
      *(undefined1 (*) [16])(puVar29 + 8) = local_258;
      auVar41._8_4_ = uVar42;
      auVar41._0_8_ = dVar6;
      auVar41._12_4_ = uVar43;
      *(undefined1 (*) [16])(puVar29 + 0xc) = auVar41;
      *(double *)(puVar29 + 0x10) = dVar40;
      puVar29[0x12] = 0;
      puVar29[0x13] = 0;
      *(double *)(puVar29 + 0x14) = local_280;
      *(double *)(puVar29 + 0x16) = dStack_278;
      *(double *)(puVar29 + 0x18) = local_270;
      puVar29[0x1a] = 0;
      puVar29[0x1b] = 0;
      *(undefined1 *)(puVar29 + 0x1c) = 1;
      local_340 = dVar8;
    }
  }
  puVar2 = (uchar *)((longlong)FVar15 + 0xf4);
  iVar25 = *(int *)puVar2;
  *local_3e0 = 0;
  if (iVar25 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
              (0x70,0x10,0,(ForElementType<UE::Cameras::FCameraRigJoint> *)FVar15,0,(int *)puVar2);
  }
  uVar27 = local_1e0;
  iStack_3b8 = 0;
  uStack_3b4 = 1;
  local_3a0 = 0;
  uStack_3a4 = 0;
  if (local_1e0 != 0) {
    puVar24 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar24 = local_1e8;
    }
    uVar30 = *puVar24;
    iStack_3b8 = 0;
    local_3a0 = 0;
    while (uVar30 == 0) {
      lVar22 = (longlong)iStack_3b8;
      local_3a0 = local_3a0 + 0x20;
      iStack_3b8 = iStack_3b8 + 1;
      uStack_3a4 = local_1e0;
      if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_3b8)
      goto LAB_14d5b5301;
      uVar30 = puVar24[lVar22 + 1];
    }
    uStack_3b4 = -uVar30 & uVar30;
    uVar3 = (ulonglong)uStack_3b4 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_3c8 = (int)lVar22;
    uStack_3a4 = local_3a0 + -1 + local_3c8;
    if ((int)local_1e0 < (int)uStack_3a4) {
      uStack_3a4 = local_1e0;
    }
  }
LAB_14d5b5301:
  local_3c0 = (longlong *)local_208;
  uStack_39c = local_20c;
  local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
  uVar30 = local_1e0 & 0xffffffe0;
  iStack_398 = local_208._8_4_ - local_1d4;
  uStack_3a8 = 0xffffffff;
  TStack_388.CurrentBitIndex = uStack_3a4;
  TStack_388.UnvisitedBitMask = 0xffffffff;
  TStack_388._padding_ = CONCAT44(uStack_3b4,iStack_3b8);
  iVar25 = (int)local_1e0 >> 5;
  TStack_388._28_4_ = local_20c;
  TStack_388.BaseBitIndex = local_3a0;
  uStack_368 = CONCAT44(uStack_394,iStack_398);
  bVar21 = (byte)local_1e0;
  local_390 = local_3c0;
  TStack_388.Array = local_3b0;
  if (((int)local_1e0 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar27 != local_1e0) {
    puVar24 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar24 = local_1e8;
    }
    uVar27 = -1 << (bVar21 & 0x1f) & puVar24[iVar25];
    while (uVar27 == 0) {
      lVar22 = (longlong)iVar25;
      uVar30 = uVar30 + 0x20;
      iVar25 = iVar25 + 1;
      uVar27 = local_1e0;
      if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14d5b5422;
      uVar27 = puVar24[lVar22 + 1];
    }
    uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar27 = (uVar30 - 1) + (int)lVar22;
    local_3d8._0_4_ = (int)lVar22;
    if ((int)local_1e0 < (int)uVar27) {
      uVar27 = local_1e0;
    }
  }
LAB_14d5b5422:
  do {
    plVar16 = local_390;
    if ((int)local_390[1] - *(int *)((longlong)local_390 + 0x34) != (int)uStack_368) {
      local_3e8[2] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e8 + 2);
    }
    if (((TStack_388.CurrentBitIndex == uVar27) &&
        (TStack_388.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10))) &&
       (plVar16 == (longlong *)local_208)) {
      local_1c0 = 0;
      if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_208);
      return;
    }
    FVar26 = (ForElementType<UE::Cameras::FCameraRigJoint>)
             (*plVar16 + 0x10 + (longlong)TStack_388.CurrentBitIndex * 0xa0);
    if (*(char *)((longlong)FVar26 + 0x70) != '\0') {
      FVar28 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)FVar15 + 0xe0);
      FVar20 = FVar15;
      if (FVar28 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
        FVar20 = FVar28;
      }
      if ((ulonglong)FVar20 <= (ulonglong)FVar26) {
        FVar20 = FVar15;
        if (FVar28 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
          FVar20 = FVar28;
        }
        if (((ulonglong)FVar26 < (ulonglong)((longlong)*(int *)puVar2 * 0x70 + (longlong)FVar20)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar25 = *piVar17;
      if (iVar25 == *(int *)puVar2) {
        iVar25 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                           (0x1070,(ForElementType<UE::Cameras::FCameraRigJoint> *)FVar15,
                            (int *)puVar2);
      }
      *piVar17 = iVar25 + 1;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 8);
      FVar28 = FVar15;
      if (*(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)FVar15 + 0xe0) !=
          (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
        FVar28 = *(ForElementType<UE::Cameras::FCameraRigJoint> *)((longlong)FVar15 + 0xe0);
      }
      lVar22 = (longlong)iVar25 * 0x70;
      *(undefined8 *)(lVar22 + (longlong)FVar28) = *(undefined8 *)FVar26;
      ((undefined8 *)(lVar22 + (longlong)FVar28))[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x18);
      puVar4 = (undefined8 *)(lVar22 + 0x10 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x10);
      puVar4[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x28);
      puVar4 = (undefined8 *)(lVar22 + 0x20 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x20);
      puVar4[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x38);
      puVar4 = (undefined8 *)(lVar22 + 0x30 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x30);
      puVar4[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x48);
      puVar4 = (undefined8 *)(lVar22 + 0x40 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x40);
      puVar4[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x58);
      puVar4 = (undefined8 *)(lVar22 + 0x50 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x50);
      puVar4[1] = uVar13;
      uVar13 = *(undefined8 *)((longlong)FVar26 + 0x68);
      puVar4 = (undefined8 *)(lVar22 + 0x60 + (longlong)FVar28);
      *puVar4 = *(undefined8 *)((longlong)FVar26 + 0x60);
      puVar4[1] = uVar13;
    }
    TStack_388.UnvisitedBitMask = TStack_388.UnvisitedBitMask & ~TStack_388._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_388);
  } while( true );
}

// OverrideAll @ 14d5c3e50

void __thiscall
UE::Cameras::FCameraRigJoints::OverrideAll(FCameraRigJoints *this,FCameraRigJoints *param_1)

{
  int iVar1;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar2;
  int *piVar3;
  
  if (this != param_1) {
    FVar2 = (param_1->Joints).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Joints).ArrayMax;
    iVar1 = (param_1->Joints).ArrayNum;
    if (FVar2 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      param_1 = (FCameraRigJoints *)FVar2;
    }
    (this->Joints).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 2;
      return;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
              (0x70,0x10,iVar1,*piVar3,(ForElementType<UE::Cameras::FCameraRigJoint> *)this,iVar1,
               piVar3);
    FVar2 = (this->Joints).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      this = (FCameraRigJoints *)FVar2;
    }
    if (iVar1 != 0) {
      memcpy(this,param_1,(longlong)iVar1 * 0x70);
    }
  }
  return;
}

// Reset @ 14d5cbea0

void __thiscall UE::Cameras::FCameraRigJoints::Reset(FCameraRigJoints *this)

{
  int *piVar1;
  
  piVar1 = &(this->Joints).ArrayMax;
  (this->Joints).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
              (0x70,0x10,0,(ForElementType<UE::Cameras::FCameraRigJoint> *)this,0,piVar1);
  }
  return;
}

// Serialize @ 14d5cce70

void __thiscall UE::Cameras::FCameraRigJoints::Serialize(FCameraRigJoints *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->Joints);
  return;
}

