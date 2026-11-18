// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 5

// Call @ 146c68640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x530);
  if (lVar1 == 0) {
    return;
  }
  bVar5 = IsInRenderingThread();
  if (((!bVar5) && (bVar5 = IsInRHIThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x133,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(int *)(lVar1 + 0x288) - 1;
  if (-1 < (int)uVar9) {
    pFVar10 = (ForAnyElementType *)(lVar1 + 0x280);
    lVar8 = (longlong)(int)uVar9;
    lVar11 = lVar8 * 8;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(lVar1 + 0x288)) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)(pFVar10->Data + lVar11);
      (**(code **)(*(longlong *)(lVar2 + 8) + 0x20))(lVar2 + 8);
      (**(code **)(*(longlong *)(lVar2 + 0x38) + 0x20))(lVar2 + 0x38);
      (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x20))(lVar2 + 0x68);
      (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x20))();
      (**(code **)(*(longlong *)(lVar2 + 200) + 0x20))();
      (**(code **)(*(longlong *)(lVar2 + 0xf8) + 0x20))();
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(lVar1 + 0x288)) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar3 = *(void **)(pFVar10->Data + lVar11);
      if (pvVar3 != (void *)0x0) {
        if (*(FRHIResource **)((longlong)pvVar3 + 0x378) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar3 + 0x378));
        }
        if (*(FRHIResource **)((longlong)pvVar3 + 0x370) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar3 + 0x370));
        }
        if (*(FRHIResource **)((longlong)pvVar3 + 0x368) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar3 + 0x368));
        }
        if (*(FRHIResource **)((longlong)pvVar3 + 0x360) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar3 + 0x360));
        }
        FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)pvVar3 + 0xf8));
        FIndexBuffer::~FIndexBuffer((FIndexBuffer *)((longlong)pvVar3 + 200));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar3 + 0x98));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar3 + 0x68));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar3 + 0x38));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar3 + 8));
        ::operator_delete(pvVar3,0x380);
      }
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(lVar1 + 0x288)) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar1 + 0x288) + ~uVar9;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar10->Data + lVar8 * 8,
                pFVar10->Data + (longlong)(*(int *)(lVar1 + 0x288) - iVar7) * 8,(longlong)iVar7 << 3
               );
      }
      *(int *)(lVar1 + 0x288) = *(int *)(lVar1 + 0x288) + -1;
      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,pFVar10,*(int *)(lVar1 + 0x288),(int *)(lVar1 + 0x28c));
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// Call @ 146c68660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`InitVertexFactory'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong *plStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [56];
  undefined8 auStack_c0 [7];
  int iStack_88;
  int aiStack_84 [5];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  FVertexBuffer *pFStack_38;
  undefined8 uStack_30;
  FRHIShaderResourceView *pFStack_28;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                       ,0x89,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  auStack_f8._16_8_ = 0;
  lVar4 = lVar1 + 0x38;
  auStack_f8._24_8_ = 0;
  auStack_f8._32_8_ = 0;
  auStack_f8._40_8_ = 0;
  iStack_88 = 0;
  aiStack_84[0] = 4;
  aiStack_84[1] = 0;
  aiStack_84[2] = 0;
  aiStack_84[3] = 0;
  aiStack_84[4] = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0xffffffff;
  uStack_3c = 0xff;
  uStack_3a = 0;
  pFStack_38 = (FVertexBuffer *)0x0;
  uStack_30._0_4_ = 0;
  uStack_30._4_1_ = '\0';
  uStack_30._5_1_ = '\0';
  uStack_30._6_1_ = '\0';
  uStack_30._7_1_ = Default;
  pFStack_28 = (FRHIShaderResourceView *)0x0;
  lStack_60 = *(longlong *)(lVar1 + 0x360);
  auStack_f8._0_8_ = lVar1 + 8;
  auStack_f8._8_4_ = 0;
  auStack_f8._12_4_ = 0x30c00;
  if (*(int *)(lVar1 + 0x60) != 0) {
    lStack_50 = *(longlong *)(lVar1 + 0x368);
    uStack_100 = 0;
    uStack_fc = 0x4020800;
    lStack_108 = lVar4;
    if ((auStack_f8 + 0x30 <= &lStack_108) && (&lStack_108 < &iStack_88)) {
      uStack_118 = 0x10;
      puStack_130 = auStack_f8 + 0x30;
      uStack_120 = 0;
      uStack_128 = 4;
      plStack_138 = &lStack_108;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iStack_88 == aiStack_84[0]) {
      iStack_88 = ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                            (0x810,(ForElementType<FVertexStreamComponent> *)(auStack_f8 + 0x30),
                             aiStack_84);
    }
    lVar4 = (longlong)iStack_88;
    iStack_88 = iStack_88 + 1;
    *(longlong *)(auStack_f8 + lVar4 * 0x10 + 0x30) = lStack_108;
    auStack_c0[lVar4 * 2] = CONCAT44(uStack_fc,uStack_100);
    uStack_3c = CONCAT11(1,(undefined1)uStack_3c);
  }
  lVar4 = *(longlong *)((longlong)param_1 + 8);
  if (*(int *)(lVar4 + 0x90) != 0) {
    lStack_58 = *(longlong *)(lVar4 + 0x370);
    auStack_f8._24_8_ = 0x405080000000000;
    auStack_f8._40_8_ = 0x405080400000000;
    auStack_f8._16_8_ = lVar4 + 0x68;
    auStack_f8._32_8_ = lVar4 + 0x68;
  }
  if (*(int *)(lVar4 + 0xc0) != 0) {
    lStack_48 = *(longlong *)(lVar4 + 0x378);
    lStack_68 = 0x408040000000000;
    lStack_70 = lVar4 + 0x98;
  }
  FLocalVertexFactory::SetData
            (*(FLocalVertexFactory **)param_1,(FRHICommandListBase *)param_2,(FDataType *)auStack_f8
            );
  (**(code **)(**(longlong **)param_1 + 0x18))(*(longlong **)param_1,param_2);
  return;
}

// Call @ 146c68670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x530);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)((longlong)param_1 + 0x10);
    if (lVar2 == 0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4609931266588934462>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x13e,"Material");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0x29d) = *(undefined1 *)((longlong)param_1 + 8);
      *(longlong *)(lVar1 + 0x290) = lVar2;
    }
  }
  return;
}

// Call @ 146c686e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (*(longlong *)(*(longlong *)param_1 + 0x530) != 0) {
    *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0x530) + 0x29c) =
         *(undefined1 *)((longlong)param_1 + 8);
  }
  return;
}

// Call @ 146c68700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMRMeshComponent::SendBrickData_Internal'::__l84::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMRMeshProxy *this;
  FSendBrickDataArgs *pFVar1;
  FSendBrickDataArgs local_88;
  
  this = *(FMRMeshProxy **)(*(longlong *)param_1 + 0x530);
  if ((this != (FMRMeshProxy *)0x0) &&
     (FMRMeshProxy::RenderThread_RemoveSection(this,*(ulong64 *)((longlong)param_1 + 0x18)),
     *(char *)((longlong)param_1 + 0x80) != '\0')) {
    pFVar1 = IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs
                       (&local_88,(FSendBrickDataArgs *)((longlong)param_1 + 8));
    FMRMeshProxy::RenderThread_UploadNewSection(this,pFVar1);
  }
  return;
}

