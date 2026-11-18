// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 17

// PopulateOverlay<UE::Math::TVector<float>,int> @ 14c79b330

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlay<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *param_4,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *param_5,
          TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *param_6)

{
  TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> local_28;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> local_18;
  
  local_28._0_8_ = *(undefined8 *)param_4;
  local_28._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int>
            (this,param_1,param_2,&local_18,&local_28);
  local_18._0_8_ = *(undefined8 *)param_6;
  local_18._8_8_ = *(undefined8 *)&param_6->field_0x8;
  local_28._0_8_ = *(undefined8 *)param_5;
  local_28._8_8_ = *(undefined8 *)&param_5->field_0x8;
  PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_>
            (this,param_1,(TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_18,true);
  return;
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int> @ 14c79b3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint *puVar18;
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *pTVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStack_118 [32];
  uint *local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  FIndex3i_u_0 local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  float local_c0 [2];
  int local_b8;
  undefined4 local_b4;
  float local_b0 [2];
  longlong local_a8;
  FScriptContainerElement *local_a0;
  float local_98 [2];
  float local_90 [2];
  float local_88 [2];
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *local_80;
  undefined8 local_78;
  int local_70;
  float local_68 [2];
  TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *local_60;
  uint local_58;
  uint local_54;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar12 = param_2->ArrayNum;
  local_60 = param_4;
  local_a8 = *(longlong *)param_1;
  if (iVar12 == 0) {
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar7 = -1;
  pFVar16 = pFVar15 + (longlong)iVar12 * 4;
  local_80 = this;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      local_e8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_e8);
    }
    if (pFVar15 == pFVar16) break;
    iVar4 = *(int *)pFVar15;
    if (*(int *)pFVar15 < iVar7) {
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    pFVar15 = pFVar15 + 4;
  }
  local_b8 = -1;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_d0,&local_b8,iVar7 + 1);
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar12 = param_2->ArrayNum;
  local_a0 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar15 = local_a0;
    if (param_2->ArrayNum != iVar12) {
      local_e7[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e7);
    }
    if (pFVar16 == pFVar15) break;
    (**(code **)param_3)(local_68,*(undefined8 *)&param_3->field_0x8,pFVar16);
    iVar7 = TDynamicMeshOverlay<float,2>::AppendElement
                      ((TDynamicMeshOverlay<float,2> *)param_1,local_68);
    uVar22 = *(uint *)pFVar16;
    uVar14 = 0;
    if ((int)uVar22 < local_d0.ArrayNum) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_f8 = (uint *)(longlong)(int)uVar22, local_f0 = (longlong)local_d0.ArrayNum,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = pFVar16 + 4;
    *(int *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = iVar7;
  }
  uVar17 = 0;
  uVar22 = *(int *)(local_a8 + 0x140) * 0x200 + *(int *)(local_a8 + 0x144);
  pTVar19 = local_80;
  lVar21 = local_a8;
  if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_a8 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar14 = 1;
    if ((int)uVar22 < 2) goto joined_r0x00014c79b5b5;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_a8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014c79b5b5:
  if (uVar14 == uVar22) {
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    return;
  }
  do {
    uVar14 = (uint)uVar17;
    uVar8 = 0;
    if ((int)uVar14 < *(int *)&pTVar19->field_0x18) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_f8 = (uint *)(longlong)(int)uVar14;
      local_f0 = (longlong)*(int *)&pTVar19->field_0x18;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_f8 = local_50;
    local_a0 = (FScriptContainerElement *)(longlong)(int)uVar14;
    local_b4 = *(undefined4 *)(*(longlong *)&pTVar19->field_0x10 + (longlong)local_a0 * 4);
    cVar6 = (**(code **)local_60)(*(undefined8 *)&local_60->field_0x8,&local_b4,&local_58,&local_54)
    ;
    if (cVar6 != '\0') {
      puVar20 = (uint *)(longlong)(int)local_50[0];
      uVar8 = 0;
      if ((int)local_50[0] < local_d0.ArrayNum) {
        uVar8 = ~local_50[0] >> 0x1f;
      }
      if (uVar8 == 0) {
        local_f8 = puVar20;
        local_f0 = (longlong)local_d0.ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar18 = (uint *)(longlong)(int)local_54;
      uVar8 = *(uint *)(local_d0.AllocatorInstance.Data + (longlong)puVar20 * 4);
      uVar9 = 0;
      if ((int)local_54 < local_d0.ArrayNum) {
        uVar9 = ~local_54 >> 0x1f;
      }
      iVar12 = local_d0.ArrayNum;
      if (uVar9 == 0) {
        local_f0 = (longlong)local_d0.ArrayNum;
        local_f8 = puVar18;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = local_d0.ArrayNum;
      }
      puVar20 = (uint *)(longlong)(int)local_58;
      uVar9 = *(uint *)(local_d0.AllocatorInstance.Data + (longlong)puVar18 * 4);
      uVar10 = 0;
      if ((int)local_58 < iVar12) {
        uVar10 = ~local_58 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_f0 = (longlong)iVar12;
        local_f8 = puVar20;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar11 = (ulonglong)((uint)local_a0 & 0x1ff);
      local_e0._s_0.A = *(undefined4 *)(local_d0.AllocatorInstance.Data + (longlong)puVar20 * 4);
      lVar21 = *(longlong *)(*(longlong *)(local_a8 + 0x130) + (uVar17 >> 9) * 8);
      local_78 = *(undefined8 *)(lVar21 + uVar11 * 0xc);
      iVar12 = *(int *)(lVar21 + 8 + uVar11 * 0xc);
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_e0._s_0.A >> 9) * 8) +
                      (ulonglong)(local_e0._s_0.A & 0x1ff) * 4);
      local_e0._s_0.B = uVar9;
      local_e0._s_0.C = uVar8;
      local_70 = iVar12;
      if ((iVar7 != -1) && (iVar7 != (int)local_78)) {
        (**(code **)param_3)(local_c0,*(undefined8 *)&param_3->field_0x8,&local_58);
        local_e0._s_0.A =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_c0);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_e0._s_0.B >> 9) * 8) +
                      (ulonglong)(local_e0._s_0.B & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != local_78._4_4_)) {
        (**(code **)param_3)(local_c0,*(undefined8 *)&param_3->field_0x8,&local_54);
        local_e0._s_0.B =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_c0);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_e0._s_0.C >> 9) * 8) +
                      (ulonglong)(local_e0._s_0.C & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != iVar12)) {
        (**(code **)param_3)(local_c0,*(undefined8 *)&param_3->field_0x8,local_50);
        local_e0._s_0.C =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_c0);
      }
      if (local_e0._s_0.A == local_e0._s_0.B) {
        if (local_e0._s_0.A != local_e0._s_0.C) {
          (**(code **)param_3)(local_98,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_e0._s_0.A =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)param_1,local_98);
          local_e0._s_0.B =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)param_1,local_98);
          goto LAB_14c79b8ea;
        }
        (**(code **)param_3)(local_b0);
        local_e0._s_0.A =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        local_e0._s_0.B =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14c79b94b:
        local_e0._s_0.C =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,pfVar13);
      }
      else {
LAB_14c79b8ea:
        if (local_e0._s_0.A == local_e0._s_0.C) {
          (**(code **)param_3)(local_90,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_e0._s_0.A =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)param_1,local_90);
          local_e0._s_0.C =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)param_1,local_90);
        }
        if (local_e0._s_0.B == local_e0._s_0.C) {
          (**(code **)param_3)(local_88,*(undefined8 *)&param_3->field_0x8,&local_54);
          local_e0._s_0.B =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)param_1,local_88);
          pfVar13 = local_88;
          goto LAB_14c79b94b;
        }
      }
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar14,(FIndex3i *)&local_e0._s_0,true);
      pTVar19 = local_80;
      lVar21 = local_a8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79b5b5;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79b5b5;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int> @ 14c79ba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint *puVar18;
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *pTVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStack_158 [32];
  uint *local_138;
  longlong local_130;
  undefined1 local_128;
  undefined1 local_127 [7];
  FIndex3i_u_0 local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  FScriptContainerElement *local_f0;
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *local_e8;
  float local_d8 [4];
  undefined8 local_c8;
  int local_c0;
  TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *local_b8;
  float local_a8 [4];
  float local_98 [4];
  float local_88 [4];
  float local_78 [4];
  float local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar12 = param_2->ArrayNum;
  local_b8 = param_4;
  local_f8 = *(longlong *)param_1;
  if (iVar12 == 0) {
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar7 = -1;
  pFVar16 = pFVar15 + (longlong)iVar12 * 4;
  local_e8 = this;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      local_128 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if (pFVar15 == pFVar16) break;
    iVar4 = *(int *)pFVar15;
    if (*(int *)pFVar15 < iVar7) {
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    pFVar15 = pFVar15 + 4;
  }
  local_100 = -1;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_110,&local_100,iVar7 + 1);
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar12 = param_2->ArrayNum;
  local_f0 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar15 = local_f0;
    if (param_2->ArrayNum != iVar12) {
      local_127[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_127);
    }
    if (pFVar16 == pFVar15) break;
    (**(code **)param_3)(local_68,*(undefined8 *)&param_3->field_0x8,pFVar16);
    iVar7 = TDynamicMeshOverlay<float,4>::AppendElement
                      ((TDynamicMeshOverlay<float,4> *)param_1,local_68);
    uVar22 = *(uint *)pFVar16;
    uVar14 = 0;
    if ((int)uVar22 < local_110.ArrayNum) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_138 = (uint *)(longlong)(int)uVar22, local_130 = (longlong)local_110.ArrayNum,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = pFVar16 + 4;
    *(int *)(local_110.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = iVar7;
  }
  uVar17 = 0;
  uVar22 = *(int *)(local_f8 + 0x140) * 0x200 + *(int *)(local_f8 + 0x144);
  pTVar19 = local_e8;
  lVar21 = local_f8;
  if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_f8 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar14 = 1;
    if ((int)uVar22 < 2) goto joined_r0x00014c79bc15;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_f8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014c79bc15:
  if (uVar14 == uVar22) {
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    return;
  }
  do {
    uVar14 = (uint)uVar17;
    uVar8 = 0;
    if ((int)uVar14 < *(int *)&pTVar19->field_0x18) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_138 = (uint *)(longlong)(int)uVar14;
      local_130 = (longlong)*(int *)&pTVar19->field_0x18;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_138 = local_50;
    local_f0 = (FScriptContainerElement *)(longlong)(int)uVar14;
    local_fc = *(undefined4 *)(*(longlong *)&pTVar19->field_0x10 + (longlong)local_f0 * 4);
    cVar6 = (**(code **)local_b8)(*(undefined8 *)&local_b8->field_0x8,&local_fc,&local_58,&local_54)
    ;
    if (cVar6 != '\0') {
      puVar20 = (uint *)(longlong)(int)local_50[0];
      uVar8 = 0;
      if ((int)local_50[0] < local_110.ArrayNum) {
        uVar8 = ~local_50[0] >> 0x1f;
      }
      if (uVar8 == 0) {
        local_138 = puVar20;
        local_130 = (longlong)local_110.ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar18 = (uint *)(longlong)(int)local_54;
      uVar8 = *(uint *)(local_110.AllocatorInstance.Data + (longlong)puVar20 * 4);
      uVar9 = 0;
      if ((int)local_54 < local_110.ArrayNum) {
        uVar9 = ~local_54 >> 0x1f;
      }
      iVar12 = local_110.ArrayNum;
      if (uVar9 == 0) {
        local_130 = (longlong)local_110.ArrayNum;
        local_138 = puVar18;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = local_110.ArrayNum;
      }
      puVar20 = (uint *)(longlong)(int)local_58;
      uVar9 = *(uint *)(local_110.AllocatorInstance.Data + (longlong)puVar18 * 4);
      uVar10 = 0;
      if ((int)local_58 < iVar12) {
        uVar10 = ~local_58 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_130 = (longlong)iVar12;
        local_138 = puVar20;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar11 = (ulonglong)((uint)local_f0 & 0x1ff);
      local_120._s_0.A = *(undefined4 *)(local_110.AllocatorInstance.Data + (longlong)puVar20 * 4);
      lVar21 = *(longlong *)(*(longlong *)(local_f8 + 0x130) + (uVar17 >> 9) * 8);
      local_c8 = *(undefined8 *)(lVar21 + uVar11 * 0xc);
      iVar12 = *(int *)(lVar21 + 8 + uVar11 * 0xc);
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_120._s_0.A >> 9) * 8) +
                      (ulonglong)(local_120._s_0.A & 0x1ff) * 4);
      local_120._s_0.B = uVar9;
      local_120._s_0.C = uVar8;
      local_c0 = iVar12;
      if ((iVar7 != -1) && (iVar7 != (int)local_c8)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,&local_58);
        local_120._s_0.A =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_d8);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_120._s_0.B >> 9) * 8) +
                      (ulonglong)(local_120._s_0.B & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != local_c8._4_4_)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,&local_54);
        local_120._s_0.B =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_d8);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_120._s_0.C >> 9) * 8) +
                      (ulonglong)(local_120._s_0.C & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != iVar12)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,local_50);
        local_120._s_0.C =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_d8);
      }
      if (local_120._s_0.A == local_120._s_0.B) {
        if (local_120._s_0.A != local_120._s_0.C) {
          (**(code **)param_3)(local_98,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_120._s_0.A =
               TDynamicMeshOverlay<float,4>::AppendElement
                         ((TDynamicMeshOverlay<float,4> *)param_1,local_98);
          local_120._s_0.B =
               TDynamicMeshOverlay<float,4>::AppendElement
                         ((TDynamicMeshOverlay<float,4> *)param_1,local_98);
          goto LAB_14c79bf55;
        }
        (**(code **)param_3)(local_a8);
        local_120._s_0.A =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        local_120._s_0.B =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        pfVar13 = local_a8;
LAB_14c79bfb6:
        local_120._s_0.C =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,pfVar13);
      }
      else {
LAB_14c79bf55:
        if (local_120._s_0.A == local_120._s_0.C) {
          (**(code **)param_3)(local_88,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_120._s_0.A =
               TDynamicMeshOverlay<float,4>::AppendElement
                         ((TDynamicMeshOverlay<float,4> *)param_1,local_88);
          local_120._s_0.C =
               TDynamicMeshOverlay<float,4>::AppendElement
                         ((TDynamicMeshOverlay<float,4> *)param_1,local_88);
        }
        if (local_120._s_0.B == local_120._s_0.C) {
          (**(code **)param_3)(local_78,*(undefined8 *)&param_3->field_0x8,&local_54);
          local_120._s_0.B =
               TDynamicMeshOverlay<float,4>::AppendElement
                         ((TDynamicMeshOverlay<float,4> *)param_1,local_78);
          pfVar13 = local_78;
          goto LAB_14c79bfb6;
        }
      }
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar14,(FIndex3i *)&local_120._s_0,true);
      pTVar19 = local_e8;
      lVar21 = local_f8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79bc15;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79bc15;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int> @ 14c79c090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint *puVar18;
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *pTVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStack_148 [32];
  uint *local_128;
  longlong local_120;
  undefined1 local_118;
  undefined1 local_117 [7];
  FIndex3i_u_0 local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  FScriptContainerElement *local_e0;
  float local_d8 [4];
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *local_c8;
  undefined8 local_c0;
  int local_b8;
  float local_b0 [4];
  TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *local_a0;
  float local_98 [4];
  float local_88 [4];
  float local_78 [4];
  float local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  iVar12 = param_2->ArrayNum;
  local_a0 = param_4;
  local_e8 = *(longlong *)param_1;
  if (iVar12 == 0) {
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar7 = -1;
  pFVar16 = pFVar15 + (longlong)iVar12 * 4;
  local_c8 = this;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      local_118 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_118);
    }
    if (pFVar15 == pFVar16) break;
    iVar4 = *(int *)pFVar15;
    if (*(int *)pFVar15 < iVar7) {
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    pFVar15 = pFVar15 + 4;
  }
  local_f0 = -1;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_100,&local_f0,iVar7 + 1);
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar12 = param_2->ArrayNum;
  local_e0 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar15 = local_e0;
    if (param_2->ArrayNum != iVar12) {
      local_117[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_117);
    }
    if (pFVar16 == pFVar15) break;
    (**(code **)param_3)(local_68,*(undefined8 *)&param_3->field_0x8,pFVar16);
    iVar7 = TDynamicMeshOverlay<float,3>::AppendElement
                      ((TDynamicMeshOverlay<float,3> *)param_1,local_68);
    uVar22 = *(uint *)pFVar16;
    uVar14 = 0;
    if ((int)uVar22 < local_100.ArrayNum) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_128 = (uint *)(longlong)(int)uVar22, local_120 = (longlong)local_100.ArrayNum,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = pFVar16 + 4;
    *(int *)(local_100.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = iVar7;
  }
  uVar17 = 0;
  uVar22 = *(int *)(local_e8 + 0x140) * 0x200 + *(int *)(local_e8 + 0x144);
  pTVar19 = local_c8;
  lVar21 = local_e8;
  if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_e8 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar14 = 1;
    if ((int)uVar22 < 2) goto joined_r0x00014c79c275;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_e8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014c79c275:
  if (uVar14 == uVar22) {
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    return;
  }
  do {
    uVar14 = (uint)uVar17;
    uVar8 = 0;
    if ((int)uVar14 < *(int *)&pTVar19->field_0x18) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_128 = (uint *)(longlong)(int)uVar14;
      local_120 = (longlong)*(int *)&pTVar19->field_0x18;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_128 = local_50;
    local_e0 = (FScriptContainerElement *)(longlong)(int)uVar14;
    local_ec = *(undefined4 *)(*(longlong *)&pTVar19->field_0x10 + (longlong)local_e0 * 4);
    cVar6 = (**(code **)local_a0)(*(undefined8 *)&local_a0->field_0x8,&local_ec,&local_58,&local_54)
    ;
    if (cVar6 != '\0') {
      puVar20 = (uint *)(longlong)(int)local_50[0];
      uVar8 = 0;
      if ((int)local_50[0] < local_100.ArrayNum) {
        uVar8 = ~local_50[0] >> 0x1f;
      }
      if (uVar8 == 0) {
        local_128 = puVar20;
        local_120 = (longlong)local_100.ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar18 = (uint *)(longlong)(int)local_54;
      uVar8 = *(uint *)(local_100.AllocatorInstance.Data + (longlong)puVar20 * 4);
      uVar9 = 0;
      if ((int)local_54 < local_100.ArrayNum) {
        uVar9 = ~local_54 >> 0x1f;
      }
      iVar12 = local_100.ArrayNum;
      if (uVar9 == 0) {
        local_120 = (longlong)local_100.ArrayNum;
        local_128 = puVar18;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = local_100.ArrayNum;
      }
      puVar20 = (uint *)(longlong)(int)local_58;
      uVar9 = *(uint *)(local_100.AllocatorInstance.Data + (longlong)puVar18 * 4);
      uVar10 = 0;
      if ((int)local_58 < iVar12) {
        uVar10 = ~local_58 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_120 = (longlong)iVar12;
        local_128 = puVar20;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar11 = (ulonglong)((uint)local_e0 & 0x1ff);
      local_110._s_0.A = *(undefined4 *)(local_100.AllocatorInstance.Data + (longlong)puVar20 * 4);
      lVar21 = *(longlong *)(*(longlong *)(local_e8 + 0x130) + (uVar17 >> 9) * 8);
      local_c0 = *(undefined8 *)(lVar21 + uVar11 * 0xc);
      iVar12 = *(int *)(lVar21 + 8 + uVar11 * 0xc);
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_110._s_0.A >> 9) * 8) +
                      (ulonglong)(local_110._s_0.A & 0x1ff) * 4);
      local_110._s_0.B = uVar9;
      local_110._s_0.C = uVar8;
      local_b8 = iVar12;
      if ((iVar7 != -1) && (iVar7 != (int)local_c0)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,&local_58);
        local_110._s_0.A =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_d8);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_110._s_0.B >> 9) * 8) +
                      (ulonglong)(local_110._s_0.B & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != local_c0._4_4_)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,&local_54);
        local_110._s_0.B =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_d8);
      }
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x60 +
                        (ulonglong)((uint)local_110._s_0.C >> 9) * 8) +
                      (ulonglong)(local_110._s_0.C & 0x1ff) * 4);
      if ((iVar7 != -1) && (iVar7 != iVar12)) {
        (**(code **)param_3)(local_d8,*(undefined8 *)&param_3->field_0x8,local_50);
        local_110._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_d8);
      }
      if (local_110._s_0.A == local_110._s_0.B) {
        if (local_110._s_0.A != local_110._s_0.C) {
          (**(code **)param_3)(local_98,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_110._s_0.A =
               TDynamicMeshOverlay<float,3>::AppendElement
                         ((TDynamicMeshOverlay<float,3> *)param_1,local_98);
          local_110._s_0.B =
               TDynamicMeshOverlay<float,3>::AppendElement
                         ((TDynamicMeshOverlay<float,3> *)param_1,local_98);
          goto LAB_14c79c5bb;
        }
        (**(code **)param_3)(local_b0);
        local_110._s_0.A =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        local_110._s_0.B =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14c79c61c:
        local_110._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,pfVar13);
      }
      else {
LAB_14c79c5bb:
        if (local_110._s_0.A == local_110._s_0.C) {
          (**(code **)param_3)(local_88,*(undefined8 *)&param_3->field_0x8,&local_58);
          local_110._s_0.A =
               TDynamicMeshOverlay<float,3>::AppendElement
                         ((TDynamicMeshOverlay<float,3> *)param_1,local_88);
          local_110._s_0.C =
               TDynamicMeshOverlay<float,3>::AppendElement
                         ((TDynamicMeshOverlay<float,3> *)param_1,local_88);
        }
        if (local_110._s_0.B == local_110._s_0.C) {
          (**(code **)param_3)(local_78,*(undefined8 *)&param_3->field_0x8,&local_54);
          local_110._s_0.B =
               TDynamicMeshOverlay<float,3>::AppendElement
                         ((TDynamicMeshOverlay<float,3> *)param_1,local_78);
          pfVar13 = local_78;
          goto LAB_14c79c61c;
        }
      }
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar14,(FIndex3i *)&local_110._s_0,true);
      pTVar19 = local_c8;
      lVar21 = local_e8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79c275;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c79c275;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_> @ 14c79c6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *param_2,
          TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *param_3,bool param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  longlong local_130;
  int local_128 [2];
  undefined8 local_120;
  FIndex3i_u_0 local_118;
  TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>_const_&,int_const_&>
  local_108;
  int *local_f8;
  undefined8 local_f0;
  int local_e8;
  TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *local_e0;
  int local_d8;
  undefined8 local_d4;
  TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int,0>,FDefaultSetAllocator>
  local_c8;
  TDynamicMeshOverlay<float,2> *local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  FVar13 = (ForElementType<FSetElementId>)0x0;
  lVar1 = *(longlong *)param_1;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  uVar9 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  FVar11 = FVar13;
  local_78 = (TDynamicMeshOverlay<float,2> *)param_1;
  local_e0 = param_3;
  if ((uVar9 != 0) &&
     (FVar11 = (ForElementType<FSetElementId>)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    FVar11 = (ForElementType<FSetElementId>)0x1;
    uVar10 = 1;
    if ((int)uVar9 < 2) goto joined_r0x00014c79c7d8;
    do {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar11 >> 9];
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
    } while ((int)FVar11._0_4_ < (int)uVar9);
  }
  uVar10 = FVar11._0_4_;
