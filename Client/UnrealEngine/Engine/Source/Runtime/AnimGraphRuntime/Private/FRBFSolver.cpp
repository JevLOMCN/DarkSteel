// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// FindDistanceBetweenEntries @ 146440df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
FRBFSolver::FindDistanceBetweenEntries
          (FRBFEntry *param_1,FRBFEntry *param_2,FRBFParams *param_3,ERBFDistanceMethod param_4)

{
  uchar uVar1;
  float fVar2;
  TVector<double>_u_0 local_28;
  
  if (param_4 == DefaultMethod) {
    param_4 = param_3->DistanceMethod;
  }
  uVar1 = (param_3->TwistAxis).Value;
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  if (((uVar1 == '\0') ||
      (local_28._s_0.X = ___xmm_3ff00000000000000000000000000000, local_28._s_0.Y = _UNK_15061cbc8,
      uVar1 == '\x01')) ||
     (local_28._s_0.X = ___xmm_00000000000000003ff0000000000000, local_28._s_0.Y = _UNK_150689518,
     uVar1 != '\x02')) {
    local_28._s_0.Z = 0.0;
  }
  else {
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z = __real_3ff0000000000000;
  }
  fVar2 = GetDistanceBetweenEntries(param_1,param_2,param_4,(TVector<double> *)&local_28._s_0);
  return fVar2 * __real_42652ee0;
}

// FindTargetNeighbourDistances @ 146441450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRBFSolver::FindTargetNeighbourDistances
          (FRBFParams *param_1,TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement FVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  longlong local_d8;
  longlong local_d0;
  TVector<double>_u_0 local_c0 [5];
  
  iVar3 = param_2->ArrayNum;
  lVar21 = (longlong)iVar3;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar3,&param_3->AllocatorInstance,&param_3->ArrayNum,piVar1);
  memset((param_3->AllocatorInstance).Data + (longlong)iVar16 * 4,0,lVar21 * 4);
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  fVar11 = __real_42652ee0;
  dVar10 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  fVar8 = __real_38d1b717;
  dVar7 = __real_3ff0000000000000;
  if (iVar3 < 2) {
    return false;
  }
  uVar20 = 0;
  if (0 < lVar21) {
    local_d8 = 0;
    local_d0 = 0;
    do {
      uVar22 = ~uVar20 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      pFVar4 = (param_3->AllocatorInstance).Data;
      uVar18 = 0;
      *(undefined4 *)(pFVar4 + local_d8 * 4) = 0x7f7fc99e;
      lVar23 = 0;
      pFVar4 = pFVar4 + local_d8 * 4;
      do {
        if (uVar18 != uVar20) {
          uVar17 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar17 = uVar22;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
          FVar19 = (param_2->AllocatorInstance).Data[local_d0 + 0x98];
          uVar17 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
          pFVar5 = (param_2->AllocatorInstance).Data;
          uVar17 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar17 = uVar22;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
          if (FVar19 == (FScriptContainerElement)0x4) {
            FVar19 = (FScriptContainerElement)param_1->DistanceMethod;
          }
          uVar2 = (param_1->TwistAxis).Value;
          if (uVar2 == '\0') {
LAB_146441725:
            local_c0[0]._s_0.X = dVar12;
            local_c0[0]._s_0.Y = dVar13;
LAB_14644172a:
            local_c0[0]._s_0.Z = 0.0;
          }
          else {
            if (uVar2 == '\x01') {
              local_c0[0]._s_0.X = dVar9;
              local_c0[0]._s_0.Y = dVar10;
              goto LAB_14644172a;
            }
            if (uVar2 != '\x02') goto LAB_146441725;
            local_c0[0]._s_0.Z = dVar7;
            local_c0[0]._s_0.X = 0.0;
            local_c0[0]._s_0.Y = 0.0;
          }
          fVar24 = GetDistanceBetweenEntries
                             ((FRBFEntry *)
                              ((param_2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0xa0),
                              (FRBFEntry *)(pFVar5 + lVar23),(ERBFDistanceMethod)FVar19,
                              (TVector<double> *)&local_c0[0]._s_0);
          fVar25 = *(float *)pFVar4;
          if (fVar24 * fVar11 <= *(float *)pFVar4) {
            fVar25 = fVar24 * fVar11;
          }
          *(float *)pFVar4 = fVar25;
        }
        uVar18 = uVar18 + 1;
        lVar23 = lVar23 + 0xa0;
      } while ((int)uVar18 < iVar3);
      local_d8 = local_d8 + 1;
      fVar25 = *(float *)pFVar4;
      if (*(float *)pFVar4 <= fVar8) {
        fVar25 = fVar8;
      }
      local_d0 = local_d0 + 0xa0;
      uVar20 = uVar20 + 1;
      *(float *)pFVar4 = fVar25;
    } while (local_d8 < lVar21);
  }
  return true;
}

// GetOptimalRadiusForTargets @ 14644bf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
FRBFSolver::GetOptimalRadiusForTargets
          (FRBFParams *param_1,TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_2)

