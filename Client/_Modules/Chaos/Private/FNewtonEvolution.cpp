// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 46

// ComputeNegativeBackwardEulerResidual<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>_> @ 143bbcde0

void __thiscall
Chaos::Softs::FNewtonEvolution::
ComputeNegativeBackwardEulerResidual<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>_>
          (FNewtonEvolution *this,FSolverParticles *param_1,
          TArray<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          FSolverParticles *param_5,
          TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
          *param_6,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
                   *param_7,float param_8,float param_9,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *this_00;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 local_118 [8];
  longlong local_110;
  undefined4 local_108 [2];
  float local_100 [2];
  longlong local_f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_e8;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  *local_e0;
  TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  *local_d8;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  local_c8 [2];
  
  this_00 = (this->MEFem).Ptr;
  lVar19 = 0;
  local_f0 = param_4;
  local_c8[0]._0_8_ = *(undefined8 *)param_6;
  local_d8 = param_7;
  local_e0 = param_6;
  local_c8[0]._40_8_ = 0;
  local_e8 = param_3;
  if (local_c8[0]._0_8_ != 0) {
    puVar14 = (undefined8 *)&param_6->field_0x10;
    if (*(undefined8 **)&param_6->field_0x28 != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)&param_6->field_0x28;
    }
    (**(code **)*puVar14)(puVar14,&local_c8[0].field_0x10);
  }
  ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>
            (this_00,param_1,local_c8,param_10,param_2,__real_3f800000,
             (TArray<float,TSizedDefaultAllocator<32>_> *)0x0);
  local_100[0] = param_8 + param_9;
  local_118[0] = 0;
  local_108[0] = 0x3f800000;
  UE::Core::Private::Function::CheckCallable(*(void **)param_7);
  pcVar5 = *(code **)param_7;
  plVar15 = (longlong *)&param_7->field_0x10;
  if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
    plVar15 = *(longlong **)&param_7->field_0x28;
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  (*pcVar5)(uVar13,local_100,local_108,param_3,local_118,param_10);
  uVar16 = 0;
  if (0 < (int)param_1->_padding_) {
    local_f8 = 0;
    local_110 = 0;
    do {
      uVar17 = ~uVar16 >> 0x1f;
      lVar18 = 0;
      do {
        lVar9 = local_f8;
        uVar12 = 0;
        if ((int)uVar16 < param_10->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = (param_10->AllocatorInstance).Data;
        *(float *)(pFVar6 + lVar18 + lVar19) =
             param_9 * param_9 * *(float *)(pFVar6 + lVar18 + lVar19);
        uVar12 = 0;
        if ((int)uVar16 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar12 = 0;
        if ((int)uVar16 < (int)param_1->_padding_) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar8 = param_1->_padding_;
        uVar12 = 0;
        if ((int)uVar16 < local_f0->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar10 = local_e8;
        fVar1 = *(float *)(lVar18 + lVar8 + lVar19);
        fVar2 = *(float *)(lVar18 + lVar9 + lVar7);
        fVar3 = *(float *)((local_f0->AllocatorInstance).Data + lVar19 + lVar18);
        uVar12 = 0;
        if ((int)uVar16 < local_e8->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar4 = *(float *)((pTVar10->AllocatorInstance).Data + local_110 * 4);
        uVar12 = 0;
        if ((int)uVar16 < param_10->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = (param_10->AllocatorInstance).Data;
        *(float *)(pFVar6 + lVar18 + lVar19) =
             *(float *)(pFVar6 + lVar18 + lVar19) - ((fVar2 - fVar1) - fVar3 * param_9) * fVar4;
        lVar18 = lVar18 + 4;
      } while (lVar18 < 0xc);
      local_110 = local_110 + 1;
      local_f8 = local_f8 + 0x10;
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0xc;
      param_6 = local_e0;
      param_7 = local_d8;
    } while ((int)uVar16 < (int)param_1->_padding_);
  }
  if (*(longlong *)param_6 != 0) {
    plVar15 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (*(longlong *)param_7 != 0) {
    plVar15 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return;
}

// DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_> @ 143bbde20

void __thiscall
Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>
          (FNewtonEvolution *this,int param_1,float param_2,int param_3,float param_4,
          TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
          *param_5,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
                   *param_6,float param_7,float param_8,
          TArray<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_9,TArray<float,TSizedDefaultAllocator<32>_> *param_10,
          TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
          *param_11,
          TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
          *param_12,
          TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
          *param_13,TFunction<void___cdecl(bool)> *param_14,FSolverParticles *param_15,
          TArray<float,TSizedDefaultAllocator<32>_> *param_16,bool param_17,float param_18,
          bool param_19)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *this_00;
  code *pcVar4;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)> *pTVar5;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  *pTVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  TFunctionRef<void___cdecl(int)> *pTVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)> *pTVar22;
  TFunction<void___cdecl(bool)> *pTVar23;
  TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  *pTVar24;
  FSolverParticles *pFVar25;
  float fVar26;
  undefined1 local_518 [8];
  undefined1 local_510;
  undefined1 local_50f [7];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_508;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_4f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_4e8;
  int local_4d8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_4d0;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  TArray<float,TSizedDefaultAllocator<32>_> *local_490;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)> *local_488;
  FString local_480;
  int local_470;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  *local_468;
  TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  *local_460;
  TFunction<void___cdecl(bool)> *local_458;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  *local_450;
  FSolverParticles *local_448;
  TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  *local_440;
  FString local_438;
  TVector<float,3> local_428;
  TArray<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_418;
  undefined8 local_410;
  float local_408;
  undefined8 local_400;
  float local_3f8;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FNewtonEvolution *local_3c0;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  *pTStack_3b8;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  *local_3b0;
  TArray<float,TSizedDefaultAllocator<32>_> *pTStack_3a8;
  float *local_3a0;
  FString local_398;
  FSolverParticles *local_388;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_380;
  code *local_378;
  FSolverParticles **local_370;
  code *local_368;
  FNewtonEvolution **local_360;
  code *local_358;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_350;
  code *local_348;
  FNewtonEvolution **local_340;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_338;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_330;
  code *local_328;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_320;
  code *local_318;
  FNewtonEvolution **local_310;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FNewtonEvolution *local_298;
  FSolverParticles *local_290;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_288;
  FNewtonEvolution *local_280;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_278;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_270;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_268;
  TArray<float,TSizedDefaultAllocator<32>_> *local_260;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_258;
  float *local_250;
  FNewtonEvolution *local_248;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_240;
  TArray<float,TSizedDefaultAllocator<32>_> *local_238;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_230;
  float *local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  TStringView<wchar_t> local_1e8;
  FString local_1d8;
  FString local_1c8;
  TStringView<wchar_t> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  <lambda_1> local_148;
  TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  local_118;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  local_e8;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  local_b8 [2];
  
  pFVar25 = param_15;
  pTVar23 = param_14;
  pTVar24 = param_13;
  pTVar22 = param_12;
  local_440 = param_11;
  local_418 = param_9;
  local_490 = param_10;
  local_460 = param_13;
  local_458 = param_14;
  local_468 = param_6;
  local_488 = param_12;
  local_450 = param_5;
  local_448 = param_15;
  local_470 = param_3;
  FPaths::ProjectDir(&local_480);
  ::FString::AppendChars(&local_480,L"/HoudiniOutput/NewtonLog.txt",0x1c);
  local_4d8 = 0;
  if (0 < this->MNumNewtonIterations) {
    do {
      uVar2 = (uint)pFVar25->_padding_;
      uVar19 = (ulonglong)uVar2;
      local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f8.ArrayNum = 0;
      local_4f8.ArrayMax = 0;
      local_4b4 = 0;
      local_4ac = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19);
      }
      if ((uVar2 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar2,&local_4f8.AllocatorInstance,0,&local_4f8.ArrayMax), 0 < (int)uVar2
         )) {
        do {
          if ((local_4f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4b4) &&
             (((FScriptContainerElement *)&local_4b4 <
               local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayMax * 0xc &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_4f8.ArrayNum;
          if (local_4f8.ArrayNum == local_4f8.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_4f8.AllocatorInstance,&local_4f8.ArrayMax);
          }
          local_4f8.ArrayNum = iVar8 + 1;
          *(undefined8 *)(local_4f8.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = local_4b4;
          *(undefined4 *)(local_4f8.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 8) = local_4ac;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      local_518[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar23);
      pcVar4 = *(code **)pTVar23;
      plVar16 = *(longlong **)&pTVar23->field_0x28;
      if (*(longlong **)&pTVar23->field_0x28 == (longlong *)0x0) {
        plVar16 = (longlong *)&pTVar23->field_0x10;
      }
      uVar9 = (**(code **)(*plVar16 + 8))();
      (*pcVar4)(uVar9,local_518);
      fVar26 = param_8;
      local_118._0_8_ = *(undefined8 *)pTVar24;
      local_118._40_8_ = 0;
      if (local_118._0_8_ != 0) {
        puVar15 = *(undefined8 **)&pTVar24->field_0x28;
        if (*(undefined8 **)&pTVar24->field_0x28 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)&pTVar24->field_0x10;
        }
        (**(code **)*puVar15)(puVar15,&local_118.field_0x10);
      }
      local_e8._0_8_ = *(undefined8 *)param_5;
      local_e8._40_8_ = 0;
      if (local_e8._0_8_ != 0) {
        puVar15 = *(undefined8 **)&param_5->field_0x28;
        if (*(undefined8 **)&param_5->field_0x28 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)&param_5->field_0x10;
        }
        (**(code **)*puVar15)(puVar15,&local_e8.field_0x10);
      }
      ComputeNegativeBackwardEulerResidual<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>_>
                (this,local_448,local_418,local_490,&this->MVn,local_448,&local_e8,&local_118,
                 param_7,fVar26,&local_4f8);
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar22);
      plVar16 = (longlong *)&pTVar22->field_0x10;
      pcVar4 = *(code **)pTVar22;
      plVar17 = *(longlong **)&pTVar22->field_0x28;
      if (*(longlong **)&pTVar22->field_0x28 == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      uVar9 = (**(code **)(*plVar17 + 8))();
      (*pcVar4)(uVar9,&local_4f8);
      iVar8 = local_4f8.ArrayNum;
      uVar19 = (ulonglong)local_4f8.ArrayNum;
      fVar26 = 0.0;
      pFVar1 = local_4f8.AllocatorInstance.Data + uVar19 * 0xc;
      FVar20.Data = local_4f8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar8) {
          local_510 = 0;
          `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_510);
          uVar19 = local_4f8._8_8_ & 0xffffffff;
        }
        if (FVar20.Data == pFVar1) break;
        uVar9 = *(undefined8 *)FVar20.Data;
        local_408 = *(float *)(FVar20.Data + 8);
        FVar20.Data = FVar20.Data + 0xc;
        local_410._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        fVar26 = (float)uVar9 * (float)uVar9 + fVar26 + local_410._4_4_ * local_410._4_4_ +
                 local_408 * local_408;
        local_410 = uVar9;
      }
      pIVar10 = IFileManager::Get();
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_480.Data.ArrayNum != 0) {
        FVar20.Data = local_480.Data.AllocatorInstance.Data;
      }
      pFVar11 = ::FString::FString(&local_200,L"\r\n");
      pFVar12 = ::FString::SanitizeFloat(&local_210,(double)SQRT(fVar26),1);
      pFVar13 = ::FString::FString(&local_220,L"Newton Residual two Norm = ");
      ::FString::ConcatFF(&local_398,pFVar13,pFVar12);
      ::FString::ConcatFF(&local_3f0,&local_398,pFVar11);
      local_2a8 = local_3f0.Data.AllocatorInstance.Data;
      iStack_2a0 = local_3f0.Data.ArrayNum + -1;
      if (local_3f0.Data.ArrayNum == 0) {
        iStack_2a0 = 0;
      }
      local_158._12_4_ = uStack_29c;
      local_158.Size = iStack_2a0;
      local_158.DataPtr = (wchar_t *)local_3f0.Data.AllocatorInstance.Data;
      FFileHelper::SaveStringToFile(&local_158,(wchar_t *)FVar20.Data,AutoDetect,pIVar10,8);
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      pFVar25 = local_448;
      pTVar6 = local_468;
      pTVar5 = local_488;
      if (SQRT(fVar26) < param_2) {
        pIVar10 = IFileManager::Get();
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_480.Data.ArrayNum != 0) {
          FVar20.Data = local_480.Data.AllocatorInstance.Data;
        }
        pFVar11 = ::FString::FString(&local_178,L"\r\n");
        local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_438.Data.ArrayNum = 0;
        local_438.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_438,local_4d8);
        pFVar12 = ::FString::FString(&local_188,L" in = ");
        pFVar13 = ::FString::SanitizeFloat(&local_198,(double)param_2,1);
        pFVar14 = ::FString::FString(&local_1a8,L"Newton converged to tolerance ");
        ::FString::ConcatFF(&local_2b8,pFVar14,pFVar13);
        ::FString::ConcatFF(&local_2c8,&local_2b8,pFVar12);
        ::FString::ConcatFF(&local_2d8,&local_2c8,&local_438);
        ::FString::ConcatFF(&local_3d0,&local_2d8,pFVar11);
        local_2e8 = local_3d0.Data.AllocatorInstance.Data;
        iStack_2e0 = local_3d0.Data.ArrayNum + -1;
        if (local_3d0.Data.ArrayNum == 0) {
          iStack_2e0 = 0;
        }
        local_1b8._12_4_ = uStack_2dc;
        local_1b8.Size = iStack_2e0;
        local_1b8.DataPtr = (wchar_t *)local_3d0.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile(&local_1b8,(wchar_t *)FVar20.Data,AutoDetect,pIVar10,8);
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.AllocatorInstance.Data);
        }
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
        if (*(longlong *)local_450 != 0) {
          plVar17 = (longlong *)&local_450->field_0x10;
          if (*(longlong **)&local_450->field_0x28 != (longlong *)0x0) {
            plVar17 = *(longlong **)&local_450->field_0x28;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (*(longlong *)local_468 != 0) {
          plVar17 = (longlong *)&local_468->field_0x10;
          if (*(longlong **)&local_468->field_0x28 != (longlong *)0x0) {
            plVar17 = *(longlong **)&local_468->field_0x28;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (*(longlong *)local_440 != 0) {
          plVar17 = (longlong *)&local_440->field_0x10;
          if (*(longlong **)&local_440->field_0x28 != (longlong *)0x0) {
            plVar17 = *(longlong **)&local_440->field_0x28;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (*(longlong *)local_488 != 0) {
          if (*(longlong **)&local_488->field_0x28 != (longlong *)0x0) {
            plVar16 = *(longlong **)&local_488->field_0x28;
          }
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        if (*(longlong *)local_460 != 0) {
          plVar16 = (longlong *)&local_460->field_0x10;
          if (*(longlong **)&local_460->field_0x28 != (longlong *)0x0) {
            plVar16 = *(longlong **)&local_460->field_0x28;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (*(longlong *)local_458 == 0) {
          return;
        }
        plVar16 = (longlong *)&pTVar23->field_0x10;
        if (*(longlong **)&local_458->field_0x28 != (longlong *)0x0) {
          plVar16 = *(longlong **)&local_458->field_0x28;
        }
        lVar21 = *plVar16;
        goto LAB_143bbeb87;
      }
      pTStack_3a8 = local_490;
      local_3a0 = &param_8;
      uVar2 = (uint)local_448->_padding_;
      uVar19 = (ulonglong)uVar2;
      pTStack_3b8 = local_488;
      local_3b0 = local_468;
      local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.ArrayNum = 0;
      local_4e8.ArrayMax = 0;
      local_4c0 = 0;
      local_4b8 = 0;
      local_3c0 = this;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19);
      }
      if ((uVar2 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar2,&local_4e8.AllocatorInstance,0,&local_4e8.ArrayMax), 0 < (int)uVar2
         )) {
        do {
          if ((local_4e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4c0) &&
             (((FScriptContainerElement *)&local_4c0 <
               local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayMax * 0xc &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_4e8.ArrayNum;
          if (local_4e8.ArrayNum == local_4e8.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_4e8.AllocatorInstance,&local_4e8.ArrayMax);
          }
          local_4e8.ArrayNum = iVar8 + 1;
          *(undefined8 *)(local_4e8.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = local_4c0;
          *(undefined4 *)(local_4e8.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 8) = local_4b8;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      local_148.__this = local_3c0;
      local_148.project_bcs = pTStack_3b8;
      local_498 = 0;
      local_148.dP = local_3b0;
      local_148.nodal_mass = pTStack_3a8;
      local_148.Dt = local_3a0;
      ___e72974f1a7b847f38f7a5b8c4c1e213a_
                (&local_148,(<lambda_1>)&local_498,(<lambda_2>)&local_498,(<lambda_3>)&local_498,
                 (<lambda_4>)&local_498,&local_4e8,&local_4f8,local_470,param_4,false);
      pTVar3 = (this->use_list).Ptr;
      if (pTVar3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar8 = (int)pFVar25->_padding_;
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_378;
        local_370 = &local_388;
        local_378 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l10::<lambda_8>,void,int>
                    ::Call;
        local_388 = pFVar25;
        local_380 = &local_4e8;
      }
      else {
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_368;
        local_360 = &local_298;
        local_368 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l12::<lambda_9>,void,int>
                    ::Call;
        local_290 = pFVar25;
        iVar8 = pTVar3->ArrayNum;
        local_298 = this;
        local_288 = &local_4e8;
      }
      PhysicsParallelFor(iVar8,pTVar18,false);
      uVar2 = (uint)pFVar25->_padding_;
      uVar19 = (ulonglong)uVar2;
      local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.ArrayNum = 0;
      local_508.ArrayMax = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19);
      }
      if ((uVar2 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar2,&local_508.AllocatorInstance,0,&local_508.ArrayMax), 0 < (int)uVar2
         )) {
        do {
          if ((local_508.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a8) &&
             (((FScriptContainerElement *)&local_4a8 <
               local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0xc &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_508.ArrayNum;
          if (local_508.ArrayNum == local_508.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_508.AllocatorInstance,&local_508.ArrayMax);
          }
          local_508.ArrayNum = iVar8 + 1;
          *(undefined8 *)(local_508.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = local_4a8;
          *(undefined4 *)(local_508.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 8) = local_4a0;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      FVar20.Data = local_4e8.AllocatorInstance.Data;
      lVar21 = (longlong)local_4e8.ArrayNum;
      local_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4d0.ArrayNum = local_4e8.ArrayNum;
      if (local_4e8.ArrayNum == 0) {
        local_4d0.ArrayMax = local_4e8.ArrayNum;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_4e8.ArrayNum,0,&local_4d0.AllocatorInstance,local_4e8.ArrayNum,
                   &local_4d0.ArrayMax);
        memcpy(local_4d0.AllocatorInstance.Data,FVar20.Data,lVar21 * 0xc);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar5);
      pcVar4 = *(code **)pTVar5;
      plVar17 = *(longlong **)&pTVar22->field_0x28;
      if (*(longlong **)&pTVar22->field_0x28 == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      uVar9 = (**(code **)(*plVar17 + 8))();
      (*pcVar4)(uVar9,&local_4d0);
      local_428._0_8_ = 0;
      local_428._8_4_ = 0;
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
                (&local_508,&local_428,local_4d0.ArrayNum);
      local_b8[0]._0_8_ = *(undefined8 *)pTVar6;
      this_00 = (this->MEFem).Ptr;
      local_b8[0]._40_8_ = 0;
      if (local_b8[0]._0_8_ != 0) {
        puVar15 = *(undefined8 **)&pTVar6->field_0x28;
        if (*(undefined8 **)&pTVar6->field_0x28 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)&pTVar6->field_0x10;
        }
        (**(code **)*puVar15)(puVar15,&local_b8[0].field_0x10);
      }
      ElasticFEM<float,Chaos::Softs::FSolverParticles>::
      AddNegativeInternalElasticForceDifferential<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>
                (this_00,&this->MParticles,local_b8,&local_4d0,&local_508,&this->MIncidentElements);
      pTVar3 = (this->use_list).Ptr;
      if (pTVar3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_358;
        local_260 = local_490;
        local_258 = &local_4d0;
        local_250 = &param_8;
        local_350 = &local_268;
        local_358 = UE::Core::Private::Function::
                    TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                    ::Call;
        iVar8 = local_508.ArrayNum;
        local_268 = &local_508;
      }
      else {
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_348;
        local_238 = local_490;
        local_230 = &local_4d0;
        local_228 = &param_8;
        local_340 = &local_248;
        local_348 = UE::Core::Private::Function::
                    TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l7::<lambda_2>,void,int>
                    ::Call;
        iVar8 = pTVar3->ArrayNum;
        local_248 = this;
        local_240 = &local_508;
      }
      PhysicsParallelFor(iVar8,pTVar18,false);
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar5);
      pcVar4 = *(code **)pTVar5;
      plVar17 = *(longlong **)&pTVar22->field_0x28;
      if (*(longlong **)&pTVar22->field_0x28 == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      uVar9 = (**(code **)(*plVar17 + 8))();
      (*pcVar4)(uVar9,&local_508);
      if (local_4d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.AllocatorInstance.Data);
      }
      pTVar3 = (this->use_list).Ptr;
      if (pTVar3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar8 = (int)pFVar25->_padding_;
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_328;
        local_330 = &local_4f8;
        local_320 = &local_338;
        local_328 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l15::<lambda_10>,void,int>
                    ::Call;
        local_338 = &local_508;
      }
      else {
        pTVar18 = (TFunctionRef<void___cdecl(int)> *)&local_318;
        local_270 = &local_4f8;
        local_310 = &local_280;
        local_318 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l17::<lambda_11>,void,int>
                    ::Call;
        iVar8 = pTVar3->ArrayNum;
        local_280 = this;
        local_278 = &local_508;
      }
      PhysicsParallelFor(iVar8,pTVar18,false);
      iVar8 = local_508.ArrayNum;
      uVar19 = (ulonglong)local_508.ArrayNum;
      fVar26 = 0.0;
      pFVar1 = local_508.AllocatorInstance.Data + uVar19 * 0xc;
      FVar20.Data = local_508.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar8) {
          local_50f[0] = 0;
          `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_50f);
          uVar19 = local_508._8_8_ & 0xffffffff;
        }
        if (FVar20.Data == pFVar1) break;
        uVar9 = *(undefined8 *)FVar20.Data;
        local_3f8 = *(float *)(FVar20.Data + 8);
        FVar20.Data = FVar20.Data + 0xc;
        local_400._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        fVar26 = (float)uVar9 * (float)uVar9 + fVar26 + local_400._4_4_ * local_400._4_4_ +
                 local_3f8 * local_3f8;
        local_400 = uVar9;
      }
      pIVar10 = IFileManager::Get();
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_480.Data.ArrayNum != 0) {
        FVar20.Data = local_480.Data.AllocatorInstance.Data;
      }
      pFVar11 = ::FString::FString(&local_1c8,L"\r\n");
      pFVar12 = ::FString::SanitizeFloat(&local_1d8,(double)SQRT(fVar26),1);
      pFVar13 = ::FString::FString(&local_168,L"Linear Residual two Norm = ");
      ::FString::ConcatFF(&local_2f8,pFVar13,pFVar12);
      ::FString::ConcatFF(&local_3e0,&local_2f8,pFVar11);
      local_308 = local_3e0.Data.AllocatorInstance.Data;
      iStack_300 = local_3e0.Data.ArrayNum + -1;
      if (local_3e0.Data.ArrayNum == 0) {
        iStack_300 = 0;
      }
      local_1e8._12_4_ = uStack_2fc;
      local_1e8.Size = iStack_300;
      local_1e8.DataPtr = (wchar_t *)local_3e0.Data.AllocatorInstance.Data;
      FFileHelper::SaveStringToFile(&local_1e8,(wchar_t *)FVar20.Data,AutoDetect,pIVar10,8);
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.AllocatorInstance.Data);
      }
      if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.AllocatorInstance.Data);
      }
      if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.AllocatorInstance.Data);
      }
      local_4d8 = local_4d8 + 1;
      param_6 = local_468;
      param_5 = local_450;
      pTVar22 = local_488;
      pTVar23 = local_458;
      pTVar24 = local_460;
    } while (local_4d8 < this->MNumNewtonIterations);
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_5 != 0) {
    plVar16 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)param_6 != 0) {
    plVar16 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)local_440 != 0) {
    plVar16 = (longlong *)&local_440->field_0x10;
    if (*(longlong **)&local_440->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&local_440->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)pTVar22 != 0) {
    plVar16 = (longlong *)&pTVar22->field_0x10;
    if (*(longlong **)&pTVar22->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&pTVar22->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)pTVar24 != 0) {
    plVar16 = (longlong *)&pTVar24->field_0x10;
    if (*(longlong **)&pTVar24->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&pTVar24->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)pTVar23 != 0) {
    plVar16 = (longlong *)&pTVar23->field_0x10;
    if (*(longlong **)&pTVar23->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&pTVar23->field_0x28;
    }
    lVar21 = *plVar16;
LAB_143bbeb87:
    (**(code **)(lVar21 + 0x10))(plVar16);
  }
  return;
}

