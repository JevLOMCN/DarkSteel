// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 34

// PopulateOverlay<UE::Math::TVector<float>,int> @ 14ca5ce70

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlay<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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

// PopulateOverlay<UE::Math::TVector<float>,int> @ 14ca5cf20

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlay<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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

// PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int> @ 14ca5cfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *local_80;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5d1a5;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_a8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5d1a5:
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
          goto LAB_14ca5d4da;
        }
        (**(code **)param_3)(local_b0);
        local_e0._s_0.A =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        local_e0._s_0.B =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14ca5d53b:
        local_e0._s_0.C =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,pfVar13);
      }
      else {
LAB_14ca5d4da:
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
          goto LAB_14ca5d53b;
        }
      }
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar14,(FIndex3i *)&local_e0._s_0,true);
      pTVar19 = local_80;
      lVar21 = local_a8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5d1a5;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5d1a5;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int> @ 14ca5d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *local_80;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5d7e5;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_a8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5d7e5:
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
          goto LAB_14ca5db1a;
        }
        (**(code **)param_3)(local_b0);
        local_e0._s_0.A =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        local_e0._s_0.B =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14ca5db7b:
        local_e0._s_0.C =
             TDynamicMeshOverlay<float,2>::AppendElement
                       ((TDynamicMeshOverlay<float,2> *)param_1,pfVar13);
      }
      else {
LAB_14ca5db1a:
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
          goto LAB_14ca5db7b;
        }
      }
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar14,(FIndex3i *)&local_e0._s_0,true);
      pTVar19 = local_80;
      lVar21 = local_a8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5d7e5;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5d7e5;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int> @ 14ca5dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *local_e8;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5de45;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_f8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5de45:
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
          goto LAB_14ca5e185;
        }
        (**(code **)param_3)(local_a8);
        local_120._s_0.A =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        local_120._s_0.B =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        pfVar13 = local_a8;
LAB_14ca5e1e6:
        local_120._s_0.C =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,pfVar13);
      }
      else {
LAB_14ca5e185:
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
          goto LAB_14ca5e1e6;
        }
      }
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar14,(FIndex3i *)&local_120._s_0,true);
      pTVar19 = local_e8;
      lVar21 = local_f8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5de45;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5de45;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int> @ 14ca5e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *local_e8;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5e4b5;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_f8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5e4b5:
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
          goto LAB_14ca5e7f5;
        }
        (**(code **)param_3)(local_a8);
        local_120._s_0.A =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        local_120._s_0.B =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,local_a8);
        pfVar13 = local_a8;
LAB_14ca5e856:
        local_120._s_0.C =
             TDynamicMeshOverlay<float,4>::AppendElement
                       ((TDynamicMeshOverlay<float,4> *)param_1,pfVar13);
      }
      else {
LAB_14ca5e7f5:
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
          goto LAB_14ca5e856;
        }
      }
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar14,(FIndex3i *)&local_120._s_0,true);
      pTVar19 = local_e8;
      lVar21 = local_f8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5e4b5;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5e4b5;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int> @ 14ca5e930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *local_c8;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5eb15;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_e8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5eb15:
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
          goto LAB_14ca5ee5b;
        }
        (**(code **)param_3)(local_b0);
        local_110._s_0.A =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        local_110._s_0.B =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14ca5eebc:
        local_110._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,pfVar13);
      }
      else {
LAB_14ca5ee5b:
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
          goto LAB_14ca5eebc;
        }
      }
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar14,(FIndex3i *)&local_110._s_0,true);
      pTVar19 = local_c8;
      lVar21 = local_e8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5eb15;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5eb15;
    }
  } while( true );
}

// PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int> @ 14ca5ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromSharedAttr<UE::Math::TVector<float>,int>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *pTVar19;
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
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *local_c8;
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
    if ((int)uVar22 < 2) goto joined_r0x00014ca5f175;
    do {
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(local_e8 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar3 + lVar1) != 0) && (*(short *)(lVar3 + lVar1) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar22);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ca5f175:
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
          goto LAB_14ca5f4bb;
        }
        (**(code **)param_3)(local_b0);
        local_110._s_0.A =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        local_110._s_0.B =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,local_b0);
        pfVar13 = local_b0;
LAB_14ca5f51c:
        local_110._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)param_1,pfVar13);
      }
      else {
LAB_14ca5f4bb:
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
          goto LAB_14ca5f51c;
        }
      }
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar14,(FIndex3i *)&local_110._s_0,true);
      pTVar19 = local_c8;
      lVar21 = local_e8;
    }
    uVar14 = uVar14 + 1;
    uVar17 = (ulonglong)uVar14;
    if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5f175;
    while( true ) {
      lVar1 = (uVar17 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar21 + 0x148) + lVar1)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(lVar1 + *(longlong *)(lVar21 + 0x148))) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014ca5f175;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_> @ 14ca5f5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
    if ((int)uVar9 < 2) goto joined_r0x00014ca5f6d8;
    do {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar11 >> 9];
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
    } while ((int)FVar11._0_4_ < (int)uVar9);
  }
  uVar10 = FVar11._0_4_;
joined_r0x00014ca5f6d8:
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
                    goto LAB_14ca5f8ba;
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
LAB_14ca5f8ba:
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
                    goto LAB_14ca5f99a;
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
LAB_14ca5f99a:
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
                    goto LAB_14ca5fb4d;
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
LAB_14ca5fb4d:
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar10,(FIndex3i *)&local_118._s_0,true);
      FVar13 = local_c8.Hash.SecondaryData;
    }
    FVar11._0_4_ = uVar10 + 1;
    FVar11._4_4_ = 0;
    uVar10 = FVar11._0_4_;
    if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014ca5f6d8;
    while( true ) {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar11 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
      uVar10 = FVar11._0_4_;
      if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014ca5f6d8;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_> @ 14ca5fc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
    if ((int)uVar9 < 2) goto joined_r0x00014ca5fd08;
    do {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar11 >> 9];
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
    } while ((int)FVar11._0_4_ < (int)uVar9);
  }
  uVar10 = FVar11._0_4_;
