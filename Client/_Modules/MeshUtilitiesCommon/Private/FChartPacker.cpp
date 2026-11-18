// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 7

// FChartPacker @ 144351830

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

FChartPacker * __thiscall
FLayoutUV::FChartPacker::FChartPacker
          (FChartPacker *this,IMeshView *param_1,ELightmapUVVersion param_2,uint param_3)

{
  this->MeshView = param_1;
  this->LayoutVersion = param_2;
  this->TextureResolution = param_3;
  this->TotalUVArea = 0.0;
  return this;
}

// operator() @ 144352350

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

bool __thiscall
`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>::operator()(void *this)

{
  float fVar1;
  uint uVar2;
  TAtomic<bool> *pTVar3;
  longlong *plVar4;
  FChartPacker *this_00;
  longlong lVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId783,"SearchStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
               ,0x30f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId783);
  }
  pTVar3 = *(TAtomic<bool> **)((longlong)this + 0x20);
  uVar2 = *(uint *)((longlong)this + 0x2c);
  plVar4 = *(longlong **)((longlong)this + 8);
  this_00 = *(FChartPacker **)this;
  uVar11 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  lVar5 = *plVar4;
  plVar4 = *(longlong **)((longlong)this + 8);
  pTVar6 = *(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
  pTVar7 = *(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)
            ((longlong)this + 0x18);
  fVar1 = *(float *)((longlong)this + 0x28);
  uVar11 = *(uint *)((longlong)this + 0x2c);
  uVar12 = 0;
  if ((int)uVar11 < (int)plVar4[1]) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  bVar9 = FLayoutUV::FChartPacker::PackCharts
                    (this_00,(TArray<FMeshChart,TSizedDefaultAllocator<32>_> *)
                             (*plVar4 + (longlong)(int)uVar11 * 0x28),fVar1,pTVar7,pTVar6,
                     (float *)(lVar5 + 0x20 + (longlong)(int)uVar2 * 0x28),pTVar3,false);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// FindBestPacking @ 144354300

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLayoutUV::FChartPacker::FindBestPacking
          (FChartPacker *this,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMeshChart,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  float _X;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  TFuture<bool> *pTVar15;
  TFuture<bool> *pTVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FThreadContext *_Dst;
  longlong lVar21;
  uint uVar22;
  TArray<FMeshChart,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  TAtomic<bool> local_1a8;
  char local_1a7;
  char local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4 [4];
  float local_1a0 [2];
  longlong local_198;
  TArray<_public:_bool___cdecl_FLayoutUV::FChartPacker::FindBestPacking(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshChart,TSizedDefaultAllocator<32>_>_&)_::_2_::FThreadContext,TSizedDefaultAllocator<32>_>
  local_190;
  TArray<FMeshChart,TSizedDefaultAllocator<32>_> local_180;
  longlong local_170;
  float local_168 [2];
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FString local_148;
  FString local_138;
  <lambda_1> local_128;
  undefined1 local_f8 [16];
  TUniqueFunction<void___cdecl(void)> local_e8 [3];
  
  if ((uint)param_3->ArrayNum <= this->TextureResolution * this->TextureResolution) {
    this->TotalUVArea = 0.0;
    iVar14 = param_3->ArrayNum;
    pFVar17 = (param_3->AllocatorInstance).Data;
    pFVar20 = pFVar17 + (longlong)iVar14 * 0x60;
    while( true ) {
      if (param_3->ArrayNum != iVar14) {
        local_1a5 = 0;
        `TCheckedPointerIterator<FMeshChart,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a5);
      }
      if (pFVar17 == pFVar20) break;
      pFVar1 = pFVar17 + 0x24;
      pFVar2 = pFVar17 + 0x18;
      pFVar3 = pFVar17 + 0x28;
      pFVar17 = pFVar17 + 0x60;
      this->TotalUVArea = *(float *)pFVar1 * *(float *)pFVar2 * *(float *)pFVar3 + this->TotalUVArea
      ;
    }
    if (0.0 < this->TotalUVArea) {
      QueryPerformanceCounter(&local_160);
      local_150 = local_160;
      if (CpuChannel->Enabled < 0) {
        local_1a6 = '\0';
      }
      else {
        local_1a6 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId706,"FChartPacker::FindBestPacking",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                   ,0x2c2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId706);
      }
      iVar14 = param_3->ArrayNum;
      pFVar17 = (param_3->AllocatorInstance).Data;
      pFVar20 = pFVar17 + (longlong)iVar14 * 0x60;
      while( true ) {
        if (param_3->ArrayNum != iVar14) {
          local_1a4[0] = 0;
          `TCheckedPointerIterator<FMeshChart,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a4);
        }
        if (pFVar17 == pFVar20) break;
        ((TVector2<float>_u_0 *)(pFVar17 + 0x44))->_s_0 =
             (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ((TVector2<float>_u_0 *)(pFVar17 + 0x34))->_s_0 =
             (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ((TVector2<float>_u_0 *)(pFVar17 + 0x3c))->_s_0 =
             (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ((TVector2<float>_u_0 *)(pFVar17 + 0x1c))->_s_0 =
             (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        pFVar17 = pFVar17 + 0x60;
      }
      FMD5::HashBytes(&local_138,(uchar *)(param_3->AllocatorInstance).Data,
                      (ulonglong)(uint)(param_3->ArrayNum * 0x60));
      _X = __real_3f000000;
      fVar27 = __real_3f800000;
      fVar26 = __real_3f800000 / this->TotalUVArea;
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.ArrayNum = 0;
      local_180.ArrayMax = 0;
      local_1a8 = (TAtomic<bool>)0x0;
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      fVar32 = SQRT(fVar26) * (float)this->TextureResolution;
      fVar26 = SQRT(fVar26 * __real_3f000000) * (float)this->TextureResolution;
      bVar10 = FApp::ShouldUseThreadingForPerformance();
      if (((bVar10) && (99999 < param_3->ArrayNum)) && (999 < this->TextureResolution)) {
        if (local_190.ArrayNum < 3) {
          iVar19 = 3 - local_190.ArrayNum;
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x28,8,iVar19,&local_190.AllocatorInstance,&local_190.ArrayNum,
                              &local_190.ArrayMax);
          DefaultConstructItems<_FLayoutUV::FChartPacker::FindBestPacking_::__l2::FThreadContext,int>
                    (local_190.AllocatorInstance.Data + (longlong)iVar14 * 0x28,iVar19);
        }
        else if (3 < local_190.ArrayNum) {
          iVar14 = local_190.ArrayNum + -3;
          if (iVar14 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
          }
          else if (iVar14 == 0) goto LAB_144354663;
          _Dst = (FThreadContext *)(local_190.AllocatorInstance.Data + 0x78);
          DestructItems<_FLayoutUV::FChartPacker::FindBestPacking_::__l2::FThreadContext,int>
                    (_Dst,iVar14);
          iVar19 = (local_190.ArrayNum - iVar14) + -3;
          if (iVar19 != 0) {
            memmove(_Dst,_Dst + iVar14,(longlong)iVar19 * 0x28);
          }
          iVar14 = local_190.ArrayNum - iVar14;
          local_190.ArrayNum = iVar14;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&local_190.AllocatorInstance,iVar14,&local_190.ArrayMax);
        }
      }
LAB_144354663:
      local_1a0[0] = 0.0;
      if (CpuChannel->Enabled < 0) {
        local_1a7 = '\0';
      }
      else {
        local_1a7 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId769,"LinearSearch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                   ,0x301);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId769);
      }
      while (cVar12 = local_1a6, local_1a8 == (TAtomic<bool>)0x0) {
        local_198 = 0;
        if (0 < local_190.ArrayNum) {
          local_170 = 0;
          uVar24 = 0;
          do {
            lVar21 = local_170;
            lVar18 = local_198;
            uVar22 = 0;
            if ((int)uVar24 < local_190.ArrayNum) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            pTVar23 = (TArray<FMeshChart,TSizedDefaultAllocator<32>_> *)
                      (local_190.AllocatorInstance.Data + lVar21);
            if (pTVar23 != param_3) {
              iVar14 = param_3->ArrayNum;
              piVar4 = &pTVar23->ArrayMax;
              pFVar17 = (param_3->AllocatorInstance).Data;
              pTVar23->ArrayNum = iVar14;
              if ((iVar14 == 0) && (*piVar4 == 0)) {
                *piVar4 = 0;
                lVar18 = local_198;
                lVar21 = local_170;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,4,iVar14,*piVar4,(ForAnyElementType *)pTVar23,iVar14,piVar4);
                lVar18 = local_198;
                lVar21 = local_170;
                if (iVar14 != 0) {
                  memcpy((pTVar23->AllocatorInstance).Data,pFVar17,(longlong)iVar14 * 0x60);
                  lVar18 = local_198;
                  lVar21 = local_170;
                }
              }
            }
            local_e8[0]._0_8_ = 0;
            local_e8[0]._40_8_ = 0;
            local_128.ThreadContexts = &local_190;
            local_128.bAbort = &local_1a8;
            local_170 = CONCAT44(local_170._4_4_,uVar24 + 1);
            local_128.__this = this;
            local_128.SortedTris = param_2;
            local_128.TexCoords = param_1;
            local_128.ThreadUVScale = powf(_X,(float)(int)(uVar24 + 1));
            local_128.ThreadUVScale = local_128.ThreadUVScale * fVar26;
            local_128.Index = uVar24;
            pTVar15 = Async<_FLayoutUV::FChartPacker::FindBestPacking_::__l24::<lambda_1>_>
                                ((TFuture<bool> *)local_f8,ThreadPool,&local_128,local_e8);
            uVar22 = 0;
            if ((int)uVar24 < local_190.ArrayNum) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            pTVar16 = (TFuture<bool> *)(local_190.AllocatorInstance.Data + lVar21 + 0x10);
            if (pTVar16 != pTVar15) {
              *(undefined8 *)pTVar16 = *(undefined8 *)pTVar15;
              *(undefined8 *)pTVar15 = 0;
              plVar5 = *(longlong **)&pTVar15->field_0x8;
              plVar6 = *(longlong **)&pTVar16->field_0x8;
              lVar18 = local_198;
              if (plVar5 != plVar6) {
                *(undefined8 *)&pTVar15->field_0x8 = 0;
                *(longlong **)&pTVar16->field_0x8 = plVar5;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar6 + 1;
                  lVar8 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar6 + 0xc);
                    iVar14 = *piVar4;
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    lVar18 = local_198;
                    if (iVar14 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                      lVar18 = local_198;
                    }
                  }
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_f8._8_8_);
            local_198 = lVar18 + 1;
            bVar10 = (int)(uint)local_170 < local_190.ArrayNum;
            uVar24 = (uint)local_170;
            local_170 = lVar21 + 0x28;
          } while (bVar10);
        }
        bVar10 = -1 < CpuChannel->Enabled;
        if (bVar10) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId797,"SearchStep",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                     ,0x31d);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId797);
        }
        cVar12 = PackCharts(this,param_3,fVar26,param_1,param_2,local_1a0,&local_1a8,false);
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_198 = 0;
        if (0 < local_190.ArrayNum + 1) {
          lVar18 = -0x28;
          fVar30 = fVar26;
          iVar14 = -1;
          do {
            lVar21 = local_198;
            if (local_198 != 0) {
              uVar24 = 0;
              if (iVar14 < local_190.ArrayNum) {
                uVar24 = -iVar14 - 1U >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                uVar11 = (*pcVar7)();
                return (bool)uVar11;
              }
              FVar9.Data = local_190.AllocatorInstance.Data;
              if (*(longlong *)(local_190.AllocatorInstance.Data + lVar18 + 0x10) == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("State.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                    ,0x155,L"");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                if ((*(longlong *)(FVar9.Data + lVar18 + 0x10) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
              }
              lVar8 = *(longlong *)(FVar9.Data + lVar18 + 0x10);
              while (*(char *)(lVar8 + 0x68) == '\0') {
                (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x20))
                          (*(longlong **)(lVar8 + 0x60),0xffffffff,0);
              }
              cVar12 = *(char *)(lVar8 + 0x70);
            }
            if ((cVar12 != '\0') && (local_1a8 == (TAtomic<bool>)0x0)) {
              LOCK();
              local_1a8 = (TAtomic<bool>)0x1;
              UNLOCK();
              if (0 < lVar21) {
                uVar22 = (uint)-(iVar14 + 1) >> 0x1f;
                uVar24 = 0;
                if (iVar14 < local_190.ArrayNum) {
                  uVar24 = uVar22;
                }
                if ((uVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                pTVar23 = (TArray<FMeshChart,TSizedDefaultAllocator<32>_> *)
                          (local_190.AllocatorInstance.Data + lVar18);
                if (param_3 != pTVar23) {
                  iVar19 = pTVar23->ArrayNum;
                  piVar4 = &param_3->ArrayMax;
                  pFVar17 = (pTVar23->AllocatorInstance).Data;
                  param_3->ArrayNum = iVar19;
                  if ((iVar19 == 0) && (*piVar4 == 0)) {
                    *piVar4 = 0;
                    lVar21 = local_198;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x60,4,iVar19,*piVar4,&param_3->AllocatorInstance,iVar19,piVar4);
                    lVar21 = local_198;
                    if (iVar19 != 0) {
                      memcpy((param_3->AllocatorInstance).Data,pFVar17,(longlong)iVar19 * 0x60);
                      lVar21 = local_198;
                    }
                  }
                }
                uVar24 = 0;
                if (iVar14 < local_190.ArrayNum) {
                  uVar24 = uVar22;
                }
                if ((uVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                local_1a0[0] = *(float *)(local_190.AllocatorInstance.Data + lVar18 + 0x20);
              }
              if (&local_180 != param_3) {
                iVar19 = param_3->ArrayNum;
                pFVar17 = (param_3->AllocatorInstance).Data;
                local_180.ArrayNum = iVar19;
                if ((iVar19 == 0) && (local_180.ArrayMax == 0)) {
                  local_180.ArrayNum = 0;
                  local_180.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,4,iVar19,local_180.ArrayMax,&local_180.AllocatorInstance,iVar19,
                             &local_180.ArrayMax);
                  if (iVar19 != 0) {
                    memcpy(local_180.AllocatorInstance.Data,pFVar17,(longlong)iVar19 * 0x60);
                  }
                }
              }
            }
            fVar26 = fVar30;
            if (local_1a8 == (TAtomic<bool>)0x0) {
              fVar26 = fVar30 * _X;
              fVar32 = fVar30;
            }
            local_198 = lVar21 + 1;
            lVar18 = lVar18 + 0x28;
            iVar19 = iVar14 + 2;
            fVar30 = fVar26;
            iVar14 = iVar14 + 1;
          } while (iVar19 < local_190.ArrayNum + 1);
        }
      }
      if (local_1a7 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId831,"BinarySearch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                   ,0x33f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId831);
      }
      fVar30 = __real_42c80000;
      uVar24 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      LOCK();
      local_1a8 = (TAtomic<bool>)0x0;
      UNLOCK();
      iVar14 = 0;
      do {
        bVar25 = -1 < CpuChannel->Enabled;
        if (bVar25) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId836,"SearchStep",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                     ,0x344);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId836);
        }
        local_168[0] = 0.0;
        fVar29 = (fVar26 + fVar32) * _X;
        bVar13 = PackCharts(this,param_3,fVar29,param_1,param_2,local_168,&local_1a8,false);
        fVar31 = fVar26;
        if (bVar13) {
          if (&local_180 != param_3) {
            iVar19 = param_3->ArrayNum;
            pFVar17 = (param_3->AllocatorInstance).Data;
            local_180.ArrayNum = iVar19;
            if ((iVar19 == 0) && (local_180.ArrayMax == 0)) {
              local_180.ArrayNum = 0;
              local_180.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,4,iVar19,local_180.ArrayMax,&local_180.AllocatorInstance,iVar19,
                         &local_180.ArrayMax);
              if (iVar19 != 0) {
                memcpy(local_180.AllocatorInstance.Data,pFVar17,(longlong)iVar19 * 0x60);
              }
            }
          }
          fVar28 = local_168[0] - local_1a0[0];
          local_1a0[0] = local_168[0];
          fVar31 = fVar29;
          fVar29 = fVar32;
          if ((7 < (int)this->LayoutVersion) && ((float)((uint)fVar28 & uVar24) * fVar30 <= fVar27))
          {
            fVar31 = fVar26;
            if (bVar25) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_144354e8e;
          }
        }
        if (bVar25) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        iVar14 = iVar14 + 1;
        fVar26 = fVar31;
        fVar32 = fVar29;
        if (5 < iVar14) {
LAB_144354e8e:
          if (bVar10) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          FVar9.Data = local_180.AllocatorInstance.Data;
          if ((int)this->LayoutVersion < 3) {
            PackCharts(this,param_3,fVar31,param_1,param_2,local_1a0,&local_1a8,false);
          }
          else if (param_3 != &local_180) {
            iVar14 = local_180.ArrayNum;
            lVar18 = (longlong)local_180.ArrayNum;
            piVar4 = &param_3->ArrayMax;
            param_3->ArrayNum = local_180.ArrayNum;
            if ((local_180.ArrayNum == 0) && (*piVar4 == 0)) {
              *piVar4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,4,local_180.ArrayNum,*piVar4,&param_3->AllocatorInstance,
                         local_180.ArrayNum,piVar4);
              if (iVar14 != 0) {
                memcpy((param_3->AllocatorInstance).Data,FVar9.Data,lVar18 * 0x60);
              }
            }
          }
          FMD5::HashBytes(&local_148,(uchar *)(param_3->AllocatorInstance).Data,
                          (ulonglong)(uint)(param_3->ArrayNum * 0x60));
          if (5 < (byte)LogLayoutUV._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
          }
          LOCK();
          FindBestPackingCount = (TAtomic<unsigned___int64>)((longlong)FindBestPackingCount + 1);
          UNLOCK();
          lVar18 = 0;
          fVar27 = local_1a0[0] * __real_47c35000;
          if ((__real_5f000000 <= fVar27) &&
             (fVar27 = fVar27 - __real_5f000000, fVar27 < __real_5f000000)) {
            lVar18 = -0x8000000000000000;
          }
          LOCK();
          FindBestPackingEfficiency =
               (TAtomic<unsigned___int64>)
               ((longlong)FindBestPackingEfficiency + (longlong)fVar27 + lVar18);
          UNLOCK();
          QueryPerformanceCounter(&local_158);
          LOCK();
          FindBestPackingCycles =
               (TAtomic<unsigned___int64>)
               ((longlong)FindBestPackingCycles + (local_158.QuadPart - (longlong)local_150));
          UNLOCK();
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          DestructItems<_FLayoutUV::FChartPacker::FindBestPacking_::__l2::FThreadContext,int>
                    ((FThreadContext *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
          if ((FThreadContext *)local_190.AllocatorInstance.Data != (FThreadContext *)0x0) {
            FMemory::Free(local_190.AllocatorInstance.Data);
          }
          if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.AllocatorInstance.Data);
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (cVar12 != '\0') {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return true;
        }
      } while( true );
    }
  }
  return false;
}

// OrientChart @ 14435ae60

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __thiscall
FLayoutUV::FChartPacker::OrientChart(FChartPacker *this,FMeshChart *param_1,int param_2)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res20;
  float fStackX_24;
  
  switch(param_2) {
  case 0:
    fVar6 = (float)((uint)(param_1->MinUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar5 = (param_1->MinUV).field0_0x0._s_0.Y;
    fStackX_24 = (param_1->UVScale).field0_0x0._s_0.Y;
    TVar3._s_0.Y = 0.0;
    TVar3._s_0.X = (param_1->UVScale).field0_0x0._s_0.X;
    local_res20 = 0.0;
    break;
  case 1:
    fVar6 = (float)((uint)(param_1->MaxUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar5 = (param_1->MinUV).field0_0x0._s_0.Y;
    fStackX_24 = (param_1->UVScale).field0_0x0._s_0.Y;
    TVar3._s_0.Y = 0.0;
    TVar3._s_0.X = (float)((uint)(param_1->UVScale).field0_0x0._s_0.X ^
                          __xmm_80000000800000008000000080000000);
    local_res20 = 0.0;
    break;
  case 2:
    fVar4 = (float)((uint)(param_1->UVScale).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar6 = (float)((uint)(param_1->MaxUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    local_res20 = (param_1->UVScale).field0_0x0._s_0.Y;
    fVar5 = (param_1->MinUV).field0_0x0._s_0.Y;
    goto LAB_14435b025;
  case 3:
    fVar6 = (float)((uint)(param_1->MinUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar4 = (param_1->UVScale).field0_0x0._s_0.X;
    local_res20 = (param_1->UVScale).field0_0x0._s_0.Y;
    fVar5 = (param_1->MinUV).field0_0x0._s_0.Y;
    goto LAB_14435b025;
  case 4:
    fVar5 = (param_1->MaxUV).field0_0x0._s_0.Y;
    fVar6 = (float)((uint)(param_1->MaxUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fStackX_24 = (float)((uint)(param_1->UVScale).field0_0x0._s_0.Y ^
                        __xmm_80000000800000008000000080000000);
    TVar3._s_0.Y = 0.0;
    TVar3._s_0.X = (float)((uint)(param_1->UVScale).field0_0x0._s_0.X ^
                          __xmm_80000000800000008000000080000000);
    local_res20 = 0.0;
    break;
  case 5:
    fVar6 = (float)((uint)(param_1->MinUV).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar5 = (param_1->MaxUV).field0_0x0._s_0.Y;
    fStackX_24 = (float)((uint)(param_1->UVScale).field0_0x0._s_0.Y ^
                        __xmm_80000000800000008000000080000000);
    TVar3._s_0.Y = 0.0;
    TVar3._s_0.X = (param_1->UVScale).field0_0x0._s_0.X;
    local_res20 = 0.0;
    break;
  case 6:
    local_res20 = (param_1->UVScale).field0_0x0._s_0.Y;
    fVar6 = (param_1->MinUV).field0_0x0._s_0.X;
    fVar4 = (param_1->UVScale).field0_0x0._s_0.X;
    goto LAB_14435b020;
  case 7:
    local_res20 = (param_1->UVScale).field0_0x0._s_0.Y;
    fVar4 = (float)((uint)(param_1->UVScale).field0_0x0._s_0.X ^
                   __xmm_80000000800000008000000080000000);
    fVar6 = (param_1->MaxUV).field0_0x0._s_0.X;
LAB_14435b020:
    fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
    local_res20 = (float)((uint)local_res20 ^ __xmm_80000000800000008000000080000000);
    fVar5 = (param_1->MaxUV).field0_0x0._s_0.Y;
LAB_14435b025:
    TVar3 = (TVector2<float>_u_0)((ulonglong)(uint)fVar4 << 0x20);
    fStackX_24 = 0.0;
    break;
  default:
    goto switchD_14435ae7f_default;
  }
  (param_1->PackingScaleU).field0_0x0 = TVar3;
  TVar1._s_0.Y = fStackX_24;
  TVar1._s_0.X = local_res20;
  (param_1->PackingScaleV).field0_0x0 = TVar1;
  TVar2._s_0.Y = (fVar6 * (param_1->PackingScaleU).field0_0x0._s_0.Y -
                 fVar5 * (param_1->PackingScaleV).field0_0x0._s_0.Y) + __real_3f000000;
  TVar2._s_0.X = (fVar6 * (param_1->PackingScaleU).field0_0x0._s_0.X -
                 fVar5 * (param_1->PackingScaleV).field0_0x0._s_0.X) + __real_3f000000;
  (param_1->PackingBias).field0_0x0 = TVar2;
switchD_14435ae7f_default:
  return;
}

// PackCharts @ 14435b0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014435b552) */
/* WARNING: Removing unreachable block (ram,0x00014435b4c5) */
/* WARNING: Removing unreachable block (ram,0x00014435b559) */
/* WARNING: Removing unreachable block (ram,0x00014435b566) */
/* WARNING: Removing unreachable block (ram,0x00014435b56a) */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLayoutUV::FChartPacker::PackCharts
          (FChartPacker *this,TArray<FMeshChart,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4,float *param_5,
          TAtomic<bool> *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ELightmapUVVersion EVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  double dVar7;
  undefined1 *puVar8;
  FChartPacker *pFVar9;
  undefined1 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  undefined8 uVar20;
  float *pfVar21;
  longlong *plVar22;
  ForElementType<FSetElementId> FVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  longlong lVar28;
  FMeshChart *pFVar29;
  longlong lVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_4d8 [32];
  uint local_484;
  int local_480;
  undefined1 local_47c;
  undefined1 local_47b [3];
  uint local_478;
  int local_474;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  float local_450;
  float local_44c;
  TPairInitializer<FMD5Hash_const_&,UE::Math::TVector2<float>_&&> local_448;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_438;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_430;
  LARGE_INTEGER local_428;
  LARGE_INTEGER local_420;
  LARGE_INTEGER local_418;
  FMeshChart *local_410;
  LARGE_INTEGER local_408;
  TArray<FMeshChart,TSizedDefaultAllocator<32>_> *local_400;
  float *local_3f8;
  LARGE_INTEGER local_3f0;
  code *local_3e8;
  code **local_3e0;
  char *local_3d8;
  float *local_3d0;
  code *local_3c8;
  code **local_3c0;
  IMeshView *local_3b8 [2];
  FString local_3a8;
  undefined8 local_398;
  undefined8 local_388;
  ELightmapUVVersion EStack_380;
  ELightmapUVVersion EStack_37c;
  char local_378;
  uint local_377;
  uint uStack_373;
  uint local_36f;
  uint uStack_36b;
  undefined1 local_358 [16];
  code *local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong *plStack_320;
  FAllocator2D local_318;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  FChartPacker *pFStack_280;
  undefined1 *local_278;
  undefined8 uStack_270;
  TSet<TTuple<FMD5Hash,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FMD5Hash,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  local_268;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  FChartPacker *pFStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  FAllocator2D local_1e8;
  FAllocator2D local_168;
  FMD5 local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_438 = param_4;
  local_3f8 = param_5;
  local_430 = param_3;
  local_400 = param_1;
  ScaleCharts(this,param_1,param_2);
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1067,"FChartPacker::PackCharts",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
               ,0x42b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1067);
  }
  FAllocator2D::FAllocator2D
            (&local_168,UsedSegments,this->TextureResolution,this->TextureResolution,
             this->LayoutVersion);
  FAllocator2D::FAllocator2D
            (&local_1e8,UsedSegments,this->TextureResolution,this->TextureResolution,
             this->LayoutVersion);
  FAllocator2D::FAllocator2D
            (&local_318,FreeSegments,this->TextureResolution,this->TextureResolution,
             this->LayoutVersion);
  lVar30 = 0;
  local_470 = 0;
  local_460 = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_448.Value);
  dVar7 = (double)(longlong)local_448.Value * FGenericPlatformTime::SecondsPerCycle;
  *param_5 = 0.0;
  FAllocator2D::InitRuns(&local_318,&local_318.Rows,local_318.Width,local_318.RasterHeight);
  if (7 < (int)local_318.LayoutVersion) {
    FAllocator2D::InitRuns(&local_318,&local_318.Columns,local_318.Height,local_318.RasterWidth);
  }
  memset(local_318.Bits.AllocatorInstance.Data,0,
         (ulonglong)(local_318.Pitch * local_318.RasterHeight * 8));
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar12 = __real_bf000000;
  fVar11 = __real_3f800000;
  uVar31 = 0;
  local_268.Elements._44_4_ = 0x80;
  local_318.RasterWidth = 0;
  local_318.RasterHeight = 0;
  local_268.Elements._0_8_ = 0;
  local_268.Elements._8_8_ = 0;
  local_268.Elements._32_8_ = 0;
  local_268.Elements._40_4_ = 0;
  local_268.Elements._48_4_ = 0xffffffff;
  local_268.Elements._52_4_ = 0;
  local_268.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_268.HashSize = 0;
  local_484 = 0;
  if (0 < param_1->ArrayNum) {
    local_468 = 0;
    while (lVar28 = local_468, *param_6 == (TAtomic<bool>)0x0) {
      bVar33 = CpuChannel->Enabled < 0;
      if (!bVar33) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1094,"ChartBatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                   ,0x446);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1094);
      }
      local_480 = 0;
      lVar28 = lVar28 * 0x60;
      do {
        local_458 = lVar28;
        if ((param_1->ArrayNum <= (int)uVar31) || (*param_6 != (TAtomic<bool>)0x0)) break;
        uVar19 = 0;
        if ((int)uVar31 < param_1->ArrayNum) {
          uVar19 = ~uVar31 >> 0x1f;
        }
        pFVar9 = uStack_330;
        puVar10 = local_328;
        if (uVar19 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          pFVar9 = uStack_330;
          puVar10 = local_328;
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
        }
        puVar8 = local_1f8;
        uVar14 = uStack_334;
        uVar13 = local_338;
        uVar20 = uStack_340;
        pFVar29 = (FMeshChart *)((param_1->AllocatorInstance).Data + lVar28);
        uVar31 = 0;
        local_478 = 0xffffffff;
        local_358._0_8_ = (IMeshView *)0xffffffffffffffff;
        local_358._8_4_ = ~BitByBit;
        local_358._12_4_ = 0xffffffff;
        if ((int)this->LayoutVersion < 9) {
          puVar8 = local_358;
          local_348 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,bool,FAllocator2D::FRect_const_&>
                      ::Call;
          uStack_340 = uStack_290;
          local_328 = puVar8;
          plStack_320 = (longlong *)0x0;
          local_338 = 0x50bc47f8;
          uStack_334 = 1;
          uStack_330 = this;
          local_298 = 0;
          uStack_290 = uVar20;
          _local_288 = CONCAT44(uVar14,uVar13);
          pFStack_280 = pFVar9;
          local_278 = puVar10;
          uStack_270 = 0;
        }
        else {
          local_348 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,bool,FAllocator2D::FRect_const_&>
                      ::Call;
          uStack_340 = uStack_210;
          local_328._0_4_ = (undefined4)local_1f8;
          local_328._4_4_ = local_1f8._4_4_;
          plStack_320 = (longlong *)0x0;
          local_338 = 0x50bc47d8;
          uStack_334 = 1;
          uStack_330 = (FChartPacker *)local_358;
          local_218 = 0;
          uStack_210 = uVar20;
          _local_208 = CONCAT44(uVar14,uVar13);
          pFStack_200 = pFVar9;
          local_1f8 = puVar10;
          uStack_1f0 = 0;
        }
        plStack_320 = (longlong *)0x0;
        uStack_334 = 1;
        local_410 = pFVar29;
        do {
          local_328 = puVar8;
          OrientChart(this,pFVar29,uVar31);
          fVar35 = (pFVar29->MaxUV).field0_0x0._s_0.Y - (pFVar29->MinUV).field0_0x0._s_0.Y;
          EVar3 = this->TextureResolution;
          fVar34 = (pFVar29->MaxUV).field0_0x0._s_0.X - (pFVar29->MinUV).field0_0x0._s_0.X;
          local_388 = (IMeshView *)0x0;
          fVar36 = (float)((uint)(fVar35 * (pFVar29->PackingScaleV).field0_0x0._s_0.Y +
                                 fVar34 * (pFVar29->PackingScaleU).field0_0x0._s_0.Y) & uVar4) +
                   fVar11;
          fVar34 = (float)((uint)(fVar35 * (pFVar29->PackingScaleV).field0_0x0._s_0.X +
                                 fVar34 * (pFVar29->PackingScaleU).field0_0x0._s_0.X) & uVar4) +
                   fVar11;
          EStack_380 = -((int)ROUND(fVar12 - (fVar34 + fVar34)) >> 1);
          EStack_37c = -((int)ROUND(fVar12 - (fVar36 + fVar36)) >> 1);
          if (EVar3 < EStack_380) {
            EStack_380 = EVar3;
          }
          if (EVar3 < EStack_37c) {
            EStack_37c = EVar3;
          }
          if ((int)this->LayoutVersion < 1) {
LAB_14435b659:
            QueryPerformanceCounter(&local_420);
            RasterizeChart(this,pFVar29,local_430,local_438,EStack_380,EStack_37c,&local_1e8);
            QueryPerformanceCounter(&local_428);
            local_470 = lVar30 + (ulonglong)(local_428.s.LowPart - local_420._0_4_);
          }
          else if ((uVar31 & 3) == 1) {
            FAllocator2D::FlipX(&local_1e8,(FRect *)&local_388);
          }
          else {
            if ((uVar31 & 3) != 3) goto LAB_14435b659;
            FAllocator2D::FlipY(&local_1e8,(FRect *)&local_388);
          }
          bVar15 = false;
          QueryPerformanceCounter(&local_418);
          uVar13 = local_418.s.LowPart;
          if (this->LayoutVersion == BitByBit) {
            bVar15 = FAllocator2D::FindBitByBit(&local_318,(FRect *)&local_388,&local_1e8);
          }
          else if (0 < (int)this->LayoutVersion) {
            local_398 = local_388;
            if ((local_1e8.RasterHeight == 0) && (local_1e8.RasterWidth == 0)) {
              bVar15 = true;
              local_388 = (IMeshView *)0x0;
            }
            else {
              FMD5::FMD5(&local_e8);
              if (local_1e8.Rows.AllocatorInstance.Data <
                  (FRun *)(local_1e8.Rows.AllocatorInstance.Data +
                          (ulonglong)local_1e8.RasterHeight * 0x28)) {
                pFVar26 = local_1e8.Rows.AllocatorInstance.Data + 8;
                lVar30 = (ulonglong)
                         ((longlong)
                          (local_1e8.Rows.AllocatorInstance.Data +
                          (ulonglong)local_1e8.RasterHeight * 0x28) +
                         (-1 - (longlong)local_1e8.Rows.AllocatorInstance.Data)) / 0x28 + 1;
                do {
                  local_474 = *(int *)(pFVar26 + 8);
                  FMD5::Update(&local_e8,(uchar *)&local_474,4);
                  FMD5::Update(&local_e8,*(uchar **)pFVar26,(ulonglong)(uint)(local_474 * 8));
                  pFVar26 = pFVar26 + 0x28;
                  lVar30 = lVar30 + -1;
                  pFVar29 = local_410;
                } while (lVar30 != 0);
              }
              local_378 = '\0';
              FMD5::Final(&local_e8,(uchar *)&local_377);
              local_378 = '\x01';
              FMD5::~FMD5(&local_e8);
              if (local_268.Elements._8_4_ != local_268.Elements._52_4_) {
                FVar23 = (ForElementType<FSetElementId>)&local_268.Hash;
                if (local_268.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar23 = local_268.Hash.SecondaryData;
                }
                iVar27 = *(int *)((longlong)FVar23 +
                                 (ulonglong)
                                 (local_268.HashSize - 1U &
                                 (local_377 ^ uStack_373 ^ local_36f ^ uStack_36b)) * 4);
                if (iVar27 != -1) {
                  do {
                    lVar30 = local_268.Elements._0_8_ + (longlong)iVar27 * 0x24;
                    cVar18 = *(char *)(local_268.Elements._0_8_ + (longlong)iVar27 * 0x24);
                    if ((cVar18 == local_378) &&
                       ((cVar18 == '\0' ||
                        ((*(longlong *)(lVar30 + 1) == CONCAT44(uStack_373,local_377) &&
                         (*(longlong *)(lVar30 + 9) == CONCAT44(uStack_36b,local_36f))))))) {
                      if (iVar27 != -1) {
                        pfVar21 = (float *)(lVar30 + 0x14);
                        if (lVar30 == 0) {
                          pfVar21 = (float *)0x0;
                        }
                        if (pfVar21 != (float *)0x0) {
                          local_398 = (IMeshView *)
                                      CONCAT44((int)(longlong)pfVar21[1],(int)(longlong)*pfVar21);
                        }
                      }
                      break;
                    }
                    iVar27 = *(int *)(lVar30 + 0x1c);
                  } while (iVar27 != -1);
                }
              }
              if (local_348 == (code *)0x0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsBound(InFunc)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                                    ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef")
                ;
                if (bVar15) {
                  pcVar6 = (code *)swi(3);
                  uVar16 = (*pcVar6)();
                  return (bool)uVar16;
                }
              }
              local_3e0 = &local_348;
              local_3e8 = UE::Core::Private::Function::
                          TFunctionRefCaller<TFunction<bool___cdecl(FAllocator2D::FRect_const_&)>,bool,FAllocator2D::FRect_const_&>
                          ::Call;
              bVar15 = FAllocator2D::FindWithSegments
                                 (&local_318,(FRect *)&local_398,&local_1e8,
                                  (TFunctionRef<bool___cdecl(FAllocator2D::FRect_const_&)> *)
                                  &local_3e8);
              if (bVar15) {
                local_450 = (float)((ulonglong)local_398 & 0xffffffff);
                local_44c = (float)((ulonglong)local_398 >> 0x20);
                local_3d8 = &local_378;
                local_3d0 = &local_450;
                TSet<TTuple<FMD5Hash,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FMD5Hash,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FMD5Hash_const_&,UE::Math::TVector2<float>_&&>_>
                          (&local_268,&local_448,(bool *)&local_3d8);
                if (((int)this->LayoutVersion < 8) &&
                   (((uint)local_388 != (uint)local_398 || (local_388._4_4_ != local_398._4_4_)))) {
                  local_388 = local_398;
                  if (local_348 == (code *)0x0) {
                    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsBound(InFunc)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                                        ,0x1d0,
                                        L"Cannot bind a null/unbound callable to a TFunctionRef");
                    if (bVar15) {
                      pcVar6 = (code *)swi(3);
                      uVar16 = (*pcVar6)();
                      return (bool)uVar16;
                    }
                  }
                  local_3c0 = &local_348;
                  local_3c8 = UE::Core::Private::Function::
                              TFunctionRefCaller<TFunction<bool___cdecl(FAllocator2D::FRect_const_&)>,bool,FAllocator2D::FRect_const_&>
                              ::Call;
                  bVar15 = FAllocator2D::FindWithSegments
                                     (&local_318,(FRect *)&local_388,&local_1e8,
                                      (TFunctionRef<bool___cdecl(FAllocator2D::FRect_const_&)> *)
                                      &local_3c8);
                }
                else {
                  local_388 = local_398;
                }
              }
              if (local_348 == (code *)0x0) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsBound(InFunc)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                                    ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef")
                ;
                if (bVar17) {
                  pcVar6 = (code *)swi(3);
                  uVar16 = (*pcVar6)();
                  return (bool)uVar16;
                }
              }
            }
          }
          QueryPerformanceCounter(&local_408);
          local_460 = local_460 + (ulonglong)(local_408.s.LowPart - uVar13);
          if ((param_7) && (4 < (byte)LogLayoutUV._0_1_)) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
          }
          puVar8 = local_328;
          if (bVar15 != false) {
            UE::Core::Private::Function::CheckCallable(local_348);
            pcVar6 = local_348;
            plVar22 = (longlong *)&local_338;
            if (plStack_320 != (longlong *)0x0) {
              plVar22 = plStack_320;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            cVar18 = (*pcVar6)(uVar20,&local_388);
            puVar8 = local_328;
            if (cVar18 != '\0') {
              FAllocator2D::operator=(&local_168,&local_1e8);
              local_358._0_8_ = local_388;
              local_358._12_4_ = EStack_37c;
              local_358._8_4_ = EStack_380;
              local_478 = uVar31;
              puVar8 = local_328;
              if (((uint)local_388 == 0) && (local_388._4_4_ == 0)) goto LAB_14435bb6b;
            }
          }
          uVar31 = uVar31 + 1;
          lVar30 = local_470;
        } while ((int)uVar31 < 8);
        local_328 = puVar8;
        if ((int)local_478 < 0) {
          if ((param_7) && (4 < (byte)LogLayoutUV._0_1_)) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
          }
          if (local_348 != (code *)0x0) {
            plVar22 = (longlong *)&local_338;
            if (plStack_320 != (longlong *)0x0) {
              plVar22 = plStack_320;
            }
            (**(code **)(*plVar22 + 0x10))();
          }
          if (bVar33) goto LAB_14435bc64;
          FCpuProfilerTrace::OutputEndEvent();
          bVar33 = false;
          goto LAB_14435bdde;
        }
LAB_14435bb6b:
        OrientChart(this,pFVar29,local_478);
        local_3b8[0] = (IMeshView *)local_358._0_8_;
        local_3b8[1] = (IMeshView *)local_358._8_8_;
        FAllocator2D::Alloc(&local_318,(FRect *)local_3b8,&local_168);
        (pFVar29->PackingBias).field0_0x0._s_0.X =
             (float)(local_358._0_8_ & 0xffffffff) + (pFVar29->PackingBias).field0_0x0._s_0.X;
        (pFVar29->PackingBias).field0_0x0._s_0.Y =
             (float)((ulonglong)local_358._0_8_ >> 0x20) + (pFVar29->PackingBias).field0_0x0._s_0.Y;
        if (local_348 != (code *)0x0) {
          plVar22 = (longlong *)&local_338;
          if (plStack_320 != (longlong *)0x0) {
            plVar22 = plStack_320;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        uVar31 = local_484 + 1;
        lVar28 = local_458 + 0x60;
        local_468 = local_468 + 1;
        local_480 = local_480 + 1;
        lVar30 = local_470;
        param_1 = local_400;
        local_484 = uVar31;
        local_458 = lVar28;
      } while (local_480 < 0x400);
      if (!bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (param_1->ArrayNum <= (int)uVar31) break;
    }
  }
  iVar27 = local_318.Rows.ArrayNum;
  if (*param_6 == (TAtomic<bool>)0x0) {
    uVar24 = (ulonglong)local_318.Rows.ArrayNum;
    uVar31 = 0;
    uVar4 = this->TextureResolution;
    pFVar26 = local_318.Rows.AllocatorInstance.Data + 0x10;
    pFVar1 = local_318.Rows.AllocatorInstance.Data + uVar24 * 0x28;
    while( true ) {
      if ((uint)uVar24 != iVar27) {
        `TCheckedPointerIterator<FAllocator2D::FRun_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_47c);
      }
      if (pFVar26 + -0x10 == pFVar1) break;
      pFVar25 = (((TArray<FAllocator2D::FSegment,TSizedDefaultAllocator<32>_> *)(pFVar26 + -8))->
                AllocatorInstance).Data;
      iVar5 = *(int *)pFVar26;
      pFVar2 = pFVar25 + (longlong)iVar5 * 8;
      while( true ) {
        if (*(int *)pFVar26 != iVar5) {
          `TCheckedPointerIterator<FAllocator2D::FSegment_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_47b);
        }
        if (pFVar25 == pFVar2) break;
        uVar31 = uVar31 + *(int *)(pFVar25 + 4);
        pFVar25 = pFVar25 + 8;
      }
      uVar24 = (ulonglong)(uint)local_318.Rows.ArrayNum;
      pFVar26 = pFVar26 + 0x28;
    }
    if (local_318.Mode == FreeSegments) {
      uVar31 = local_318.Height * local_318.Width - uVar31;
    }
    *local_3f8 = (float)uVar31 / (float)(uVar4 * uVar4);
    QueryPerformanceCounter(&local_3f0);
    if (6 < (byte)LogLayoutUV._0_1_) {
      FGenericPlatformTime::PrettyTime
                (&local_3a8,
                 (double)local_3f0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (6 < (byte)LogLayoutUV._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u___Rasterize___l_150bc4588,
                   (FLogCategoryBase *)&LogLayoutUV);
        if (6 < (byte)LogLayoutUV._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
        }
      }
    }
    bVar33 = true;
  }
  else {
LAB_14435bc64:
    bVar33 = false;
  }
LAB_14435bdde:
  local_268.HashSize = 0;
  if (local_268.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_268.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FMD5Hash,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMD5Hash,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_268.Elements);
  if (local_318.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_318.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_318.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Bits.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_318.Columns.AllocatorInstance.Data,local_318.Columns.ArrayNum);
  if ((FRun *)local_318.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_318.Columns.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_318.Rows.AllocatorInstance.Data,local_318.Rows.ArrayNum);
  if ((FRun *)local_318.Rows.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_318.Rows.AllocatorInstance.Data);
  }
  if (local_1e8.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_1e8.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_1e8.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Bits.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_1e8.Columns.AllocatorInstance.Data,local_1e8.Columns.ArrayNum);
  if ((FRun *)local_1e8.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_1e8.Columns.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_1e8.Rows.AllocatorInstance.Data,local_1e8.Rows.ArrayNum);
  if ((FRun *)local_1e8.Rows.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_1e8.Rows.AllocatorInstance.Data);
  }
  if (local_168.SortedColumnsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SortedColumnsIndex.AllocatorInstance.Data);
  }
  if (local_168.SortedRowsIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SortedRowsIndex.AllocatorInstance.Data);
  }
  if (local_168.Bits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Bits.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_168.Columns.AllocatorInstance.Data,local_168.Columns.ArrayNum);
  if ((FRun *)local_168.Columns.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_168.Columns.AllocatorInstance.Data);
  }
  DestructItems<FAllocator2D::FRun,int>
            ((FRun *)local_168.Rows.AllocatorInstance.Data,local_168.Rows.ArrayNum);
  if ((FRun *)local_168.Rows.AllocatorInstance.Data != (FRun *)0x0) {
    FMemory::Free(local_168.Rows.AllocatorInstance.Data);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar33;
}

// RasterizeChart @ 14435c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __thiscall
FLayoutUV::FChartPacker::RasterizeChart
          (FChartPacker *this,FMeshChart *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,uint param_4,uint param_5,
          FAllocator2D *param_6)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  float local_68;
  float fStack_64;
  FChartPacker *local_60;
  TVector2<float>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60 = this;
  FAllocator2D::Clear(param_6);
  uVar9 = param_1->FirstTri;
  if (uVar9 < param_1->LastTri) {
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        local_78 = (longlong)(int)uVar9;
        local_70 = (longlong)param_3->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar10 = (longlong)(int)uVar9;
      uVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar10 * 4) * 3;
      uVar7 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar6;
        local_70 = (longlong)param_2->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8);
      fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8 + 4);
      local_68 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.X +
                 fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.X +
                 (param_1->PackingBias).field0_0x0._s_0.X;
      fStack_64 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.Y +
                  fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.Y +
                  (param_1->PackingBias).field0_0x0._s_0.Y;
      local_58._s_0.Y = fStack_64;
      local_58._s_0.X = local_68;
      uVar6 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (local_78 = lVar10, local_70 = (longlong)param_3->ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar10 * 4) * 3 + 1;
      uVar7 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar6;
        local_70 = (longlong)param_2->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8);
      fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8 + 4);
      local_68 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.X +
                 fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.X +
                 (param_1->PackingBias).field0_0x0._s_0.X;
      fStack_64 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.Y +
                  fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.Y +
                  (param_1->PackingBias).field0_0x0._s_0.Y;
      local_50 = CONCAT44(fStack_64,local_68);
      uVar6 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (local_78 = lVar10, local_70 = (longlong)param_3->ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar10 * 4) * 3 + 2;
      uVar8 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)uVar6;
        local_70 = (longlong)param_2->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8);
      fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 8 + 4);
      local_68 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.X +
                 fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.X +
                 (param_1->PackingBias).field0_0x0._s_0.X;
      fStack_64 = fVar1 * (param_1->PackingScaleU).field0_0x0._s_0.Y +
                  fVar2 * (param_1->PackingScaleV).field0_0x0._s_0.Y +
                  (param_1->PackingBias).field0_0x0._s_0.Y;
      local_48 = CONCAT44(fStack_64,local_68);
      RasterizeTriangle<16>(param_6,(TVector2<float> *)&local_58._s_0,param_4,param_5);
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_1->LastTri);
  }
  if (0 < (int)local_60->LayoutVersion) {
    FAllocator2D::CreateUsedSegments(param_6);
  }
  return;
}

// ScaleCharts @ 14435c680

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __thiscall
FLayoutUV::FChartPacker::ScaleCharts
          (FChartPacker *this,TArray<FMeshChart,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8;
  
  iVar11 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar11) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      local_res8 = param_2 * *(float *)(pFVar2 + lVar13 + 0x24);
      *(ulonglong *)(pFVar2 + lVar13 + 0x1c) =
           CONCAT44(param_2 * *(float *)(pFVar2 + lVar13 + 0x28),local_res8);
      lVar13 = lVar13 + 0x60;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  if (2 < (int)this->LayoutVersion) {
    AlgoImpl::
    IntroSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l7::<lambda_1>_>
              ((FMeshChart *)(param_1->AllocatorInstance).Data,iVar11,local_res8._0_1_,
               (<lambda_1>)local_res8._0_1_);
  }
  fVar6 = __real_3f8147ae;
  fVar5 = __real_3f800000;
  fVar4 = __real_3c23d70a;
  iVar11 = 0;
  fVar18 = __real_3f800000;
  do {
    iVar9 = param_1->ArrayNum;
    iVar12 = 0;
    uVar10 = 0;
    fVar19 = 0.0;
    if (0 < iVar9) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        fVar16 = *(float *)(pFVar2 + lVar13 + 0x10) - *(float *)(pFVar2 + lVar13 + 8);
        fVar17 = *(float *)(pFVar2 + lVar13 + 0x14) - *(float *)(pFVar2 + lVar13 + 0xc);
        fVar14 = *(float *)(pFVar2 + lVar13 + 0x1c) * fVar16 * fVar18;
        fVar15 = *(float *)(pFVar2 + lVar13 + 0x20) * fVar17 * fVar18;
        if (fVar15 <= fVar14) {
          fVar15 = fVar14;
        }
        fVar14 = (float)this->TextureResolution - fVar5;
        if (fVar15 + fVar4 <= fVar14) {
          fVar14 = *(float *)(pFVar2 + lVar13 + 0x1c) * fVar18;
          fVar15 = *(float *)(pFVar2 + lVar13 + 0x20) * fVar18;
        }
        else {
          if (fVar16 <= fVar17) {
            fVar16 = fVar17;
          }
          iVar12 = iVar12 + 1;
          fVar14 = fVar14 / fVar16;
          fVar15 = fVar14;
        }
        *(float *)(pFVar2 + lVar13 + 0x1c) = fVar14;
        uVar10 = uVar10 + 1;
        *(float *)(pFVar2 + lVar13 + 0x20) = fVar15;
        lVar1 = lVar13 + 0x18;
        lVar13 = lVar13 + 0x60;
        iVar9 = param_1->ArrayNum;
        fVar19 = fVar19 + fVar14 * *(float *)(pFVar2 + lVar1) * fVar15;
      } while ((int)uVar10 < iVar9);
    }
  } while ((((iVar12 != 0) && (iVar12 != iVar9)) &&
           (fVar18 = SQRT(this->TotalUVArea / fVar19) * param_2, fVar6 <= fVar18)) &&
          (iVar11 = iVar11 + 1, iVar11 < 1000));
  iVar11 = 0;
  fVar18 = fVar5;
  do {
    iVar12 = 0;
    uVar10 = 0;
    fVar19 = 0.0;
    if (0 < iVar9) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        fVar15 = (float)this->TextureResolution - fVar5;
        if ((*(float *)(pFVar2 + lVar13 + 0x10) - *(float *)(pFVar2 + lVar13 + 8)) *
            *(float *)(pFVar2 + lVar13 + 0x1c) * fVar18 + fVar4 <= fVar15) {
          fVar15 = *(float *)(pFVar2 + lVar13 + 0x1c) * fVar18;
        }
        else {
          fVar15 = fVar15 / (*(float *)(pFVar2 + lVar13 + 0x10) - *(float *)(pFVar2 + lVar13 + 8));
          iVar12 = iVar12 + 1;
        }
        *(float *)(pFVar2 + lVar13 + 0x1c) = fVar15;
        fVar16 = (float)this->TextureResolution - fVar5;
        if (*(float *)(pFVar2 + lVar13 + 0x20) *
            (*(float *)(pFVar2 + lVar13 + 0x14) - *(float *)(pFVar2 + lVar13 + 0xc)) * fVar18 +
            fVar4 <= fVar16) {
          fVar16 = *(float *)(pFVar2 + lVar13 + 0x20) * fVar18;
        }
        else {
          fVar16 = fVar16 / (*(float *)(pFVar2 + lVar13 + 0x14) - *(float *)(pFVar2 + lVar13 + 0xc))
          ;
          iVar12 = iVar12 + 1;
        }
        uVar10 = uVar10 + 1;
        *(float *)(pFVar2 + lVar13 + 0x20) = fVar16;
        lVar1 = lVar13 + 0x18;
        lVar13 = lVar13 + 0x60;
        iVar9 = param_1->ArrayNum;
        fVar19 = fVar19 + fVar15 * *(float *)(pFVar2 + lVar1) * fVar16;
      } while ((int)uVar10 < iVar9);
    }
  } while (((iVar12 != 0) && (iVar12 != iVar9 * 2)) &&
          ((fVar18 = SQRT(this->TotalUVArea / fVar19) * param_2, fVar6 <= fVar18 &&
           (iVar11 = iVar11 + 1, iVar11 < 1000))));
  AlgoImpl::
  IntroSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l2::FCompareCharts>
            ((FMeshChart *)(param_1->AllocatorInstance).Data,iVar9,local_res8._0_1_,
             (FCompareCharts)local_res8._0_1_);
  return;
}