joined_r0x00014c79c7d8:
  if (uVar10 == uVar9) {
    local_c8.HashSize = 0;
    if (FVar13 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar13);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
    return;
  }
  do {
    uVar10 = FVar11._0_4_;
    if (*(int *)(*(longlong *)(*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar10 * 3 >> 9) * 8)
                + (ulonglong)(uVar10 * 3 & 0x1ff) * 4) < 0) {
      uVar5 = 0;
      if ((int)uVar10 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_138 = (undefined1 *)(longlong)(int)uVar10;
        local_130 = (longlong)*(int *)&this->field_0x18;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_138 = local_60;
      (**(code **)local_e0)
                (*(undefined8 *)&local_e0->field_0x8,
                 *(longlong *)&this->field_0x10 + (longlong)(int)uVar10 * 4,local_68,local_64);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + ((ulonglong)FVar11 >> 9) * 8);
      local_f0 = *(undefined8 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      iVar6 = *(int *)(lVar2 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      local_118._0_8_ = 0xffffffffffffffff;
      local_118._s_0.C = -1;
      local_e8 = iVar6;
      (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_68);
      if (param_4) {
        local_d8 = (int)local_f0;
        local_d4 = local_120;
        uVar5 = (*FCrc::MemCrc32Func)(&local_d8,0xc,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_c8.Hash.SecondaryData;
          }
          iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar12 != -1) {
            do {
              lVar2 = local_c8.Elements._0_8_ + (longlong)iVar12 * 0x18;
              if (((*(int *)(local_c8.Elements._0_8_ + (longlong)iVar12 * 0x18) == local_d8) &&
                  ((float)local_d4 == *(float *)(lVar2 + 4))) &&
                 (local_d4._4_4_ == *(float *)(lVar2 + 8))) {
                if (iVar12 != -1) {
                  piVar7 = (int *)(lVar2 + 0xc);
                  if (lVar2 == 0) {
                    piVar7 = (int *)0x0;
                  }
                  if (piVar7 != (int *)0x0) {
                    iVar12 = *piVar7;
                    goto LAB_14c79c9ba;
                  }
                }
                break;
              }
              iVar12 = *(int *)(lVar2 + 0x10);
            } while (iVar12 != -1);
          }
        }
        local_128[0] = TDynamicMeshOverlay<float,2>::AppendElement(local_78,(float *)&local_120);
        local_108.Value = &local_d8;
        local_f8 = local_128;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_108,(bool *)&local_108.Value);
        iVar12 = local_128[0];
LAB_14c79c9ba:
        local_118._s_0.A = iVar12;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_64);
        local_d8 = local_f0._4_4_;
        local_d4 = local_120;
        uVar5 = (*FCrc::MemCrc32Func)(&local_d8,0xc,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_c8.Hash.SecondaryData;
          }
          iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar12 != -1) {
            do {
              lVar2 = local_c8.Elements._0_8_ + (longlong)iVar12 * 0x18;
              if (((*(int *)(local_c8.Elements._0_8_ + (longlong)iVar12 * 0x18) == local_d8) &&
                  ((float)local_d4 == *(float *)(lVar2 + 4))) &&
                 (local_d4._4_4_ == *(float *)(lVar2 + 8))) {
                if (iVar12 != -1) {
                  piVar7 = (int *)(lVar2 + 0xc);
                  if (lVar2 == 0) {
                    piVar7 = (int *)0x0;
                  }
                  if (piVar7 != (int *)0x0) {
                    iVar12 = *piVar7;
                    goto LAB_14c79ca9a;
                  }
                }
                break;
              }
              iVar12 = *(int *)(lVar2 + 0x10);
            } while (iVar12 != -1);
          }
        }
        local_128[0] = TDynamicMeshOverlay<float,2>::AppendElement(local_78,(float *)&local_120);
        local_108.Value = &local_d8;
        local_f8 = local_128;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_108,(bool *)&local_108.Value);
        iVar12 = local_128[0];
