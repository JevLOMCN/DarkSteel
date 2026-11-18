// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 16

// AddZeroed @ 14d6b6470

int __thiscall
TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Insert @ 14d6decc0

int __thiscall
TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_> *this,
          FDistortionFocusPoint *param_1,int param_2)

{
  FDistortionFocusPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FDistortionFocusPoint *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0xa0;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0xa0,pFVar5,(longlong)(iVar4 - param_2) * 0xa0);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined ***)(pFVar5 + lVar6) = &___7FDistortionFocusPoint__6B_;
  *(float *)(pFVar5 + lVar6 + 8) = param_1->Focus;
  *(undefined8 *)(pFVar5 + lVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x38) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x40) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x44) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x48) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x4c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x68) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x78) = (int)(param_1->MapBlendingCurve)._padding_;
  pFVar5[lVar6 + 0x7c] =
       *(FScriptContainerElement *)((longlong)&(param_1->MapBlendingCurve)._padding_ + 4);
  pFVar5[lVar6 + 0x7d] =
       *(FScriptContainerElement *)((longlong)&(param_1->MapBlendingCurve)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x80) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x80) =
       (param_1->MapBlendingCurve).Keys.AllocatorInstance.Data;
  (param_1->MapBlendingCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x88) = (param_1->MapBlendingCurve).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x8c) = (param_1->MapBlendingCurve).Keys.ArrayMax;
  (param_1->MapBlendingCurve).Keys.ArrayNum = 0;
  (param_1->MapBlendingCurve).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x90) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x90) =
       (param_1->ZoomPoints).AllocatorInstance.Data;
  (param_1->ZoomPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x98) = (param_1->ZoomPoints).ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x9c) = (param_1->ZoomPoints).ArrayMax;
  (param_1->ZoomPoints).ArrayNum = 0;
  (param_1->ZoomPoints).ArrayMax = 0;
  return param_2;
}

// Insert @ 14d6deeb0

int __thiscall
TArray<FFocalLengthFocusCurve,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FFocalLengthFocusCurve,TSizedDefaultAllocator<32>_> *this,
          FFocalLengthFocusCurve *param_1,int param_2)

{
  FFocalLengthFocusCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FFocalLengthFocusCurve *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x108;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x108,pFVar5,(longlong)(iVar4 - param_2) * 0x108);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar5 + lVar6 + 8) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x28) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x30) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x34) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x38) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x3c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x48) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x50) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined ***)(pFVar5 + lVar6) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x68) = (int)(param_1->Fx)._padding_;
  pFVar5[lVar6 + 0x6c] = *(FScriptContainerElement *)((longlong)&(param_1->Fx)._padding_ + 4);
  pFVar5[lVar6 + 0x6d] = *(FScriptContainerElement *)((longlong)&(param_1->Fx)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x70) = (param_1->Fx).Keys.AllocatorInstance.Data;
  (param_1->Fx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x78) = (param_1->Fx).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x7c) = (param_1->Fx).Keys.ArrayMax;
  (param_1->Fx).Keys.ArrayNum = 0;
  (param_1->Fx).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x90) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x88) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xa8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb0) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb4) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb8) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0xbc) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 200) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xd0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xe0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xd8) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x80) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0xe8) = (int)(param_1->Fy)._padding_;
  pFVar5[lVar6 + 0xec] = *(FScriptContainerElement *)((longlong)&(param_1->Fy)._padding_ + 4);
  pFVar5[lVar6 + 0xed] = *(FScriptContainerElement *)((longlong)&(param_1->Fy)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0xf0) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0xf0) = (param_1->Fy).Keys.AllocatorInstance.Data;
  (param_1->Fy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0xf8) = (param_1->Fy).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0xfc) = (param_1->Fy).Keys.ArrayMax;
  (param_1->Fy).Keys.ArrayNum = 0;
  (param_1->Fy).Keys.ArrayMax = 0;
  *(float *)(pFVar5 + lVar6 + 0x100) = param_1->Zoom;
  return param_2;
}

// Insert @ 14d6df110

int __thiscall
TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_> *this,
          FFocalLengthFocusPoint *param_1,int param_2)

