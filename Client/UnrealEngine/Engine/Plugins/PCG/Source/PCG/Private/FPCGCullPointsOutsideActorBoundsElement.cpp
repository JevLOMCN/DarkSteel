// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// operator() @ 149b5e280

void __thiscall
`FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal'::__l26::<lambda_1>::operator()
          (void *this)

{
  ForElementType<int> *pFVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  FVar2 = *(ForElementType<int> *)((longlong)this + 8);
  uVar5 = (**(code **)(**(longlong **)this + 0x488))();
  pFVar1 = (ForElementType<int> *)((longlong)FVar2 + 0x4008);
  iVar6 = *(int *)pFVar1->InlineData;
  if (iVar6 < (int)uVar5) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar5 - iVar6,(ForElementType<int> *)FVar2,(int *)pFVar1,
               (int *)((longlong)FVar2 + 0x400c));
    return;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if ((int)uVar5 < iVar6) {
    uVar8 = iVar6 - uVar5;
    if (((int)(uVar8 | uVar5) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      FVar7 = *(ForElementType<int> *)((longlong)FVar2 + 0x4000);
      if (*(ForElementType<int> *)((longlong)FVar2 + 0x4000) == (ForElementType<int>)0x0) {
        FVar7 = FVar2;
      }
      _Dst = (void *)((longlong)FVar7 + (longlong)(int)uVar5 * 4);
      iVar6 = (*(int *)pFVar1->InlineData - uVar8) - uVar5;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
      }
      *(uint *)pFVar1->InlineData = *(int *)pFVar1->InlineData - uVar8;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,(ForElementType<int> *)FVar2,*(int *)pFVar1->InlineData,
                 (int *)((longlong)FVar2 + 0x400c));
    }
  }
  return;
}

// operator() @ 149b60cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal'::__l26::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  double *pdVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  longlong local_1e0;
  int local_1d8;
  void *local_1d0;
  TVector<double>_u_0 local_1c8;
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  longlong local_180;
  int local_178;
  int local_174;
  int local_170;
  undefined1 local_150 [16];
  double local_140;
  undefined1 local_138 [16];
  longlong local_118;
  int local_110;
  int local_10c;
  int local_108;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar19 = (ulonglong)param_1;
  uVar17 = (ulonglong)param_2;
  local_1d0 = this;
  (**(code **)(**(longlong **)this + 0x500))(*(longlong **)this,&local_118);
  (**(code **)(**(longlong **)this + 0x510))(*(longlong **)this,&local_180);
  (**(code **)(**(longlong **)this + 0x518))(*(longlong **)this,&local_1b0);
  dVar8 = __real_3fe0000000000000;
  local_1d8 = param_1 + param_3;
  iVar12 = 0;
  if (param_1 < local_1d8) {
    lVar20 = uVar17 * 4;
    uVar21 = uVar19;
    do {
      uVar18 = (uint)uVar19;
      uVar15 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < local_108) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (local_1e8 = uVar21, local_1e0 = (longlong)local_108,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar1 = (code *)swi(3);
        iVar12 = (*pcVar1)();
        return iVar12;
      }
      uVar14 = (int)uVar18 >> 0x1f;
      pauVar16 = (undefined1 (*) [16])
                 ((longlong)
                  (int)((longlong)((ulonglong)uVar14 << 0x20 | uVar19 & 0xffffffff) %
                       (longlong)local_10c) * (longlong)local_110 + local_118);
      uVar11 = 0;
      if ((int)uVar18 < local_1a0) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (local_1e8 = uVar21, local_1e0 = (longlong)local_1a0,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar1 = (code *)swi(3);
        iVar12 = (*pcVar1)();
        return iVar12;
      }
      pdVar22 = (double *)
                ((longlong)
                 (int)((longlong)((ulonglong)uVar14 << 0x20 | uVar19 & 0xffffffff) %
                      (longlong)local_1a4) * (longlong)local_1a8 + local_1b0);
      uVar11 = 0;
      if ((int)uVar18 < local_170) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (local_1e8 = uVar21, local_1e0 = (longlong)local_170,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar1 = (code *)swi(3);
        iVar12 = (*pcVar1)();
        return iVar12;
      }
      pvVar9 = local_1d0;
      auVar32 = pauVar16[1];
      auVar26 = *pauVar16;
      dVar7 = *(double *)(pauVar16[1] + 8);
      lVar13 = (longlong)
               (int)((longlong)((ulonglong)uVar14 << 0x20 | uVar19 & 0xffffffff) %
                    (longlong)local_174) * (longlong)local_178;
      dVar4 = (*pdVar22 + *(double *)(lVar13 + local_180)) * dVar8;
      local_140 = (*(double *)(lVar13 + 0x10 + local_180) + pdVar22[2]) * dVar8;
      dVar23 = (*(double *)(lVar13 + 8 + local_180) + pdVar22[1]) * dVar8;
      dVar5 = local_140 * *(double *)pauVar16[5];
      dVar6 = *(double *)(pauVar16[5] + 8) * 0.0;
      local_138 = *pauVar16;
      auVar27 = blendpd(local_138,auVar32,2);
      local_150._8_4_ = SUB84(dVar23,0);
      local_150._0_8_ = dVar4;
      local_150._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar4 = dVar4 * *(double *)pauVar16[4];
      dVar23 = dVar23 * *(double *)(pauVar16[4] + 8);
      uVar33 = (undefined4)((ulonglong)dVar23 >> 0x20);
      auVar34._8_4_ = SUB84(dVar23,0);
      auVar34._0_8_ = dVar4;
      auVar34._12_4_ = uVar33;
      dVar3 = auVar32._0_8_;
      auVar35._0_8_ = auVar34._8_8_ * local_138._0_8_ - local_138._8_8_ * dVar4;
      auVar35._8_8_ = dVar5 * local_138._8_8_ - dVar3 * dVar23;
      auVar29._8_4_ = SUB84(dVar23,0);
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = uVar33;
      auVar24._8_4_ = SUB84(dVar6,0);
      auVar24._0_8_ = dVar5;
      auVar24._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar24 = blendpd(auVar29,auVar24,2);
      auVar25._0_8_ = auVar24._0_8_ * dVar3 - auVar27._0_8_ * dVar5;
      auVar25._8_8_ = auVar24._8_8_ * auVar32._8_8_ - auVar27._8_8_ * dVar6;
      auVar24 = blendpd(auVar35,auVar25,2);
      dVar6 = auVar35._8_8_ + auVar35._8_8_;
      dVar2 = auVar25._0_8_ + auVar25._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar36._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar36._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar30._8_4_ = SUB84(dVar2,0);
      auVar30._0_8_ = dVar6;
      auVar30._12_4_ = uVar33;
      auVar27._8_4_ = SUB84(dVar2,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = uVar33;
      auVar24 = blendpd(auVar27,auVar36,2);
      auVar31._0_8_ = auVar30._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar6;
      auVar31._8_8_ = auVar36._0_8_ * auVar26._8_8_ - dVar3 * dVar2;
      auVar29 = blendpd(auVar26,auVar32,2);
      auVar26._8_4_ = SUB84(auVar31._8_8_,0);
      auVar26._0_8_ = auVar31._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
      auVar28._0_8_ = auVar24._0_8_ * dVar3 - auVar29._0_8_ * auVar36._0_8_;
      auVar28._8_8_ = auVar24._8_8_ * auVar32._8_8_ - auVar29._8_8_ * auVar36._8_8_;
      auVar32 = blendpd(auVar31,auVar28,2);
      dVar3 = dVar2 * dVar7 + dVar23 + auVar28._0_8_ + *(double *)(pauVar16[2] + 8);
      local_1c8._s_0.Z = auVar36._0_8_ * dVar7 + dVar5 + auVar32._0_8_ + *(double *)pauVar16[3];
      local_1c8._8_4_ = SUB84(dVar3,0);
      local_1c8._0_8_ = dVar6 * dVar7 + dVar4 + auVar26._8_8_ + *(double *)pauVar16[2];
      local_1c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      bVar10 = PCGHelpers::IsInsideBounds
                         (*(TBox<double> **)((longlong)local_1d0 + 8),
                          (TVector<double> *)&local_1c8._s_0);
      if (bVar10) {
        lVar13 = *(longlong *)((longlong)pvVar9 + 0x10);
        uVar15 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar15 < *(int *)(lVar13 + 0x4008)) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_1e8 = (ulonglong)(int)uVar15;
          local_1e0 = (longlong)*(int *)(lVar13 + 0x4008);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar1 = (code *)swi(3);
            iVar12 = (*pcVar1)();
            return iVar12;
          }
        }
        if (*(longlong *)(lVar13 + 0x4000) != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x4000);
        }
        iVar12 = iVar12 + 1;
        uVar17 = (ulonglong)(uVar15 + 1);
        *(uint *)(lVar20 + lVar13) = uVar18;
        lVar20 = lVar20 + 4;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar21 = uVar21 + 1;
    } while ((int)(uVar18 + 1) < local_1d8);
  }
  return iVar12;
}

// operator() @ 149b62bd0

void __thiscall
`FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal'::__l26::<lambda_3>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x4008)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar1 + 0x4000);
  if (*(longlong *)(lVar1 + 0x4000) == 0) {
    lVar6 = lVar1;
  }
  uVar4 = 0;
  if (param_2 < *(int *)(lVar1 + 0x4008)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar1 + 0x4000);
  if (*(longlong *)(lVar1 + 0x4000) == 0) {
    lVar5 = lVar1;
  }
  memmove((void *)(lVar5 + (longlong)param_2 * 4),(void *)(lVar6 + (longlong)param_1 * 4),
          (longlong)param_3 << 2);
  return;
}