LAB_14c79ca9a:
        local_118._s_0.B = iVar12;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_60);
        local_d4 = local_120;
        local_d8 = iVar6;
        uVar5 = (*FCrc::MemCrc32Func)(&local_d8,0xc,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_c8.Hash.SecondaryData;
          }
          iVar6 = *(int *)((longlong)FVar11 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              lVar2 = local_c8.Elements._0_8_ + (longlong)iVar6 * 0x18;
              if (((*(int *)(local_c8.Elements._0_8_ + (longlong)iVar6 * 0x18) == local_d8) &&
                  ((float)local_d4 == *(float *)(lVar2 + 4))) &&
                 (local_d4._4_4_ == *(float *)(lVar2 + 8))) {
                if (iVar6 != -1) {
                  piVar7 = (int *)(lVar2 + 0xc);
                  if (lVar2 == 0) {
                    piVar7 = (int *)0x0;
                  }
                  if (piVar7 != (int *)0x0) {
                    local_118._s_0.C = *piVar7;
                    goto LAB_14c79cc4d;
                  }
                }
                break;
              }
              iVar6 = *(int *)(lVar2 + 0x10);
            } while (iVar6 != -1);
          }
        }
        local_128[0] = TDynamicMeshOverlay<float,2>::AppendElement(local_78,(float *)&local_120);
        local_108.Value = &local_d8;
        local_f8 = local_128;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector2<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_108,(bool *)&local_108.Value);
        local_118._s_0.C = local_128[0];
      }
      else {
        iVar6 = TDynamicMeshOverlay<float,2>::AppendElement
                          ((TDynamicMeshOverlay<float,2> *)param_1,(float *)&local_120);
        local_118._s_0.A = iVar6;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_64);
        iVar6 = TDynamicMeshOverlay<float,2>::AppendElement
                          ((TDynamicMeshOverlay<float,2> *)param_1,(float *)&local_120);
        local_118._s_0.B = iVar6;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_60);
        local_118._s_0.C =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,(float *)&local_120);
      }