// PreIterationUpdate<1,1,1> @ 143bc36b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FVelocityAndPressureField *this_00;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  FPerParticleDampVelocity *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  FPerParticleDampVelocity local_a8;
  
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar8 = (longlong)(int)uVar7;
  uVar9 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FVelocityAndPressureField *)
            (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar8 * 0x198);
  FVelocityAndPressureField::UpdateForces(this_00,&this->MParticles,param_1);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar8 * 4);
  local_a8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_a8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_a8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_a8.LocalDampingSpace = CenterOfMass;
  local_a8.bPropertyIndicesInitialized = false;
  local_a8.AngularCoefficient = local_a8.LinearCoefficient;
  FPerParticleDampVelocity::UpdatePositionBasedState
            (&local_a8,&this->MParticles,local_res18[0],param_3);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  fVar10 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar8 * 4);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 <= __real_3f7ff972) {
    local_b8 = __real_3f800000;
    local_b4 = param_1;
    if (__real_322bcc77 < fVar10) {
      fVar10 = logf(__real_3f800000 - fVar10);
      fVar10 = fVar10 * __real_42700000;
      local_b8 = expf(fVar10 * param_1);
      local_b4 = (local_b8 - fVar4) / fVar10;
    }
  }
  else {
    local_b8 = 0.0;
    local_b4 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar8 * 0x30 + lVar1;
  local_c0 = &local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar8 * 0xc;
  local_c8 = this_00;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<1,1,0> @ 143bc3a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FVelocityAndPressureField *this_00;
  float fVar10;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  undefined2 *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FVelocityAndPressureField *)
            (lVar9 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8);
  FVelocityAndPressureField::UpdateForces(this_00,&this->MParticles,param_1);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8[0] = 0;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar6 = uVar8;
  }
  local_78 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_70 = _UNK_15060db28;
  local_a0 = local_a4;
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  fVar10 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 <= __real_3f7ff972) {
    local_b4 = param_1;
    local_b8 = __real_3f800000;
    if (__real_322bcc77 < fVar10) {
      fVar10 = logf(__real_3f800000 - fVar10);
      fVar10 = fVar10 * __real_42700000;
      local_b8 = expf(fVar10 * param_1);
      local_b4 = (local_b8 - fVar4) / fVar10;
    }
  }
  else {
    local_b4 = 0.0;
    local_b8 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar9 * 0x30 + lVar1;
  local_c0 = local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar9 * 0xc;
  local_c8 = this_00;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<1,0,1> @ 143bc3e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  int local_res18 [4];
  code *local_100;
  FNewtonEvolution **local_f8;
  FNewtonEvolution *local_f0;
  int *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  FPerParticleDampVelocity *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  FPerParticleDampVelocity local_a8;
  
  uVar8 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
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
  uVar8 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar8;
  uVar10 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a8.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_a8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_a8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_a8.LocalDampingSpace = CenterOfMass;
  local_a8.bPropertyIndicesInitialized = false;
  local_a8.AngularCoefficient = local_a8.LinearCoefficient;
  FPerParticleDampVelocity::UpdatePositionBasedState
            (&local_a8,&this->MParticles,local_res18[0],param_3);
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar11 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar11 <= __real_3f7ff972) {
    local_c0 = __real_3f800000;
    local_bc = param_1;
    if (__real_322bcc77 < fVar11) {
      fVar11 = logf(__real_3f800000 - fVar11);
      fVar11 = fVar11 * __real_42700000;
      local_c0 = expf(fVar11 * param_1);
      local_bc = (local_c0 - fVar5) / fVar11;
    }
  }
  else {
    local_c0 = 0.0;
    local_bc = 0.0;
  }
  local_e8 = local_res18;
  local_e0 = lVar9 * 0x30 + lVar1;
  local_c8 = &local_a8;
  local_f8 = &local_f0;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>'::__l9::<lambda_1>,void,int>
              ::Call;
  local_f0 = this;
  local_d8 = lVar2 + lVar9 * 0xc;
  local_d0 = lVar9 * 0x198 + lVar3;
  local_b8 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_100,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<1,0,0> @ 143bc41a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar8 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
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
  uVar8 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar8;
  uVar10 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8[0] = 0;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar7 = uVar10;
  }
  local_78 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_70 = _UNK_15060db28;
  local_a0 = local_a4;
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar11 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar11 <= __real_3f7ff972) {
    local_b4 = param_1;
    local_b8 = __real_3f800000;
    if (__real_322bcc77 < fVar11) {
      fVar11 = logf(__real_3f800000 - fVar11);
      fVar11 = fVar11 * __real_42700000;
      local_b8 = expf(fVar11 * param_1);
      local_b4 = (local_b8 - fVar5) / fVar11;
    }
  }
  else {
    local_b4 = 0.0;
    local_b8 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar9 * 0x30 + lVar1;
  local_c0 = local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar9 * 0xc;
  local_c8 = lVar9 * 0x198 + lVar3;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<0,1,1> @ 143bc4530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FVelocityAndPressureField *this_00;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  FPerParticleDampVelocity *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  FPerParticleDampVelocity local_a8;
  
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar8 = (longlong)(int)uVar7;
  uVar9 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FVelocityAndPressureField *)
            (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar8 * 0x198);
  FVelocityAndPressureField::UpdateForces(this_00,&this->MParticles,param_1);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar8 * 4);
  local_a8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_a8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_a8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_a8.LocalDampingSpace = CenterOfMass;
  local_a8.bPropertyIndicesInitialized = false;
  local_a8.AngularCoefficient = local_a8.LinearCoefficient;
  FPerParticleDampVelocity::UpdatePositionBasedState
            (&local_a8,&this->MParticles,local_res18[0],param_3);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  fVar10 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar8 * 4);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 <= __real_3f7ff972) {
    local_b8 = __real_3f800000;
    local_b4 = param_1;
    if (__real_322bcc77 < fVar10) {
      fVar10 = logf(__real_3f800000 - fVar10);
      fVar10 = fVar10 * __real_42700000;
      local_b8 = expf(fVar10 * param_1);
      local_b4 = (local_b8 - fVar4) / fVar10;
    }
  }
  else {
    local_b8 = 0.0;
    local_b4 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar8 * 0x30 + lVar1;
  local_c0 = &local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar8 * 0xc;
  local_c8 = this_00;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<0,1,0> @ 143bc48f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FVelocityAndPressureField *this_00;
  float fVar10;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  undefined2 *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar7 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FVelocityAndPressureField *)
            (lVar9 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8);
  FVelocityAndPressureField::UpdateForces(this_00,&this->MParticles,param_1);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8[0] = 0;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar6 = uVar8;
  }
  local_78 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_70 = _UNK_15060db28;
  local_a0 = local_a4;
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  fVar10 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 <= __real_3f7ff972) {
    local_b4 = param_1;
    local_b8 = __real_3f800000;
    if (__real_322bcc77 < fVar10) {
      fVar10 = logf(__real_3f800000 - fVar10);
      fVar10 = fVar10 * __real_42700000;
      local_b8 = expf(fVar10 * param_1);
      local_b4 = (local_b8 - fVar4) / fVar10;
    }
  }
  else {
    local_b4 = 0.0;
    local_b8 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar9 * 0x30 + lVar1;
  local_c0 = local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar9 * 0xc;
  local_c8 = this_00;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<0,0,1> @ 143bc4c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  int local_res18 [4];
  code *local_100;
  FNewtonEvolution **local_f8;
  FNewtonEvolution *local_f0;
  int *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  FPerParticleDampVelocity *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  FPerParticleDampVelocity local_a8;
  
  uVar8 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
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
  uVar8 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar8;
  uVar10 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a8.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a8.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_a8.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_a8.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_a8.LocalDampingSpace = CenterOfMass;
  local_a8.bPropertyIndicesInitialized = false;
  local_a8.AngularCoefficient = local_a8.LinearCoefficient;
  FPerParticleDampVelocity::UpdatePositionBasedState
            (&local_a8,&this->MParticles,local_res18[0],param_3);
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar11 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar11 <= __real_3f7ff972) {
    local_c0 = __real_3f800000;
    local_bc = param_1;
    if (__real_322bcc77 < fVar11) {
      fVar11 = logf(__real_3f800000 - fVar11);
      fVar11 = fVar11 * __real_42700000;
      local_c0 = expf(fVar11 * param_1);
      local_bc = (local_c0 - fVar5) / fVar11;
    }
  }
  else {
    local_c0 = 0.0;
    local_bc = 0.0;
  }
  local_e8 = local_res18;
  local_e0 = lVar9 * 0x30 + lVar1;
  local_c8 = &local_a8;
  local_f8 = &local_f0;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>'::__l9::<lambda_1>,void,int>
              ::Call;
  local_f0 = this;
  local_d8 = lVar2 + lVar9 * 0xc;
  local_d0 = lVar9 * 0x198 + lVar3;
  local_b8 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_100,
                     param_3 - local_res18[0] < param_4);
  return;
}