{
  uchar uVar1;
  uint uVar2;
  code *pcVar3;
  ForElementType<FRBFEntry> FVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FRBFEntry> FVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res10 [24];
  ForElementType<FRBFEntry> local_78;
  uint local_70;
  int local_6c;
  TVector<double>_u_0 local_68 [2];
  
  uVar2 = param_2->ArrayNum;
  pFVar9 = (FScriptContainerElement *)0x0;
  local_78.Data = (FRBFEntry *)0x0;
  local_6c = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<FRBFEntry,int>((FRBFEntry *)0x0,0);
  local_70 = 0;
  FVar11.Data = (FRBFEntry *)pFVar9;
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRBFEntry>_>
              (0x10,8,uVar2,&local_78,0,&local_6c);
    pFVar9 = (FScriptContainerElement *)(ulonglong)local_70;
    FVar11.Data = local_78.Data;
  }
  iVar8 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar10 = pFVar7 + (longlong)iVar8 * 0xa0;
  while( true ) {
    iVar6 = (int)pFVar9;
    if (param_2->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRBFTarget_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar10) break;
    if (((FVar11.Data <= pFVar7) &&
        (pFVar7 < (FScriptContainerElement *)((longlong)FVar11.Data + (longlong)local_6c * 0x10)))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
    if (iVar6 == local_6c) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRBFEntry>_>
                        (0x810,&local_78,&local_6c);
      FVar11.Data = local_78.Data;
    }
    local_70 = iVar6 + 1;
    pFVar9 = (FScriptContainerElement *)(ulonglong)local_70;
    FRBFEntry::FRBFEntry
              ((FRBFEntry *)((longlong)FVar11.Data + (longlong)iVar6 * 0x10),(FRBFEntry *)pFVar7);
    pFVar7 = pFVar7 + 0xa0;
  }
  uVar1 = (param_1->TwistAxis).Value;
  iVar8 = 0;
  local_68[0]._0_8_ = ___xmm_00000000000000003ff0000000000000;
  local_68[0]._8_8_ = _UNK_150689518;
  if (((uVar1 == '\0') ||
      (local_68[0]._0_8_ = ___xmm_3ff00000000000000000000000000000,
      local_68[0]._8_8_ = _UNK_15061cbc8, uVar1 == '\x01')) ||
     (local_68[0]._0_8_ = ___xmm_00000000000000003ff0000000000000,
     local_68[0]._8_8_ = _UNK_150689518, uVar1 != '\x02')) {
    local_68[0]._16_8_ = 0.0;
  }
  else {
    local_68[0]._s_0.X = 0.0;
    local_68[0]._s_0.Y = 0.0;
    local_68[0]._16_8_ = __real_3ff0000000000000;
  }
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    fVar12 = (float)(*pcVar3)();
    return fVar12;
  }
  fVar12 = 0.0;
  FVar4.Data = FVar11.Data;
  for (pFVar9 = (FScriptContainerElement *)FVar11.Data;
      pFVar7 = (FScriptContainerElement *)FVar11.Data,
      pFVar9 != (FScriptContainerElement *)((longlong)FVar11.Data + (longlong)iVar6 * 0x10);
      pFVar9 = pFVar9 + 0x10) {
    do {
      if (pFVar9 != pFVar7) {
        fVar13 = GetDistanceBetweenEntries
                           ((FRBFEntry *)pFVar9,(FRBFEntry *)pFVar7,param_1->DistanceMethod,
                            (TVector<double> *)&local_68[0]._s_0);
        fVar12 = fVar12 + fVar13;
        iVar8 = iVar8 + 1;
      }
      pFVar7 = pFVar7 + 0x10;
    } while (pFVar7 != (FScriptContainerElement *)((longlong)FVar11.Data + (longlong)iVar6 * 0x10));
    FVar4.Data = local_78.Data;
  }
  DestructItems<FRBFEntry,int>(FVar4.Data,iVar6);
  return (fVar12 / (float)iVar8) * __real_42652ee0;
}

// GetRadiusForTarget @ 14644e540

float __cdecl FRBFSolver::GetRadiusForTarget(FRBFTarget *param_1,FRBFParams *param_2)