LAB_14c79cc4d:
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar10,(FIndex3i *)&local_118._s_0,true);
      FVar13 = local_c8.Hash.SecondaryData;
    }
    FVar11._0_4_ = uVar10 + 1;
    FVar11._4_4_ = 0;
    uVar10 = FVar11._0_4_;
    if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014c79c7d8;
    while( true ) {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar11 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
      uVar10 = FVar11._0_4_;
      if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014c79c7d8;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_> @ 14c79cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1,
          TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *param_2,
          TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *param_3,bool param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  ForElementType<FSetElementId> FVar14;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  longlong local_150;
  int local_148 [4];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int local_128 [4];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  FIndex3i_u_0 local_108;
  TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>_const_&,int_const_&>
  local_f8;
  int *local_e8;
  undefined8 local_e0;
  int local_d8;
  TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *local_d0;
  TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int,0>,FDefaultSetAllocator>
  local_c8;
  TDynamicMeshOverlay<float,4> *local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  FVar14 = (ForElementType<FSetElementId>)0x0;
  lVar1 = *(longlong *)param_1;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  uVar11 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  FVar13 = FVar14;
  local_78 = (TDynamicMeshOverlay<float,4> *)param_1;
  local_d0 = param_3;
  if ((uVar11 != 0) &&
     (FVar13 = (ForElementType<FSetElementId>)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    FVar13 = (ForElementType<FSetElementId>)0x1;
    uVar12 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014c79ce08;
    do {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar13 >> 9];
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
    } while ((int)FVar13._0_4_ < (int)uVar11);
  }
  uVar12 = FVar13._0_4_;
joined_r0x00014c79ce08:
  if (uVar12 == uVar11) {
    local_c8.HashSize = 0;
    if (FVar14 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar14);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
    return;
  }
  do {
    uVar12 = FVar13._0_4_;
    if (*(int *)(*(longlong *)(*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar12 * 3 >> 9) * 8)
                + (ulonglong)(uVar12 * 3 & 0x1ff) * 4) < 0) {
      uVar5 = 0;
      if ((int)uVar12 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_158 = (undefined1 *)(longlong)(int)uVar12;
        local_150 = (longlong)*(int *)&this->field_0x18;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_158 = local_60;
      (**(code **)local_d0)
                (*(undefined8 *)&local_d0->field_0x8,
                 *(longlong *)&this->field_0x10 + (longlong)(int)uVar12 * 4,local_68,local_64);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + ((ulonglong)FVar13 >> 9) * 8);
      local_e0 = *(undefined8 *)(lVar2 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
      iVar6 = *(int *)(lVar2 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
      local_108._0_8_ = 0xffffffffffffffff;
      local_108._s_0.C = -1;
      local_d8 = iVar6;
      (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_68);
      if (param_4) {
        local_118 = local_138;
        fStack_114 = fStack_134;
        fStack_110 = fStack_130;
        fStack_10c = fStack_12c;
        local_128[0] = (int)local_e0;
        uVar5 = (*FCrc::MemCrc32Func)(local_128,0x20,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_c8.Hash.SecondaryData;
          }
          iVar8 = *(int *)((longlong)FVar13 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          while (iVar8 != -1) {
            piVar9 = (int *)((longlong)iVar8 * 0x40 + local_c8.Elements._0_8_);
            if ((((*piVar9 == local_128[0]) && (local_118 == (float)piVar9[4])) &&
                (fStack_114 == (float)piVar9[5])) &&
               ((fStack_110 == (float)piVar9[6] && (fStack_10c == (float)piVar9[7])))) {
              if (iVar8 != -1) {
                piVar7 = piVar9 + 8;
                if (piVar9 == (int *)0x0) {
                  piVar7 = (int *)0x0;
                }
                if (piVar7 != (int *)0x0) {
                  iVar8 = *piVar7;
                  goto LAB_14c79d001;
                }
              }
              break;
            }
            iVar8 = piVar9[0xc];
          }
        }
        local_148[0] = TDynamicMeshOverlay<float,4>::AppendElement(local_78,&local_138);
        local_f8.Value = local_128;
        local_e8 = local_148;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_f8,(bool *)&local_f8.Value);
        iVar8 = local_148[0];
LAB_14c79d001:
        local_108._s_0.A = iVar8;
        (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_64);
        local_118 = local_138;
        fStack_114 = fStack_134;
        fStack_110 = fStack_130;
        fStack_10c = fStack_12c;
        local_128[0] = local_e0._4_4_;
        uVar5 = (*FCrc::MemCrc32Func)(local_128,0x20,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_c8.Hash.SecondaryData;
          }
          iVar8 = *(int *)((longlong)FVar13 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          while (iVar8 != -1) {
            piVar9 = (int *)((longlong)iVar8 * 0x40 + local_c8.Elements._0_8_);
            if (((*piVar9 == local_128[0]) && (local_118 == (float)piVar9[4])) &&
               ((fStack_114 == (float)piVar9[5] &&
                ((fStack_110 == (float)piVar9[6] && (fStack_10c == (float)piVar9[7])))))) {
              if (iVar8 != -1) {
                piVar7 = piVar9 + 8;
                if (piVar9 == (int *)0x0) {
                  piVar7 = (int *)0x0;
                }
                if (piVar7 != (int *)0x0) {
                  iVar8 = *piVar7;
                  goto LAB_14c79d101;
                }
              }
              break;
            }
            iVar8 = piVar9[0xc];
          }
        }
        local_148[0] = TDynamicMeshOverlay<float,4>::AppendElement(local_78,&local_138);
        local_f8.Value = local_128;
        local_e8 = local_148;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_f8,(bool *)&local_f8.Value);
        iVar8 = local_148[0];
LAB_14c79d101:
        local_108._s_0.B = iVar8;
        (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_60);
        local_118 = local_138;
        fStack_114 = fStack_134;
        fStack_110 = fStack_130;
        fStack_10c = fStack_12c;
        local_128[0] = iVar6;
        uVar5 = (*FCrc::MemCrc32Func)(local_128,0x20,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_c8.Hash.SecondaryData;
          }
          iVar6 = *(int *)((longlong)FVar13 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          while (iVar6 != -1) {
            piVar9 = (int *)((longlong)iVar6 * 0x40 + local_c8.Elements._0_8_);
            if ((((*piVar9 == local_128[0]) && (local_118 == (float)piVar9[4])) &&
                (fStack_114 == (float)piVar9[5])) &&
               ((fStack_110 == (float)piVar9[6] && (fStack_10c == (float)piVar9[7])))) {
              if (iVar6 != -1) {
                piVar7 = piVar9 + 8;
                if (piVar9 == (int *)0x0) {
                  piVar7 = (int *)0x0;
                }
                if (piVar7 != (int *)0x0) {
                  local_108._s_0.C = *piVar7;
                  goto LAB_14c79d2e0;
                }
              }
              break;
            }
            iVar6 = piVar9[0xc];
          }
        }
        local_148[0] = TDynamicMeshOverlay<float,4>::AppendElement(local_78,&local_138);
        local_f8.Value = local_128;
        local_e8 = local_148;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector4<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_f8,(bool *)&local_f8.Value);
        local_108._s_0.C = local_148[0];
      }
      else {
        iVar6 = TDynamicMeshOverlay<float,4>::AppendElement
                          ((TDynamicMeshOverlay<float,4> *)param_1,&local_138);
        local_108._s_0.A = iVar6;
        (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_64);
        iVar6 = TDynamicMeshOverlay<float,4>::AppendElement
                          ((TDynamicMeshOverlay<float,4> *)param_1,&local_138);
        local_108._s_0.B = iVar6;
        (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_60);
        local_108._s_0.C =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,&local_138);
      }
