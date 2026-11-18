// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 7

// operator() @ 1496fd970

void __thiscall
`FMeshRenderDecomposition::BuildAssociations'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FGroup *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res10 [8];
  
  plVar3 = *(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)(*plVar3 + (longlong)param_1 * 8) != 0) {
    pFVar8 = FMeshRenderDecomposition::GetGroup(*(FMeshRenderDecomposition **)this,param_1);
    pFVar9 = (pFVar8->Triangles).AllocatorInstance.Data;
    iVar2 = (pFVar8->Triangles).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar8->Triangles).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar1) break;
      uVar10 = *(uint *)pFVar9;
      lVar4 = *(longlong *)this;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)(lVar4 + 0x18)) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = pFVar9 + 4;
      *(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)(int)uVar10 * 4) = param_1;
    }
  }
  return;
}

// AppendGroup @ 149702a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall FMeshRenderDecomposition::AppendGroup(FMeshRenderDecomposition *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  FScriptContainerElement local_18 [16];
  
  uVar2 = (this->Groups).ArrayNum;
  TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Groups,uVar2 + 1,Default);
  puVar6 = ::operator_new(0x18);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar8 = puVar6;
  }
  uVar7 = 0;
  if ((int)uVar2 < (this->Groups).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = (this->Groups).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
  if (pFVar1 == local_18) {
    if (puVar8 == (undefined8 *)0x0) {
      return uVar2;
    }
    puVar6 = puVar8;
    if ((void *)*puVar8 != (void *)0x0) {
      FMemory::Free((void *)*puVar8);
    }
  }
  else {
    puVar6 = *(undefined8 **)pFVar1;
    *(undefined8 **)pFVar1 = puVar8;
    if (puVar6 == (undefined8 *)0x0) {
      return uVar2;
    }
    if ((void *)*puVar6 != (void *)0x0) {
      FMemory::Free((void *)*puVar6);
    }
  }
  ::operator_delete(puVar6,0x18);
  return uVar2;
}

// BuildAssociations @ 1497037d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshRenderDecomposition::BuildAssociations(FMeshRenderDecomposition *this,FDynamicMesh3 *param_1)

{
  <lambda_1> <Var1;
  FMeshRenderDecomposition *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMeshRenderDecomposition **local_10;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleToGroupMap,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMeshRenderDecomposition::BuildAssociations'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_28.DataPtr = (void **)0x0;
  local_res8[0]._0_1_ = SUB81(this,0);
  local_28.ArrayNum = 0;
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Groups).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,None,&local_28);
  return;
}

// BuildChunkedDecomposition @ 149703860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMeshRenderDecomposition::BuildChunkedDecomposition
          (FDynamicMesh3 *param_1,FComponentMaterialSet *param_2,FMeshRenderDecomposition *param_3,
          int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FMeshRenderDecomposition *pFVar3;
  int local_res20 [2];
  undefined1 auStackY_e8 [32];
  <lambda_1> local_a8;
  FMeshRenderDecomposition *local_a0;
  FDynamicMesh3 *local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  FMeshRenderDecomposition ***local_78;
  FMeshRenderDecomposition **local_70;
  FDynamicMesh3 **local_68;
  FMeshRenderDecomposition *local_60;
  int *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_res20[0] = param_4;
  local_98 = param_1;
  pFVar3 = ::operator_new(0x20);
  local_a0 = (FMeshRenderDecomposition *)0x0;
  if (pFVar3 != (FMeshRenderDecomposition *)0x0) {
    (pFVar3->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Groups).ArrayNum = 0;
    (pFVar3->Groups).ArrayMax = 0;
    (pFVar3->TriangleToGroupMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TriangleToGroupMap).ArrayNum = 0;
    (pFVar3->TriangleToGroupMap).ArrayMax = 0;
    local_a0 = pFVar3;
  }
  BuildMaterialDecomposition(local_98,param_2,local_a0);
  iVar1 = (local_a0->Groups).ArrayNum;
  InitializeCriticalSectionAndSpinCount(&local_48,4000);
  local_70 = &local_a0;
  local_68 = &local_98;
  local_90.DataPtr = (void **)0x0;
  local_58 = local_res20;
  local_90.ArrayNum = 0;
  local_50 = &local_48;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMeshRenderDecomposition::BuildChunkedDecomposition'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_70;
  local_60 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_80,local_a8,None,
             &local_90);
  DeleteCriticalSection(&local_48);
  pFVar3 = local_a0;
  if (local_a0 != (FMeshRenderDecomposition *)0x0) {
    pFVar2 = (local_a0->TriangleToGroupMap).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
              ((TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
                *)(pFVar3->Groups).AllocatorInstance.Data,(pFVar3->Groups).ArrayNum);
    pFVar2 = (pFVar3->Groups).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar3,0x20);
  }
  return;
}

// BuildMaterialDecomposition @ 1497039c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FMeshRenderDecomposition::BuildMaterialDecomposition
          (FDynamicMesh3 *param_1,FComponentMaterialSet *param_2,FMeshRenderDecomposition *param_3)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  FGroup *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TDynamicMeshScalarTriangleAttribute<int> *local_res20;
  uint local_78 [2];
  FScriptContainerElement local_70 [8];
  undefined1 local_68 [24];
  undefined8 local_50;
  
  uVar18 = 0;
  local_68._16_8_ = (UMaterialInterface *)0x0;
  local_50 = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,(ForAnyElementType *)(local_68 + 0x10),(int *)((longlong)&local_50 + 4))
  ;
  local_50 = CONCAT44(local_50._4_4_,iVar10 + 1);
  ((longlong *)local_68._16_8_)[iVar10] = 0;
  if (param_2 == (FComponentMaterialSet *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8226505226895491110>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\MeshRenderDecomposition.cpp"
                       ,0x26,"MaterialSet != nullptr");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_2 = (FComponentMaterialSet *)(local_68 + 0x10);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (pFVar5 == (FDynamicMeshAttributeSet *)0x0) {
    local_res20 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
  else {
    local_res20 = (pFVar5->MaterialIDAttrib).Ptr;
  }
  uVar4 = (param_2->Materials).ArrayNum;
  TArray<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&param_3->Groups,uVar4,Default);
  uVar20 = (ulonglong)(int)uVar4;
  uVar21 = uVar18;
  if (0 < (int)uVar4) {
    do {
      puVar17 = (undefined8 *)0x0;
      puVar12 = ::operator_new(0x18);
      if (puVar12 != (undefined8 *)0x0) {
        puVar12[2] = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar17 = puVar12;
      }
      uVar15 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar15 < (param_3->Groups).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = (param_3->Groups).AllocatorInstance.Data + uVar21 * 8;
      if (pFVar3 == local_70) {
        if (puVar17 != (undefined8 *)0x0) {
          if ((void *)*puVar17 != (void *)0x0) {
            FMemory::Free((void *)*puVar17);
          }
          ::operator_delete(puVar17,0x18);
        }
      }
      else {
        puVar12 = *(undefined8 **)pFVar3;
        *(undefined8 **)pFVar3 = puVar17;
        if (puVar12 != (undefined8 *)0x0) {
          if ((void *)*puVar12 != (void *)0x0) {
            FMemory::Free((void *)*puVar12);
          }
          ::operator_delete(puVar12,0x18);
        }
      }
      lVar19 = 0;
      uVar18 = (ulonglong)(uVar15 + 1);
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < (longlong)uVar20);
    uVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < (param_3->Groups).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)((param_3->Groups).AllocatorInstance.Data + lVar19 * 8);
      uVar15 = 0;
      if ((int)uVar14 < (param_2->Materials).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar2 = lVar19 * 8;
      lVar19 = lVar19 + 1;
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)((param_2->Materials).AllocatorInstance.Data + lVar2);
    } while (lVar19 < (longlong)uVar20);
    uVar20 = (ulonglong)uVar4;
  }
  uVar21 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar18 = uVar21;
  if ((uVar14 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar18 = 1;
    uVar15 = 1;
    if ((int)uVar14 < 2) goto LAB_149703cb3;
    do {
      lVar6 = (ulonglong)((uint)uVar18 & 0x1ff) * 2;
      lVar19 = *(longlong *)(pFVar3 + (uVar18 >> 9) * 8);
      if ((*(short *)(lVar6 + lVar19) != 0) && (*(short *)(lVar6 + lVar19) != -1)) break;
      uVar15 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar14);
  }
  uVar15 = (uint)uVar18;
LAB_149703cb3:
  if (uVar15 != uVar14) {
    while( true ) {
      uVar15 = 0;
      uVar16 = (uint)uVar18;
      if (local_res20 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        uVar15 = *(uint *)(*(longlong *)(*(longlong *)&local_res20->field_0x20 + (uVar18 >> 9) * 8)
                          + (ulonglong)(uVar16 & 0x1ff) * 4);
      }
      local_78[0] = uVar16;
      if ((int)uVar15 < (int)uVar20) {
        uVar11 = 0;
        if ((int)uVar15 < (param_3->Groups).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = *(ForAnyElementType **)
                  ((param_3->Groups).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
        if (((pFVar7->Data <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 <
             pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar10 + 1;
        *(uint *)(pFVar7->Data + (longlong)iVar10 * 4) = local_78[0];
      }
      else {
        iVar10 = (int)uVar21;
        if (((ulonglong)local_68._0_8_ <= (FScriptContainerElement *)local_78) &&
           ((FScriptContainerElement *)local_78 <
            (FScriptContainerElement *)(local_68._0_8_ + (longlong)(int)local_68._12_4_ * 4))) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = local_68._8_4_;
        }
        if (iVar10 == local_68._12_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)local_68,(int *)(local_68 + 0xc));
        }
        local_68._8_4_ = iVar10 + 1;
        *(uint *)(local_68._0_8_ + (longlong)iVar10 * 4) = local_78[0];
      }
      uVar16 = uVar16 + 1;
      uVar18 = (ulonglong)uVar16;
      if ((int)uVar16 < (int)uVar14) {
        pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar19 = (uVar18 >> 9) * 8;
          lVar6 = (ulonglong)((uint)uVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar6 + *(longlong *)(pFVar3 + lVar19)) != 0) &&
             (*(short *)(lVar6 + *(longlong *)(pFVar3 + lVar19)) != -1)) goto LAB_149703ef0;
          uVar16 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
        } while ((int)uVar16 < (int)uVar14);
      }
      if (uVar16 == uVar14) break;
LAB_149703ef0:
      uVar21 = local_68._8_8_ & 0xffffffff;
      uVar20 = (ulonglong)uVar4;
    }
    if (0 < (int)local_68._8_4_) {
      iVar10 = AppendGroup(param_3);
      pFVar13 = GetGroup(param_3,iVar10);
      if (pFVar13 != (FGroup *)local_68) {
        pFVar3 = (pFVar13->Triangles).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar13->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)local_68._0_8_;
        local_68._0_8_ = (FScriptContainerElement *)0x0;
        (pFVar13->Triangles).ArrayNum = local_68._8_4_;
        (pFVar13->Triangles).ArrayMax = local_68._12_4_;
        local_68._8_8_ = 0;
      }
      pFVar13->Material = (UMaterialInterface *)0x0;
    }
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  if ((UMaterialInterface *)local_68._16_8_ != (UMaterialInterface *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  return;
}

// GetGroup @ 1497104b0

FGroup * __thiscall FMeshRenderDecomposition::GetGroup(FMeshRenderDecomposition *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGroup *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Groups).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FGroup **)((this->Groups).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetGroupForTriangle @ 1497105d0

int __thiscall
FMeshRenderDecomposition::GetGroupForTriangle(FMeshRenderDecomposition *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->TriangleToGroupMap).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->TriangleToGroupMap).AllocatorInstance.Data + (longlong)param_1 * 4);
}