// PreIterationUpdate<0,0,0> @ 143bc5020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>
          (FNewtonEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  int local_res18 [4];
  code *local_f8;
  FNewtonEvolution **local_f0;
  FNewtonEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar8 = 0;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
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
  uVar8 = *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar8;
  uVar10 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4);
  local_a8[0] = 0;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar7 = uVar10;
  }
  local_78 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_70 = _UNK_15060db28;
  local_a0 = local_a4;
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar11 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4);
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar11 <= __real_3f7ff972) {
    local_b4 = param_1;
    local_b8 = __real_3f800000;
    if (__real_322bcc77 < fVar11) {
      fVar11 = logf(__real_3f800000 - fVar11);
      fVar11 = fVar11 * __real_42700000;
      local_b8 = expf(fVar11 * param_1);
      local_b4 = (local_b8 - fVar5) / fVar11;
    }
  }
  else {
    local_b4 = 0.0;
    local_b8 = 0.0;
  }
  local_e0 = local_res18;
  local_d8 = lVar9 * 0x30 + lVar1;
  local_c0 = local_a8;
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>'::__l9::<lambda_1>,void,int>
             ::Call;
  local_e8 = this;
  local_d0 = lVar2 + lVar9 * 0xc;
  local_c8 = lVar9 * 0x198 + lVar3;
  local_b0 = param_1;
  PhysicsParallelFor(param_3 - local_res18[0],(TFunctionRef<void___cdecl(int)> *)&local_f8,
                     param_3 - local_res18[0] < param_4);
  return;
}

// FNewtonEvolution @ 143be0920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNewtonEvolution * __thiscall
Chaos::Softs::FNewtonEvolution::FNewtonEvolution
          (FNewtonEvolution *this,FSolverParticles *param_1,FSolverCollisionParticles *param_2,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_5,int param_6,int param_7,TArray<int,TSizedDefaultAllocator<32>_> *param_8,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_9,float param_10,
          float param_11,float param_12,float param_13,float param_14,float param_15,float param_16,
          float param_17,float param_18,bool param_19)

