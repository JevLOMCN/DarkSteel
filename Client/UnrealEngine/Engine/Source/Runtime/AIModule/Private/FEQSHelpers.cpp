// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// FindNavMeshForQuery @ 146f49b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ARecastNavMesh * __cdecl FEQSHelpers::FindNavMeshForQuery(FEnvQueryInstance *param_1)

{
  int iVar1;
  ARecastNavMesh *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (ARecastNavMesh *)FindNavigationDataForQuery(param_1);
  if (pAVar2 != (ARecastNavMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (ARecastNavMesh *)0x0;
}

// FindNavigationDataForQuery @ 146f49c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ANavigationData * __cdecl FEQSHelpers::FindNavigationDataForQuery(FEnvQueryInstance *param_1)

{
  int iVar1;
  TObjectPtr<UWorld>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *this;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ANavigationData *pAVar9;
  longlong *plVar10;
  undefined1 local_28 [32];
  
  TVar2 = (param_1->World).field0_0x0;
  if (TVar2.DebugPtr == (UWorld *)0x0) {
    return (ANavigationData *)0x0;
  }
  plVar10 = *(longlong **)((longlong)TVar2 + 0x1a0);
  plVar6 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    pUVar5 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(plVar10[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar10[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_146f49c63;
  }
  plVar10 = plVar6;
LAB_146f49c63:
  if (plVar10 == (longlong *)0x0) {
    return (ANavigationData *)0x0;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (bVar4) {
    this = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
    if (this != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar5);
    }
    if ((plVar6 != (longlong *)0x0) &&
       (((lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6),
         0.0 < *(float *)(lVar7 + 4) || *(float *)(lVar7 + 4) == 0.0 &&
         (0.0 < *(float *)(lVar7 + 8) || *(float *)(lVar7 + 8) == 0.0)) ||
        (*(longlong *)(lVar7 + 0x18) != 0)))) {
      pcVar3 = *(code **)(*plVar10 + 0x350);
      uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,local_28);
      pAVar9 = (ANavigationData *)
               (*pcVar3)(plVar10,lVar7,uVar8,&UE::Math::TVector<double>::ZeroVector);
      return pAVar9;
    }
  }
  return (ANavigationData *)plVar10[5];
}

// RunNavProjection @ 146f689d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunNavProjection
          (ANavigationData *param_1,FEnvTraceData *param_2,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_3,ETraceMode param_4)

{
  RunNavProjection(param_1,(UObject *)param_1,param_2,param_3,param_4);
  return;
}

// RunNavProjection @ 146f68a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunNavProjection
          (ANavigationData *param_1,UObject *param_2,FEnvTraceData *param_3,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_4,ETraceMode param_5)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStackY_298 [32];
  ForAnyElementType local_248;
  int local_240;
  int iStack_23c;
  undefined1 local_238;
  undefined1 local_237 [7];
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> *local_230;
  UClass *local_228;
  FScriptContainerElement *local_220;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined4 uStack_1bf;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined4 uStack_187;
  undefined2 uStack_183;
  undefined1 uStack_181;
  FNavigationQueryFilter *local_178;
  TReferenceControllerBase<1> *pTStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  uint local_78;
  undefined4 uStack_74;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_228 = (param_3->NavigationFilter).Class.field0_0x0.DebugPtr;
  local_230 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_228 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  UNavigationQueryFilter::GetQueryFilter
            (&local_218,param_1,param_2,(TSubclassOf<UNavigationQueryFilter>)&local_228);
  uVar14 = param_4->ArrayNum;
  piVar1 = &param_4->ArrayNum;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  iStack_23c = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,uVar14,&local_248,0,&iStack_23c);
  }
  fVar2 = __real_3f000000;
  iVar11 = *piVar1;
  pFVar13 = (param_4->AllocatorInstance).Data;
  pFVar15 = pFVar13 + (longlong)iVar11 * 0x20;
  if (param_3->ProjectDown == param_3->ProjectUp) {
    while( true ) {
      if (*piVar1 != iVar11) {
        local_238 = 0;
        `TCheckedPointerIterator<FNavLocation,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_238);
      }
      if (pFVar13 == pFVar15) break;
      local_e8 = *(undefined8 *)pFVar13;
      uStack_e0 = *(undefined8 *)(pFVar13 + 8);
      local_d8 = *(undefined8 *)(pFVar13 + 0x10);
      uStack_1bf = 0;
      uStack_1bb = 0;
      uStack_1b9 = 0;
      dStack_80 = 0.0;
      local_78 = local_78 & 0xfffffffc | 4;
      local_1c0 = 0;
      local_a0 = 0;
      local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      if (((local_248.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_248.Data + (longlong)iStack_23c * 0x78)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_240 == iStack_23c) {
        local_240 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&local_248,&iStack_23c);
      }
      lVar12 = (longlong)local_240;
      local_240 = local_240 + 1;
      lVar12 = lVar12 * 0x78;
      pFVar13 = pFVar13 + 0x20;
      *(undefined8 *)(local_248.Data + lVar12) = local_e8;
      *(undefined8 *)(local_248.Data + lVar12 + 8) = uStack_e0;
      *(undefined8 *)(local_248.Data + lVar12 + 0x10) = local_d8;
      *(undefined8 *)(local_248.Data + lVar12 + 0x10 + 8) = uStack_d0;
      *(undefined8 *)(local_248.Data + lVar12 + 0x20) = uStack_c8;
      *(undefined8 *)(local_248.Data + lVar12 + 0x20 + 8) = uStack_c0;
      *(undefined8 *)(local_248.Data + lVar12 + 0x30) = uStack_b8;
      *(undefined8 *)(local_248.Data + lVar12 + 0x30 + 8) = local_b0;
      *(undefined8 *)(local_248.Data + lVar12 + 0x40) = uStack_a8;
      *(undefined8 *)(local_248.Data + lVar12 + 0x40 + 8) = local_a0;
      *(double *)(local_248.Data + lVar12 + 0x50) = local_98;
      *(double *)(local_248.Data + lVar12 + 0x50 + 8) = dStack_90;
      *(double *)(local_248.Data + lVar12 + 0x60) = local_88;
      *(double *)(local_248.Data + lVar12 + 0x60 + 8) = dStack_80;
      *(ulonglong *)(local_248.Data + lVar12 + 0x70) = CONCAT44(uStack_74,local_78);
    }
  }
  else {
    fVar22 = (param_3->ProjectUp - param_3->ProjectDown) * __real_3f000000;
    while( true ) {
      if (*piVar1 != iVar11) {
        local_237[0] = 0;
        `TCheckedPointerIterator<FNavLocation,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_237);
      }
      if (pFVar13 == pFVar15) break;
      local_168 = *(undefined8 *)pFVar13;
      uStack_160 = *(undefined8 *)(pFVar13 + 8);
      uStack_187 = 0;
      uStack_183 = 0;
      uStack_181 = 0;
      dStack_100 = 0.0;
      local_158 = (double)fVar22 + *(double *)(pFVar13 + 0x10);
      local_188 = 0;
      local_f8 = local_f8 & 0xfffffffc | 4;
      local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_120 = 0;
      local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      dStack_150 = 0.0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      local_130 = 0;
      uStack_128 = 0;
      if (((local_248.Data <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < local_248.Data + (longlong)iStack_23c * 0x78)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_240 == iStack_23c) {
        local_240 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&local_248,&iStack_23c);
      }
      lVar12 = (longlong)local_240;
      local_240 = local_240 + 1;
      lVar12 = lVar12 * 0x78;
      pFVar13 = pFVar13 + 0x20;
      *(undefined8 *)(local_248.Data + lVar12) = local_168;
      *(undefined8 *)(local_248.Data + lVar12 + 8) = uStack_160;
      *(double *)(local_248.Data + lVar12 + 0x10) = local_158;
      *(double *)(local_248.Data + lVar12 + 0x10 + 8) = dStack_150;
      *(undefined8 *)(local_248.Data + lVar12 + 0x20) = uStack_148;
      *(undefined8 *)(local_248.Data + lVar12 + 0x20 + 8) = uStack_140;
      *(undefined8 *)(local_248.Data + lVar12 + 0x30) = uStack_138;
      *(undefined8 *)(local_248.Data + lVar12 + 0x30 + 8) = local_130;
      *(undefined8 *)(local_248.Data + lVar12 + 0x40) = uStack_128;
      *(undefined8 *)(local_248.Data + lVar12 + 0x40 + 8) = local_120;
      *(double *)(local_248.Data + lVar12 + 0x50) = local_118;
      *(double *)(local_248.Data + lVar12 + 0x50 + 8) = dStack_110;
      *(double *)(local_248.Data + lVar12 + 0x60) = local_108;
      *(double *)(local_248.Data + lVar12 + 0x60 + 8) = dStack_100;
      *(ulonglong *)(local_248.Data + lVar12 + 0x70) = CONCAT44(uStack_f4,local_f8);
    }
  }
  local_208 = (double)param_3->ExtentX;
  pcVar3 = *(code **)(param_1->_padding_ + 0x890);
  local_1f8 = (double)((param_3->ProjectDown + param_3->ProjectUp) * fVar2);
  local_178 = local_218.Object;
  pTStack_170 = local_218.SharedReferenceCount.ReferenceController;
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  dStack_200 = local_208;
  (*pcVar3)(param_1,&local_248,&local_208,&local_178);
  uVar14 = local_240 - 1;
  if (-1 < (int)uVar14) {
    lVar12 = (longlong)(int)uVar14 << 5;
    lVar21 = (longlong)(int)uVar14 * 0x78;
    do {
      uVar17 = ~uVar14 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar14 < local_240) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((byte)local_248.Data[lVar21 + 0x70] & 2) != 0) {
        uVar18 = 0;
        if ((int)uVar14 < local_240) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar4 = *(undefined8 *)(local_248.Data + lVar21 + 0x50);
        uVar5 = *(undefined8 *)(local_248.Data + lVar21 + 0x50 + 8);
        uVar6 = *(undefined8 *)(local_248.Data + lVar21 + 0x60);
        uVar7 = *(undefined8 *)(local_248.Data + lVar21 + 0x60 + 8);
        uVar18 = 0;
        if ((int)uVar14 < *piVar1) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (local_230->AllocatorInstance).Data;
        pFVar13 = pFVar15 + lVar12;
        *(undefined8 *)pFVar13 = uVar4;
        *(undefined8 *)(pFVar13 + 8) = uVar5;
        pFVar15 = pFVar15 + lVar12 + 0x10;
        *(undefined8 *)pFVar15 = uVar6;
        *(undefined8 *)(pFVar15 + 8) = uVar7;
        fVar2 = param_3->PostProjectionVerticalOffset;
        uVar18 = 0;
        if ((int)uVar14 < *piVar1) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (local_230->AllocatorInstance).Data;
        *(double *)(pFVar13 + lVar12 + 0x10) = (double)fVar2 + *(double *)(pFVar13 + lVar12 + 0x10);
      }
      lVar21 = lVar21 + -0x78;
      lVar12 = lVar12 + -0x20;
      uVar14 = uVar14 - 1;
      param_4 = local_230;
    } while (-1 < (int)uVar14);
  }
  if (param_5 == Discard) {
    pFVar13 = (param_4->AllocatorInstance).Data;
    pFVar20 = pFVar13 + (longlong)*piVar1 * 0x20;
    pFVar15 = pFVar13;
    local_220 = pFVar13;
    if (pFVar13 != pFVar20) {
      do {
        lVar12 = (longlong)pFVar15 - (longlong)pFVar13 >> 5;
        uVar14 = (uint)lVar12;
        if ((lVar12 != (int)uVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar18 = 0;
        if ((int)uVar14 < local_240) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar19 = pFVar15 + 0x20;
        if (((byte)local_248.Data[(longlong)(int)uVar14 * 0x78 + 0x70] & 2) == 0) {
          if (pFVar19 != pFVar20) {
            lVar12 = (longlong)pFVar19 - (longlong)pFVar13;
            do {
              uVar14 = (uint)(lVar12 >> 5);
              if ((lVar12 >> 5 != (longlong)(int)uVar14) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar18 = 0;
              if ((int)uVar14 < local_240) {
                uVar18 = ~uVar14 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (((byte)local_248.Data[(longlong)(int)uVar14 * 0x78 + 0x70] & 2) != 0) {
                uVar4 = *(undefined8 *)(pFVar19 + 8);
                *(undefined8 *)pFVar15 = *(undefined8 *)pFVar19;
                *(undefined8 *)(pFVar15 + 8) = uVar4;
                uVar4 = *(undefined8 *)(pFVar19 + 0x18);
                *(undefined8 *)(pFVar15 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
                *(undefined8 *)(pFVar15 + 0x18) = uVar4;
                pFVar15 = pFVar15 + 0x20;
              }
              pFVar19 = pFVar19 + 0x20;
              lVar12 = lVar12 + 0x20;
              pFVar13 = local_220;
            } while (pFVar19 != pFVar20);
          }
          break;
        }
        pFVar15 = pFVar19;
      } while (pFVar19 != pFVar20);
    }
    pTVar8 = local_230;
    iVar11 = *piVar1;
    uVar16 = (longlong)pFVar15 - (longlong)pFVar13 >> 5;
    uVar14 = (uint)uVar16;
    if (iVar11 < (int)uVar14) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,uVar14 - iVar11,&local_230->AllocatorInstance,piVar1,
                          &local_230->ArrayMax);
      DefaultConstructItems<FNavLocation,int>
                ((pTVar8->AllocatorInstance).Data + (longlong)iVar10 * 0x20,uVar14 - iVar11);
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar16 & 0xffffffff);
      }
      if ((int)uVar14 < iVar11) {
        uVar18 = iVar11 - uVar14;
        if (((int)(uVar14 | uVar18) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar18 != 0) {
          pFVar13 = (local_230->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x20;
          iVar11 = (*piVar1 - uVar14) - uVar18;
          if (iVar11 != 0) {
            memmove(pFVar13,pFVar13 + (longlong)(int)uVar18 * 0x20,(longlong)iVar11 << 5);
          }
          *piVar1 = *piVar1 - uVar18;
        }
      }
    }
  }
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  return;
}

// RunNavRaycasts @ 146f69390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunNavRaycasts
          (ANavigationData *param_1,FEnvTraceData *param_2,TVector<double> *param_3,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_4,ETraceMode param_5)

{
  RunNavRaycasts(param_1,(UObject *)param_1,param_2,param_3,param_4,param_5);
  return;
}

// RunNavRaycasts @ 146f693c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunNavRaycasts
          (ANavigationData *param_1,UObject *param_2,FEnvTraceData *param_3,TVector<double> *param_4
          ,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_5,ETraceMode param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  double *pdVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  UClass *local_res18;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined2 local_78;
  undefined6 uStack_76;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_68;
  FNavigationQueryFilter *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  local_res18 = (param_3->NavigationFilter).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  UNavigationQueryFilter::GetQueryFilter
            (&local_68,param_1,param_2,(TSubclassOf<UNavigationQueryFilter>)&local_res18);
  plVar7 = (longlong *)CONCAT71(param_5._1_7_,param_5._0_1_);
  uVar14 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  uVar12 = *(uint *)(plVar7 + 1);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar12,&local_d8,0,&iStack_cc);
  }
  lVar16 = plVar7[1];
  pdVar13 = (double *)*plVar7;
  pdVar15 = pdVar13 + (longlong)(int)lVar16 * 4;
  while( true ) {
    if ((int)plVar7[1] != (int)lVar16) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FNavLocation,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pdVar13 == pdVar15) break;
    local_c8 = (param_4->field0_0x0)._s_0.X;
    dStack_c0 = (param_4->field0_0x0)._s_0.Y;
    local_b8 = (param_4->field0_0x0)._s_0.Z;
    dStack_a0 = pdVar13[2];
    dStack_80 = 0.0;
    local_78 = 0;
    dStack_b0 = *pdVar13;
    dStack_a8 = pdVar13[1];
    local_98 = dStack_b0;
    dStack_90 = dStack_a8;
    local_88 = dStack_a0;
    if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 0x58)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_d0 == iStack_cc) {
      local_d0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_d8,&iStack_cc);
    }
    lVar9 = (longlong)local_d0;
    local_d0 = local_d0 + 1;
    lVar9 = lVar9 * 0x58;
    pdVar13 = pdVar13 + 4;
    *(double *)(local_d8.Data + lVar9) = local_c8;
    *(double *)(local_d8.Data + lVar9 + 8) = dStack_c0;
    *(double *)(local_d8.Data + lVar9 + 0x10) = local_b8;
    *(double *)(local_d8.Data + lVar9 + 0x10 + 8) = dStack_b0;
    *(double *)(local_d8.Data + lVar9 + 0x20) = dStack_a8;
    *(double *)(local_d8.Data + lVar9 + 0x20 + 8) = dStack_a0;
    *(double *)(local_d8.Data + lVar9 + 0x30) = local_98;
    *(double *)(local_d8.Data + lVar9 + 0x30 + 8) = dStack_90;
    *(double *)(local_d8.Data + lVar9 + 0x40) = local_88;
    *(double *)(local_d8.Data + lVar9 + 0x40 + 8) = dStack_80;
    *(ulonglong *)(local_d8.Data + lVar9 + 0x50) = CONCAT62(uStack_76,local_78);
  }
  local_58 = local_68.Object;
  pTStack_50 = local_68.SharedReferenceCount.ReferenceController;
  pcVar2 = *(code **)(param_1->_padding_ + 0x858);
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(param_1,&local_d8,&local_58,0);
  iVar10 = (int)plVar7[1];
  uVar18 = uVar14;
  uVar19 = uVar14;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar14;
      uVar12 = 0;
      if ((int)uVar11 < local_d0) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar3 = *(undefined8 *)(local_d8.Data + uVar19 + 0x30);
      uVar4 = *(undefined8 *)(local_d8.Data + uVar19 + 0x30 + 8);
      uVar5 = *(undefined8 *)(local_d8.Data + uVar19 + 0x40);
      uVar6 = *(undefined8 *)(local_d8.Data + uVar19 + 0x40 + 8);
      uVar12 = 0;
      if ((int)uVar11 < (int)plVar7[1]) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar16 = *plVar7;
      uVar14 = (ulonglong)(uVar11 + 1);
      puVar1 = (undefined8 *)(uVar18 + lVar16);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)(uVar18 + 0x10 + lVar16);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      iVar10 = (int)plVar7[1];
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar19 + 0x58;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  if ((param_6 == Discard) && (uVar12 = iVar10 - 1, -1 < (int)uVar12)) {
    lVar9 = (longlong)(int)uVar12 * 0x58;
    lVar16 = (longlong)(int)uVar12 << 5;
    do {
      uVar17 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < local_d0) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_d8.Data[lVar9 + 0x50] == (FScriptContainerElement)0x0) {
        uVar11 = 0;
        if ((int)uVar12 < (int)plVar7[1]) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = (int)plVar7[1] + ~uVar12;
        if (iVar10 != 0) {
          memmove((void *)(*plVar7 + lVar16),(void *)(*plVar7 + lVar16 + 0x20),(longlong)iVar10 << 5
                 );
        }
        *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
      }
      lVar16 = lVar16 + -0x20;
      lVar9 = lVar9 + -0x58;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RunPhysProjection @ 146f699f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunPhysProjection
          (UWorld *param_1,FEnvTraceData *param_2,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uchar uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  size_t _Size;
  undefined1 auStackY_258 [32];
  TStatId local_1f8;
  FName local_1f0;
  FName local_1e8 [2];
  FBatchTrace local_1d8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  fVar1 = param_2->ExtentZ;
  uVar2 = param_2->ExtentX;
  uVar3 = param_2->ExtentY;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_EnvQueryTrace =
         (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysProjection(UWorld_*,FEnvTraceData_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
          )0x0;
    pFVar11 = ::FName::FName(&local_1f0,"EnvQueryTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar11,L"EnvQueryTrace",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_1f8.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryTrace;
  if (StatPtr_EnvQueryTrace ==
      (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysProjection(UWorld_*,FEnvTraceData_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
       )0x0) {
    pFVar11 = ::FName::FName(local_1e8,"EnvQueryTrace");
    local_1f8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar11,L"EnvQueryTrace",
                    "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64
                    ,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"EnvQueryTrace");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_f8,::StaticName,&local_1f8,param_2->bTraceComplex,(AActor *)0x0);
  local_1d8.Extent.field0_0x0._8_4_ = SUB84((double)(float)uVar3,0);
  local_1d8.Extent.field0_0x0._0_8_ = (double)(float)uVar2;
  local_1d8.Extent.field0_0x0._12_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
  local_1d8.World = param_1;
  local_1d8.Extent.field0_0x0._s_0.Z = (double)fVar1;
  FCollisionQueryParams::FCollisionQueryParams(&local_1d8.QueryParams,&local_f8);
  FCollisionResponseContainer::FCollisionResponseContainer
            (&local_1d8.ResponseParams.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels(&local_1d8.ResponseParams.CollisionResponse,ECR_Block)
  ;
  local_1d8.TraceMode = Keep;
  local_1d8.TraceHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.TraceHits.ArrayNum = 0;
  local_1d8.TraceHits.ArrayMax = 0;
  if ((param_2->TraceMode).Value == '\x03') {
    UCollisionProfile::GetChannelAndResponseParams
              (param_2->TraceProfileName,&local_1d8.Channel,&local_1d8.ResponseParams);
  }
  else {
    local_1d8.Channel = UEngineTypes::ConvertToCollisionChannel((uint)(param_2->TraceChannel).Value)
    ;
  }
  iVar10 = param_3->ArrayNum;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar10,&local_1d8.TraceHits.AllocatorInstance,&local_1d8.TraceHits.ArrayNum
                     ,&local_1d8.TraceHits.ArrayMax);
  memset(local_1d8.TraceHits.AllocatorInstance.Data + iVar9,0,(longlong)iVar10);
  uVar5 = (param_2->TraceShape).Value;
  if (uVar5 == '\0') {
    FBatchTrace::DoProject<0>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x01') {
    FBatchTrace::DoProject<1>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x02') {
    FBatchTrace::DoProject<2>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x03') {
    FBatchTrace::DoProject<3>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  if ((param_4 == &local_1d8.TraceHits) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  _Size = (size_t)local_1d8.TraceHits.ArrayNum;
  if (local_1d8.TraceHits.ArrayNum != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,local_1d8.TraceHits.ArrayNum,&param_4->AllocatorInstance,
                        &param_4->ArrayNum,&param_4->ArrayMax);
    memcpy((param_4->AllocatorInstance).Data + iVar10,local_1d8.TraceHits.AllocatorInstance.Data,
           _Size);
  }
  if (local_1d8.TraceHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.TraceHits.AllocatorInstance.Data);
  }
  if (local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// RunPhysProjection @ 146f69e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunPhysProjection
          (UWorld *param_1,FEnvTraceData *param_2,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_3,ETraceMode param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uchar uVar5;
  longlong lVar6;
  FName *pFVar7;
  undefined1 auStackY_248 [32];
  TStatId local_1e8;
  FName local_1e0;
  FBatchTrace local_1d8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  fVar1 = param_2->ExtentZ;
  uVar2 = param_2->ExtentX;
  uVar3 = param_2->ExtentY;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_EnvQueryTrace =
         (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysProjection(UWorld_*,FEnvTraceData_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,FEQSHelpers::ETraceMode)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
          )0x0;
    pFVar7 = ::FName::FName(&local_1e0,"EnvQueryTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar7,L"EnvQueryTrace",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_1e8.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryTrace;
  if (StatPtr_EnvQueryTrace ==
      (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysProjection(UWorld_*,FEnvTraceData_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,FEQSHelpers::ETraceMode)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
       )0x0) {
    pFVar7 = ::FName::FName(&local_1e0,"EnvQueryTrace");
    local_1e8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar7,L"EnvQueryTrace",
                    "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64
                    ,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"EnvQueryTrace");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_f8,::StaticName,&local_1e8,param_2->bTraceComplex,(AActor *)0x0);
  local_1d8.Extent.field0_0x0._8_4_ = SUB84((double)(float)uVar3,0);
  local_1d8.Extent.field0_0x0._0_8_ = (double)(float)uVar2;
  local_1d8.Extent.field0_0x0._12_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
  local_1d8.World = param_1;
  local_1d8.Extent.field0_0x0._s_0.Z = (double)fVar1;
  FCollisionQueryParams::FCollisionQueryParams(&local_1d8.QueryParams,&local_f8);
  FCollisionResponseContainer::FCollisionResponseContainer
            (&local_1d8.ResponseParams.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels(&local_1d8.ResponseParams.CollisionResponse,ECR_Block)
  ;
  local_1d8.TraceHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.TraceHits.ArrayNum = 0;
  local_1d8.TraceHits.ArrayMax = 0;
  local_1d8.TraceMode = param_4;
  if ((param_2->TraceMode).Value == '\x03') {
    UCollisionProfile::GetChannelAndResponseParams
              (param_2->TraceProfileName,&local_1d8.Channel,&local_1d8.ResponseParams);
  }
  else {
    local_1d8.Channel = UEngineTypes::ConvertToCollisionChannel((uint)(param_2->TraceChannel).Value)
    ;
  }
  uVar5 = (param_2->TraceShape).Value;
  if (uVar5 == '\0') {
    FBatchTrace::DoProject<0>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x01') {
    FBatchTrace::DoProject<1>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x02') {
    FBatchTrace::DoProject<2>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  else if (uVar5 == '\x03') {
    FBatchTrace::DoProject<3>
              (&local_1d8,param_3,param_2->ProjectUp,
               (float)((uint)param_2->ProjectDown ^ __xmm_80000000800000008000000080000000),
               param_2->PostProjectionVerticalOffset);
  }
  if (local_1d8.TraceHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.TraceHits.AllocatorInstance.Data);
  }
  if (local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// RunPhysRaycasts @ 146f6a230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunPhysRaycasts
          (UWorld *param_1,FEnvTraceData *param_2,TVector<double> *param_3,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_4,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_5,ETraceMode param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uchar uVar5;
  longlong lVar6;
  FName *pFVar7;
  undefined1 auStackY_248 [32];
  TStatId local_1e8;
  FName local_1e0;
  FBatchTrace local_1d8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  fVar1 = param_2->ExtentZ;
  uVar2 = param_2->ExtentX;
  uVar3 = param_2->ExtentY;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_EnvQueryTrace =
         (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysRaycasts(UWorld_*,FEnvTraceData_const_&,UE::Math::TVector<double>_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,FEQSHelpers::ETraceMode)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
          )0x0;
    pFVar7 = ::FName::FName(&local_1e0,"EnvQueryTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar7,L"EnvQueryTrace",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_1e8.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryTrace;
  if (StatPtr_EnvQueryTrace ==
      (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunPhysRaycasts(UWorld_*,FEnvTraceData_const_&,UE::Math::TVector<double>_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,FEQSHelpers::ETraceMode)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
       )0x0) {
    pFVar7 = ::FName::FName(&local_1e0,"EnvQueryTrace");
    local_1e8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar7,L"EnvQueryTrace",
                    "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64
                    ,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"EnvQueryTrace");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_f8,::StaticName,&local_1e8,param_2->bTraceComplex,(AActor *)0x0);
  FCollisionQueryParams::AddIgnoredActors(&local_f8,param_5);
  local_1d8.Extent.field0_0x0._8_4_ = SUB84((double)(float)uVar3,0);
  local_1d8.Extent.field0_0x0._0_8_ = (double)(float)uVar2;
  local_1d8.Extent.field0_0x0._12_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
  local_1d8.World = param_1;
  local_1d8.Extent.field0_0x0._s_0.Z = (double)fVar1;
  FCollisionQueryParams::FCollisionQueryParams(&local_1d8.QueryParams,&local_f8);
  FCollisionResponseContainer::FCollisionResponseContainer
            (&local_1d8.ResponseParams.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels(&local_1d8.ResponseParams.CollisionResponse,ECR_Block)
  ;
  local_1d8.TraceMode = param_6;
  local_1d8.TraceHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.TraceHits.ArrayNum = 0;
  local_1d8.TraceHits.ArrayMax = 0;
  if ((param_2->TraceMode).Value == '\x03') {
    UCollisionProfile::GetChannelAndResponseParams
              (param_2->TraceProfileName,&local_1d8.Channel,&local_1d8.ResponseParams);
  }
  else {
    local_1d8.Channel = UEngineTypes::ConvertToCollisionChannel((uint)(param_2->TraceChannel).Value)
    ;
  }
  uVar5 = (param_2->TraceShape).Value;
  if (uVar5 == '\0') {
    FBatchTrace::DoSingleSourceMultiDestinations<0>(&local_1d8,param_3,param_4);
  }
  else if (uVar5 == '\x01') {
    FBatchTrace::DoSingleSourceMultiDestinations<1>(&local_1d8,param_3,param_4);
  }
  else if (uVar5 == '\x02') {
    FBatchTrace::DoSingleSourceMultiDestinations<2>(&local_1d8,param_3,param_4);
  }
  else if (uVar5 == '\x03') {
    FBatchTrace::DoSingleSourceMultiDestinations<3>(&local_1d8,param_3,param_4);
  }
  if (local_1d8.TraceHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.TraceHits.AllocatorInstance.Data);
  }
  if (local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// RunRaycastsOnNavHitOnlyWalls @ 146f6acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSHelpers::RunRaycastsOnNavHitOnlyWalls
          (ANavigationData *param_1,UObject *param_2,FEnvTraceData *param_3,TVector<double> *param_4
          ,TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_5,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_6,ETraceMode param_7)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uchar uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  ANavigationData *this;
  FEnvTraceData *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UWorld *pUVar14;
  FName *pFVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 auStackY_348 [32];
  undefined1 local_2e8 [8];
  ForAnyElementType local_2e0;
  uint local_2d8;
  uint uStack_2d4;
  TArray<FRayStartEnd,TSizedDefaultAllocator<32>_> local_2d0;
  UClass *local_2c0;
  ANavigationData *local_2b8;
  FEnvTraceData *local_2b0;
  TStatId local_2a8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined2 local_218;
  undefined6 uStack_216;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_208;
  FName local_1f8;
  FName local_1f0;
  FNavigationQueryFilter *local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  FBatchTrace local_1d8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2c0 = (param_3->NavigationFilter).Class.field0_0x0.DebugPtr;
  local_2a0 = param_6;
  local_2b8 = param_1;
  local_2b0 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_2c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2c0);
  }
  UNavigationQueryFilter::GetQueryFilter
            (&local_208,param_1,param_2,(TSubclassOf<UNavigationQueryFilter>)&local_2c0);
  uVar21 = param_5->ArrayNum;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  uStack_2d4 = 0;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar21,&local_2e0,0,(int *)&uStack_2d4);
  }
  iVar13 = param_5->ArrayNum;
  pFVar18 = (param_5->AllocatorInstance).Data;
  pFVar20 = pFVar18 + (longlong)iVar13 * 0x20;
  while( true ) {
    if (param_5->ArrayNum != iVar13) {
      local_2e8[0] = 0;
      `TCheckedPointerIterator<FNavLocation,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2e8);
    }
    if (pFVar18 == pFVar20) break;
    local_268 = (param_4->field0_0x0)._s_0.X;
    dStack_260 = (param_4->field0_0x0)._s_0.Y;
    local_258 = (param_4->field0_0x0)._s_0.Z;
    dStack_240 = *(double *)(pFVar18 + 0x10);
    dStack_220 = 0.0;
    local_218 = 0;
    dStack_250 = *(double *)pFVar18;
    dStack_248 = *(double *)(pFVar18 + 8);
    local_238 = dStack_250;
    dStack_230 = dStack_248;
    local_228 = dStack_240;
    if (((local_2e0.Data <= (FScriptContainerElement *)&local_268) &&
        ((FScriptContainerElement *)&local_268 < local_2e0.Data + (longlong)(int)uStack_2d4 * 0x58))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (local_2d8 == uStack_2d4) {
      local_2d8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&local_2e0,(int *)&uStack_2d4);
    }
    lVar16 = (longlong)(int)local_2d8;
    local_2d8 = local_2d8 + 1;
    lVar16 = lVar16 * 0x58;
    pFVar18 = pFVar18 + 0x20;
    *(double *)(local_2e0.Data + lVar16) = local_268;
    *(double *)(local_2e0.Data + lVar16 + 8) = dStack_260;
    *(double *)(local_2e0.Data + lVar16 + 0x10) = local_258;
    *(double *)(local_2e0.Data + lVar16 + 0x10 + 8) = dStack_250;
    *(double *)(local_2e0.Data + lVar16 + 0x20) = dStack_248;
    *(double *)(local_2e0.Data + lVar16 + 0x20 + 8) = dStack_240;
    *(double *)(local_2e0.Data + lVar16 + 0x30) = local_238;
    *(double *)(local_2e0.Data + lVar16 + 0x30 + 8) = dStack_230;
    *(double *)(local_2e0.Data + lVar16 + 0x40) = local_228;
    *(double *)(local_2e0.Data + lVar16 + 0x40 + 8) = dStack_220;
    *(ulonglong *)(local_2e0.Data + lVar16 + 0x50) = CONCAT62(uStack_216,local_218);
  }
  local_1e8 = local_208.Object;
  pTStack_1e0 = local_208.SharedReferenceCount.ReferenceController;
  pcVar7 = *(code **)(param_1->_padding_ + 0x858);
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar7)(param_1,&local_2e0,&local_1e8,0);
  piVar1 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&param_5->AllocatorInstance,0,piVar1);
  }
  uVar21 = 0;
  local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ArrayNum = 0;
  local_2d0.ArrayMax = 0;
  if (0 < (int)local_2d8) {
    lVar16 = 0;
    do {
      uVar19 = ~uVar21 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar21 < (int)local_2d8) {
        uVar12 = uVar19;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_2e0.Data[lVar16 + 0x50] == (FScriptContainerElement)0x0) {
        uVar12 = 0;
        if ((int)uVar21 < (int)local_2d8) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar18 = (param_5->AllocatorInstance).Data;
        pFVar20 = local_2e0.Data + lVar16 + 0x30;
        if (((pFVar18 <= pFVar20) && (pFVar20 < pFVar18 + (longlong)*piVar1 * 0x20)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = param_5->ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&param_5->AllocatorInstance,piVar1);
        }
        param_5->ArrayNum = iVar13 + 1;
        uVar8 = *(undefined8 *)(pFVar20 + 8);
        pFVar18 = (param_5->AllocatorInstance).Data + (longlong)iVar13 * 0x20;
        *(undefined8 *)pFVar18 = *(undefined8 *)pFVar20;
        *(undefined8 *)(pFVar18 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar20 + 0x18);
        *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)(pFVar20 + 0x10);
        *(undefined8 *)(pFVar18 + 0x18) = uVar8;
      }
      else {
        if (local_2d0.ArrayMax == local_2d0.ArrayNum) {
          if ((int)local_2d8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_2d8);
          }
          if (local_2d0.ArrayMax < (int)local_2d8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,local_2d8,&local_2d0.AllocatorInstance,local_2d0.ArrayNum,
                       &local_2d0.ArrayMax);
          }
        }
        uVar12 = 0;
        if ((int)uVar21 < (int)local_2d8) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar9.Data = local_2e0.Data;
        uVar12 = 0;
        if ((int)uVar21 < (int)local_2d8) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_298 = *(undefined8 *)(local_2e0.Data + lVar16 + 0x30);
        uStack_290 = *(undefined8 *)(local_2e0.Data + lVar16 + 0x30 + 8);
        local_288 = *(undefined8 *)(local_2e0.Data + lVar16 + 0x40);
        pFVar18 = FVar9.Data + lVar16 + 0x18;
        uStack_280 = *(undefined8 *)pFVar18;
        uStack_278 = *(undefined8 *)(pFVar18 + 8);
        uStack_270 = *(undefined8 *)(FVar9.Data + lVar16 + 0x28);
        if (((local_2d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_298) &&
            ((FScriptContainerElement *)&local_298 <
             local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayMax * 0x30)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_2d0.ArrayNum == local_2d0.ArrayMax) {
          local_2d0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_2d0.AllocatorInstance,&local_2d0.ArrayMax);
        }
        lVar17 = (longlong)local_2d0.ArrayNum;
        local_2d0.ArrayNum = local_2d0.ArrayNum + 1;
        pFVar18 = local_2d0.AllocatorInstance.Data + lVar17 * 0x30;
        *(undefined8 *)pFVar18 = local_298;
        *(undefined8 *)(pFVar18 + 8) = uStack_290;
        *(undefined8 *)(pFVar18 + 0x10) = local_288;
        *(undefined8 *)(pFVar18 + 0x18) = uStack_280;
        *(undefined8 *)(pFVar18 + 0x20) = uStack_278;
        *(undefined8 *)(pFVar18 + 0x28) = uStack_270;
      }
      this = local_2b8;
      uVar21 = uVar21 + 1;
      lVar16 = lVar16 + 0x58;
    } while ((int)uVar21 < (int)local_2d8);
    if (0 < local_2d0.ArrayNum) {
      pUVar14 = AActor::GetWorld((AActor *)local_2b8);
      if ((pUVar14 == (UWorld *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NavData.GetWorld()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryTraceHelpers.cpp"
                              ,0x121,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar10 = local_2b0;
      fVar2 = local_2b0->ExtentZ;
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar3 = local_2b0->ExtentX;
      uVar4 = local_2b0->ExtentY;
      if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_EnvQueryTrace =
             (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunRaycastsOnNavHitOnlyWalls(ANavigationData_const_&,UObject_const_&,FEnvTraceData_const_&,UE::Math::TVector<double>_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,FEQSHelpers::ETraceMode)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
              )0x0;
        pFVar15 = ::FName::FName(&local_1f8,"EnvQueryTrace");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar15,L"EnvQueryTrace",
                   "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                   true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_2a8.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryTrace;
      if (StatPtr_EnvQueryTrace ==
          (FThreadSafeStaticStat<_public:___cdecl__void___cdecl_FEQSHelpers::RunRaycastsOnNavHitOnlyWalls(ANavigationData_const_&,UObject_const_&,FEnvTraceData_const_&,UE::Math::TVector<double>_const_&,TArray<FNavLocation,TSizedDefaultAllocator<32>_>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,FEQSHelpers::ETraceMode)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
           )0x0) {
        pFVar15 = ::FName::FName(&local_1f0,"EnvQueryTrace");
        local_2a8.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar15,
                        L"EnvQueryTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                        L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"EnvQueryTrace");
        _Init_thread_footer(&::_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams
                (&local_f8,::StaticName,&local_2a8,local_2b0->bTraceComplex,(AActor *)0x0);
      FCollisionQueryParams::AddIgnoredActors(&local_f8,local_2a0);
      local_1d8.World = AActor::GetWorld((AActor *)this);
      local_1d8.Extent.field0_0x0._8_4_ = SUB84((double)(float)uVar4,0);
      local_1d8.Extent.field0_0x0._0_8_ = (double)(float)uVar3;
      local_1d8.Extent.field0_0x0._12_4_ = (int)((ulonglong)(double)(float)uVar4 >> 0x20);
      local_1d8.Extent.field0_0x0._s_0.Z = (double)fVar2;
      FCollisionQueryParams::FCollisionQueryParams(&local_1d8.QueryParams,&local_f8);
      FCollisionResponseContainer::FCollisionResponseContainer
                (&local_1d8.ResponseParams.CollisionResponse);
      FCollisionResponseContainer::SetAllChannels
                (&local_1d8.ResponseParams.CollisionResponse,ECR_Block);
      local_1d8.TraceMode = param_7;
      local_1d8.TraceHits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.TraceHits.ArrayNum = 0;
      local_1d8.TraceHits.ArrayMax = 0;
      if ((pFVar10->TraceMode).Value == '\x03') {
        UCollisionProfile::GetChannelAndResponseParams
                  (pFVar10->TraceProfileName,&local_1d8.Channel,&local_1d8.ResponseParams);
      }
      else {
        local_1d8.Channel =
             UEngineTypes::ConvertToCollisionChannel((uint)(pFVar10->TraceChannel).Value);
      }
      uVar6 = (pFVar10->TraceShape).Value;
      if (uVar6 == '\0') {
        FBatchTrace::DoMultiSourceMultiDestinations2D<0>(&local_1d8,&local_2d0,param_5);
      }
      else if (uVar6 == '\x01') {
        FBatchTrace::DoMultiSourceMultiDestinations2D<1>(&local_1d8,&local_2d0,param_5);
      }
      else if (uVar6 == '\x02') {
        FBatchTrace::DoMultiSourceMultiDestinations2D<2>(&local_1d8,&local_2d0,param_5);
      }
      else if (uVar6 == '\x03') {
        FBatchTrace::DoMultiSourceMultiDestinations2D<3>(&local_1d8,&local_2d0,param_5);
      }
      if (local_1d8.TraceHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.TraceHits.AllocatorInstance.Data);
      }
      if (local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d8.QueryParams.IgnoreSourceObjects.AllocatorInstance.
                              SecondaryData);
      }
      if (local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d8.QueryParams.IgnoreComponents.AllocatorInstance.SecondaryData
                     );
      }
      if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
  }
  if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.AllocatorInstance.Data);
  }
  if (local_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return;
}

