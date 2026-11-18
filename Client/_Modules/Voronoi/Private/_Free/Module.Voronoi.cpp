// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 23

// `dynamic_initializer_for_'ModuleRegistrantVoronoi'' @ 140f50310

void __cdecl _dynamic_initializer_for__ModuleRegistrantVoronoi__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Voronoi";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Voronoi",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FVoronoiPlugin>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14369fff0

void * __thiscall IVoronoiPlugin::_scalar_deleting_destructor_(IVoronoiPlugin *this,uint param_1)

{
  *this = (IVoronoiPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436a0050

void * __thiscall FVoronoiPlugin::_scalar_deleting_destructor_(FVoronoiPlugin *this,uint param_1)

{
  *this = (FVoronoiPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DefaultConstructItems<`FVoronoiDiagram::ComputeCellEdges'::__l2::FChunkOutput,int> @ 1436a0090

void __cdecl
DefaultConstructItems<_FVoronoiDiagram::ComputeCellEdges_::__l2::FChunkOutput,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVoronoiCellInfo,int> @ 1436a00c0

void __cdecl DefaultConstructItems<FVoronoiCellInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FVoronoiDiagram::ComputeCellEdges'::__l2::FChunkOutput,int> @ 1436a0170

void __cdecl
DestructItems<_FVoronoiDiagram::ComputeCellEdges_::__l2::FChunkOutput,int>
          (FChunkOutput *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CellMember).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Edges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FVoronoiCellInfo,int> @ 1436a01c0

void __cdecl DestructItems<FVoronoiCellInfo,int>(FVoronoiCellInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Neighbors;
    do {
      pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FVoronoiCellInfo *)(pTVar2 + -2))->Vertices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// `scalar_deleting_destructor' @ 1436a1500

void * __thiscall voro::voronoicell::_scalar_deleting_destructor_(voronoicell *this,uint param_1)

{
  voronoicell_base::~voronoicell_base((voronoicell_base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// EmptyVoroContainerInit @ 1436a24d0

TPimplPtr<voro::container,0> __cdecl
`anonymous_namespace'::EmptyVoroContainerInit(int param_1,TBox<double> *param_2,double param_3)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  TPimplPtr<voro::container,0> TVar9;
  undefined8 *puVar10;
  undefined4 in_register_0000000c;
  undefined1 (*in_R8) [16];
  double dVar11;
  double in_XMM3_Qa;
  double dVar12;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  undefined7 uStack_57;
  
  dVar1 = *(double *)in_R8[1];
  dVar11 = *(double *)in_R8[2];
  dVar12 = in_XMM3_Qa + *(double *)(in_R8[1] + 8);
  dVar5 = *(double *)(*in_R8 + 8) - in_XMM3_Qa;
  dVar7 = in_XMM3_Qa + *(double *)(in_R8[2] + 8);
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = *(double *)*in_R8 - in_XMM3_Qa;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *in_R8 = auVar4;
  auVar3._8_4_ = SUB84(dVar12,0);
  auVar3._0_8_ = dVar1 - in_XMM3_Qa;
  auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  in_R8[1] = auVar3;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = in_XMM3_Qa + dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  in_R8[2] = auVar6;
  *(ulonglong *)in_R8[3] = CONCAT71(uStack_57,1);
  dVar5 = *(double *)in_R8[2] - *(double *)(*in_R8 + 8);
  dVar1 = *(double *)(in_R8[1] + 8) - *(double *)*in_R8;
  dVar7 = *(double *)(in_R8[2] + 8) - *(double *)in_R8[1];
  dVar11 = dVar5;
  if (dVar5 <= dVar1) {
    dVar11 = dVar1;
  }
  if (dVar11 <= dVar7) {
    dVar11 = dVar7;
  }
  if (__real_7ff0000000000000 <= dVar11) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7244755443392708520>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\Voronoi\\Voronoi.cpp"
                       ,0x58,"BoundingBoxSize.GetMax() < ((float)((float)(1e+300 * 1e+300)))");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      TVar9.Ptr = (container *)(*pcVar2)();
      return (TPimplPtr<voro::container,0>)TVar9.Ptr;
    }
  }
  voro::guess_optimal((int)param_2,dVar1,dVar5,dVar7,local_res20,local_res18,local_res8);
  puVar10 = ::operator_new(0xe0);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10[1] = 0;
    *puVar10 = UE::Core::Private::PimplPtr::DeleterFunc<voro::container>;
    voro::container::container
              ((container *)(puVar10 + 2),*(double *)*in_R8,*(double *)(in_R8[1] + 8),
               *(double *)(*in_R8 + 8),*(double *)in_R8[2],*(double *)in_R8[1],
               *(double *)(in_R8[2] + 8),local_res20[0],local_res18[0],local_res8[0],false,false,
               false,10);
  }
  *(undefined8 **)CONCAT44(in_register_0000000c,param_1) = puVar10 + 2;
  return (TPimplPtr<voro::container,0>)(container *)CONCAT44(in_register_0000000c,param_1);
}

// GetVoronoiEdges @ 1436a2da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
GetVoronoiEdges(TArrayView<UE::Math::TVector<double>_const_,int> *param_1,TBox<double> *param_2,
               TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
               *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  TPimplPtr<voro::container,0> TVar3;
  int iVar4;
  double in_XMM2_Qa;
  undefined1 auStack_e8 [32];
  container *local_c8;
  undefined1 local_c0 [16];
  double local_b0;
  double dStack_a8;
  undefined1 local_a0 [16];
  uchar local_90;
  uchar auStack_8f [7];
  FVoronoiDiagram local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  dVar1 = (param_2->Min).field0_0x0._s_0.Y - _UNK_150ab51c8;
  local_88.Container.Ptr = (container *)0x0;
  local_90 = '\x01';
  dVar2 = (param_2->Max).field0_0x0._s_0.Z + _UNK_150ab51c8;
  local_c0._8_4_ = SUB84(dVar1,0);
  local_c0._0_8_ = (param_2->Min).field0_0x0._s_0.X - ___xmm_3f847ae1400000003f847ae140000000;
  local_c0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_b0 = (param_2->Min).field0_0x0._s_0.Z - __real_3f847ae140000000;
  local_a0._8_4_ = SUB84(dVar2,0);
  local_a0._0_8_ = (param_2->Max).field0_0x0._s_0.Y + ___xmm_3f847ae1400000003f847ae140000000;
  local_a0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dStack_a8 = (param_2->Max).field0_0x0._s_0.X + __real_3f847ae140000000;
  `anonymous_namespace'::EmptyVoroContainerInit
            ((int)&local_c8,(TBox<double> *)(ulonglong)(uint)param_1->ArrayNum,in_XMM2_Qa);
  if (param_5 <= 0.0) {
    `anonymous_namespace'::PutSites(local_c8,param_1,0);
  }
  else {
    `anonymous_namespace'::PutSitesWithDistanceCheck(local_c8,param_1,0,param_5);
  }
  TVar3.Ptr = local_88.Container.Ptr;
  local_88.Container.Ptr = local_c8;
  local_c8 = (container *)0x0;
  if (TVar3.Ptr != (container *)0x0) {
    (**(code **)&TVar3.Ptr[-1].field_0xc0)(&TVar3.Ptr[-1].field_0xc0);
    if (local_c8 != (container *)0x0) {
      (**(code **)&local_c8[-1].field_0xc0)(&local_c8[-1].field_0xc0);
    }
  }
  local_88.NumSites = param_1->ArrayNum;
  local_88.Bounds.Min.field0_0x0._s_0.X = (double)local_c0._0_8_;
  local_88.Bounds.Min.field0_0x0._s_0.Y = (double)local_c0._8_8_;
  iVar4 = (int)(local_88.NumSites + (local_88.NumSites >> 0x1f & 0x3fU)) >> 6;
  local_88.Bounds.Min.field0_0x0._s_0.Z = local_b0;
  local_88.Bounds.Max.field0_0x0._s_0.X = dStack_a8;
  local_88.Bounds.Pad[0] = auStack_8f[0];
  local_88.Bounds.Pad[1] = auStack_8f[1];
  local_88.Bounds.Pad[2] = auStack_8f[2];
  local_88.Bounds.Pad[3] = auStack_8f[3];
  local_88.Bounds.Pad[4] = auStack_8f[4];
  local_88.Bounds.Pad[5] = auStack_8f[5];
  local_88.Bounds.Pad[6] = auStack_8f[6];
  local_88.Bounds.IsValid = local_90;
  if (iVar4 < 0x96) {
    iVar4 = 0x96;
  }
  local_88.Bounds.Max.field0_0x0._s_0.Y = (double)local_a0._0_8_;
  local_88.Bounds.Max.field0_0x0._s_0.Z = (double)local_a0._8_8_;
  FVoronoiDiagram::ComputeCellEdges(&local_88,param_3,param_4,iVar4);
  if (local_88.Container.Ptr != (container *)0x0) {
    (**(code **)&local_88.Container.Ptr[-1].field_0xc0)(&local_88.Container.Ptr[-1].field_0xc0);
  }
  return true;
}

// PutSites @ 1436a30a0

void __cdecl
`anonymous_namespace'::PutSites
          (container *param_1,TArrayView<UE::Math::TVector<double>_const_,int> *param_2,int param_3)

{
  TVector<double> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  
  iVar5 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = param_2->DataPtr;
      iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6));
      if (((iVar5 == 0) ||
          (iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8)), iVar5 == 0)) ||
         (iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10)), iVar5 == 0)) {
        local_res10[0] = 0;
        ``anonymous_namespace'::PutSites'::__l7::<lambda_1>::operator()(local_res10);
      }
      else {
        voro::container::put
                  (param_1,uVar7 + param_3,*(double *)((longlong)&pTVar1->field0_0x0 + lVar6),
                   *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8),
                   *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10));
      }
      iVar5 = param_2->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// PutSitesWithDistanceCheck @ 1436a31c0

int __cdecl
`anonymous_namespace'::PutSitesWithDistanceCheck
          (container *param_1,TArrayView<UE::Math::TVector<double>_const_,int> *param_2,int param_3,
          double param_4)

{
  TVector<double> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res10 [8];
  int local_f8 [2];
  double local_f0;
  double local_e8;
  double local_e0;
  voro_compute<voro::container> local_d8;
  
  iVar7 = 0;
  voro::container::make_compute(param_1,&local_d8);
  iVar5 = param_2->ArrayNum;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar5) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pTVar1 = param_2->DataPtr;
      iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6));
      if (((iVar5 == 0) ||
          (iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8)), iVar5 == 0)) ||
         (iVar5 = _finite(*(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10)), iVar5 == 0)) {
        iVar7 = iVar7 + 1;
        local_res10[0] = 0;
        ``anonymous_namespace'::PutSitesWithDistanceCheck'::__l7::<lambda_1>::operator()
                  (local_res10);
      }
      else {
        bVar3 = voro::container::find_voronoi_cell
                          (param_1,*(double *)((longlong)&pTVar1->field0_0x0 + lVar6),
                           *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8),
                           *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10),&local_f0,
                           &local_e8,&local_e0,local_f8,&local_d8);
        if ((!bVar3) ||
           (dVar11 = *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8) - local_e8,
           dVar10 = *(double *)((longlong)&pTVar1->field0_0x0 + lVar6) - local_f0,
           dVar9 = *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10) - local_e0,
           param_4 <= dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9)) {
          voro::container::put
                    (param_1,uVar8 + param_3,*(double *)((longlong)&pTVar1->field0_0x0 + lVar6),
                     *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 8),
                     *(double *)((longlong)&pTVar1->field0_0x0 + lVar6 + 0x10));
        }
        else {
          iVar7 = iVar7 + 1;
        }
      }
      iVar5 = param_2->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar8 < iVar5);
  }
  operator_delete__(local_d8.qu);
  operator_delete__(local_d8.mask);
  return iVar7;
}