{
  FFocalLengthFocusPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FFocalLengthFocusPoint *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x120;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x120,pFVar5,(longlong)(iVar4 - param_2) * 0x120);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined ***)(pFVar5 + lVar6) = &___7FFocalLengthFocusPoint__6B_;
  *(float *)(pFVar5 + lVar6 + 8) = param_1->Focus;
  *(undefined8 *)(pFVar5 + lVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x38) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x40) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x44) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x48) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x4c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x68) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x78) = (int)(param_1->Fx)._padding_;
  pFVar5[lVar6 + 0x7c] = *(FScriptContainerElement *)((longlong)&(param_1->Fx)._padding_ + 4);
  pFVar5[lVar6 + 0x7d] = *(FScriptContainerElement *)((longlong)&(param_1->Fx)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x80) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x80) = (param_1->Fx).Keys.AllocatorInstance.Data;
  (param_1->Fx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x88) = (param_1->Fx).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x8c) = (param_1->Fx).Keys.ArrayMax;
  (param_1->Fx).Keys.ArrayNum = 0;
  (param_1->Fx).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x98) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xa0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xb8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xc0) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xc4) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 200) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0xcc) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xd8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xe0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xe8) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xf0) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x90) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0xf8) = (int)(param_1->Fy)._padding_;
  pFVar5[lVar6 + 0xfc] = *(FScriptContainerElement *)((longlong)&(param_1->Fy)._padding_ + 4);
  pFVar5[lVar6 + 0xfd] = *(FScriptContainerElement *)((longlong)&(param_1->Fy)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x90) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x100) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x100) = (param_1->Fy).Keys.AllocatorInstance.Data;
  (param_1->Fy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x108) = (param_1->Fy).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x10c) = (param_1->Fy).Keys.ArrayMax;
  (param_1->Fy).Keys.ArrayNum = 0;
  (param_1->Fy).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x110) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x110) =
       (param_1->ZoomPoints).AllocatorInstance.Data;
  (param_1->ZoomPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x118) = (param_1->ZoomPoints).ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x11c) = (param_1->ZoomPoints).ArrayMax;
  (param_1->ZoomPoints).ArrayNum = 0;
  (param_1->ZoomPoints).ArrayMax = 0;
  return param_2;
}

// Insert @ 14d6df3e0

int __thiscall
TArray<FImageCenterFocusCurve,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FImageCenterFocusCurve,TSizedDefaultAllocator<32>_> *this,
          FImageCenterFocusCurve *param_1,int param_2)

{
  FImageCenterFocusCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FImageCenterFocusCurve *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x108;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x108,pFVar5,(longlong)(iVar4 - param_2) * 0x108);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar5 + lVar6 + 8) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x28) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x30) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x34) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x38) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x3c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x48) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x50) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined ***)(pFVar5 + lVar6) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x68) = (int)(param_1->Cx)._padding_;
  pFVar5[lVar6 + 0x6c] = *(FScriptContainerElement *)((longlong)&(param_1->Cx)._padding_ + 4);
  pFVar5[lVar6 + 0x6d] = *(FScriptContainerElement *)((longlong)&(param_1->Cx)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x70) = (param_1->Cx).Keys.AllocatorInstance.Data;
  (param_1->Cx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x78) = (param_1->Cx).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x7c) = (param_1->Cx).Keys.ArrayMax;
  (param_1->Cx).Keys.ArrayNum = 0;
  (param_1->Cx).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x90) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x88) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xa8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb0) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb4) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0xb8) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0xbc) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 200) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xd0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xe0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xd8) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x80) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0xe8) = (int)(param_1->Cy)._padding_;
  pFVar5[lVar6 + 0xec] = *(FScriptContainerElement *)((longlong)&(param_1->Cy)._padding_ + 4);
  pFVar5[lVar6 + 0xed] = *(FScriptContainerElement *)((longlong)&(param_1->Cy)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0xf0) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0xf0) = (param_1->Cy).Keys.AllocatorInstance.Data;
  (param_1->Cy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0xf8) = (param_1->Cy).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0xfc) = (param_1->Cy).Keys.ArrayMax;
  (param_1->Cy).Keys.ArrayNum = 0;
  (param_1->Cy).Keys.ArrayMax = 0;
  *(float *)(pFVar5 + lVar6 + 0x100) = param_1->Zoom;
  return param_2;
}

// Insert @ 14d6df640

int __thiscall
TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_> *this,
          FImageCenterFocusPoint *param_1,int param_2)

