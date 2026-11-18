// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// operator() @ 1435ea150

bool __thiscall
`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>::operator()
          (void *this)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  FStandardChartPacker *this_00;
  TAtomic<bool> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)((longlong)this + 0x20);
  plVar3 = *(longlong **)((longlong)this + 8);
  this_00 = *(FStandardChartPacker **)this;
  pTVar4 = *(TAtomic<bool> **)((longlong)this + 0x10);
  uVar9 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  lVar5 = *plVar3;
  plVar3 = *(longlong **)((longlong)this + 8);
  dVar1 = *(double *)((longlong)this + 0x18);
  uVar9 = *(uint *)((longlong)this + 0x20);
  uVar10 = 0;
  if ((int)uVar9 < (int)plVar3[1]) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  bVar7 = UE::InternalUVPacking::FStandardChartPacker::PackCharts
                    (this_00,(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *
                             )(*plVar3 + (longlong)(int)uVar9 * 0x28),dVar1,
                     (double *)(lVar5 + (longlong)(int)uVar2 * 0x28 + 0x20),pTVar4);
  return bVar7;
}

// FindBestPacking @ 1435fb1b0

bool __thiscall
UE::InternalUVPacking::FStandardChartPacker::FindBestPacking
          (FStandardChartPacker *this,
          TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  int iVar4;
  FUVIsland *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  longlong lVar11;
  double dVar12;
  double _X;
  ForAnyElementType FVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  TFuture<bool> *pTVar18;
  TFuture<bool> *pTVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong lVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  TAtomic<bool> local_res18 [8];
  char local_res20;
  undefined1 local_178;
  undefined1 local_177 [7];
  TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> local_170;
  TArray<_public:_bool___cdecl_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&)_::_2_::FThreadContext,TSizedDefaultAllocator<32>_>
  local_160;
  longlong local_150;
  double local_148;
  double local_140;
  <lambda_1> local_138;
  undefined1 local_110 [24];
  TUniqueFunction<void___cdecl(void)> local_f8 [2];
  
  bVar27 = CpuChannel->Enabled < 0;
  if (bVar27) {
    local_res20 = '\0';
  }
  else {
    local_res20 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId105,"StandardChartPacker_FindBestPacking",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVPacking.cpp"
               ,0x69);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId105);
  }
  cVar15 = !bVar27;
  if ((uint)param_1->ArrayNum <= this->TextureResolution * this->TextureResolution) {
    this->TotalUVArea = 0.0;
    iVar16 = param_1->ArrayNum;
    pFVar21 = (param_1->AllocatorInstance).Data;
    pFVar20 = pFVar21 + (longlong)iVar16 * 0xb8;
    while( true ) {
      if (param_1->ArrayNum != iVar16) {
        local_178 = 0;
        `TCheckedPointerIterator<UE::InternalUVPacking::FUVIsland,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_178);
      }
      if (pFVar21 == pFVar20) break;
      pFVar25 = pFVar21 + 0x40;
      pFVar1 = pFVar21 + 0x38;
      pFVar2 = pFVar21 + 0x40;
      pFVar21 = pFVar21 + 0xb8;
      this->TotalUVArea =
           *(double *)pFVar25 * *(double *)pFVar1 * *(double *)pFVar2 + this->TotalUVArea;
    }
    if (0.0 < this->TotalUVArea) {
      pFVar20 = (param_1->AllocatorInstance).Data;
      iVar16 = param_1->ArrayNum;
      pFVar21 = pFVar20 + 0x88;
      pFVar25 = pFVar20 + (longlong)iVar16 * 0xb8;
      while( true ) {
        if (param_1->ArrayNum != iVar16) {
          local_177[0] = 0;
          `TCheckedPointerIterator<UE::InternalUVPacking::FUVIsland,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_177);
        }
        _X = __real_3fe0000000000000;
        dVar12 = __real_3ff0000000000000;
        if (pFVar20 == pFVar25) break;
        pFVar20 = pFVar20 + 0xb8;
        ((TVector2<double>_u_0 *)(pFVar21 + 0x20))->_s_0 =
             (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        ((TVector2<double>_u_0 *)(pFVar21 + -0x40))->_s_0 =
             (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        *(undefined8 *)(pFVar21 + -0x10) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar21 + -8) = 0;
        *(undefined8 *)pFVar21 = 0;
        *(undefined8 *)(pFVar21 + 8) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar21 + -0x30) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar21 + -0x28) = 0;
        *(undefined8 *)(pFVar21 + -0x20) = 0;
        *(undefined8 *)(pFVar21 + -0x18) = 0x3ff0000000000000;
        ((TVector2<double>_u_0 *)(pFVar21 + 0x10))->_s_0 =
             (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        pFVar21 = pFVar21 + 0xb8;
      }
      dVar10 = __real_3ff0000000000000 / this->TotalUVArea;
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.ArrayNum = 0;
      local_170.ArrayMax = 0;
      local_res18[0] = (TAtomic<bool>)0x0;
      local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 0;
      dVar28 = (double)this->TextureResolution;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar10;
      auVar31 = sqrtpd(unaff_XMM10,auVar31);
      auVar32._8_8_ = auVar31._8_8_;
      auVar32._0_8_ = auVar31._0_8_ * dVar28;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar10 * __real_3fe0000000000000;
      auVar31 = sqrtpd(unaff_XMM9,auVar9);
      auVar30._8_8_ = auVar31._8_8_;
      auVar30._0_8_ = auVar31._0_8_ * dVar28;
      if ((99999 < param_1->ArrayNum) && (999 < this->TextureResolution)) {
        iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,3,&local_160.AllocatorInstance,&local_160.ArrayNum,
                            &local_160.ArrayMax);
        DefaultConstructItems<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l2::FThreadContext,int>
                  (local_160.AllocatorInstance.Data + (longlong)iVar16 * 0x28,3);
      }
      local_148 = 0.0;
      while (cVar15 = local_res20, dVar10 = __real_4059000000000000,
            uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            local_res18[0] == (TAtomic<bool>)0x0) {
        uVar26 = 0;
        local_150 = 0;
        if (0 < local_160.ArrayNum) {
          lVar24 = 0;
          do {
            lVar23 = local_150;
            uVar17 = 0;
            if ((int)uVar26 < local_160.ArrayNum) {
              uVar17 = ~uVar26 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            pTVar22 = (TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *)
                      (local_160.AllocatorInstance.Data + lVar24);
            if (pTVar22 != param_1) {
              DestructItems<UE::InternalUVPacking::FUVIsland,int>
                        ((FUVIsland *)(pTVar22->AllocatorInstance).Data,pTVar22->ArrayNum);
              iVar16 = param_1->ArrayNum;
              piVar3 = &pTVar22->ArrayMax;
              pFVar5 = (FUVIsland *)(param_1->AllocatorInstance).Data;
              pTVar22->ArrayNum = iVar16;
              if ((iVar16 == 0) && (*piVar3 == 0)) {
                *piVar3 = 0;
                lVar23 = local_150;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xb8,8,iVar16,*piVar3,(ForAnyElementType *)pTVar22,iVar16,piVar3);
                ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
                          ((pTVar22->AllocatorInstance).Data,pFVar5,iVar16);
                lVar23 = local_150;
              }
            }
            local_138.ThreadContexts = &local_160;
            local_138.bAbort = local_res18;
            local_f8[0]._0_8_ = 0;
            local_f8[0]._40_8_ = 0;
            local_138.__this = this;
            local_138.ThreadUVScale = pow(_X,(double)(int)(uVar26 + 1));
            local_138.ThreadUVScale = local_138.ThreadUVScale * auVar30._0_8_;
            local_138.Index = uVar26;
            pTVar18 = Async<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l24::<lambda_1>_>
                                ((TFuture<bool> *)local_110,ThreadPool,&local_138,local_f8);
            uVar17 = 0;
            if ((int)uVar26 < local_160.ArrayNum) {
              uVar17 = ~uVar26 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            pTVar19 = (TFuture<bool> *)(local_160.AllocatorInstance.Data + lVar24 + 0x10);
            if (pTVar19 != pTVar18) {
              *(undefined8 *)pTVar19 = *(undefined8 *)pTVar18;
              *(undefined8 *)pTVar18 = 0;
              plVar6 = *(longlong **)&pTVar18->field_0x8;
              plVar7 = *(longlong **)&pTVar19->field_0x8;
              if (plVar6 != plVar7) {
                *(undefined8 *)&pTVar18->field_0x8 = 0;
                *(longlong **)&pTVar19->field_0x8 = plVar6;
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar7 + 1;
                  lVar11 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar7 + 0xc);
                    iVar16 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar16 == 1) {
                      (**(code **)(*plVar7 + 8))(plVar7,1);
                    }
                  }
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_110._8_8_);
            local_150 = lVar23 + 1;
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + 0x28;
          } while ((int)uVar26 < local_160.ArrayNum);
        }
        cVar15 = PackCharts(this,param_1,auVar30._0_8_,&local_148,local_res18);
        local_150 = 0;
        if (0 < local_160.ArrayNum + 1) {
          lVar24 = -0x28;
          auVar31 = auVar30;
          uVar26 = 0xffffffff;
          do {
            lVar23 = local_150;
            if (local_150 != 0) {
              uVar17 = 0;
              if ((int)uVar26 < local_160.ArrayNum) {
                uVar17 = ~uVar26 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              FVar13.Data = local_160.AllocatorInstance.Data;
              if (*(longlong *)(local_160.AllocatorInstance.Data + lVar24 + 0x10) == 0) {
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("State.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                    ,0x155,L"");
                if (bVar27) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                if ((*(longlong *)(FVar13.Data + lVar24 + 0x10) == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar27)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
              }
              lVar11 = *(longlong *)(FVar13.Data + lVar24 + 0x10);
              while (*(char *)(lVar11 + 0x68) == '\0') {
                (**(code **)(**(longlong **)(lVar11 + 0x60) + 0x20))
                          (*(longlong **)(lVar11 + 0x60),0xffffffff,0);
              }
              cVar15 = *(char *)(lVar11 + 0x70);
            }
            if ((cVar15 != '\0') && (local_res18[0] == (TAtomic<bool>)0x0)) {
              LOCK();
              local_res18[0] = (TAtomic<bool>)0x1;
              UNLOCK();
              if (0 < lVar23) {
                uVar17 = 0;
                if ((int)uVar26 < local_160.ArrayNum) {
                  uVar17 = ~uVar26 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                pTVar22 = (TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *)
                          (local_160.AllocatorInstance.Data + lVar24);
                if (param_1 != pTVar22) {
                  DestructItems<UE::InternalUVPacking::FUVIsland,int>
                            ((FUVIsland *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
                  iVar16 = pTVar22->ArrayNum;
                  piVar3 = &param_1->ArrayMax;
                  pFVar5 = (FUVIsland *)(pTVar22->AllocatorInstance).Data;
                  param_1->ArrayNum = iVar16;
                  if ((iVar16 == 0) && (*piVar3 == 0)) {
                    *piVar3 = 0;
                    lVar23 = local_150;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xb8,8,iVar16,*piVar3,&param_1->AllocatorInstance,iVar16,piVar3);
                    ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
                              ((param_1->AllocatorInstance).Data,pFVar5,iVar16);
                    lVar23 = local_150;
                  }
                }
                uVar17 = 0;
                if ((int)uVar26 < local_160.ArrayNum) {
                  uVar17 = ~uVar26 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                local_148 = *(double *)(local_160.AllocatorInstance.Data + lVar24 + 0x20);
              }
              if (&local_170 != param_1) {
                DestructItems<UE::InternalUVPacking::FUVIsland,int>
                          ((FUVIsland *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
                iVar16 = param_1->ArrayNum;
                pFVar5 = (FUVIsland *)(param_1->AllocatorInstance).Data;
                local_170.ArrayNum = iVar16;
                if ((iVar16 == 0) && (local_170.ArrayMax == 0)) {
                  local_170.ArrayNum = 0;
                  local_170.ArrayMax = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xb8,8,iVar16,local_170.ArrayMax,&local_170.AllocatorInstance,iVar16,
                             &local_170.ArrayMax);
                  ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
                            (local_170.AllocatorInstance.Data,pFVar5,iVar16);
                }
              }
            }
            auVar30 = auVar31;
            if (local_res18[0] == (TAtomic<bool>)0x0) {
              auVar30._8_8_ = auVar31._8_8_;
              auVar30._0_8_ = auVar31._0_8_ * _X;
              auVar32 = auVar31;
            }
            local_150 = lVar23 + 1;
            lVar24 = lVar24 + 0x28;
            iVar16 = uVar26 + 2;
            auVar31 = auVar30;
            uVar26 = uVar26 + 1;
          } while (iVar16 < local_160.ArrayNum + 1);
        }
      }
      LOCK();
      local_res18[0] = (TAtomic<bool>)0x0;
      UNLOCK();
      iVar16 = 0;
      do {
        local_140 = 0.0;
        dVar28 = (auVar30._0_8_ + auVar32._0_8_) * _X;
        bVar27 = PackCharts(this,param_1,dVar28,&local_140,local_res18);
        if (bVar27) {
          if (&local_170 != param_1) {
            DestructItems<UE::InternalUVPacking::FUVIsland,int>
                      ((FUVIsland *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
            iVar4 = param_1->ArrayNum;
            pFVar5 = (FUVIsland *)(param_1->AllocatorInstance).Data;
            local_170.ArrayNum = iVar4;
            if ((iVar4 == 0) && (local_170.ArrayMax == 0)) {
              local_170.ArrayNum = 0;
              local_170.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xb8,8,iVar4,local_170.ArrayMax,&local_170.AllocatorInstance,iVar4,
                         &local_170.ArrayMax);
              ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
                        (local_170.AllocatorInstance.Data,pFVar5,iVar4);
            }
          }
          dVar29 = local_140 - local_148;
          local_148 = local_140;
          if ((double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar17,SUB84(dVar29,0) & uVar26)
              * dVar10 <= dVar12) break;
          auVar30._0_8_ = dVar28;
        }
        else {
          auVar32._8_4_ = auVar30._8_4_;
          auVar32._0_8_ = dVar28;
          auVar32._12_4_ = auVar30._12_4_;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 6);
      if (param_1 != &local_170) {
        DestructItems<UE::InternalUVPacking::FUVIsland,int>
                  ((FUVIsland *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
        FVar13.Data = local_170.AllocatorInstance.Data;
        iVar16 = local_170.ArrayNum;
        piVar3 = &param_1->ArrayMax;
        param_1->ArrayNum = local_170.ArrayNum;
        if ((local_170.ArrayNum == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb8,8,local_170.ArrayNum,*piVar3,&param_1->AllocatorInstance,
                     local_170.ArrayNum,piVar3);
          ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
                    ((param_1->AllocatorInstance).Data,(FUVIsland *)FVar13.Data,iVar16);
        }
      }
      bVar27 = true;
      DestructItems<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l2::FThreadContext,int>
                ((FThreadContext *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
      if ((FThreadContext *)local_160.AllocatorInstance.Data != (FThreadContext *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      DestructItems<UE::InternalUVPacking::FUVIsland,int>
                ((FUVIsland *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if ((FUVIsland *)local_170.AllocatorInstance.Data != (FUVIsland *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      goto LAB_1435fbbe2;
    }
  }
  bVar27 = false;
LAB_1435fbbe2:
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar27;
}

// OrientChart @ 143611140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::InternalUVPacking::FStandardChartPacker::OrientChart
          (FStandardChartPacker *this,FUVIsland *param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  dVar3 = (param_1->UVScale).field0_0x0._s_0.X;
  dVar1 = (param_1->UVScale).field0_0x0._s_0.Y;
  (param_1->PackingBias).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (param_1->UVPackingScale).Row0.field0_0x0._s_0.X = dVar3;
  (param_1->UVPackingScale).Row0.field0_0x0._s_0.Y = 0.0;
  (param_1->UVPackingScale).Row1.field0_0x0._s_0.X = 0.0;
  (param_1->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar1;
  switch(param_2) {
  case 0:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 1.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 1.0;
    uVar4 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar5 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar6 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&(param_1->OrientationBiasShift).field0_0x0 =
         *(uint *)&(param_1->MinUV).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 4) = uVar4;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 8) = uVar5;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 0xc) = uVar6;
    return;
  case 1:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = -1.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 1.0;
    break;
  case 2:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = -1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 0.0;
    break;
  case 3:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 0.0;
    uVar4 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar5 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar6 = *(uint *)((longlong)&(param_1->MinUV).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&(param_1->OrientationBiasShift).field0_0x0 =
         *(uint *)&(param_1->MinUV).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 4) = uVar4;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 8) = uVar5;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 0xc) = uVar6;
    return;
  case 4:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = -1.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = -1.0;
    uVar4 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar5 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar6 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&(param_1->OrientationBiasShift).field0_0x0 =
         *(uint *)&(param_1->MaxUV).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 4) = uVar4;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 8) = uVar5;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 0xc) = uVar6;
    return;
  case 5:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 1.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = -1.0;
    uVar7 = *(undefined8 *)((longlong)&(param_1->MaxUV).field0_0x0 + 8);
    uVar2 = *(undefined8 *)&(param_1->MinUV).field0_0x0;
    uVar4 = (uint)uVar2;
    uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
    goto LAB_1436111f0;
  case 6:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = -1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = 1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 0.0;
    uVar7 = *(undefined8 *)((longlong)&(param_1->MaxUV).field0_0x0 + 8);
    uVar2 = *(undefined8 *)&(param_1->MinUV).field0_0x0;
    uVar4 = (uint)uVar2;
    uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
    goto LAB_1436111f0;
  case 7:
    (param_1->UVRotation).Row0.field0_0x0._s_0.X = 0.0;
    (param_1->UVRotation).Row0.field0_0x0._s_0.Y = -1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.X = -1.0;
    (param_1->UVRotation).Row1.field0_0x0._s_0.Y = 0.0;
    uVar4 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar5 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar6 = *(uint *)((longlong)&(param_1->MaxUV).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&(param_1->OrientationBiasShift).field0_0x0 =
         *(uint *)&(param_1->MaxUV).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 4) = uVar4;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 8) = uVar5;
    *(uint *)((longlong)&(param_1->OrientationBiasShift).field0_0x0 + 0xc) = uVar6;
  default:
    return;
  }
  uVar7 = *(undefined8 *)((longlong)&(param_1->MinUV).field0_0x0 + 8);
  uVar2 = *(undefined8 *)&(param_1->MaxUV).field0_0x0;
  uVar4 = (uint)uVar2;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
LAB_1436111f0:
  uVar6 = (uint)uVar7 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)uVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (param_1->OrientationBiasShift).field0_0x0._s_0.X =
       (double)CONCAT44(uVar5 ^ __xmm_80000000000000008000000000000000._4_4_,
                        uVar4 ^ (uint)__xmm_80000000000000008000000000000000);
  (param_1->OrientationBiasShift).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar6);
  return;
}

// PackCharts @ 143611350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::InternalUVPacking::FStandardChartPacker::PackCharts
          (FStandardChartPacker *this,
          TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *param_1,
          double param_2,double *param_3,TAtomic<bool> *param_4)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint *puVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  uint uVar16;
  FRect FVar17;
  undefined4 uVar18;
  TVector2<double> *pTVar19;
  bool bVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  double *pdVar28;
  ulonglong uVar29;
  undefined ***pppuVar30;
  ForElementType<FSetElementId> FVar31;
  uint *puVar32;
  ulonglong uVar33;
  FUVIsland *pFVar34;
  uint uVar35;
  longlong lVar36;
  FScriptContainerElement *pFVar37;
  undefined8 *puVar38;
  longlong lVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  uint *puVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulonglong uVar46;
  bool bVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  undefined1 auStackY_448 [32];
  uint local_414;
  uint local_410;
  undefined1 local_408 [8];
  uint uStack_400;
  uint uStack_3fc;
  undefined1 local_3f8;
  undefined1 local_3f7 [3];
  uint local_3f4;
  int local_3f0;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  int local_3e0;
  uint local_3dc;
  int local_3d8;
  FStandardChartPacker *local_3d0;
  ulonglong local_3c8;
  FUVSpaceAllocator local_3b8;
  FUVSpaceAllocator local_348;
  double *local_2d8;
  TPairInitializer<FMD5Hash_const_&,UE::Math::TVector2<double>_&&> local_2d0;
  TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *local_2c0;
  double local_2b8;
  double local_2b0;
  char *local_2a8;
  double *local_2a0;
  FRect local_298;
  FUVSpaceAllocator local_288;
  FRect local_218;
  FRect local_208;
  char local_1f8;
  uint local_1f7;
  uint uStack_1f3;
  uint local_1ef;
  uint uStack_1eb;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  ulonglong *local_1b0;
  undefined ***local_1a0;
  TSet<TTuple<FMD5Hash,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FMD5Hash,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  local_198;
  FMD5 local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar47 = -1 < CpuChannel->Enabled;
  local_3d0 = this;
  local_2d8 = param_3;
  local_2c0 = param_1;
  if (bVar47) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId410,"StandardChartPacker_PackCharts",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVPacking.cpp"
               ,0x19a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
  }
  ScaleCharts(this,param_1,param_2);
  UE::Geometry::FUVSpaceAllocator::FUVSpaceAllocator
            (&local_288,UsedSegments,this->TextureResolution,this->TextureResolution);
  UE::Geometry::FUVSpaceAllocator::FUVSpaceAllocator
            (&local_348,UsedSegments,this->TextureResolution,this->TextureResolution);
  UE::Geometry::FUVSpaceAllocator::FUVSpaceAllocator
            (&local_3b8,FreeSegments,this->TextureResolution,this->TextureResolution);
  uVar33 = 0;
  *param_3 = 0.0;
  UE::Geometry::FUVSpaceAllocator::InitRuns
            (&local_3b8,&local_3b8.Rows,local_3b8.Width,local_3b8.RasterHeight);
  UE::Geometry::FUVSpaceAllocator::InitRuns
            (&local_3b8,&local_3b8.Columns,local_3b8.Height,local_3b8.RasterWidth);
  memset(local_3b8.Bits.AllocatorInstance.Data,0,
         (ulonglong)(local_3b8.Pitch * local_3b8.RasterHeight * 8));
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar45 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar15 = __real_3fe0000000000000;
  fVar14 = __real_3f800000;
  local_3b8.RasterWidth = 0;
  local_3b8.RasterHeight = 0;
  local_198.Elements._0_8_ = 0;
  local_198.Elements._8_8_ = 0;
  local_198.Elements._32_8_ = 0;
  local_198.Elements._40_4_ = 0;
  local_198.Elements._44_4_ = 0x80;
  local_198.Elements._48_4_ = 0xffffffff;
  local_198.Elements._52_4_ = 0;
  local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_198.HashSize = 0;
  local_3e4 = 0;
  if (0 < param_1->ArrayNum) {
    local_3c8 = 0;
    uVar46 = uVar33;
    while (*param_4 == (TAtomic<bool>)0x0) {
      local_3e0 = 0;
      do {
        uVar44 = (uint)uVar33;
        if (param_1->ArrayNum <= (int)uVar44) goto LAB_143611df8;
        if (*param_4 != (TAtomic<bool>)0x0) break;
        uVar23 = 0;
        if ((int)uVar44 < param_1->ArrayNum) {
          uVar23 = ~uVar44 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          uVar21 = (*pcVar10)();
          return (bool)uVar21;
        }
        local_1d8 = 0xffffffffffffffff;
        pFVar34 = (FUVIsland *)((param_1->AllocatorInstance).Data + uVar46 * 0xb8);
        uVar44 = 0xffffffff;
        local_1b8 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::`6'::<lambda_1>,0,0>
                     ::_vftable_;
        local_1b0 = &local_1d8;
        local_1c8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,bool,UE::Geometry::FUVSpaceAllocator::FRect_const_&>
                       ::Call;
        local_3f4 = 8;
        if (this->bPreserveRotation != false) {
          local_3f4 = 1;
        }
        local_410 = 0xffffffff;
        uStack_1d0._0_4_ = 0xffffffff;
        uStack_1d0._4_4_ = 0xffffffff;
        local_1a0 = (undefined ***)0x0;
        local_3d8 = 2 - (uint)(this->bAllowFlips != false);
        local_414 = 0;
        local_2d0.Value = (TVector2<double> *)pFVar34;
        do {
          OrientChart(this,pFVar34,local_414);
          dVar49 = (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.Y;
          dVar4 = (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.Y;
          uVar23 = this->TextureResolution;
          local_208.X = 0;
          local_208.Y = 0;
          dVar5 = (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.X;
          dVar12 = (pFVar34->MaxUV).field0_0x0._s_0.X - (pFVar34->MinUV).field0_0x0._s_0.X;
          dVar11 = (pFVar34->MaxUV).field0_0x0._s_0.Y - (pFVar34->MinUV).field0_0x0._s_0.Y;
          dVar6 = (pFVar34->UVRotation).Row1.field0_0x0._s_0.X;
          dVar7 = (pFVar34->UVRotation).Row1.field0_0x0._s_0.Y;
          dVar50 = (dVar49 * (pFVar34->UVRotation).Row0.field0_0x0._s_0.Y +
                   dVar4 * (pFVar34->UVRotation).Row0.field0_0x0._s_0.X) * dVar11 +
                   (dVar5 * (pFVar34->UVRotation).Row0.field0_0x0._s_0.Y +
                   (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.X *
                   (pFVar34->UVRotation).Row0.field0_0x0._s_0.X) * dVar12;
          fVar48 = (float)(double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar16,
                                           SUB84(dVar50,0) & uVar45) + fVar14;
          local_208.W = -((int)ROUND(__real_bf000000 - (fVar48 + fVar48)) >> 1);
          dVar49 = (dVar7 * dVar49 + dVar6 * dVar4) * dVar11 +
                   (dVar7 * dVar5 + dVar6 * (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.X) *
                   dVar12;
          fVar48 = (float)(double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar16,
                                           SUB84(dVar49,0) & uVar45) + fVar14;
          local_208.H = -((int)ROUND(__real_bf000000 - (fVar48 + fVar48)) >> 1);
          if (uVar23 < local_208.W) {
            local_208.W = uVar23;
          }
          if (uVar23 < local_208.H) {
            local_208.H = uVar23;
          }
          uVar23 = local_414 & 0x80000003;
          if ((int)uVar23 < 0) {
            uVar23 = (uVar23 - 1 | 0xfffffffc) + 1;
          }
          if (uVar23 == 1) {
            UE::Geometry::FUVSpaceAllocator::FlipX(&local_348,&local_208);
          }
          else if (uVar23 == 3) {
            UE::Geometry::FUVSpaceAllocator::FlipY(&local_348,&local_208);
          }
          else {
            RasterizeChart(this,pFVar34,local_208.W,local_208.H,&local_348);
          }
          local_218.W = local_348.RasterWidth;
          local_218.X = local_208.X;
          local_218.Y = local_208.Y;
          local_218.H = local_348.RasterHeight;
          if ((local_348.RasterHeight == 0) && (local_348.RasterWidth == 0)) {
            local_208.X = 0;
            local_208.Y = 0;
LAB_143611c6d:
            Core::Private::Function::CheckCallable(local_1c8[0]);
            pcVar10 = local_1c8[0];
            pppuVar30 = &local_1b8;
            if (local_1a0 != (undefined ***)0x0) {
              pppuVar30 = local_1a0;
            }
            uVar27 = (*(code *)(*pppuVar30)[1])();
            cVar22 = (*pcVar10)(uVar27,&local_208);
            uVar33 = local_1d8;
            if (cVar22 != '\0') {
              UE::Geometry::FUVSpaceAllocator::operator=(&local_288,&local_348);
              uVar23 = local_208.X;
              uVar24 = local_208.Y;
              uVar46._0_4_ = local_208.X;
              uVar46._4_4_ = local_208.Y;
              local_1d8._0_4_ = local_208.X;
              local_1d8._4_4_ = local_208.Y;
              uStack_1d0._4_4_ = local_208.H;
              uStack_1d0._0_4_ = local_208.W;
              local_410 = local_414;
              uVar33 = uVar46;
              uVar44 = local_414;
              if ((uVar23 == 0) && (uVar33 = local_1d8, local_1d8 = uVar46, uVar24 == 0)) break;
            }
          }
          else {
            FMD5::FMD5(&local_148);
            uVar46 = CONCAT44(local_348.Rows.AllocatorInstance.Data._4_4_,
                              local_348.Rows.AllocatorInstance.Data._0_4_);
            uVar33 = uVar46 + (ulonglong)local_348.RasterHeight * 0x28;
            if (uVar46 < uVar33) {
              puVar38 = (undefined8 *)(uVar46 + 8);
              lVar36 = ((uVar33 - uVar46) - 1) / 0x28 + 1;
              do {
                local_3f0 = *(int *)(puVar38 + 1);
                FMD5::Update(&local_148,(uchar *)&local_3f0,4);
                FMD5::Update(&local_148,(uchar *)*puVar38,(ulonglong)(uint)(local_3f0 * 8));
                puVar38 = puVar38 + 5;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
            }
            local_1f8 = '\0';
            FMD5::Final(&local_148,(uchar *)&local_1f7);
            local_1f8 = '\x01';
            FMD5::~FMD5(&local_148);
            if (local_198.Elements._8_4_ != local_198.Elements._52_4_) {
              FVar31 = (ForElementType<FSetElementId>)&local_198.Hash;
              if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar31 = local_198.Hash.SecondaryData;
              }
              iVar41 = *(int *)((longlong)FVar31 +
                               (ulonglong)
                               (local_198.HashSize - 1U &
                               (local_1f7 ^ uStack_1f3 ^ local_1ef ^ uStack_1eb)) * 4);
              if (iVar41 != -1) {
                do {
                  pcVar25 = (char *)((longlong)iVar41 * 0x30 + local_198.Elements._0_8_);
                  if ((*pcVar25 == local_1f8) &&
                     ((*pcVar25 == '\0' ||
                      ((*(longlong *)(pcVar25 + 1) == CONCAT44(uStack_1f3,local_1f7) &&
                       (*(longlong *)(pcVar25 + 9) == CONCAT44(uStack_1eb,local_1ef))))))) {
                    if (iVar41 != -1) {
                      pdVar28 = (double *)(pcVar25 + 0x18);
                      if (pcVar25 == (char *)0x0) {
                        pdVar28 = (double *)0x0;
                      }
                      if (pdVar28 != (double *)0x0) {
                        local_218.Y = (int)ROUND((pdVar28[1] + pdVar28[1]) - dVar15) >> 1;
                        local_218.X = (int)ROUND((*pdVar28 + *pdVar28) - dVar15) >> 1;
                      }
                    }
                    break;
                  }
                  iVar41 = *(int *)(pcVar25 + 0x28);
                } while (iVar41 != -1);
              }
            }
            if ((local_1c8[0] == (code *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsBound(InFunc)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                                    ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef")
               , bVar20)) {
              pcVar10 = (code *)swi(3);
              uVar21 = (*pcVar10)();
              return (bool)uVar21;
            }
            _local_408 = local_218;
            local_3ec = local_3b8.Width - local_218.W;
            local_3e8 = local_3b8.Height - local_218.H;
            uVar33 = local_1d8;
            if (local_218.W < local_218.H) {
              if (local_218.X <= local_3ec) {
LAB_143611a60:
                uVar23 = 0;
                local_408._4_4_ = 0;
LAB_143611a70:
                uVar46 = 0;
                bVar20 = Core::Private::Function::
                         TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::FUVSpaceAllocator::FRect_const_&)>,bool,UE::Geometry::FUVSpaceAllocator::FRect_const_&>
                         ::Call(local_1c8,&local_218);
                uVar33 = local_1d8;
                uVar44 = local_410;
                if (!bVar20) goto LAB_143611b95;
                if (local_348.RasterWidth != 0) {
                  while( true ) {
                    uVar29 = (ulonglong)
                             *(ushort *)
                              (local_348.SortedColumnsIndex.AllocatorInstance.Data + uVar46 * 2);
                    uVar26 = (ulonglong)
                             (local_408._0_4_ +
                             (uint)*(ushort *)
                                    (local_348.SortedColumnsIndex.AllocatorInstance.Data +
                                    uVar46 * 2));
                    uVar44 = local_3b8.Height;
                    if (*(uint *)&local_3b8.Columns.AllocatorInstance.Data[uVar26 * 0x28].field_0x0
                        < *(uint *)&local_348.Columns.AllocatorInstance.Data[uVar29 * 0x28].
                                    field_0x0) break;
                    puVar9 = *(uint **)(local_3b8.Columns.AllocatorInstance.Data + uVar26 * 0x28 + 8
                                       );
                    if (*(int *)(local_3b8.Columns.AllocatorInstance.Data + uVar26 * 0x28 + 0x10) <
                        0x11) {
                      lVar36 = 0;
                    }
                    else {
                      lVar36 = *(longlong *)
                                (local_3b8.Columns.AllocatorInstance.Data + uVar26 * 0x28 + 0x18);
                    }
                    puVar42 = *(uint **)(local_348.Columns.AllocatorInstance.Data +
                                        uVar29 * 0x28 + 8);
                    puVar1 = puVar42 + (longlong)
                                       *(int *)(local_348.Columns.AllocatorInstance.Data +
                                               uVar29 * 0x28 + 0x10) * 2;
                    for (; puVar42 < puVar1; puVar42 = puVar42 + 2) {
                      uVar24 = *puVar42;
                      if (uStack_3fc <= uVar24) break;
                      local_3dc = puVar42[1];
                      uVar35 = uVar23 + uVar24;
                      uVar43 = uStack_3fc;
                      if (uVar24 + local_3dc < uStack_3fc) {
                        uVar43 = uVar24 + local_3dc;
                      }
                      puVar32 = puVar9;
                      if (lVar36 != 0) {
                        puVar32 = puVar9 + (ulonglong)*(ushort *)(lVar36 + (ulonglong)uVar35 * 2) *
                                           2;
                      }
                      while( true ) {
                        if (puVar9 + (longlong)
                                     *(int *)(local_3b8.Columns.AllocatorInstance.Data +
                                             uVar26 * 0x28 + 0x10) * 2 <= puVar32)
                        goto LAB_143611b63;
                        if (uVar35 < *puVar32) goto LAB_143611e17;
                        if (uVar43 + uVar23 <= *puVar32 + puVar32[1]) break;
                        puVar32 = puVar32 + 2;
                      }
                    }
                    uVar44 = (int)uVar46 + 1;
                    uVar46 = (ulonglong)uVar44;
                    if (local_348.RasterWidth <= uVar44) goto LAB_143611bdc;
                  }
                  goto LAB_143611b63;
                }
LAB_143611bdc:
                local_218 = _local_408;
                local_2b8 = (double)(uint)local_408._0_4_;
                local_2b0 = (double)(local_408 >> 0x20);
                local_2a8 = &local_1f8;
                local_2a0 = &local_2b8;
                TSet<TTuple<FMD5Hash,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FMD5Hash,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FMD5Hash_const_&,UE::Math::TVector2<double>_&&>_>
                          (&local_198,&local_2d0,(bool *)&local_2a8);
                local_208._0_8_ = local_218._0_8_;
                uVar44 = local_410;
                goto LAB_143611c6d;
              }
            }
            else if (local_218.Y <= local_3e8) {
LAB_143611e50:
              uVar23 = 0;
              auVar13._12_4_ = 0;
              auVar13._0_12_ = stack0xfffffffffffffbfc;
              _local_408 = (FRect)(auVar13 << 0x20);
LAB_143611e60:
              FVar17 = _local_408;
              uVar46 = 0;
              bVar20 = Core::Private::Function::
                       TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::FUVSpaceAllocator::FRect_const_&)>,bool,UE::Geometry::FUVSpaceAllocator::FRect_const_&>
                       ::Call(local_1c8,&local_218);
              uVar33 = local_1d8;
              uVar44 = local_410;
              if (bVar20) {
                if (local_348.RasterHeight != 0) {
                  while( true ) {
                    lVar39 = CONCAT44(local_348.Rows.AllocatorInstance.Data._4_4_,
                                      local_348.Rows.AllocatorInstance.Data._0_4_);
                    lVar36 = 0;
                    uVar18 = local_408._4_4_;
                    uVar29 = (ulonglong)
                             *(ushort *)
                              (local_348.SortedRowsIndex.AllocatorInstance.Data + uVar46 * 2);
                    uVar26 = (ulonglong)
                             (local_408._4_4_ +
                             (uint)*(ushort *)
                                    (local_348.SortedRowsIndex.AllocatorInstance.Data + uVar46 * 2))
                    ;
                    uVar44 = local_3b8.Width;
                    if (*(uint *)&local_3b8.Rows.AllocatorInstance.Data[uVar26 * 0x28].field_0x0 <
                        *(uint *)(lVar39 + uVar29 * 0x28)) break;
                    puVar9 = *(uint **)(local_3b8.Rows.AllocatorInstance.Data + uVar26 * 0x28 + 8);
                    if (0x10 < *(int *)(local_3b8.Rows.AllocatorInstance.Data + uVar26 * 0x28 + 0x10
                                       )) {
                      lVar36 = *(longlong *)
                                (local_3b8.Rows.AllocatorInstance.Data + uVar26 * 0x28 + 0x18);
                    }
                    puVar42 = *(uint **)(lVar39 + 8 + uVar29 * 0x28);
                    puVar1 = puVar42 + (longlong)*(int *)(lVar39 + 0x10 + uVar29 * 0x28) * 2;
                    for (; puVar42 < puVar1; puVar42 = puVar42 + 2) {
                      uVar24 = *puVar42;
                      if (uStack_400 <= uVar24) break;
                      uVar23 = uVar24 + uVar23;
                      uVar24 = uVar24 + puVar42[1];
                      uVar43 = uStack_400;
                      if (uVar24 < uStack_400) {
                        uVar43 = uVar24;
                      }
                      puVar32 = puVar9;
                      if (lVar36 != 0) {
                        puVar32 = puVar9 + (ulonglong)*(ushort *)(lVar36 + (ulonglong)uVar23 * 2) *
                                           2;
                      }
                      while( true ) {
                        if (puVar9 + (longlong)
                                     *(int *)(local_3b8.Rows.AllocatorInstance.Data +
                                             uVar26 * 0x28 + 0x10) * 2 <= puVar32)
                        goto LAB_143611f52;
                        if (uVar23 < *puVar32) goto LAB_143611fb0;
                        if (uVar43 + local_408._0_4_ <= *puVar32 + puVar32[1]) break;
                        puVar32 = puVar32 + 2;
                      }
                      uVar23 = local_408._0_4_;
                    }
                    uVar44 = (int)uVar46 + 1;
                    uVar46 = (ulonglong)uVar44;
                    if (local_348.RasterHeight <= uVar44) goto LAB_143611bdc;
                  }
                  goto LAB_143611f52;
                }
                goto LAB_143611bdc;
              }
            }
          }
LAB_143611b95:
          local_1d8 = uVar33;
          local_414 = local_414 + local_3d8;
          this = local_3d0;
        } while ((int)local_414 < (int)local_3f4);
        pTVar19 = local_2d0.Value;
        if ((int)uVar44 < 0) {
          if (local_1c8[0] == (code *)0x0) goto LAB_143611e0b;
          pppuVar30 = &local_1b8;
          if (local_1a0 != (undefined ***)0x0) {
            pppuVar30 = local_1a0;
          }
          (*(code *)(*pppuVar30)[2])();
          bVar20 = false;
          goto LAB_1436120bb;
        }
        OrientChart(local_3d0,(FUVIsland *)local_2d0.Value,uVar44);
        local_298.X = (undefined4)local_1d8;
        local_298.Y = local_1d8._4_4_;
        local_298.W = (uint)uStack_1d0;
        local_298.H = uStack_1d0._4_4_;
        UE::Geometry::FUVSpaceAllocator::Alloc(&local_3b8,&local_298,&local_288);
        (((TVector2<double> *)((longlong)pTVar19 + 0xa8))->field0_0x0)._s_0.X =
             (double)(local_1d8 & 0xffffffff) +
             (((TVector2<double> *)((longlong)pTVar19 + 0xa8))->field0_0x0)._s_0.X;
        (((TVector2<double> *)((longlong)pTVar19 + 0xa8))->field0_0x0)._s_0.Y =
             (double)(local_1d8 >> 0x20) +
             (((TVector2<double> *)((longlong)pTVar19 + 0xa8))->field0_0x0)._s_0.Y;
        if (local_1c8[0] != (code *)0x0) {
          pppuVar30 = &local_1b8;
          if (local_1a0 != (undefined ***)0x0) {
            pppuVar30 = local_1a0;
          }
          (*(code *)(*pppuVar30)[2])();
        }
        local_3e4 = local_3e4 + 1;
        uVar33 = (ulonglong)local_3e4;
        uVar46 = local_3c8 + 1;
        local_3e0 = local_3e0 + 1;
        param_1 = local_2c0;
        this = local_3d0;
        local_3c8 = uVar46;
      } while (local_3e0 < 0x400);
      if (param_1->ArrayNum <= (int)uVar33) break;
    }
  }
LAB_143611df8:
  iVar41 = local_3b8.Rows.ArrayNum;
  uVar45 = 0;
  if (*param_4 == (TAtomic<bool>)0x0) {
    uVar33 = (ulonglong)local_3b8.Rows.ArrayNum;
    local_3f4 = this->TextureResolution * this->TextureResolution;
    pFVar37 = local_3b8.Rows.AllocatorInstance.Data + 0x10;
    pFVar2 = local_3b8.Rows.AllocatorInstance.Data + uVar33 * 0x28;
    while( true ) {
      if ((uint)uVar33 != iVar41) {
        `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FRun_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_3f8);
      }
      if (pFVar37 + -0x10 == pFVar2) break;
      pFVar40 = (((TArray<UE::Geometry::FUVSpaceAllocator::FSegment,TSizedDefaultAllocator<32>_> *)
                 (pFVar37 + -8))->AllocatorInstance).Data;
      iVar8 = *(int *)pFVar37;
      pFVar3 = pFVar40 + (longlong)iVar8 * 8;
      while( true ) {
        if (*(int *)pFVar37 != iVar8) {
          `TCheckedPointerIterator<UE::Geometry::FUVSpaceAllocator::FSegment_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_3f7);
        }
        if (pFVar40 == pFVar3) break;
        uVar45 = uVar45 + *(int *)(pFVar40 + 4);
        pFVar40 = pFVar40 + 8;
      }
      uVar33 = (ulonglong)(uint)local_3b8.Rows.ArrayNum;
      pFVar37 = pFVar37 + 0x28;
    }
    if (local_3b8.Mode == FreeSegments) {
      uVar45 = local_3b8.Height * local_3b8.Width - uVar45;
    }
    bVar20 = true;
    *local_2d8 = (double)uVar45 / (double)local_3f4;
  }
  else {
LAB_143611e0b:
    bVar20 = false;
  }
LAB_1436120bb:
  local_198.HashSize = 0;
  if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FMD5Hash,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMD5Hash,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.Elements);
  if (local_3b8.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_3b8.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_3b8.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Bits.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)local_3b8.Columns.AllocatorInstance.Data,local_3b8.Columns.ArrayNum);
  if ((FRun *)local_3b8.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_3b8.Columns.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)local_3b8.Rows.AllocatorInstance.Data,local_3b8.Rows.ArrayNum);
  if ((FRun *)local_3b8.Rows.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_3b8.Rows.AllocatorInstance.Data);
  }
  if (local_348.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_348.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_348.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Bits.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)local_348.Columns.AllocatorInstance.Data,local_348.Columns.ArrayNum);
  if ((FRun *)local_348.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_348.Columns.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)CONCAT44(local_348.Rows.AllocatorInstance.Data._4_4_,
                              local_348.Rows.AllocatorInstance.Data._0_4_),local_348.Rows.ArrayNum);
  if ((void *)CONCAT44(local_348.Rows.AllocatorInstance.Data._4_4_,
                       local_348.Rows.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_348.Rows.AllocatorInstance.Data._4_4_,
                                   local_348.Rows.AllocatorInstance.Data._0_4_));
  }
  if (local_288.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_288.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_288.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Bits.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)local_288.Columns.AllocatorInstance.Data,local_288.Columns.ArrayNum);
  if ((FRun *)local_288.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_288.Columns.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>
            ((FRun *)local_288.Rows.AllocatorInstance.Data,local_288.Rows.ArrayNum);
  if ((FRun *)local_288.Rows.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_288.Rows.AllocatorInstance.Data);
  }
  if (bVar47) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar20;
  while (puVar32 = puVar32 + 2,
        puVar32 < puVar9 + (longlong)
                           *(int *)(local_3b8.Rows.AllocatorInstance.Data + uVar26 * 0x28 + 0x10) *
                           2) {
LAB_143611fb0:
    if (puVar42[1] <= puVar32[1]) {
      uVar44 = *puVar32 - uVar23;
      break;
    }
  }
