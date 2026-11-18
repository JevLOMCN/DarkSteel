// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 9

// Call @ 14cf843e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x80) = *(undefined4 *)((longlong)param_1 + 0x10);
  *(undefined2 *)(*(longlong *)param_1 + 0x84) = *(undefined2 *)((longlong)param_1 + 0x14);
  *(undefined8 *)(*(longlong *)param_1 + 0x78) = *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14cf84410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>,void,unsigned_int,IStereoLayers::FLayerDesc_&>
::Call(void *param_1,uint *param_2,FLayerDesc *param_3)

{
  `FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cf84420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf84427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14cf84430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf84437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14cf84440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014cf8448d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}

// Call @ 14cf844a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014cf844dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 14cf844f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x2c) = *(undefined1 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14cf84510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)((longlong)param_1 + 0x48);
  return;
}

// Call @ 14cf84550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FStereoLayerToRender *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType *pFVar9;
  
  TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x110),*(int *)((longlong)param_1 + 0x10));
  lVar4 = *(longlong *)param_1;
  pFVar9 = (ForAnyElementType *)(lVar4 + 0x110);
  if (pFVar9 == (ForAnyElementType *)((longlong)param_1 + 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  if (iVar2 != 0) {
    iVar8 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,0x10,iVar2,pFVar9,(int *)(lVar4 + 0x118),(int *)(lVar4 + 0x11c));
    ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
              (pFVar9->Data + (longlong)iVar8 * 0xc0,
               (FStereoLayerToRenderTransfer *)((ForAnyElementType *)((longlong)param_1 + 8))->Data,
               iVar2);
  }
  lVar4 = *(longlong *)param_1;
  uVar3 = *(uint *)((longlong)param_1 + 0x20);
  if (-1 < (int)uVar3) {
    puVar1 = (uint *)(lVar4 + 300);
    pFVar5 = (FStereoLayerToRender *)((ForAnyElementType *)(lVar4 + 0x120))->Data;
    if ((int)*puVar1 < (int)uVar3) {
      DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar5,*(int *)(lVar4 + 0x128));
      *(undefined4 *)(lVar4 + 0x128) = 0;
      if (*puVar1 != uVar3) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,uVar3,(ForAnyElementType *)(lVar4 + 0x120),0,(int *)puVar1);
      }
    }
    else {
      DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar5,*(int *)(lVar4 + 0x128));
      *(undefined4 *)(lVar4 + 0x128) = 0;
    }
    lVar4 = *(longlong *)param_1;
    pFVar9 = (ForAnyElementType *)(lVar4 + 0x120);
    if (pFVar9 == (ForAnyElementType *)((longlong)param_1 + 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar2 = *(int *)((longlong)param_1 + 0x20);
    if (iVar2 != 0) {
      iVar8 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc0,0x10,iVar2,pFVar9,(int *)(lVar4 + 0x128),(int *)(lVar4 + 300));
      ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
                (pFVar9->Data + (longlong)iVar8 * 0xc0,
                 (FStereoLayerToRenderTransfer *)
                 ((ForAnyElementType *)((longlong)param_1 + 0x18))->Data,iVar2);
    }
    *(undefined1 *)(*(longlong *)param_1 + 0x130) = *(undefined1 *)((longlong)param_1 + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar3);
}