// ExecuteInternal @ 149b76e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

bool __thiscall
FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal
          (FPCGCullPointsOutsideActorBoundsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FIdentityFunctor FVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  longlong *plVar13;
  double *pdVar14;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this_01;
  FObjectPtr_u_0 this_02;
  FPCGTaggedData *pFVar15;
  ForElementType<int> FVar16;
  FObjectPtr_u_0 *pFVar17;
  FObjectPtr_u_0 *pFVar18;
  FObjectPtr_u_0 FVar19;
  bool bVar20;
  undefined1 auStackY_42b8 [32];
  FIdentityFunctor local_4268;
  char local_4267;
  FObjectPtr_u_0 *local_4260;
  TObjectPtr<UPCGSettings>_u_0 local_4258;
  undefined1 local_4250 [8];
  TObjectPtr<UPCGSettings>_u_0 local_4248;
  FObjectPtr_u_0 local_4240;
  <lambda_4> local_4238;
  <lambda_3> local_4230;
  FObjectPtr_u_0 local_4228;
  TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *local_4220;
  <lambda_5> local_4218;
  TArrayView<int_const_,int> local_4208;
  FObjectPtr_u_0 local_41f8;
  undefined1 *local_41f0;
  TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *local_41e8;
  TVector4<double>_u_0 local_41d8;
  double local_41b8;
  double local_41b0;
  double local_41a8;
  undefined8 local_41a0;
  FPCGInitializeFromDataParams local_4198;
  undefined1 local_4158 [16];
  double local_4148;
  double local_4140;
  undefined1 local_4138 [16];
  undefined1 local_4128;
  undefined1 local_4120 [56];
  undefined1 local_40e8 [56];
  undefined1 local_40b0 [56];
  TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> local_4078;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_42b8;
  bVar20 = CpuChannel->Enabled < 0;
  if (bVar20) {
    local_4267 = '\0';
  }
  else {
    local_4267 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId57,"FPCGCullPointsOutsideActorBoundsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCullPointsOutsideActorBounds.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
  }
  cVar8 = !bVar20;
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar20))
  goto LAB_149b77613;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCullPointsOutsideActorBoundsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_4268);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_4248.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_4248.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b76fe0;
          UE::GC::MarkAsReachable((UObject *)local_4248.DebugPtr);
        }
        if (local_4248.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
          bVar20 = FObjectPtr::IsA(&local_4248.ObjectPtr,pUVar10);
          TVar12 = local_4248;
          local_4258 = local_4248;
          if (bVar20) goto LAB_149b76fe8;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
        local_4258.DebugPtr = TVar12.DebugPtr;
        pUVar10 = UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar10->_padding_)) goto LAB_149b76fe8;
      }
    }