// SafeInitBounds @ 1436a3450

TBox<double> * __cdecl
`anonymous_namespace'::SafeInitBounds
          (TBox<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  TVector<double> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar5 = param_1->DataPtr;
  iVar4 = param_1->ArrayNum;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar3;
  __return_storage_ptr__->IsValid = '\0';
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  dVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar9;
  pTVar1 = pTVar5 + iVar4;
  for (; pTVar5 != pTVar1; pTVar5 = pTVar5 + 1) {
    iVar4 = _finite((pTVar5->field0_0x0)._s_0.X);
    if (((iVar4 != 0) && (iVar4 = _finite((pTVar5->field0_0x0)._s_0.Y), iVar4 != 0)) &&
       (iVar4 = _finite((pTVar5->field0_0x0)._s_0.Z), iVar4 != 0)) {
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar8 = (pTVar5->field0_0x0)._s_0.X;
        dVar2 = (pTVar5->field0_0x0)._s_0.Y;
        __return_storage_ptr__->IsValid = '\x01';
        dVar9 = (pTVar5->field0_0x0)._s_0.Z;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar9;
      }
      else {
        dVar9 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar6 = SUB84(dVar9,0);
        uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar8 = *(double *)&pTVar5->field0_0x0;
        if (dVar8 <= dVar9) {
          uVar6 = SUB84(dVar8,0);
          uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
        }
        dVar9 = (pTVar5->field0_0x0)._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        dVar2 = (pTVar5->field0_0x0)._s_0.X;
        if (dVar8 <= dVar2) {
          dVar8 = dVar2;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar7,uVar6);
        uVar6 = SUB84(dVar9,0);
        uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar2 <= dVar9) {
          uVar6 = SUB84(dVar2,0);
          uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar9 <= dVar2) {
          dVar9 = dVar2;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar6);
        dVar8 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        uVar6 = SUB84(dVar8,0);
        uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar2 = *(double *)((longlong)&pTVar5->field0_0x0 + 0x10);
        if (dVar2 <= dVar8) {
          uVar6 = SUB84(dVar2,0);
          uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar9;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar7,uVar6);
        dVar9 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        uVar6 = SUB84(dVar9,0);
        uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar8 = *(double *)((longlong)&pTVar5->field0_0x0 + 0x10);
        if (dVar9 <= dVar8) {
          uVar6 = SUB84(dVar8,0);
          uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar7,uVar6);
      }
    }
  }
  return __return_storage_ptr__;
}

// VoronoiNeighbors @ 1436a36c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
VoronoiNeighbors(TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
                TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2
                ,bool param_3,double param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double in_XMM2_Qa;
  undefined1 auStackY_258 [32];
  undefined1 local_218;
  bool local_217;
  int local_214;
  container *local_210;
  int local_208;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_200;
  longlong local_1f8;
  voro_compute<voro::container> local_1e8;
  voronoicell_neighbor local_148;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_217 = param_3;
  local_200 = param_2;
  `anonymous_namespace'::SafeInitBounds(&local_88,param_1);
  `anonymous_namespace'::EmptyVoroContainerInit
            ((int)&local_210,(TBox<double> *)(ulonglong)(uint)param_1->ArrayNum,in_XMM2_Qa);
  if (param_4 <= 0.0) {
    `anonymous_namespace'::PutSites(local_210,param_1,0);
  }
  else {
    `anonymous_namespace'::PutSitesWithDistanceCheck(local_210,param_1,0,param_4);
  }
  uVar1 = param_1->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,uVar1,Default);
  voro::container::make_compute(local_210,&local_1e8);
  local_214 = *(int *)local_210;
  iVar15 = *(int *)&local_210->field_0x4;
  iVar2 = *(int *)&local_210->field_0x10;
  piVar4 = *(int **)&local_210->field_0xb8;
  local_1f8 = *(longlong *)&local_210->field_0xa8;
  local_208 = iVar15;
  voro::voronoicell_neighbor::voronoicell_neighbor(&local_148);
  iVar12 = 0;
  iVar11 = 0;
  iVar10 = 0;
  iVar13 = 0;
  iVar3 = *piVar4;
  do {
    iVar14 = 0;
    if (iVar3 != 0) {
      do {
        do {
          bVar6 = voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>
                            (&local_1e8,&local_148,iVar12,iVar14,iVar13,iVar10,iVar11);
          if (bVar6) {
            uVar1 = *(uint *)(*(longlong *)(local_1f8 + (longlong)iVar12 * 8) + (longlong)iVar14 * 4
                             );
            uVar8 = 0;
            if ((int)uVar1 < local_200->ArrayNum) {
              uVar8 = ~uVar1 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            voro::voronoicell_neighbor::neighborsTArray
                      (&local_148,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((local_200->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x10),local_217
                      );
            iVar15 = local_208;
          }
          else {
            local_218 = bVar6;
            `VoronoiNeighbors'::__l7::<lambda_1>::operator()(&local_218);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < piVar4[iVar12]);
        iVar14 = 0;
        do {
          lVar9 = (longlong)iVar12;
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 1;
          if (iVar13 == local_214) {
            iVar13 = 0;
            iVar10 = iVar10 + 1;
            if (iVar10 == iVar15) {
              iVar10 = 0;
              iVar11 = iVar11 + 1;
              if (iVar12 == iVar2) goto LAB_1436a396a;
            }
          }
        } while (piVar4[lVar9 + 1] == 0);
      } while( true );
    }
    lVar9 = (longlong)iVar12;
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 1;
    if (iVar13 == local_214) {
      iVar13 = 0;
      iVar10 = iVar10 + 1;
      if (iVar10 == iVar15) {
        iVar10 = 0;
        iVar11 = iVar11 + 1;
        if (iVar12 == iVar2) {
LAB_1436a396a:
          voro::voronoicell_neighbor::~voronoicell_neighbor(&local_148);
          operator_delete__(local_1e8.qu);
          operator_delete__(local_1e8.mask);
          if (local_210 != (container *)0x0) {
            (**(code **)&local_210[-1].field_0xc0)(&local_210[-1].field_0xc0);
          }
          return true;
        }
      }
    }
    iVar3 = piVar4[lVar9 + 1];
  } while( true );
}