LAB_14c79d2e0:
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar12,(FIndex3i *)&local_108._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar13._0_4_ = uVar12 + 1;
    FVar13._4_4_ = 0;
    uVar12 = FVar13._0_4_;
    if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014c79ce08;
    while( true ) {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar13 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
      uVar12 = FVar13._0_4_;
      if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014c79ce08;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_> @ 14c79d3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_>
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *param_2,
          TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *param_3,bool param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  ForElementType<FSetElementId> FVar14;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  longlong local_140;
  int local_138 [2];
  int local_130;
  undefined8 local_12c;
  float local_124;
  undefined8 local_120;
  float local_118;
  FIndex3i_u_0 local_110;
  TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>_const_&,int_const_&>
  local_100;
  int *local_f0;
  undefined8 local_e8;
  int local_e0;
  TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *local_d8;
  TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int,0>,FDefaultSetAllocator>
  local_c8;
  TDynamicMeshOverlay<float,3> *local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  FVar14 = (ForElementType<FSetElementId>)0x0;
  lVar1 = *(longlong *)param_1;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  uVar10 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  FVar12 = FVar14;
  local_78 = (TDynamicMeshOverlay<float,3> *)param_1;
  local_d8 = param_3;
  if ((uVar10 != 0) &&
     (FVar12 = (ForElementType<FSetElementId>)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    FVar12 = (ForElementType<FSetElementId>)0x1;
    uVar11 = 1;
    if ((int)uVar10 < 2) goto joined_r0x00014c79d498;
    do {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar12 >> 9];
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
    } while ((int)FVar12._0_4_ < (int)uVar10);
  }
  uVar11 = FVar12._0_4_;
joined_r0x00014c79d498:
  if (uVar11 == uVar10) {
    local_c8.HashSize = 0;
    if (FVar14 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar14);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
    return;
  }
  do {
    uVar11 = FVar12._0_4_;
    if (*(int *)(*(longlong *)(*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar11 * 3 >> 9) * 8)
                + (ulonglong)(uVar11 * 3 & 0x1ff) * 4) < 0) {
      uVar5 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_148 = (undefined1 *)(longlong)(int)uVar11;
        local_140 = (longlong)*(int *)&this->field_0x18;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_148 = local_60;
      (**(code **)local_d8)
                (*(undefined8 *)&local_d8->field_0x8,
                 *(longlong *)&this->field_0x10 + (longlong)(int)uVar11 * 4,local_68,local_64);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + ((ulonglong)FVar12 >> 9) * 8);
      local_e8 = *(undefined8 *)(lVar2 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      iVar6 = *(int *)(lVar2 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_110._0_8_ = 0xffffffffffffffff;
      local_110._s_0.C = -1;
      local_e0 = iVar6;
      (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_68);
      if (param_4) {
        local_130 = (int)local_e8;
        local_124 = local_118;
        local_12c = local_120;
        uVar5 = (*FCrc::MemCrc32Func)(&local_130,0x10,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_c8.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar13 != -1) {
            do {
              piVar7 = (int *)((longlong)iVar13 * 0x1c + local_c8.Elements._0_8_);
              if ((((*piVar7 == local_130) && ((float)local_12c == (float)piVar7[1])) &&
                  (local_12c._4_4_ == (float)piVar7[2])) && (local_124 == (float)piVar7[3])) {
                if (iVar13 != -1) {
                  piVar8 = piVar7 + 4;
                  if (piVar7 == (int *)0x0) {
                    piVar8 = (int *)0x0;
                  }
                  if (piVar8 != (int *)0x0) {
                    iVar13 = *piVar8;
                    goto LAB_14c79d68f;
                  }
                }
                break;
              }
              iVar13 = piVar7[5];
            } while (iVar13 != -1);
          }
        }
        local_138[0] = TDynamicMeshOverlay<float,3>::AppendElement(local_78,(float *)&local_120);
        local_100.Value = &local_130;
        local_f0 = local_138;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_100,(bool *)&local_100.Value);
        iVar13 = local_138[0];
LAB_14c79d68f:
        local_110._s_0.A = iVar13;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_64);
        local_130 = local_e8._4_4_;
        local_124 = local_118;
        local_12c = local_120;
        uVar5 = (*FCrc::MemCrc32Func)(&local_130,0x10,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_c8.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar13 != -1) {
            do {
              piVar7 = (int *)((longlong)iVar13 * 0x1c + local_c8.Elements._0_8_);
              if (((*piVar7 == local_130) && ((float)local_12c == (float)piVar7[1])) &&
                 ((local_12c._4_4_ == (float)piVar7[2] && (local_124 == (float)piVar7[3])))) {
                if (iVar13 != -1) {
                  piVar8 = piVar7 + 4;
                  if (piVar7 == (int *)0x0) {
                    piVar8 = (int *)0x0;
                  }
                  if (piVar8 != (int *)0x0) {
                    iVar13 = *piVar8;
                    goto LAB_14c79d78f;
                  }
                }
                break;
              }
              iVar13 = piVar7[5];
            } while (iVar13 != -1);
          }
        }
        local_138[0] = TDynamicMeshOverlay<float,3>::AppendElement(local_78,(float *)&local_120);
        local_100.Value = &local_130;
        local_f0 = local_138;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_100,(bool *)&local_100.Value);
        iVar13 = local_138[0];
