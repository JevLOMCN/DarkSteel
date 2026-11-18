// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 22

// StaticStruct @ 14a070bc0

UScriptStruct * __cdecl FRigVMDrawInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawInterface,(UObject *)pUVar1,
                         L"RigVMDrawInterface");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDrawInterface.OuterSingleton;
}

// DrawArc @ 14a085cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawArc
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,float param_4,float param_5,FLinearColor *param_6,float param_7,int param_8,
          ESceneDepthPriorityGroup param_9,float param_10)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_208 [32];
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  FRigVMDrawInstruction local_198;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  uVar11 = 0x20;
  if (param_8 < 0x20) {
    uVar11 = param_8;
  }
  uVar9 = 4;
  if (4 < (int)uVar11) {
    uVar9 = uVar11;
  }
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_c8,param_2,param_1);
  local_198.Thickness = param_7;
  local_198.Transform.Rotation.ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
  local_198.Transform.Rotation.ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
  local_198.Transform.Translation.ZW.m128d_f64[0] = local_c8.Translation.ZW.m128d_f64[0];
  local_198.Transform.Translation.ZW.m128d_f64[1] = local_c8.Translation.ZW.m128d_f64[1];
  local_198.Name.ComparisonIndex.Value = 0;
  local_198.Name.Number = 0;
  local_198.PrimitiveType.Value = '\x02';
  local_198.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Positions.ArrayNum = 0;
  local_198.Positions.ArrayMax = 0;
  local_198.Transform.Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
  local_198.Transform.Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
  local_198.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.MeshVerts.ArrayNum = 0;
  local_198.MeshVerts.ArrayMax = 0;
  local_198.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.MeshIndices.ArrayNum = 0;
  local_198.MeshIndices.ArrayMax = 0;
  local_198.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  local_198.Color.field0_0x0._0_8_ = *(undefined8 *)&param_6->field0_0x0;
  local_198.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
  local_198.DepthPriority.Value = (undefined1)param_9;
  local_198.Transform.Rotation.XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
  local_198.Transform.Rotation.XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
  local_198.Transform.Translation.XY.m128d_f64[0] = local_c8.Translation.XY.m128d_f64[0];
  local_198.Transform.Translation.XY.m128d_f64[1] = local_c8.Translation.XY.m128d_f64[1];
  local_198.Transform.Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
  local_198.Transform.Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
  local_198.Lifetime = param_10;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar4 = 0;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_198.Positions.AllocatorInstance,0,&local_198.Positions.ArrayMax);
    iVar4 = local_198.Positions.ArrayNum;
  }
  FVar5.Data = local_198.Positions.AllocatorInstance.Data;
  dVar8 = (double)param_3;
  __libm_sse2_sincos_();
  dVar7 = (dVar8 + dVar8) * extraout_XMM0_Qa;
  dStack_1b0 = extraout_XMM0_Qb * dVar7;
  local_1b8 = dVar8 - dVar7 * extraout_XMM0_Qa;
  local_1a8 = 0;
  if ((FVar5.Data <= (FScriptContainerElement *)&local_1b8) &&
     ((FScriptContainerElement *)&local_1b8 <
      FVar5.Data + (longlong)local_198.Positions.ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5.Data = local_198.Positions.AllocatorInstance.Data;
    iVar4 = local_198.Positions.ArrayNum;
  }
  if (iVar4 == local_198.Positions.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_198.Positions.AllocatorInstance,&local_198.Positions.ArrayMax);
    FVar5.Data = local_198.Positions.AllocatorInstance.Data;
  }
  *(double *)(FVar5.Data + (longlong)iVar4 * 0x18) = local_1b8;
  *(double *)(FVar5.Data + (longlong)iVar4 * 0x18 + 8) = dStack_1b0;
  *(undefined8 *)(FVar5.Data + (longlong)iVar4 * 0x18 + 0x10) = local_1a8;
  local_198.Positions.ArrayNum = iVar4 + 1;
  __libm_sse2_sincos_();
  if (0 < (int)uVar9) {
    uVar11 = (uint)__xmm_80000000000000008000000000000000;
    uVar2 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar6 = (ulonglong)uVar9;
    do {
      dVar8 = extraout_XMM0_Qa_00 * local_1b8 + extraout_XMM0_Qa_00 * local_1b8;
      dVar7 = extraout_XMM0_Qa_00 * dStack_1b0 + extraout_XMM0_Qa_00 * dStack_1b0;
      uVar9 = SUB84(dVar7,0) ^ uVar11;
      uVar10 = (uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar2;
      dStack_1b0 = dVar8 * extraout_XMM0_Qb_00 + dStack_1b0 +
                   (double)CONCAT44(uVar10,uVar9) * extraout_XMM0_Qa_00;
      local_1b8 = ((double)CONCAT44(uVar10,uVar9) * extraout_XMM0_Qb_00 + local_1b8) -
                  dVar8 * extraout_XMM0_Qa_00;
      if (((local_198.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 <
           local_198.Positions.AllocatorInstance.Data +
           (longlong)local_198.Positions.ArrayMax * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_198.Positions.ArrayNum == local_198.Positions.ArrayMax) {
        local_198.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_198.Positions.AllocatorInstance,&local_198.Positions.ArrayMax);
      }
      iVar4 = local_198.Positions.ArrayNum + 1;
      *(double *)
       (local_198.Positions.AllocatorInstance.Data + (longlong)local_198.Positions.ArrayNum * 0x18)
           = local_1b8;
      *(double *)
       (local_198.Positions.AllocatorInstance.Data + (longlong)local_198.Positions.ArrayNum * 0x18 +
       8) = dStack_1b0;
      *(undefined8 *)
       (local_198.Positions.AllocatorInstance.Data +
       (longlong)local_198.Positions.ArrayNum * 0x18 + 0x10) = local_1a8;
      uVar6 = uVar6 - 1;
      local_198.Positions.ArrayNum = iVar4;
    } while (uVar6 != 0);
  }
  if (((*(FRigVMDrawInstruction **)&this->field_0x8 <= &local_198) &&
      (&local_198 < *(FRigVMDrawInstruction **)&this->field_0x8 + *(int *)&this->field_0x14)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = *(int *)&this->field_0x10;
  if (iVar4 == *(int *)&this->field_0x14) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  *(int *)&this->field_0x10 = iVar4 + 1;
  FRigVMDrawInstruction::FRigVMDrawInstruction
            ((FRigVMDrawInstruction *)((longlong)iVar4 * 0xd0 + *(longlong *)&this->field_0x8),
             &local_198);
  if (local_198.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MeshIndices.AllocatorInstance.Data);
  }
  if (local_198.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MeshVerts.AllocatorInstance.Data);
  }
  if (local_198.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Positions.AllocatorInstance.Data);
  }
  return;
}