{
  FImageCenterFocusPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FImageCenterFocusPoint *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x110;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x110,pFVar5,(longlong)(iVar4 - param_2) * 0x110);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined ***)(pFVar5 + lVar6) = &___7FImageCenterFocusPoint__6B_;
  *(float *)(pFVar5 + lVar6 + 8) = param_1->Focus;
  *(undefined8 *)(pFVar5 + lVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x38) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x40) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x44) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x48) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x4c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x68) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x78) = (int)(param_1->Cx)._padding_;
  pFVar5[lVar6 + 0x7c] = *(FScriptContainerElement *)((longlong)&(param_1->Cx)._padding_ + 4);
  pFVar5[lVar6 + 0x7d] = *(FScriptContainerElement *)((longlong)&(param_1->Cx)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x80) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x80) = (param_1->Cx).Keys.AllocatorInstance.Data;
  (param_1->Cx).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x88) = (param_1->Cx).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x8c) = (param_1->Cx).Keys.ArrayMax;
  (param_1->Cx).Keys.ArrayNum = 0;
  (param_1->Cx).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x98) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xa0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xb8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xc0) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xc4) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 200) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0xcc) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xd8) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0xe0) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xe8) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0xf0) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x90) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0xf8) = (int)(param_1->Cy)._padding_;
  pFVar5[lVar6 + 0xfc] = *(FScriptContainerElement *)((longlong)&(param_1->Cy)._padding_ + 4);
  pFVar5[lVar6 + 0xfd] = *(FScriptContainerElement *)((longlong)&(param_1->Cy)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x90) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x100) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x100) = (param_1->Cy).Keys.AllocatorInstance.Data;
  (param_1->Cy).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x108) = (param_1->Cy).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x10c) = (param_1->Cy).Keys.ArrayMax;
  (param_1->Cy).Keys.ArrayNum = 0;
  (param_1->Cy).Keys.ArrayMax = 0;
  return param_2;
}

// Insert @ 14d6df8c0

int __thiscall
TArray<FSTMapFocusPoint,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FSTMapFocusPoint,TSizedDefaultAllocator<32>_> *this,FSTMapFocusPoint *param_1,
          int param_2)

{
  FSTMapFocusPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar1 = (FSTMapFocusPoint *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0xa0;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0xa0,pFVar5,(longlong)(iVar4 - param_2) * 0xa0);
  pFVar5 = (this->AllocatorInstance).Data;
  *(undefined ***)(pFVar5 + lVar6) = &___7FSTMapFocusPoint__6B_;
  *(float *)(pFVar5 + lVar6 + 8) = param_1->Focus;
  *(undefined8 *)(pFVar5 + lVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x38) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x40) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x44) = 0x80;
  *(undefined4 *)(pFVar5 + lVar6 + 0x48) = 0xffffffff;
  *(undefined4 *)(pFVar5 + lVar6 + 0x4c) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x58) = 0;
  *(undefined4 *)(pFVar5 + lVar6 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x68) = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x70) = 0;
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRealCurve__6B_;
  *(int *)(pFVar5 + lVar6 + 0x78) = (int)(param_1->MapBlendingCurve)._padding_;
  pFVar5[lVar6 + 0x7c] =
       *(FScriptContainerElement *)((longlong)&(param_1->MapBlendingCurve)._padding_ + 4);
  pFVar5[lVar6 + 0x7d] =
       *(FScriptContainerElement *)((longlong)&(param_1->MapBlendingCurve)._padding_ + 5);
  *(undefined ***)(pFVar5 + lVar6 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)(pFVar5 + lVar6 + 0x80) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x80) =
       (param_1->MapBlendingCurve).Keys.AllocatorInstance.Data;
  (param_1->MapBlendingCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x88) = (param_1->MapBlendingCurve).Keys.ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x8c) = (param_1->MapBlendingCurve).Keys.ArrayMax;
  (param_1->MapBlendingCurve).Keys.ArrayNum = 0;
  (param_1->MapBlendingCurve).Keys.ArrayMax = 0;
  *(undefined8 *)(pFVar5 + lVar6 + 0x90) = 0;
  *(FScriptContainerElement **)(pFVar5 + lVar6 + 0x90) =
       (param_1->ZoomPoints).AllocatorInstance.Data;
  (param_1->ZoomPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + lVar6 + 0x98) = (param_1->ZoomPoints).ArrayNum;
  *(int *)(pFVar5 + lVar6 + 0x9c) = (param_1->ZoomPoints).ArrayMax;
  (param_1->ZoomPoints).ArrayNum = 0;
  (param_1->ZoomPoints).ArrayMax = 0;
  return param_2;
}

// Insert @ 14d6dfab0

int __thiscall
TArray<FSTMapZoomPoint,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FSTMapZoomPoint,TSizedDefaultAllocator<32>_> *this,FSTMapZoomPoint *param_1,
          int param_2)