LAB_149b76fe0:
    local_4258.DebugPtr = (UPCGSettings *)0x0;
    TVar12.DebugPtr = local_4258.DebugPtr;
  }
  else {
    pUVar10 = UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
    bVar20 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (!bVar20) goto LAB_149b76fe0;
    local_4258 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    TVar12 = local_4258;
  }
LAB_149b76fe8:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCullPointsOutsideActorBounds.cpp"
                          ,0x41,L""), bVar20)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar20)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                          ,0x8d,L""), bVar20)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
  pdVar14 = (double *)(**(code **)(*plVar13 + 0x40))(plVar13,local_4120);
  FVar6 = local_4268;
  dVar5 = __real_3fe0000000000000;
  iVar2 = (param_1->InputData).TaggedData.ArrayNum;
  pFVar18 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  dVar4 = (double)*(float *)&TVar12.DebugPtr[1]._padding_;
  local_4140 = dVar4 + pdVar14[3];
  local_4148 = pdVar14[2] - dVar4;
  local_4128 = 1;
  pFVar17 = pFVar18 + (longlong)iVar2 * 0xf;
  local_4138._8_4_ = SUB84(dVar4 + pdVar14[5],0);
  local_4138._0_8_ = dVar4 + pdVar14[4];
  local_4138._12_4_ = (int)((ulonglong)(dVar4 + pdVar14[5]) >> 0x20);
  local_4158._8_4_ = SUB84(pdVar14[1] - dVar4,0);
  local_4158._0_8_ = *pdVar14 - dVar4;
  local_4158._12_4_ = (int)((ulonglong)(pdVar14[1] - dVar4) >> 0x20);
  local_4260 = pFVar17;
  while( true ) {
    if ((param_1->InputData).TaggedData.ArrayNum != iVar2) {
      local_4268 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_4268);
    }
    cVar8 = local_4267;
    if (pFVar18 == pFVar17) break;
    local_4240 = (FObjectPtr_u_0)pFVar18->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b77136:
      if ((UPCGBasePointData *)local_4240.Handle != (UPCGBasePointData *)0x0) {
        pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar20 = FObjectPtr::IsA((FObjectPtr *)&local_4240,pUVar10);
        FVar19 = local_4240;
        if ((((bVar20) &&
             (pFVar17 = local_4260,
             (UPCGBasePointData *)local_4240.Handle != (UPCGBasePointData *)0x0)) &&
            ((iVar9 = (**(code **)(*(longlong *)local_4240.Handle + 0x488))(local_4240.Handle),
             pFVar17 = local_4260, iVar9 != 0 &&
             ((pdVar14 = (double *)
                         (**(code **)(*(longlong *)FVar19.Handle + 0x388))(FVar19.Handle,local_40e8)
              , pFVar17 = local_4260, *pdVar14 <= local_4140 &&
              ((double)local_4158._0_8_ < pdVar14[3] || (double)local_4158._0_8_ == pdVar14[3]))))))
           && ((pdVar14[1] <= (double)local_4138._0_8_ &&
               ((((double)local_4158._8_8_ < pdVar14[4] || (double)local_4158._8_8_ == pdVar14[4] &&
                 (pdVar14[2] <= (double)local_4138._8_8_)) &&
                (local_4148 < pdVar14[5] || local_4148 == pdVar14[5])))))) {
          local_4078.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
          local_4078.ArrayNum = 0;
          local_4078.ArrayMax = 0x1000;
          bVar20 = false;
          pdVar14 = (double *)
                    (**(code **)(*(longlong *)FVar19.Handle + 0x388))(FVar19.Handle,local_40b0);
          if ((*pdVar14 < (double)local_4158._0_8_) || (local_4140 < *pdVar14)) {
LAB_149b772b5:
            cVar8 = (**(code **)(*(longlong *)FVar19.Handle + 0x610))(FVar19.Handle);
            if (cVar8 == '\0') {
              this_01 = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
                        (**(code **)(*(longlong *)FVar19.Handle + 0x618))(FVar19.Handle);
              local_4218.KeptPointIndices = &local_4078;
              local_4218.BoundsBox = (TBox<double> *)local_4158;
              local_41d8._s_0.W = 0.0;
              local_41b8 = (local_4140 - (double)local_4158._0_8_) * dVar5;
              local_41b0 = ((double)local_4138._0_8_ - (double)local_4158._8_8_) * dVar5;
              local_41a8 = ((double)local_4138._8_8_ - local_4148) * dVar5;
              local_41d8._s_0.X = (double)local_4158._0_8_ + local_41b8;
              local_41d8._s_0.Y = (double)local_4158._8_8_ + local_41b0;
              local_41a0 = 0;
              local_41d8._s_0.Z = local_4148 + local_41a8;
              TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
              FindElementsWithBoundsTestInternal<_FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal_::__l28::<lambda_5>_>
                        (this_01,0,(FOctreeNodeContext *)this_01,
                         (FBoxCenterAndExtent *)&local_41d8._s_0,&local_4218);
              bVar20 = *(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 4) == '\0';
            }
            else {
              local_4220 = &local_4078;
              local_4228.Handle = FVar19.Handle;
              local_41f0 = local_4158;
              local_41e8 = &local_4078;
              local_4230.KeptPointIndices = &local_4078;
              local_4238.KeptPointIndices = &local_4078;
              local_41f8.Handle = FVar19.Handle;
              iVar9 = (**(code **)(*(longlong *)FVar19.Handle + 0x488))();
              FPCGAsync::
              AsyncProcessingRangeEx<_FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal_::__l26::<lambda_1>_&,_FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal_::__l26::<lambda_2>_&,_FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal_::__l26::<lambda_3>_&,_FPCGCullPointsOutsideActorBoundsElement::ExecuteInternal_::__l26::<lambda_4>_&>
                        (&param_1->AsyncState,iVar9,(<lambda_1> *)&local_4228,
                         (<lambda_2> *)&local_41f8,&local_4230,&local_4238,false,0x40,true);
            }
            iVar9 = (**(code **)(*(longlong *)FVar19.Handle + 0x488))(FVar19.Handle);
            if (local_4078.ArrayNum == iVar9) goto LAB_149b77572;
            if (local_4078.ArrayNum != 0) {
              this_02.Handle = (UObject *)FPCGContext::NewPointData_AnyThread(param_1);
              FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                        (&local_4198,(UPCGSpatialData *)FVar19.Handle);
              local_4198.bInheritSpatialData = false;
              UPCGSpatialData::InitializeFromDataWithParams
                        ((UPCGSpatialData *)this_02.Handle,&local_4198);
              if (bVar20) {
                FVar16 = (ForElementType<int>)&local_4078;
                if (local_4078.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar16 = local_4078.AllocatorInstance.SecondaryData;
                }
                AlgoImpl::
                IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                          ((int *)FVar16,local_4078.ArrayNum,FVar6,(TLess<void> *)local_4250);
              }
              iVar9 = local_4078.ArrayNum;
              local_4208.DataPtr = (int *)&local_4078;
              if (local_4078.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                local_4208.DataPtr = (int *)local_4078.AllocatorInstance.SecondaryData;
              }
              if ((local_4078.ArrayNum < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar20)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_4208.ArrayNum = iVar9;
              UPCGBasePointData::SetPointsFrom
                        ((UPCGBasePointData *)this_02.Handle,(UPCGBasePointData *)FVar19.Handle,
                         &local_4208);
              DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                        ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                         local_4198.MetadataInitializeParams.DomainInitializeParams.
                         AllocatorInstance.Data,
                         local_4198.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
              if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                  local_4198.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                  != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
                FMemory::Free(local_4198.MetadataInitializeParams.DomainInitializeParams.
                              AllocatorInstance.Data);
              }
              if (local_4198.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4198.MetadataInitializeParams.DomainMapping.AllocatorInstance.
                              Data);
              }
              FVar19.Handle = this_02.Handle;
              TVar12 = local_4258;
              if ((UPCGBasePointData *)this_02.Handle != (UPCGBasePointData *)0x0)
              goto LAB_149b77572;
            }
          }
          else {
            if ((((pdVar14[1] < (double)local_4158._8_8_) ||
                 (((double)local_4138._0_8_ < pdVar14[1] || (pdVar14[2] < local_4148)))) ||
                ((double)local_4138._8_8_ < pdVar14[2])) ||
               (((((pdVar14[3] < (double)local_4158._0_8_ || (local_4140 < pdVar14[3])) ||
                  (pdVar14[4] < (double)local_4158._8_8_)) ||
                 (((double)local_4138._0_8_ < pdVar14[4] || (pdVar14[5] < local_4148)))) ||
                ((double)local_4138._8_8_ < pdVar14[5])))) goto LAB_149b772b5;
LAB_149b77572:
            iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
            pFVar15 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar9 * 0x78),(FPCGTaggedData *)pFVar18);
            FPCGDataPtrWrapper::operator=(&pFVar15->Data,(UPCGData *)FVar19.Handle);
            TVar12 = local_4258;
          }
          pFVar17 = local_4260;
          if (local_4078.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_4078.AllocatorInstance.SecondaryData);
            pFVar17 = local_4260;
          }
        }
      }
    }
    else if ((UPCGBasePointData *)local_4240.Handle != (UPCGBasePointData *)0x0) {
      UE::GC::MarkAsReachable(local_4240.Handle);
      goto LAB_149b77136;
    }
    pFVar18 = pFVar18 + 0xf;
  }