{
  longlong *plVar1;
  longlong *plVar2;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar3;
  int *piVar4;
  TArrayCollectionArray<Chaos::Softs::FPAndInvM> *pTVar5;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar6;
  FSolverParticles *this_00;
  FSolverCollisionParticles *this_01;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar9;
  ConsModelCaches *pCVar10;
  uint uVar11;
  void *pvVar12;
  FScriptContainerElement *_Src;
  CorotatedCache<float> *pCVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  bool bVar18;
  int iVar19;
  CorotatedCache<float> *pCVar20;
  FNewtonEvolution *pFVar21;
  IFileManager *pIVar22;
  FString *pFVar23;
  FString *pFVar24;
  FString *pFVar25;
  longlong *plVar26;
  longlong *plVar27;
  ForAnyElementType FVar28;
  int iVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_468 [32];
  FString local_418;
  FString local_408;
  FString local_3f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_3e8;
  undefined4 local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FScriptContainerElement *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FScriptContainerElement *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FString local_368;
  FScriptContainerElement *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FString local_348;
  FScriptContainerElement *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  FString local_328;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FString local_308;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TStringView<wchar_t> local_2e8;
  FString local_2d8;
  TStringView<wchar_t> local_2c8;
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TStringView<wchar_t> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  TStringView<wchar_t> local_228;
  FString local_218;
  FString local_208;
  TStringView<wchar_t> local_1f8;
  FString local_1e8;
  FString local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  CorotatedCache<float> local_1a8;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_8;
  local_3e8 = param_9;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNewtonEvolution_Softs_Chaos__6B_;
  TParticles<float,3>::TParticles<float,3>
            ((TParticles<float,3> *)&this->MParticles,(TParticles<float,3> *)param_1);
  plVar26 = &(this->MParticles)._padding_;
  plVar1 = &(this->MParticles)._padding_;
  plVar2 = &(this->MParticles)._padding_;
  (this->MParticles)._padding_ = (longlong)&___7__TDynamicParticles_M_02_Chaos__6B_;
  plVar27 = &(this->MParticles)._padding_;
  *plVar26 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar26 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *plVar1 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *plVar2 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar2 = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  *plVar27 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar27 = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MParticles,(TArrayCollectionArrayBase *)plVar26);
  this_00 = &this->MParticles;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar2);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar27);
  pTVar5 = &(this->MParticles).MPAndInvM;
  this_00->_padding_ = (longlong)&___7FSolverParticles_Softs_Chaos__6B_;
  *(undefined ***)pTVar5 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticles).MPAndInvM.field_0x8 = 0;
  *(undefined8 *)&(this->MParticles).MPAndInvM.field_0x8 =
       *(undefined8 *)&(param_1->MPAndInvM).field_0x8;
  *(undefined8 *)&(param_1->MPAndInvM).field_0x8 = 0;
  *(undefined4 *)&(this->MParticles).MPAndInvM.field_0x10 =
       *(undefined4 *)&(param_1->MPAndInvM).field_0x10;
  *(undefined4 *)&(this->MParticles).MPAndInvM.field_0x14 =
       *(undefined4 *)&(param_1->MPAndInvM).field_0x14;
  *(undefined8 *)&(param_1->MPAndInvM).field_0x10 = 0;
  *(undefined ***)pTVar5 = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar5);
  (this->MParticlesActiveView).Items = this_00;
  this_01 = &this->MCollisionParticles;
  (this->MParticlesActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MParticlesActiveView).Ranges.ArrayNum = 0;
  (this->MParticlesActiveView).Ranges.ArrayMax = 0;
  TParticles<float,3>::TParticles<float,3>
            ((TParticles<float,3> *)this_01,(TParticles<float,3> *)param_2);
  plVar26 = &(this->MCollisionParticles)._padding_;
  this_01->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  *plVar26 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MCollisionParticles)._padding_ = 0;
  (this->MCollisionParticles)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->MCollisionParticles)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->MCollisionParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  *plVar26 = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  (this->MCollisionParticles)._padding_ = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MCollisionParticles)._padding_ = 0;
  (this->MCollisionParticles)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->MCollisionParticles)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->MCollisionParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  (this->MCollisionParticles)._padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)plVar26);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,
             (TArrayCollectionArrayBase *)&(this->MCollisionParticles)._padding_);
  pTVar3 = &(this->MCollisionParticles).MV;
  this_01->_padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  pTVar6 = &(this->MCollisionParticles).MW;
  *(undefined ***)pTVar3 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticles).MV.field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).MV.field_0x8 = *(undefined8 *)&(param_2->MV).field_0x8
  ;
  *(undefined8 *)&(param_2->MV).field_0x8 = 0;
  *(undefined4 *)&(this->MCollisionParticles).MV.field_0x10 =
       *(undefined4 *)&(param_2->MV).field_0x10;
  *(undefined4 *)&(this->MCollisionParticles).MV.field_0x14 =
       *(undefined4 *)&(param_2->MV).field_0x14;
  *(undefined8 *)&(param_2->MV).field_0x10 = 0;
  *(undefined ***)pTVar3 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar6 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticles).MW.field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).MW.field_0x8 = *(undefined8 *)&(param_2->MW).field_0x8
  ;
  *(undefined8 *)&(param_2->MW).field_0x8 = 0;
  *(undefined4 *)&(this->MCollisionParticles).MW.field_0x10 =
       *(undefined4 *)&(param_2->MW).field_0x10;
  *(undefined4 *)&(this->MCollisionParticles).MW.field_0x14 =
       *(undefined4 *)&(param_2->MW).field_0x14;
  *(undefined8 *)&(param_2->MW).field_0x10 = 0;
  *(undefined ***)pTVar6 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)pTVar3);
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)pTVar6);
  (this->MCollisionParticlesActiveView).Items = this_01;
  (this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MConstraintInits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->MCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  (this->MConstraintInits).ArrayNum = 0;
  (this->MConstraintInits).ArrayMax = 0;
  *(undefined ***)&this->MCollisionParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  *(undefined ***)&this->MParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  *(undefined ***)&this->MGroupVelocityAndPressureFields =
       &___7__TArrayCollectionArray_VFVelocityAndPressureField_Softs_Chaos___Chaos__6B_;
  (this->MConstraintInitsActiveView).Items = &this->MConstraintInits;
  *(undefined ***)&this->MGroupForceRules =
       &
       ___7__TArrayCollectionArray_V__TFunction___A6AXAEAVFSolverParticles_Softs_Chaos__MH_Z___Chaos__6B_
  ;
  (this->MConstraintRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintRules).ArrayNum = 0;
  (this->MConstraintRules).ArrayMax = 0;
  (this->MConstraintRulesActiveView).Items = &this->MConstraintRules;
  *(undefined ***)&this->MGroupCollisionThicknesses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MGroupCoefficientOfFrictions = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MGroupDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MGroupLocalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  (this->MCollisionParticlesActiveView).Ranges.ArrayNum = 0;
  (this->MCollisionParticlesActiveView).Ranges.ArrayMax = 0;
  *(undefined8 *)&(this->MCollisionTransforms).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionTransforms).field_0x10 = 0;
  *(undefined8 *)&(this->MCollided).field_0x8 = 0;
  *(undefined8 *)&(this->MCollided).field_0x10 = 0;
  *(undefined ***)&this->MCollided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticleGroupIds).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticleGroupIds).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleGroupIds).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleGroupIds).field_0x10 = 0;
  (this->MCollisionContacts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MCollisionContacts).ArrayNum = 0;
  (this->MCollisionContacts).ArrayMax = 0;
  (this->MCollisionNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MCollisionNormals).ArrayNum = 0;
  (this->MCollisionNormals).ArrayMax = 0;
  *(undefined8 *)&(this->MGroupGravityAccelerations).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupGravityAccelerations).field_0x10 = 0;
  *(undefined ***)&this->MGroupGravityAccelerations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MGroupVelocityAndPressureFields).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupVelocityAndPressureFields).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupForceRules).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupForceRules).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupCollisionThicknesses).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupCollisionThicknesses).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupCoefficientOfFrictions).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupCoefficientOfFrictions).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupDampings).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupDampings).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupLocalDampings).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupLocalDampings).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupUseCCDs).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupUseCCDs).field_0x10 = 0;
  *(undefined ***)&this->MGroupUseCCDs = &___7__TArrayCollectionArray__N_Chaos__6B_;
  (this->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintInitsActiveView).Ranges.ArrayNum = 0;
  (this->MConstraintInitsActiveView).Ranges.ArrayMax = 0;
  (this->MConstraintRulesActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintRulesActiveView).Ranges.ArrayNum = 0;
  (this->MConstraintRulesActiveView).Ranges.ArrayMax = 0;
  (this->MPostCollisionConstraintRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPostCollisionConstraintRules).ArrayNum = 0;
  (this->MPostCollisionConstraintRules).ArrayMax = 0;
  (this->MPostCollisionConstraintRulesActiveView).Items = &this->MPostCollisionConstraintRules;
  pTVar7 = &this->MMesh;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.ArrayNum = 0;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.ArrayMax = 0;
  *(undefined8 *)&this->MKinematicUpdate = 0;
  *(undefined8 *)&(this->MKinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->MCollisionKinematicUpdate = 0;
  *(undefined8 *)&(this->MCollisionKinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->UpdatePositionBasedState = 0;
  *(undefined8 *)&(this->UpdatePositionBasedState).field_0x28 = 0;
  *(undefined8 *)&this->PStress = 0;
  *(undefined8 *)&(this->PStress).field_0x28 = 0;
  *(undefined8 *)&this->DeltaPStress = 0;
  *(undefined8 *)&(this->DeltaPStress).field_0x28 = 0;
  *(undefined8 *)&this->ProjectBCs = 0;
  *(undefined8 *)&(this->ProjectBCs).field_0x28 = 0;
  *(undefined8 *)&this->SetBCs = 0;
  *(undefined8 *)&(this->SetBCs).field_0x28 = 0;
  *(undefined8 *)&this->MAddExternalForce = 0;
  *(undefined8 *)&(this->MAddExternalForce).field_0x28 = 0;
  this->MNumNewtonIterations = param_6;
  this->MNumCGIterations = param_7;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar29 = *(int *)(local_408.Data.AllocatorInstance.Data + 8);
  pvVar12 = *(void **)local_408.Data.AllocatorInstance.Data;
  piVar4 = &(this->MMesh).ArrayMax;
  (this->MMesh).ArrayNum = iVar29;
  if (iVar29 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar29,0,&pTVar7->AllocatorInstance,iVar29,piVar4);
    memcpy((pTVar7->AllocatorInstance).Data,pvVar12,(longlong)iVar29 << 4);
  }
  pTVar8 = &this->MConstrainedVertices;
  (this->MIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MIncidentElements).AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
  (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MIncidentElements).ArrayNum = param_5->ArrayNum;
  (this->MIncidentElements).ArrayMax = param_5->ArrayMax;
  param_5->ArrayNum = 0;
  param_5->ArrayMax = 0;
  this->MCollisionThickness = param_10;
  this->MDamping = param_13;
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  *(undefined8 *)&this->MGravity = 0;
  *(undefined4 *)&(this->MGravity).field_0x8 = 0x44752a8f;
  this->MNewtonTol = param_17;
  this->MCGTol = param_18;
  this->MCoefficientOfFriction = param_12;
  (this->ElementForces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementForces).ArrayNum = 0;
  (this->ElementForces).ArrayMax = 0;
  (this->MVn).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MVn).ArrayNum = 0;
  (this->MVn).ArrayMax = 0;
  (this->MNodalMass).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MNodalMass).ArrayNum = 0;
  (this->MNodalMass).ArrayMax = 0;
  (this->MResidualNorm).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MResidualNorm).ArrayNum = 0;
  (this->MResidualNorm).ArrayMax = 0;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->MLocalDamping = param_14;
  this->MTime = 0.0;
  this->MSmoothDt = 0.033333335;
  iVar29 = *(int *)(local_3f8.Data.AllocatorInstance.Data + 8);
  pvVar12 = *(void **)local_3f8.Data.AllocatorInstance.Data;
  piVar4 = &(this->MConstrainedVertices).ArrayMax;
  (this->MConstrainedVertices).ArrayNum = iVar29;
  if (iVar29 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar29,0,&pTVar8->AllocatorInstance,iVar29,piVar4);
    memcpy((pTVar8->AllocatorInstance).Data,pvVar12,(longlong)iVar29 << 2);
  }
  pTVar9 = &this->MBCPositions;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar29 = local_3e8->ArrayNum;
  _Src = (local_3e8->AllocatorInstance).Data;
  piVar4 = &(this->MBCPositions).ArrayMax;
  (this->MBCPositions).ArrayNum = iVar29;
  if (iVar29 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar29,0,&pTVar9->AllocatorInstance,iVar29,piVar4);
    memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar29 * 0xc);
  }
  pCVar10 = &this->ConsCaches;
  piVar4 = &(this->ConsCaches).CorotatedCache.ArrayMax;
  *piVar4 = 0;
  this->NoVerbose = false;
  (pCVar10->CorotatedCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsCaches).CorotatedCache.ArrayNum = 0;
  (this->MEFem).Ptr = (ElasticFEM<float,Chaos::Softs::FSolverParticles> *)0x0;
  (this->use_list).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->bWriteDebugInfo = param_19;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupGravityAccelerations
            );
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MGroupVelocityAndPressureFields);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupForceRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupCollisionThicknesses
            );
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MGroupCoefficientOfFrictions);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupDampings);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupLocalDampings);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupUseCCDs);
  AddGroups(this,1);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MParticles,
             (TArrayCollectionArrayBase *)&this->MParticleGroupIds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)&this->MCollisionTransforms);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)&this->MCollided);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,
             (TArrayCollectionArrayBase *)&this->MCollisionParticleGroupIds);
  uVar11 = *(uint *)(local_408.Data.AllocatorInstance.Data + 8);
  uVar30 = (ulonglong)uVar11;
  pCVar20 = CorotatedCache<float>::CorotatedCache<float>(&local_1a8);
  if (-1 < (int)uVar11) {
    DestructItems<Chaos::Softs::CorotatedCache<float>,int>
              ((CorotatedCache<float> *)(pCVar10->CorotatedCache).AllocatorInstance.Data,
               (this->ConsCaches).CorotatedCache.ArrayNum);
    iVar29 = 0;
    (this->ConsCaches).CorotatedCache.ArrayNum = 0;
    if (*piVar4 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar11,(ForAnyElementType *)pCVar10,0,piVar4);
    }
    if (0 < (int)uVar11) {
      do {
        pCVar13 = (CorotatedCache<float> *)(pCVar10->CorotatedCache).AllocatorInstance.Data;
        if ((pCVar13 <= pCVar20) && (pCVar20 < pCVar13 + *piVar4)) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            pFVar21 = (FNewtonEvolution *)(*pcVar14)();
            return pFVar21;
          }
        }
        iVar19 = (this->ConsCaches).CorotatedCache.ArrayNum;
        if (iVar19 == *piVar4) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,(ForAnyElementType *)pCVar10,piVar4);
        }
        (this->ConsCaches).CorotatedCache.ArrayNum = iVar19 + 1;
        CorotatedCache<float>::CorotatedCache<float>
                  ((CorotatedCache<float> *)
                   ((pCVar10->CorotatedCache).AllocatorInstance.Data + (longlong)iVar19 * 0x38),
                   pCVar20);
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (local_1a8.DInvCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.DInvCache.AllocatorInstance.Data);
    }
    if (local_1a8.RCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.RCache.AllocatorInstance.Data);
    }
    if (local_1a8.JFInvTCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.JFInvTCache.AllocatorInstance.Data);
    }
    lVar17 = (this->MParticles)._padding_;
    local_3e8 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
    local_3e0 = 0;
    fVar32 = param_16 + __real_3f800000;
    fVar31 = __real_3f800000 - (param_16 + param_16);
    this->Mu = param_15 / (param_16 + param_16 + __real_40000000);
    this->Lambda = (param_15 * param_16) / (fVar31 * fVar32);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
              (&this->MVn,(TVector<float,3> *)&local_3e8,(int)lVar17);
    local_168 = *(longlong *)&this->UpdatePositionBasedState;
    uVar16 = *(undefined8 *)&(this->UpdatePositionBasedState).field_0x8;
    local_158 = *(longlong *)&(this->UpdatePositionBasedState).field_0x10;
    uStack_150 = *(undefined8 *)&(this->UpdatePositionBasedState).field_0x18;
    uVar15 = *(undefined8 *)&(this->UpdatePositionBasedState).field_0x20;
    plStack_140 = *(longlong **)&(this->UpdatePositionBasedState).field_0x28;
    *(code **)&this->UpdatePositionBasedState =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_1>,void,bool>
         ::Call;
    *(undefined8 *)&(this->UpdatePositionBasedState).field_0x8 = uStack_160;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x10 = 0x50b07238;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->UpdatePositionBasedState).field_0x18 = this;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x20 = (undefined4)local_148;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x24 = local_148._4_4_;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x28 = 0;
    *(undefined4 *)&(this->UpdatePositionBasedState).field_0x2c = 0;
    local_148 = uVar15;
    uStack_160 = uVar16;
    if (local_168 != 0) {
      plVar26 = &local_158;
      if (plStack_140 != (longlong *)0x0) {
        plVar26 = plStack_140;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    local_78 = *(longlong *)&this->PStress;
    uVar16 = *(undefined8 *)&(this->PStress).field_0x8;
    local_68 = *(longlong *)&(this->PStress).field_0x10;
    uStack_60 = *(undefined8 *)&(this->PStress).field_0x18;
    uVar15 = *(undefined8 *)&(this->PStress).field_0x20;
    plStack_50 = *(longlong **)&(this->PStress).field_0x28;
    *(code **)&this->PStress =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_2>,void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int>
         ::Call;
    *(undefined8 *)&(this->PStress).field_0x8 = uStack_70;
    *(undefined4 *)&(this->PStress).field_0x10 = 0x50b07258;
    *(undefined4 *)&(this->PStress).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->PStress).field_0x18 = this;
    *(undefined4 *)&(this->PStress).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(this->PStress).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(this->PStress).field_0x28 = 0;
    *(undefined4 *)&(this->PStress).field_0x2c = 0;
    uStack_70 = uVar16;
    local_58 = uVar15;
    if (local_78 != 0) {
      plVar26 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar26 = plStack_50;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    local_138 = *(longlong *)&this->DeltaPStress;
    uVar16 = *(undefined8 *)&(this->DeltaPStress).field_0x8;
    local_128 = *(longlong *)&(this->DeltaPStress).field_0x10;
    uStack_120 = *(undefined8 *)&(this->DeltaPStress).field_0x18;
    uVar15 = *(undefined8 *)&(this->DeltaPStress).field_0x20;
    plStack_110 = *(longlong **)&(this->DeltaPStress).field_0x28;
    *(code **)&this->DeltaPStress =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_3>,void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int>
         ::Call;
    *(undefined8 *)&(this->DeltaPStress).field_0x8 = uStack_130;
    *(undefined4 *)&(this->DeltaPStress).field_0x10 = 0x50b07278;
    *(undefined4 *)&(this->DeltaPStress).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->DeltaPStress).field_0x18 = this;
    *(undefined4 *)&(this->DeltaPStress).field_0x20 = (undefined4)local_118;
    *(undefined4 *)&(this->DeltaPStress).field_0x24 = local_118._4_4_;
    *(undefined4 *)&(this->DeltaPStress).field_0x28 = 0;
    *(undefined4 *)&(this->DeltaPStress).field_0x2c = 0;
    uStack_130 = uVar16;
    local_118 = uVar15;
    if (local_138 != 0) {
      plVar26 = &local_128;
      if (plStack_110 != (longlong *)0x0) {
        plVar26 = plStack_110;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    local_108 = *(longlong *)&this->ProjectBCs;
    uVar16 = *(undefined8 *)&(this->ProjectBCs).field_0x8;
    local_f8 = *(longlong *)&(this->ProjectBCs).field_0x10;
    uStack_f0 = *(undefined8 *)&(this->ProjectBCs).field_0x18;
    uVar15 = *(undefined8 *)&(this->ProjectBCs).field_0x20;
    plStack_e0 = *(longlong **)&(this->ProjectBCs).field_0x28;
    *(code **)&this->ProjectBCs =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_4>,void,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
         ::Call;
    *(undefined8 *)&(this->ProjectBCs).field_0x8 = uStack_100;
    *(undefined4 *)&(this->ProjectBCs).field_0x10 = 0x50b07298;
    *(undefined4 *)&(this->ProjectBCs).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->ProjectBCs).field_0x18 = this;
    *(undefined4 *)&(this->ProjectBCs).field_0x20 = (undefined4)local_e8;
    *(undefined4 *)&(this->ProjectBCs).field_0x24 = local_e8._4_4_;
    *(undefined4 *)&(this->ProjectBCs).field_0x28 = 0;
    *(undefined4 *)&(this->ProjectBCs).field_0x2c = 0;
    uStack_100 = uVar16;
    local_e8 = uVar15;
    if (local_108 != 0) {
      plVar26 = &local_f8;
      if (plStack_e0 != (longlong *)0x0) {
        plVar26 = plStack_e0;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    local_d8 = *(longlong *)&this->SetBCs;
    uVar16 = *(undefined8 *)&(this->SetBCs).field_0x8;
    local_c8 = *(longlong *)&(this->SetBCs).field_0x10;
    uStack_c0 = *(undefined8 *)&(this->SetBCs).field_0x18;
    uVar15 = *(undefined8 *)&(this->SetBCs).field_0x20;
    plStack_b0 = *(longlong **)&(this->SetBCs).field_0x28;
    *(code **)&this->SetBCs =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_5>,void,float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
         ::Call;
    *(undefined8 *)&(this->SetBCs).field_0x8 = uStack_d0;
    *(undefined4 *)&(this->SetBCs).field_0x10 = 0x50b072b8;
    *(undefined4 *)&(this->SetBCs).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->SetBCs).field_0x18 = this;
    *(undefined4 *)&(this->SetBCs).field_0x20 = (undefined4)local_b8;
    *(undefined4 *)&(this->SetBCs).field_0x24 = local_b8._4_4_;
    *(undefined4 *)&(this->SetBCs).field_0x28 = 0;
    *(undefined4 *)&(this->SetBCs).field_0x2c = 0;
    uStack_d0 = uVar16;
    local_b8 = uVar15;
    if (local_d8 != 0) {
      plVar26 = &local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar26 = plStack_b0;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    local_a8 = *(longlong *)&this->MAddExternalForce;
    uVar16 = *(undefined8 *)&(this->MAddExternalForce).field_0x8;
    local_98 = *(longlong *)&(this->MAddExternalForce).field_0x10;
    uStack_90 = *(undefined8 *)&(this->MAddExternalForce).field_0x18;
    uVar15 = *(undefined8 *)&(this->MAddExternalForce).field_0x20;
    plStack_80 = *(longlong **)&(this->MAddExternalForce).field_0x28;
    *(code **)&this->MAddExternalForce =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_6>,void,float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
         ::Call;
    *(undefined8 *)&(this->MAddExternalForce).field_0x8 = uStack_a0;
    *(undefined4 *)&(this->MAddExternalForce).field_0x10 = 0x50b072d8;
    *(undefined4 *)&(this->MAddExternalForce).field_0x14 = 1;
    *(FNewtonEvolution **)&(this->MAddExternalForce).field_0x18 = this;
    *(undefined4 *)&(this->MAddExternalForce).field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(this->MAddExternalForce).field_0x24 = local_88._4_4_;
    *(undefined4 *)&(this->MAddExternalForce).field_0x28 = 0;
    *(undefined4 *)&(this->MAddExternalForce).field_0x2c = 0;
    uStack_a0 = uVar16;
    local_88 = uVar15;
    if (local_a8 != 0) {
      plVar26 = &local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar26 = plStack_80;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    FPaths::ProjectDir(&local_418);
    ::FString::AppendChars(&local_418,L"/HoudiniOutput/NewtonLog.txt",0x1c);
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_2d8,L"Running Newton\'s Method\r\n");
    local_398 = (pFVar23->Data).AllocatorInstance.Data;
    iVar19 = (pFVar23->Data).ArrayNum;
    iStack_390 = iVar19 + -1;
    if (iVar19 == 0) {
      iStack_390 = iVar29;
    }
    local_2e8._12_4_ = uStack_38c;
    local_2e8.Size = iStack_390;
    local_2e8.DataPtr = (wchar_t *)local_398;
    FFileHelper::SaveStringToFile(&local_2e8,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_2b8,L"Current Configuration:\r\n");
    local_388 = (pFVar23->Data).AllocatorInstance.Data;
    iVar19 = (pFVar23->Data).ArrayNum;
    iStack_380 = iVar19 + -1;
    if (iVar19 == 0) {
      iStack_380 = 0;
    }
    local_2c8._12_4_ = uStack_37c;
    local_2c8.Size = iStack_380;
    local_2c8.DataPtr = (wchar_t *)local_388;
    FFileHelper::SaveStringToFile(&local_2c8,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_278,L"\r\n");
    pFVar24 = ::FString::SanitizeFloat(&local_288,(double)this->MNewtonTol,1);
    pFVar25 = ::FString::FString(&local_298,L"Newton Tol = ");
    ::FString::ConcatFF(&local_368,pFVar25,pFVar24);
    ::FString::ConcatFF(&local_3d8,&local_368,pFVar23);
    local_378 = local_3d8.Data.AllocatorInstance.Data;
    iStack_370 = local_3d8.Data.ArrayNum + -1;
    if (local_3d8.Data.ArrayNum == 0) {
      iStack_370 = iVar29;
    }
    local_2a8._12_4_ = uStack_36c;
    local_2a8.Size = iStack_370;
    local_2a8.DataPtr = (wchar_t *)local_3d8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_2a8,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_238,L"\r\n");
    pFVar24 = ::FString::SanitizeFloat(&local_248,(double)this->MCGTol,1);
    pFVar25 = ::FString::FString(&local_258,L"CG Tol = ");
    ::FString::ConcatFF(&local_348,pFVar25,pFVar24);
    ::FString::ConcatFF(&local_3c8,&local_348,pFVar23);
    local_358 = local_3c8.Data.AllocatorInstance.Data;
    iStack_350 = local_3c8.Data.ArrayNum + -1;
    if (local_3c8.Data.ArrayNum == 0) {
      iStack_350 = iVar29;
    }
    local_268._12_4_ = uStack_34c;
    local_268.Size = iStack_350;
    local_268.DataPtr = (wchar_t *)local_3c8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_268,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_208,L"\r\n");
    local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f8.Data.ArrayNum = 0;
    local_3f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_3f8,this->MNumNewtonIterations);
    pFVar24 = ::FString::FString(&local_218,L"Max Newton Iters = ");
    ::FString::ConcatFF(&local_328,pFVar24,&local_3f8);
    ::FString::ConcatFF(&local_3b8,&local_328,pFVar23);
    local_338 = local_3b8.Data.AllocatorInstance.Data;
    iStack_330 = local_3b8.Data.ArrayNum + -1;
    if (local_3b8.Data.ArrayNum == 0) {
      iStack_330 = iVar29;
    }
    local_228._12_4_ = uStack_32c;
    local_228.Size = iStack_330;
    local_228.DataPtr = (wchar_t *)local_3b8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_228,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_1d8,L"\r\n");
    local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.Data.ArrayNum = 0;
    local_408.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_408,this->MNumCGIterations);
    pFVar24 = ::FString::FString(&local_1e8,L"Max CG Iters = ");
    ::FString::ConcatFF(&local_308,pFVar24,&local_408);
    ::FString::ConcatFF(&local_3a8,&local_308,pFVar23);
    local_318 = local_3a8.Data.AllocatorInstance.Data;
    iStack_310 = local_3a8.Data.ArrayNum + -1;
    if (local_3a8.Data.ArrayNum == 0) {
      iStack_310 = iVar29;
    }
    local_1f8._12_4_ = uStack_30c;
    local_1f8.Size = iStack_310;
    local_1f8.DataPtr = (wchar_t *)local_3a8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_1f8,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    pIVar22 = IFileManager::Get();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_418.Data.ArrayNum != 0) {
      FVar28.Data = local_418.Data.AllocatorInstance.Data;
    }
    pFVar23 = ::FString::FString(&local_1b8,L"ConsModel: Corotated\r\n");
    local_2f8 = (pFVar23->Data).AllocatorInstance.Data;
    iVar29 = (pFVar23->Data).ArrayNum;
    iStack_2f0 = iVar29 + -1;
    if (iVar29 == 0) {
      iStack_2f0 = 0;
    }
    local_1c8._12_4_ = uStack_2ec;
    local_1c8.Size = iStack_2f0;
    local_1c8.DataPtr = (wchar_t *)local_2f8;
    FFileHelper::SaveStringToFile(&local_1c8,(wchar_t *)FVar28.Data,AutoDetect,pIVar22,8);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar30);
}