// DrawArrow @ 14a0861e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawArrow
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,
          ESceneDepthPriorityGroup param_6,float param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  ForAnyElementType _Src;
  void *pvVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ForAnyElementType *pFVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_218 [32];
  double local_1b8;
  double local_1a0;
  undefined8 local_188;
  undefined1 local_180;
  ForAnyElementType local_178;
  int local_170 [2];
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8;
  float local_e4;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_158 = param_5;
  local_138 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_130 = (param_1->Rotation).ZW.m128d_f64[1];
  local_168 = *(undefined8 *)&param_4->field0_0x0;
  uStack_160 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_118 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_110 = (param_1->Translation).ZW.m128d_f64[1];
  local_148 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_140 = (param_1->Rotation).XY.m128d_f64[1];
  local_128 = (param_1->Translation).XY.m128d_f64[0];
  dStack_120 = (param_1->Translation).XY.m128d_f64[1];
  local_108 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_100 = (param_1->Scale3D).XY.m128d_f64[1];
  local_e8 = (undefined1)param_6;
  local_f8 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_f0 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_e4 = param_7;
  local_188 = 0;
  local_180 = 1;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,&local_178,local_170,local_170 + 1);
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (local_170[0] < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  *(undefined8 *)local_178.Data = uVar13;
  *(undefined8 *)(local_178.Data + 8) = uVar24;
  *(undefined8 *)(local_178.Data + 0x10) = uVar15;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  if (local_170[0] < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  *(double *)(local_178.Data + 0x18) = dVar5;
  *(double *)(local_178.Data + 0x20) = dVar6;
  *(double *)(local_178.Data + 0x28) = dVar4;
  if (local_170[0] < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  dVar4 = *(double *)(local_178.Data + 0x28);
  dVar5 = *(double *)(local_178.Data + 0x18);
  dVar6 = *(double *)(local_178.Data + 0x20);
  if (local_170[0] < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  dVar9 = __real_3e45798ee0000000;
  dVar23 = __real_3ff0000000000000;
  *(double *)(local_178.Data + 0x30) = dVar5;
  *(double *)(local_178.Data + 0x38) = dVar6;
  *(double *)(local_178.Data + 0x40) = dVar4;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar22 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
  if (dVar22 == dVar23) {
    local_1b8 = (param_2->field0_0x0)._s_0.Z;
    uVar13 = (param_2->field0_0x0)._s_0.Y;
    uVar24 = (param_2->field0_0x0)._s_0.X;
  }
  else if (dVar9 <= dVar22) {
    dVar22 = dVar23 / SQRT(dVar22);
    uVar13 = dVar22 * dVar5;
    local_1b8 = dVar22 * dVar6;
    in_XMM3._0_8_ = dVar22 * dVar4;
    in_XMM3._8_8_ = 0;
    uVar24 = in_XMM3._0_8_;
  }
  else {
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  dVar22 = (param_3->field0_0x0)._s_0.X;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = dVar22;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  dVar8 = (param_3->field0_0x0)._s_0.Z;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar7 * dVar7 + dVar22 * dVar22 + dVar8 * dVar8;
  auVar25 = sqrtpd(in_XMM3,auVar25);
  dVar12 = auVar25._0_8_;
  if (local_170[0] < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  *(double *)(local_178.Data + 0x48) = (dVar4 - dVar12 * (double)uVar24) + dVar22;
  *(double *)(local_178.Data + 0x50) = (dVar5 - dVar12 * (double)uVar13) + dVar7;
  *(double *)(local_178.Data + 0x58) = (dVar6 - dVar12 * local_1b8) + dVar8;
  if (local_170[0] < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  dVar4 = *(double *)(local_178.Data + 0x28);
  dVar5 = *(double *)(local_178.Data + 0x18);
  dVar6 = *(double *)(local_178.Data + 0x20);
  if (local_170[0] < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  *(double *)(local_178.Data + 0x60) = dVar5;
  *(double *)(local_178.Data + 0x68) = dVar6;
  *(double *)(local_178.Data + 0x70) = dVar4;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar22 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
  if (dVar22 == dVar23) {
    local_1a0 = (param_2->field0_0x0)._s_0.Z;
    uVar13 = (param_2->field0_0x0)._s_0.Y;
    uVar24 = (param_2->field0_0x0)._s_0.X;
  }
  else if (dVar9 <= dVar22) {
    dVar23 = dVar23 / SQRT(dVar22);
    uVar13 = dVar23 * dVar5;
    local_1a0 = dVar23 * dVar6;
    uVar24 = dVar23 * dVar4;
  }
  else {
    local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  dVar22 = (param_3->field0_0x0)._s_0.X;
  dVar23 = (param_3->field0_0x0)._s_0.Y;
  dVar9 = (param_3->field0_0x0)._s_0.Z;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar23 * dVar23 + dVar22 * dVar22 + dVar9 * dVar9;
  auVar25 = sqrtpd(auVar26,auVar14);
  dVar7 = auVar25._0_8_;
  if (local_170[0] < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  *(double *)(local_178.Data + 0x78) = (dVar4 - dVar7 * (double)uVar24) - dVar22;
  *(double *)(local_178.Data + 0x80) = (dVar5 - dVar7 * (double)uVar13) - dVar23;
  *(double *)(local_178.Data + 0x88) = (dVar6 - dVar7 * local_1a0) - dVar9;
  if ((*(undefined8 **)&this->field_0x8 <= &local_188) &&
     (&local_188 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  iVar18 = *(int *)&this->field_0x10;
  if (iVar18 == *(int *)&this->field_0x14) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src.Data = local_178.Data;
  lVar10 = *(longlong *)&this->field_0x8;
  *(int *)&this->field_0x10 = iVar18 + 1;
  lVar19 = (longlong)iVar18 * 0xd0;
  pFVar21 = (ForAnyElementType *)(lVar10 + 0x10 + lVar19);
  *(undefined8 *)(lVar19 + lVar10) = local_188;
  *(undefined1 *)(lVar19 + 8 + lVar10) = local_180;
  piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
  pFVar21->Data = (FScriptContainerElement *)0x0;
  lVar20 = (longlong)local_170[0];
  *(int *)&pFVar21[1].Data = local_170[0];
  if (local_170[0] == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_170[0],0,pFVar21,local_170[0],piVar1);
    memcpy(pFVar21->Data,_Src.Data,lVar20 * 0x18);
  }
  pvVar16 = local_e0;
  puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar10);
  *puVar2 = local_168;
  puVar2[1] = uStack_160;
  pFVar21 = (ForAnyElementType *)(lVar10 + 0xa8 + lVar19);
  *(float *)(lVar19 + 0x30 + lVar10) = local_158;
  pdVar3 = (double *)(lVar19 + 0x40 + lVar10);
  *pdVar3 = local_148;
  pdVar3[1] = dStack_140;
  pdVar3 = (double *)(lVar19 + 0x50 + lVar10);
  *pdVar3 = local_138;
  pdVar3[1] = dStack_130;
  pdVar3 = (double *)(lVar19 + 0x60 + lVar10);
  *pdVar3 = local_128;
  pdVar3[1] = dStack_120;
  pdVar3 = (double *)(lVar19 + 0x70 + lVar10);
  *pdVar3 = local_118;
  pdVar3[1] = dStack_110;
  pdVar3 = (double *)(lVar19 + 0x80 + lVar10);
  *pdVar3 = local_108;
  pdVar3[1] = dStack_100;
  pdVar3 = (double *)(lVar19 + 0x90 + lVar10);
  *pdVar3 = local_f8;
  pdVar3[1] = dStack_f0;
  *(undefined1 *)(lVar19 + 0xa0 + lVar10) = local_e8;
  piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
  *(float *)(lVar19 + 0xa4 + lVar10) = local_e4;
  pFVar21->Data = (FScriptContainerElement *)0x0;
  lVar20 = (longlong)(int)local_d8;
  *(int *)&pFVar21[1].Data = (int)local_d8;
  if ((int)local_d8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_d8,0,pFVar21,(int)local_d8,piVar1);
    memcpy(pFVar21->Data,pvVar16,lVar20 * 0x58);
  }
  pvVar16 = local_d0;
  pFVar21 = (ForAnyElementType *)(lVar10 + 0xb8 + lVar19);
  pFVar21->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
  lVar20 = (longlong)(int)local_c8;
  *(int *)&pFVar21[1].Data = (int)local_c8;
  if ((int)local_c8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_c8,0,pFVar21,(int)local_c8,piVar1);
    memcpy(pFVar21->Data,pvVar16,lVar20 << 2);
  }
  *(undefined8 *)(lVar19 + 200 + lVar10) = local_c0;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// DrawAxes @ 14a086a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawAxes
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FLinearColor *param_3,float param_4,float param_5,ESceneDepthPriorityGroup param_6,
          float param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ForAnyElementType _Src;
  void *pvVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ForAnyElementType *pFVar22;
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
  undefined4 uVar45;
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
  undefined1 auStackY_2a8 [32];
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_210 [16];
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 local_1a8 [16];
  undefined8 local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 local_158;
  undefined1 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8;
  float local_b4;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_138 = *(undefined8 *)&param_3->field0_0x0;
  uStack_130 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_118 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_110 = (param_1->Rotation).XY.m128d_f64[1];
  local_f8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_f0 = (param_1->Translation).XY.m128d_f64[1];
  local_128 = param_5;
  local_108 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_100 = (param_1->Rotation).ZW.m128d_f64[1];
  local_d8 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_d0 = (param_1->Scale3D).XY.m128d_f64[1];
  local_e8 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_e0 = (param_1->Translation).ZW.m128d_f64[1];
  local_b8 = (undefined1)param_6;
  local_c8 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_c0 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_b4 = param_7;
  local_158 = 0;
  local_150 = 1;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,&local_148,0,(int *)((longlong)&local_140 + 4));
  local_258 = (param_2->Translation).XY.m128d_f64[0];
  dStack_250 = (param_2->Translation).XY.m128d_f64[1];
  local_248 = (param_2->Translation).ZW.m128d_f64[0];
  if (((local_148.Data <= (FScriptContainerElement *)&local_258) &&
      ((FScriptContainerElement *)&local_258 < local_148.Data + (longlong)local_140._4_4_ * 0x18))
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (int)local_140;
  if ((int)local_140 == local_140._4_4_) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar1 = iVar18 + 1;
  dVar14 = (double)param_4;
  *(double *)(local_148.Data + (longlong)iVar18 * 0x18) = local_258;
  *(double *)(local_148.Data + (longlong)iVar18 * 0x18 + 8) = dStack_250;
  uStack_1b8 = 0;
  *(double *)(local_148.Data + (longlong)iVar18 * 0x18 + 0x10) = local_248;
  auVar40 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar12 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_1a8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar15 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar31 = blendpd(local_1a8,auVar40,2);
  auStack_1c8._8_8_ = 0;
  auStack_1c8._0_8_ = dVar14;
  dVar8 = dVar14 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar9 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar45 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar46._8_4_ = SUB84(dVar9,0);
  auVar46._0_8_ = dVar8;
  auVar46._12_4_ = uVar45;
  dVar7 = auVar40._0_8_;
  auVar47._0_8_ = auVar46._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar8;
  auVar47._8_8_ = dVar12 * local_1a8._8_8_ - dVar7 * dVar9;
  auVar48._8_4_ = SUB84(dVar9,0);
  auVar48._0_8_ = dVar8;
  auVar48._12_4_ = uVar45;
  auVar23._8_4_ = SUB84(dVar13,0);
  auVar23._0_8_ = dVar12;
  auVar23._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar23 = blendpd(auVar48,auVar23,2);
  auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar31._0_8_ * dVar12;
  auVar24._8_8_ = auVar23._8_8_ * auVar40._8_8_ - auVar31._8_8_ * dVar13;
  auVar23 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar48 = blendpd(auVar47,auVar24,2);
  dVar13 = auVar47._8_8_ + auVar47._8_8_;
  dVar6 = auVar24._0_8_ + auVar24._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar49._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar49._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar38._8_4_ = SUB84(dVar6,0);
  auVar38._0_8_ = dVar13;
  auVar38._12_4_ = uVar45;
  auVar32._8_4_ = SUB84(dVar6,0);
  auVar32._0_8_ = dVar13;
  auVar32._12_4_ = uVar45;
  auVar48 = blendpd(auVar32,auVar49,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar13;
  auVar39._8_8_ = auVar49._0_8_ * auVar23._8_8_ - dVar7 * dVar6;
  auVar31._8_4_ = SUB84(auVar39._8_8_,0);
  auVar31._0_8_ = auVar39._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar23 = blendpd(auVar23,auVar40,2);
  auVar33._0_8_ = auVar48._0_8_ * dVar7 - auVar23._0_8_ * auVar49._0_8_;
  auVar33._8_8_ = auVar48._8_8_ * auVar40._8_8_ - auVar23._8_8_ * auVar49._8_8_;
  auVar40 = blendpd(auVar39,auVar33,2);
  dVar7 = dVar6 * dVar15 + dVar9 + auVar33._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_230 = auVar49._0_8_ * dVar15 + dVar12 + auVar40._0_8_ +
              (param_2->Translation).ZW.m128d_f64[0];
  local_240._8_4_ = SUB84(dVar7,0);
  local_240._0_8_ = dVar13 * dVar15 + dVar8 + auVar31._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_240._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_140._0_4_ = iVar1;
  if (((local_148.Data <= (FScriptContainerElement *)local_240) &&
      ((FScriptContainerElement *)local_240 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar18 = (int)local_140 + 1;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_240._0_8_;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = local_240._8_8_;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_230;
  local_228 = (param_2->Translation).XY.m128d_f64[0];
  dStack_220 = (param_2->Translation).XY.m128d_f64[1];
  local_218 = (param_2->Translation).ZW.m128d_f64[0];
  local_140._0_4_ = iVar18;
  if (((local_148.Data <= (FScriptContainerElement *)&local_228) &&
      ((FScriptContainerElement *)&local_228 < local_148.Data + (longlong)local_140._4_4_ * 0x18))
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar18 = (int)local_140 + 1;
  local_188 = 0;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_228;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = dStack_220;
  local_178 = 0;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_218;
  auVar40 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar8 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar9 = dVar14 * (param_2->Scale3D).XY.m128d_f64[1];
  uVar45 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_1a8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar15 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar50._8_4_ = SUB84(dVar9,0);
  auVar50._0_8_ = dVar8;
  auVar50._12_4_ = uVar45;
  dVar12 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar48 = blendpd(local_1a8,auVar40,2);
  dVar7 = auVar40._0_8_;
  auVar51._0_8_ = auVar50._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar8;
  auVar51._8_8_ = dVar12 * local_1a8._8_8_ - dVar7 * dVar9;
  auVar25._8_4_ = SUB84(dVar9,0);
  auVar25._0_8_ = dVar8;
  auVar25._12_4_ = uVar45;
  auVar10._8_4_ = SUB84(dVar13,0);
  auVar10._0_8_ = dVar12;
  auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar23 = blendpd(auVar25,auVar10,2);
  auVar26._0_8_ = auVar23._0_8_ * dVar7 - auVar48._0_8_ * dVar12;
  auVar26._8_8_ = auVar23._8_8_ * auVar40._8_8_ - auVar48._8_8_ * dVar13;
  auVar23 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar48 = blendpd(auVar51,auVar26,2);
  dVar13 = auVar51._8_8_ + auVar51._8_8_;
  dVar6 = auVar26._0_8_ + auVar26._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar52._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar52._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar41._8_4_ = SUB84(dVar6,0);
  auVar41._0_8_ = dVar13;
  auVar41._12_4_ = uVar45;
  auVar34._8_4_ = SUB84(dVar6,0);
  auVar34._0_8_ = dVar13;
  auVar34._12_4_ = uVar45;
  auVar48 = blendpd(auVar34,auVar52,2);
  auVar42._0_8_ = auVar41._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar13;
  auVar42._8_8_ = auVar52._0_8_ * auVar23._8_8_ - dVar7 * dVar6;
  auVar27._8_4_ = SUB84(auVar42._8_8_,0);
  auVar27._0_8_ = auVar42._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  auVar23 = blendpd(auVar23,auVar40,2);
  auVar35._0_8_ = auVar48._0_8_ * dVar7 - auVar23._0_8_ * auVar52._0_8_;
  auVar35._8_8_ = auVar48._8_8_ * auVar40._8_8_ - auVar23._8_8_ * auVar52._8_8_;
  auVar40 = blendpd(auVar42,auVar35,2);
  dVar7 = dVar6 * dVar15 + dVar9 + auVar35._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_200 = auVar52._0_8_ * dVar15 + dVar12 + auVar40._0_8_ +
              (param_2->Translation).ZW.m128d_f64[0];
  local_210._8_4_ = SUB84(dVar7,0);
  local_210._0_8_ = dVar13 * dVar15 + dVar8 + auVar27._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_210._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dStack_180 = dVar14;
  local_140._0_4_ = iVar18;
  if (((local_148.Data <= (FScriptContainerElement *)local_210) &&
      ((FScriptContainerElement *)local_210 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar18 = (int)local_140 + 1;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_210._0_8_;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = local_210._8_8_;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_200;
  local_1f8 = (param_2->Translation).XY.m128d_f64[0];
  dStack_1f0 = (param_2->Translation).XY.m128d_f64[1];
  local_1e8 = (param_2->Translation).ZW.m128d_f64[0];
  local_140._0_4_ = iVar18;
  if (((local_148.Data <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < local_148.Data + (longlong)local_140._4_4_ * 0x18))
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar18 = (int)local_140 + 1;
  local_170 = 0;
  uStack_168 = 0;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_1f8;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = dStack_1f0;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_1e8;
  auVar40 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar8 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar9 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar45 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_1a8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar15 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar53._8_4_ = SUB84(dVar9,0);
  auVar53._0_8_ = dVar8;
  auVar53._12_4_ = uVar45;
  dVar12 = dVar14 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar48 = blendpd(local_1a8,auVar40,2);
  dVar7 = auVar40._0_8_;
  auVar54._0_8_ = auVar53._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar8;
  auVar54._8_8_ = dVar12 * local_1a8._8_8_ - dVar7 * dVar9;
  auVar28._8_4_ = SUB84(dVar9,0);
  auVar28._0_8_ = dVar8;
  auVar28._12_4_ = uVar45;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar23 = blendpd(auVar28,auVar11,2);
  auVar29._0_8_ = auVar23._0_8_ * dVar7 - auVar48._0_8_ * dVar12;
  auVar29._8_8_ = auVar23._8_8_ * auVar40._8_8_ - auVar48._8_8_ * dVar13;
  auVar23 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar48 = blendpd(auVar54,auVar29,2);
  dVar13 = auVar54._8_8_ + auVar54._8_8_;
  dVar6 = auVar29._0_8_ + auVar29._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar55._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar55._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar43._8_4_ = SUB84(dVar6,0);
  auVar43._0_8_ = dVar13;
  auVar43._12_4_ = uVar45;
  auVar36._8_4_ = SUB84(dVar6,0);
  auVar36._0_8_ = dVar13;
  auVar36._12_4_ = uVar45;
  auVar48 = blendpd(auVar36,auVar55,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar13;
  auVar44._8_8_ = auVar55._0_8_ * auVar23._8_8_ - dVar7 * dVar6;
  auVar30._8_4_ = SUB84(auVar44._8_8_,0);
  auVar30._0_8_ = auVar44._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  auVar23 = blendpd(auVar23,auVar40,2);
  auVar37._0_8_ = auVar48._0_8_ * dVar7 - auVar23._0_8_ * auVar55._0_8_;
  auVar37._8_8_ = auVar48._8_8_ * auVar40._8_8_ - auVar23._8_8_ * auVar55._8_8_;
  auVar40 = blendpd(auVar44,auVar37,2);
  dVar7 = dVar6 * dVar15 + dVar9 + auVar37._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_1d0 = auVar55._0_8_ * dVar15 + dVar12 + auVar40._0_8_ +
              (param_2->Translation).ZW.m128d_f64[0];
  local_1e0._8_4_ = SUB84(dVar7,0);
  local_1e0._0_8_ = dVar13 * dVar15 + dVar8 + auVar30._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_1e0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_160 = dVar14;
  local_140._0_4_ = iVar18;
  if (((local_148.Data <= (FScriptContainerElement *)local_1e0) &&
      ((FScriptContainerElement *)local_1e0 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  lVar19 = (longlong)(int)local_140;
  local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
  *(undefined8 *)(local_148.Data + lVar19 * 0x18) = local_1e0._0_8_;
  *(undefined8 *)(local_148.Data + lVar19 * 0x18 + 8) = local_1e0._8_8_;
  *(double *)(local_148.Data + lVar19 * 0x18 + 0x10) = local_1d0;
  if (((*(undefined8 **)&this->field_0x8 <= &local_158) &&
      (&local_158 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a))
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = *(int *)&this->field_0x10;
  if (iVar18 == *(int *)&this->field_0x14) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src.Data = local_148.Data;
  lVar20 = (longlong)iVar18 * 0xd0;
  *(int *)&this->field_0x10 = iVar18 + 1;
  lVar19 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar20 + lVar19) = local_158;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0x10 + lVar20);
  *(undefined1 *)(lVar20 + 8 + lVar19) = local_150;
  pFVar22->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar22[1].Data + 4);
  lVar21 = (longlong)(int)local_140;
  *(int *)&pFVar22[1].Data = (int)local_140;
  if ((int)local_140 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_140,0,pFVar22,(int)local_140,piVar2);
    memcpy(pFVar22->Data,_Src.Data,lVar21 * 0x18);
  }
  pvVar16 = local_b0;
  puVar3 = (undefined8 *)(lVar20 + 0x20 + lVar19);
  *puVar3 = local_138;
  puVar3[1] = uStack_130;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0xa8 + lVar20);
  *(float *)(lVar20 + 0x30 + lVar19) = local_128;
  pdVar4 = (double *)(lVar20 + 0x40 + lVar19);
  *pdVar4 = local_118;
  pdVar4[1] = dStack_110;
  pdVar4 = (double *)(lVar20 + 0x50 + lVar19);
  *pdVar4 = local_108;
  pdVar4[1] = dStack_100;
  pdVar4 = (double *)(lVar20 + 0x60 + lVar19);
  *pdVar4 = local_f8;
  pdVar4[1] = dStack_f0;
  pdVar4 = (double *)(lVar20 + 0x70 + lVar19);
  *pdVar4 = local_e8;
  pdVar4[1] = dStack_e0;
  pdVar4 = (double *)(lVar20 + 0x80 + lVar19);
  *pdVar4 = local_d8;
  pdVar4[1] = dStack_d0;
  pdVar4 = (double *)(lVar20 + 0x90 + lVar19);
  *pdVar4 = local_c8;
  pdVar4[1] = dStack_c0;
  *(undefined1 *)(lVar20 + 0xa0 + lVar19) = local_b8;
  piVar2 = (int *)((longlong)&pFVar22[1].Data + 4);
  *(float *)(lVar20 + 0xa4 + lVar19) = local_b4;
  pFVar22->Data = (FScriptContainerElement *)0x0;
  lVar21 = (longlong)(int)local_a8;
  *(int *)&pFVar22[1].Data = (int)local_a8;
  if ((int)local_a8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_a8,0,pFVar22,(int)local_a8,piVar2);
    memcpy(pFVar22->Data,pvVar16,lVar21 * 0x58);
  }
  pvVar16 = local_a0;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0xb8 + lVar20);
  pFVar22->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar22[1].Data + 4);
  lVar21 = (longlong)(int)local_98;
  *(int *)&pFVar22[1].Data = (int)local_98;
  if ((int)local_98 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_98,0,pFVar22,(int)local_98,piVar2);
    memcpy(pFVar22->Data,pvVar16,lVar21 << 2);
  }
  *(undefined8 *)(lVar20 + 200 + lVar19) = local_90;
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return;
}

// DrawAxes @ 14a0875f0

void __thiscall
FRigVMDrawInterface::DrawAxes
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,float param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [6];
  
  fVar9 = __real_bf800000;
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar29 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar7 = (double)param_3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[0] * dVar7;
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar10 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar3;
  auVar35._12_4_ = uVar34;
  dVar2 = auVar29._0_8_;
  auVar19 = blendpd(auVar10,auVar29,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
  auVar36._8_8_ = dVar5 * auVar10._8_8_ - dVar2 * dVar4;
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = uVar34;
  auVar10._8_4_ = SUB84(dVar6,0);
  auVar10._0_8_ = dVar5;
  auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar2 - auVar19._0_8_ * dVar5;
  auVar11._8_8_ = auVar10._8_8_ * auVar29._8_8_ - auVar19._8_8_ * dVar6;
  auVar10 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar36,auVar11,2);
  dVar6 = auVar36._8_8_ + auVar36._8_8_;
  dVar1 = auVar11._0_8_ + auVar11._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar37._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar37._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar27._8_4_ = SUB84(dVar1,0);
  auVar27._0_8_ = dVar6;
  auVar27._12_4_ = uVar34;
  auVar21._8_4_ = SUB84(dVar1,0);
  auVar21._0_8_ = dVar6;
  auVar21._12_4_ = uVar34;
  auVar19 = blendpd(auVar21,auVar37,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar6;
  auVar28._8_8_ = auVar37._0_8_ * auVar10._8_8_ - dVar2 * dVar1;
  auVar10 = blendpd(auVar10,auVar29,2);
  local_98[0]._16_8_ = (param_2->Translation).ZW.m128d_f64[0];
  auVar12._8_4_ = SUB84(auVar28._8_8_,0);
  auVar12._0_8_ = auVar28._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar22._0_8_ = auVar19._0_8_ * dVar2 - auVar10._0_8_ * auVar37._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * auVar29._8_8_ - auVar10._8_8_ * auVar37._8_8_;
  local_98[0]._0_16_ = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  dVar2 = dVar1 * dVar8 + dVar4 + auVar22._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar29 = blendpd(auVar28,auVar22,2);
  local_b8._8_4_ = SUB84(dVar2,0);
  local_b8._s_0.X = dVar6 * dVar8 + dVar3 + auVar12._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_b8._s_0.Z =
       auVar37._0_8_ * dVar8 + dVar5 + auVar29._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  DrawLine(this,param_1,(TVector<double> *)&local_98[0]._s_0,(TVector<double> *)&local_b8._s_0,
           &FLinearColor::Red,param_4,SDPG_Foreground,__real_bf800000);
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1] * dVar7;
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar29 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar38._8_4_ = SUB84(dVar4,0);
  auVar38._0_8_ = dVar3;
  auVar38._12_4_ = uVar34;
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar19 = blendpd(auVar29,auVar10,2);
  dVar2 = auVar10._0_8_;
  auVar39._0_8_ = auVar38._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar3;
  auVar39._8_8_ = dVar5 * auVar29._8_8_ - dVar2 * dVar4;
  auVar13._8_4_ = SUB84(dVar4,0);
  auVar13._0_8_ = dVar3;
  auVar13._12_4_ = uVar34;
  auVar29._8_4_ = SUB84(dVar6,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar29 = blendpd(auVar13,auVar29,2);
  auVar14._0_8_ = auVar29._0_8_ * dVar2 - auVar19._0_8_ * dVar5;
  auVar14._8_8_ = auVar29._8_8_ * auVar10._8_8_ - auVar19._8_8_ * dVar6;
  auVar29 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar39,auVar14,2);
  dVar6 = auVar39._8_8_ + auVar39._8_8_;
  dVar1 = auVar14._0_8_ + auVar14._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar40._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar40._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar30._8_4_ = SUB84(dVar1,0);
  auVar30._0_8_ = dVar6;
  auVar30._12_4_ = uVar34;
  auVar23._8_4_ = SUB84(dVar1,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar34;
  auVar19 = blendpd(auVar23,auVar40,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar6;
  auVar31._8_8_ = auVar40._0_8_ * auVar29._8_8_ - dVar2 * dVar1;
  auVar29 = blendpd(auVar29,auVar10,2);
  local_b8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  auVar15._8_4_ = SUB84(auVar31._8_8_,0);
  auVar15._0_8_ = auVar31._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar24._0_8_ = auVar19._0_8_ * dVar2 - auVar29._0_8_ * auVar40._0_8_;
  auVar24._8_8_ = auVar19._8_8_ * auVar10._8_8_ - auVar29._8_8_ * auVar40._8_8_;
  local_b8._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  dVar2 = dVar1 * dVar8 + dVar4 + auVar24._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar29 = blendpd(auVar31,auVar24,2);
  local_98[0]._8_4_ = SUB84(dVar2,0);
  local_98[0]._0_8_ = dVar6 * dVar8 + dVar3 + auVar15._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_98[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_98[0]._16_8_ =
       auVar40._0_8_ * dVar8 + dVar5 + auVar29._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  DrawLine(this,param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_98[0]._s_0,
           &FLinearColor::Green,param_4,SDPG_Foreground,fVar9);
  dVar3 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar29 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar20 = blendpd(auVar10,auVar29,2);
  dVar7 = dVar7 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar41._8_4_ = SUB84(dVar4,0);
  auVar41._0_8_ = dVar3;
  auVar41._12_4_ = uVar34;
  dVar2 = auVar29._0_8_;
  auVar42._0_8_ = auVar41._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
  auVar42._8_8_ = dVar7 * auVar10._8_8_ - dVar2 * dVar4;
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar34;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar10 = blendpd(auVar16,auVar19,2);
  auVar17._0_8_ = auVar10._0_8_ * dVar2 - auVar20._0_8_ * dVar7;
  auVar17._8_8_ = auVar10._8_8_ * auVar29._8_8_ - auVar20._8_8_ * dVar6;
  auVar10 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar42,auVar17,2);
  dVar6 = auVar42._8_8_ + auVar42._8_8_;
  dVar1 = auVar17._0_8_ + auVar17._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar43._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar43._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar32._8_4_ = SUB84(dVar1,0);
  auVar32._0_8_ = dVar6;
  auVar32._12_4_ = uVar34;
  auVar25._8_4_ = SUB84(dVar1,0);
  auVar25._0_8_ = dVar6;
  auVar25._12_4_ = uVar34;
  auVar19 = blendpd(auVar25,auVar43,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar6;
  auVar33._8_8_ = auVar43._0_8_ * auVar10._8_8_ - dVar2 * dVar1;
  auVar10 = blendpd(auVar10,auVar29,2);
  local_b8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  auVar18._8_4_ = SUB84(auVar33._8_8_,0);
  auVar18._0_8_ = auVar33._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar26._0_8_ = auVar19._0_8_ * dVar2 - auVar10._0_8_ * auVar43._0_8_;
  auVar26._8_8_ = auVar19._8_8_ * auVar29._8_8_ - auVar10._8_8_ * auVar43._8_8_;
  local_b8._0_16_ = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  dVar2 = dVar1 * dVar5 + dVar4 + auVar26._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar29 = blendpd(auVar33,auVar26,2);
  local_98[0]._8_4_ = SUB84(dVar2,0);
  local_98[0]._0_8_ = dVar6 * dVar5 + dVar3 + auVar18._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_98[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_98[0]._16_8_ =
       auVar43._0_8_ * dVar5 + dVar7 + auVar29._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  DrawLine(this,param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_98[0]._s_0,
           &FLinearColor::Blue,param_4,SDPG_Foreground,fVar9);
  return;
}

// DrawAxes @ 14a087a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawAxes
          (FRigVMDrawInterface *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,FLinearColor *param_3,
          float param_4,float param_5,ESceneDepthPriorityGroup param_6,float param_7)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  VectorRegister4Double *pVVar16;
  TTransform<double> *pTVar17;
  TTransform<double> *pTVar18;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStackY_2a8 [32];
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_210 [16];
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 local_1a8 [16];
  undefined8 local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  FRigVMDrawInstruction local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_2->ArrayNum != 0) {
    local_158.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_158.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    uVar11 = param_2->ArrayNum * 6;
    local_158.Transform.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_158.Transform.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_158.Thickness = param_5;
    local_158.Transform.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_158.Transform.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_158.Transform.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_158.Transform.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_158.Transform.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_158.Transform.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_158.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_158.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_158.Transform.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_158.Transform.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_158.Lifetime = param_7;
    local_158.Name.ComparisonIndex.Value = 0;
    local_158.Name.Number = 0;
    local_158.PrimitiveType.Value = '\x01';
    local_158.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Positions.ArrayNum = 0;
    local_158.Positions.ArrayMax = 0;
    local_158.DepthPriority.Value = (undefined1)param_6;
    local_158.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.MeshVerts.ArrayNum = 0;
    local_158.MeshVerts.ArrayMax = 0;
    local_158.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.MeshIndices.ArrayNum = 0;
    local_158.MeshIndices.ArrayMax = 0;
    local_158.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,&local_158.Positions.AllocatorInstance,0,
                 &local_158.Positions.ArrayMax);
    }
    pTVar18 = param_2->DataPtr;
    pTVar17 = pTVar18 + param_2->ArrayNum;
    if (pTVar18 != pTVar17) {
      pVVar16 = &pTVar18->Translation;
      dVar10 = (double)param_4;
      do {
        local_258 = (pVVar16->XY).m128d_f64[0];
        dStack_250 = (pVVar16->XY).m128d_f64[1];
        local_248 = (pVVar16->ZW).m128d_f64[0];
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_258)
            && ((FScriptContainerElement *)&local_258 <
                local_158.Positions.AllocatorInstance.Data +
                (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        lVar15 = (longlong)local_158.Positions.ArrayNum;
        local_158.Positions.ArrayNum = local_158.Positions.ArrayNum + 1;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar15 * 0x18) = local_258;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar15 * 0x18 + 8) = dStack_250;
        uStack_1b8 = 0;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar15 * 0x18 + 0x10) = local_248;
        auVar37 = *(undefined1 (*) [16])(pTVar18->Rotation).ZW.m128d_f64;
        dVar8 = pVVar16[1].ZW.m128d_f64[0] * 0.0;
        dVar9 = pVVar16[1].ZW.m128d_f64[1] * 0.0;
        local_1a8 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        auVar34 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        dVar12 = (pTVar18->Rotation).ZW.m128d_f64[1];
        auVar27 = blendpd(local_1a8,auVar37,2);
        auStack_1c8._8_8_ = 0;
        auStack_1c8._0_8_ = dVar10;
        dVar5 = dVar10 * pVVar16[1].XY.m128d_f64[0];
        dVar6 = pVVar16[1].XY.m128d_f64[1] * 0.0;
        uVar42 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar43._8_4_ = SUB84(dVar6,0);
        auVar43._0_8_ = dVar5;
        auVar43._12_4_ = uVar42;
        dVar3 = auVar37._0_8_;
        auVar44._0_8_ = auVar43._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar5;
        auVar44._8_8_ = dVar8 * local_1a8._8_8_ - dVar3 * dVar6;
        auVar33._8_4_ = SUB84(dVar6,0);
        auVar33._0_8_ = dVar5;
        auVar33._12_4_ = uVar42;
        auVar19._8_4_ = SUB84(dVar9,0);
        auVar19._0_8_ = dVar8;
        auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar19 = blendpd(auVar33,auVar19,2);
        auVar20._0_8_ = auVar19._0_8_ * dVar3 - auVar27._0_8_ * dVar8;
        auVar20._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar27._8_8_ * dVar9;
        auVar19 = blendpd(auVar44,auVar20,2);
        dVar9 = auVar44._8_8_ + auVar44._8_8_;
        dVar2 = auVar20._0_8_ + auVar20._0_8_;
        uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar45._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar45._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar35._8_4_ = SUB84(dVar2,0);
        auVar35._0_8_ = dVar9;
        auVar35._12_4_ = uVar42;
        auVar28._8_4_ = SUB84(dVar2,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar42;
        auVar19 = blendpd(auVar28,auVar45,2);
        auVar36._0_8_ = auVar35._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar9;
        auVar36._8_8_ = auVar45._0_8_ * auVar34._8_8_ - dVar3 * dVar2;
        auVar27._8_4_ = SUB84(auVar36._8_8_,0);
        auVar27._0_8_ = auVar36._0_8_;
        auVar27._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
        auVar33 = blendpd(auVar34,auVar37,2);
        auVar34._0_8_ = auVar19._0_8_ * dVar3 - auVar33._0_8_ * auVar45._0_8_;
        auVar34._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar33._8_8_ * auVar45._8_8_;
        auVar37 = blendpd(auVar36,auVar34,2);
        dVar3 = dVar2 * dVar12 + dVar6 + auVar34._0_8_ + (pVVar16->XY).m128d_f64[1];
        local_230 = auVar45._0_8_ * dVar12 + dVar8 + auVar37._0_8_ + (pVVar16->ZW).m128d_f64[0];
        local_240._8_4_ = SUB84(dVar3,0);
        local_240._0_8_ = dVar9 * dVar12 + dVar5 + auVar27._8_8_ + (pVVar16->XY).m128d_f64[0];
        local_240._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_240) &&
            ((FScriptContainerElement *)local_240 <
             local_158.Positions.AllocatorInstance.Data +
             (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_240._0_8_;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = local_240._8_8_;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_230;
        local_228 = (pVVar16->XY).m128d_f64[0];
        dStack_220 = (pVVar16->XY).m128d_f64[1];
        local_218 = (pVVar16->ZW).m128d_f64[0];
        local_158.Positions.ArrayNum = iVar14;
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_228)
            && ((FScriptContainerElement *)&local_228 <
                local_158.Positions.AllocatorInstance.Data +
                (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        local_178 = 0;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_228;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = dStack_220;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_218;
        auVar37 = *(undefined1 (*) [16])(pTVar18->Rotation).ZW.m128d_f64;
        dVar8 = pVVar16[1].ZW.m128d_f64[0] * 0.0;
        dVar9 = pVVar16[1].ZW.m128d_f64[1] * 0.0;
        local_1a8 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        auVar34 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        dVar12 = (pTVar18->Rotation).ZW.m128d_f64[1];
        auVar33 = blendpd(local_1a8,auVar37,2);
        local_188 = 0;
        dVar5 = pVVar16[1].XY.m128d_f64[0] * 0.0;
        dVar6 = dVar10 * pVVar16[1].XY.m128d_f64[1];
        uVar42 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar46._8_4_ = SUB84(dVar6,0);
        auVar46._0_8_ = dVar5;
        auVar46._12_4_ = uVar42;
        dVar3 = auVar37._0_8_;
        auVar47._0_8_ = auVar46._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar5;
        auVar47._8_8_ = dVar8 * local_1a8._8_8_ - dVar3 * dVar6;
        auVar21._8_4_ = SUB84(dVar6,0);
        auVar21._0_8_ = dVar5;
        auVar21._12_4_ = uVar42;
        auVar7._8_4_ = SUB84(dVar9,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar19 = blendpd(auVar21,auVar7,2);
        auVar22._0_8_ = auVar19._0_8_ * dVar3 - auVar33._0_8_ * dVar8;
        auVar22._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar33._8_8_ * dVar9;
        auVar19 = blendpd(auVar47,auVar22,2);
        dVar9 = auVar47._8_8_ + auVar47._8_8_;
        dVar2 = auVar22._0_8_ + auVar22._0_8_;
        uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar48._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar48._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar38._8_4_ = SUB84(dVar2,0);
        auVar38._0_8_ = dVar9;
        auVar38._12_4_ = uVar42;
        auVar29._8_4_ = SUB84(dVar2,0);
        auVar29._0_8_ = dVar9;
        auVar29._12_4_ = uVar42;
        auVar19 = blendpd(auVar29,auVar48,2);
        auVar39._0_8_ = auVar38._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar9;
        auVar39._8_8_ = auVar48._0_8_ * auVar34._8_8_ - dVar3 * dVar2;
        auVar23._8_4_ = SUB84(auVar39._8_8_,0);
        auVar23._0_8_ = auVar39._0_8_;
        auVar23._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
        auVar34 = blendpd(auVar34,auVar37,2);
        auVar30._0_8_ = auVar19._0_8_ * dVar3 - auVar34._0_8_ * auVar48._0_8_;
        auVar30._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar34._8_8_ * auVar48._8_8_;
        auVar37 = blendpd(auVar39,auVar30,2);
        dVar3 = dVar2 * dVar12 + dVar6 + auVar30._0_8_ + (pVVar16->XY).m128d_f64[1];
        local_200 = auVar48._0_8_ * dVar12 + dVar8 + auVar37._0_8_ + (pVVar16->ZW).m128d_f64[0];
        local_210._8_4_ = SUB84(dVar3,0);
        local_210._0_8_ = dVar9 * dVar12 + dVar5 + auVar23._8_8_ + (pVVar16->XY).m128d_f64[0];
        local_210._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        dStack_180 = dVar10;
        local_158.Positions.ArrayNum = iVar14;
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_210) &&
            ((FScriptContainerElement *)local_210 <
             local_158.Positions.AllocatorInstance.Data +
             (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_210._0_8_;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = local_210._8_8_;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_200;
        local_1f8 = (pVVar16->XY).m128d_f64[0];
        dStack_1f0 = (pVVar16->XY).m128d_f64[1];
        local_1e8 = (pVVar16->ZW).m128d_f64[0];
        local_158.Positions.ArrayNum = iVar14;
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f8)
            && ((FScriptContainerElement *)&local_1f8 <
                local_158.Positions.AllocatorInstance.Data +
                (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        local_170 = 0;
        uStack_168 = 0;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_1f8;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = dStack_1f0;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_1e8;
        auVar37 = *(undefined1 (*) [16])(pTVar18->Rotation).ZW.m128d_f64;
        dVar6 = pVVar16[1].XY.m128d_f64[0] * 0.0;
        dVar8 = pVVar16[1].XY.m128d_f64[1] * 0.0;
        uVar42 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_1a8 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        auVar34 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        dVar12 = (pTVar18->Rotation).ZW.m128d_f64[1];
        auVar49._8_4_ = SUB84(dVar8,0);
        auVar49._0_8_ = dVar6;
        auVar49._12_4_ = uVar42;
        dVar5 = dVar10 * pVVar16[1].ZW.m128d_f64[0];
        dVar9 = pVVar16[1].ZW.m128d_f64[1] * 0.0;
        auVar33 = blendpd(local_1a8,auVar37,2);
        dVar3 = auVar37._0_8_;
        auVar50._0_8_ = auVar49._8_8_ * local_1a8._0_8_ - local_1a8._8_8_ * dVar6;
        auVar50._8_8_ = dVar5 * local_1a8._8_8_ - dVar3 * dVar8;
        auVar24._8_4_ = SUB84(dVar8,0);
        auVar24._0_8_ = dVar6;
        auVar24._12_4_ = uVar42;
        auVar4._8_4_ = SUB84(dVar9,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar19 = blendpd(auVar24,auVar4,2);
        auVar25._0_8_ = auVar19._0_8_ * dVar3 - auVar33._0_8_ * dVar5;
        auVar25._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar33._8_8_ * dVar9;
        auVar19 = blendpd(auVar50,auVar25,2);
        dVar9 = auVar50._8_8_ + auVar50._8_8_;
        dVar2 = auVar25._0_8_ + auVar25._0_8_;
        uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar51._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar51._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar40._8_4_ = SUB84(dVar2,0);
        auVar40._0_8_ = dVar9;
        auVar40._12_4_ = uVar42;
        auVar31._8_4_ = SUB84(dVar2,0);
        auVar31._0_8_ = dVar9;
        auVar31._12_4_ = uVar42;
        auVar19 = blendpd(auVar31,auVar51,2);
        auVar41._0_8_ = auVar40._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar9;
        auVar41._8_8_ = auVar51._0_8_ * auVar34._8_8_ - dVar3 * dVar2;
        auVar26._8_4_ = SUB84(auVar41._8_8_,0);
        auVar26._0_8_ = auVar41._0_8_;
        auVar26._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
        auVar34 = blendpd(auVar34,auVar37,2);
        auVar32._0_8_ = auVar19._0_8_ * dVar3 - auVar34._0_8_ * auVar51._0_8_;
        auVar32._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar34._8_8_ * auVar51._8_8_;
        auVar37 = blendpd(auVar41,auVar32,2);
        dVar3 = dVar2 * dVar12 + dVar8 + auVar32._0_8_ + (pVVar16->XY).m128d_f64[1];
        local_1d0 = auVar51._0_8_ * dVar12 + dVar5 + auVar37._0_8_ + (pVVar16->ZW).m128d_f64[0];
        local_1e0._8_4_ = SUB84(dVar3,0);
        local_1e0._0_8_ = dVar9 * dVar12 + dVar6 + auVar26._8_8_ + (pVVar16->XY).m128d_f64[0];
        local_1e0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_160 = dVar10;
        local_158.Positions.ArrayNum = iVar14;
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_1e0) &&
            ((FScriptContainerElement *)local_1e0 <
             local_158.Positions.AllocatorInstance.Data +
             (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        pTVar18 = pTVar18 + 1;
        pVVar16 = pVVar16 + 3;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_1e0._0_8_;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = local_1e0._8_8_;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_1d0;
        local_158.Positions.ArrayNum = iVar14;
      } while (pTVar18 != pTVar17);
    }
    if (((*(FRigVMDrawInstruction **)&this->field_0x8 <= &local_158) &&
        (&local_158 < *(FRigVMDrawInstruction **)&this->field_0x8 + *(int *)&this->field_0x14)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar14 = *(int *)&this->field_0x10;
    if (iVar14 == *(int *)&this->field_0x14) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar14 + 1;
    FRigVMDrawInstruction::FRigVMDrawInstruction
              ((FRigVMDrawInstruction *)((longlong)iVar14 * 0xd0 + *(longlong *)&this->field_0x8),
               &local_158);
    if (local_158.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.MeshIndices.AllocatorInstance.Data);
    }
    if (local_158.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.MeshVerts.AllocatorInstance.Data);
    }
    if (local_158.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Positions.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawAxes @ 14a0884c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawAxes
          (FRigVMDrawInterface *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,float param_3,float param_4,
          ESceneDepthPriorityGroup param_5,float param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  VectorRegister4Double *pVVar17;
  TTransform<double> *pTVar18;
  TTransform<double> *pTVar19;
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
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStackY_448 [32];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined1 local_380 [16];
  double local_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined1 local_348 [16];
  undefined8 local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  double local_300;
  FRigVMDrawInstruction local_2f8;
  FRigVMDrawInstruction local_228;
  FRigVMDrawInstruction local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (param_2->ArrayNum != 0) {
    local_158.Transform.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_158.Transform.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_158.Color.field0_0x0._s_0 = FLinearColor::Red.field0_0x0;
    local_158.Transform.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_158.Transform.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_158.Transform.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_158.Transform.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_158.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_158.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_158.Name.ComparisonIndex.Value = 0;
    local_158.Name.Number = 0;
    local_158.Transform.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_158.Transform.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_228.Color.field0_0x0._s_0 = FLinearColor::Green.field0_0x0;
    local_228.Transform.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_228.Transform.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_158.Transform.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_158.Transform.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_228.Transform.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_228.Transform.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_228.Transform.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_228.Transform.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_228.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_228.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_228.Transform.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_228.Transform.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_158.PrimitiveType.Value = '\x01';
    local_228.Transform.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_228.Transform.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_2f8.Color.field0_0x0._s_0 = FLinearColor::Blue.field0_0x0;
    local_2f8.Transform.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_2f8.Transform.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_2f8.Transform.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_2f8.Transform.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_2f8.Transform.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_2f8.Transform.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_2f8.Transform.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_2f8.Transform.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_2f8.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_2f8.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_2f8.Transform.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_2f8.Transform.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_158.Thickness = param_4;
    local_158.Lifetime = param_6;
    local_228.Thickness = param_4;
    local_228.Lifetime = param_6;
    local_2f8.Thickness = param_4;
    local_2f8.Lifetime = param_6;
    local_158.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Positions.ArrayNum = 0;
    local_158.Positions.ArrayMax = 0;
    local_158.DepthPriority.Value = (undefined1)param_5;
    local_158.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.MeshVerts.ArrayNum = 0;
    local_158.MeshVerts.ArrayMax = 0;
    local_158.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.MeshIndices.ArrayNum = 0;
    local_158.MeshIndices.ArrayMax = 0;
    local_158.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    local_228.Name.ComparisonIndex.Value = 0;
    local_228.Name.Number = 0;
    local_228.PrimitiveType.Value = '\x01';
    local_228.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Positions.ArrayNum = 0;
    local_228.Positions.ArrayMax = 0;
    local_228.DepthPriority.Value = (undefined1)param_5;
    local_228.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.MeshVerts.ArrayNum = 0;
    local_228.MeshVerts.ArrayMax = 0;
    local_228.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.MeshIndices.ArrayNum = 0;
    local_228.MeshIndices.ArrayMax = 0;
    local_228.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    local_2f8.Name.ComparisonIndex.Value = 0;
    local_2f8.Name.Number = 0;
    local_2f8.PrimitiveType.Value = '\x01';
    local_2f8.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Positions.ArrayNum = 0;
    local_2f8.Positions.ArrayMax = 0;
    local_2f8.DepthPriority.Value = (undefined1)param_5;
    local_2f8.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.MeshVerts.ArrayNum = 0;
    local_2f8.MeshVerts.ArrayMax = 0;
    local_2f8.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar11 = param_2->ArrayNum * 2;
    local_2f8.MeshIndices.ArrayNum = 0;
    local_2f8.MeshIndices.ArrayMax = 0;
    local_2f8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    iVar14 = 0;
    iVar15 = 0;
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,&local_158.Positions.AllocatorInstance,0,
                 &local_158.Positions.ArrayMax);
      iVar14 = local_228.Positions.ArrayMax;
      iVar15 = local_228.Positions.ArrayNum;
    }
    uVar11 = param_2->ArrayNum * 2;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (iVar14 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,&local_228.Positions.AllocatorInstance,iVar15,
                 &local_228.Positions.ArrayMax);
    }
    uVar11 = param_2->ArrayNum * 2;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (local_2f8.Positions.ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,&local_2f8.Positions.AllocatorInstance,local_2f8.Positions.ArrayNum,
                 &local_2f8.Positions.ArrayMax);
    }
    pTVar19 = param_2->DataPtr;
    pTVar18 = pTVar19 + param_2->ArrayNum;
    if (pTVar19 != pTVar18) {
      pVVar17 = &pTVar19->Translation;
      dVar10 = (double)param_3;
      do {
        local_3f8 = (pVVar17->XY).m128d_f64[0];
        dStack_3f0 = (pVVar17->XY).m128d_f64[1];
        local_3e8 = (pVVar17->ZW).m128d_f64[0];
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3f8)
            && ((FScriptContainerElement *)&local_3f8 <
                local_158.Positions.AllocatorInstance.Data +
                (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        lVar16 = (longlong)local_158.Positions.ArrayNum;
        local_158.Positions.ArrayNum = local_158.Positions.ArrayNum + 1;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar16 * 0x18) = local_3f8;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar16 * 0x18 + 8) = dStack_3f0;
        uStack_358 = 0;
        *(double *)(local_158.Positions.AllocatorInstance.Data + lVar16 * 0x18 + 0x10) = local_3e8;
        auVar38 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
        dVar8 = pVVar17[1].ZW.m128d_f64[0] * 0.0;
        dVar9 = pVVar17[1].ZW.m128d_f64[1] * 0.0;
        local_348 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        auVar35 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        dVar12 = (pTVar19->Rotation).ZW.m128d_f64[1];
        auVar28 = blendpd(local_348,auVar38,2);
        auStack_368._8_8_ = 0;
        auStack_368._0_8_ = dVar10;
        dVar5 = dVar10 * pVVar17[1].XY.m128d_f64[0];
        dVar6 = pVVar17[1].XY.m128d_f64[1] * 0.0;
        uVar43 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar44._8_4_ = SUB84(dVar6,0);
        auVar44._0_8_ = dVar5;
        auVar44._12_4_ = uVar43;
        dVar3 = auVar38._0_8_;
        auVar45._0_8_ = auVar44._8_8_ * local_348._0_8_ - local_348._8_8_ * dVar5;
        auVar45._8_8_ = dVar8 * local_348._8_8_ - dVar3 * dVar6;
        auVar34._8_4_ = SUB84(dVar6,0);
        auVar34._0_8_ = dVar5;
        auVar34._12_4_ = uVar43;
        auVar20._8_4_ = SUB84(dVar9,0);
        auVar20._0_8_ = dVar8;
        auVar20._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar20 = blendpd(auVar34,auVar20,2);
        auVar21._0_8_ = auVar20._0_8_ * dVar3 - auVar28._0_8_ * dVar8;
        auVar21._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar28._8_8_ * dVar9;
        auVar20 = blendpd(auVar45,auVar21,2);
        dVar9 = auVar45._8_8_ + auVar45._8_8_;
        dVar2 = auVar21._0_8_ + auVar21._0_8_;
        uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar46._0_8_ = auVar20._0_8_ + auVar20._0_8_;
        auVar46._8_8_ = auVar20._8_8_ + auVar20._8_8_;
        auVar36._8_4_ = SUB84(dVar2,0);
        auVar36._0_8_ = dVar9;
        auVar36._12_4_ = uVar43;
        auVar29._8_4_ = SUB84(dVar2,0);
        auVar29._0_8_ = dVar9;
        auVar29._12_4_ = uVar43;
        auVar20 = blendpd(auVar29,auVar46,2);
        auVar37._0_8_ = auVar36._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar9;
        auVar37._8_8_ = auVar46._0_8_ * auVar35._8_8_ - dVar3 * dVar2;
        auVar28._8_4_ = SUB84(auVar37._8_8_,0);
        auVar28._0_8_ = auVar37._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
        auVar34 = blendpd(auVar35,auVar38,2);
        auVar35._0_8_ = auVar20._0_8_ * dVar3 - auVar34._0_8_ * auVar46._0_8_;
        auVar35._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar34._8_8_ * auVar46._8_8_;
        auVar38 = blendpd(auVar37,auVar35,2);
        dVar3 = dVar2 * dVar12 + dVar6 + auVar35._0_8_ + (pVVar17->XY).m128d_f64[1];
        local_3d0 = auVar46._0_8_ * dVar12 + dVar8 + auVar38._0_8_ + (pVVar17->ZW).m128d_f64[0];
        local_3e0._8_4_ = SUB84(dVar3,0);
        local_3e0._0_8_ = dVar9 * dVar12 + dVar5 + auVar28._8_8_ + (pVVar17->XY).m128d_f64[0];
        local_3e0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        if (((local_158.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_3e0) &&
            ((FScriptContainerElement *)local_3e0 <
             local_158.Positions.AllocatorInstance.Data +
             (longlong)local_158.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158.Positions.ArrayNum == local_158.Positions.ArrayMax) {
          local_158.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_158.Positions.AllocatorInstance,&local_158.Positions.ArrayMax
                         );
        }
        iVar14 = local_158.Positions.ArrayNum + 1;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         ) = local_3e0._0_8_;
        *(undefined8 *)
         (local_158.Positions.AllocatorInstance.Data + (longlong)local_158.Positions.ArrayNum * 0x18
         + 8) = local_3e0._8_8_;
        *(double *)
         (local_158.Positions.AllocatorInstance.Data +
         (longlong)local_158.Positions.ArrayNum * 0x18 + 0x10) = local_3d0;
        local_3c8 = (pVVar17->XY).m128d_f64[0];
        dStack_3c0 = (pVVar17->XY).m128d_f64[1];
        local_3b8 = (pVVar17->ZW).m128d_f64[0];
        local_158.Positions.ArrayNum = iVar14;
        if (((local_228.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c8)
            && ((FScriptContainerElement *)&local_3c8 <
                local_228.Positions.AllocatorInstance.Data +
                (longlong)local_228.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar14 = local_228.Positions.ArrayNum;
        if (local_228.Positions.ArrayNum == local_228.Positions.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_228.Positions.AllocatorInstance,
                              &local_228.Positions.ArrayMax);
        }
        iVar15 = iVar14 + 1;
        local_318 = 0;
        *(double *)(local_228.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18) =
             local_3c8;
        *(double *)(local_228.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 8) =
             dStack_3c0;
        *(double *)(local_228.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 0x10) =
             local_3b8;
        auVar38 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
        dVar8 = pVVar17[1].ZW.m128d_f64[0] * 0.0;
        dVar9 = pVVar17[1].ZW.m128d_f64[1] * 0.0;
        local_348 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        auVar35 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        dVar12 = (pTVar19->Rotation).ZW.m128d_f64[1];
        auVar34 = blendpd(local_348,auVar38,2);
        local_328 = 0;
        dVar5 = pVVar17[1].XY.m128d_f64[0] * 0.0;
        dVar6 = dVar10 * pVVar17[1].XY.m128d_f64[1];
        uVar43 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar47._8_4_ = SUB84(dVar6,0);
        auVar47._0_8_ = dVar5;
        auVar47._12_4_ = uVar43;
        dVar3 = auVar38._0_8_;
        auVar48._0_8_ = auVar47._8_8_ * local_348._0_8_ - local_348._8_8_ * dVar5;
        auVar48._8_8_ = dVar8 * local_348._8_8_ - dVar3 * dVar6;
        auVar22._8_4_ = SUB84(dVar6,0);
        auVar22._0_8_ = dVar5;
        auVar22._12_4_ = uVar43;
        auVar7._8_4_ = SUB84(dVar9,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar20 = blendpd(auVar22,auVar7,2);
        auVar23._0_8_ = auVar20._0_8_ * dVar3 - auVar34._0_8_ * dVar8;
        auVar23._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar34._8_8_ * dVar9;
        auVar20 = blendpd(auVar48,auVar23,2);
        dVar9 = auVar48._8_8_ + auVar48._8_8_;
        dVar2 = auVar23._0_8_ + auVar23._0_8_;
        uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar49._0_8_ = auVar20._0_8_ + auVar20._0_8_;
        auVar49._8_8_ = auVar20._8_8_ + auVar20._8_8_;
        auVar39._8_4_ = SUB84(dVar2,0);
        auVar39._0_8_ = dVar9;
        auVar39._12_4_ = uVar43;
        auVar30._8_4_ = SUB84(dVar2,0);
        auVar30._0_8_ = dVar9;
        auVar30._12_4_ = uVar43;
        auVar20 = blendpd(auVar30,auVar49,2);
        auVar40._0_8_ = auVar39._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar9;
        auVar40._8_8_ = auVar49._0_8_ * auVar35._8_8_ - dVar3 * dVar2;
        auVar24._8_4_ = SUB84(auVar40._8_8_,0);
        auVar24._0_8_ = auVar40._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
        auVar35 = blendpd(auVar35,auVar38,2);
        auVar31._0_8_ = auVar20._0_8_ * dVar3 - auVar35._0_8_ * auVar49._0_8_;
        auVar31._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar35._8_8_ * auVar49._8_8_;
        auVar38 = blendpd(auVar40,auVar31,2);
        dVar3 = dVar2 * dVar12 + dVar6 + auVar31._0_8_ + (pVVar17->XY).m128d_f64[1];
        local_3a0 = auVar49._0_8_ * dVar12 + dVar8 + auVar38._0_8_ + (pVVar17->ZW).m128d_f64[0];
        local_3b0._8_4_ = SUB84(dVar3,0);
        local_3b0._0_8_ = dVar9 * dVar12 + dVar5 + auVar24._8_8_ + (pVVar17->XY).m128d_f64[0];
        local_3b0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        dStack_320 = dVar10;
        local_228.Positions.ArrayNum = iVar15;
        if (((local_228.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_3b0) &&
            ((FScriptContainerElement *)local_3b0 <
             local_228.Positions.AllocatorInstance.Data +
             (longlong)local_228.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_228.Positions.ArrayNum == local_228.Positions.ArrayMax) {
          local_228.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_228.Positions.AllocatorInstance,&local_228.Positions.ArrayMax
                         );
        }
        lVar16 = (longlong)local_228.Positions.ArrayNum;
        local_228.Positions.ArrayNum = local_228.Positions.ArrayNum + 1;
        *(undefined8 *)(local_228.Positions.AllocatorInstance.Data + lVar16 * 0x18) =
             local_3b0._0_8_;
        *(undefined8 *)(local_228.Positions.AllocatorInstance.Data + lVar16 * 0x18 + 8) =
             local_3b0._8_8_;
        *(double *)(local_228.Positions.AllocatorInstance.Data + lVar16 * 0x18 + 0x10) = local_3a0;
        local_398 = (pVVar17->XY).m128d_f64[0];
        dStack_390 = (pVVar17->XY).m128d_f64[1];
        local_388 = (pVVar17->ZW).m128d_f64[0];
        if (((local_2f8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_398)
            && ((FScriptContainerElement *)&local_398 <
                local_2f8.Positions.AllocatorInstance.Data +
                (longlong)local_2f8.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar14 = local_2f8.Positions.ArrayNum;
        if (local_2f8.Positions.ArrayNum == local_2f8.Positions.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_2f8.Positions.AllocatorInstance,
                              &local_2f8.Positions.ArrayMax);
        }
        iVar15 = iVar14 + 1;
        local_310 = 0;
        uStack_308 = 0;
        *(double *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18) =
             local_398;
        *(double *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 8) =
             dStack_390;
        *(double *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 0x10) =
             local_388;
        auVar38 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
        dVar6 = pVVar17[1].XY.m128d_f64[0] * 0.0;
        dVar8 = pVVar17[1].XY.m128d_f64[1] * 0.0;
        uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_348 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        auVar35 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        dVar12 = (pTVar19->Rotation).ZW.m128d_f64[1];
        auVar50._8_4_ = SUB84(dVar8,0);
        auVar50._0_8_ = dVar6;
        auVar50._12_4_ = uVar43;
        dVar5 = dVar10 * pVVar17[1].ZW.m128d_f64[0];
        dVar9 = pVVar17[1].ZW.m128d_f64[1] * 0.0;
        auVar34 = blendpd(local_348,auVar38,2);
        dVar3 = auVar38._0_8_;
        auVar51._0_8_ = auVar50._8_8_ * local_348._0_8_ - local_348._8_8_ * dVar6;
        auVar51._8_8_ = dVar5 * local_348._8_8_ - dVar3 * dVar8;
        auVar25._8_4_ = SUB84(dVar8,0);
        auVar25._0_8_ = dVar6;
        auVar25._12_4_ = uVar43;
        auVar4._8_4_ = SUB84(dVar9,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar20 = blendpd(auVar25,auVar4,2);
        auVar26._0_8_ = auVar20._0_8_ * dVar3 - auVar34._0_8_ * dVar5;
        auVar26._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar34._8_8_ * dVar9;
        auVar20 = blendpd(auVar51,auVar26,2);
        dVar9 = auVar51._8_8_ + auVar51._8_8_;
        dVar2 = auVar26._0_8_ + auVar26._0_8_;
        uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar52._0_8_ = auVar20._0_8_ + auVar20._0_8_;
        auVar52._8_8_ = auVar20._8_8_ + auVar20._8_8_;
        auVar41._8_4_ = SUB84(dVar2,0);
        auVar41._0_8_ = dVar9;
        auVar41._12_4_ = uVar43;
        auVar32._8_4_ = SUB84(dVar2,0);
        auVar32._0_8_ = dVar9;
        auVar32._12_4_ = uVar43;
        auVar20 = blendpd(auVar32,auVar52,2);
        auVar42._0_8_ = auVar41._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar9;
        auVar42._8_8_ = auVar52._0_8_ * auVar35._8_8_ - dVar3 * dVar2;
        auVar27._8_4_ = SUB84(auVar42._8_8_,0);
        auVar27._0_8_ = auVar42._0_8_;
        auVar27._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
        auVar35 = blendpd(auVar35,auVar38,2);
        auVar33._0_8_ = auVar20._0_8_ * dVar3 - auVar35._0_8_ * auVar52._0_8_;
        auVar33._8_8_ = auVar20._8_8_ * auVar38._8_8_ - auVar35._8_8_ * auVar52._8_8_;
        auVar38 = blendpd(auVar42,auVar33,2);
        dVar3 = dVar2 * dVar12 + dVar8 + auVar33._0_8_ + (pVVar17->XY).m128d_f64[1];
        local_370 = auVar52._0_8_ * dVar12 + dVar5 + auVar38._0_8_ + (pVVar17->ZW).m128d_f64[0];
        local_380._8_4_ = SUB84(dVar3,0);
        local_380._0_8_ = dVar9 * dVar12 + dVar6 + auVar27._8_8_ + (pVVar17->XY).m128d_f64[0];
        local_380._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_300 = dVar10;
        local_2f8.Positions.ArrayNum = iVar15;
        if (((local_2f8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)local_380) &&
            ((FScriptContainerElement *)local_380 <
             local_2f8.Positions.AllocatorInstance.Data +
             (longlong)local_2f8.Positions.ArrayMax * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar14 = local_2f8.Positions.ArrayNum;
        if (local_2f8.Positions.ArrayNum == local_2f8.Positions.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_2f8.Positions.AllocatorInstance,
                              &local_2f8.Positions.ArrayMax);
        }
        pTVar19 = pTVar19 + 1;
        local_2f8.Positions.ArrayNum = iVar14 + 1;
        pVVar17 = pVVar17 + 3;
        *(undefined8 *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18) =
             local_380._0_8_;
        *(undefined8 *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 8) =
             local_380._8_8_;
        *(double *)(local_2f8.Positions.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 0x10) =
             local_370;
      } while (pTVar19 != pTVar18);
    }
    if (((*(FRigVMDrawInstruction **)&this->field_0x8 <= &local_158) &&
        (&local_158 < *(FRigVMDrawInstruction **)&this->field_0x8 + *(int *)&this->field_0x14)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar14 = *(int *)&this->field_0x10;
    if (iVar14 == *(int *)&this->field_0x14) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar14 + 1;
    FRigVMDrawInstruction::FRigVMDrawInstruction
              ((FRigVMDrawInstruction *)((longlong)iVar14 * 0xd0 + *(longlong *)&this->field_0x8),
               &local_158);
    if (((*(FRigVMDrawInstruction **)&this->field_0x8 <= &local_228) &&
        (&local_228 < *(FRigVMDrawInstruction **)&this->field_0x8 + *(int *)&this->field_0x14)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar14 = *(int *)&this->field_0x10;
    if (iVar14 == *(int *)&this->field_0x14) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar14 + 1;
    FRigVMDrawInstruction::FRigVMDrawInstruction
              ((FRigVMDrawInstruction *)((longlong)iVar14 * 0xd0 + *(longlong *)&this->field_0x8),
               &local_228);
    if (((*(FRigVMDrawInstruction **)&this->field_0x8 <= &local_2f8) &&
        (&local_2f8 < *(FRigVMDrawInstruction **)&this->field_0x8 + *(int *)&this->field_0x14)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar14 = *(int *)&this->field_0x10;
    if (iVar14 == *(int *)&this->field_0x14) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar14 + 1;
    FRigVMDrawInstruction::FRigVMDrawInstruction
              ((FRigVMDrawInstruction *)((longlong)iVar14 * 0xd0 + *(longlong *)&this->field_0x8),
               &local_2f8);
    if (local_2f8.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.MeshIndices.AllocatorInstance.Data);
    }
    if (local_2f8.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.MeshVerts.AllocatorInstance.Data);
    }
    if (local_2f8.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Positions.AllocatorInstance.Data);
    }
    if (local_228.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.MeshIndices.AllocatorInstance.Data);
    }
    if (local_228.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.MeshVerts.AllocatorInstance.Data);
    }
    if (local_228.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Positions.AllocatorInstance.Data);
    }
    if (local_158.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.MeshIndices.AllocatorInstance.Data);
    }
    if (local_158.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.MeshVerts.AllocatorInstance.Data);
    }
    if (local_158.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Positions.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawBox @ 14a089340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMDrawInterface::DrawBox
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FLinearColor *param_3,float param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ForAnyElementType _Src;
  void *pvVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ForAnyElementType *pFVar22;
  undefined1 auStackY_468 [32];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138;
  float local_134;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_108.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_108,param_2,param_1);
  uVar8 = _UNK_150689678;
  uVar7 = ___xmm_3fe00000000000003fe0000000000000;
  uVar5 = __real_3fe0000000000000;
  local_1b8 = *(undefined8 *)&param_3->field0_0x0;
  uStack_1b0 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_198 = local_108.Rotation.XY.m128d_f64[0];
  dStack_190 = local_108.Rotation.XY.m128d_f64[1];
  local_1a8 = param_4;
  local_178 = local_108.Translation.XY.m128d_f64[0];
  dStack_170 = local_108.Translation.XY.m128d_f64[1];
  local_188 = local_108.Rotation.ZW.m128d_f64[0];
  dStack_180 = local_108.Rotation.ZW.m128d_f64[1];
  local_158 = local_108.Scale3D.XY.m128d_f64[0];
  dStack_150 = local_108.Scale3D.XY.m128d_f64[1];
  local_168 = local_108.Translation.ZW.m128d_f64[0];
  dStack_160 = local_108.Translation.ZW.m128d_f64[1];
  local_134 = param_6;
  local_1d8 = 0;
  local_1d0 = 1;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_148 = local_108.Scale3D.ZW.m128d_f64[0];
  dStack_140 = local_108.Scale3D.ZW.m128d_f64[1];
  local_138 = (undefined1)param_5;
  local_130 = (void *)0x0;
  local_128 = 0;
  local_120 = (void *)0x0;
  local_118 = 0;
  local_110 = 0;
  iVar17 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  uVar12 = _UNK_15076c6b8;
  uVar11 = ___xmm_bfe00000000000003fe0000000000000;
  local_1e0 = uVar5;
  local_408 = uVar5;
  iVar18 = iVar17 + 1;
  local_1f0 = uVar7;
  uStack_1e8 = uVar8;
  local_418 = ___xmm_bfe00000000000003fe0000000000000;
  uStack_410 = _UNK_15076c6b8;
  *(undefined8 *)(local_1c8.Data + (longlong)iVar17 * 0x18) = uVar7;
  *(undefined8 *)(local_1c8.Data + (longlong)iVar17 * 0x18 + 8) = uVar8;
  *(undefined8 *)(local_1c8.Data + (longlong)iVar17 * 0x18 + 0x10) = uVar5;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_418) &&
      ((FScriptContainerElement *)&local_418 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_3f0 = uVar5;
  local_400 = uVar11;
  uStack_3f8 = uVar12;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_418;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_410;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_408;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_400) &&
      ((FScriptContainerElement *)&local_400 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  uVar10 = _UNK_150689738;
  uVar9 = ___xmm_bfe0000000000000bfe0000000000000;
  iVar18 = (int)local_1c0 + 1;
  local_3d8 = uVar5;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_400;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_3f8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_3f0;
  local_3e8 = uVar9;
  uStack_3e0 = uVar10;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_3e8) &&
      ((FScriptContainerElement *)&local_3e8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_3c0 = uVar5;
  local_3d0 = uVar9;
  uStack_3c8 = uVar10;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_3e8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_3e0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_3d8;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_3d0) &&
      ((FScriptContainerElement *)&local_3d0 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  uVar14 = _UNK_15202fe88;
  uVar13 = ___xmm_3fe0000000000000bfe0000000000000;
  iVar18 = (int)local_1c0 + 1;
  local_3a8 = uVar5;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_3d0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_3c8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_3c0;
  local_3b8 = uVar13;
  uStack_3b0 = uVar14;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_3b8) &&
      ((FScriptContainerElement *)&local_3b8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_390 = uVar5;
  local_3a0 = uVar13;
  uStack_398 = uVar14;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_3b8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_3b0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_3a8;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_3a0) &&
      ((FScriptContainerElement *)&local_3a0 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_378 = uVar5;
  local_388 = uVar7;
  uStack_380 = uVar8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_3a0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_398;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_390;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_388) &&
      ((FScriptContainerElement *)&local_388 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  uVar6 = __real_bfe0000000000000;
  iVar18 = (int)local_1c0 + 1;
  local_360 = __real_bfe0000000000000;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_388;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_380;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_378;
  local_370 = uVar7;
  uStack_368 = uVar8;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_370) &&
      ((FScriptContainerElement *)&local_370 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_348 = uVar6;
  local_358 = uVar11;
  uStack_350 = uVar12;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_370;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_368;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_360;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_358) &&
      ((FScriptContainerElement *)&local_358 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_330 = uVar6;
  local_340 = uVar11;
  uStack_338 = uVar12;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_358;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_350;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_348;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_340) &&
      ((FScriptContainerElement *)&local_340 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_318 = uVar6;
  local_328 = uVar9;
  uStack_320 = uVar10;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_340;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_338;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_330;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_328) &&
      ((FScriptContainerElement *)&local_328 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_300 = uVar6;
  local_310 = uVar9;
  uStack_308 = uVar10;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_328;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_320;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_318;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_310) &&
      ((FScriptContainerElement *)&local_310 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_2e8 = uVar6;
  local_2f8 = uVar13;
  uStack_2f0 = uVar14;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_310;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_308;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_300;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_2f8) &&
      ((FScriptContainerElement *)&local_2f8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_2d0 = uVar6;
  local_2e0 = uVar13;
  uStack_2d8 = uVar14;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_2f8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_2f0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_2e8;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_2e0) &&
      ((FScriptContainerElement *)&local_2e0 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_2b8 = uVar6;
  local_2c8 = uVar7;
  uStack_2c0 = uVar8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_2e0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_2d8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_2d0;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_2c8) &&
      ((FScriptContainerElement *)&local_2c8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_2a0 = uVar5;
  local_2b0 = uVar7;
  uStack_2a8 = uVar8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_2c8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_2c0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_2b8;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_2b0) &&
      ((FScriptContainerElement *)&local_2b0 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_288 = uVar6;
  local_298 = uVar7;
  uStack_290 = uVar8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_2b0;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_2a8;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_2a0;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_298) &&
      ((FScriptContainerElement *)&local_298 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_270 = uVar5;
  local_280 = uVar11;
  uStack_278 = uVar12;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_298;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_290;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_288;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_280) &&
      ((FScriptContainerElement *)&local_280 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_258 = uVar6;
  local_268 = uVar11;
  uStack_260 = uVar12;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_280;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_278;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_270;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_268) &&
      ((FScriptContainerElement *)&local_268 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_240 = uVar5;
  local_250 = uVar9;
  uStack_248 = uVar10;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_268;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_260;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_258;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_250) &&
      ((FScriptContainerElement *)&local_250 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_228 = uVar6;
  local_238 = uVar9;
  uStack_230 = uVar10;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_250;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_248;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_240;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_238) &&
      ((FScriptContainerElement *)&local_238 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_210 = uVar5;
  local_220 = uVar13;
  uStack_218 = uVar14;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_238;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_230;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_228;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  iVar18 = (int)local_1c0 + 1;
  local_1f8 = uVar6;
  local_208 = uVar13;
  uStack_200 = uVar14;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18) = local_220;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 8) = uStack_218;
  *(undefined8 *)(local_1c8.Data + (longlong)(int)local_1c0 * 0x18 + 0x10) = local_210;
  local_1c0._0_4_ = iVar18;
  if (((local_1c8.Data <= (FScriptContainerElement *)&local_208) &&
      ((FScriptContainerElement *)&local_208 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x18))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_1c0 == local_1c0._4_4_) {
    local_1c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  lVar19 = (longlong)(int)local_1c0;
  local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + 1);
  *(undefined8 *)(local_1c8.Data + lVar19 * 0x18) = local_208;
  *(undefined8 *)(local_1c8.Data + lVar19 * 0x18 + 8) = uStack_200;
  *(undefined8 *)(local_1c8.Data + lVar19 * 0x18 + 0x10) = local_1f8;
  if (((*(undefined8 **)&this->field_0x8 <= &local_1d8) &&
      (&local_1d8 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar18 = *(int *)&this->field_0x10;
  if (iVar18 == *(int *)&this->field_0x14) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src.Data = local_1c8.Data;
  lVar20 = (longlong)iVar18 * 0xd0;
  *(int *)&this->field_0x10 = iVar18 + 1;
  lVar19 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar20 + lVar19) = local_1d8;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0x10 + lVar20);
  *(undefined1 *)(lVar20 + 8 + lVar19) = local_1d0;
  pFVar22->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
  lVar21 = (longlong)(int)local_1c0;
  *(int *)&pFVar22[1].Data = (int)local_1c0;
  if ((int)local_1c0 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_1c0,0,pFVar22,(int)local_1c0,piVar1);
    memcpy(pFVar22->Data,_Src.Data,lVar21 * 0x18);
  }
  pvVar15 = local_130;
  puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar19);
  *puVar2 = local_1b8;
  puVar2[1] = uStack_1b0;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0xa8 + lVar20);
  *(float *)(lVar20 + 0x30 + lVar19) = local_1a8;
  pdVar3 = (double *)(lVar20 + 0x40 + lVar19);
  *pdVar3 = local_198;
  pdVar3[1] = dStack_190;
  pdVar3 = (double *)(lVar20 + 0x50 + lVar19);
  *pdVar3 = local_188;
  pdVar3[1] = dStack_180;
  pdVar3 = (double *)(lVar20 + 0x60 + lVar19);
  *pdVar3 = local_178;
  pdVar3[1] = dStack_170;
  pdVar3 = (double *)(lVar20 + 0x70 + lVar19);
  *pdVar3 = local_168;
  pdVar3[1] = dStack_160;
  pdVar3 = (double *)(lVar20 + 0x80 + lVar19);
  *pdVar3 = local_158;
  pdVar3[1] = dStack_150;
  pdVar3 = (double *)(lVar20 + 0x90 + lVar19);
  *pdVar3 = local_148;
  pdVar3[1] = dStack_140;
  *(undefined1 *)(lVar20 + 0xa0 + lVar19) = local_138;
  piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
  *(float *)(lVar20 + 0xa4 + lVar19) = local_134;
  pFVar22->Data = (FScriptContainerElement *)0x0;
  lVar21 = (longlong)(int)local_128;
  *(int *)&pFVar22[1].Data = (int)local_128;
  if ((int)local_128 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_128,0,pFVar22,(int)local_128,piVar1);
    memcpy(pFVar22->Data,pvVar15,lVar21 * 0x58);
  }
  pvVar15 = local_120;
  pFVar22 = (ForAnyElementType *)(lVar19 + 0xb8 + lVar20);
  pFVar22->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
  lVar21 = (longlong)(int)local_118;
  *(int *)&pFVar22[1].Data = (int)local_118;
  if ((int)local_118 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_118,0,pFVar22,(int)local_118,piVar1);
    memcpy(pFVar22->Data,pvVar15,lVar21 << 2);
  }
  *(undefined8 *)(lVar20 + 200 + lVar19) = local_110;
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if (local_130 != (void *)0x0) {
    FMemory::Free(local_130);
  }
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  return;
}

// DrawCapsule @ 14a08ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMDrawInterface::DrawCapsule
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,float param_4,FLinearColor *param_5,float param_6,int param_7,
          ESceneDepthPriorityGroup param_8,float param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined1 auStackY_2b8 [32];
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  double local_238;
  TVector<double>_u_0 local_228;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar89 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar90 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar89;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar90;
  local_238 = (double)param_4 * __real_3fe0000000000000;
  dVar11 = (double)(float)((uint)param_4 ^ __xmm_80000000800000008000000080000000) *
           __real_3fe0000000000000;
  uVar69 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar70 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar67 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar68 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Rotation.XY.m128d_f64[0] = ___xmm_3feffffffffffff70000000000000000;
  local_148.Rotation.XY.m128d_f64[1] = _UNK_152072278;
  local_148.Rotation.ZW.m128d_f64[0] = ___xmm_be6777a5cf72cecc0000000000000000;
  local_148.Rotation.ZW.m128d_f64[1] = _UNK_152072288;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[0] = 0.0;
  local_1a8.Translation.XY.m128d_f64[1] = 0.0;
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar69;
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar70;
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar67;
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar68;
  local_148.Translation.XY.m128d_f64[0] = 0.0;
  local_148.Translation.XY.m128d_f64[1] = 0.0;
  local_208.Rotation.XY.m128d_f64[1]._0_4_ = uVar89;
  local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_208.Rotation.XY.m128d_f64[1]._4_4_ = uVar90;
  local_208.Scale3D.XY.m128d_f64[1]._0_4_ = uVar69;
  local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_208.Scale3D.XY.m128d_f64[1]._4_4_ = uVar70;
  local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar67;
  local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar68;
  local_1a8.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
  local_1a8.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
  local_1a8.Translation.ZW.m128d_f64[0] = local_238;
  local_148.Translation.ZW.m128d_f64[0] = dVar11;
  UE::Math::TTransform<double>::Multiply(&local_208,&local_1a8,param_2);
  fVar13 = __real_bf800000;
  DrawHemisphere(this,param_1,&local_208,param_3,param_5,param_6,param_7,SDPG_Foreground,
                 __real_bf800000);
  local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  UE::Math::TTransform<double>::Multiply(&local_208,&local_148,param_2);
  DrawHemisphere(this,param_1,&local_208,param_3,param_5,param_6,param_7,SDPG_Foreground,fVar13);
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar35 = auVar56._0_8_;
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar10 = (double)param_3;
  dVar7 = dVar11 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * dVar10;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar67 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar17,auVar56,2);
  auVar71._8_4_ = SUB84(dVar3,0);
  auVar71._0_8_ = dVar2;
  auVar71._12_4_ = uVar67;
  auVar72._0_8_ = auVar71._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar2;
  auVar72._8_8_ = dVar7 * auVar17._8_8_ - dVar35 * dVar3;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar67;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17 = blendpd(auVar16,auVar17,2);
  auVar18._0_8_ = auVar17._0_8_ * dVar35 - auVar40._0_8_ * dVar7;
  auVar18._8_8_ = auVar17._8_8_ * auVar56._8_8_ - auVar40._8_8_ * dVar8;
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar72,auVar18,2);
  dVar8 = auVar72._8_8_ + auVar72._8_8_;
  dVar1 = auVar18._0_8_ + auVar18._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar73._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar73._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  auVar54._8_4_ = SUB84(dVar1,0);
  auVar54._0_8_ = dVar8;
  auVar54._12_4_ = uVar67;
  auVar42._8_4_ = SUB84(dVar1,0);
  auVar42._0_8_ = dVar8;
  auVar42._12_4_ = uVar67;
  auVar40 = blendpd(auVar42,auVar73,2);
  auVar55._0_8_ = auVar54._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
  auVar55._8_8_ = auVar73._0_8_ * auVar17._8_8_ - dVar35 * dVar1;
  auVar19._8_4_ = SUB84(auVar55._8_8_,0);
  auVar19._0_8_ = auVar55._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
  auVar17 = blendpd(auVar17,auVar56,2);
  auVar43._0_8_ = auVar40._0_8_ * dVar35 - auVar17._0_8_ * auVar73._0_8_;
  auVar43._8_8_ = auVar40._8_8_ * auVar56._8_8_ - auVar17._8_8_ * auVar73._8_8_;
  auVar56 = blendpd(auVar55,auVar43,2);
  dVar1 = dVar1 * dVar4 + dVar3 + auVar43._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_268._s_0.Z =
       auVar73._0_8_ * dVar4 + dVar7 + auVar56._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_268._8_4_ = SUB84(dVar1,0);
  local_268._s_0.X = dVar8 * dVar4 + dVar2 + auVar19._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_268._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar35 = auVar56._0_8_;
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * dVar10;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar67 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar7 = local_238 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_228._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar74._8_4_ = SUB84(dVar3,0);
  auVar74._0_8_ = dVar2;
  auVar74._12_4_ = uVar67;
  auVar41 = blendpd(local_228._0_16_,auVar56,2);
  auVar75._0_8_ = auVar74._8_8_ * local_228._0_8_ - local_228._8_8_ * dVar2;
  auVar75._8_8_ = dVar7 * local_228._8_8_ - dVar35 * dVar3;
  auVar20._8_4_ = SUB84(dVar3,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar67;
  auVar40._8_4_ = SUB84(dVar8,0);
  auVar40._0_8_ = dVar7;
  auVar40._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17 = blendpd(auVar20,auVar40,2);
  auVar21._0_8_ = auVar17._0_8_ * dVar35 - auVar41._0_8_ * dVar7;
  auVar21._8_8_ = auVar17._8_8_ * auVar56._8_8_ - auVar41._8_8_ * dVar8;
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar75,auVar21,2);
  dVar8 = auVar75._8_8_ + auVar75._8_8_;
  dVar1 = auVar21._0_8_ + auVar21._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar76._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar76._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  auVar57._8_4_ = SUB84(dVar1,0);
  auVar57._0_8_ = dVar8;
  auVar57._12_4_ = uVar67;
  auVar44._8_4_ = SUB84(dVar1,0);
  auVar44._0_8_ = dVar8;
  auVar44._12_4_ = uVar67;
  auVar40 = blendpd(auVar44,auVar76,2);
  auVar58._0_8_ = auVar57._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
  auVar58._8_8_ = auVar76._0_8_ * auVar17._8_8_ - dVar35 * dVar1;
  auVar22._8_4_ = SUB84(auVar58._8_8_,0);
  auVar22._0_8_ = auVar58._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  auVar17 = blendpd(auVar17,auVar56,2);
  auVar45._0_8_ = auVar40._0_8_ * dVar35 - auVar17._0_8_ * auVar76._0_8_;
  auVar45._8_8_ = auVar40._8_8_ * auVar56._8_8_ - auVar17._8_8_ * auVar76._8_8_;
  auVar56 = blendpd(auVar58,auVar45,2);
  dVar1 = dVar1 * dVar4 + dVar3 + auVar45._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_250._s_0.Z =
       auVar76._0_8_ * dVar4 + dVar7 + auVar56._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_250._8_4_ = SUB84(dVar1,0);
  local_250._0_8_ = dVar8 * dVar4 + dVar2 + auVar22._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_250._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  DrawLine(this,param_1,(TVector<double> *)&local_250._s_0,(TVector<double> *)&local_268._s_0,
           param_5,param_6,SDPG_Foreground,fVar13);
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar39 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar35 = dVar11 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar9 = (double)(float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
  dVar2 = dVar9 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar67 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar40 = blendpd(auVar56,auVar17,2);
  auVar77._8_4_ = SUB84(dVar7,0);
  auVar77._0_8_ = dVar2;
  auVar77._12_4_ = uVar67;
  dVar36 = auVar17._0_8_;
  dVar38 = auVar17._8_8_;
  auVar78._0_8_ = auVar77._8_8_ * auVar56._0_8_ - auVar56._8_8_ * dVar2;
  auVar78._8_8_ = dVar35 * auVar56._8_8_ - dVar36 * dVar7;
  auVar23._8_4_ = SUB84(dVar7,0);
  auVar23._0_8_ = dVar2;
  auVar23._12_4_ = uVar67;
  auVar56._8_4_ = SUB84(dVar8,0);
  auVar56._0_8_ = dVar35;
  auVar56._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar56 = blendpd(auVar23,auVar56,2);
  auVar24._0_8_ = auVar56._0_8_ * dVar36 - auVar40._0_8_ * dVar35;
  auVar24._8_8_ = auVar56._8_8_ * dVar38 - auVar40._8_8_ * dVar8;
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar78,auVar24,2);
  auVar79._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar79._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  dVar8 = auVar78._8_8_ + auVar78._8_8_;
  dVar1 = auVar24._0_8_ + auVar24._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar59._8_4_ = SUB84(dVar1,0);
  auVar59._0_8_ = dVar8;
  auVar59._12_4_ = uVar67;
  auVar46._8_4_ = SUB84(dVar1,0);
  auVar46._0_8_ = dVar8;
  auVar46._12_4_ = uVar67;
  auVar40 = blendpd(auVar46,auVar79,2);
  auVar60._0_8_ = auVar59._8_8_ * auVar56._0_8_ - auVar56._8_8_ * dVar8;
  auVar60._8_8_ = auVar79._0_8_ * auVar56._8_8_ - dVar36 * dVar1;
  auVar56 = blendpd(auVar56,auVar17,2);
  auVar25._8_4_ = SUB84(auVar60._8_8_,0);
  auVar25._0_8_ = auVar60._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  dVar3 = dVar9 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1] * 0.0;
  uVar67 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar47._0_8_ = auVar40._0_8_ * dVar36 - auVar56._0_8_ * auVar79._0_8_;
  auVar47._8_8_ = auVar40._8_8_ * dVar38 - auVar56._8_8_ * auVar79._8_8_;
  dVar1 = dVar1 * dVar39 + dVar7 + auVar47._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_228._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar7 = local_238 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar37 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar56 = blendpd(auVar60,auVar47,2);
  local_250._8_4_ = SUB84(dVar1,0);
  local_250._0_8_ = dVar8 * dVar39 + dVar2 + auVar25._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_250._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_250._s_0.Z =
       auVar79._0_8_ * dVar39 + dVar35 + auVar56._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  auVar40 = blendpd(local_228._0_16_,auVar17,2);
  auVar80._8_4_ = SUB84(dVar4,0);
  auVar80._0_8_ = dVar3;
  auVar80._12_4_ = uVar67;
  auVar81._0_8_ = auVar80._8_8_ * local_228._0_8_ - local_228._8_8_ * dVar3;
  auVar81._8_8_ = dVar7 * local_228._8_8_ - dVar36 * dVar4;
  auVar26._8_4_ = SUB84(dVar4,0);
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = uVar67;
  auVar41._8_4_ = SUB84(dVar37,0);
  auVar41._0_8_ = dVar7;
  auVar41._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  auVar56 = blendpd(auVar26,auVar41,2);
  auVar27._0_8_ = auVar56._0_8_ * dVar36 - auVar40._0_8_ * dVar7;
  auVar27._8_8_ = auVar56._8_8_ * dVar38 - auVar40._8_8_ * dVar37;
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar81,auVar27,2);
  dVar8 = auVar81._8_8_ + auVar81._8_8_;
  dVar1 = auVar27._0_8_ + auVar27._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar82._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar82._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  auVar61._8_4_ = SUB84(dVar1,0);
  auVar61._0_8_ = dVar8;
  auVar61._12_4_ = uVar67;
  auVar48._8_4_ = SUB84(dVar1,0);
  auVar48._0_8_ = dVar8;
  auVar48._12_4_ = uVar67;
  auVar40 = blendpd(auVar48,auVar82,2);
  auVar62._0_8_ = auVar61._8_8_ * auVar56._0_8_ - auVar56._8_8_ * dVar8;
  auVar62._8_8_ = auVar82._0_8_ * auVar56._8_8_ - dVar36 * dVar1;
  auVar28._8_4_ = SUB84(auVar62._8_8_,0);
  auVar28._0_8_ = auVar62._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar56 = blendpd(auVar56,auVar17,2);
  auVar49._0_8_ = auVar40._0_8_ * dVar36 - auVar56._0_8_ * auVar82._0_8_;
  auVar49._8_8_ = auVar40._8_8_ * dVar38 - auVar56._8_8_ * auVar82._8_8_;
  auVar56 = blendpd(auVar62,auVar49,2);
  dVar1 = dVar1 * dVar38 + dVar4 + auVar49._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_268._s_0.Z =
       auVar82._0_8_ * dVar38 + dVar7 + auVar56._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_268._8_4_ = SUB84(dVar1,0);
  local_268._s_0.X = dVar8 * dVar38 + dVar3 + auVar28._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_268._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  DrawLine(this,param_1,(TVector<double> *)&local_268._s_0,(TVector<double> *)&local_250._s_0,
           param_5,param_6,SDPG_Foreground,fVar13);
  dVar35 = local_238;
  auVar56 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar7 = dVar11 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar40 = blendpd(auVar17,auVar56,2);
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar3 = dVar10 * (param_2->Scale3D).XY.m128d_f64[1];
  uVar67 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar83._8_4_ = SUB84(dVar3,0);
  auVar83._0_8_ = dVar2;
  auVar83._12_4_ = uVar67;
  dVar37 = auVar56._0_8_;
  dVar39 = auVar56._8_8_;
  auVar84._0_8_ = auVar83._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar2;
  auVar84._8_8_ = dVar7 * auVar17._8_8_ - dVar37 * dVar3;
  auVar29._8_4_ = SUB84(dVar3,0);
  auVar29._0_8_ = dVar2;
  auVar29._12_4_ = uVar67;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17 = blendpd(auVar29,auVar5,2);
  auVar30._0_8_ = auVar17._0_8_ * dVar37 - auVar40._0_8_ * dVar7;
  auVar30._8_8_ = auVar17._8_8_ * dVar39 - auVar40._8_8_ * dVar8;
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar8 = auVar84._8_8_ + auVar84._8_8_;
  dVar1 = auVar30._0_8_ + auVar30._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar40 = blendpd(auVar84,auVar30,2);
  auVar63._8_4_ = SUB84(dVar1,0);
  auVar63._0_8_ = dVar8;
  auVar63._12_4_ = uVar67;
  auVar50._8_4_ = SUB84(dVar1,0);
  auVar50._0_8_ = dVar8;
  auVar50._12_4_ = uVar67;
  auVar85._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar85._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  auVar40 = blendpd(auVar50,auVar85,2);
  auVar64._0_8_ = auVar63._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
  auVar64._8_8_ = auVar85._0_8_ * auVar17._8_8_ - dVar37 * dVar1;
  auVar17 = blendpd(auVar17,auVar56,2);
  auVar31._8_4_ = SUB84(auVar64._8_8_,0);
  auVar31._0_8_ = auVar64._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  auVar51._0_8_ = auVar40._0_8_ * dVar37 - auVar17._0_8_ * auVar85._0_8_;
  auVar51._8_8_ = auVar40._8_8_ * dVar39 - auVar17._8_8_ * auVar85._8_8_;
  dVar1 = dVar1 * dVar4 + dVar3 + auVar51._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_250._8_4_ = SUB84(dVar1,0);
  local_250._0_8_ = dVar8 * dVar4 + dVar2 + auVar31._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_250._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_228._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar17 = blendpd(auVar64,auVar51,2);
  auVar40 = blendpd(local_228._0_16_,auVar56,2);
  local_250._s_0.Z =
       auVar85._0_8_ * dVar4 + dVar7 + auVar17._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * 0.0;
  dVar10 = dVar10 * (param_2->Scale3D).XY.m128d_f64[1];
  uVar67 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar3 = local_238 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar86._8_4_ = SUB84(dVar10,0);
  auVar86._0_8_ = dVar2;
  auVar86._12_4_ = uVar67;
  auVar87._0_8_ = auVar86._8_8_ * local_228._0_8_ - local_228._8_8_ * dVar2;
  auVar87._8_8_ = dVar3 * local_228._8_8_ - dVar37 * dVar10;
  auVar32._8_4_ = SUB84(dVar10,0);
  auVar32._0_8_ = dVar2;
  auVar32._12_4_ = uVar67;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17 = blendpd(auVar32,auVar6,2);
  auVar33._0_8_ = auVar17._0_8_ * dVar37 - auVar40._0_8_ * dVar3;
  auVar33._8_8_ = auVar17._8_8_ * dVar39 - auVar40._8_8_ * dVar8;
  auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar87,auVar33,2);
  dVar8 = auVar87._8_8_ + auVar87._8_8_;
  dVar1 = auVar33._0_8_ + auVar33._0_8_;
  uVar67 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar88._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar88._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  auVar65._8_4_ = SUB84(dVar1,0);
  auVar65._0_8_ = dVar8;
  auVar65._12_4_ = uVar67;
  auVar52._8_4_ = SUB84(dVar1,0);
  auVar52._0_8_ = dVar8;
  auVar52._12_4_ = uVar67;
  auVar40 = blendpd(auVar52,auVar88,2);
  auVar66._0_8_ = auVar65._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
  auVar66._8_8_ = auVar88._0_8_ * auVar17._8_8_ - dVar37 * dVar1;
  auVar34._8_4_ = SUB84(auVar66._8_8_,0);
  auVar34._0_8_ = auVar66._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar56 = blendpd(auVar17,auVar56,2);
  auVar53._0_8_ = auVar40._0_8_ * dVar37 - auVar56._0_8_ * auVar88._0_8_;
  auVar53._8_8_ = auVar40._8_8_ * dVar39 - auVar56._8_8_ * auVar88._8_8_;
  auVar56 = blendpd(auVar66,auVar53,2);
  dVar1 = dVar1 * dVar39 + dVar10 + auVar53._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_268._s_0.Z =
       auVar88._0_8_ * dVar39 + dVar3 + auVar56._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_268._8_4_ = SUB84(dVar1,0);
  local_268._s_0.X = dVar8 * dVar39 + dVar2 + auVar34._8_8_ + (param_2->Translation).XY.m128d_f64[0]
  ;
  local_268._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  DrawLine(this,param_1,(TVector<double> *)&local_268._s_0,(TVector<double> *)&local_250._s_0,
           param_5,param_6,SDPG_Foreground,fVar13);
  local_268._s_0.X = 0.0;
  local_268._s_0.Z = dVar11;
  local_268._s_0.Y = dVar9;
  pTVar14 = UE::Math::TTransform<double>::TransformPosition
                      (param_2,(TVector<double> *)&local_250._s_0,(TVector<double> *)&local_268._s_0
                      );
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar9;
  local_268._0_16_ = auVar12 << 0x40;
  local_268._s_0.Z = dVar35;
  pTVar15 = UE::Math::TTransform<double>::TransformPosition
                      (param_2,(TVector<double> *)&local_228._s_0,(TVector<double> *)&local_268._s_0
                      );
  DrawLine(this,param_1,pTVar15,pTVar14,param_5,param_6,SDPG_Foreground,fVar13);
  return;
}

// DrawCircle @ 14a08b650

void __thiscall
FRigVMDrawInterface::DrawCircle
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,FLinearColor *param_4,float param_5,int param_6,
          ESceneDepthPriorityGroup param_7,float param_8)

{
  DrawArc(this,param_1,param_2,param_3,0.0,__real_40c90fdb,param_4,param_5,param_6,SDPG_Foreground,
          __real_bf800000);
  return;
}

// DrawCone @ 14a08b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawCone
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,float param_4,uint param_5,bool param_6,FLinearColor *param_7,
          FMaterialRenderProxy *param_8,float param_9,ESceneDepthPriorityGroup param_10,
          float param_11)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FRigVMDrawInterface *this_00;
  TTransform<double> *pTVar16;
  FLinearColor *pFVar17;
  void *_Src;
  bool bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ForAnyElementType *pFVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_318 [32];
  ForAnyElementType local_2c8;
  int local_2c0 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_2a8;
  FRigVMDrawInterface *local_298;
  TTransform<double> *local_290;
  FLinearColor *local_288;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250 [2];
  undefined8 local_218;
  undefined1 local_210;
  void *local_208;
  undefined8 local_200;
  FLinearColor_u_0 local_1f8;
  undefined4 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178;
  float local_174;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  FMaterialRenderProxy *local_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  iVar20 = 0;
  local_288 = param_7;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_298 = this;
  local_290 = param_1;
  BuildConeVerts(param_3,param_4,__real_3f800000,0.0,param_5,&local_2a8,&local_2b8);
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_148.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_148,param_2,param_1);
  FVar14.Data = local_2a8.AllocatorInstance.Data;
  fVar13 = __real_bf800000;
  local_218 = 0;
  local_1f8 = FLinearColor::Red.field0_0x0;
  local_1d8 = local_148.Rotation.XY.m128d_f64[0];
  dStack_1d0 = local_148.Rotation.XY.m128d_f64[1];
  local_1c8 = local_148.Rotation.ZW.m128d_f64[0];
  dStack_1c0 = local_148.Rotation.ZW.m128d_f64[1];
  local_1b8 = local_148.Translation.XY.m128d_f64[0];
  dStack_1b0 = local_148.Translation.XY.m128d_f64[1];
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1e8 = 0;
  local_178 = 1;
  local_174 = -1.0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_164 = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  local_150 = (FMaterialRenderProxy *)0x0;
  local_210 = 3;
  lVar21 = (longlong)local_2a8.ArrayNum;
  local_1a8 = local_148.Translation.ZW.m128d_f64[0];
  dStack_1a0 = local_148.Translation.ZW.m128d_f64[1];
  local_188 = local_148.Scale3D.ZW.m128d_f64[0];
  dStack_180 = local_148.Scale3D.ZW.m128d_f64[1];
  local_198 = local_148.Scale3D.XY.m128d_f64[0];
  dStack_190 = local_148.Scale3D.XY.m128d_f64[1];
  local_168 = local_2a8.ArrayNum;
  iVar19 = iVar20;
  if (local_2a8.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,local_2a8.ArrayNum,0,&local_170,local_2a8.ArrayNum,&local_164);
    memcpy(local_170.Data,FVar14.Data,lVar21 * 0x58);
    iVar19 = local_158._4_4_;
  }
  FVar14.Data = local_2b8.AllocatorInstance.Data;
  iVar15 = local_2b8.ArrayNum;
  lVar21 = (longlong)local_2b8.ArrayNum;
  local_158 = CONCAT44(local_158._4_4_,local_2b8.ArrayNum);
  if ((local_2b8.ArrayNum == 0) && (iVar19 == 0)) {
    local_158 = local_2b8._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_2b8.ArrayNum,iVar19,&local_160,local_2b8.ArrayNum,
               (int *)((longlong)&local_158 + 4));
    if (iVar15 != 0) {
      memcpy(local_160.Data,FVar14.Data,lVar21 << 2);
    }
  }
  local_178 = (undefined1)param_10;
  local_174 = param_11;
  local_150 = param_8;
  if ((*(undefined8 **)&this->field_0x8 <= &local_218) &&
     (&local_218 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar19 = *(int *)&this->field_0x10;
  if (iVar19 == *(int *)&this->field_0x14) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src = local_208;
  lVar21 = *(longlong *)&this->field_0x8;
  *(int *)&this->field_0x10 = iVar19 + 1;
  lVar22 = (longlong)iVar19 * 0xd0;
  pFVar24 = (ForAnyElementType *)(lVar21 + 0x10 + lVar22);
  *(undefined8 *)(lVar22 + lVar21) = local_218;
  *(undefined1 *)(lVar22 + 8 + lVar21) = local_210;
  piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
  pFVar24->Data = (FScriptContainerElement *)0x0;
  lVar23 = (longlong)(int)local_200;
  *(int *)&pFVar24[1].Data = (int)local_200;
  if ((int)local_200 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_200,0,pFVar24,(int)local_200,piVar1);
    memcpy(pFVar24->Data,_Src,lVar23 * 0x18);
  }
  FVar14.Data = local_170.Data;
  puVar2 = (undefined8 *)(lVar22 + 0x20 + lVar21);
  *puVar2 = local_1f8._0_8_;
  puVar2[1] = local_1f8._8_8_;
  pFVar24 = (ForAnyElementType *)(lVar21 + 0xa8 + lVar22);
  *(undefined4 *)(lVar22 + 0x30 + lVar21) = local_1e8;
  pdVar3 = (double *)(lVar22 + 0x40 + lVar21);
  *pdVar3 = local_1d8;
  pdVar3[1] = dStack_1d0;
  pdVar3 = (double *)(lVar22 + 0x50 + lVar21);
  *pdVar3 = local_1c8;
  pdVar3[1] = dStack_1c0;
  pdVar3 = (double *)(lVar22 + 0x60 + lVar21);
  *pdVar3 = local_1b8;
  pdVar3[1] = dStack_1b0;
  pdVar3 = (double *)(lVar22 + 0x70 + lVar21);
  *pdVar3 = local_1a8;
  pdVar3[1] = dStack_1a0;
  pdVar3 = (double *)(lVar22 + 0x80 + lVar21);
  *pdVar3 = local_198;
  pdVar3[1] = dStack_190;
  pdVar3 = (double *)(lVar22 + 0x90 + lVar21);
  *pdVar3 = local_188;
  pdVar3[1] = dStack_180;
  *(undefined1 *)(lVar22 + 0xa0 + lVar21) = local_178;
  piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
  *(float *)(lVar22 + 0xa4 + lVar21) = local_174;
  pFVar24->Data = (FScriptContainerElement *)0x0;
  lVar23 = (longlong)local_168;
  *(int *)&pFVar24[1].Data = local_168;
  if (local_168 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,local_168,0,pFVar24,local_168,piVar1);
    memcpy(pFVar24->Data,FVar14.Data,lVar23 * 0x58);
  }
  FVar14.Data = local_160.Data;
  pFVar24 = (ForAnyElementType *)(lVar21 + 0xb8 + lVar22);
  pFVar24->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
  lVar23 = (longlong)(int)local_158;
  *(int *)&pFVar24[1].Data = (int)local_158;
  if ((int)local_158 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_158,0,pFVar24,(int)local_158,piVar1);
    memcpy(pFVar24->Data,FVar14.Data,lVar23 << 2);
  }
  *(FMaterialRenderProxy **)(lVar22 + 200 + lVar21) = local_150;
  if (param_6) {
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0[0] = 0;
    local_2c0[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_5,&local_2c8,local_2c0,local_2c0 + 1);
    pFVar17 = local_288;
    pTVar16 = local_290;
    this_00 = local_298;
    fVar12 = __real_3fc90fdb;
    do {
      CalcConeVert((TVector<double> *)&local_280._s_0,param_3,param_4,(float)iVar20 * fVar12);
      auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      auVar27 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar9 = local_280._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * local_280._s_0.X;
      dVar8 = (param_2->Scale3D).XY.m128d_f64[1] * local_280._s_0.Y;
      uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar28 = blendpd(auVar25,auVar33,2);
      auVar35._8_4_ = SUB84(dVar8,0);
      auVar35._0_8_ = dVar7;
      auVar35._12_4_ = uVar34;
      dVar6 = auVar33._0_8_;
      auVar36._0_8_ = auVar35._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar7;
      auVar36._8_8_ = dVar9 * auVar25._8_8_ - dVar6 * dVar8;
      auVar30._8_4_ = SUB84(dVar8,0);
      auVar30._0_8_ = dVar7;
      auVar30._12_4_ = uVar34;
      auVar25._8_4_ = SUB84(dVar10,0);
      auVar25._0_8_ = dVar9;
      auVar25._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar25 = blendpd(auVar30,auVar25,2);
      auVar26._0_8_ = auVar25._0_8_ * dVar6 - auVar28._0_8_ * dVar9;
      auVar26._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar28._8_8_ * dVar10;
      auVar25 = blendpd(auVar36,auVar26,2);
      dVar10 = auVar36._8_8_ + auVar36._8_8_;
      dVar5 = auVar26._0_8_ + auVar26._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar37._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar37._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar31._8_4_ = SUB84(dVar5,0);
      auVar31._0_8_ = dVar10;
      auVar31._12_4_ = uVar34;
      auVar28._8_4_ = SUB84(dVar5,0);
      auVar28._0_8_ = dVar10;
      auVar28._12_4_ = uVar34;
      auVar25 = blendpd(auVar28,auVar37,2);
      auVar32._0_8_ = auVar31._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
      auVar32._8_8_ = auVar37._0_8_ * auVar27._8_8_ - dVar6 * dVar5;
      auVar30 = blendpd(auVar27,auVar33,2);
      local_250[0]._16_8_ = (param_2->Translation).ZW.m128d_f64[0];
      auVar27._8_4_ = SUB84(auVar32._8_8_,0);
      auVar27._0_8_ = auVar32._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
      auVar29._0_8_ = auVar25._0_8_ * dVar6 - auVar30._0_8_ * auVar37._0_8_;
      auVar29._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar30._8_8_ * auVar37._8_8_;
      local_250[0]._0_8_ = (param_2->Translation).XY.m128d_f64[0];
      local_250[0]._8_8_ = (param_2->Translation).XY.m128d_f64[1];
      dVar6 = dVar5 * dVar11 + dVar8 + auVar29._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      auVar33 = blendpd(auVar32,auVar29,2);
      local_268._8_4_ = SUB84(dVar6,0);
      local_268._0_8_ =
           dVar10 * dVar11 + dVar7 + auVar27._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_268._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_268._s_0.Z =
           auVar37._0_8_ * dVar11 + dVar9 + auVar33._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
      DrawLine(this_00,pTVar16,(TVector<double> *)&local_250[0]._s_0,
               (TVector<double> *)&local_268._s_0,pFVar17,param_9,SDPG_Foreground,fVar13);
      iVar20 = iVar20 + 1;
    } while (iVar20 < 4);
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  return;
}

// DrawHemisphere @ 14a08bee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMDrawInterface::DrawHemisphere
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,FLinearColor *param_4,float param_5,int param_6,
          ESceneDepthPriorityGroup param_7,float param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_208 [32];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  fVar1 = __real_bf800000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_148.Rotation.XY.m128d_f64[0] = ___xmm_00000000000000003fe6a09e6ecb41fe;
  local_148.Rotation.XY.m128d_f64[1] = _UNK_152072248;
  uVar4 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  uVar6 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar2 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar3 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_e8.Rotation.XY.m128d_f64[0] = ___xmm_bfe6a09e6ecb41fe0000000000000000;
  local_e8.Rotation.XY.m128d_f64[1] = _UNK_152072298;
  local_148.Translation.ZW.m128d_f64[1]._0_4_ = uVar6;
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1]._4_4_ = uVar7;
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar6;
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar7;
  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar2;
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar3;
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar2;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar3;
  local_148.Rotation.ZW.m128d_f64[0] = ___xmm_3fe6a09e5e3335980000000000000000;
  local_148.Rotation.ZW.m128d_f64[1] = _UNK_152072258;
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ = uVar4;
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar5;
  local_e8.Rotation.ZW.m128d_f64[0] = ___xmm_3fe6a09e5e3335980000000000000000;
  local_e8.Rotation.ZW.m128d_f64[1] = _UNK_152072258;
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar4;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar5;
  local_e8.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
  DrawArc(this,param_1,param_2,param_3,0.0,__real_40c90fdb,param_4,param_5,param_6,SDPG_Foreground,
          __real_bf800000);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,param_2);
  DrawArc(this,param_1,&local_1a8,param_3,0.0,__real_40490fdb,param_4,param_5,param_6,
          SDPG_Foreground,fVar1);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_e8,param_2);
  DrawArc(this,param_1,&local_1a8,param_3,__real_bfc90fdb,__real_3fc90fdb,param_4,param_5,param_6,
          SDPG_Foreground,fVar1);
  return;
}