LAB_14c79d78f:
        local_110._s_0.B = iVar13;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_60);
        local_12c = local_120;
        local_124 = local_118;
        local_130 = iVar6;
        uVar5 = (*FCrc::MemCrc32Func)(&local_130,0x10,0);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_c8.Hash.SecondaryData;
          }
          iVar6 = *(int *)((longlong)FVar12 + (ulonglong)(local_c8.HashSize - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              piVar7 = (int *)((longlong)iVar6 * 0x1c + local_c8.Elements._0_8_);
              if (((*piVar7 == local_130) && ((float)local_12c == (float)piVar7[1])) &&
                 ((local_12c._4_4_ == (float)piVar7[2] && (local_124 == (float)piVar7[3])))) {
                if (iVar6 != -1) {
                  piVar8 = piVar7 + 4;
                  if (piVar7 == (int *)0x0) {
                    piVar8 = (int *)0x0;
                  }
                  if (piVar8 != (int *)0x0) {
                    local_110._s_0.C = *piVar8;
                    goto LAB_14c79d962;
                  }
                }
                break;
              }
              iVar6 = piVar7[5];
            } while (iVar6 != -1);
          }
        }
        local_138[0] = TDynamicMeshOverlay<float,3>::AppendElement(local_78,(float *)&local_120);
        local_100.Value = &local_130;
        local_f0 = local_138;
        TSet<TTuple<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>,int,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::TVertexAttr<UE::Math::TVector<float>_>_const_&,int_const_&>_>
                  (&local_c8,&local_100,(bool *)&local_100.Value);
        local_110._s_0.C = local_138[0];
      }
      else {
        iVar6 = TDynamicMeshOverlay<float,3>::AppendElement
                          ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_120);
        local_110._s_0.A = iVar6;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_64);
        iVar6 = TDynamicMeshOverlay<float,3>::AppendElement
                          ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_120);
        local_110._s_0.B = iVar6;
        (**(code **)param_2)(&local_120,*(undefined8 *)&param_2->field_0x8,local_60);
        local_110._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_120);
      }
LAB_14c79d962:
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar11,(FIndex3i *)&local_110._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar12._0_4_ = uVar11 + 1;
    FVar12._4_4_ = 0;
    uVar11 = FVar12._0_4_;
    if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014c79d498;
    while( true ) {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar12 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
      uVar11 = FVar12._0_4_;
      if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014c79d498;
    }
  } while( true );
}

// operator() @ 14c7c4210

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l17
::<lambda_1>::operator()(void *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this_00;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar2;
  FDynamicMeshAttributeSet *this_01;
  longlong local_res8;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  longlong local_18;
  undefined4 local_10;
  
  pFVar1 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 8) + 0x208);
  this_01 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar1;
  }
  pTVar2 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_01,*(int *)this);
  local_res8 = *(longlong *)((longlong)this + 0x18);
  local_50 = *(undefined4 *)this;
  this_00 = *(TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> **)((longlong)this + 0x10);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_58;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_20 = &local_48;
  local_58 = local_res8;
  local_48 = local_res8;
  local_40 = local_50;
  local_18 = local_res8;
  local_10 = local_50;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
            (this_00,pTVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x38),
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_30 = &local_18;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
            (this_00,pTVar2,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14c7ce8e0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l20
::<lambda_2>::operator()(void *this)

{
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  code *local_48;
  longlong *local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  longlong *local_10;
  
  local_res8 = *(longlong *)((longlong)this + 0x10);
  local_40 = &local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 8),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14c7d1d30

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l23
::<lambda_3>::operator()(void *this)

{
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  code *local_48;
  longlong *local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  longlong *local_10;
  
  local_res8 = *(longlong *)((longlong)this + 0x10);
  local_40 = &local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x38),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14c7d3060

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l26
::<lambda_4>::operator()(void *this)

{
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  code *local_48;
  longlong *local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  longlong *local_10;
  
  local_res8 = *(longlong *)((longlong)this + 0x10);
  local_40 = &local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x38),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14c7d3c60

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l29
::<lambda_5>::operator()(void *this)

{
  TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar1;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  
  local_res8 = *(longlong *)((longlong)this + 0x10);
  this_00 = *(TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> **)this;
  pTVar1 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
           **(undefined8 **)((longlong)this + 8);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_20 = &local_res10;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
            (this_00,pTVar1,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x38),
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_30 = &local_res20;
  UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
            (this_00,pTVar1,
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14c7d4c60

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l32
::<lambda_6>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)this;
  uVar10 = 0;
  uVar12 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  if ((uVar12 != 0) &&
     (puVar2 = *(undefined8 **)(lVar1 + 0x148), 0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    uVar10 = 1;
    uVar8 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014c7d4cf7;
    do {
      lVar3 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar3 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar12);
  }
  uVar8 = (uint)uVar10;
joined_r0x00014c7d4cf7:
  do {
    if (uVar8 == uVar12) {
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)((longlong)this + 8);
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)(lVar3 + 0x18)) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar9 * 4);
      lVar3 = **(longlong **)((longlong)this + 0x10);
      uVar7 = (*(code *)**(undefined8 **)((longlong)this + 0x18))
                        ((*(undefined8 **)((longlong)this + 0x18))[1],local_res8);
      uVar8 = uVar9 + 1;
      uVar11 = (ulonglong)uVar8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (uVar10 >> 9) * 8) +
       (ulonglong)(uVar9 & 0x1ff) * 4) = uVar7;
      uVar10 = uVar11;
      if ((int)uVar12 <= (int)uVar8) break;
      while( true ) {
        lVar3 = (uVar11 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar1 + 0x148) + lVar3)) != 0) &&
           (uVar10 = uVar11,
           *(short *)(lVar5 + *(longlong *)(lVar3 + *(longlong *)(lVar1 + 0x148))) != -1)) break;
        uVar8 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar10 = uVar11;
        if ((int)uVar12 <= (int)uVar8) goto joined_r0x00014c7d4cf7;
      }
    }
  } while( true );
}