LAB_143611f52:
  uVar23 = local_408._0_4_ + uVar44;
  local_408._0_4_ = uVar23;
  if (local_3ec < uVar23) goto code_r0x000143611f69;
  goto LAB_143611e60;
code_r0x000143611f69:
  _uStack_400 = FVar17._8_8_;
  local_408._4_4_ = uVar18 + 1;
  uVar44 = local_410;
  if (local_3e8 < uVar18 + 1) goto LAB_143611b95;
  goto LAB_143611e50;
  while (puVar32 = puVar32 + 2,
        puVar32 < puVar9 + (longlong)
                           *(int *)(local_3b8.Columns.AllocatorInstance.Data + uVar26 * 0x28 + 0x10)
                           * 2) {
LAB_143611e17:
    if (local_3dc <= puVar32[1]) {
      uVar44 = *puVar32 - uVar35;
      break;
    }
  }
LAB_143611b63:
  uVar23 = uVar23 + uVar44;
  local_408._4_4_ = uVar23;
  if (local_3e8 < uVar23) goto code_r0x000143611b79;
  goto LAB_143611a70;
code_r0x000143611b79:
  uVar23 = local_408._0_4_ + 1;
  local_408._0_4_ = uVar23;
  uVar44 = local_410;
  if (local_3ec < uVar23) goto LAB_143611b95;
  goto LAB_143611a60;
}

