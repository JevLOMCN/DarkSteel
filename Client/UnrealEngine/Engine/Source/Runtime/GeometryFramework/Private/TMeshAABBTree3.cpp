// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// BuildTopDown<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1496f1120

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
BuildTopDown<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,bool param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int iVar1;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res20 [8];
  uint local_118 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  double local_f0;
  double dStack_e8;
  double local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58 [2];
  
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  if (param_3 < 1) {
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_3,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_3,&local_110.AllocatorInstance,0,&local_110.ArrayMax);
  }
  dVar5 = __real_3fd5555555555555;
  pFVar9 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar1 * 4;
  do {
    if (param_2->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar9 == pFVar2) {
      BuildTopDown(this,&local_100,&local_110,local_100.ArrayNum);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return;
    }
    local_118[0] = *(uint *)pFVar9;
    this_00 = this->Mesh;
    if (((-1 < (int)local_118[0]) &&
        ((int)local_118[0] <
         (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(local_118[0] >> 9) * 8) +
                           (ulonglong)(local_118[0] & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,local_118[0],(TVector<double> *)&local_d8._s_0,
                 (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_a8._s_0);
      dVar11 = (local_d8._s_0.X + local_c0._s_0.X + local_a8._s_0.X) * dVar5;
      dVar4 = (local_d8._s_0.Y + local_c0._s_0.Y + local_a8._s_0.Y) * dVar5;
      dVar10 = (local_d8._s_0.Z + local_c0._s_0.Z + local_a8._s_0.Z) * dVar5;
      sVar7 = _dclass(SUB84(dVar4 * dVar4 + dVar11 * dVar11 + dVar10 * dVar10,0));
      if ((sVar7 != 2) && (sVar7 < 1)) {
        if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_118) &&
           (((FScriptContainerElement *)local_118 <
             local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = local_100.ArrayNum;
        if (local_100.ArrayNum == local_100.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
        }
        local_100.ArrayNum = iVar8 + 1;
        *(uint *)(local_100.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_118[0];
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this->Mesh,local_118[0],(TVector<double> *)&local_88._s_0,
                   (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_58[0]._s_0);
        local_f0 = (local_88._s_0.X + local_70._s_0.X + (double)local_58[0]._0_8_) * dVar5;
        dStack_e8 = (local_88._s_0.Y + local_70._s_0.Y + (double)local_58[0]._8_8_) * dVar5;
        local_e0 = (local_88._s_0.Z + local_70._s_0.Z + (double)local_58[0]._16_8_) * dVar5;
        if (((local_110.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 <
             local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 0x18)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = local_110.ArrayNum;
        if (local_110.ArrayNum == local_110.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_110.AllocatorInstance,&local_110.ArrayMax);
        }
        local_110.ArrayNum = iVar8 + 1;
        *(double *)(local_110.AllocatorInstance.Data + (longlong)iVar8 * 0x18) = local_f0;
        *(double *)(local_110.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 8) = dStack_e8;
        *(double *)(local_110.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 0x10) = local_e0;
      }
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