// operator() @ 14c7d4e10

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l34
::<lambda_7>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar5;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  uint uVar10;
  
  pFVar9 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x10) + 0x208);
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar9;
  }
  pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer
                     (this_00,*(int *)((longlong)this + 0x18));
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar10 = *(int *)(lVar1 + 0x24) + *(int *)(lVar1 + 0x20) * 0x200;
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar10 != 0) &&
     (pFVar9 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    pFVar9 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar7 = 1;
    if ((int)uVar10 < 2) goto joined_r0x00014c7d4eb8;
    do {
      uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[(ulonglong)pFVar9 >> 9];
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014c7d4eb8:
  do {
    if (uVar7 == uVar10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                         ,0x19a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar5->_padding_ = 0;
      return;
    }
    while( true ) {
      uVar8 = (uint)pFVar9;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(*(longlong *)this + 8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                         ,0x194,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = (ulonglong)pFVar9 >> 9;
      uVar7 = uVar8 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
      *(undefined4 *)
       (*(longlong *)((pTVar5->AttribValues).Blocks.AllocatorInstance.Data + uVar6 * 8) +
       (ulonglong)(uVar8 & 0x1ff) * 4) = 0;
      if ((int)uVar10 <= (int)uVar7) break;
      while( true ) {
        uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + ((ulonglong)pFVar9 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
        uVar7 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014c7d4eb8;
      }
    }
  } while( true );
}

// operator() @ 14c7d4fe0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l38
::<lambda_8>::operator()(void *this)

{
  uchar *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar10;
  FDynamicMeshAttributeSet *this_00;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar11;
  uint uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  uint uVar14;
  ForElementType<UE::AnimationCore::FBoneWeight> local_68;
  
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                     ,0x1ac,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar13 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x10) + 0x208);
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar13;
  }
  pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute(this_00,(FName)0x0);
  if (pTVar10 == (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  uVar14 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  pFVar13 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar14 != 0) &&
     (puVar4 = *(undefined8 **)(lVar3 + 0x28), pFVar13 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)*puVar4 - 1U))) {
    pFVar13 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014c7d50d7;
    do {
      lVar5 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != 0) &&
         (*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != -1)) break;
      uVar12 = (uint)pFVar13 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar14);
  }
  uVar12 = (uint)pFVar13;
joined_r0x00014c7d50d7:
  do {
    if (uVar12 == uVar14) {
      return;
    }
    while( true ) {
      uVar12 = (uint)pFVar13;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(*(longlong *)this + 8)) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                         ,0x1a6,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (ForElementType<UE::AnimationCore::FBoneWeight> *)
                (*(longlong *)
                  ((pTVar10->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x40);
      if (pFVar11 != &local_68) {
        iVar2 = *(int *)(pFVar11[1].InlineData + 4);
        puVar1 = pFVar11[1].InlineData + 4;
        pFVar11[1].InlineData[0] = '\0';
        pFVar11[1].InlineData[1] = '\0';
        pFVar11[1].InlineData[2] = '\0';
        pFVar11[1].InlineData[3] = '\0';
        if (iVar2 == 0) {
          puVar1[0] = '\f';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,0,iVar2,pFVar11,0,(int *)puVar1);
        }
      }
      uVar12 = uVar12 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
      if ((int)uVar14 <= (int)uVar12) break;
      while( true ) {
        lVar7 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
        lVar5 = *(longlong *)(((ulonglong)pFVar13 >> 9) * 8 + *(longlong *)(lVar3 + 0x28));
        if ((*(short *)(lVar7 + lVar5) != 0) && (*(short *)(lVar7 + lVar5) != -1)) break;
        uVar12 = (uint)pFVar13 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
        if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014c7d50d7;
      }
    }
  } while( true );
}

// operator() @ 14c7d5230

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays'::__l41
::<lambda_9>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  
  uVar27 = 0;
  if (0 < *(int *)((longlong)this + 0x38)) {
    lVar28 = 0;
    lVar29 = 0;
    lVar31 = 0;
    lVar32 = 0;
    do {
      lVar1 = *(longlong *)((longlong)this + 0x18);
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x1b8,L"");
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar30 = ~uVar27 >> 0x1f;
      uVar26 = 0;
      if ((int)uVar27 < *(int *)(lVar1 + 0x20)) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + lVar32) = 0;
      lVar1 = *(longlong *)((longlong)this + 0x20);
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x1be,L"");
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar26 = 0;
      if ((int)uVar27 < *(int *)(lVar1 + 0x20)) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(lVar31 + *(longlong *)(lVar1 + 0x18)) = 0xffffffff;
      lVar1 = *(longlong *)((longlong)this + 0x28);
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x1c4,L"");
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
      uVar26 = 0;
      if ((int)uVar27 < *(int *)(lVar1 + 0x20)) {
        uVar26 = uVar30;
      }
      fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x18);
      auVar15._8_4_ = SUB84((double)fVar6,0);
      auVar15._0_8_ = (double)fVar3;
      auVar15._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + lVar1) = auVar15;
      auVar16._8_4_ = SUB84((double)fVar12,0);
      auVar16._0_8_ = (double)fVar9;
      auVar16._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x10 + lVar1) = auVar16;
      auVar17._8_4_ = SUB84((double)fVar7,0);
      auVar17._0_8_ = (double)fVar4;
      auVar17._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x20 + lVar1) = auVar17;
      auVar18._8_4_ = SUB84((double)fVar13,0);
      auVar18._0_8_ = (double)fVar10;
      auVar18._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x30 + lVar1) = auVar18;
      auVar19._8_4_ = SUB84((double)fVar8,0);
      auVar19._0_8_ = (double)fVar5;
      auVar19._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x40 + lVar1) = auVar19;
      auVar20._8_4_ = SUB84((double)fVar14,0);
      auVar20._0_8_ = (double)fVar11;
      auVar20._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x50 + lVar1) = auVar20;
      lVar1 = *(longlong *)((longlong)this + 0x30);
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x1ca,L"");
      uVar24 = FLinearColor::White.field0_0x0._s_0.A;
      uVar23 = FLinearColor::White.field0_0x0._s_0.B;
      uVar22 = FLinearColor::White.field0_0x0._s_0.G;
      uVar21 = FLinearColor::White.field0_0x0._s_0.R;
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar26 = 0;
      if ((int)uVar27 < *(int *)(lVar1 + 0x20)) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x18);
      uVar27 = uVar27 + 1;
      lVar32 = lVar32 + 8;
      lVar31 = lVar31 + 4;
      lVar29 = lVar29 + 0x60;
      *(undefined4 *)(lVar1 + lVar28) = uVar21;
      *(undefined4 *)(lVar1 + 4 + lVar28) = uVar22;
      *(undefined4 *)(lVar1 + 8 + lVar28) = uVar23;
      *(undefined4 *)(lVar1 + 0xc + lVar28) = uVar24;
      lVar28 = lVar28 + 0x10;
    } while ((int)uVar27 < *(int *)((longlong)this + 0x38));
  }
  return;
}