// DrawInstruction @ 14a08c180

void __thiscall
FRigVMDrawInterface::DrawInstruction(FRigVMDrawInterface *this,FRigVMDrawInstruction *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  puVar1 = &this->field_0x8;
  if ((*(FRigVMDrawInstruction **)puVar1 <= param_1) &&
     (param_1 < *(FRigVMDrawInstruction **)puVar1 + *(int *)&this->field_0x14)) {
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
  iVar4 = *(int *)&this->field_0x10;
  if (iVar4 == *(int *)&this->field_0x14) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)puVar1,(int *)&this->field_0x14);
  }
  *(int *)&this->field_0x10 = iVar4 + 1;
  FRigVMDrawInstruction::FRigVMDrawInstruction
            ((FRigVMDrawInstruction *)(*(longlong *)puVar1 + (longlong)iVar4 * 0xd0),param_1);
  return;
}

// DrawLine @ 14a08c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawLine
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,
          ESceneDepthPriorityGroup param_6,float param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  ForAnyElementType _Src;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  undefined1 auStackY_168 [32];
  undefined8 local_118;
  undefined1 local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78;
  float local_74;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e8 = param_5;
  local_c8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_c0 = (param_1->Rotation).ZW.m128d_f64[1];
  local_f8 = *(undefined8 *)&param_4->field0_0x0;
  uStack_f0 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_a8 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_a0 = (param_1->Translation).ZW.m128d_f64[1];
  local_d8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_d0 = (param_1->Rotation).XY.m128d_f64[1];
  local_b8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_b0 = (param_1->Translation).XY.m128d_f64[1];
  local_98 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_1->Scale3D).XY.m128d_f64[1];
  local_88 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_80 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_74 = param_7;
  local_118 = 0;
  local_110 = 1;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_78 = (undefined1)param_6;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_108,(int *)((longlong)&local_100 + 4));
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  iVar9 = iVar8 + 1;
  *(double *)(local_108.Data + (longlong)iVar8 * 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(local_108.Data + (longlong)iVar8 * 0x18 + 8) = dVar5;
  *(double *)(local_108.Data + (longlong)iVar8 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  local_100._0_4_ = iVar9;
  if (((local_108.Data <= param_3) && (param_3 < local_108.Data + (longlong)local_100._4_4_ * 0x18))
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
  if ((int)local_100 == local_100._4_4_) {
    local_100._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_108,(int *)((longlong)&local_100 + 4));
  }
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  lVar10 = (longlong)(int)local_100;
  local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
  *(double *)(local_108.Data + lVar10 * 0x18) = (param_3->field0_0x0)._s_0.X;
  *(double *)(local_108.Data + lVar10 * 0x18 + 8) = dVar5;
  *(double *)(local_108.Data + lVar10 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  if (((*(undefined8 **)&this->field_0x8 <= &local_118) &&
      (&local_118 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a))
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
  iVar9 = *(int *)&this->field_0x10;
  if (iVar9 == *(int *)&this->field_0x14) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src.Data = local_108.Data;
  lVar10 = *(longlong *)&this->field_0x8;
  *(int *)&this->field_0x10 = iVar9 + 1;
  lVar11 = (longlong)iVar9 * 0xd0;
  pFVar13 = (ForAnyElementType *)(lVar10 + 0x10 + lVar11);
  *(undefined8 *)(lVar11 + lVar10) = local_118;
  *(undefined1 *)(lVar11 + 8 + lVar10) = local_110;
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  pFVar13->Data = (FScriptContainerElement *)0x0;
  lVar12 = (longlong)(int)local_100;
  *(int *)&pFVar13[1].Data = (int)local_100;
  if ((int)local_100 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_100,0,pFVar13,(int)local_100,piVar1);
    memcpy(pFVar13->Data,_Src.Data,lVar12 * 0x18);
  }
  pvVar6 = local_70;
  puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar2 = local_f8;
  puVar2[1] = uStack_f0;
  pFVar13 = (ForAnyElementType *)(lVar10 + 0xa8 + lVar11);
  *(float *)(lVar11 + 0x30 + lVar10) = local_e8;
  pdVar3 = (double *)(lVar11 + 0x40 + lVar10);
  *pdVar3 = local_d8;
  pdVar3[1] = dStack_d0;
  pdVar3 = (double *)(lVar11 + 0x50 + lVar10);
  *pdVar3 = local_c8;
  pdVar3[1] = dStack_c0;
  pdVar3 = (double *)(lVar11 + 0x60 + lVar10);
  *pdVar3 = local_b8;
  pdVar3[1] = dStack_b0;
  pdVar3 = (double *)(lVar11 + 0x70 + lVar10);
  *pdVar3 = local_a8;
  pdVar3[1] = dStack_a0;
  pdVar3 = (double *)(lVar11 + 0x80 + lVar10);
  *pdVar3 = local_98;
  pdVar3[1] = dStack_90;
  pdVar3 = (double *)(lVar11 + 0x90 + lVar10);
  *pdVar3 = local_88;
  pdVar3[1] = dStack_80;
  *(undefined1 *)(lVar11 + 0xa0 + lVar10) = local_78;
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  *(float *)(lVar11 + 0xa4 + lVar10) = local_74;
  pFVar13->Data = (FScriptContainerElement *)0x0;
  lVar12 = (longlong)(int)local_68;
  *(int *)&pFVar13[1].Data = (int)local_68;
  if ((int)local_68 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_68,0,pFVar13,(int)local_68,piVar1);
    memcpy(pFVar13->Data,pvVar6,lVar12 * 0x58);
  }
  pvVar6 = local_60;
  pFVar13 = (ForAnyElementType *)(lVar10 + 0xb8 + lVar11);
  pFVar13->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  lVar12 = (longlong)(int)local_58;
  *(int *)&pFVar13[1].Data = (int)local_58;
  if ((int)local_58 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_58,0,pFVar13,(int)local_58,piVar1);
    memcpy(pFVar13->Data,pvVar6,lVar12 << 2);
  }
  *(undefined8 *)(lVar11 + 200 + lVar10) = local_50;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return;
}