// RasterizeChart @ 143615b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::InternalUVPacking::FStandardChartPacker::RasterizeChart
          (FStandardChartPacker *this,FUVIsland *param_1,uint param_2,uint param_3,
          FUVSpaceAllocator *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  TVector2<float>_u_0 TVar14;
  double dVar15;
  float *pfVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  uint local_124;
  int local_120 [4];
  float local_110;
  float fStack_10c;
  undefined1 local_108 [8];
  TVector2<float>_u_0 local_100 [3];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_124 = param_3;
  UE::Geometry::FUVSpaceAllocator::InitRuns
            (param_4,&param_4->Rows,param_4->Width,param_4->RasterHeight);
  UE::Geometry::FUVSpaceAllocator::InitRuns
            (param_4,&param_4->Columns,param_4->Height,param_4->RasterWidth);
  memset((param_4->Bits).AllocatorInstance.Data,0,
         (ulonglong)(param_4->Pitch * param_4->RasterHeight * 8));
  dVar15 = __real_3fe0000000000000;
  param_4->RasterWidth = 0;
  param_4->RasterHeight = 0;
  pFVar18 = (param_1->Triangles).AllocatorInstance.Data;
  iVar12 = (param_1->Triangles).ArrayNum;
  pFVar1 = pFVar18 + (longlong)iVar12 * 4;
  while( true ) {
    if ((param_1->Triangles).ArrayNum != iVar12) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_128);
    }
    if (pFVar18 == pFVar1) break;
    (**(code **)((longlong)*this->Mesh + 0x10))(this->Mesh,local_120,*(undefined4 *)pFVar18);
    if (((-1 < local_120[0]) && (-1 < local_120[1])) && (-1 < local_120[2])) {
      lVar17 = 0;
      do {
        pfVar16 = (float *)(**(code **)((longlong)*this->Mesh + 0x20))
                                     (this->Mesh,local_108,local_120[lVar17]);
        dVar2 = (param_1->UVRotation).Row0.field0_0x0._s_0.Y;
        dVar3 = (param_1->OrientationBiasShift).field0_0x0._s_0.X;
        dVar4 = (param_1->UVPackingScale).Row1.field0_0x0._s_0.X;
        dVar5 = (param_1->UVPackingScale).Row1.field0_0x0._s_0.Y;
        dVar6 = (param_1->UVPackingScale).Row0.field0_0x0._s_0.Y;
        dVar7 = (param_1->UVRotation).Row0.field0_0x0._s_0.X;
        dVar8 = (param_1->UVPackingScale).Row0.field0_0x0._s_0.X;
        dVar9 = (param_1->OrientationBiasShift).field0_0x0._s_0.Y;
        dVar10 = (param_1->UVRotation).Row1.field0_0x0._s_0.X;
        dVar11 = (param_1->UVRotation).Row1.field0_0x0._s_0.Y;
        dVar13 = dVar9 * dVar5 + dVar3 * dVar4;
        dVar3 = dVar9 * dVar6 + dVar3 * dVar8;
        local_110 = (float)((dVar5 * dVar2 + dVar6 * dVar7) * (double)pfVar16[1] +
                            (param_1->PackingBias).field0_0x0._s_0.X +
                            (dVar4 * dVar2 + dVar8 * dVar7) * (double)*pfVar16 +
                           dVar7 * dVar3 + dVar15 + dVar2 * dVar13);
        fStack_10c = (float)((dVar11 * dVar5 + dVar10 * dVar6) * (double)pfVar16[1] +
                             (param_1->PackingBias).field0_0x0._s_0.Y +
                             (dVar11 * dVar4 + dVar10 * dVar8) * (double)*pfVar16 +
                            dVar10 * dVar3 + dVar15 + dVar11 * dVar13);
        TVar14._s_0.Y = fStack_10c;
        TVar14._s_0.X = local_110;
        local_100[lVar17] = TVar14;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 3);
      InternalRasterizeTriangle<16>(param_4,(TVector2<float> *)&local_100[0]._s_0,param_2,local_124)
      ;
    }
    pFVar18 = pFVar18 + 4;
  }
  UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(param_4);
  return;
}