// PopulateOverlays @ 14c81f600

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays
          (TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *this,FDynamicMesh3 *param_1,
          FMeshWeldingWrapper *param_2,TFunctionRef<int___cdecl(int_const_&)> *param_3,bool param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  FDynamicMeshAttributeSet *pFVar8;
  ForAnyElementType FVar9;
  TFuture<void> *pTVar10;
  FDynamicMeshAttributeSet *local_res10;
  ForAnyElementType local_208;
  undefined8 local_200;
  TFuture<void> local_1f8;
  TFuture<void> local_1e8;
  TFuture<void> local_1d8;
  TFuture<void> local_1c8;
  TFuture<void> local_1b8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_1a8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_1a0;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_198;
  TDynamicMeshScalarTriangleAttribute<int> *local_190;
  <lambda_2> local_188;
  <lambda_3> local_170;
  <lambda_4> local_158;
  <lambda_5> local_140;
  <lambda_6> local_128;
  TUniqueFunction<void___cdecl(void)> local_108;
  TUniqueFunction<void___cdecl(void)> local_d8;
  TUniqueFunction<void___cdecl(void)> local_a8;
  TUniqueFunction<void___cdecl(void)> local_78;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  local_1a8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_1a0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_198 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  FDynamicMesh3::EnableAttributes(param_1);
  iVar5 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb8))();
  if (iVar5 < 1) {
    pFVar7 = (param_1->AttributeSet).Ptr;
    (**(code **)(pFVar7->_padding_ + 0xc0))(pFVar7,1);
  }
  pFVar7 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar8;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar7 = pFVar8;
  if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
    pFVar7 = *(FDynamicMeshAttributeSet **)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
  }
  TDynamicMeshOverlay<float,3>::InitializeTriangles
            ((TDynamicMeshOverlay<float,3> *)pFVar7,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  pFVar7 = (param_1->AttributeSet).Ptr;
  local_res10 = pFVar8;
  if (0 < (pFVar7->NormalLayers).Array.ArrayNum) {
    local_res10 = *(FDynamicMeshAttributeSet **)(pFVar7->NormalLayers).Array.AllocatorInstance.Data;
  }
  (**(code **)(pFVar7->_padding_ + 0xb0))(pFVar7,1);
  pFVar7 = (param_1->AttributeSet).Ptr;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = pFVar7;
  }
  FDynamicMeshAttributeSet::EnableMaterialID(pFVar8);
  local_190 = (((param_1->AttributeSet).Ptr)->MaterialIDAttrib).Ptr;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  if (local_res10 != (FDynamicMeshAttributeSet *)0x0) {
    local_188.NormalOverlay =
         (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)&local_res10;
    local_108._0_8_ = 0;
    local_108._40_8_ = 0;
    local_188.__this = this;
    local_188.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays_::__l20::<lambda_2>_>
              (&local_1f8,ThreadPool,&local_188,&local_108);
    if (((local_208.Data <= &local_1f8) &&
        (&local_1f8 < (TFuture<void> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
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
    iVar5 = (int)local_200;
    if ((int)local_200 == local_200._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_208,(int *)((longlong)&local_200 + 4));
    }
    local_200 = CONCAT44(local_200._4_4_,iVar5 + 1);
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10) = local_1f8._0_8_;
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10 + 8) = local_1f8._8_8_;
    local_1f8._8_8_ = 0;
    local_1f8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_1a8 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    local_170.TangentOverlay = &local_1a8;
    local_d8._0_8_ = 0;
    local_d8._40_8_ = 0;
    local_170.__this = this;
    local_170.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays_::__l23::<lambda_3>_>
              (&local_1e8,ThreadPool,&local_170,&local_d8);
    if (((local_208.Data <= &local_1e8) &&
        (&local_1e8 < (TFuture<void> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
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
    iVar5 = (int)local_200;
    if ((int)local_200 == local_200._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_208,(int *)((longlong)&local_200 + 4));
    }
    local_200 = CONCAT44(local_200._4_4_,iVar5 + 1);
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10) = local_1e8._0_8_;
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10 + 8) = local_1e8._8_8_;
    local_1e8._8_8_ = 0;
    local_1e8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_1a0 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    local_158.BiTangentOverlay = &local_1a0;
    local_a8._0_8_ = 0;
    local_a8._40_8_ = 0;
    local_158.__this = this;
    local_158.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays_::__l26::<lambda_4>_>
              (&local_1d8,ThreadPool,&local_158,&local_a8);
    if (((local_208.Data <= &local_1d8) &&
        (&local_1d8 < (TFuture<void> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
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
    iVar5 = (int)local_200;
    if ((int)local_200 == local_200._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_208,(int *)((longlong)&local_200 + 4));
    }
    local_200 = CONCAT44(local_200._4_4_,iVar5 + 1);
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10) = local_1d8._0_8_;
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10 + 8) = local_1d8._8_8_;
    local_1d8._8_8_ = 0;
    local_1d8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_198 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    local_140.ColorOverlay = &local_198;
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    local_140.__this = this;
    local_140.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays_::__l29::<lambda_5>_>
              (&local_1c8,ThreadPool,&local_140,&local_78);
    if (((local_208.Data <= &local_1c8) &&
        (&local_1c8 < (TFuture<void> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
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
    iVar5 = (int)local_200;
    if ((int)local_200 == local_200._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_208,(int *)((longlong)&local_200 + 4));
    }
    local_200 = CONCAT44(local_200._4_4_,iVar5 + 1);
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10) = local_1c8._0_8_;
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10 + 8) = local_1c8._8_8_;
    local_1c8._8_8_ = 0;
    local_1c8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_190 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    local_128.MaterialIDAttrib = &local_190;
    local_48._0_8_ = 0;
    local_48._40_8_ = 0;
    local_128.MeshOut = param_1;
    local_128.__this = this;
    local_128.MaterialIDFunction = param_3;
    Async<_UE::Geometry::TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays_::__l32::<lambda_6>_>
              (&local_1b8,ThreadPool,&local_128,&local_48);
    if (((local_208.Data <= &local_1b8) &&
        (&local_1b8 < (TFuture<void> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
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
    iVar5 = (int)local_200;
    if ((int)local_200 == local_200._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_208,(int *)((longlong)&local_200 + 4));
    }
    local_200 = CONCAT44(local_200._4_4_,iVar5 + 1);
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10) = local_1b8._0_8_;
    *(undefined8 *)(local_208.Data + (longlong)iVar5 * 0x10 + 8) = local_1b8._8_8_;
    local_1b8._8_8_ = 0;
    local_1b8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar8 = (param_1->AttributeSet).Ptr;
  (**(code **)(pFVar8->_padding_ + 0xe0))(pFVar8,0);
  iVar5 = (int)local_200;
  pTVar10 = (TFuture<void> *)(local_208.Data + (longlong)(int)local_200 * 0x10);
  FVar9.Data = local_208.Data;
  while( true ) {
    if ((int)local_200 != iVar5) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if ((TFuture<void> *)FVar9.Data == pTVar10) break;
    if (*(longlong *)FVar9.Data != 0) {
      do {
        do {
        } while (*(longlong *)FVar9.Data == 0);
        plVar1 = *(longlong **)(*(longlong *)FVar9.Data + 0x60);
        cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      } while (cVar4 == '\0');
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<TFuture<void>,int>((TFuture<void> *)local_208.Data,(int)local_200);
  if ((TFuture<void> *)local_208.Data != (TFuture<void> *)0x0) {
    FMemory::Free(local_208.Data);
  }
  return;
}

