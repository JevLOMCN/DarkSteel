// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 5

// Call @ 1443531e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 144353200

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,bool,FAllocator2D::FRect_const_&>
::Call(void *param_1,FRect *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  return param_2->H + param_2->W + param_2->Y + param_2->X <
         (uint)(piVar1[3] + piVar1[2] + piVar1[1] + *piVar1);
}

// Call @ 144353230

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,bool>::Call
          (void *param_1)

{
  float fVar1;
  uint uVar2;
  TAtomic<bool> *pTVar3;
  longlong *plVar4;
  FChartPacker *this;
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
  pTVar3 = *(TAtomic<bool> **)((longlong)param_1 + 0x20);
  uVar2 = *(uint *)((longlong)param_1 + 0x2c);
  plVar4 = *(longlong **)((longlong)param_1 + 8);
  this = *(FChartPacker **)param_1;
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
  plVar4 = *(longlong **)((longlong)param_1 + 8);
  pTVar6 = *(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
  pTVar7 = *(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)
            ((longlong)param_1 + 0x18);
  fVar1 = *(float *)((longlong)param_1 + 0x28);
  uVar11 = *(uint *)((longlong)param_1 + 0x2c);
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
                    (this,(TArray<FMeshChart,TSizedDefaultAllocator<32>_> *)
                          (*plVar4 + (longlong)(int)uVar11 * 0x28),fVar1,pTVar7,pTVar6,
                     (float *)(lVar5 + 0x20 + (longlong)(int)uVar2 * 0x28),pTVar3,false);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// Call @ 144353240

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,bool,FAllocator2D::FRect_const_&>
::Call(void *param_1,FRect *param_2)

{
  return *(int *)(*(longlong *)param_1 + 0xc) * param_2->Y + param_2->X <
         (uint)(*(int *)(*(longlong *)param_1 + 0xc) * (*(int **)((longlong)param_1 + 8))[1] +
               **(int **)((longlong)param_1 + 8));
}

// Call @ 144353270

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<bool___cdecl(FAllocator2D::FRect_const_&)>,bool,FAllocator2D::FRect_const_&>
::Call(void *param_1,FRect *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001443532bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
  return (bool)uVar1;
}

