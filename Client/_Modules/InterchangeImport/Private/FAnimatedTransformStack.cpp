// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// AddTransform @ 14e6e8f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::FAnimatedTransformStack::
AddTransform(void *this,TTransform<double> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStackY_158 [32];
  undefined4 local_108 [2];
  ForAnyElementType local_100;
  undefined4 local_f8;
  int iStack_f4;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
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
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_e0 = (param_1->Rotation).XY.m128d_f64[1];
  local_d8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (param_1->Rotation).ZW.m128d_f64[1];
  local_c8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Translation).XY.m128d_f64[1];
  puVar6 = (undefined8 *)0x0;
  local_b8 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_b0 = (param_1->Translation).ZW.m128d_f64[1];
  local_a8 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (param_1->Scale3D).XY.m128d_f64[1];
  local_98 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,1,0,&local_100,1,&iStack_f4);
  local_88 = local_e8;
  dStack_80 = dStack_e0;
  *(double *)local_100.Data = local_e8;
  *(double *)(local_100.Data + 8) = dStack_e0;
  *(double *)(local_100.Data + 0x10) = local_d8;
  *(double *)(local_100.Data + 0x18) = dStack_d0;
  local_78 = local_d8;
  dStack_70 = dStack_d0;
  *(double *)(local_100.Data + 0x20) = local_c8;
  *(double *)(local_100.Data + 0x28) = dStack_c0;
  local_68 = local_c8;
  dStack_60 = dStack_c0;
  *(double *)(local_100.Data + 0x30) = local_b8;
  *(double *)(local_100.Data + 0x38) = dStack_b0;
  local_58 = local_b8;
  dStack_50 = dStack_b0;
  *(double *)(local_100.Data + 0x40) = local_a8;
  *(double *)(local_100.Data + 0x48) = dStack_a0;
  local_48 = local_a8;
  dStack_40 = dStack_a0;
  local_38 = local_98;
  dStack_30 = dStack_90;
  *(double *)(local_100.Data + 0x50) = local_98;
  *(double *)(local_100.Data + 0x58) = dStack_90;
  puVar5 = ::operator_new(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = local_100.Data;
    local_100.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar5 + 1) = local_f8;
    *(int *)((longlong)puVar5 + 0xc) = iStack_f4;
    local_f8 = 0;
    iStack_f4 = 0;
    puVar6 = puVar5;
  }
  iVar4 = *(int *)((longlong)this + 0x28);
  if (iVar4 == *(int *)((longlong)this + 0x2c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)this + 0x20),
                       (int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar4 + 1;
  lVar1 = *(longlong *)((longlong)this + 0x20);
  *(undefined8 **)(lVar1 + (longlong)iVar4 * 8) = puVar6;
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  local_f0 = *(undefined8 *)(lVar1 + (longlong)iVar4 * 8);
  if (((*(undefined8 **)this <= &local_f0) &&
      (&local_f0 < *(undefined8 **)this + *(int *)((longlong)this + 0xc))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 == *(int *)((longlong)this + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  local_108[0] = 0;
  *(undefined8 *)(*(longlong *)this + (longlong)iVar4 * 8) = local_f0;
  if (((*(undefined4 **)((longlong)this + 0x10) <= local_108) &&
      (local_108 < *(undefined4 **)((longlong)this + 0x10) + *(int *)((longlong)this + 0x1c))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)((longlong)this + 0x18);
  if (iVar4 == *(int *)((longlong)this + 0x1c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)((longlong)this + 0x10),
                       (int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar4 + 1;
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar4 * 4) = local_108[0];
  return;
}

// GetTransform @ 14e6f1590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::FAnimatedTransformStack::
GetTransform(void *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  double adVar4 [2];
  undefined1 auVar5 [16];
  double adVar6 [2];
  undefined1 auVar7 [16];
  double adVar8 [2];
  undefined1 auVar9 [16];
  double adVar10 [2];
  undefined1 auVar11 [16];
  double adVar12 [2];
  undefined1 auVar13 [16];
  double adVar14 [2];
  undefined1 auVar15 [16];
  double dVar16;
  bool bVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  TTransform<double> *local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)this + 8) == 0) {
    dVar16 = *(double *)((longlong)this + 0x38);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)((longlong)this + 0x30);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar16;
    dVar16 = *(double *)((longlong)this + 0x48);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)((longlong)this + 0x40);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar16;
    dVar16 = *(double *)((longlong)this + 0x58);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)((longlong)this + 0x50);
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar16;
    dVar16 = *(double *)((longlong)this + 0x68);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)((longlong)this + 0x60);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar16;
    dVar16 = *(double *)((longlong)this + 0x78);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)((longlong)this + 0x70);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar16;
    dVar16 = *(double *)((longlong)this + 0x88);
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)((longlong)this + 0x80);
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar16;
  }
  else {
    local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    uVar21 = 0;
    adVar6[1]._0_4_ = SUB84(local_a8.Rotation.XY.m128d_f64[1],0);
    adVar6[0] = local_a8.Rotation.XY.m128d_f64[0];
    adVar6[1]._4_4_ = (int)((ulonglong)local_a8.Rotation.XY.m128d_f64[1] >> 0x20);
    local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    adVar8[1]._0_4_ = SUB84(local_a8.Rotation.ZW.m128d_f64[1],0);
    adVar8[0] = local_a8.Rotation.ZW.m128d_f64[0];
    adVar8[1]._4_4_ = (int)((ulonglong)local_a8.Rotation.ZW.m128d_f64[1] >> 0x20);
    local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    adVar10[1]._0_4_ = SUB84(local_a8.Translation.XY.m128d_f64[1],0);
    adVar10[0] = local_a8.Translation.XY.m128d_f64[0];
    adVar10[1]._4_4_ = (int)((ulonglong)local_a8.Translation.XY.m128d_f64[1] >> 0x20);
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    adVar12[1]._0_4_ = SUB84(local_a8.Translation.ZW.m128d_f64[1],0);
    adVar12[0] = local_a8.Translation.ZW.m128d_f64[0];
    adVar12[1]._4_4_ = (int)((ulonglong)local_a8.Translation.ZW.m128d_f64[1] >> 0x20);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    adVar14[1]._0_4_ = SUB84(local_a8.Scale3D.XY.m128d_f64[1],0);
    adVar14[0] = local_a8.Scale3D.XY.m128d_f64[0];
    adVar14[1]._4_4_ = (int)((ulonglong)local_a8.Scale3D.XY.m128d_f64[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    adVar4[1]._0_4_ = SUB84(local_a8.Scale3D.ZW.m128d_f64[1],0);
    adVar4[0] = local_a8.Scale3D.ZW.m128d_f64[0];
    adVar4[1]._4_4_ = (int)((ulonglong)local_a8.Scale3D.ZW.m128d_f64[1] >> 0x20);
    if (0 < *(int *)((longlong)this + 8)) {
      lVar22 = 0;
      lVar23 = 0;
      local_b0 = __return_storage_ptr__;
      local_a8.Rotation.XY.m128d_f64 = adVar6;
      local_a8.Rotation.ZW.m128d_f64 = adVar8;
      local_a8.Translation.XY.m128d_f64 = adVar10;
      local_a8.Translation.ZW.m128d_f64 = adVar12;
      local_a8.Scale3D.XY.m128d_f64 = adVar14;
      local_a8.Scale3D.ZW.m128d_f64 = adVar4;
      do {
        uVar18 = 0;
        if ((int)uVar21 < *(int *)((longlong)this + 0x18)) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_c8 = (longlong)(int)uVar21;
          local_c0 = (longlong)*(int *)((longlong)this + 0x18);
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            pTVar19 = (TTransform<double> *)(*pcVar3)();
            return pTVar19;
          }
        }
        uVar20 = param_1 - *(int *)(*(longlong *)((longlong)this + 0x10) + lVar23);
        uVar18 = 0;
        if ((int)uVar21 < *(int *)((longlong)this + 8)) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_c8 = (longlong)(int)uVar21;
          local_c0 = (longlong)*(int *)((longlong)this + 8);
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            pTVar19 = (TTransform<double> *)(*pcVar3)();
            return pTVar19;
          }
        }
        plVar2 = *(longlong **)(lVar22 + *(longlong *)this);
        if ((int)uVar20 < 0) {
LAB_14e6f1796:
          iVar1 = (int)plVar2[1];
          if ((int)uVar20 < iVar1) {
            if (iVar1 < 1) {
              local_c8 = 0;
              local_c0 = (longlong)iVar1;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar3 = (code *)swi(3);
                pTVar19 = (TTransform<double> *)(*pcVar3)();
                return pTVar19;
              }
            }
            pTVar19 = (TTransform<double> *)*plVar2;
          }
          else {
            uVar20 = iVar1 - 1;
            uVar18 = 0;
            if ((int)uVar20 < iVar1) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_c8 = (longlong)(int)uVar20;
              local_c0 = (longlong)iVar1;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar3 = (code *)swi(3);
                pTVar19 = (TTransform<double> *)(*pcVar3)();
                return pTVar19;
              }
            }
            pTVar19 = (TTransform<double> *)((longlong)((int)plVar2[1] + -1) * 0x60 + *plVar2);
          }
        }
        else {
          iVar1 = (int)plVar2[1];
          if (iVar1 <= (int)uVar20) goto LAB_14e6f1796;
          uVar18 = 0;
          if ((int)uVar20 < iVar1) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if (uVar18 == 0) {
            local_c8 = (longlong)(int)uVar20;
            local_c0 = (longlong)iVar1;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar3 = (code *)swi(3);
              pTVar19 = (TTransform<double> *)(*pcVar3)();
              return pTVar19;
            }
          }
          pTVar19 = (TTransform<double> *)((longlong)(int)uVar20 * 0x60 + *plVar2);
        }
        UE::Math::TTransform<double>::Multiply(&local_a8,&local_a8,pTVar19);
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 4;
        lVar22 = lVar22 + 8;
      } while ((int)uVar21 < *(int *)((longlong)this + 8));
      __return_storage_ptr__ = local_b0;
    }
    auVar7._8_4_ = SUB84(local_a8.Rotation.XY.m128d_f64[1],0);
    auVar7._0_8_ = local_a8.Rotation.XY.m128d_f64[0];
    auVar7._12_4_ = (int)((ulonglong)local_a8.Rotation.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
    auVar9._8_4_ = SUB84(local_a8.Rotation.ZW.m128d_f64[1],0);
    auVar9._0_8_ = local_a8.Rotation.ZW.m128d_f64[0];
    auVar9._12_4_ = (int)((ulonglong)local_a8.Rotation.ZW.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar9;
    auVar11._8_4_ = SUB84(local_a8.Translation.XY.m128d_f64[1],0);
    auVar11._0_8_ = local_a8.Translation.XY.m128d_f64[0];
    auVar11._12_4_ = (int)((ulonglong)local_a8.Translation.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
    auVar13._8_4_ = SUB84(local_a8.Translation.ZW.m128d_f64[1],0);
    auVar13._0_8_ = local_a8.Translation.ZW.m128d_f64[0];
    auVar13._12_4_ = (int)((ulonglong)local_a8.Translation.ZW.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar13;
    auVar15._8_4_ = SUB84(local_a8.Scale3D.XY.m128d_f64[1],0);
    auVar15._0_8_ = local_a8.Scale3D.XY.m128d_f64[0];
    auVar15._12_4_ = (int)((ulonglong)local_a8.Scale3D.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar15;
    auVar5._8_4_ = SUB84(local_a8.Scale3D.ZW.m128d_f64[1],0);
    auVar5._0_8_ = local_a8.Scale3D.ZW.m128d_f64[0];
    auVar5._12_4_ = (int)((ulonglong)local_a8.Scale3D.ZW.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar5;
  }
  return __return_storage_ptr__;
}