{
  float fVar1;
  
  fVar1 = param_2->Radius;
  if (param_2->SolverType == Additive) {
    fVar1 = fVar1 * param_1->ScaleFactor;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  return fVar1;
}

// InitSolver @ 146455000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FRBFSolverData_const_,1> * __cdecl
FRBFSolver::InitSolver
          (TSharedPtr<FRBFSolverData_const_,1> *__return_storage_ptr__,FRBFParams *param_1,
          TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_2)

{
  TRBFInterpolator<FRBFEntry> *pTVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  ERBFSolverType EVar12;
  undefined3 uVar13;
  ERBFFunctionType EVar14;
  ERBFDistanceMethod EVar15;
  TEnumAsByte<EBoneAxis> TVar16;
  ERBFNormalizeMethod EVar17;
  FRBFSolverData *pFVar18;
  FRBFParams *pFVar19;
  bool bVar20;
  int iVar21;
  TSharedPtr<FRBFSolverData_const_,1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  TArray<FRBFEntry,TSizedDefaultAllocator<32>_> *pTVar30;
  FScriptContainerElement *pFVar31;
  FRBFSolverData *pFVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_1b8 [32];
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [16];
  FRBFSolverData *local_158;
  TSharedPtr<FRBFSolverData_const_,1> *local_150;
  TVector<double>_u_0 local_148;
  FRBFParams *local_130;
  int iStack_128;
  undefined4 uStack_124;
  code *local_118;
  longlong local_108 [3];
  longlong *local_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  double dStack_d8;
  double dStack_d0;
  FRBFParams *local_c8;
  undefined1 local_b8 [64];
  longlong local_78 [3];
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_150 = __return_storage_ptr__;
  local_130 = param_1;
  local_158 = ::operator_new(0xb0);
  iVar29 = 0;
  if (local_158 == (FRBFSolverData *)0x0) {
    local_158 = (FRBFSolverData *)0x0;
  }
  else {
    (local_158->Params).TargetDimensions = 3;
    (local_158->Params).SolverType = Additive;
    (local_158->Params).Radius = 1.0;
    (local_158->Params).bAutomaticRadius = false;
    (local_158->Params).Function = Gaussian;
    (local_158->Params).DistanceMethod = Euclidean;
    (local_158->Params).TwistAxis = '\0';
    (local_158->Params).WeightThreshold = 0.0001;
    (local_158->Params).NormalizeMethod = OnlyNormalizeAboveOne;
    (local_158->Params).MedianReference.field0_0x0._s_0.X = 0.0;
    (local_158->Params).MedianReference.field0_0x0._s_0.Y = 0.0;
    (local_158->Params).MedianReference.field0_0x0._s_0.Z = 0.0;
    (local_158->Params).MedianMin = 45.0;
    (local_158->Params).MedianMax = 60.0;
    (local_158->EntryTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_158->EntryTargets).ArrayNum = 0;
    (local_158->EntryTargets).ArrayMax = 0;
    (local_158->Rbf)._padding_ = 0;
    (local_158->Rbf)._padding_ = 0;
    *(undefined1 *)&(local_158->Rbf)._padding_ = 0;
    (local_158->Rbf).Nodes.DataPtr = (FRBFEntry *)0x0;
    (local_158->Rbf).Nodes.ArrayNum = 0;
    *(undefined8 *)&(local_158->Rbf).WeightFunc = 0;
    *(undefined8 *)&(local_158->Rbf).WeightFunc.field_0x28 = 0;
  }
  pFVar18 = local_158;
  EVar12 = param_1->SolverType;
  uVar13 = *(undefined3 *)&param_1->field_0x5;
  fVar34 = param_1->Radius;
  bVar20 = param_1->bAutomaticRadius;
  EVar14 = param_1->Function;
  EVar15 = param_1->DistanceMethod;
  TVar16.Value = (param_1->TwistAxis).Value;
  (local_158->Params).TargetDimensions = param_1->TargetDimensions;
  (local_158->Params).SolverType = EVar12;
  *(undefined3 *)&(local_158->Params).field_0x5 = uVar13;
  (local_158->Params).Radius = fVar34;
  (local_158->Params).bAutomaticRadius = bVar20;
  (local_158->Params).Function = EVar14;
  (local_158->Params).DistanceMethod = EVar15;
  (local_158->Params).TwistAxis = (TEnumAsByte<EBoneAxis>)TVar16.Value;
  EVar17 = param_1->NormalizeMethod;
  uVar13 = *(undefined3 *)&param_1->field_0x15;
  dVar11 = (param_1->MedianReference).field0_0x0._s_0.X;
  (local_158->Params).WeightThreshold = param_1->WeightThreshold;
  (local_158->Params).NormalizeMethod = EVar17;
  *(undefined3 *)&(local_158->Params).field_0x15 = uVar13;
  (local_158->Params).MedianReference.field0_0x0._s_0.X = dVar11;
  dVar11 = (param_1->MedianReference).field0_0x0._s_0.Z;
  (local_158->Params).MedianReference.field0_0x0._s_0.Y =
       (param_1->MedianReference).field0_0x0._s_0.Y;
  (local_158->Params).MedianReference.field0_0x0._s_0.Z = dVar11;
  fVar34 = param_1->MedianMax;
  (local_158->Params).MedianMin = param_1->MedianMin;
  (local_158->Params).MedianMax = fVar34;
  pFVar32 = local_158;
  if (param_1->SolverType == Interpolative) {
    iVar3 = param_2->ArrayNum;
    pFVar27 = (param_2->AllocatorInstance).Data;
    pTVar30 = &local_158->EntryTargets;
    pFVar31 = pFVar27 + (longlong)iVar3 * 0xa0;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        local_168[0] = 0;
        `TCheckedPointerIterator<FRBFTarget_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_168);
      }
      pFVar19 = local_130;
      pFVar32 = local_158;
      if (pFVar27 == pFVar31) break;
      pFVar28 = (pTVar30->AllocatorInstance).Data;
      if ((pFVar28 <= pFVar27) &&
         (lVar26 = (longlong)(pFVar18->EntryTargets).ArrayMax, pFVar27 < pFVar28 + lVar26 * 0x10)) {
        local_180 = (longlong)(pFVar18->EntryTargets).ArrayNum;
        local_178 = 0x10;
        local_198 = pFVar27;
        local_190 = pFVar28;
        local_188 = lVar26;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar20) {
          pcVar4 = (code *)swi(3);
          pTVar22 = (TSharedPtr<FRBFSolverData_const_,1> *)(*pcVar4)();
          return pTVar22;
        }
      }
      iVar21 = (pFVar18->EntryTargets).ArrayNum;
      if (iVar21 == (pFVar18->EntryTargets).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar30->AllocatorInstance,&(pFVar18->EntryTargets).ArrayMax);
        (pFVar18->EntryTargets).ArrayNum = iVar21;
      }
      pFVar28 = (pTVar30->AllocatorInstance).Data;
      (pFVar18->EntryTargets).ArrayNum = iVar21 + 1;
      FRBFEntry::FRBFEntry((FRBFEntry *)(pFVar28 + (longlong)iVar21 * 0x10),(FRBFEntry *)pFVar27);
      pFVar27 = pFVar27 + 0xa0;
    }
    iVar3 = (pFVar18->EntryTargets).ArrayNum;
    pFVar27 = (pTVar30->AllocatorInstance).Data;
    if ((iVar3 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TSharedPtr<FRBFSolverData_const_,1> *)(*pcVar4)();
      return pTVar22;
    }
    uVar2 = (pFVar19->TwistAxis).Value;
    local_148._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_148._s_0.Y = _UNK_150689518;
    if (((uVar2 == '\0') ||
        (local_148._s_0.X = ___xmm_3ff00000000000000000000000000000,
        local_148._s_0.Y = _UNK_15061cbc8, uVar2 == '\x01')) ||
       (local_148._s_0.X = ___xmm_00000000000000003ff0000000000000,
       local_148._s_0.Y = _UNK_150689518, uVar2 != '\x02')) {
      local_148._s_0.Z = 0.0;
    }
    else {
      local_148._s_0.X = 0.0;
      local_148._s_0.Y = 0.0;
      local_148._s_0.Z = __real_3ff0000000000000;
    }
    if (pFVar19->bAutomaticRadius == false) {
      fVar34 = pFVar19->Radius * __real_3c8efa35;
    }
    else {
      fVar34 = 0.0;
      for (pFVar31 = pFVar27; pFVar28 = pFVar27, pFVar31 != pFVar27 + (longlong)iVar3 * 0x10;
          pFVar31 = pFVar31 + 0x10) {
        do {
          if (pFVar31 != pFVar28) {
            fVar33 = GetDistanceBetweenEntries
                               ((FRBFEntry *)pFVar31,(FRBFEntry *)pFVar28,pFVar19->DistanceMethod,
                                (TVector<double> *)&local_148._s_0);
            fVar34 = fVar34 + fVar33;
            iVar29 = iVar29 + 1;
          }
          pFVar28 = pFVar28 + 0x10;
        } while (pFVar28 != pFVar27 + (longlong)iVar3 * 0x10);
        pFVar32 = local_158;
      }
      pTVar30 = &pFVar32->EntryTargets;
      fVar34 = fVar34 / (float)iVar29;
    }
    uVar9 = local_148._s_0.Z;
    local_c8 = pFVar19;
    local_118 = (code *)0x0;
    local_e0 = local_148._s_0.X;
    dStack_d8 = local_148._s_0.Y;
    local_f0 = FMemory::Malloc(0x30,8);
    uVar5 = (undefined4)local_e0;
    uVar6 = local_e0._4_4_;
    *local_f0 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`InterpolativeWeightFunction'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    fStack_e8 = fVar34;
    *(float *)(local_f0 + 1) = fVar34;
    *(undefined4 *)((longlong)local_f0 + 0xc) = uStack_e4;
    *(undefined4 *)(local_f0 + 2) = uVar5;
    *(undefined4 *)((longlong)local_f0 + 0x14) = uVar6;
    local_f0[3] = (longlong)dStack_d8;
    local_f0[4] = uVar9;
    local_f0[5] = (longlong)local_c8;
    dStack_d0 = (double)uVar9;
    if ((float *)(local_f0 + 1) != (float *)0x0) {
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`InterpolativeWeightFunction'::__l2::<lambda_1>,float,FRBFEntry_const_&,FRBFEntry_const_&>
                  ::Call;
    }
    local_130 = (FRBFParams *)(pTVar30->AllocatorInstance).Data;
    iVar29 = pTVar30->ArrayNum;
    if ((iVar29 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TSharedPtr<FRBFSolverData_const_,1> *)(*pcVar4)();
      return pTVar22;
    }
    local_b8._0_8_ = (void *)0x0;
    local_b8._8_8_ = 0;
    local_b8[0x10] = 0;
    local_b8._48_8_ = local_118;
    plStack_60 = (longlong *)0x0;
    local_b8._36_4_ = uStack_124;
    local_b8._32_4_ = iVar29;
    local_b8._24_8_ = local_130;
    iStack_128 = iVar29;
    if (local_118 != (code *)0x0) {
      plVar24 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar24 = local_f0;
      }
      (**(code **)*plVar24)(plVar24,local_b8 + 0x40);
    }
    TRBFInterpolator<FRBFEntry>::MakeUpperKernel((TRBFInterpolator<FRBFEntry> *)local_b8);
    if (local_118 != (code *)0x0) {
      plVar24 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar24 = local_f0;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    pTVar1 = &pFVar32->Rbf;
    if (pTVar1 != (TRBFInterpolator<FRBFEntry> *)local_b8) {
      if ((void *)pTVar1->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pTVar1->_padding_);
      }
      pTVar1->_padding_ = local_b8._0_8_;
      *(undefined4 *)&(pFVar32->Rbf)._padding_ = local_b8._8_4_;
      *(undefined4 *)((longlong)&(pFVar32->Rbf)._padding_ + 4) = local_b8._12_4_;
      local_b8._8_8_ = 0;
      local_b8._0_8_ = (void *)0x0;
    }
    (pFVar32->Rbf).Nodes.DataPtr = (FRBFEntry *)local_b8._24_8_;
    *(undefined8 *)&(pFVar32->Rbf).Nodes.ArrayNum = local_b8._32_8_;
    *(undefined1 *)&(pFVar32->Rbf)._padding_ = local_b8[0x10];
    lVar26 = *(longlong *)&(pFVar32->Rbf).WeightFunc;
    uVar10 = *(undefined8 *)&(pFVar32->Rbf).WeightFunc.field_0x8;
    uVar5 = *(undefined4 *)&(pFVar32->Rbf).WeightFunc.field_0x10;
    uVar6 = *(undefined4 *)&(pFVar32->Rbf).WeightFunc.field_0x14;
    uVar7 = *(undefined4 *)&(pFVar32->Rbf).WeightFunc.field_0x18;
    uVar8 = *(undefined4 *)&(pFVar32->Rbf).WeightFunc.field_0x1c;
    uVar9 = *(undefined8 *)&(pFVar32->Rbf).WeightFunc.field_0x20;
    plVar24 = *(longlong **)&(pFVar32->Rbf).WeightFunc.field_0x28;
    *(undefined8 *)&(pFVar32->Rbf).WeightFunc = local_b8._48_8_;
    *(undefined8 *)&(pFVar32->Rbf).WeightFunc.field_0x8 = local_b8._56_8_;
    *(ulonglong *)&(pFVar32->Rbf).WeightFunc.field_0x10 =
         CONCAT44(local_78[0]._4_4_,(undefined4)local_78[0]);
    *(ulonglong *)&(pFVar32->Rbf).WeightFunc.field_0x18 =
         CONCAT44(local_78[1]._4_4_,(undefined4)local_78[1]);
    *(longlong *)&(pFVar32->Rbf).WeightFunc.field_0x20 = local_78[2];
    *(longlong **)&(pFVar32->Rbf).WeightFunc.field_0x28 = plStack_60;
    local_b8._48_8_ = lVar26;
    local_b8._56_8_ = uVar10;
    local_78[0]._0_4_ = uVar5;
    local_78[0]._4_4_ = uVar6;
    local_78[1]._0_4_ = uVar7;
    local_78[1]._4_4_ = uVar8;
    local_78[2] = uVar9;
    plStack_60 = plVar24;
    if (lVar26 != 0) {
      plVar25 = (longlong *)(local_b8 + 0x40);
      if (plVar24 != (longlong *)0x0) {
        plVar25 = plVar24;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    __return_storage_ptr__ = local_150;
    if ((void *)local_b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
      __return_storage_ptr__ = local_150;
    }
  }
  __return_storage_ptr__->Object = pFVar32;
  pTVar23 = ::operator_new(0x18);
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar23->SharedReferenceCount = (atomic<int>)0x1;
    pTVar23->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFRBFSolverData__U__DefaultDeleter_UFRBFSolverData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar23->WeakReferenceCount = (atomic<int>)0x1;
    pTVar23[1]._padding_ = (longlong)pFVar32;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar23;
  }
  return __return_storage_ptr__;
}

// IsSolverDataValid @ 14645b000

bool __cdecl
FRBFSolver::IsSolverDataValid
          (FRBFSolverData *param_1,FRBFParams *param_2,
          TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar10 = param_3->ArrayNum;
  if ((param_1->EntryTargets).ArrayNum == iVar10) {
    uVar11 = 0;
    if (0 < iVar10) {
      lVar13 = 0;
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar10) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar11 < (param_1->EntryTargets).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_1->EntryTargets).AllocatorInstance.Data;
        if (*(int *)(pFVar2 + lVar12 + 8) != *(int *)(pFVar3 + lVar13 + 8)) {
          return false;
        }
        uVar8 = 0;
        if (0 < *(int *)(pFVar2 + lVar12 + 8)) {
          lVar9 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar8 < *(int *)(pFVar3 + lVar13 + 8)) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            fVar1 = *(float *)(lVar9 + *(longlong *)(pFVar3 + lVar13));
            uVar7 = 0;
            if ((int)uVar8 < *(int *)(pFVar2 + lVar12 + 8)) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            bVar5 = FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>
                              (*(float *)(lVar9 + *(longlong *)(pFVar2 + lVar12)),fVar1,4);
            if (!bVar5) {
              return false;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 4;
          } while ((int)uVar8 < *(int *)(pFVar2 + lVar12 + 8));
        }
        uVar11 = uVar11 + 1;
        iVar10 = param_3->ArrayNum;
        lVar12 = lVar12 + 0xa0;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar11 < iVar10);
    }
    if (((((param_1->Params).SolverType == param_2->SolverType) &&
         (bVar5 = FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>
                            ((param_1->Params).Radius,param_2->Radius,4), bVar5)) &&
        ((param_1->Params).Function == param_2->Function)) &&
       (((param_1->Params).DistanceMethod == param_2->DistanceMethod &&
        ((param_1->Params).TwistAxis.Value == (param_2->TwistAxis).Value)))) {
      return true;
    }
  }
  return false;
}

// Solve @ 14646c3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRBFSolver::Solve(FRBFSolverData *param_1,FRBFParams *param_2,
                 TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_3,FRBFEntry *param_4,
                 TArray<FRBFOutputWeight,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  ERBFSolverType EVar2;
  uchar uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ForElementType<float> FVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_98;
  float fStack_94;
  TArray<float,TMemStackAllocator<0>_> local_90;
  FRBFEntry local_80;
  TVector<double>_u_0 local_70 [3];
  
  if (param_2->TargetDimensions == (param_4->Values).ArrayNum) {
    iVar9 = param_3->ArrayNum;
    uVar12 = 0;
    local_90.AllocatorInstance.Data = (float *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    iVar7 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                      (4,4,iVar9,&local_90.AllocatorInstance,&local_90.ArrayNum,&local_90.ArrayMax);
    memset(local_90.AllocatorInstance.Data + iVar7,0,(longlong)iVar9 << 2);
    EVar2 = (param_1->Params).SolverType;
    if ((EVar2 == Additive) || (EVar2 != Interpolative)) {
      SolveAdditive(param_2,param_3,param_4,local_90.AllocatorInstance.Data);
    }
    else {
      TRBFInterpolator<FRBFEntry>::Interpolate<FRBFEntry,TMemStackAllocator<0>_>
                (&param_1->Rbf,&local_90,param_4,true,false);
      iVar9 = param_3->ArrayNum;
      uVar13 = uVar12;
      uVar14 = uVar12;
      if (0 < iVar9) {
        do {
          uVar11 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar11 < iVar9) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar16 = *(float *)((param_3->AllocatorInstance).Data + uVar14 + 0x10);
          uVar8 = 0;
          if ((int)uVar11 < local_90.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          *(uVar13 + local_90.AllocatorInstance.Data) =
               fVar16 * *(uVar13 + local_90.AllocatorInstance.Data);
          iVar9 = param_3->ArrayNum;
          uVar13 = uVar13 + 4;
          uVar14 = uVar14 + 0xa0;
        } while ((int)(uVar11 + 1) < iVar9);
      }
    }
    fVar16 = __real_3f800000;
    uVar12 = 0;
    fVar18 = 0.0;
    for (FVar10.Data = local_90.AllocatorInstance.Data;
        FVar10.Data != local_90.AllocatorInstance.Data + local_90.ArrayNum;
        FVar10.Data = FVar10.Data + 1) {
      fVar18 = fVar18 + *FVar10.Data;
    }
    if (__real_38d1b717 < fVar18) {
      if ((__real_3f800000 < fVar18) || (param_2->NormalizeMethod == AlwaysNormalize)) {
        fVar17 = __real_3f800000 / fVar18;
      }
      else {
        fVar17 = fVar16;
        if ((param_2->NormalizeMethod == NormalizeWithinMedian) &&
           (param_2->MedianMin < param_2->MedianMax || param_2->MedianMin == param_2->MedianMax)) {
          local_80.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80.Values.ArrayNum = 0;
          local_80.Values.ArrayMax = 0;
          if (0 < (param_4->Values).ArrayNum) {
            do {
              FRBFEntry::AddFromVector(&local_80,&param_2->MedianReference);
            } while (local_80.Values.ArrayNum < (param_4->Values).ArrayNum);
          }
          uVar3 = (param_2->TwistAxis).Value;
          local_70[0]._0_8_ = ___xmm_00000000000000003ff0000000000000;
          local_70[0]._8_8_ = _UNK_150689518;
          if (((uVar3 == '\0') ||
              (local_70[0]._0_8_ = ___xmm_3ff00000000000000000000000000000,
              local_70[0]._8_8_ = _UNK_15061cbc8, uVar3 == '\x01')) ||
             (local_70[0]._0_8_ = ___xmm_00000000000000003ff0000000000000,
             local_70[0]._8_8_ = _UNK_150689518, uVar3 != '\x02')) {
            local_70[0]._16_8_ = 0.0;
          }
          else {
            local_70[0]._s_0.X = 0.0;
            local_70[0]._s_0.Y = 0.0;
            local_70[0]._16_8_ = __real_3ff0000000000000;
          }
          fVar15 = GetDistanceBetweenEntries
                             (param_4,&local_80,param_2->DistanceMethod,
                              (TVector<double> *)&local_70[0]._s_0);
          fVar15 = fVar15 * __real_42652ee0;
          if (fVar15 <= param_2->MedianMax) {
            fVar1 = param_2->MedianMin;
            fVar17 = fVar16 / fVar18;
            if (fVar1 < fVar15) {
              fVar18 = (fVar15 - fVar1) / (param_2->MedianMax - fVar1);
              if (fVar16 <= fVar18) {
                fVar18 = fVar16;
              }
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              fVar17 = fVar18 * (fVar16 - fVar17) + fVar17;
              if (local_80.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Values.AllocatorInstance.Data);
              }
            }
            else if (local_80.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Values.AllocatorInstance.Data);
            }
          }
          else if (local_80.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Values.AllocatorInstance.Data);
          }
        }
      }
      uVar13 = uVar12;
      if (0 < param_3->ArrayNum) {
        do {
          uVar11 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar11 < local_90.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar16 = fVar17 * *(uVar13 + local_90.AllocatorInstance.Data);
          if (param_2->WeightThreshold <= fVar16 && fVar16 != param_2->WeightThreshold) {
            pFVar4 = (param_5->AllocatorInstance).Data;
            local_98 = uVar11;
            fStack_94 = fVar16;
            if (((pFVar4 <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)param_5->ArrayMax * 8))
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
            iVar9 = param_5->ArrayNum;
            if (iVar9 == param_5->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&param_5->AllocatorInstance,&param_5->ArrayMax);
            }
            param_5->ArrayNum = iVar9 + 1;
            *(ulonglong *)((param_5->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                 CONCAT44(fStack_94,local_98);
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar13 = uVar13 + 4;
        } while ((int)(uVar11 + 1) < param_3->ArrayNum);
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4600954007551213973>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\RBF\\RBFSolver.cpp"
                       ,0x195,"Params.TargetDimensions == Input.GetDimensions()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ValidateTargets @ 146479d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRBFSolver::ValidateTargets
          (FRBFParams *param_1,TArray<FRBFTarget,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  uchar uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  int iVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_208 [32];
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  FIdentityFunctor aFStack_1b5 [5];
  ForAnyElementType FStack_1b0;
  undefined8 uStack_1a8;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> TStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int iStack_168;
  undefined4 uStack_164;
  TVector<double>_u_0 TStack_160;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  longlong *plStack_138;
  undefined1 auStack_130 [20];
  uint uStack_11c;
  FRBFParams *pFStack_118;
  undefined8 uStack_110;
  TArrayView<FRBFEntry,int> TStack_108;
  code *apcStack_f8 [5];
  undefined8 *puStack_d0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [32];
  uint *puStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  ForElementType<FSetElementId> FStack_68;
  int iStack_60;
  ulonglong uStack_58;
  
  if ((param_1->SolverType == Additive) || (param_1->SolverType != Interpolative)) {
    return true;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar18 = param_2->ArrayNum;
  uStack_1a8._0_4_ = 0;
  pFVar20 = (param_2->AllocatorInstance).Data;
  FStack_1b0.Data = (FScriptContainerElement *)0x0;
  uStack_1a8 = 0;
  pFVar16 = pFVar20 + (longlong)iVar18 * 0xa0;
  while( true ) {
    iVar7 = (int)uStack_1a8;
    if (param_2->ArrayNum != iVar18) {
      uStack_1b8 = 0;
      `TCheckedPointerIterator<FRBFTarget_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&uStack_1b8);
      iVar7 = (int)uStack_1a8;
    }
    if (pFVar20 == pFVar16) break;
    if ((FStack_1b0.Data <= pFVar20) &&
       (pFVar20 < FStack_1b0.Data + (longlong)uStack_1a8._4_4_ * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar7 = (int)uStack_1a8;
    }
    if (iVar7 == uStack_1a8._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&FStack_1b0,(int *)((longlong)&uStack_1a8 + 4));
    }
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,iVar7 + 1);
    FRBFEntry::FRBFEntry
              ((FRBFEntry *)(FStack_1b0.Data + (longlong)iVar7 * 0x10),(FRBFEntry *)pFVar20);
    pFVar20 = pFVar20 + 0xa0;
  }
  uStack_7c = 0x80;
  TStack_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1a0.ArrayNum = 0;
  TStack_1a0.ArrayMax = 0;
  auStack_a8._0_8_ = 0;
  auStack_a8._8_8_ = 0;
  puStack_88 = (uint *)0x0;
  iVar18 = 0;
  uStack_80 = 0;
  uStack_78 = 0xffffffff;
  iStack_74 = 0;
  FStack_68 = (ForElementType<FSetElementId>)0x0;
  iStack_60 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    iVar7 = (int)uStack_1a8;
  }
  FVar14.Data = FStack_1b0.Data;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar1 = (param_1->TwistAxis).Value;
  TStack_160._s_0.X = ___xmm_00000000000000003ff0000000000000;
  TStack_160._s_0.Y = (double)_UNK_150689518;
  if (((uVar1 == '\0') ||
      (TStack_160._s_0.X = ___xmm_3ff00000000000000000000000000000,
      TStack_160._s_0.Y = (double)_UNK_15061cbc8, uVar1 == '\x01')) ||
     (TStack_160._s_0.X = ___xmm_00000000000000003ff0000000000000,
     TStack_160._s_0.Y = (double)_UNK_150689518, uVar1 != '\x02')) {
    TStack_160._s_0.Z = 0.0;
  }
  else {
    TStack_160._s_0.X = 0.0;
    TStack_160._s_0.Y = (double)(undefined1 *)0x0;
    TStack_160._s_0.Z = __real_3ff0000000000000;
  }
  if (param_1->bAutomaticRadius == false) {
    fVar25 = param_1->Radius * __real_3c8efa35;
  }
  else {
    fVar25 = 0.0;
    for (FVar17.Data = FVar14.Data; FVar13.Data = FVar14.Data,
        FVar17.Data != FVar14.Data + (longlong)iVar7 * 0x10; FVar17.Data = FVar17.Data + 0x10) {
      do {
        if (FVar17.Data != FVar13.Data) {
          fVar24 = GetDistanceBetweenEntries
                             ((FRBFEntry *)FVar17.Data,(FRBFEntry *)FVar13.Data,
                              param_1->DistanceMethod,(TVector<double> *)&TStack_160._s_0);
          fVar25 = fVar25 + fVar24;
          iVar18 = iVar18 + 1;
        }
        FVar13.Data = FVar13.Data + 0x10;
      } while (FVar13.Data != FVar14.Data + (longlong)iVar7 * 0x10);
    }
    fVar25 = fVar25 / (float)iVar18;
  }
  uVar3 = TStack_160._s_0.Z;
  apcStack_f8[0] = (code *)0x0;
  uStack_188 = TStack_160._s_0.X;
  pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)TStack_160._s_0.Y;
  uStack_170 = param_1;
  puStack_d0 = FMemory::Malloc(0x30,8);
  *puStack_d0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`InterpolativeWeightFunction'::`2'::<lambda_1>,0,1>::
                 _vftable_;
  uStack_190 = (longlong *)CONCAT44(uStack_190._4_4_,fVar25);
  *(float *)(puStack_d0 + 1) = fVar25;
  *(undefined4 *)((longlong)puStack_d0 + 0xc) = uStack_190._4_4_;
  *(undefined4 *)(puStack_d0 + 2) = (undefined4)uStack_188;
  *(undefined4 *)((longlong)puStack_d0 + 0x14) = uStack_188._4_4_;
  puStack_d0[3] = pTStack_180;
  puStack_d0[4] = uVar3;
  puStack_d0[5] = uStack_170;
  uStack_178 = (double)uVar3;
  if ((float *)(puStack_d0 + 1) != (float *)0x0) {
    apcStack_f8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`InterpolativeWeightFunction'::__l2::<lambda_1>,float,FRBFEntry_const_&,FRBFEntry_const_&>
         ::Call;
  }
  iVar18 = (int)uStack_1a8;
  TStack_108.DataPtr = (FRBFEntry *)FStack_1b0.Data;
  if (((int)uStack_1a8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  TStack_108.ArrayNum = iVar18;
  bVar5 = TRBFInterpolator<FRBFEntry>::GetIdenticalNodePairs
                    (&TStack_108,
                     (TFunction<float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)> *)apcStack_f8,
                     &TStack_1a0);
  if (bVar5) {
    iVar18 = TStack_1a0.ArrayNum;
    uVar11 = (ulonglong)TStack_1a0.ArrayNum;
    pFVar20 = TStack_1a0.AllocatorInstance.Data + uVar11 * 8;
    FVar14.Data = TStack_1a0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar18) {
        uStack_1b7 = 0;
        `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_1b7);
      }
      uVar19 = uStack_80;
      if (FVar14.Data == pFVar20) break;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_a8,&iStack_148,
                 (bool *)(FVar14.Data + 4));
      uVar11 = TStack_1a0._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
    }
    uVar21 = 0;
    uVar8 = 1;
    uVar23 = 0;
    uVar9 = uVar21;
    if (uStack_80 != 0) {
      puVar22 = (uint *)(auStack_a8 + 0x10);
      if (puStack_88 != (uint *)0x0) {
        puVar22 = puStack_88;
      }
      uVar9 = *puVar22;
      uVar23 = 0;
      uVar21 = 0;
      while (uVar9 == 0) {
        lVar12 = (longlong)(int)uVar21;
        uVar23 = uVar23 + 0x20;
        uVar21 = uVar21 + 1;
        uVar9 = uStack_80;
        if ((int)((uStack_80 - 1) + ((int)(uStack_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_146479a40;
        uVar9 = puVar22[lVar12 + 1];
      }
      uVar8 = -uVar9 & uVar9;
      uVar11 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_144 = (int)lVar12;
      uVar9 = iStack_144 + -1 + uVar23;
      if ((int)uStack_80 < (int)uVar9) {
        uVar9 = uStack_80;
      }
    }
LAB_146479a40:
    uStack_190 = (longlong *)auStack_a8;
    pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_a8 + 0x10);
    iStack_168 = auStack_a8._8_4_ - iStack_74;
    uVar15 = uStack_80 & 0xffffffe0;
    uStack_178 = (double)CONCAT44(uVar9,0xffffffff);
    uStack_188 = CONCAT44(uVar8,uVar21);
    uStack_170 = (FRBFParams *)CONCAT44(uStack_ac,uVar23);
    auStack_130._0_8_ = uStack_188;
    iVar18 = (int)uStack_80 >> 5;
    uStack_110 = CONCAT44(uStack_164,iStack_168);
    bVar10 = (byte)uStack_80;
    stack0xfffffffffffffee0 = uStack_178;
    pFStack_118 = uStack_170;
    plStack_138 = uStack_190;
    auStack_130._8_8_ = pTStack_180;
    if (((int)uStack_80 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (uVar19 != uStack_80) {
      puVar22 = (uint *)(auStack_a8 + 0x10);
      if (puStack_88 != (uint *)0x0) {
        puVar22 = puStack_88;
      }
      uVar19 = -1 << (bVar10 & 0x1f) & puVar22[iVar18];
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        uVar19 = uStack_80;
        if ((int)((uStack_80 - 1) + ((int)(uStack_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_146479b50;
        uVar19 = puVar22[lVar12 + 1];
      }
      uVar11 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_140 = (int)lVar12;
      uVar19 = iStack_140 + -1 + uVar15;
      if ((int)uStack_80 < (int)uVar19) {
        uVar19 = uStack_80;
      }
    }
LAB_146479b50:
    while( true ) {
      plVar4 = plStack_138;
      if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
        uStack_1b6 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_1b6);
      }
      if (((uStack_11c == uVar19) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_130._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)(auStack_a8 + 0x10))) &&
         (plVar4 == (longlong *)auStack_a8)) break;
      pFVar20 = (FScriptContainerElement *)(*plVar4 + (longlong)(int)uStack_11c * 0xc);
      pFVar16 = (param_3->AllocatorInstance).Data;
      if (((pFVar16 <= pFVar20) && (pFVar20 < pFVar16 + (longlong)param_3->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar18 = param_3->ArrayNum;
      if (iVar18 == param_3->ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar18 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar18 * 4) =
           *(undefined4 *)pFVar20;
      stack0xfffffffffffffee0 = (double)CONCAT44(uStack_11c,auStack_130._16_4_ & ~auStack_130._4_4_)
      ;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)(param_3->AllocatorInstance).Data,param_3->ArrayNum,aFStack_1b5[0],
               (TLess<void> *)aFStack_1b5);
  }
  iVar18 = param_3->ArrayNum;
  iStack_60 = 0;
  if (FStack_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_68);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_a8);
  if (TStack_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_1a0.AllocatorInstance.Data);
  }
  DestructItems<FRBFEntry,int>((FRBFEntry *)FStack_1b0.Data,(int)uStack_1a8);
  if (FStack_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b0.Data);
  }
  return iVar18 == 0;
}