// DrawLineStrip @ 14a08c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawLineStrip
          (FRigVMDrawInterface *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,FLinearColor *param_3,
          float param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  TVector<double> *_Src;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType _Src_00;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  undefined1 auStackY_158 [32];
  undefined8 local_108;
  undefined1 local_100;
  ForAnyElementType local_f8;
  int local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  float local_64;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = *(undefined8 *)&param_3->field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  _Src = param_2->DataPtr;
  iVar9 = param_2->ArrayNum;
  local_c8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Rotation).XY.m128d_f64[1];
  local_a8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_1->Translation).XY.m128d_f64[1];
  local_d8 = param_4;
  local_b8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_1->Rotation).ZW.m128d_f64[1];
  local_88 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_1->Scale3D).XY.m128d_f64[1];
  local_98 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Translation).ZW.m128d_f64[1];
  local_78 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_64 = param_6;
  local_108 = 0;
  local_100 = 2;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_68 = (undefined1)param_5;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  if ((_Src == (TVector<double> *)0x0) && (iVar9 != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar9,&local_f8,local_f0,local_f0 + 1);
  if (iVar9 != 0) {
    memcpy(local_f8.Data + (longlong)iVar8 * 0x18,_Src,(longlong)iVar9 * 0x18);
  }
  if ((*(undefined8 **)&this->field_0x8 <= &local_108) &&
     (&local_108 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10;
  if (iVar9 == *(int *)&this->field_0x14) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src_00.Data = local_f8.Data;
  lVar10 = (longlong)iVar9 * 0xd0;
  *(int *)&this->field_0x10 = iVar9 + 1;
  lVar4 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar10 + lVar4) = local_108;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0x10 + lVar10);
  *(undefined1 *)(lVar10 + 8 + lVar4) = local_100;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)local_f0[0];
  *(int *)&pFVar12[1].Data = local_f0[0];
  if (local_f0[0] == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_f0[0],0,pFVar12,local_f0[0],piVar1);
    memcpy(pFVar12->Data,_Src_00.Data,lVar11 * 0x18);
  }
  pvVar6 = local_60;
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar4);
  *puVar2 = local_e8;
  puVar2[1] = uStack_e0;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xa8 + lVar10);
  *(float *)(lVar10 + 0x30 + lVar4) = local_d8;
  pdVar3 = (double *)(lVar10 + 0x40 + lVar4);
  *pdVar3 = local_c8;
  pdVar3[1] = dStack_c0;
  pdVar3 = (double *)(lVar10 + 0x50 + lVar4);
  *pdVar3 = local_b8;
  pdVar3[1] = dStack_b0;
  pdVar3 = (double *)(lVar10 + 0x60 + lVar4);
  *pdVar3 = local_a8;
  pdVar3[1] = dStack_a0;
  pdVar3 = (double *)(lVar10 + 0x70 + lVar4);
  *pdVar3 = local_98;
  pdVar3[1] = dStack_90;
  pdVar3 = (double *)(lVar10 + 0x80 + lVar4);
  *pdVar3 = local_88;
  pdVar3[1] = dStack_80;
  pdVar3 = (double *)(lVar10 + 0x90 + lVar4);
  *pdVar3 = local_78;
  pdVar3[1] = dStack_70;
  *(undefined1 *)(lVar10 + 0xa0 + lVar4) = local_68;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  *(float *)(lVar10 + 0xa4 + lVar4) = local_64;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)(int)local_58;
  *(int *)&pFVar12[1].Data = (int)local_58;
  if ((int)local_58 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_58,0,pFVar12,(int)local_58,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 * 0x58);
  }
  pvVar6 = local_50;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xb8 + lVar10);
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)(int)local_48;
  *(int *)&pFVar12[1].Data = (int)local_48;
  if ((int)local_48 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_48,0,pFVar12,(int)local_48,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 << 2);
  }
  *(undefined8 *)(lVar10 + 200 + lVar4) = local_40;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// DrawLines @ 14a08ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawLines
          (FRigVMDrawInterface *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,FLinearColor *param_3,
          float param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  TVector<double> *_Src;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType _Src_00;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  undefined1 auStackY_158 [32];
  undefined8 local_108;
  undefined1 local_100;
  ForAnyElementType local_f8;
  int local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  float local_64;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = *(undefined8 *)&param_3->field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  _Src = param_2->DataPtr;
  iVar9 = param_2->ArrayNum;
  local_c8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Rotation).XY.m128d_f64[1];
  local_a8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_1->Translation).XY.m128d_f64[1];
  local_d8 = param_4;
  local_b8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_1->Rotation).ZW.m128d_f64[1];
  local_88 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_1->Scale3D).XY.m128d_f64[1];
  local_98 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Translation).ZW.m128d_f64[1];
  local_78 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_64 = param_6;
  local_108 = 0;
  local_100 = 1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_68 = (undefined1)param_5;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  if ((_Src == (TVector<double> *)0x0) && (iVar9 != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar9,&local_f8,local_f0,local_f0 + 1);
  if (iVar9 != 0) {
    memcpy(local_f8.Data + (longlong)iVar8 * 0x18,_Src,(longlong)iVar9 * 0x18);
  }
  if ((*(undefined8 **)&this->field_0x8 <= &local_108) &&
     (&local_108 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10;
  if (iVar9 == *(int *)&this->field_0x14) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src_00.Data = local_f8.Data;
  lVar10 = (longlong)iVar9 * 0xd0;
  *(int *)&this->field_0x10 = iVar9 + 1;
  lVar4 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar10 + lVar4) = local_108;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0x10 + lVar10);
  *(undefined1 *)(lVar10 + 8 + lVar4) = local_100;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)local_f0[0];
  *(int *)&pFVar12[1].Data = local_f0[0];
  if (local_f0[0] == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_f0[0],0,pFVar12,local_f0[0],piVar1);
    memcpy(pFVar12->Data,_Src_00.Data,lVar11 * 0x18);
  }
  pvVar6 = local_60;
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar4);
  *puVar2 = local_e8;
  puVar2[1] = uStack_e0;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xa8 + lVar10);
  *(float *)(lVar10 + 0x30 + lVar4) = local_d8;
  pdVar3 = (double *)(lVar10 + 0x40 + lVar4);
  *pdVar3 = local_c8;
  pdVar3[1] = dStack_c0;
  pdVar3 = (double *)(lVar10 + 0x50 + lVar4);
  *pdVar3 = local_b8;
  pdVar3[1] = dStack_b0;
  pdVar3 = (double *)(lVar10 + 0x60 + lVar4);
  *pdVar3 = local_a8;
  pdVar3[1] = dStack_a0;
  pdVar3 = (double *)(lVar10 + 0x70 + lVar4);
  *pdVar3 = local_98;
  pdVar3[1] = dStack_90;
  pdVar3 = (double *)(lVar10 + 0x80 + lVar4);
  *pdVar3 = local_88;
  pdVar3[1] = dStack_80;
  pdVar3 = (double *)(lVar10 + 0x90 + lVar4);
  *pdVar3 = local_78;
  pdVar3[1] = dStack_70;
  *(undefined1 *)(lVar10 + 0xa0 + lVar4) = local_68;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  *(float *)(lVar10 + 0xa4 + lVar4) = local_64;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)(int)local_58;
  *(int *)&pFVar12[1].Data = (int)local_58;
  if ((int)local_58 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_58,0,pFVar12,(int)local_58,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 * 0x58);
  }
  pvVar6 = local_50;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xb8 + lVar10);
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)(int)local_48;
  *(int *)&pFVar12[1].Data = (int)local_48;
  if ((int)local_48 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_48,0,pFVar12,(int)local_48,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 << 2);
  }
  *(undefined8 *)(lVar10 + 200 + lVar4) = local_40;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// DrawPlane @ 14a08ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawPlane
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,bool param_4,FLinearColor *param_5,FMaterialRenderProxy *param_6,
          ESceneDepthPriorityGroup param_7,float param_8)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  undefined8 uVar8;
  void *pvVar9;
  ForAnyElementType FVar10;
  FDynamicMeshVertex *pFVar11;
  bool bVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FDynamicMeshVertex *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ForAnyElementType *pFVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_4c8 [32];
  TVector<float>_u_0 local_478;
  TVector<float>_u_0 local_46c;
  TVector<float>_u_0 local_460;
  TVector<float>_u_0 local_454;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  FLinearColor_u_0 local_398;
  undefined4 local_388;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318;
  float local_314;
  ForAnyElementType local_310;
  int local_308;
  int local_304;
  ForAnyElementType local_300;
  undefined8 local_2f8;
  FMaterialRenderProxy *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248;
  float local_244;
  void *local_240;
  undefined8 local_238;
  void *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  FDynamicMeshVertex local_1f8;
  FDynamicMeshVertex FStack_1a0;
  FDynamicMeshVertex local_148;
  FDynamicMeshVertex local_f0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_368 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_360 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar5 = *(double *)&param_2->field0_0x0;
  dVar6 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  local_398 = FLinearColor::Red.field0_0x0;
  local_378 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_370 = (param_1->Rotation).XY.m128d_f64[1];
  local_358 = (param_1->Translation).XY.m128d_f64[0];
  dStack_350 = (param_1->Translation).XY.m128d_f64[1];
  local_338 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_330 = (param_1->Scale3D).XY.m128d_f64[1];
  local_348 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_340 = (param_1->Translation).ZW.m128d_f64[1];
  local_3b8 = 0;
  local_3a8 = (void *)0x0;
  local_3a0 = 0;
  local_388 = 0;
  local_318 = 1;
  fVar21 = (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_314 = -1.0;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_304 = 0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_328 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_320 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_2f8 = 0;
  local_2f0 = (FMaterialRenderProxy *)0x0;
  local_3b0 = 3;
  local_478._s_0.Z = 0.0;
  local_478._s_0.X = fVar21;
  local_478._s_0.Y = (float)dVar6;
  FDynamicMeshVertex::FDynamicMeshVertex(&local_1f8,(TVector<float> *)&local_478._s_0);
  local_46c._s_0.Z = 0.0;
  local_46c._s_0.X = (float)dVar5;
  local_46c._s_0.Y = (float)dVar6;
  FDynamicMeshVertex::FDynamicMeshVertex(&FStack_1a0,(TVector<float> *)&local_46c._s_0);
  local_460._s_0.Z = 0.0;
  fVar20 = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_460._s_0.X = (float)dVar5;
  local_460._s_0.Y = fVar20;
  FDynamicMeshVertex::FDynamicMeshVertex(&local_148,(TVector<float> *)&local_460._s_0);
  local_454._s_0.Z = 0.0;
  local_454._s_0.X = fVar21;
  local_454._s_0.Y = fVar20;
  FDynamicMeshVertex::FDynamicMeshVertex(&local_f0,(TVector<float> *)&local_454._s_0);
  local_308 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,4,4,local_304,&local_310,4,&local_304);
  lVar16 = 2;
  FVar10.Data = local_310.Data;
  pFVar11 = &local_1f8;
  do {
    pFVar15 = pFVar11;
    pFVar14 = FVar10.Data;
    uVar8 = *(undefined8 *)((longlong)&(pFVar15->Position).field0_0x0 + 8);
    pFVar11 = (FDynamicMeshVertex *)(pFVar15[1].TextureCoordinate[3].field0_0x0.XY + 1);
    *(undefined8 *)pFVar14 = *(undefined8 *)&(pFVar15->Position).field0_0x0;
    *(undefined8 *)(pFVar14 + 8) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[1].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x10) =
         *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[0].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x18) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[3].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x20) =
         *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[2].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x28) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[5].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x30) =
         *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[4].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x38) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[7].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x40) =
         *(undefined8 *)((longlong)&pFVar15->TextureCoordinate[6].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x48) = uVar8;
    uVar8 = *(undefined8 *)&pFVar15[1].Position.field0_0x0;
    *(undefined8 *)(pFVar14 + 0x50) = *(undefined8 *)&pFVar15->TangentZ;
    *(undefined8 *)(pFVar14 + 0x58) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[0].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x60) = *(undefined8 *)((longlong)&pFVar15[1].Position.field0_0x0 + 8)
    ;
    *(undefined8 *)(pFVar14 + 0x68) = uVar8;
    uVar8 = *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[2].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x70) =
         *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[1].field0_0x0 + 4);
    *(undefined8 *)(pFVar14 + 0x78) = uVar8;
    lVar16 = lVar16 + -1;
    FVar10.Data = pFVar14 + 0x80;
  } while (lVar16 != 0);
  uVar8 = *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[4].field0_0x0 + 4);
  local_218 = 0;
  uStack_214 = 1;
  *(undefined8 *)(pFVar14 + 0x80) = *(undefined8 *)&(pFVar11->Position).field0_0x0;
  *(undefined8 *)(pFVar14 + 0x88) = uVar8;
  uStack_210 = 2;
  uVar8 = *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[6].field0_0x0 + 4);
  uStack_20c = 2;
  local_208 = 3;
  *(undefined8 *)(pFVar14 + 0x90) =
       *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 0x98) = uVar8;
  uVar8 = *(undefined8 *)&pFVar15[1].TangentZ;
  *(undefined8 *)(pFVar14 + 0xa0) =
       *(undefined8 *)((longlong)&pFVar15[1].TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 0xa8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&pFVar15[2].Position.field0_0x0 + 8);
  *(undefined8 *)(pFVar14 + 0xb0) = *(undefined8 *)&pFVar15[2].Position.field0_0x0;
  *(undefined8 *)(pFVar14 + 0xb8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&pFVar15[2].TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 0xc0) =
       *(undefined8 *)((longlong)&pFVar15[2].TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 200) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&pFVar15[2].TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 0xd0) =
       *(undefined8 *)((longlong)&pFVar15[2].TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar14 + 0xd8) = uVar8;
  local_2f8 = CONCAT44(local_2f8._4_4_,6);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,local_2f8._4_4_,&local_300,6,(int *)((longlong)&local_2f8 + 4));
  *(ulonglong *)local_300.Data = CONCAT44(uStack_214,local_218);
  *(ulonglong *)(local_300.Data + 8) = CONCAT44(uStack_20c,uStack_210);
  *(undefined8 *)(local_300.Data + 0x10) = local_208;
  local_318 = (undefined1)param_7;
  local_314 = param_8;
  local_2f0 = param_6;
  if (((*(undefined8 **)&this->field_0x8 <= &local_3b8) &&
      (&local_3b8 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = *(int *)&this->field_0x10;
  if (iVar13 == *(int *)&this->field_0x14) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  pvVar9 = local_3a8;
  lVar16 = *(longlong *)&this->field_0x8;
  lVar17 = (longlong)iVar13 * 0xd0;
  *(int *)&this->field_0x10 = iVar13 + 1;
  pFVar19 = (ForAnyElementType *)(lVar16 + 0x10 + lVar17);
  *(undefined8 *)(lVar17 + lVar16) = local_3b8;
  *(undefined1 *)(lVar17 + 8 + lVar16) = local_3b0;
  piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
  pFVar19->Data = (FScriptContainerElement *)0x0;
  lVar18 = (longlong)(int)local_3a0;
  *(int *)&pFVar19[1].Data = (int)local_3a0;
  if ((int)local_3a0 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_3a0,0,pFVar19,(int)local_3a0,piVar1);
    memcpy(pFVar19->Data,pvVar9,lVar18 * 0x18);
  }
  FVar10.Data = local_310.Data;
  puVar3 = (undefined8 *)(lVar17 + 0x20 + lVar16);
  *puVar3 = local_398._0_8_;
  puVar3[1] = local_398._8_8_;
  pFVar19 = (ForAnyElementType *)(lVar16 + 0xa8 + lVar17);
  *(undefined4 *)(lVar17 + 0x30 + lVar16) = local_388;
  pdVar4 = (double *)(lVar17 + 0x40 + lVar16);
  *pdVar4 = local_378;
  pdVar4[1] = dStack_370;
  pdVar4 = (double *)(lVar17 + 0x50 + lVar16);
  *pdVar4 = local_368;
  pdVar4[1] = dStack_360;
  pdVar4 = (double *)(lVar17 + 0x60 + lVar16);
  *pdVar4 = local_358;
  pdVar4[1] = dStack_350;
  pdVar4 = (double *)(lVar17 + 0x70 + lVar16);
  *pdVar4 = local_348;
  pdVar4[1] = dStack_340;
  pdVar4 = (double *)(lVar17 + 0x80 + lVar16);
  *pdVar4 = local_338;
  pdVar4[1] = dStack_330;
  pdVar4 = (double *)(lVar17 + 0x90 + lVar16);
  *pdVar4 = local_328;
  pdVar4[1] = dStack_320;
  *(undefined1 *)(lVar17 + 0xa0 + lVar16) = local_318;
  piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
  *(float *)(lVar17 + 0xa4 + lVar16) = local_314;
  pFVar19->Data = (FScriptContainerElement *)0x0;
  lVar18 = (longlong)local_308;
  *(int *)&pFVar19[1].Data = local_308;
  if (local_308 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,local_308,0,pFVar19,local_308,piVar1);
    memcpy(pFVar19->Data,FVar10.Data,lVar18 * 0x58);
  }
  FVar10.Data = local_300.Data;
  pFVar19 = (ForAnyElementType *)(lVar16 + 0xb8 + lVar17);
  pFVar19->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
  lVar18 = (longlong)(int)local_2f8;
  *(int *)&pFVar19[1].Data = (int)local_2f8;
  if ((int)local_2f8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_2f8,0,pFVar19,(int)local_2f8,piVar1);
    memcpy(pFVar19->Data,FVar10.Data,lVar18 << 2);
  }
  *(FMaterialRenderProxy **)(lVar17 + 200 + lVar16) = local_2f0;
  if (param_4) {
    local_298 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_290 = (param_1->Rotation).ZW.m128d_f64[1];
    local_278 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_270 = (param_1->Translation).ZW.m128d_f64[1];
    local_2c8 = *(undefined8 *)&param_5->field0_0x0;
    uStack_2c0 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    local_248 = (undefined1)param_7;
    local_2a8 = (param_1->Rotation).XY.m128d_f64[0];
    dStack_2a0 = (param_1->Rotation).XY.m128d_f64[1];
    local_288 = (param_1->Translation).XY.m128d_f64[0];
    dStack_280 = (param_1->Translation).XY.m128d_f64[1];
    local_268 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_260 = (param_1->Scale3D).XY.m128d_f64[1];
    local_258 = (param_1->Scale3D).ZW.m128d_f64[0];
    dStack_250 = (param_1->Scale3D).ZW.m128d_f64[1];
    local_244 = param_8;
    local_2e8 = 0;
    local_2e0 = 2;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    local_2b8 = 0;
    local_240 = (void *)0x0;
    local_238 = 0;
    local_230 = (void *)0x0;
    local_228 = 0;
    local_220 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,5,&local_2d8,0,(int *)((longlong)&local_2d0 + 4));
    if ((local_308 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_438 = (double)*(float *)(local_310.Data + 8);
    dStack_440 = (double)*(float *)(local_310.Data + 4);
    local_448 = (double)*(float *)local_310.Data;
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_448) &&
        ((FScriptContainerElement *)&local_448 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (int)local_2d0;
    if ((int)local_2d0 == local_2d0._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    *(double *)(local_2d8.Data + (longlong)iVar13 * 0x18) = local_448;
    *(double *)(local_2d8.Data + (longlong)iVar13 * 0x18 + 8) = dStack_440;
    *(double *)(local_2d8.Data + (longlong)iVar13 * 0x18 + 0x10) = local_438;
    local_2d0._0_4_ = iVar13 + 1;
    if ((local_308 < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_420 = (double)*(float *)(local_310.Data + 0x60);
    dStack_428 = (double)*(float *)(local_310.Data + 0x5c);
    local_430 = (double)*(float *)(local_310.Data + 0x58);
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_430) &&
        ((FScriptContainerElement *)&local_430 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_2d0 == local_2d0._4_4_) {
      local_2d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    iVar13 = (int)local_2d0 + 1;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18) = local_430;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 8) = dStack_428;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 0x10) = local_420;
    local_2d0._0_4_ = iVar13;
    if ((local_308 < 3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_408 = (double)*(float *)(local_310.Data + 0xb8);
    dStack_410 = (double)*(float *)(local_310.Data + 0xb4);
    local_418 = (double)*(float *)(local_310.Data + 0xb0);
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_418) &&
        ((FScriptContainerElement *)&local_418 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_2d0 == local_2d0._4_4_) {
      local_2d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    iVar13 = (int)local_2d0 + 1;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18) = local_418;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 8) = dStack_410;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 0x10) = local_408;
    local_2d0._0_4_ = iVar13;
    if ((local_308 < 4) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_3f0 = (double)*(float *)(local_310.Data + 0x110);
    dStack_3f8 = (double)*(float *)(local_310.Data + 0x10c);
    local_400 = (double)*(float *)(local_310.Data + 0x108);
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_400) &&
        ((FScriptContainerElement *)&local_400 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_2d0 == local_2d0._4_4_) {
      local_2d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    iVar13 = (int)local_2d0 + 1;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18) = local_400;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 8) = dStack_3f8;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 0x10) = local_3f0;
    local_2d0._0_4_ = iVar13;
    if ((local_308 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_3d8 = (double)*(float *)(local_310.Data + 8);
    dStack_3e0 = (double)*(float *)(local_310.Data + 4);
    local_3e8 = (double)*(float *)local_310.Data;
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_3e8) &&
        ((FScriptContainerElement *)&local_3e8 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_2d0 == local_2d0._4_4_) {
      local_2d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    iVar13 = (int)local_2d0 + 1;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18) = local_3e8;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 8) = dStack_3e0;
    *(double *)(local_2d8.Data + (longlong)(int)local_2d0 * 0x18 + 0x10) = local_3d8;
    local_2d0._0_4_ = iVar13;
    if ((local_308 < 3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_3c0 = (double)*(float *)(local_310.Data + 0xb8);
    dStack_3c8 = (double)*(float *)(local_310.Data + 0xb4);
    local_3d0 = (double)*(float *)(local_310.Data + 0xb0);
    if (((local_2d8.Data <= (FScriptContainerElement *)&local_3d0) &&
        ((FScriptContainerElement *)&local_3d0 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x18))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_2d0 == local_2d0._4_4_) {
      local_2d0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_2d8,(int *)((longlong)&local_2d0 + 4));
    }
    lVar16 = (longlong)(int)local_2d0;
    local_2d0 = CONCAT44(local_2d0._4_4_,(int)local_2d0 + 1);
    puVar2 = &this->field_0x14;
    *(double *)(local_2d8.Data + lVar16 * 0x18) = local_3d0;
    *(double *)(local_2d8.Data + lVar16 * 0x18 + 8) = dStack_3c8;
    *(double *)(local_2d8.Data + lVar16 * 0x18 + 0x10) = local_3c0;
    if (((*(undefined8 **)&this->field_0x8 <= &local_2e8) &&
        (&local_2e8 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)puVar2 * 0x1a)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = *(int *)&this->field_0x10;
    if (iVar13 == *(int *)puVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)puVar2);
    }
    FVar10.Data = local_2d8.Data;
    lVar16 = *(longlong *)&this->field_0x8;
    *(int *)&this->field_0x10 = iVar13 + 1;
    lVar17 = (longlong)iVar13 * 0xd0;
    pFVar19 = (ForAnyElementType *)(lVar16 + 0x10 + lVar17);
    *(undefined8 *)(lVar17 + lVar16) = local_2e8;
    *(undefined1 *)(lVar17 + 8 + lVar16) = local_2e0;
    piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
    pFVar19->Data = (FScriptContainerElement *)0x0;
    lVar18 = (longlong)(int)local_2d0;
    *(int *)&pFVar19[1].Data = (int)local_2d0;
    if ((int)local_2d0 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(int)local_2d0,0,pFVar19,(int)local_2d0,piVar1);
      memcpy(pFVar19->Data,FVar10.Data,lVar18 * 0x18);
    }
    pvVar9 = local_240;
    puVar3 = (undefined8 *)(lVar17 + 0x20 + lVar16);
    *puVar3 = local_2c8;
    puVar3[1] = uStack_2c0;
    pFVar19 = (ForAnyElementType *)(lVar16 + 0xa8 + lVar17);
    *(undefined4 *)(lVar17 + 0x30 + lVar16) = local_2b8;
    pdVar4 = (double *)(lVar17 + 0x40 + lVar16);
    *pdVar4 = local_2a8;
    pdVar4[1] = dStack_2a0;
    pdVar4 = (double *)(lVar17 + 0x50 + lVar16);
    *pdVar4 = local_298;
    pdVar4[1] = dStack_290;
    pdVar4 = (double *)(lVar17 + 0x60 + lVar16);
    *pdVar4 = local_288;
    pdVar4[1] = dStack_280;
    pdVar4 = (double *)(lVar17 + 0x70 + lVar16);
    *pdVar4 = local_278;
    pdVar4[1] = dStack_270;
    pdVar4 = (double *)(lVar17 + 0x80 + lVar16);
    *pdVar4 = local_268;
    pdVar4[1] = dStack_260;
    pdVar4 = (double *)(lVar17 + 0x90 + lVar16);
    *pdVar4 = local_258;
    pdVar4[1] = dStack_250;
    *(undefined1 *)(lVar17 + 0xa0 + lVar16) = local_248;
    piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
    *(float *)(lVar17 + 0xa4 + lVar16) = local_244;
    pFVar19->Data = (FScriptContainerElement *)0x0;
    lVar18 = (longlong)(int)local_238;
    *(int *)&pFVar19[1].Data = (int)local_238;
    if ((int)local_238 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,(int)local_238,0,pFVar19,(int)local_238,piVar1);
      memcpy(pFVar19->Data,pvVar9,lVar18 * 0x58);
    }
    pvVar9 = local_230;
    pFVar19 = (ForAnyElementType *)(lVar16 + 0xb8 + lVar17);
    pFVar19->Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
    lVar18 = (longlong)(int)local_228;
    *(int *)&pFVar19[1].Data = (int)local_228;
    if ((int)local_228 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_228,0,pFVar19,(int)local_228,piVar1);
      memcpy(pFVar19->Data,pvVar9,lVar18 << 2);
    }
    *(undefined8 *)(lVar17 + 200 + lVar16) = local_220;
    if (local_230 != (void *)0x0) {
      FMemory::Free(local_230);
    }
    if (local_240 != (void *)0x0) {
      FMemory::Free(local_240);
    }
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  if (local_3a8 != (void *)0x0) {
    FMemory::Free(local_3a8);
  }
  return;
}