// ~FNewtonEvolution @ 143be2ef0

void __thiscall Chaos::Softs::FNewtonEvolution::~FNewtonEvolution(FNewtonEvolution *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *pEVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FNewtonEvolution_Softs_Chaos__6B_;
  pTVar1 = (this->use_list).Ptr;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
  }
  pEVar3 = (this->MEFem).Ptr;
  if (pEVar3 != (ElasticFEM<float,Chaos::Softs::FSolverParticles> *)0x0) {
    DestructItems<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
               (pEVar3->MIncidentElements).AllocatorInstance.Data,
               (pEVar3->MIncidentElements).ArrayNum);
    pFVar2 = (pEVar3->MIncidentElements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar3->MNodalMass).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar3->ElementForces).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar3->Measure).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar3->DmInverse).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pEVar3,0x60);
  }
  DestructItems<Chaos::Softs::CorotatedCache<float>,int>
            ((CorotatedCache<float> *)(this->ConsCaches).CorotatedCache.AllocatorInstance.Data,
             (this->ConsCaches).CorotatedCache.ArrayNum);
  pFVar2 = (this->ConsCaches).CorotatedCache.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MBCPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MConstrainedVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MResidualNorm).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MNodalMass).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MVn).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ElementForces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Measure).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
             (this->MIncidentElements).AllocatorInstance.Data,(this->MIncidentElements).ArrayNum);
  pFVar2 = (this->MIncidentElements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MMesh).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->MAddExternalForce != 0) {
    plVar4 = *(longlong **)&(this->MAddExternalForce).field_0x28;
    plVar6 = (longlong *)&(this->MAddExternalForce).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->SetBCs != 0) {
    plVar4 = *(longlong **)&(this->SetBCs).field_0x28;
    plVar6 = (longlong *)&(this->SetBCs).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->ProjectBCs != 0) {
    plVar4 = *(longlong **)&(this->ProjectBCs).field_0x28;
    plVar6 = (longlong *)&(this->ProjectBCs).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->DeltaPStress != 0) {
    plVar4 = *(longlong **)&(this->DeltaPStress).field_0x28;
    plVar6 = (longlong *)&(this->DeltaPStress).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->PStress != 0) {
    plVar4 = *(longlong **)&(this->PStress).field_0x28;
    plVar6 = (longlong *)&(this->PStress).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->UpdatePositionBasedState != 0) {
    plVar4 = *(longlong **)&(this->UpdatePositionBasedState).field_0x28;
    plVar6 = (longlong *)&(this->UpdatePositionBasedState).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->MCollisionKinematicUpdate != 0) {
    plVar4 = *(longlong **)&(this->MCollisionKinematicUpdate).field_0x28;
    plVar6 = (longlong *)&(this->MCollisionKinematicUpdate).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->MKinematicUpdate != 0) {
    plVar4 = *(longlong **)&(this->MKinematicUpdate).field_0x28;
    plVar6 = (longlong *)&(this->MKinematicUpdate).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar2 = (this->MPostCollisionConstraintRulesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MPostCollisionConstraintRules).AllocatorInstance.Data,
             (this->MPostCollisionConstraintRules).ArrayNum);
  pFVar2 = (this->MPostCollisionConstraintRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MConstraintRulesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MConstraintRules).AllocatorInstance.Data,(this->MConstraintRules).ArrayNum);
  pFVar2 = (this->MConstraintRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MConstraintInits).AllocatorInstance.Data,(this->MConstraintInits).ArrayNum);
  pFVar2 = (this->MConstraintInits).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->MGroupUseCCDs = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupUseCCDs).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupLocalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupLocalDampings).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupDampings).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupCoefficientOfFrictions = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupCoefficientOfFrictions).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupCollisionThicknesses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupCollisionThicknesses).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupForceRules =
       &
       ___7__TArrayCollectionArray_V__TFunction___A6AXAEAVFSolverParticles_Softs_Chaos__MH_Z___Chaos__6B_
  ;
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,int>
            (*(TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)> **)
              &(this->MGroupForceRules).field_0x8,*(int *)&(this->MGroupForceRules).field_0x10);
  pvVar5 = *(void **)&(this->MGroupForceRules).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupVelocityAndPressureFields =
       &___7__TArrayCollectionArray_VFVelocityAndPressureField_Softs_Chaos___Chaos__6B_;
  DestructItems<Chaos::Softs::FVelocityAndPressureField,int>
            (*(FVelocityAndPressureField **)&(this->MGroupVelocityAndPressureFields).field_0x8,
             *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10);
  pvVar5 = *(void **)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MGroupGravityAccelerations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar5 = *(void **)&(this->MGroupGravityAccelerations).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  pFVar2 = (this->MCollisionNormals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MCollisionContacts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->MParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar5 = *(void **)&(this->MParticleGroupIds).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MCollisionParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar5 = *(void **)&(this->MCollisionParticleGroupIds).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MCollided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar5 = *(void **)&(this->MCollided).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&this->MCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar5 = *(void **)&(this->MCollisionTransforms).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  pFVar2 = (this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&(this->MCollisionParticles).MW =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->MCollisionParticles)._padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  pvVar5 = *(void **)&(this->MCollisionParticles).MW.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined ***)&(this->MCollisionParticles).MV =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar5 = *(void **)&(this->MCollisionParticles).MV.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSimpleGeometryParticles<float,3>::~TSimpleGeometryParticles<float,3>
            ((TSimpleGeometryParticles<float,3> *)&this->MCollisionParticles);
  pFVar2 = (this->MParticlesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&(this->MParticles).MPAndInvM =
       &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  pvVar5 = *(void **)&(this->MParticles).MPAndInvM.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TDynamicParticles<float,3>::~TDynamicParticles<float,3>
            ((TDynamicParticles<float,3> *)&this->MParticles);
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// operator() @ 143be5100

void __thiscall
`Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
::__l15::<lambda_10>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  lVar9 = (longlong)param_1;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)this;
  fVar1 = *(float *)(*plVar2 + lVar9 * 0xc);
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  plVar2 = *(longlong **)((longlong)this + 8);
  *(float *)(lVar4 + lVar9 * 0xc) = *(float *)(lVar4 + lVar9 * 0xc) - fVar1;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)this;
  fVar1 = *(float *)(*plVar2 + 4 + lVar9 * 0xc);
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  plVar2 = *(longlong **)((longlong)this + 8);
  *(float *)(lVar4 + 4 + lVar9 * 0xc) = *(float *)(lVar4 + 4 + lVar9 * 0xc) - fVar1;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)this;
  fVar1 = *(float *)(*plVar2 + 8 + lVar9 * 0xc);
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  *(float *)(lVar4 + 8 + lVar9 * 0xc) = *(float *)(lVar4 + 8 + lVar9 * 0xc) - fVar1;
  return;
}

// operator() @ 143be5350

void __thiscall
`Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
::__l17::<lambda_11>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  plVar2 = *(longlong **)(*(longlong *)this + 0x5d0);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar8 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  lVar10 = (longlong)(int)uVar8;
  uVar9 = ~uVar8 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar3[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  fVar1 = *(float *)(*plVar3 + lVar10 * 0xc);
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar2[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar2;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  *(float *)(lVar4 + lVar10 * 0xc) = *(float *)(lVar4 + lVar10 * 0xc) - fVar1;
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar2[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  fVar1 = *(float *)(*plVar2 + 4 + lVar10 * 0xc);
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar3[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  *(float *)(lVar4 + 4 + lVar10 * 0xc) = *(float *)(lVar4 + 4 + lVar10 * 0xc) - fVar1;
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar2[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  fVar1 = *(float *)(*plVar2 + 8 + lVar10 * 0xc);
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar3[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  *(float *)(lVar4 + 8 + lVar10 * 0xc) = *(float *)(lVar4 + 8 + lVar10 * 0xc) - fVar1;
  return;
}

// operator() @ 143be6390

void __thiscall
`Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
::__l4::<lambda_1>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *this_00;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_58 [12];
  uint uStack_4c;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_28;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_20;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_18;
  undefined8 local_10;
  
  local_48.ArrayNum = param_2->ArrayNum;
  lVar8 = (longlong)local_48.ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pFVar1,lVar8 * 0xc);
  }
  puVar2 = *(undefined8 **)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar7 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar7 = (longlong *)puVar2[5];
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar4,&local_48);
  local_58._0_8_ = 0;
  stack0xffffffffffffffb0 = (undefined1 *)((ulonglong)uStack_4c << 0x20);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (param_1,(TVector<float,3> *)local_58,local_48.ArrayNum);
  plVar7 = *(longlong **)((longlong)this + 0x10);
  lVar8 = *(longlong *)this;
  local_38._0_8_ = *plVar7;
  this_00 = *(ElasticFEM<float,Chaos::Softs::FSolverParticles> **)(lVar8 + 0x5c8);
  local_10 = 0;
  if (local_38._0_8_ != 0) {
    plVar6 = plVar7 + 2;
    if ((longlong *)plVar7[5] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar7[5];
    }
    (**(code **)*plVar6)(plVar6,&local_28);
  }
  Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddNegativeInternalElasticForceDifferential<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>
            (this_00,(FSolverParticles *)(*(longlong *)this + 0x20),
             (TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
              *)local_38,&local_48,param_1,
             (TArray<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(lVar8 + 0x4f8));
  local_38._0_8_ = *(undefined8 *)this;
  local_28 = *(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x18);
  pFVar1 = (((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(local_38._0_8_ + 0x5d0)
            )->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    iVar5 = param_1->ArrayNum;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
         ::Call;
    local_38._0_8_ = param_1;
    local_38._8_8_ = local_28;
    local_28 = &local_48;
    local_20 = *(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x20);
  }
  else {
    local_20 = &local_48;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l7::<lambda_2>,void,int>
         ::Call;
    iVar5 = *(int *)(pFVar1 + 8);
    local_38._8_8_ = param_1;
    local_18 = *(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x20);
  }
  stack0xffffffffffffffb0 = local_38;
  Chaos::PhysicsParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)local_58,false);
  puVar2 = *(undefined8 **)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar7 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar7 = (longlong *)puVar2[5];
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar4,param_1);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143be6f70

void __thiscall
`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l8::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)this;
  uVar7 = 0;
  if (param_2 < *(int *)(lVar9 + 0x200)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  lVar2 = *(longlong *)this;
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x1f8) + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = ~uVar7 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar2 + 0x250)) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
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
  lVar2 = *(longlong *)(lVar2 + 0x248);
  lVar6 = lVar9 * 0x198;
  fVar1 = *(float *)(lVar6 + 0x140 + lVar2);
  if (((fVar1 != 0.0) || (fVar1 + *(float *)(lVar6 + 0x144 + lVar2) != 0.0)) ||
     ((0.0 < *(float *)(lVar6 + 0x168 + lVar2) &&
      (((((0.0 < *(float *)(lVar6 + 0xe0 + lVar2) || (*(float *)(lVar6 + 0xe4 + lVar2) != 0.0)) ||
         (0.0 < *(float *)(lVar6 + 0x110 + lVar2))) ||
        ((*(float *)(lVar6 + 0x114 + lVar2) != 0.0 || (0.0 < *(float *)(lVar6 + 0x80 + lVar2))))) ||
       ((*(float *)(lVar6 + 0x84 + lVar2) != 0.0 ||
        ((0.0 < *(float *)(lVar6 + 0xb0 + lVar2) || (*(float *)(lVar6 + 0xb4 + lVar2) != 0.0))))))))
     )) {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x2c8)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
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
    lVar6 = *(longlong *)this;
    if (*(float *)(*(longlong *)(lVar2 + 0x2c0) + lVar9 * 4) <= 0.0) {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x268)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
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
      if (*(longlong *)(*(longlong *)(lVar6 + 0x260) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x268)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
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
      if (*(longlong *)(*(longlong *)(lVar6 + 0x260) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
  }
  else {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x2c8)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
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
    lVar6 = *(longlong *)this;
    if (*(float *)(*(longlong *)(lVar2 + 0x2c0) + lVar9 * 4) <= 0.0) {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x268)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
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
      if (*(longlong *)(*(longlong *)(lVar6 + 0x260) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x268)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
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
      if (*(longlong *)(*(longlong *)(lVar6 + 0x260) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>
                  (*(FNewtonEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
  }
  return;
}

// operator() @ 143be73d0

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x38),uVar14);
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be7620

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x38),uVar14);
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be7850

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x38),uVar14);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be7a80

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x38),uVar14);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be7ca0

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be7ed0

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be80f0

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x38),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be8310