{
  FSTMapZoomPoint *pFVar1;
  UTexture *pUVar2;
  UTextureRenderTarget2D *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  pFVar1 = (FSTMapZoomPoint *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar7 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar6 + 1;
  lVar8 = (longlong)param_2 * 0x50;
  pFVar7 = pFVar7 + lVar8;
  memmove(pFVar7 + 0x50,pFVar7,(longlong)(iVar6 - param_2) * 0x50);
  pFVar7 = (this->AllocatorInstance).Data;
  *(float *)(pFVar7 + lVar8) = param_1->Zoom;
  pUVar2 = (param_1->STMapInfo).DistortionMap.field0_0x0.DebugPtr;
  *(UTexture **)(pFVar7 + lVar8 + 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined2 *)(pFVar7 + lVar8 + 0x10) = *(undefined2 *)&(param_1->STMapInfo).MapFormat;
  pFVar7[lVar8 + 0x12] = (FScriptContainerElement)(param_1->STMapInfo).MapFormat.DistortionChannels;
  *(undefined8 *)(pFVar7 + lVar8 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + lVar8 + 0x18) =
       (param_1->DerivedDistortionData).DistortionData.DistortedUVs.AllocatorInstance.Data;
  (param_1->DerivedDistortionData).DistortionData.DistortedUVs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + lVar8 + 0x20) =
       (param_1->DerivedDistortionData).DistortionData.DistortedUVs.ArrayNum;
  *(int *)(pFVar7 + lVar8 + 0x24) =
       (param_1->DerivedDistortionData).DistortionData.DistortedUVs.ArrayMax;
  (param_1->DerivedDistortionData).DistortionData.DistortedUVs.ArrayNum = 0;
  (param_1->DerivedDistortionData).DistortionData.DistortedUVs.ArrayMax = 0;
  *(float *)(pFVar7 + lVar8 + 0x28) = (param_1->DerivedDistortionData).DistortionData.OverscanFactor
  ;
  pUVar3 = (param_1->DerivedDistortionData).UndistortionDisplacementMap.field0_0x0.DebugPtr;
  *(UTextureRenderTarget2D **)(pFVar7 + lVar8 + 0x30) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (param_1->DerivedDistortionData).DistortionDisplacementMap.field0_0x0.DebugPtr;
  *(UTextureRenderTarget2D **)(pFVar7 + lVar8 + 0x38) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar7[lVar8 + 0x40] = (FScriptContainerElement)(param_1->DerivedDistortionData).bIsDirty;
  pFVar7[lVar8 + 0x48] = (FScriptContainerElement)param_1->bIsCalibrationPoint;
  return param_2;
}

// InsertUninitializedImpl @ 14d6dfc40

void __thiscall
TArray<FFocalLengthFocusCurve,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<FFocalLengthFocusCurve,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x108;
  this->ArrayNum = iVar1 + 1;
  memmove(_Src + 0x108,_Src,(longlong)(iVar1 - param_1) * 0x108);
  return;
}

// InsertUninitializedImpl @ 14d6dfcb0

void __thiscall
TArray<FImageCenterFocusCurve,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<FImageCenterFocusCurve,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x108;
  this->ArrayNum = iVar1 + 1;
  memmove(_Src + 0x108,_Src,(longlong)(iVar1 - param_1) * 0x108);
  return;
}

// RemoveAt @ 14d6e7800

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDistortionFocusPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDistortionFocusPoint *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FDistortionFocusPoint *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa0);
  FDistortionFocusPoint::~FDistortionFocusPoint(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0xa0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14d6e78f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FFocalLengthFocusPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FFocalLengthFocusPoint *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FFocalLengthFocusPoint *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x120);
  FFocalLengthFocusPoint::~FFocalLengthFocusPoint(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x120);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14d6e79e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FImageCenterFocusPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FImageCenterFocusPoint *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FImageCenterFocusPoint *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x110);
  FImageCenterFocusPoint::~FImageCenterFocusPoint(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x110);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14d6e7ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FNodalOffsetFocusPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FNodalOffsetFocusPoint *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FNodalOffsetFocusPoint *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x310);
  FNodalOffsetFocusPoint::~FNodalOffsetFocusPoint(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x310);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x310,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14d6e7bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSTMapFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FSTMapFocusPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FSTMapFocusPoint *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FSTMapFocusPoint *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa0);
  FSTMapFocusPoint::~FSTMapFocusPoint(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0xa0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// SetNumZeroed @ 14d6ebc60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<float> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<float>)0x0) {
      this = (TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<float>)this;
        if (FVar2 != (ForElementType<float>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