// DrawPoint @ 14a08df90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawPoint
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TVector<double> *param_2,
          float param_3,FLinearColor *param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  undefined1 auStackY_158 [32];
  undefined8 local_108;
  undefined1 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  float local_64;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_b8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_1->Rotation).ZW.m128d_f64[1];
  local_98 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Translation).ZW.m128d_f64[1];
  local_e8 = *(undefined8 *)&param_4->field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_78 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_c8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Rotation).XY.m128d_f64[1];
  local_a8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_1->Translation).XY.m128d_f64[1];
  local_88 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_1->Scale3D).XY.m128d_f64[1];
  local_64 = param_6;
  local_108 = 0;
  local_100 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_68 = (undefined1)param_5;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_d8 = param_3;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_f8,(int *)((longlong)&local_f0 + 4));
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  local_f0 = CONCAT44(local_f0._4_4_,iVar10 + 1);
  *(double *)(local_f8.Data + (longlong)iVar10 * 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(local_f8.Data + (longlong)iVar10 * 0x18 + 8) = dVar7;
  puVar1 = &this->field_0x8;
  *(double *)(local_f8.Data + (longlong)iVar10 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  if ((*(undefined8 **)puVar1 <= &local_108) &&
     (&local_108 < *(undefined8 **)puVar1 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = *(int *)&this->field_0x10;
  if (iVar10 == *(int *)&this->field_0x14) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)puVar1,(int *)&this->field_0x14);
  }
  _Src.Data = local_f8.Data;
  lVar11 = (longlong)iVar10 * 0xd0;
  *(int *)&this->field_0x10 = iVar10 + 1;
  lVar5 = *(longlong *)puVar1;
  *(undefined8 *)(lVar5 + lVar11) = local_108;
  pFVar13 = (ForAnyElementType *)(lVar5 + lVar11 + 0x10);
  *(undefined1 *)(lVar5 + lVar11 + 8) = local_100;
  pFVar13->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar13[1].Data + 4);
  lVar12 = (longlong)(int)local_f0;
  *(int *)&pFVar13[1].Data = (int)local_f0;
  if ((int)local_f0 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_f0,0,pFVar13,(int)local_f0,piVar2);
    memcpy(pFVar13->Data,_Src.Data,lVar12 * 0x18);
  }
  pvVar8 = local_60;
  puVar3 = (undefined8 *)(lVar5 + lVar11 + 0x20);
  *puVar3 = local_e8;
  puVar3[1] = uStack_e0;
  pFVar13 = (ForAnyElementType *)(lVar5 + lVar11 + 0xa8);
  *(float *)(lVar5 + lVar11 + 0x30) = local_d8;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x40);
  *pdVar4 = local_c8;
  pdVar4[1] = dStack_c0;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x50);
  *pdVar4 = local_b8;
  pdVar4[1] = dStack_b0;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x60);
  *pdVar4 = local_a8;
  pdVar4[1] = dStack_a0;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x70);
  *pdVar4 = local_98;
  pdVar4[1] = dStack_90;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x80);
  *pdVar4 = local_88;
  pdVar4[1] = dStack_80;
  pdVar4 = (double *)(lVar5 + lVar11 + 0x90);
  *pdVar4 = local_78;
  pdVar4[1] = dStack_70;
  *(undefined1 *)(lVar5 + lVar11 + 0xa0) = local_68;
  piVar2 = (int *)((longlong)&pFVar13[1].Data + 4);
  *(float *)(lVar5 + lVar11 + 0xa4) = local_64;
  pFVar13->Data = (FScriptContainerElement *)0x0;
  lVar12 = (longlong)(int)local_58;
  *(int *)&pFVar13[1].Data = (int)local_58;
  if ((int)local_58 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_58,0,pFVar13,(int)local_58,piVar2);
    memcpy(pFVar13->Data,pvVar8,lVar12 * 0x58);
  }
  pvVar8 = local_50;
  pFVar13 = (ForAnyElementType *)(lVar5 + lVar11 + 0xb8);
  pFVar13->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar13[1].Data + 4);
  lVar12 = (longlong)(int)local_48;
  *(int *)&pFVar13[1].Data = (int)local_48;
  if ((int)local_48 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_48,0,pFVar13,(int)local_48,piVar2);
    memcpy(pFVar13->Data,pvVar8,lVar12 << 2);
  }
  *(undefined8 *)(lVar5 + lVar11 + 200) = local_40;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// DrawPoints @ 14a08e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawPoints
          (FRigVMDrawInterface *this,TTransform<double> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,float param_3,
          FLinearColor *param_4,ESceneDepthPriorityGroup param_5,float param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  TVector<double> *_Src;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType _Src_00;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  undefined1 auStackY_158 [32];
  undefined8 local_108;
  undefined1 local_100;
  ForAnyElementType local_f8;
  int local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  float local_64;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_b8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_1->Rotation).ZW.m128d_f64[1];
  _Src = param_2->DataPtr;
  iVar9 = param_2->ArrayNum;
  local_98 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Translation).ZW.m128d_f64[1];
  local_78 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_108 = 0;
  local_100 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_e8 = *(undefined8 *)&param_4->field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_68 = (undefined1)param_5;
  local_c8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Rotation).XY.m128d_f64[1];
  local_a8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_1->Translation).XY.m128d_f64[1];
  local_88 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_1->Scale3D).XY.m128d_f64[1];
  local_64 = param_6;
  local_d8 = param_3;
  if ((_Src == (TVector<double> *)0x0) && (iVar9 != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar9,&local_f8,local_f0,local_f0 + 1);
  if (iVar9 != 0) {
    memcpy(local_f8.Data + (longlong)iVar8 * 0x18,_Src,(longlong)iVar9 * 0x18);
  }
  if ((*(undefined8 **)&this->field_0x8 <= &local_108) &&
     (&local_108 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10;
  if (iVar9 == *(int *)&this->field_0x14) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src_00.Data = local_f8.Data;
  lVar10 = (longlong)iVar9 * 0xd0;
  *(int *)&this->field_0x10 = iVar9 + 1;
  lVar4 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar10 + lVar4) = local_108;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0x10 + lVar10);
  *(undefined1 *)(lVar10 + 8 + lVar4) = local_100;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)local_f0[0];
  *(int *)&pFVar12[1].Data = local_f0[0];
  if (local_f0[0] == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_f0[0],0,pFVar12,local_f0[0],piVar1);
    memcpy(pFVar12->Data,_Src_00.Data,lVar11 * 0x18);
  }
  pvVar6 = local_60;
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar4);
  *puVar2 = local_e8;
  puVar2[1] = uStack_e0;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xa8 + lVar10);
  *(float *)(lVar10 + 0x30 + lVar4) = local_d8;
  pdVar3 = (double *)(lVar10 + 0x40 + lVar4);
  *pdVar3 = local_c8;
  pdVar3[1] = dStack_c0;
  pdVar3 = (double *)(lVar10 + 0x50 + lVar4);
  *pdVar3 = local_b8;
  pdVar3[1] = dStack_b0;
  pdVar3 = (double *)(lVar10 + 0x60 + lVar4);
  *pdVar3 = local_a8;
  pdVar3[1] = dStack_a0;
  pdVar3 = (double *)(lVar10 + 0x70 + lVar4);
  *pdVar3 = local_98;
  pdVar3[1] = dStack_90;
  pdVar3 = (double *)(lVar10 + 0x80 + lVar4);
  *pdVar3 = local_88;
  pdVar3[1] = dStack_80;
  pdVar3 = (double *)(lVar10 + 0x90 + lVar4);
  *pdVar3 = local_78;
  pdVar3[1] = dStack_70;
  *(undefined1 *)(lVar10 + 0xa0 + lVar4) = local_68;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  *(float *)(lVar10 + 0xa4 + lVar4) = local_64;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)(int)local_58;
  *(int *)&pFVar12[1].Data = (int)local_58;
  if ((int)local_58 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_58,0,pFVar12,(int)local_58,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 * 0x58);
  }
  pvVar6 = local_50;
  pFVar12 = (ForAnyElementType *)(lVar4 + 0xb8 + lVar10);
  pFVar12->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  lVar11 = (longlong)(int)local_48;
  *(int *)&pFVar12[1].Data = (int)local_48;
  if ((int)local_48 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_48,0,pFVar12,(int)local_48,piVar1);
    memcpy(pFVar12->Data,pvVar6,lVar11 << 2);
  }
  *(undefined8 *)(lVar10 + 200 + lVar4) = local_40;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// DrawRectangle @ 14a08e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMDrawInterface::DrawRectangle
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,FLinearColor *param_4,float param_5,ESceneDepthPriorityGroup param_6,
          float param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ForAnyElementType _Src;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [16];
  undefined8 local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  double local_1e0;
  double dStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined1 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108;
  float local_104;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_d8,param_2,param_1);
  fVar15 = param_3 * __real_3f000000;
  local_178 = param_5;
  local_188 = *(undefined8 *)&param_4->field0_0x0;
  uStack_180 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_168 = local_d8.Rotation.XY.m128d_f64[0];
  dStack_160 = local_d8.Rotation.XY.m128d_f64[1];
  local_148 = local_d8.Translation.XY.m128d_f64[0];
  dStack_140 = local_d8.Translation.XY.m128d_f64[1];
  local_158 = local_d8.Rotation.ZW.m128d_f64[0];
  dStack_150 = local_d8.Rotation.ZW.m128d_f64[1];
  local_108 = (undefined1)param_6;
  local_128 = local_d8.Scale3D.XY.m128d_f64[0];
  dStack_120 = local_d8.Scale3D.XY.m128d_f64[1];
  local_138 = local_d8.Translation.ZW.m128d_f64[0];
  dStack_130 = local_d8.Translation.ZW.m128d_f64[1];
  local_104 = param_7;
  local_1a8 = 0;
  local_1a0 = 2;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_118 = local_d8.Scale3D.ZW.m128d_f64[0];
  dStack_110 = local_d8.Scale3D.ZW.m128d_f64[1];
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_e0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,5,&local_198,0,(int *)((longlong)&local_190 + 4));
  local_218 = 0;
  dVar7 = (double)(float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
  uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_228._8_4_ = SUB84(dVar7,0);
  local_228._0_8_ = dVar7;
  local_228._12_4_ = uVar16;
  if (((local_198.Data <= (FScriptContainerElement *)local_228) &&
      ((FScriptContainerElement *)local_228 < local_198.Data + (longlong)local_190._4_4_ * 0x18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (int)local_190;
  if ((int)local_190 == local_190._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_198,(int *)((longlong)&local_190 + 4));
  }
  iVar1 = iVar10 + 1;
  dVar6 = (double)fVar15;
  local_200 = 0;
  *(undefined8 *)(local_198.Data + (longlong)iVar10 * 0x18) = local_228._0_8_;
  *(undefined8 *)(local_198.Data + (longlong)iVar10 * 0x18 + 8) = local_228._8_8_;
  *(undefined8 *)(local_198.Data + (longlong)iVar10 * 0x18 + 0x10) = local_218;
  local_210 = dVar7;
  dStack_208 = dVar6;
  local_190._0_4_ = iVar1;
  if (((local_198.Data <= (FScriptContainerElement *)&local_210) &&
      ((FScriptContainerElement *)&local_210 < local_198.Data + (longlong)local_190._4_4_ * 0x18))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_190 == local_190._4_4_) {
    local_190._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_198,(int *)((longlong)&local_190 + 4));
  }
  iVar10 = (int)local_190 + 1;
  local_1e8 = 0;
  local_1f8._8_4_ = SUB84(dVar6,0);
  local_1f8._0_8_ = dVar6;
  local_1f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(double *)(local_198.Data + (longlong)(int)local_190 * 0x18) = local_210;
  *(double *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 8) = dStack_208;
  *(undefined8 *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 0x10) = local_200;
  local_190._0_4_ = iVar10;
  if (((local_198.Data <= (FScriptContainerElement *)local_1f8) &&
      ((FScriptContainerElement *)local_1f8 < local_198.Data + (longlong)local_190._4_4_ * 0x18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_190 == local_190._4_4_) {
    local_190._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_198,(int *)((longlong)&local_190 + 4));
  }
  iVar10 = (int)local_190 + 1;
  local_1d0 = 0;
  *(undefined8 *)(local_198.Data + (longlong)(int)local_190 * 0x18) = local_1f8._0_8_;
  *(undefined8 *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 8) = local_1f8._8_8_;
  *(undefined8 *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 0x10) = local_1e8;
  local_1e0 = dVar6;
  dStack_1d8 = dVar7;
  local_190._0_4_ = iVar10;
  if (((local_198.Data <= (FScriptContainerElement *)&local_1e0) &&
      ((FScriptContainerElement *)&local_1e0 < local_198.Data + (longlong)local_190._4_4_ * 0x18))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_190 == local_190._4_4_) {
    local_190._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_198,(int *)((longlong)&local_190 + 4));
  }
  iVar10 = (int)local_190 + 1;
  local_1b8 = 0;
  local_1c8._8_4_ = SUB84(dVar7,0);
  local_1c8._0_8_ = dVar7;
  local_1c8._12_4_ = uVar16;
  *(double *)(local_198.Data + (longlong)(int)local_190 * 0x18) = local_1e0;
  *(double *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 8) = dStack_1d8;
  *(undefined8 *)(local_198.Data + (longlong)(int)local_190 * 0x18 + 0x10) = local_1d0;
  local_190._0_4_ = iVar10;
  if (((local_198.Data <= (FScriptContainerElement *)local_1c8) &&
      ((FScriptContainerElement *)local_1c8 < local_198.Data + (longlong)local_190._4_4_ * 0x18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_190 == local_190._4_4_) {
    local_190._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_198,(int *)((longlong)&local_190 + 4));
  }
  lVar11 = (longlong)(int)local_190;
  local_190 = CONCAT44(local_190._4_4_,(int)local_190 + 1);
  *(undefined8 *)(local_198.Data + lVar11 * 0x18) = local_1c8._0_8_;
  *(undefined8 *)(local_198.Data + lVar11 * 0x18 + 8) = local_1c8._8_8_;
  *(undefined8 *)(local_198.Data + lVar11 * 0x18 + 0x10) = local_1b8;
  if (((*(undefined8 **)&this->field_0x8 <= &local_1a8) &&
      (&local_1a8 < *(undefined8 **)&this->field_0x8 + (longlong)*(int *)&this->field_0x14 * 0x1a))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)&this->field_0x10;
  if (iVar10 == *(int *)&this->field_0x14) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10d0,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
  }
  _Src.Data = local_198.Data;
  lVar12 = (longlong)iVar10 * 0xd0;
  *(int *)&this->field_0x10 = iVar10 + 1;
  lVar11 = *(longlong *)&this->field_0x8;
  *(undefined8 *)(lVar12 + lVar11) = local_1a8;
  pFVar14 = (ForAnyElementType *)(lVar11 + 0x10 + lVar12);
  *(undefined1 *)(lVar12 + 8 + lVar11) = local_1a0;
  pFVar14->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
  lVar13 = (longlong)(int)local_190;
  *(int *)&pFVar14[1].Data = (int)local_190;
  if ((int)local_190 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_190,0,pFVar14,(int)local_190,piVar2);
    memcpy(pFVar14->Data,_Src.Data,lVar13 * 0x18);
  }
  pvVar8 = local_100;
  puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar11);
  *puVar3 = local_188;
  puVar3[1] = uStack_180;
  pFVar14 = (ForAnyElementType *)(lVar11 + 0xa8 + lVar12);
  *(float *)(lVar12 + 0x30 + lVar11) = local_178;
  pdVar4 = (double *)(lVar12 + 0x40 + lVar11);
  *pdVar4 = local_168;
  pdVar4[1] = dStack_160;
  pdVar4 = (double *)(lVar12 + 0x50 + lVar11);
  *pdVar4 = local_158;
  pdVar4[1] = dStack_150;
  pdVar4 = (double *)(lVar12 + 0x60 + lVar11);
  *pdVar4 = local_148;
  pdVar4[1] = dStack_140;
  pdVar4 = (double *)(lVar12 + 0x70 + lVar11);
  *pdVar4 = local_138;
  pdVar4[1] = dStack_130;
  pdVar4 = (double *)(lVar12 + 0x80 + lVar11);
  *pdVar4 = local_128;
  pdVar4[1] = dStack_120;
  pdVar4 = (double *)(lVar12 + 0x90 + lVar11);
  *pdVar4 = local_118;
  pdVar4[1] = dStack_110;
  *(undefined1 *)(lVar12 + 0xa0 + lVar11) = local_108;
  piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
  *(float *)(lVar12 + 0xa4 + lVar11) = local_104;
  pFVar14->Data = (FScriptContainerElement *)0x0;
  lVar13 = (longlong)(int)local_f8;
  *(int *)&pFVar14[1].Data = (int)local_f8;
  if ((int)local_f8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,(int)local_f8,0,pFVar14,(int)local_f8,piVar2);
    memcpy(pFVar14->Data,pvVar8,lVar13 * 0x58);
  }
  pvVar8 = local_f0;
  pFVar14 = (ForAnyElementType *)(lVar11 + 0xb8 + lVar12);
  pFVar14->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
  lVar13 = (longlong)(int)local_e8;
  *(int *)&pFVar14[1].Data = (int)local_e8;
  if ((int)local_e8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_e8,0,pFVar14,(int)local_e8,piVar2);
    memcpy(pFVar14->Data,pvVar8,lVar13 << 2);
  }
  *(undefined8 *)(lVar12 + 200 + lVar11) = local_e0;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// DrawSphere @ 14a08ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMDrawInterface::DrawSphere
          (FRigVMDrawInterface *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3,FLinearColor *param_4,float param_5,int param_6,
          ESceneDepthPriorityGroup param_7,float param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStackY_218 [32];
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  fVar2 = __real_40c90fdb;
  fVar1 = __real_bf800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Rotation.XY.m128d_f64[0] = ___xmm_00000000000000003fe6a09e6ecb41fe;
  local_158.Rotation.XY.m128d_f64[1] = _UNK_152072248;
  uVar5 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar6 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar7 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar8 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar3 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar4 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_158.Translation.ZW.m128d_f64[1]._0_4_ = uVar7;
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1]._4_4_ = uVar8;
  local_f8.Translation.ZW.m128d_f64[1]._0_4_ = uVar7;
  local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.Translation.ZW.m128d_f64[1]._4_4_ = uVar8;
  local_158.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar3;
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar4;
  local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar3;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar4;
  local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3fe6a09e5e3335980000000000000000;
  local_158.Rotation.ZW.m128d_f64[1] = _UNK_152072258;
  local_158.Scale3D.XY.m128d_f64[1]._0_4_ = uVar5;
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1]._4_4_ = uVar6;
  local_f8.Rotation.XY.m128d_f64[0] = ___xmm_3fe6a09e6ecb41fe0000000000000000;
  local_f8.Rotation.XY.m128d_f64[1] = _UNK_152072268;
  local_f8.Rotation.ZW.m128d_f64[0] = ___xmm_3fe6a09e5e3335980000000000000000;
  local_f8.Rotation.ZW.m128d_f64[1] = _UNK_152072258;
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar5;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar6;
  local_f8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
  local_f8.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
  DrawArc(this,param_1,param_2,param_3,0.0,__real_40c90fdb,param_4,param_5,param_6,SDPG_Foreground,
          __real_bf800000);
  local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1b8,&local_158,param_2);
  DrawArc(this,param_1,&local_1b8,param_3,0.0,fVar2,param_4,param_5,param_6,SDPG_Foreground,fVar1);
  local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1b8,&local_f8,param_2);
  DrawArc(this,param_1,&local_1b8,param_3,0.0,fVar2,param_4,param_5,param_6,SDPG_Foreground,fVar1);
  return;
}

// IsEnabled @ 14a09e8a0

bool __thiscall FRigVMDrawInterface::IsEnabled(FRigVMDrawInterface *this)

{
  return true;
}