joined_r0x00014ca5fd08:
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
                    goto LAB_14ca5feea;
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
LAB_14ca5feea:
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
                    goto LAB_14ca5ffca;
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
LAB_14ca5ffca:
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
                    goto LAB_14ca6017d;
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
LAB_14ca6017d:
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)param_1,uVar10,(FIndex3i *)&local_118._s_0,true);
      FVar13 = local_c8.Hash.SecondaryData;
    }
    FVar11._0_4_ = uVar10 + 1;
    FVar11._4_4_ = 0;
    uVar10 = FVar11._0_4_;
    if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014ca5fd08;
    while( true ) {
      uVar8 = (ulonglong)(FVar11._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar11 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar8 * 2) != 0) && (*(short *)(lVar2 + uVar8 * 2) != -1)) break;
      FVar11._0_4_ = FVar11._0_4_ + 1;
      FVar11._4_4_ = 0;
      uVar10 = FVar11._0_4_;
      if ((int)uVar9 <= (int)FVar11._0_4_) goto joined_r0x00014ca5fd08;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_> @ 14ca60250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
    if ((int)uVar11 < 2) goto joined_r0x00014ca60338;
    do {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar13 >> 9];
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
    } while ((int)FVar13._0_4_ < (int)uVar11);
  }
  uVar12 = FVar13._0_4_;
joined_r0x00014ca60338:
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
                  goto LAB_14ca60531;
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
LAB_14ca60531:
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
                  goto LAB_14ca60631;
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
LAB_14ca60631:
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
                  goto LAB_14ca60810;
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
LAB_14ca60810:
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar12,(FIndex3i *)&local_108._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar13._0_4_ = uVar12 + 1;
    FVar13._4_4_ = 0;
    uVar12 = FVar13._0_4_;
    if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014ca60338;
    while( true ) {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar13 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
      uVar12 = FVar13._0_4_;
      if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014ca60338;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_> @ 14ca608e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
    if ((int)uVar11 < 2) goto joined_r0x00014ca609c8;
    do {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar13 >> 9];
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
    } while ((int)FVar13._0_4_ < (int)uVar11);
  }
  uVar12 = FVar13._0_4_;
joined_r0x00014ca609c8:
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
                  goto LAB_14ca60bc1;
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
LAB_14ca60bc1:
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
                  goto LAB_14ca60cc1;
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
LAB_14ca60cc1:
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
                  goto LAB_14ca60ea0;
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
LAB_14ca60ea0:
      TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)param_1,uVar12,(FIndex3i *)&local_108._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar13._0_4_ = uVar12 + 1;
    FVar13._4_4_ = 0;
    uVar12 = FVar13._0_4_;
    if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014ca609c8;
    while( true ) {
      uVar10 = (ulonglong)(FVar13._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar13 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar10 * 2) != 0) && (*(short *)(lVar2 + uVar10 * 2) != -1)) break;
      FVar13._0_4_ = FVar13._0_4_ + 1;
      FVar13._4_4_ = 0;
      uVar12 = FVar13._0_4_;
      if ((int)uVar11 <= (int)FVar13._0_4_) goto joined_r0x00014ca609c8;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_> @ 14ca60f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_>
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
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
    if ((int)uVar10 < 2) goto joined_r0x00014ca61058;
    do {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar12 >> 9];
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
    } while ((int)FVar12._0_4_ < (int)uVar10);
  }
  uVar11 = FVar12._0_4_;
joined_r0x00014ca61058:
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
                    goto LAB_14ca6124f;
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
LAB_14ca6124f:
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
                    goto LAB_14ca6134f;
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
LAB_14ca6134f:
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
                    goto LAB_14ca61522;
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
LAB_14ca61522:
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar11,(FIndex3i *)&local_110._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar12._0_4_ = uVar11 + 1;
    FVar12._4_4_ = 0;
    uVar11 = FVar12._0_4_;
    if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014ca61058;
    while( true ) {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar12 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
      uVar11 = FVar12._0_4_;
      if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014ca61058;
    }
  } while( true );
}

// PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_> @ 14ca615f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
PopulateOverlayFromWedgeAttr<UE::Math::TVector<float>_>
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,
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
    if ((int)uVar10 < 2) goto joined_r0x00014ca616d8;
    do {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x148))[(ulonglong)FVar12 >> 9];
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
    } while ((int)FVar12._0_4_ < (int)uVar10);
  }
  uVar11 = FVar12._0_4_;
joined_r0x00014ca616d8:
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
                    goto LAB_14ca618cf;
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
LAB_14ca618cf:
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
                    goto LAB_14ca619cf;
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
LAB_14ca619cf:
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
                    goto LAB_14ca61ba2;
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
LAB_14ca61ba2:
      TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)param_1,uVar11,(FIndex3i *)&local_110._s_0,true);
      FVar14 = local_c8.Hash.SecondaryData;
    }
    FVar12._0_4_ = uVar11 + 1;
    FVar12._4_4_ = 0;
    uVar11 = FVar12._0_4_;
    if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014ca616d8;
    while( true ) {
      uVar9 = (ulonglong)(FVar12._0_4_ & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + ((ulonglong)FVar12 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar9 * 2) != 0) && (*(short *)(lVar2 + uVar9 * 2) != -1)) break;
      FVar12._0_4_ = FVar12._0_4_ + 1;
      FVar12._4_4_ = 0;
      uVar11 = FVar12._0_4_;
      if ((int)uVar10 <= (int)FVar12._0_4_) goto joined_r0x00014ca616d8;
    }
  } while( true );
}

// operator() @ 14ca6f1e0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l17::<lambda_1>::operator()(void *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this_00;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar2;
  FDynamicMeshAttributeSet *this_01;
  longlong lVar3;
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
  this_00 = *(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)
             ((longlong)this + 0x10);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_58;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_20 = &local_48;
  lVar3 = 0x80;
  if (*(int *)(local_res8 + 0x38) == 0) {
    lVar3 = 0xa0;
  }
  local_58 = local_res8;
  local_48 = local_res8;
  local_40 = local_50;
  local_18 = local_res8;
  local_10 = local_50;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
            (this_00,pTVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + local_res8),
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_30 = &local_18;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
            (this_00,pTVar2,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14ca6f300

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::
<lambda_1>::operator()(void *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this_00;
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
  this_00 = *(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)((longlong)this + 0x10);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_58;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_20 = &local_48;
  local_58 = local_res8;
  local_48 = local_res8;
  local_40 = local_50;
  local_18 = local_res8;
  local_10 = local_50;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
            (this_00,pTVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x70),
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
             ::Call;
  local_30 = &local_18;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
            (this_00,pTVar2,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14ca70920

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l20::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  lVar1 = 0x80;
  if (*(int *)(local_res8 + 0x18) == 0) {
    lVar1 = 0xa0;
  }
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar1 + local_res8),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca709e0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::
<lambda_2>::operator()(void *this)

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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca71720

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l23::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  lVar1 = 0x80;
  if (*(int *)(local_res8 + 0x28) == 0) {
    lVar1 = 0xa0;
  }
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar1 + local_res8),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca717e0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::
<lambda_3>::operator()(void *this)

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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca71af0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l26::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  if ((*(int *)(local_res8 + 0x18) == 0) || (lVar1 = 0x80, *(int *)(local_res8 + 0x28) == 0)) {
    lVar1 = 0xa0;
  }
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + lVar1),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca71bc0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::
<lambda_4>::operator()(void *this)

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
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
             ::Call;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)this,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_48);
  return;
}