// neighbors @ 1436a3a00

void __thiscall
voro::voronoicell_base::neighbors(voronoicell_base *this,vector<int,std::allocator<int>_> *param_1)

{
  int *piVar1;
  
  piVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  if (piVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = piVar1;
  }
  return;
}

// print_edges_neighbors @ 1436a3a20

void __thiscall voro::voronoicell_base::print_edges_neighbors(voronoicell_base *this,int param_1)

{
  return;
}

// IMPLEMENT_MODULE_Voronoi @ 1436a3a30

void __cdecl IMPLEMENT_MODULE_Voronoi(void)

{
  return;
}

// operator() @ 1504a1120

bool __thiscall
``FVoronoiDiagram::ComputeAllCells'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1160

bool __thiscall
``FVoronoiDiagram::ComputeAllNeighbors'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708263>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708263>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a11a0

bool __thiscall
``FVoronoiDiagram::ComputeCellEdges'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708167>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708167>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a11e0

bool __thiscall ``anonymous_namespace'::PutSites'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708571>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708571>,
                       &``PutSites'::`7'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1220

bool __thiscall
``anonymous_namespace'::PutSitesWithDistanceCheck'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708551>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708551>,
                       &``PutSitesWithDistanceCheck'::`7'::<lambda_1>::operator()'::`2'::
                        ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1260

bool __thiscall `VoronoiNeighbors'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7244755443392708428>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7244755443392708428>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