void __thiscall
`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x360),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x38),*(float *)(lVar7 + 0x53c),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x38);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_60 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_68 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_64 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_68);
  Chaos::TDynamicParticles<float,3>::V
            ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  return;
}

// operator() @ 143be8c00

void __thiscall
`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_2>::operator()
          (void *this,PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_3 < *(int *)(lVar1 + 0x5c0)) {
    uVar4 = (uint)~param_3 >> 0x1f;
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
  Chaos::Softs::CorotatedCache<float>::P
            ((CorotatedCache<float> *)((longlong)param_3 * 0x38 + *(longlong *)(lVar1 + 0x5b8)),
             param_1,*(float *)(*(longlong *)this + 0x518),*(float *)(*(longlong *)this + 0x51c),
             param_2);
  return;
}

// operator() @ 143be9ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l12::<lambda_2>::operator()
          (void *this,FSolverCollisionParticles *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  TVector<float,3> TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<float,3> *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [4];
  
  lVar14 = (longlong)param_2;
  uVar13 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
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
  puVar1 = (undefined8 *)(param_1->_padding_ + lVar14 * 0x10);
  uVar11 = *puVar1;
  uVar6 = puVar1[1];
  pTVar10 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_2);
  uVar8 = _UNK_150689548;
  uVar7 = ___xmm_000000003f8000003f8000003f800000;
  lVar2 = *(longlong *)this;
  TVar5 = *pTVar10;
  uVar13 = 0;
  if (param_2 < *(int *)(lVar2 + 0x1b8)) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
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
  lVar2 = *(longlong *)(lVar2 + 0x1b0);
  puVar1 = (undefined8 *)(lVar2 + lVar14 * 0x30);
  *puVar1 = uVar11;
  puVar1[1] = uVar6;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = (undefined1  [12])TVar5;
  *(undefined1 (*) [16])(lVar2 + 0x10 + lVar14 * 0x30) = auVar4;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar14 * 0x30);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  lVar14 = *(longlong *)this;
  local_res10[0] = *(undefined4 *)((longlong)this + 8);
  local_res8[0] = *(undefined4 *)(lVar14 + 0x53c);
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar14 + 0x390));
  pcVar3 = *(code **)(lVar14 + 0x390);
  plVar12 = (longlong *)(lVar14 + 0x3a0);
  if (*(longlong **)(lVar14 + 0x3b8) != (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar14 + 0x3b8);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar3)(uVar11,param_1,local_res10,local_res8,local_res18);
  return;
}

// operator() @ 143be9e50

void __thiscall
`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_3>::operator()
          (void *this,PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,
          PMatrix<float,3,3> *param_3,int param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_4 < *(int *)(lVar1 + 0x5c0)) {
    uVar4 = (uint)~param_4 >> 0x1f;
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
  Chaos::Softs::CorotatedCache<float>::deltaP
            ((CorotatedCache<float> *)((longlong)param_4 * 0x38 + *(longlong *)(lVar1 + 0x5b8)),
             param_1,param_2,*(float *)(*(longlong *)this + 0x518),
             *(float *)(*(longlong *)this + 0x51c),param_3);
  return;
}

// operator() @ 143bea470

void __thiscall
`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l14::<lambda_3>::operator()
          (void *this,
          TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined4 local_res18 [4];
  
  uVar5 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  local_res18[0] = *(undefined4 *)((longlong)this + 8);
  pFVar1 = (param_1->AllocatorInstance).Data;
  lVar2 = *(longlong *)this;
  lVar8 = (longlong)param_2 * 0x30;
  UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + lVar8));
  pcVar3 = *(code **)(pFVar1 + lVar8);
  pFVar7 = pFVar1 + lVar8 + 0x10;
  if (*(FScriptContainerElement **)(pFVar1 + lVar8 + 0x28) != (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + lVar8 + 0x28);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar3)(uVar6,lVar2 + 0x20,local_res18);
  return;
}

// operator() @ 143bea540

void __thiscall
`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_4>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)this;
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < *(int *)(lVar9 + 0x598)) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < *(int *)(lVar9 + 0x598)) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)(uVar8 + *(longlong *)(lVar9 + 0x590));
      uVar5 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined8 *)(pFVar1 + (longlong)(int)uVar4 * 0xc) = 0;
      *(undefined4 *)(pFVar1 + (longlong)(int)uVar4 * 0xc + 8) = 0;
      lVar9 = *(longlong *)this;
      uVar8 = uVar8 + 4;
    } while ((int)(uVar6 + 1) < *(int *)(lVar9 + 0x598));
  }
  return;
}

// operator() @ 143bea660

void __thiscall
`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l17::<lambda_4>::operator()
          (void *this,FSolverParticles *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  TVector<float,3> *pTVar13;
  TVector<float,3> *pTVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  
  lVar15 = (longlong)param_2;
  pTVar13 = Chaos::Softs::FSolverParticles::P(param_1,param_2);
  pTVar14 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_2);
  fVar17 = __real_3f800000 / *(float *)this;
  uVar16 = (uint)~param_2 >> 0x1f;
  fVar1 = *(float *)pTVar13;
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar13->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x4;
  fVar5 = *(float *)&pTVar13->field_0x8;
  fVar6 = *(float *)&pTVar14->field_0x8;
  uVar12 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = param_1->_padding_;
  *(float *)(lVar9 + lVar15 * 0xc) = (fVar1 - fVar2) * fVar17;
  *(float *)(lVar9 + 4 + lVar15 * 0xc) = (fVar3 - fVar4) * fVar17;
  *(float *)(lVar9 + 8 + lVar15 * 0xc) = (fVar5 - fVar6) * fVar17;
  pTVar13 = Chaos::Softs::FSolverParticles::P(param_1,param_2);
  uVar7 = *(undefined8 *)pTVar13;
  uVar8 = *(undefined4 *)&pTVar13->field_0x8;
  uVar12 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = param_1->_padding_;
  *(undefined8 *)(lVar9 + lVar15 * 0xc) = uVar7;
  *(undefined4 *)(lVar9 + 8 + lVar15 * 0xc) = uVar8;
  uVar12 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar7 = *(undefined8 *)(param_1->_padding_ + lVar15 * 0xc);
  uVar8 = *(undefined4 *)(param_1->_padding_ + 8 + lVar15 * 0xc);
  uVar12 = 0;
  if (param_2 < *(int *)(lVar9 + 0x568)) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x560);
  *(undefined8 *)(lVar9 + lVar15 * 0xc) = uVar7;
  *(undefined4 *)(lVar9 + 8 + lVar15 * 0xc) = uVar8;
  return;
}

// operator() @ 143beb070

void __thiscall
`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_5>::operator()
          (void *this,float param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar10 = *(longlong *)this;
  uVar11 = 0;
  if (0 < *(int *)(lVar10 + 0x598)) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < *(int *)(lVar10 + 0x5a8)) {
        uVar7 = ~uVar11 >> 0x1f;
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
      lVar3 = *(longlong *)this;
      uVar1 = *(undefined8 *)(*(longlong *)(lVar10 + 0x5a0) + lVar9);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar10 + 0x5a0) + 8 + lVar9);
      uVar7 = 0;
      if ((int)uVar11 < *(int *)(lVar3 + 0x598)) {
        uVar7 = ~uVar11 >> 0x1f;
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
      uVar7 = *(uint *)(lVar12 + *(longlong *)(lVar3 + 0x590));
      uVar8 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0xc;
      lVar12 = lVar12 + 4;
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar7 * 0xc) = uVar1;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar7 * 0xc + 8) = uVar2;
      lVar10 = *(longlong *)this;
    } while ((int)uVar11 < *(int *)(lVar10 + 0x598));
  }
  return;
}

// operator() @ 143beb210

void __thiscall
`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_6>::operator()
          (void *this,float param_1,float param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3
          ,bool param_4,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  
  uVar7 = 0;
  if (0 < param_5->ArrayNum) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)this;
        if (param_4) {
          fVar10 = param_2 * *(float *)(lVar6 + 0x520 + lVar1);
        }
        else {
          uVar5 = 0;
          if ((int)uVar7 < param_3->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar10 = param_2 * *(float *)(lVar6 + 0x520 + lVar1) *
                   *(float *)((param_3->AllocatorInstance).Data + lVar8);
        }
        uVar5 = 0;
        if ((int)uVar7 < param_5->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_5->AllocatorInstance).Data;
        lVar1 = lVar9 + lVar6;
        lVar6 = lVar6 + 4;
        *(float *)(pFVar2 + lVar1) = *(float *)(pFVar2 + lVar1) - fVar10;
      } while (lVar6 < 0xc);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0xc;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < param_5->ArrayNum);
  }
  return;
}