// operator() @ 14ca72110

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l29::<lambda_5>::operator()(void *this)

{
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  code *local_38;
  longlong *local_30;
  code *local_28;
  longlong *local_20;
  
  local_res8 = *(longlong *)((longlong)this + 0x10);
  this_00 = *(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)this;
  pTVar1 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
           **(undefined8 **)((longlong)this + 8);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_20 = &local_res10;
  lVar2 = 0x80;
  if (*(int *)(local_res8 + 0x48) == 0) {
    lVar2 = 0xa0;
  }
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
            (this_00,pTVar1,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar2 + local_res8),
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_30 = &local_res20;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
            (this_00,pTVar1,
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14ca721f0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::
<lambda_5>::operator()(void *this)

{
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this_00;
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
  this_00 = *(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)this;
  pTVar1 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
           **(undefined8 **)((longlong)this + 8);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_30 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_20 = &local_res10;
  local_res10 = local_res8;
  local_res18 = local_res8;
  local_res20 = local_res8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
            (this_00,pTVar1,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_res8 + 0x70),
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_38);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
             ::Call;
  local_20 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
             ::Call;
  local_30 = &local_res20;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
            (this_00,pTVar1,
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&local_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&local_28,true);
  return;
}

// operator() @ 14ca72420

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l32::<lambda_6>::operator()(void *this)

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
    if ((int)uVar12 < 2) goto joined_r0x00014ca724b7;
    do {
      lVar3 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar3 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar12);
  }
  uVar8 = (uint)uVar10;
joined_r0x00014ca724b7:
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
        if ((int)uVar12 <= (int)uVar8) goto joined_r0x00014ca724b7;
      }
    }
  } while( true );
}

// operator() @ 14ca725d0

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l32::
<lambda_6>::operator()(void *this)

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
    if ((int)uVar12 < 2) goto joined_r0x00014ca72667;
    do {
      lVar3 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar3 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar12);
  }
  uVar8 = (uint)uVar10;
joined_r0x00014ca72667:
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
        if ((int)uVar12 <= (int)uVar8) goto joined_r0x00014ca72667;
      }
    }
  } while( true );
}

// operator() @ 14ca72780

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l34::<lambda_7>::operator()(void *this)

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
    if ((int)uVar10 < 2) goto joined_r0x00014ca72828;
    do {
      uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[(ulonglong)pFVar9 >> 9];
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014ca72828:
  do {
    if (uVar7 == uVar10) {
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
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014ca72828;
      }
    }
  } while( true );
}

// operator() @ 14ca72900

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l34::
<lambda_7>::operator()(void *this)

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
    if ((int)uVar10 < 2) goto joined_r0x00014ca729a8;
    do {
      uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[(ulonglong)pFVar9 >> 9];
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014ca729a8:
  do {
    if (uVar7 == uVar10) {
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
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014ca729a8;
      }
    }
  } while( true );
}

// operator() @ 14ca72a80

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l38::<lambda_8>::operator()(void *this)

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
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                     ,0x110,L"");
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
    if ((int)uVar14 < 2) goto joined_r0x00014ca72b77;
    do {
      lVar5 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != 0) &&
         (*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != -1)) break;
      uVar12 = (uint)pFVar13 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar14);
  }
  uVar12 = (uint)pFVar13;
joined_r0x00014ca72b77:
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                         ,0x10f,L"");
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
        if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ca72b77;
      }
    }
  } while( true );
}

// operator() @ 14ca72cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l38::
<lambda_8>::operator()(void *this)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FDynamicMeshAttributeSet *this_00;
  ushort *puVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar11;
  uint uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  undefined1 auStackY_f8 [32];
  FIdentityFunctor local_b8;
  FBoneWeight local_b4;
  code *local_98;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_90;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_88;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar13 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x10) + 0x208);
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar13;
  }
  local_88 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
                       (this_00,FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName);
  if (local_88 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    lVar3 = *(longlong *)((longlong)this + 0x10);
    uVar18 = *(int *)(lVar3 + 0x24) + *(int *)(lVar3 + 0x20) * 0x200;
    pFVar13 = (FDynamicMeshAttributeSet *)0x0;
    if (((uVar18 != 0) &&
        (pFVar13 = (FDynamicMeshAttributeSet *)0x0,
        0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) &&
       (pFVar13 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar18)) {
      do {
        lVar17 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
        lVar20 = (*(undefined8 **)(lVar3 + 0x28))[(ulonglong)pFVar13 >> 9];
        if ((*(short *)(lVar17 + lVar20) != 0) && (*(short *)(lVar17 + lVar20) != -1)) break;
        uVar12 = (uint)pFVar13 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar18);
    }
    uVar12 = (uint)pFVar13;
joined_r0x00014ca72db5:
    if (uVar12 != uVar18) {
      do {
        plVar4 = *(longlong **)this;
        uVar12 = (uint)pFVar13;
        uVar7 = 0;
        if ((int)uVar12 < (int)plVar4[1]) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar20 = *(longlong *)((longlong)this + 8);
        uVar7 = *(uint *)(*plVar4 + (longlong)(int)uVar12 * 4);
        uVar8 = 0;
        if ((int)uVar7 < *(int *)(lVar20 + 0x88)) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_90.Container = &local_78;
        puVar10 = (ushort *)((longlong)(int)uVar7 * 0x30 + *(longlong *)(lVar20 + 0x80));
        iVar19 = 0;
        puVar15 = puVar10 + 0xc;
        local_78.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0xc;
        iVar14 = iVar19;
        iVar16 = iVar19;
        do {
          uVar2 = *puVar15;
          iVar9 = iVar14;
          if (uVar2 == 0) break;
          iVar16 = iVar16 + 1;
          puVar15 = puVar15 + 1;
          iVar9 = iVar14 + 1;
          if (uVar2 == 0) {
            iVar9 = iVar14;
          }
          iVar14 = iVar9;
        } while (iVar16 < 0xc);
        UE::AnimationCore::FBoneWeights::
        TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
        ::SetNum(&local_78,iVar9);
        iVar14 = 0;
        lVar20 = 0;
        do {
          local_b4.RawWeight = puVar10[0xc];
          if (local_b4.RawWeight == 0) break;
          local_b4.BoneIndex = *puVar10;
          lVar17 = lVar20;
          if (local_b4.RawWeight != 0) {
            iVar19 = iVar19 + 1;
            lVar17 = lVar20 + 1;
            FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
            if (local_78.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar11 = local_78.AllocatorInstance.SecondaryData;
            }
            *(FBoneWeight *)((longlong)FVar11 + lVar20 * 4) = local_b4;
          }
          iVar14 = iVar14 + 1;
          puVar10 = puVar10 + 1;
          lVar20 = lVar17;
        } while (iVar14 < 0xc);
        local_98 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar11 = local_78.AllocatorInstance.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                  ((FBoneWeight *)FVar11,local_78.ArrayNum,local_b8,
                   (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                    )&local_98);
        if (0xc < iVar19) {
          UE::AnimationCore::FBoneWeights::
          TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          ::SetNum(&local_78,0xc);
        }
        UE::AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::NormalizeWeights(&local_90,Always);
        iVar14 = local_78.ArrayNum;
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)
                   ((local_88->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x40);
        if (FVar11 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78) {
          lVar20 = (longlong)local_78.ArrayNum;
          piVar1 = (int *)((longlong)FVar11 + 0x3c);
          *(int *)((longlong)FVar11 + 0x38) = local_78.ArrayNum;
          _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            _Src = local_78.AllocatorInstance.SecondaryData;
          }
          if ((local_78.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0xc;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,local_78.ArrayNum,*piVar1,
                       (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar11,local_78.ArrayNum,
                       piVar1);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar11 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30);
            }
            if (iVar14 != 0) {
              memcpy((void *)FVar11,(void *)_Src,lVar20 << 2);
            }
          }
        }
        if (local_78.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
        }
        uVar12 = uVar12 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
        if ((int)uVar18 <= (int)uVar12) goto joined_r0x00014ca72db5;
        while( true ) {
          lVar20 = ((ulonglong)pFVar13 >> 9) * 8;
          lVar17 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
          if ((*(short *)(lVar17 + *(longlong *)(lVar20 + *(longlong *)(lVar3 + 0x28))) != 0) &&
             (*(short *)(lVar17 + *(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar20)) != -1))
          break;
          uVar12 = (uint)pFVar13 + 1;
          pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
          if ((int)uVar18 <= (int)uVar12) goto joined_r0x00014ca72db5;
        }
      } while( true );
    }
  }
  return;
}