// ScaleCharts @ 143619420

void __thiscall
UE::InternalUVPacking::FStandardChartPacker::ScaleCharts
          (FStandardChartPacker *this,
          TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  FIdentityFunctor local_res10;
  
  iVar13 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < iVar13) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      dVar17 = param_2 * UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
      *(double *)(pFVar2 + lVar15 + 0x48) =
           param_2 * UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X *
           *(double *)(pFVar2 + lVar15 + 0x40);
      *(double *)(pFVar2 + lVar15 + 0x50) = dVar17 * *(double *)(pFVar2 + lVar15 + 0x40);
      lVar15 = lVar15 + 0xb8;
      iVar13 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar13);
  }
  AlgoImpl::
  IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>
            ((FUVIsland *)(param_1->AllocatorInstance).Data,iVar13,local_res10,
             (<lambda_1>)local_res10);
  dVar8 = __real_3ff028f5c0000000;
  dVar7 = __real_3f847ae140000000;
  dVar17 = __real_3ff0000000000000;
  iVar13 = 0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = __real_3ff0000000000000;
  while( true ) {
    iVar11 = param_1->ArrayNum;
    iVar14 = 0;
    uVar12 = 0;
    dVar6 = 0.0;
    if (iVar11 < 1) break;
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < iVar11) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar20 = *(double *)(pFVar2 + lVar15 + 0x28) - *(double *)(pFVar2 + lVar15 + 0x18);
      dVar21 = *(double *)(pFVar2 + lVar15 + 0x30) - *(double *)(pFVar2 + lVar15 + 0x20);
      dVar19 = auVar22._0_8_;
      dVar16 = *(double *)(pFVar2 + lVar15 + 0x50) * dVar21 * dVar19;
      dVar5 = *(double *)(pFVar2 + lVar15 + 0x48) * dVar20 * dVar19;
      dVar18 = (double)this->TextureResolution - dVar17;
      if (dVar16 <= dVar5) {
        dVar16 = dVar5;
      }
      if (dVar16 + dVar7 <= dVar18) {
        dVar18 = *(double *)(pFVar2 + lVar15 + 0x48) * dVar19;
        dVar19 = *(double *)(pFVar2 + lVar15 + 0x50) * dVar19;
      }
      else {
        if (dVar20 <= dVar21) {
          dVar20 = dVar21;
        }
        iVar14 = iVar14 + 1;
        dVar18 = dVar18 / dVar20;
        dVar19 = dVar18;
      }
      *(double *)(pFVar2 + lVar15 + 0x48) = dVar18;
      uVar12 = uVar12 + 1;
      *(double *)(pFVar2 + lVar15 + 0x50) = dVar19;
      lVar1 = lVar15 + 0x38;
      lVar15 = lVar15 + 0xb8;
      iVar11 = param_1->ArrayNum;
      dVar6 = dVar6 + dVar18 * *(double *)(pFVar2 + lVar1) * dVar19;
    } while ((int)uVar12 < iVar11);
    if ((iVar14 == 0) || (iVar14 == iVar11)) break;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = this->TotalUVArea / dVar6;
    auVar22 = sqrtpd(auVar22,auVar4);
    auVar22._0_8_ = auVar22._0_8_ * param_2;
    if ((auVar22._0_8_ < dVar8) || (iVar13 = iVar13 + 1, 999 < iVar13)) break;
  }
  AlgoImpl::
  IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>
            ((FUVIsland *)(param_1->AllocatorInstance).Data,iVar11,local_res10,
             (FCompareCharts)local_res10);
  return;
}

