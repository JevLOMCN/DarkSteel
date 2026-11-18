// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 3

// Call @ 145951610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x80);
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)(lVar1 + 0x600) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0x608) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x610) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x618) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x620) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x628) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x630) = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x638) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0x640) = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x648) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(lVar1 + 0x650) = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)(lVar1 + 0x658) = uVar2;
  lVar1 = *(longlong *)((longlong)param_1 + 0x80);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x660) = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)(lVar1 + 0x668) = uVar2;
  *(undefined8 *)(lVar1 + 0x670) = *(undefined8 *)((longlong)param_1 + 0x70);
  return;
}

// Call @ 145951680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLateUpdateManager::Setup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  lVar1 = *(longlong *)((longlong)param_1 + 0xc0);
  *(undefined8 *)(lVar1 + 0xd0) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0xe8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0xf8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x118) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  if ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
       *)(lVar1 + 0x130) !=
      (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
       *)((longlong)param_1 + 0x60)) {
    TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x130),
               (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                *)((longlong)param_1 + 0x60));
  }
  *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)((longlong)param_1 + 0xb0);
  return;
}

// Call @ 145951690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FTargetTransform *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(longlong *)param_1 == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 8) + 8) < 1) {
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  lVar9 = 0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar8->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14594f210;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar10 = aVar6 == aVar7;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar10);
    lVar9 = *(longlong *)param_1;
    if (lVar9 != 0) goto LAB_14594f236;
  }
LAB_14594f210:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14594f236:
  pFVar1 = (ForAnyElementType *)(lVar9 + 0x28);
  if (pFVar1 != (ForAnyElementType *)((longlong)param_1 + 0x10)) {
    DestructItems<FMotionDelayClient::FTargetTransform,int>
              ((FTargetTransform *)pFVar1->Data,*(int *)(lVar9 + 0x30));
    iVar3 = *(int *)((longlong)param_1 + 0x18);
    piVar2 = (int *)(lVar9 + 0x34);
    pFVar4 = (FTargetTransform *)((ForAnyElementType *)((longlong)param_1 + 0x10))->Data;
    *(int *)(lVar9 + 0x30) = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
      ConstructItems<FMotionDelayClient::FTargetTransform,FMotionDelayClient::FTargetTransform,int>
                (pFVar1->Data,pFVar4,iVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