// operator() @ 14ca73100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::
__l41::<lambda_9>::operator()(void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  uVar5 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar14 = 0;
  if (0 < *(int *)((longlong)this + 0x38)) {
    lVar16 = 0;
    lVar18 = 0;
    lVar19 = 0;
    lVar17 = 0;
    do {
      lVar2 = *(longlong *)((longlong)this + 0x18);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x112,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = ~uVar14 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + lVar17) = 0;
      lVar2 = *(longlong *)((longlong)this + 0x20);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x113,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(lVar16 + *(longlong *)(lVar2 + 0x18)) = 0xffffffff;
      lVar2 = *(longlong *)((longlong)this + 0x28);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x114,L"");
      _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
      _Var7 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      _Var6 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(double (*) [2])(lVar18 + lVar2) = _Var6.m128d_f64;
      *(double (*) [2])(lVar18 + 0x10 + lVar2) = _Var7.m128d_f64;
      *(double (*) [2])(lVar18 + 0x20 + lVar2) = _Var8.m128d_f64;
      *(double (*) [2])(lVar18 + 0x30 + lVar2) = _Var9.m128d_f64;
      *(double (*) [2])(lVar18 + 0x40 + lVar2) = _Var10.m128d_f64;
      *(double (*) [2])(lVar18 + 0x50 + lVar2) = _Var11.m128d_f64;
      lVar2 = *(longlong *)((longlong)this + 0x30);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x115,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 8;
      lVar16 = lVar16 + 4;
      lVar18 = lVar18 + 0x60;
      puVar1 = (undefined8 *)(lVar19 + *(longlong *)(lVar2 + 0x18));
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar14 < *(int *)((longlong)this + 0x38));
  }
  return;
}

// operator() @ 14ca73440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l41::
<lambda_9>::operator()(void *this)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  longlong local_108;
  longlong local_100;
  
  uVar6 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar12 = 0;
  if (0 < *(int *)((longlong)this + 0x38)) {
    lVar16 = 0;
    lVar17 = 0;
    lVar15 = 0;
    local_100 = 0;
    local_108 = 0;
    do {
      lVar3 = *(longlong *)((longlong)this + 0x18);
      if ((int)uVar12 < 0) {
LAB_14ca73543:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169126>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x15a,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = 0;
      }
      else {
        lVar10 = *(longlong *)((longlong)this + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73543;
        plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(undefined8 *)(lVar15 + *plVar9);
      }
      uVar14 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_108 + *(longlong *)(lVar3 + 0x18)) = uVar13;
      lVar3 = *(longlong *)((longlong)this + 0x20);
      if ((int)uVar12 < 0) {
LAB_14ca73641:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169116>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x164,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = 0xffffffff;
      }
      else {
        lVar10 = *(longlong *)((longlong)this + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73641;
        plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = *(undefined4 *)(*plVar9 + 8 + lVar15);
      }
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + lVar16) = uVar18;
      lVar3 = *(longlong *)((longlong)this + 0x28);
      if ((int)uVar12 < 0) {
LAB_14ca73760:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169106>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x16e,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar19 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar20 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar21 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar22 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar23 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar24 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar25 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar26 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar27 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar28 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar29 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar31 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar32 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar33 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      else {
        lVar10 = *(longlong *)((longlong)this + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73760;
        lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(lVar10 + 0x18)) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 0x10);
        puVar1 = (undefined4 *)(lVar10 + lVar17);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar17);
        uVar22 = *puVar1;
        uVar23 = puVar1[1];
        uVar24 = puVar1[2];
        uVar25 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x20 + lVar17);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        uVar28 = puVar1[2];
        uVar29 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x30 + lVar17);
        uVar30 = *puVar1;
        uVar31 = puVar1[1];
        uVar32 = puVar1[2];
        uVar33 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x40 + lVar17);
        uVar34 = *puVar1;
        uVar35 = puVar1[1];
        uVar36 = puVar1[2];
        uVar37 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x50 + lVar17);
        uVar38 = *puVar1;
        uVar39 = puVar1[1];
        uVar40 = puVar1[2];
        uVar41 = puVar1[3];
      }
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar17 + lVar3);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar3);
      *puVar1 = uVar22;
      puVar1[1] = uVar23;
      puVar1[2] = uVar24;
      puVar1[3] = uVar25;
      puVar1 = (undefined4 *)(lVar17 + 0x20 + lVar3);
      *puVar1 = uVar26;
      puVar1[1] = uVar27;
      puVar1[2] = uVar28;
      puVar1[3] = uVar29;
      puVar1 = (undefined4 *)(lVar17 + 0x30 + lVar3);
      *puVar1 = uVar30;
      puVar1[1] = uVar31;
      puVar1[2] = uVar32;
      puVar1[3] = uVar33;
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar3);
      *puVar1 = uVar34;
      puVar1[1] = uVar35;
      puVar1[2] = uVar36;
      puVar1[3] = uVar37;
      puVar1 = (undefined4 *)(lVar17 + 0x50 + lVar3);
      *puVar1 = uVar38;
      puVar1[1] = uVar39;
      puVar1[2] = uVar40;
      puVar1[3] = uVar41;
      lVar3 = *(longlong *)((longlong)this + 0x30);
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0xc;
      local_108 = local_108 + 8;
      lVar16 = lVar16 + 4;
      lVar17 = lVar17 + 0x60;
      puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + local_100);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      local_100 = local_100 + 0x10;
    } while ((int)uVar12 < *(int *)((longlong)this + 0x38));
  }
  return;
}