LAB_149b77613:
  if (cVar8 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88b00

EPCGElementExecutionLoopMode __thiscall
FPCGCullPointsOutsideActorBoundsElement::ExecutionLoopMode
          (FPCGCullPointsOutsideActorBoundsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// GetDependenciesCrc @ 149b8eac0

void __thiscall
FPCGCullPointsOutsideActorBoundsElement::GetDependenciesCrc
          (FPCGCullPointsOutsideActorBoundsElement *this,FPCGGetDependenciesCrcParams *param_1,
          FPCGCrc *param_2)

{
  longlong *plVar1;
  UPCGData *this_00;
  FPCGCrc FVar2;
  FPCGCrc local_res10;
  undefined1 local_res18 [16];
  
  local_res10.Value = 0;
  local_res10._4_4_ = local_res10._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res10);
  if (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) {
    plVar1 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
    this_00 = (UPCGData *)(**(code **)(*plVar1 + 8))(plVar1);
    if (this_00 != (UPCGData *)0x0) {
      FVar2 = UPCGData::GetOrComputeCrc(this_00,SUB81(local_res18,0));
      local_res10.Value =
           local_res10.Value ^
           *(int *)FVar2 + local_res10.Value * 0x40 + (local_res10.Value >> 2) + -0x61c88647;
    }
  }
  FVar2.bValid = local_res10.bValid;
  FVar2._5_3_ = local_res10._5_3_;
  FVar2.Value = local_res10.Value;
  *param_2 = FVar2;
  return;
}

// SupportsBasePointDataInputs @ 149b988d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGCullPointsOutsideActorBoundsElement::SupportsBasePointDataInputs
          (FPCGCullPointsOutsideActorBoundsElement *this,FPCGContext *param_1)

{
  return true;
}