// operator() @ 143beb3b0

void __thiscall
`Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
::__l10::<lambda_8>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  lVar8 = (longlong)param_1;
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)this;
  fVar1 = *(float *)(*plVar2 + lVar8 * 0xc);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  plVar2 = *(longlong **)((longlong)this + 8);
  *(float *)(lVar3 + lVar8 * 0x10) = fVar1 + *(float *)(lVar3 + lVar8 * 0x10);
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)this;
  fVar1 = *(float *)(*plVar2 + 4 + lVar8 * 0xc);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  plVar2 = *(longlong **)((longlong)this + 8);
  *(float *)(lVar3 + 4 + lVar8 * 0x10) = fVar1 + *(float *)(lVar3 + 4 + lVar8 * 0x10);
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)this;
  fVar1 = *(float *)(*plVar2 + 8 + lVar8 * 0xc);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  *(float *)(lVar3 + 8 + lVar8 * 0x10) = fVar1 + *(float *)(lVar3 + 8 + lVar8 * 0x10);
  return;
}

// operator() @ 143beb620

void __thiscall
`Chaos::Softs::FNewtonEvolution::
DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
::__l12::<lambda_9>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  plVar2 = *(longlong **)(*(longlong *)this + 0x5d0);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  uVar7 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  lVar9 = (longlong)(int)uVar7;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  uVar8 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)((longlong)this + 8);
  fVar1 = *(float *)(*plVar2 + lVar9 * 0xc);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  plVar2 = *(longlong **)((longlong)this + 0x10);
  *(float *)(lVar3 + lVar9 * 0x10) = fVar1 + *(float *)(lVar3 + lVar9 * 0x10);
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)((longlong)this + 8);
  fVar1 = *(float *)(*plVar2 + 4 + lVar9 * 0xc);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  plVar2 = *(longlong **)((longlong)this + 0x10);
  *(float *)(lVar3 + 4 + lVar9 * 0x10) = fVar1 + *(float *)(lVar3 + 4 + lVar9 * 0x10);
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)((longlong)this + 8);
  fVar1 = *(float *)(*plVar2 + 8 + lVar9 * 0xc);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0xb0)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0xa8);
  *(float *)(lVar3 + 8 + lVar9 * 0x10) = fVar1 + *(float *)(lVar3 + 8 + lVar9 * 0x10);
  return;
}

// AddCollisionParticleRange @ 143bec300

int __thiscall
Chaos::Softs::FNewtonEvolution::AddCollisionParticleRange
          (FNewtonEvolution *this,int param_1,uint param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar5 = (int)(this->MCollisionParticles)._padding_;
  uVar10 = (ulonglong)iVar5;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MCollisionParticles,param_1 + iVar5);
  piVar1 = (int *)((longlong)&(this->MCollisionParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar11 = 0;
  if (iVar5 < (int)(this->MCollisionParticles)._padding_) {
    lVar8 = uVar10 * 4;
    do {
      uVar7 = (uint)uVar10;
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&(this->MCollisionParticleGroupIds).field_0x10) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar10 = (ulonglong)(uVar7 + 1);
      *(uint *)(lVar8 + *(longlong *)&(this->MCollisionParticleGroupIds).field_0x8) = param_2;
      lVar8 = lVar8 + 4;
    } while ((int)(uVar7 + 1) < (int)(this->MCollisionParticles)._padding_);
  }
  iVar6 = (this->MCollisionParticlesActiveView).Ranges.ArrayNum;
  pTVar9 = &(this->MCollisionParticlesActiveView).Ranges;
  if (iVar6 != 0) {
    uVar11 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar11 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    uVar11 = *(uint *)((pTVar9->AllocatorInstance).Data +
                      (longlong)(this->MCollisionParticlesActiveView).Ranges.ArrayNum * 4 + -4) >> 1
    ;
  }
  iVar6 = (this->MCollisionParticlesActiveView).Ranges.ArrayNum;
  piVar1 = &(this->MCollisionParticlesActiveView).Ranges.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,piVar1);
    (this->MCollisionParticlesActiveView).Ranges.ArrayNum = iVar6;
  }
  (this->MCollisionParticlesActiveView).Ranges.ArrayNum = iVar6 + 1;
  *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 4) =
       (uVar11 + param_1) * 2 | (uint)param_3;
  return iVar5;
}

// AddConstraintInitRange @ 143bec4e0

int __thiscall
Chaos::Softs::FNewtonEvolution::AddConstraintInitRange
          (FNewtonEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MConstraintInits).AllocatorInstance,
                     &(this->MConstraintInits).ArrayNum,&(this->MConstraintInits).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MConstraintInits).AllocatorInstance.Data + (longlong)iVar1 * 0x30,param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MConstraintInitsActiveView,param_1,param_2);
  return iVar1;
}

// AddConstraintRuleRange @ 143bec580

int __thiscall
Chaos::Softs::FNewtonEvolution::AddConstraintRuleRange
          (FNewtonEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MConstraintRules).AllocatorInstance,
                     &(this->MConstraintRules).ArrayNum,&(this->MConstraintRules).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MConstraintRules).AllocatorInstance.Data + (longlong)iVar1 * 0x30,param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MConstraintRulesActiveView,param_1,param_2);
  return iVar1;
}

// AddGroups @ 143bec870

void __thiscall Chaos::Softs::FNewtonEvolution::AddGroups(FNewtonEvolution *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = (uint)this->_padding_;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)this,param_1 + uVar10);
  }
  if (uVar10 < (uint)this->_padding_) {
    do {
      uVar2 = *(undefined8 *)&this->MGravity;
      uVar3 = *(undefined4 *)&(this->MGravity).field_0x8;
      uVar8 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
        uVar7 = uVar8;
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
      lVar4 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
      lVar9 = (longlong)(int)uVar10;
      *(undefined8 *)(lVar4 + lVar9 * 0xc) = uVar2;
      *(undefined4 *)(lVar4 + 8 + lVar9 * 0xc) = uVar3;
      fVar1 = this->MCollisionThickness;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupCollisionThicknesses).field_0x10) {
        uVar7 = uVar8;
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
      *(float *)(*(longlong *)&(this->MGroupCollisionThicknesses).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MCoefficientOfFriction;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupCoefficientOfFrictions).field_0x10) {
        uVar7 = uVar8;
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
      *(float *)(*(longlong *)&(this->MGroupCoefficientOfFrictions).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MDamping;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupDampings).field_0x10) {
        uVar7 = uVar8;
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
      *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MLocalDamping;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
        uVar7 = uVar8;
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
      *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4) = fVar1;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupUseCCDs).field_0x10) {
        uVar7 = uVar8;
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
      uVar10 = uVar10 + 1;
      *(undefined1 *)(lVar9 + *(longlong *)&(this->MGroupUseCCDs).field_0x8) = 0;
    } while (uVar10 < (uint)this->_padding_);
  }
  return;
}

// AddParticleRange @ 143bed780

int __thiscall
Chaos::Softs::FNewtonEvolution::AddParticleRange
          (FNewtonEvolution *this,int param_1,uint param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  TVector<float,3> local_38;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar5 = (int)(this->MParticles)._padding_;
  uVar10 = (ulonglong)iVar5;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MParticles,param_1 + iVar5);
  piVar1 = (int *)((longlong)&(this->MParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  local_38._0_8_ = 0;
  local_38._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&this->MVn,&local_38,(int)(this->MParticles)._padding_);
  uVar11 = 0;
  if (iVar5 < (int)(this->MParticles)._padding_) {
    lVar8 = uVar10 * 4;
    do {
      uVar7 = (uint)uVar10;
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&(this->MParticleGroupIds).field_0x10) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar10 = (ulonglong)(uVar7 + 1);
      *(uint *)(lVar8 + *(longlong *)&(this->MParticleGroupIds).field_0x8) = param_2;
      lVar8 = lVar8 + 4;
    } while ((int)(uVar7 + 1) < (int)(this->MParticles)._padding_);
  }
  uVar4 = (uint)this->_padding_;
  if (uVar4 <= param_2) {
    AddGroups(this,(param_2 - uVar4) + 1);
  }
  iVar6 = (this->MParticlesActiveView).Ranges.ArrayNum;
  pTVar9 = &(this->MParticlesActiveView).Ranges;
  if (iVar6 != 0) {
    uVar11 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar11 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    uVar11 = *(uint *)((pTVar9->AllocatorInstance).Data +
                      (longlong)(this->MParticlesActiveView).Ranges.ArrayNum * 4 + -4) >> 1;
  }
  iVar6 = (this->MParticlesActiveView).Ranges.ArrayNum;
  piVar1 = &(this->MParticlesActiveView).Ranges.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,piVar1);
    (this->MParticlesActiveView).Ranges.ArrayNum = iVar6;
  }
  (this->MParticlesActiveView).Ranges.ArrayNum = iVar6 + 1;
  *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 4) =
       (uVar11 + param_1) * 2 | (uint)param_3;
  return iVar5;
}

// AddPostCollisionConstraintRuleRange @ 143bed970

int __thiscall
Chaos::Softs::FNewtonEvolution::AddPostCollisionConstraintRuleRange
          (FNewtonEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MPostCollisionConstraintRules).AllocatorInstance,
                     &(this->MPostCollisionConstraintRules).ArrayNum,
                     &(this->MPostCollisionConstraintRules).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MPostCollisionConstraintRules).AllocatorInstance.Data + (longlong)iVar1 * 0x30,
             param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MPostCollisionConstraintRulesActiveView,param_1,param_2);
  return iVar1;
}

// AdvanceOneTimeStep @ 143bee100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep
          (FNewtonEvolution *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<bool> *pTVar9;
  FNewtonEvolution *this_00;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  ForElementType<Chaos::TVector<int,2>_> FVar13;
  int iVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  uint uVar18;
  ForElementType<Chaos::TVector<int,2>_> FVar19;
  ForElementType<Chaos::TVector<int,2>_> FVar20;
  undefined1 auStackY_358 [32];
  char local_2b8;
  bool local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  int local_2b4;
  undefined4 local_2b0;
  uint uStack_2ac;
  uint local_2a8 [2];
  FNewtonEvolution *local_2a0;
  float local_298;
  code *local_290;
  FNewtonEvolution **local_288;
  FNewtonEvolution *local_280;
  FNewtonEvolution *local_278;
  float local_270;
  int local_26c;
  code *local_268;
  FNewtonEvolution **local_260;
  code *local_258;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_250;
  FNewtonEvolution *local_248;
  float local_240;
  float local_238 [2];
  FNewtonEvolution *local_230;
  code *local_228;
  float *local_220;
  code *local_218;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_210;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_208;
  code **local_200;
  ForElementType<Chaos::TVector<int,2>_> *local_1f8;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_1f0;
  uint local_1e8;
  code **local_1e0;
  TFunction<void___cdecl(bool)> local_1d8;
  TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  local_1a8;
  TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)> local_178;
  TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>
  local_148;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  local_118;
  TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>
  local_e8;
  ForElementType<Chaos::TVector<int,2>_> local_b8;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_358;
  FVar19 = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  this->MTime = param_1 + this->MTime;
  pTVar7 = CVarChaosNewtonEvolutionUseSmoothTimeStep.Ref;
  local_280 = this;
  if (param_2) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_143bee18a:
      FVar13 = FVar19;
    }
    else {
      bVar10 = IsInGameThread();
      FVar13 = (ForElementType<Chaos::TVector<int,2>_>)0x1;
      if (bVar10) goto LAB_143bee18a;
    }
    if (pTVar7->ShadowedValue[(longlong)FVar13] == false) goto LAB_143bee1bb;
    this->MSmoothDt = (param_1 - this->MSmoothDt) * __real_3dcccccd + this->MSmoothDt;
  }
  else {
LAB_143bee1bb:
    this->MSmoothDt = param_1;
  }
  pTVar7 = CVarChaosNewtonEvolutionUseNestedParallelFor.Ref;
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_143bee1e0:
    FVar13 = FVar19;
  }
  else {
    bVar10 = IsInGameThread();
    FVar13 = (ForElementType<Chaos::TVector<int,2>_>)0x1;
    if (bVar10) goto LAB_143bee1e0;
  }
  pTVar9 = CVarChaosNewtonEvolutionParallelIntegrate.Ref;
  local_2b7 = pTVar7->ShadowedValue[(longlong)FVar13] == false;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) ||
     (bVar10 = IsInGameThread(), FVar13 = (ForElementType<Chaos::TVector<int,2>_>)0x1, bVar10)) {
    FVar13 = FVar19;
  }
  pTVar8 = CVarChaosNewtonEvolutionMinParallelBatchSize.Ref;
  if (pTVar9->ShadowedValue[(longlong)FVar13] == false) {
    iVar17 = 0x7fffffff;
    goto LAB_143bee238;
  }
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_143bee232:
    FVar13 = FVar19;
  }
  else {
    bVar10 = IsInGameThread();
    FVar13 = (ForElementType<Chaos::TVector<int,2>_>)0x4;
    if (bVar10) goto LAB_143bee232;
  }
  iVar17 = *(int *)((longlong)pTVar8->ShadowedValue + (longlong)FVar13);
