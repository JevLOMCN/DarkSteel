// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// <lambda_invoker_cdecl> @ 14355b850

TVector<double> * __cdecl
`UE::Geometry::FMeshSurfacePath::AddViaPlanarWalk'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  
  lVar3 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ~FMeshSurfacePath @ 143569100

void __thiscall UE::Geometry::FMeshSurfacePath::~FMeshSurfacePath(FMeshSurfacePath *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
  pFVar1 = (this->Path).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddViaPlanarWalk @ 143574e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FMeshSurfacePath::AddViaPlanarWalk
          (FMeshSurfacePath *this,int param_1,int param_2,TVector<double> *param_3,int param_4,
          int param_5,TVector<double> *param_6,TVector<double> *param_7,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)>
          *param_8,bool param_9,double param_10,double param_11,double param_12)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStackY_168 [32];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> local_b8;
  undefined1 local_88 [24];
  undefined8 uStack_70;
  undefined8 local_68;
  double *pdStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(longlong *)param_8 == 0) {
    local_88._0_8_ = *(undefined8 *)param_8;
    dVar2 = *(double *)&param_8->field_0x8;
    local_88._16_8_ = *(undefined8 *)&param_8->field_0x10;
    uStack_70 = *(undefined8 *)&param_8->field_0x18;
    uVar1 = *(undefined8 *)&param_8->field_0x20;
    pdStack_60 = *(double **)&param_8->field_0x28;
    *(code **)param_8 =
         Core::Private::Function::
         TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_*,int>
         ::Call;
    *(undefined8 *)&param_8->field_0x8 = local_88._8_8_;
    *(undefined4 *)&param_8->field_0x10 = 0x50aa66c0;
    *(undefined4 *)&param_8->field_0x14 = 1;
    *(undefined4 *)&param_8->field_0x18 = 0x4355b850;
    *(undefined4 *)&param_8->field_0x1c = 1;
    *(undefined4 *)&param_8->field_0x20 = (undefined4)local_68;
    *(undefined4 *)&param_8->field_0x24 = local_68._4_4_;
    *(undefined4 *)&param_8->field_0x28 = 0;
    *(undefined4 *)&param_8->field_0x2c = 0;
    local_68 = uVar1;
    local_88._8_8_ = dVar2;
    if ((double)local_88._0_8_ != 0.0) {
      pdVar4 = &(((TVector<double>_u_0 *)local_88)->_s_0).Z;
      if (pdStack_60 != (double *)0x0) {
        pdVar4 = pdStack_60;
      }
      (**(code **)((longlong)*pdVar4 + 0x10))();
    }
  }
  local_b8._0_8_ = *(undefined8 *)param_8;
  local_b8._40_8_ = 0;
  if (local_b8._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_8->field_0x10;
    if (*(undefined8 **)&param_8->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_8->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_b8.field_0x10);
  }
  local_f8._s_0.X = (param_7->field0_0x0)._s_0.X;
  local_f8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
  local_f8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  local_d8._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_d8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_d8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_88._0_8_ = (param_3->field0_0x0)._s_0.X;
  local_88._8_8_ = (param_3->field0_0x0)._s_0.Y;
  local_88._16_8_ = (param_3->field0_0x0)._s_0.Z;
  bVar3 = WalkMeshPlanar(this->Mesh,param_1,param_2,
                         (TVector<double> *)&((TVector<double>_u_0 *)local_88)->_s_0,param_4,param_5
                         ,(TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0,
                         &local_b8,param_9,param_10,param_11,&this->Path,param_12);
  if (*(longlong *)param_8 != 0) {
    plVar6 = (longlong *)&param_8->field_0x10;
    if (*(longlong **)&param_8->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_8->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return bVar3;
}

// EmbedSimplePath @ 14358eaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FMeshSurfacePath::EmbedSimplePath
          (FMeshSurfacePath *this,bool param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3,double param_4)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FMeshSurfacePoint *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_2b8 [32];
  ForAnyElementType local_260;
  int local_258;
  int local_254;
  ulonglong local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  undefined8 local_230;
  uint local_228;
  int local_224;
  TArray<int,TSizedDefaultAllocator<32>_> local_220;
  undefined1 local_208 [4];
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  ulonglong local_1c8;
  longlong local_1b8;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined4 local_184;
  undefined1 local_168 [4];
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_128 [4];
  undefined8 local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  initializer_list<int> local_e8;
  TVector<double> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  FMeshSurfacePoint local_b0;
  FMeshSurfacePoint local_88;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  iVar7 = (this->Path).ArrayNum;
  local_224 = param_2->ArrayNum;
  if (iVar7 == 0) {
    return true;
  }
  uVar18 = iVar7 - 1;
  uVar17 = 0;
  uVar11 = 0;
  if ((int)uVar18 < iVar7) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  local_228 = uVar18;
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = false;
  pFVar16 = (FMeshSurfacePoint *)
            ((this->Path).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x30);
  if ((1 < iVar7) && (pFVar16->PointType == Triangle)) {
    uVar18 = iVar7 - 2;
    bVar4 = true;
  }
  iVar7 = (this->Path).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar11 = 0;
  if ((int)uVar13 < iVar7) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar9 = (longlong)(this->Path).ArrayNum;
  pFVar14 = (this->Path).AllocatorInstance.Data;
  local_250 = *(ulonglong *)(pFVar14 + lVar9 * 0x30 + -0x30);
  dStack_248 = *(double *)(pFVar14 + lVar9 * 0x30 + -0x30 + 8);
  local_240 = *(double *)(pFVar14 + lVar9 * 0x30 + -0x20);
  dStack_238 = *(double *)(pFVar14 + lVar9 * 0x30 + -0x20 + 8);
  local_230 = *(undefined8 *)(pFVar14 + lVar9 * 0x30 + -0x10);
  FMeshSurfacePoint::Pos(pFVar16,&local_d8,this->Mesh);
  if (((this->Path).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (*(int *)((this->Path).AllocatorInstance.Data + 0x20) == 2) {
    pFVar1 = this->Mesh;
    local_1a4 = 0xffffffffffffffff;
    local_19c = 0xffffffff;
    local_194 = 0xffffffffffffffff;
    local_18c = 0xffffffffffffffff;
    local_184 = 0xffffffff;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0xb8);
    if (((this->Path).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar14 = (this->Path).AllocatorInstance.Data;
    if (((this->Path).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    (*pcVar3)(pFVar1,*(undefined4 *)(this->Path).AllocatorInstance.Data,pFVar14 + 8);
    if ((int)local_230 == 2) {
      if (((this->Path).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)(this->Path).AllocatorInstance.Data == (uint)local_250) {
        local_60 = (int)local_194;
        local_5c = local_194._4_4_;
        local_58 = local_1a8;
        local_e8._First = &local_60;
        local_e8._Last = &local_54;
        pTVar10 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                            (&local_c0,&local_e8);
        pFVar16 = RelocateTrianglePointAfterRefinement
                            (&local_b0,this->Mesh,&local_d8,pTVar10,param_4);
        local_250 = *(ulonglong *)pFVar16;
        dStack_248 = (pFVar16->BaryCoord).field0_0x0._s_0.X;
        local_240 = (pFVar16->BaryCoord).field0_0x0._s_0.Y;
        dStack_238 = (pFVar16->BaryCoord).field0_0x0._s_0.Z;
        local_230 = *(undefined8 *)&pFVar16->PointType;
      }
    }
    pFVar14 = (param_2->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_198) &&
        ((FScriptContainerElement *)&local_198 < pFVar14 + (longlong)param_2->ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    uVar17 = 1;
    param_2->ArrayNum = iVar7 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_198;
  }
  local_1b8 = (longlong)(int)uVar18;
  uVar11 = 0;
  local_1c8 = uVar17;
  if ((longlong)uVar17 <= local_1b8) {
    lVar9 = uVar17 * 0x30;
    do {
      uVar13 = (uint)uVar17;
      uVar18 = uVar11;
      if ((int)uVar13 < (this->Path).ArrayNum) {
        uVar18 = ~uVar13 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)((this->Path).AllocatorInstance.Data + lVar9 + 0x20) == 2) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3272096632316887741>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                           ,0x2bd,"Path[PathIdx].Key.PointType != ESurfacePointType::Triangle");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        return false;
      }
      uVar18 = uVar11;
      if ((int)uVar13 < (this->Path).ArrayNum) {
        uVar18 = ~uVar13 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar14 = (this->Path).AllocatorInstance.Data + lVar9;
      if (*(uint *)(pFVar14 + 0x20) == 1) {
        uVar18 = *(uint *)pFVar14;
        pFVar1 = this->Mesh;
        if (((((int)uVar18 < 0) ||
             ((int)((pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar18)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((pFVar1->EdgeRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3272096632316887749>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                               ,0x2c5,"Mesh->IsEdge(Pt.ElementID)"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_204 = 0xffffffffffffffff;
        local_1fc = 0xffffffffffffffff;
        local_1f4 = 0xffffffffffffffff;
        local_1e4 = 0xffffffffffffffff;
        local_1dc = 0xffffffffffffffff;
        local_1d4 = 0xffffffff;
        (**(code **)(this->Mesh->_padding_ + 0x30))
                  (this->Mesh,*(uint *)pFVar14,local_208,*(undefined8 *)(pFVar14 + 8));
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_1e8;
        uVar18 = (uint)local_250;
        if (((int)local_230 == 2) &&
           (((uint)local_1f4 == (uint)local_250 || (local_1f4._4_4_ == (uint)local_250)))) {
          local_260.Data = (FScriptContainerElement *)0x0;
          local_258 = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,0,&local_260,1,&local_254);
          *(uint *)local_260.Data = uVar18;
          if ((uint)local_1f4 == (uint)local_250) {
            if (((local_260.Data <= (FScriptContainerElement *)&local_1e4) &&
                ((FScriptContainerElement *)&local_1e4 < local_260.Data + (longlong)local_254 * 4))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (local_258 == local_254) {
              local_258 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_260,&local_254);
            }
            uVar8 = (undefined4)local_1e4;
            iVar7 = local_258;
          }
          else {
            if (((local_260.Data <= (FScriptContainerElement *)((longlong)&local_1e4 + 4)) &&
                ((FScriptContainerElement *)((longlong)&local_1e4 + 4U) <
                 local_260.Data + (longlong)local_254 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (local_258 == local_254) {
              local_258 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_260,&local_254);
            }
            uVar8 = local_1e4._4_4_;
            iVar7 = local_258;
          }
          _Src.Data = local_260.Data;
          local_258 = iVar7 + 1;
          *(undefined4 *)(local_260.Data + (longlong)iVar7 * 4) = uVar8;
          lVar15 = (longlong)local_258;
          local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.ArrayNum = local_258;
          if (local_258 == 0) {
            local_220.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_258,0,&local_220.AllocatorInstance,local_258,&local_220.ArrayMax);
            memcpy(local_220.AllocatorInstance.Data,_Src.Data,lVar15 << 2);
          }
          pFVar16 = RelocateTrianglePointAfterRefinement
                              (&local_88,this->Mesh,&local_d8,&local_220,param_4);
          local_250 = *(ulonglong *)pFVar16;
          dStack_248 = (pFVar16->BaryCoord).field0_0x0._s_0.X;
          local_240 = (pFVar16->BaryCoord).field0_0x0._s_0.Y;
          dStack_238 = (pFVar16->BaryCoord).field0_0x0._s_0.Z;
          local_230 = *(undefined8 *)&pFVar16->PointType;
          if (local_260.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data);
          }
        }
        else if ((uVar13 != local_228) &&
                ((((int)local_230 == 1 && (*(uint *)pFVar14 == (uint)local_250)) &&
                 (bVar6 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<3272096632316887769>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                                     ,0x2d9,"false"), bVar6)))) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
        if ((*(uint *)(pFVar14 + 0x20) != 0) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3272096632316887774>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                               ,0x2de,"Pt.PointType == ESurfacePointType::Vertex"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar18 = *(uint *)pFVar14;
        pFVar1 = this->Mesh;
        if (((((int)uVar18 < 0) ||
             ((int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar18)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((pFVar1->VertexRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3272096632316887775>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                               ,0x2df,"Mesh->IsVertex(Pt.ElementID)"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((param_3) && (iVar7 = param_2->ArrayNum, iVar7 == local_224)) && (iVar7 != 0)) {
          uVar18 = uVar11;
          if ((int)(iVar7 - 1U) < iVar7) {
            uVar18 = ~(iVar7 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(uint *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4) ==
              *(uint *)pFVar14) goto LAB_14358f550;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(uint *)pFVar14;
      }
LAB_14358f550:
      uVar17 = (ulonglong)(uVar13 + 1);
      local_1c8 = local_1c8 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((longlong)local_1c8 <= local_1b8);
  }
  if (bVar4) {
    if ((int)local_230 == 2) {
      local_124 = 0xffffffffffffffff;
      local_11c = 0xffffffff;
      local_114 = 0xffffffffffffffff;
      local_10c = 0xffffffffffffffff;
      local_104 = 0xffffffff;
      (**(code **)(this->Mesh->_padding_ + 0xb8))
                (this->Mesh,local_250 & 0xffffffff,&dStack_248,local_128);
      pFVar14 = (param_2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar14 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar12 = iVar7 + 1;
      lVar9 = (longlong)iVar7;
    }
    else if ((int)local_230 == 1) {
      local_164 = 0xffffffffffffffff;
      local_15c = 0xffffffffffffffff;
      local_154 = 0xffffffffffffffff;
      local_144 = 0xffffffffffffffff;
      local_13c = 0xffffffffffffffff;
      local_134 = 0xffffffff;
      (**(code **)(this->Mesh->_padding_ + 0x30))
                (this->Mesh,local_250 & 0xffffffff,local_168,dStack_248);
      pFVar14 = (param_2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar14 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar12 = iVar7 + 1;
      lVar9 = (longlong)iVar7;
      local_118 = local_148;
    }
    else {
      iVar7 = param_2->ArrayNum;
      if (iVar7 != 0) {
        if ((int)(iVar7 - 1U) < iVar7) {
          uVar11 = ~(iVar7 - 1U) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(int *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4) ==
            (uint)local_250) goto LAB_14358f890;
      }
      pFVar14 = (param_2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 < pFVar14 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar12 = iVar7 + 1;
      lVar9 = (longlong)iVar7;
      local_118 = (uint)local_250;
    }
    param_2->ArrayNum = iVar12;
    *(undefined4 *)((param_2->AllocatorInstance).Data + lVar9 * 4) = local_118;
  }
LAB_14358f890:
  if ((param_1) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3272096632316887819>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\EmbedSurfacePath.cpp"
                         ,0x30b,"false"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return true;
}

// IsConnected @ 1435b9cb0

bool __thiscall UE::Geometry::FMeshSurfacePath::IsConnected(FMeshSurfacePath *this)

{
  FDynamicMesh3 *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint local_res8 [2];
  int *local_res10;
  uint local_48;
  
  uVar8 = 0;
  local_res10 = &(this->Path).ArrayNum;
  bVar15 = this->bIsClosed == false;
  if (!bVar15) {
    uVar8 = *local_res10 - 1;
  }
  uVar12 = (uint)bVar15;
  if ((int)uVar12 < *local_res10) {
    lVar9 = (longlong)(int)uVar8 * 0x30;
    lVar11 = (ulonglong)uVar12 * 0x30;
    do {
      uVar13 = 0;
      if ((int)uVar8 < (this->Path).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      pFVar1 = this->Mesh;
      uVar13 = *(uint *)((this->Path).AllocatorInstance.Data + lVar9 + 0x28);
      if (((int)uVar13 < 0) ||
         ((int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar13)) {
        return false;
      }
      uVar14 = (ulonglong)(uVar13 & 0x1ff);
      lVar9 = (ulonglong)(uVar13 >> 9) * 8;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar1->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + lVar9) + uVar14 * 2) - 1U)) {
        return false;
      }
      local_res8[0] = uVar8;
      lVar10 = 0;
      local_res8[1] = uVar12;
      do {
        uVar8 = local_res8[lVar10];
        uVar6 = 0;
        if ((int)uVar8 < (this->Path).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        pFVar7 = (this->Path).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30;
        uVar8 = *(uint *)(pFVar7 + 0x20);
        if (uVar8 == 0) {
          lVar3 = *(longlong *)((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + lVar9);
          uVar2 = *(undefined8 *)(lVar3 + uVar14 * 0xc);
          uVar8 = *(uint *)pFVar7;
          local_48 = (uint)uVar2;
          if ((local_48 != uVar8) && ((uint)((ulonglong)uVar2 >> 0x20) != uVar8)) {
            bVar15 = *(uint *)(lVar3 + 8 + uVar14 * 0xc) == uVar8;
            goto LAB_1435b9ed0;
          }
        }
        else if (uVar8 == 1) {
          uVar2 = *(undefined8 *)
                   (*(longlong *)
                     ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(*(uint *)pFVar7 >> 9) * 8) + 8 +
                   (ulonglong)(*(uint *)pFVar7 & 0x1ff) * 0x10);
          if ((uint)uVar2 != uVar13) {
            bVar15 = (uint)((ulonglong)uVar2 >> 0x20) == uVar13;
            goto LAB_1435b9ed0;
          }
        }
        else if (uVar8 == 2) {
          bVar15 = *(uint *)pFVar7 == uVar13;
LAB_1435b9ed0:
          if (!bVar15) {
            return false;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < 2);
      uVar13 = uVar12 + 1;
      lVar9 = lVar11;
      lVar11 = lVar11 + 0x30;
      uVar8 = uVar12;
      uVar12 = uVar13;
    } while ((int)uVar13 < *local_res10);
  }
  return true;
}

// Validate @ 1435cac30

EOperationValidationResult __thiscall
UE::Geometry::FMeshSurfacePath::Validate(FMeshSurfacePath *this)

{
  bool bVar1;
  
  bVar1 = IsConnected(this);
  return (EOperationValidationResult)!bVar1;
}