// PopulateOverlays @ 14ca9d990

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays
          (TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
          FDynamicMesh3 *param_1,FGeometryCacheMeshBufferWrapper *param_2,
          TFunctionRef<int___cdecl(int_const_&)> *param_3,bool param_4)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FDynamicMeshAttributeSet *pFVar9;
  uint uVar10;
  TDynamicMeshOverlay<float,3> *this_00;
  FDynamicMeshAttributeSet *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  uint uVar14;
  TFuture<void> *pTVar15;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  FDynamicMeshAttributeSet *local_298;
  FDynamicMeshAttributeSet *local_290;
  TDynamicMeshOverlay<float,4> *local_288;
  TFuture<void> local_280;
  TFuture<void> local_270;
  TFuture<void> local_260;
  TFuture<void> local_250;
  TFuture<void> local_240;
  TFuture<void> local_230;
  FDynamicMeshAttributeSet *local_220;
  TDynamicMeshScalarTriangleAttribute<int> *local_218;
  <lambda_2> local_210;
  <lambda_3> local_1f8;
  <lambda_4> local_1e0;
  <lambda_5> local_1c8;
  <lambda_1> local_1b0;
  <lambda_6> local_190;
  TUniqueFunction<void___cdecl(void)> local_168;
  TUniqueFunction<void___cdecl(void)> local_138;
  TUniqueFunction<void___cdecl(void)> local_108;
  TUniqueFunction<void___cdecl(void)> local_d8;
  TUniqueFunction<void___cdecl(void)> local_a8;
  TUniqueFunction<void___cdecl(void)> local_78;
  
  local_298 = (FDynamicMeshAttributeSet *)0x0;
  local_290 = (FDynamicMeshAttributeSet *)0x0;
  local_288 = (TDynamicMeshOverlay<float,4> *)0x0;
  if (((param_4) && ((param_2->Tangents).ArrayNum != 0)) && ((param_2->Normals).ArrayNum != 0)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  iVar1 = (param_2->UVs).ArrayNum;
  uVar10 = (uint)(iVar1 != 0);
  FDynamicMesh3::EnableAttributes(param_1);
  uVar14 = iVar8 * 2 + 1;
  iVar7 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb8))();
  if (iVar7 < (int)uVar14) {
    pFVar2 = (param_1->AttributeSet).Ptr;
    (**(code **)(pFVar2->_padding_ + 0xc0))(pFVar2,uVar14);
  }
  iVar7 = 0;
  lVar13 = 0;
  do {
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar11 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar2;
    }
    if ((iVar7 < (pFVar11->NormalLayers).Array.ArrayNum) && (-1 < iVar7)) {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(TDynamicMeshOverlay<float,3> **)
                 ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + lVar13 * 8);
    }
    else {
      this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    TDynamicMeshOverlay<float,3>::InitializeTriangles
              (this_00,(param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar7 = iVar7 + 1;
    lVar13 = lVar13 + 1;
  } while (lVar13 < (longlong)(ulonglong)uVar14);
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  local_220 = pFVar11;
  if (0 < (pFVar2->NormalLayers).Array.ArrayNum) {
    local_220 = *(FDynamicMeshAttributeSet **)(pFVar2->NormalLayers).Array.AllocatorInstance.Data;
  }
  if ((char)iVar8 != '\0') {
    pFVar9 = pFVar11;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = pFVar2;
    }
    local_298 = pFVar11;
    if (1 < (pFVar9->NormalLayers).Array.ArrayNum) {
      local_298 = *(FDynamicMeshAttributeSet **)
                   ((pFVar9->NormalLayers).Array.AllocatorInstance.Data + 8);
    }
    local_290 = pFVar11;
    if (2 < (pFVar2->NormalLayers).Array.ArrayNum) {
      local_290 = *(FDynamicMeshAttributeSet **)
                   ((pFVar2->NormalLayers).Array.AllocatorInstance.Data + 0x10);
    }
  }
  uVar14 = uVar10;
  if (iVar1 == 0) {
    uVar14 = 1;
  }
  (**(code **)(pFVar2->_padding_ + 0xb0))(pFVar2,uVar14);
  if ((param_2->Colors).ArrayNum != 0) {
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar9 = pFVar11;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = pFVar2;
    }
    FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar9);
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar9 = pFVar11;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = pFVar2;
    }
    local_288 = (TDynamicMeshOverlay<float,4> *)(pFVar9->ColorLayer).Ptr;
    TDynamicMeshOverlay<float,4>::InitializeTriangles
              (local_288,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar9 = pFVar11;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar9 = pFVar2;
  }
  FDynamicMeshAttributeSet::EnableMaterialID(pFVar9);
  local_218 = (((param_1->AttributeSet).Ptr)->MaterialIDAttrib).Ptr;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  if (uVar10 != 0) {
    do {
      local_168._0_8_ = 0;
      local_168._40_8_ = 0;
      local_1b0.UVLayerIndex = (int)pFVar11;
      local_1b0.MeshOut = param_1;
      local_1b0.__this = this;
      local_1b0.MeshIn = param_2;
      Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l17::<lambda_1>_>
                (&local_280,ThreadPool,&local_1b0,&local_168);
      if (((local_2a8.Data <= &local_280) &&
          (&local_280 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_2a0;
      if ((int)local_2a0 == local_2a0._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
      }
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
      *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_280._0_8_;
      *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_280._8_8_;
      local_280._8_8_ = 0;
      local_280._0_8_ = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar14 = (int)pFVar11 + 1;
      pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar10);
  }
  if (local_220 != (FDynamicMeshAttributeSet *)0x0) {
    local_210.NormalOverlay =
         (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)&local_220;
    local_138._0_8_ = 0;
    local_138._40_8_ = 0;
    local_210.__this = this;
    local_210.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l20::<lambda_2>_>
              (&local_270,ThreadPool,&local_210,&local_138);
    if (((local_2a8.Data <= &local_270) &&
        (&local_270 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_270._0_8_;
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_270._8_8_;
    local_270._8_8_ = 0;
    local_270._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_298 != (FDynamicMeshAttributeSet *)0x0) {
    local_1f8.TangentOverlay =
         (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)&local_298;
    local_108._0_8_ = 0;
    local_108._40_8_ = 0;
    local_1f8.__this = this;
    local_1f8.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l23::<lambda_3>_>
              (&local_260,ThreadPool,&local_1f8,&local_108);
    if (((local_2a8.Data <= &local_260) &&
        (&local_260 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_260._0_8_;
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_260._8_8_;
    local_260._8_8_ = 0;
    local_260._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_290 != (FDynamicMeshAttributeSet *)0x0) {
    local_1e0.BiTangentOverlay =
         (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)&local_290;
    local_d8._0_8_ = 0;
    local_d8._40_8_ = 0;
    local_1e0.__this = this;
    local_1e0.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l26::<lambda_4>_>
              (&local_250,ThreadPool,&local_1e0,&local_d8);
    if (((local_2a8.Data <= &local_250) &&
        (&local_250 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_250._0_8_;
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_250._8_8_;
    local_250._8_8_ = 0;
    local_250._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_288 != (TDynamicMeshOverlay<float,4> *)0x0) {
    local_1c8.ColorOverlay =
         (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)&local_288;
    local_a8._0_8_ = 0;
    local_a8._40_8_ = 0;
    local_1c8.__this = this;
    local_1c8.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l29::<lambda_5>_>
              (&local_240,ThreadPool,&local_1c8,&local_a8);
    if (((local_2a8.Data <= &local_240) &&
        (&local_240 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_240._0_8_;
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_240._8_8_;
    local_240._8_8_ = 0;
    local_240._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_218 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    local_190.MaterialIDAttrib = &local_218;
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    local_190.MeshOut = param_1;
    local_190.__this = this;
    local_190.MaterialIDFunction = param_3;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays_::__l32::<lambda_6>_>
              (&local_230,ThreadPool,&local_190,&local_78);
    if (((local_2a8.Data <= &local_230) &&
        (&local_230 < (TFuture<void> *)(local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar8 + 1);
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10) = local_230._0_8_;
    *(undefined8 *)(local_2a8.Data + (longlong)iVar8 * 0x10 + 8) = local_230._8_8_;
    local_230._8_8_ = 0;
    local_230._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,0);
  iVar8 = (int)local_2a0;
  pTVar15 = (TFuture<void> *)(local_2a8.Data + (longlong)(int)local_2a0 * 0x10);
  FVar12.Data = local_2a8.Data;
  while( true ) {
    if ((int)local_2a0 != iVar8) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if ((TFuture<void> *)FVar12.Data == pTVar15) break;
    if (*(longlong *)FVar12.Data != 0) {
      do {
        do {
        } while (*(longlong *)FVar12.Data == 0);
        plVar3 = *(longlong **)(*(longlong *)FVar12.Data + 0x60);
        cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      } while (cVar6 == '\0');
    }
    FVar12.Data = FVar12.Data + 0x10;
  }
  DestructItems<TFuture<void>,int>((TFuture<void> *)local_2a8.Data,(int)local_2a0);
  if ((TFuture<void> *)local_2a8.Data != (TFuture<void> *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  return;
}

// PopulateOverlays @ 14ca9e2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays
          (TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this,FDynamicMesh3 *param_1,
          FSkinnedComponentWrapper *param_2,TFunctionRef<int___cdecl(int_const_&)> *param_3,
          bool param_4)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  TDynamicMeshOverlay<float,3> *this_00;
  FDynamicMeshAttributeSet *pFVar12;
  FDynamicMeshAttributeSet *this_01;
  uint uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ulonglong uVar16;
  TFuture<void> *pTVar17;
  longlong lVar18;
  FDynamicMeshAttributeSet *local_res18;
  TFunctionRef<int___cdecl(int_const_&)> *local_res20;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_3a8;
  TDynamicMeshOverlay<float,4> *local_3a0;
  TFuture<void> local_398;
  TFuture<void> local_388;
  TFuture<void> local_378;
  TFuture<void> local_368;
  TFuture<void> local_358;
  TFuture<void> local_348;
  TFuture<void> local_338;
  TFuture<void> local_328;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_318;
  TDynamicMeshScalarTriangleAttribute<int> *local_310;
  <lambda_2> local_308;
  <lambda_3> local_2f0;
  <lambda_4> local_2d8;
  <lambda_5> local_2c0;
  <lambda_1> local_2a8;
  <lambda_6> local_288;
  <lambda_8> local_268;
  <lambda_9> local_248;
  FBoneWeights local_208;
  TUniqueFunction<void___cdecl(void)> local_1c8;
  TUniqueFunction<void___cdecl(void)> local_198;
  TUniqueFunction<void___cdecl(void)> local_168;
  TUniqueFunction<void___cdecl(void)> local_138;
  TUniqueFunction<void___cdecl(void)> local_108;
  TUniqueFunction<void___cdecl(void)> local_d8;
  TUniqueFunction<void___cdecl(void)> local_a8;
  TUniqueFunction<void___cdecl(void)> local_78;
  
  local_res18 = (FDynamicMeshAttributeSet *)0x0;
  local_3a8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_3a0 = (TDynamicMeshOverlay<float,4> *)0x0;
  if ((param_4) && (param_2->bHasTangents != false)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  uVar15 = param_2->LOD;
  pFVar2 = param_2->SkeletalMeshRenderData;
  uVar13 = 0;
  if ((int)uVar15 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  local_res20 = param_3;
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(*(longlong *)
                    ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                    (longlong)(int)uVar15 * 8) + 0xd8);
  FDynamicMesh3::EnableAttributes(param_1);
  uVar15 = iVar9 * 2 + 1;
  iVar8 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb8))();
  if (iVar8 < (int)uVar15) {
    pFVar12 = (param_1->AttributeSet).Ptr;
    (**(code **)(pFVar12->_padding_ + 0xc0))(pFVar12,uVar15);
  }
  iVar8 = 0;
  lVar18 = 0;
  do {
    pFVar12 = (param_1->AttributeSet).Ptr;
    pFVar11 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar12;
    }
    if ((iVar8 < (pFVar11->NormalLayers).Array.ArrayNum) && (-1 < iVar8)) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(TDynamicMeshOverlay<float,3> **)
                 ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + lVar18 * 8);
    }
    else {
      this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    TDynamicMeshOverlay<float,3>::InitializeTriangles
              (this_00,(param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar8 = iVar8 + 1;
    lVar18 = lVar18 + 1;
  } while (lVar18 < (longlong)(ulonglong)uVar15);
  pFVar12 = (param_1->AttributeSet).Ptr;
  if ((pFVar12->NormalLayers).Array.ArrayNum < 1) {
    local_318 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  }
  else {
    local_318 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                 (pFVar12->NormalLayers).Array.AllocatorInstance.Data;
  }
  if ((char)iVar9 != '\0') {
    local_res18 = (FDynamicMeshAttributeSet *)0x0;
    pFVar11 = local_res18;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar12;
    }
    if (1 < (pFVar11->NormalLayers).Array.ArrayNum) {
      local_res18 = *(FDynamicMeshAttributeSet **)
                     ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + 8);
    }
    if ((pFVar12->NormalLayers).Array.ArrayNum < 3) {
      local_3a8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      local_3a8 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   ((pFVar12->NormalLayers).Array.AllocatorInstance.Data + 0x10);
    }
  }
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  iVar8 = 1;
  iVar9 = iVar1;
  if (iVar1 < 1) {
    iVar9 = 1;
  }
  (**(code **)(pFVar12->_padding_ + 0xb0))(pFVar12,iVar9);
  if (1 < (longlong)iVar1) {
    lVar18 = 1;
    do {
      pFVar12 = (param_1->AttributeSet).Ptr;
      pFVar10 = pFVar11;
      if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar10 = pFVar12;
      }
      pFVar12 = pFVar11;
      if ((iVar8 < *(int *)&(((TDynamicVector<int,512> *)&pFVar10->UVLayers)->Blocks).
                            AllocatorInstance.Data) && (-1 < iVar8)) {
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = *(FDynamicMeshAttributeSet **)(*(longlong *)&pFVar10->UVLayers + lVar18 * 8);
      }
      TDynamicMeshOverlay<float,2>::InitializeTriangles
                ((TDynamicMeshOverlay<float,2> *)pFVar12,
                 (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar8 = iVar8 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar1);
  }
  bVar6 = Conversion::FSkinnedComponentWrapper::HasColors(param_2);
  if (bVar6) {
    pFVar12 = (param_1->AttributeSet).Ptr;
    pFVar10 = pFVar11;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar12;
    }
    FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar10);
    pFVar12 = (param_1->AttributeSet).Ptr;
    pFVar10 = pFVar11;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar12;
    }
    local_3a0 = *(TDynamicMeshOverlay<float,4> **)&pFVar10->ColorLayer;
    TDynamicMeshOverlay<float,4>::InitializeTriangles
              (local_3a0,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  }
  pFVar12 = (param_1->AttributeSet).Ptr;
  pFVar10 = pFVar11;
  if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar12;
  }
  FDynamicMeshAttributeSet::EnableMaterialID(pFVar10);
  local_310 = (((param_1->AttributeSet).Ptr)->MaterialIDAttrib).Ptr;
  local_3b8.Data = (FScriptContainerElement *)0x0;
  local_3b0 = 0;
  pFVar12 = pFVar11;
  if (0 < iVar1) {
    do {
      local_1c8._0_8_ = 0;
      local_1c8._40_8_ = 0;
      local_2a8.UVLayerIndex = (int)pFVar12;
      local_2a8.MeshOut = param_1;
      local_2a8.__this = this;
      local_2a8.MeshIn = param_2;
      Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l17::<lambda_1>_>
                (&local_398,ThreadPool,&local_2a8,&local_1c8);
      if (((local_3b8.Data <= &local_398) &&
          (&local_398 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
      iVar9 = (int)local_3b0;
      if ((int)local_3b0 == local_3b0._4_4_) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
      }
      local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
      *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_398._0_8_;
      *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_398._8_8_;
      local_398._8_8_ = 0;
      local_398._0_8_ = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar15 = (int)pFVar12 + 1;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
    } while ((int)uVar15 < iVar1);
  }
  if (local_318 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    local_308.NormalOverlay = &local_318;
    local_198._0_8_ = 0;
    local_198._40_8_ = 0;
    local_308.__this = this;
    local_308.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l20::<lambda_2>_>
              (&local_388,ThreadPool,&local_308,&local_198);
    if (((local_3b8.Data <= &local_388) &&
        (&local_388 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_388._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_388._8_8_;
    local_388._8_8_ = 0;
    local_388._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_res18 != (FDynamicMeshAttributeSet *)0x0) {
    local_2f0.TangentOverlay =
         (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)&local_res18;
    local_168._0_8_ = 0;
    local_168._40_8_ = 0;
    local_2f0.__this = this;
    local_2f0.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l23::<lambda_3>_>
              (&local_378,ThreadPool,&local_2f0,&local_168);
    if (((local_3b8.Data <= &local_378) &&
        (&local_378 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_378._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_378._8_8_;
    local_378._8_8_ = 0;
    local_378._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_3a8 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    local_2d8.BiTangentOverlay = &local_3a8;
    local_138._0_8_ = 0;
    local_138._40_8_ = 0;
    local_2d8.__this = this;
    local_2d8.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l26::<lambda_4>_>
              (&local_368,ThreadPool,&local_2d8,&local_138);
    if (((local_3b8.Data <= &local_368) &&
        (&local_368 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_368._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_368._8_8_;
    local_368._8_8_ = 0;
    local_368._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_3a0 != (TDynamicMeshOverlay<float,4> *)0x0) {
    local_2c0.ColorOverlay =
         (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)&local_3a0;
    local_108._0_8_ = 0;
    local_108._40_8_ = 0;
    local_2c0.__this = this;
    local_2c0.MeshIn = param_2;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l29::<lambda_5>_>
              (&local_358,ThreadPool,&local_2c0,&local_108);
    if (((local_3b8.Data <= &local_358) &&
        (&local_358 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_358._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_358._8_8_;
    local_358._8_8_ = 0;
    local_358._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_310 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    local_288.MaterialIDAttrib = &local_310;
    local_d8._0_8_ = 0;
    local_288.MaterialIDFunction = local_res20;
    local_d8._40_8_ = 0;
    local_288.MeshOut = param_1;
    local_288.__this = this;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l32::<lambda_6>_>
              (&local_348,ThreadPool,&local_288,&local_d8);
    if (((local_3b8.Data <= &local_348) &&
        (&local_348 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_348._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_348._8_8_;
    local_348._8_8_ = 0;
    local_348._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar12 = (param_1->AttributeSet).Ptr;
  (**(code **)(pFVar12->_padding_ + 0xe0))(pFVar12,0);
  bVar6 = (param_2->SkinWeights).ArrayNum == (param_2->SkinnedVertices).ArrayNum;
  uVar16 = (ulonglong)bVar6;
  uVar15 = (uint)bVar6;
  if (uVar15 != 0) {
    do {
      pFVar10 = ::operator_new(0x30);
      pFVar12 = pFVar11;
      if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
        *(uint *)&pFVar10->_padding_ = 0;
        *(uint *)((longlong)&pFVar10->_padding_ + 4) = 0;
        ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar10->ParentMesh)->CurBlock = 0;
        pFVar10->_padding_ =
             (longlong)
             &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
        ;
        (((TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
           *)&pFVar10->_padding_)->AllocatorInstance).Data = (FScriptContainerElement *)param_1;
        ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar10->ParentMesh)->CurBlockUsed
             = 0;
        *(uint *)&(pFVar10->UVLayers).Array.AllocatorInstance.Data = 0;
        *(uint *)((longlong)&(pFVar10->UVLayers).Array.AllocatorInstance.Data + 4) = 0;
        (((TDynamicVector<int,512> *)&pFVar10->UVLayers)->Blocks).AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                  ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar10->ParentMesh);
        local_208.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
        local_208.BoneWeights.ArrayNum = 0;
        local_208.BoneWeights.ArrayMax = 0xc;
        local_208.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
        local_208.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
        local_208.BoneWeights.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                  ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar10,
                   &local_208);
        pFVar12 = pFVar10;
      }
      FVar5 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
      uVar13 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.Number;
      *(uint *)&pFVar12->_padding_ =
           FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.ComparisonIndex.Value;
      *(uint *)((longlong)&pFVar12->_padding_ + 4) = uVar13;
      pFVar10 = (param_1->AttributeSet).Ptr;
      this_01 = pFVar11;
      if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
        this_01 = pFVar10;
      }
      FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
                (this_01,FVar5,
                 (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar12);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  pFVar12 = pFVar11;
  if (uVar15 != 0) {
    do {
      local_a8._0_8_ = 0;
      local_a8._40_8_ = 0;
      local_268.__this = this;
      local_268.MeshIn = param_2;
      local_268.MeshOut = param_1;
      local_268.AttributeIndex = (int)pFVar12;
      Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l38::<lambda_8>_>
                (&local_338,ThreadPool,&local_268,&local_a8);
      if (((local_3b8.Data <= &local_338) &&
          (&local_338 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
      iVar9 = (int)local_3b0;
      if ((int)local_3b0 == local_3b0._4_4_) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
      }
      local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
      *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_338._0_8_;
      *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_338._8_8_;
      local_338._8_8_ = 0;
      local_338._0_8_ = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar13 = (int)pFVar12 + 1;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar15);
  }
  lVar18 = (**(code **)(*(longlong *)param_2->Asset + 800))();
  iVar9 = *(int *)(lVar18 + 8);
  lVar18 = (**(code **)(*(longlong *)param_2->Asset + 800))();
  if (*(int *)(lVar18 + 8) != 0) {
    pFVar12 = (param_1->AttributeSet).Ptr;
    pFVar10 = pFVar11;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar12;
    }
    FDynamicMeshAttributeSet::EnableBones(pFVar10,iVar9);
    pFVar12 = (param_1->AttributeSet).Ptr;
    local_248.BonePoses = _DAT_00000120;
    local_248.BoneParentIndices = _DAT_00000118;
    local_248.BoneNameAttrib = _DAT_00000110;
    if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar12;
      local_248.BonePoses = (pFVar12->BonePoseAttrib).Ptr;
      local_248.BoneParentIndices = (pFVar12->BoneParentIndexAttrib).Ptr;
      local_248.BoneNameAttrib = (pFVar12->BoneNameAttrib).Ptr;
    }
    local_248.BoneColors = (pFVar11->BoneColorAttrib).Ptr;
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    local_248.__this = this;
    local_248.MeshIn = param_2;
    local_248.MeshOut = param_1;
    local_248.NumBones = iVar9;
    Async<_UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays_::__l41::<lambda_9>_>
              (&local_328,ThreadPool,&local_248,&local_78);
    if (((local_3b8.Data <= &local_328) &&
        (&local_328 < (TFuture<void> *)(local_3b8.Data + (longlong)local_3b0._4_4_ * 0x10))) &&
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
    iVar9 = (int)local_3b0;
    if ((int)local_3b0 == local_3b0._4_4_) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3b8,(int *)((longlong)&local_3b0 + 4));
    }
    local_3b0 = CONCAT44(local_3b0._4_4_,iVar9 + 1);
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10) = local_328._0_8_;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 0x10 + 8) = local_328._8_8_;
    local_328._8_8_ = 0;
    local_328._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  iVar9 = (int)local_3b0;
  pTVar17 = (TFuture<void> *)(local_3b8.Data + (longlong)(int)local_3b0 * 0x10);
  FVar14.Data = local_3b8.Data;
  while( true ) {
    if ((int)local_3b0 != iVar9) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if ((TFuture<void> *)FVar14.Data == pTVar17) break;
    if (*(longlong *)FVar14.Data != 0) {
      do {
        do {
        } while (*(longlong *)FVar14.Data == 0);
        plVar3 = *(longlong **)(*(longlong *)FVar14.Data + 0x60);
        cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      } while (cVar7 == '\0');
    }
    FVar14.Data = FVar14.Data + 0x10;
  }
  DestructItems<TFuture<void>,int>((TFuture<void> *)local_3b8.Data,(int)local_3b0);
  if ((TFuture<void> *)local_3b8.Data != (TFuture<void> *)0x0) {
    FMemory::Free(local_3b8.Data);
  }
  return;
}