LAB_143bee238:
  local_2b4 = iVar17;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    IsInGameThread();
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId711,"ChaosNewtonPreIterationUpdates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\NewtonEvolution.cpp"
               ,0x2c7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId711);
  }
  local_b8.SecondaryData = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  pFVar16 = (this->MParticlesActiveView).Ranges.AllocatorInstance.Data;
  local_260 = &local_278;
  local_70 = 0;
  iVar3 = (this->MParticlesActiveView).Ranges.ArrayNum;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l8::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
              ::Call;
  pFVar1 = pFVar16 + (longlong)iVar3 * 4;
  local_6c = 8;
  FVar13 = FVar19;
  FVar20 = FVar19;
  local_278 = this;
  local_270 = param_1;
  local_26c = iVar17;
  do {
    if ((this->MParticlesActiveView).Ranges.ArrayNum != iVar3) {
      local_2b8 = '\0';
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_2b8);
      FVar13._4_4_ = 0;
      FVar13._0_4_ = local_70;
      FVar19 = local_b8.SecondaryData;
    }
    uVar12 = FVar13._0_4_;
    if (pFVar16 == pFVar1) {
      local_200 = &local_268;
      local_1f8 = &local_b8;
      local_250 = &local_208;
      local_258 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_208 = &this->MParticlesActiveView;
      PhysicsParallelFor(uVar12,(TFunctionRef<void___cdecl(int)> *)&local_258,local_2b7);
      this_00 = local_280;
      if (local_b8.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FMemory::Free((void *)local_b8.SecondaryData);
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (*(longlong *)&this_00->MCollisionKinematicUpdate != 0) {
        local_298 = param_1;
        if (CpuChannel->Enabled < 0) {
          local_288 = &local_2a0;
          local_2a0 = this_00;
          local_290 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l12::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
                      ::Call;
          TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
                    (&this_00->MCollisionParticlesActiveView,
                     (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
                     &local_290);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId775,"ChaosNewtonCollisionKinematicUpdate",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\NewtonEvolution.cpp"
                     ,0x307);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId775);
          local_288 = &local_2a0;
          local_2a0 = this_00;
          local_290 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l12::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
                      ::Call;
          TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
                    (&this_00->MCollisionParticlesActiveView,
                     (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
                     &local_290);
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId790,"ChaosNewtonClearCollidedArray",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\NewtonEvolution.cpp"
                   ,0x316);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId790);
      }
      memset(*(void **)&(this_00->MCollided).field_0x8,0,
             (longlong)*(int *)&(this_00->MCollided).field_0x10);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId798,"ChaosXNewtonConstraintsInit",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\NewtonEvolution.cpp"
                   ,0x31e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId798);
      }
      pFVar16 = (this_00->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data;
      iVar17 = (this_00->MConstraintInitsActiveView).Ranges.ArrayNum;
      local_248 = this_00;
      pFVar1 = pFVar16 + (longlong)iVar17 * 4;
      uVar12 = 0;
      local_240 = param_1;
      while( true ) {
        if ((this_00->MConstraintInitsActiveView).Ranges.ArrayNum != iVar17) {
          `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2b6);
        }
        if (pFVar16 == pFVar1) break;
        uVar4 = *(uint *)pFVar16;
        uVar18 = uVar4 >> 1;
        if ((((uVar4 & 1) != 0) && (uVar4 >> 1 != 0)) && (uVar12 < uVar18)) {
          do {
            local_2a8[0] = uVar12;
            UE::Core::Private::Function::
            TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l14::<lambda_3>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int>
            ::Call(&local_248,(this_00->MConstraintInitsActiveView).Items,(int *)local_2a8);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar18);
        }
        pFVar16 = pFVar16 + 4;
        uVar12 = uVar18;
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      (this_00->MCollisionContacts).ArrayNum = 0;
      if ((this_00->MCollisionContacts).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(this_00->MCollisionContacts).AllocatorInstance,0,
                   &(this_00->MCollisionContacts).ArrayMax);
      }
      (this_00->MCollisionNormals).ArrayNum = 0;
      if ((this_00->MCollisionNormals).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(this_00->MCollisionNormals).AllocatorInstance,0,
                   &(this_00->MCollisionNormals).ArrayMax);
      }
      if (CpuChannel->Enabled < 0) {
        local_2b8 = '\0';
      }
      else {
        local_2b8 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId813,"ChaosNewtonIterationLoop",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\NewtonEvolution.cpp"
                   ,0x32d);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId813);
      }
      bVar10 = this_00->NoVerbose;
      local_1d8._40_8_ = 0;
      local_1d8._0_8_ = *(undefined8 *)&this_00->UpdatePositionBasedState;
      if (local_1d8._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->UpdatePositionBasedState).field_0x28;
        puVar15 = (undefined8 *)&(this_00->UpdatePositionBasedState).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_1d8.field_0x10);
      }
      local_1a8._0_8_ = *(undefined8 *)&this_00->MAddExternalForce;
      local_1a8._40_8_ = 0;
      if (local_1a8._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->MAddExternalForce).field_0x28;
        puVar15 = (undefined8 *)&(this_00->MAddExternalForce).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_1a8.field_0x10);
      }
      local_178._0_8_ = *(undefined8 *)&this_00->ProjectBCs;
      local_178._40_8_ = 0;
      if (local_178._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->ProjectBCs).field_0x28;
        puVar15 = (undefined8 *)&(this_00->ProjectBCs).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_178.field_0x10);
      }
      local_148._0_8_ = *(undefined8 *)&this_00->SetBCs;
      local_148._40_8_ = 0;
      if (local_148._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->SetBCs).field_0x28;
        puVar15 = (undefined8 *)&(this_00->SetBCs).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_148.field_0x10);
      }
      local_118._0_8_ = *(undefined8 *)&this_00->DeltaPStress;
      fVar2 = this_00->MTime;
      local_118._40_8_ = 0;
      if (local_118._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->DeltaPStress).field_0x28;
        puVar15 = (undefined8 *)&(this_00->DeltaPStress).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_118.field_0x10);
      }
      local_e8._0_8_ = *(undefined8 *)&this_00->PStress;
      local_e8._40_8_ = 0;
      if (local_e8._0_8_ != 0) {
        puVar5 = *(undefined8 **)&(this_00->PStress).field_0x28;
        puVar15 = (undefined8 *)&(this_00->PStress).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar15 = puVar5;
        }
        (**(code **)*puVar15)(puVar15,&local_e8.field_0x10);
      }
      DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>
                (this_00,this_00->MNumNewtonIterations,this_00->MNewtonTol,this_00->MNumCGIterations
                 ,this_00->MCGTol,&local_e8,&local_118,fVar2,param_1,&this_00->MIncidentElements,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)&(this_00->MParticles)._padding_,
                 &local_148,&local_178,&local_1a8,&local_1d8,&this_00->MParticles,
                 &this_00->MResidualNorm,true,(float)bVar10,false);
      iVar3 = local_2b4;
      pFVar16 = (this_00->MParticlesActiveView).Ranges.AllocatorInstance.Data;
      local_230 = this_00;
      iVar17 = (this_00->MParticlesActiveView).Ranges.ArrayNum;
      local_228 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l17::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,int>
                  ::Call;
      pFVar1 = pFVar16 + (longlong)iVar17 * 4;
      local_238[0] = param_1;
      local_220 = local_238;
      uVar12 = 0;
      while( true ) {
        if ((this_00->MParticlesActiveView).Ranges.ArrayNum != iVar17) {
          `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2b5);
        }
        if (pFVar16 == pFVar1) break;
        uVar4 = *(uint *)pFVar16;
        if (((uVar4 & 1) != 0) && (uVar4 >> 1 != 0)) {
          local_218 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l9::<lambda_1>,void,int>
                      ::Call;
          iVar14 = (uVar4 >> 1) - uVar12;
          local_1e0 = &local_228;
          local_210 = &local_1f0;
          local_1f0 = &this_00->MParticlesActiveView;
          local_1e8 = uVar12;
          PhysicsParallelFor(iVar14,(TFunctionRef<void___cdecl(int)> *)&local_218,iVar14 < iVar3);
        }
        pFVar16 = pFVar16 + 4;
        uVar12 = uVar4 >> 1;
      }
      if (local_2b8 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar4 = *(uint *)pFVar16;
    uVar18 = uVar4 >> 1;
    if (((uVar4 & 1) != 0) && (uVar4 >> 1 != 0)) {
      local_2b0 = FVar20._0_4_;
      FVar13 = (ForElementType<Chaos::TVector<int,2>_>)&local_b8;
      if (FVar19 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar13 = FVar19;
      }
      uStack_2ac = uVar18;
      if ((ulonglong)FVar13 <= &local_2b0) {
        FVar13 = (ForElementType<Chaos::TVector<int,2>_>)&local_b8;
        if (FVar19 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar13 = FVar19;
        }
        if ((&local_2b0 < (undefined4 *)((longlong)FVar13 + (longlong)(int)local_6c * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar19 = local_b8.SecondaryData, uVar12 = local_70, bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar12 == local_6c) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>_>
                           (0x408,&local_b8,(int *)&local_6c);
        FVar19 = local_b8.SecondaryData;
      }
      local_70 = uVar12 + 1;
      FVar13 = (ForElementType<Chaos::TVector<int,2>_>)&local_b8;
      if (FVar19 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar13 = FVar19;
      }
      *(ulonglong *)((longlong)FVar13 + (longlong)(int)uVar12 * 8) = CONCAT44(uStack_2ac,local_2b0);
      FVar13._4_4_ = 0;
      FVar13._0_4_ = local_70;
      FVar19 = local_b8.SecondaryData;
    }
    FVar20._4_4_ = 0;
    FVar20._0_4_ = uVar18;
    pFVar16 = pFVar16 + 4;
  } while( true );
}

// InitFEM @ 143c0a8f0

void __thiscall Chaos::Softs::FNewtonEvolution::InitFEM(FNewtonEvolution *this)

{
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *this_00;
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *pEVar1;
  
  this_00 = ::operator_new(0x60);
  pEVar1 = (ElasticFEM<float,Chaos::Softs::FSolverParticles> *)0x0;
  if (this_00 != (ElasticFEM<float,Chaos::Softs::FSolverParticles> *)0x0) {
    pEVar1 = ElasticFEM<float,Chaos::Softs::FSolverParticles>::
             ElasticFEM<float,Chaos::Softs::FSolverParticles>
                       (this_00,&this->MParticles,&this->MMesh,&this->MIncidentElements);
  }
  TUniquePtr<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>_>_>
  ::Reset(&this->MEFem,pEVar1);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->Measure,&((this->MEFem).Ptr)->Measure)
  ;
  return;
}

// ResetCollisionParticles @ 143c12500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FNewtonEvolution::ResetCollisionParticles(FNewtonEvolution *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MCollisionParticles,param_1);
  piVar1 = (int *)((longlong)&(this->MCollisionParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar5 = 0;
  if (0 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_1 < (int)(*(uint *)((this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.
                                    Data + lVar6) >> 1)) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&(this->MCollisionParticlesActiveView).Ranges,uVar5,Default);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum);
  }
  return;
}

// ResetGroups @ 143c125f0

void __thiscall Chaos::Softs::FNewtonEvolution::ResetGroups(FNewtonEvolution *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  *(undefined4 *)&this->_padding_ = 0;
  plVar4 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    plVar3 = (longlong *)*plVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
    }
    plVar4 = plVar4 + 1;
  }
  AddGroups(this,1);
  return;
}

// ResetParticles @ 143c12680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::Softs::FNewtonEvolution::ResetParticles(FNewtonEvolution *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *(undefined4 *)&(this->MParticles)._padding_ = 0;
  plVar9 = (longlong *)(this->MParticles)._padding_;
  iVar3 = (int)(this->MParticles)._padding_;
  plVar2 = plVar9 + iVar3;
  while( true ) {
    if ((int)(this->MParticles)._padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar9 == plVar2) break;
    if ((longlong *)*plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar9 + 8))();
    }
    plVar9 = plVar9 + 1;
  }
  piVar1 = (int *)((longlong)&(this->MParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar8 = 0;
  if (0 < (this->MParticlesActiveView).Ranges.ArrayNum) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->MParticlesActiveView).Ranges.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
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
      if ((*(uint *)((this->MParticlesActiveView).Ranges.AllocatorInstance.Data + lVar10) &
          0xfffffffe) != 0) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&(this->MParticlesActiveView).Ranges,uVar8,Default);
        break;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar8 < (this->MParticlesActiveView).Ranges.ArrayNum);
  }
  *(undefined4 *)&this->_padding_ = 0;
  plVar9 = (longlong *)this->_padding_;
  iVar3 = (int)this->_padding_;
  plVar2 = plVar9 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar9 == plVar2) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,0);
    }
    plVar9 = plVar9 + 1;
  }
  AddGroups(this,1);
  return;
}

// WriteOutputLog @ 143c1dcb0

void __thiscall Chaos::Softs::FNewtonEvolution::WriteOutputLog(FNewtonEvolution *this,int param_1)

{
  int iVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  FPaths::ProjectDir(&local_a8);
  ::FString::AppendChars(&local_a8,L"/HoudiniOutput/NewtonLog.txt",0x1c);
  pIVar2 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::FString((FString *)&local_78,
                              L"---------------------------------------------------\r\n");
  local_88.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar7 = 0;
  local_88.Data.ArrayNum = iVar1 + -1;
  if (iVar1 == 0) {
    local_88.Data.ArrayNum = iVar7;
  }
  local_68._12_4_ = local_88.Data.ArrayMax;
  local_68.Size = local_88.Data.ArrayNum;
  local_68.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_68,(wchar_t *)FVar6.Data,AutoDetect,pIVar2,8);
  if (local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  pIVar2 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::FString((FString *)&local_48,L"\r\n");
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_98,param_1);
  pFVar4 = ::FString::FString(&local_58,L"Frame = ");
  ::FString::ConcatFF((FString *)&local_68,pFVar4,&local_98);
  ::FString::ConcatFF(&local_88,(FString *)&local_68,pFVar3);
  local_78.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_78.Size = iVar7;
  }
  local_78.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_78,(wchar_t *)FVar6.Data,AutoDetect,pIVar2,8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pIVar2 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::FString((FString *)&local_38,L"\r\n");
  pFVar4 = ::FString::SanitizeFloat(&local_98,(double)this->MTime,1);
  pFVar5 = ::FString::FString(&local_58,L"Time = ");
  ::FString::ConcatFF((FString *)&local_78,pFVar5,pFVar4);
  ::FString::ConcatFF(&local_88,(FString *)&local_78,pFVar3);
  local_68.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_48.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_48.Size = iVar7;
  }
  local_68.Size = local_48.Size;
  local_48.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_48._12_4_ = local_68._12_4_;
  FFileHelper::SaveStringToFile(&local_48,(wchar_t *)FVar6.Data,AutoDetect,pIVar2,8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  pIVar2 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::FString((FString *)&local_48,
                              L"---------------------------------------------------\r\n");
  local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  local_68.Size = local_38.Size;
  local_38._12_4_ = local_68._12_4_;
  local_38.DataPtr = local_68.DataPtr;
  FFileHelper::SaveStringToFile(&local_38,(wchar_t *)FVar6.Data,AutoDetect,pIVar2,8);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

