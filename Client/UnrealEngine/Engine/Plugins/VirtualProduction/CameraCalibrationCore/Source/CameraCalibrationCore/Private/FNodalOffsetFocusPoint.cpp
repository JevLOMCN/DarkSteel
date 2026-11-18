// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 15

// StaticStruct @ 14d679650

UScriptStruct * __cdecl FNodalOffsetFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodalOffsetFocusPoint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FNodalOffsetFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint,(UObject *)pUVar1,
                         L"NodalOffsetFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FNodalOffsetFocusPoint.OuterSingleton;
}

// GetFocus @ 14d6796a0

float __thiscall FNodalOffsetFocusPoint::GetFocus(FNodalOffsetFocusPoint *this)

{
  return this->Focus;
}

// GetNumPoints @ 14d6796b0

int __thiscall FNodalOffsetFocusPoint::GetNumPoints(FNodalOffsetFocusPoint *this)

{
  return this->LocationOffset[0].Keys.ArrayNum;
}

// GetZoom @ 14d6796c0

float __thiscall FNodalOffsetFocusPoint::GetZoom(FNodalOffsetFocusPoint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < this->LocationOffset[0].Keys.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)(this->LocationOffset[0].Keys.AllocatorInstance.Data +
                   (longlong)param_1 * 0x1c + 4);
}

// FNodalOffsetFocusPoint @ 14d6a89d0

FNodalOffsetFocusPoint * __thiscall
FNodalOffsetFocusPoint::FNodalOffsetFocusPoint
          (FNodalOffsetFocusPoint *this,FNodalOffsetFocusPoint *param_1)

{
  this->_padding_ = (longlong)&___7FNodalOffsetFocusPoint__6B_;
  this->Focus = param_1->Focus;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[0]._padding_ = (int)param_1->LocationOffset[0]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[0]._padding_ + 5);
  this->LocationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[0].Keys.AllocatorInstance.Data =
       param_1->LocationOffset[0].Keys.AllocatorInstance.Data;
  param_1->LocationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[0].Keys.ArrayNum = param_1->LocationOffset[0].Keys.ArrayNum;
  this->LocationOffset[0].Keys.ArrayMax = param_1->LocationOffset[0].Keys.ArrayMax;
  param_1->LocationOffset[0].Keys.ArrayNum = 0;
  param_1->LocationOffset[0].Keys.ArrayMax = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[1]._padding_ = (int)param_1->LocationOffset[1]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[1]._padding_ + 5);
  this->LocationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[1].Keys.AllocatorInstance.Data =
       param_1->LocationOffset[1].Keys.AllocatorInstance.Data;
  param_1->LocationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[1].Keys.ArrayNum = param_1->LocationOffset[1].Keys.ArrayNum;
  this->LocationOffset[1].Keys.ArrayMax = param_1->LocationOffset[1].Keys.ArrayMax;
  param_1->LocationOffset[1].Keys.ArrayNum = 0;
  param_1->LocationOffset[1].Keys.ArrayMax = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[2]._padding_ = (int)param_1->LocationOffset[2]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[2]._padding_ + 5);
  this->LocationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[2].Keys.AllocatorInstance.Data =
       param_1->LocationOffset[2].Keys.AllocatorInstance.Data;
  param_1->LocationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[2].Keys.ArrayNum = param_1->LocationOffset[2].Keys.ArrayNum;
  this->LocationOffset[2].Keys.ArrayMax = param_1->LocationOffset[2].Keys.ArrayMax;
  param_1->LocationOffset[2].Keys.ArrayNum = 0;
  param_1->LocationOffset[2].Keys.ArrayMax = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[0]._padding_ = (int)param_1->RotationOffset[0]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[0]._padding_ + 5);
  this->RotationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[0].Keys.AllocatorInstance.Data =
       param_1->RotationOffset[0].Keys.AllocatorInstance.Data;
  param_1->RotationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[0].Keys.ArrayNum = param_1->RotationOffset[0].Keys.ArrayNum;
  this->RotationOffset[0].Keys.ArrayMax = param_1->RotationOffset[0].Keys.ArrayMax;
  param_1->RotationOffset[0].Keys.ArrayNum = 0;
  param_1->RotationOffset[0].Keys.ArrayMax = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[1]._padding_ = (int)param_1->RotationOffset[1]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[1]._padding_ + 5);
  this->RotationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[1].Keys.AllocatorInstance.Data =
       param_1->RotationOffset[1].Keys.AllocatorInstance.Data;
  param_1->RotationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[1].Keys.ArrayNum = param_1->RotationOffset[1].Keys.ArrayNum;
  this->RotationOffset[1].Keys.ArrayMax = param_1->RotationOffset[1].Keys.ArrayMax;
  param_1->RotationOffset[1].Keys.ArrayNum = 0;
  param_1->RotationOffset[1].Keys.ArrayMax = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[2]._padding_ = (int)param_1->RotationOffset[2]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[2]._padding_ + 5);
  this->RotationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[2].Keys.AllocatorInstance.Data =
       param_1->RotationOffset[2].Keys.AllocatorInstance.Data;
  param_1->RotationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[2].Keys.ArrayNum = param_1->RotationOffset[2].Keys.ArrayNum;
  this->RotationOffset[2].Keys.ArrayMax = param_1->RotationOffset[2].Keys.ArrayMax;
  param_1->RotationOffset[2].Keys.ArrayNum = 0;
  param_1->RotationOffset[2].Keys.ArrayMax = 0;
  return this;
}

// FNodalOffsetFocusPoint @ 14d6a8e50

FNodalOffsetFocusPoint * __thiscall
FNodalOffsetFocusPoint::FNodalOffsetFocusPoint
          (FNodalOffsetFocusPoint *this,FNodalOffsetFocusPoint *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FNodalOffsetFocusPoint__6B_;
  pTVar1 = &this->LocationOffset[0].Keys;
  this->Focus = param_1->Focus;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[0]._padding_ = (int)param_1->LocationOffset[0]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[0]._padding_ + 5);
  piVar2 = &this->LocationOffset[0].Keys.ArrayMax;
  this->LocationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->LocationOffset[0].Keys.ArrayNum;
  pFVar4 = param_1->LocationOffset[0].Keys.AllocatorInstance.Data;
  this->LocationOffset[0].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->LocationOffset[1]._padding_ = 0;
  pTVar1 = &this->LocationOffset[1].Keys;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[1]._padding_ = (int)param_1->LocationOffset[1]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[1]._padding_ + 5);
  piVar2 = &this->LocationOffset[1].Keys.ArrayMax;
  this->LocationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->LocationOffset[1].Keys.ArrayNum;
  pFVar4 = param_1->LocationOffset[1].Keys.AllocatorInstance.Data;
  this->LocationOffset[1].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->LocationOffset[2]._padding_ = 0;
  pTVar1 = &this->LocationOffset[2].Keys;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->LocationOffset[2]._padding_ = (int)param_1->LocationOffset[2]._padding_;
  *(undefined1 *)((longlong)&this->LocationOffset[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->LocationOffset[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->LocationOffset[2]._padding_ + 5);
  piVar2 = &this->LocationOffset[2].Keys.ArrayMax;
  this->LocationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->LocationOffset[2].Keys.ArrayNum;
  pFVar4 = param_1->LocationOffset[2].Keys.AllocatorInstance.Data;
  this->LocationOffset[2].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->RotationOffset[0]._padding_ = 0;
  pTVar1 = &this->RotationOffset[0].Keys;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[0]._padding_ = (int)param_1->RotationOffset[0]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[0]._padding_ + 5);
  piVar2 = &this->RotationOffset[0].Keys.ArrayMax;
  this->RotationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->RotationOffset[0].Keys.ArrayNum;
  pFVar4 = param_1->RotationOffset[0].Keys.AllocatorInstance.Data;
  this->RotationOffset[0].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->RotationOffset[1]._padding_ = 0;
  pTVar1 = &this->RotationOffset[1].Keys;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[1]._padding_ = (int)param_1->RotationOffset[1]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[1]._padding_ + 5);
  piVar2 = &this->RotationOffset[1].Keys.ArrayMax;
  this->RotationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->RotationOffset[1].Keys.ArrayNum;
  pFVar4 = param_1->RotationOffset[1].Keys.AllocatorInstance.Data;
  this->RotationOffset[1].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->RotationOffset[2]._padding_ = 0;
  pTVar1 = &this->RotationOffset[2].Keys;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->RotationOffset[2]._padding_ = (int)param_1->RotationOffset[2]._padding_;
  *(undefined1 *)((longlong)&this->RotationOffset[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->RotationOffset[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->RotationOffset[2]._padding_ + 5);
  piVar2 = &this->RotationOffset[2].Keys.ArrayMax;
  this->RotationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->RotationOffset[2].Keys.ArrayNum;
  pFVar4 = param_1->RotationOffset[2].Keys.AllocatorInstance.Data;
  this->RotationOffset[2].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  return this;
}

// FNodalOffsetFocusPoint @ 14d6a93f0

FNodalOffsetFocusPoint * __thiscall
FNodalOffsetFocusPoint::FNodalOffsetFocusPoint(FNodalOffsetFocusPoint *this)

{
  this->_padding_ = (longlong)&___7FNodalOffsetFocusPoint__6B_;
  this->Focus = 0.0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  this->LocationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->LocationOffset[0]._padding_ + 4) = 0x404;
  this->LocationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[0].Keys.ArrayNum = 0;
  this->LocationOffset[0].Keys.ArrayMax = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  this->LocationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->LocationOffset[1]._padding_ + 4) = 0x404;
  this->LocationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[1].Keys.ArrayNum = 0;
  this->LocationOffset[1].Keys.ArrayMax = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  this->LocationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->LocationOffset[2]._padding_ + 4) = 0x404;
  this->LocationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->LocationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LocationOffset[2].Keys.ArrayNum = 0;
  this->LocationOffset[2].Keys.ArrayMax = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  this->RotationOffset[0]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->RotationOffset[0]._padding_ + 4) = 0x404;
  this->RotationOffset[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[0].Keys.ArrayNum = 0;
  this->RotationOffset[0].Keys.ArrayMax = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  this->RotationOffset[1]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->RotationOffset[1]._padding_ + 4) = 0x404;
  this->RotationOffset[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[1].Keys.ArrayNum = 0;
  this->RotationOffset[1].Keys.ArrayMax = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  this->RotationOffset[2]._padding_ = 0;
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->RotationOffset[2]._padding_ + 4) = 0x404;
  this->RotationOffset[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->RotationOffset[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RotationOffset[2].Keys.ArrayNum = 0;
  this->RotationOffset[2].Keys.ArrayMax = 0;
  return this;
}

// ~FNodalOffsetFocusPoint @ 14d6ac750

void __thiscall FNodalOffsetFocusPoint::~FNodalOffsetFocusPoint(FNodalOffsetFocusPoint *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->RotationOffset[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->RotationOffset[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->RotationOffset[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->RotationOffset[2]._padding_ = 0;
  pvVar2 = (void *)this->RotationOffset[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RotationOffset[2]._padding_);
  pFVar1 = this->RotationOffset[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->RotationOffset[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->RotationOffset[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->RotationOffset[1]._padding_ = 0;
  pvVar2 = (void *)this->RotationOffset[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RotationOffset[1]._padding_);
  pFVar1 = this->RotationOffset[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->RotationOffset[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->RotationOffset[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->RotationOffset[0]._padding_ = 0;
  pvVar2 = (void *)this->RotationOffset[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RotationOffset[0]._padding_);
  pFVar1 = this->LocationOffset[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->LocationOffset[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->LocationOffset[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->LocationOffset[2]._padding_ = 0;
  pvVar2 = (void *)this->LocationOffset[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocationOffset[2]._padding_);
  pFVar1 = this->LocationOffset[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->LocationOffset[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->LocationOffset[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->LocationOffset[1]._padding_ = 0;
  pvVar2 = (void *)this->LocationOffset[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocationOffset[1]._padding_);
  pFVar1 = this->LocationOffset[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->LocationOffset[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->LocationOffset[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->LocationOffset[0]._padding_ = 0;
  pvVar2 = (void *)this->LocationOffset[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocationOffset[0]._padding_);
  return;
}

// AddPoint @ 14d6b5b40

bool __thiscall
FNodalOffsetFocusPoint::AddPoint
          (FNodalOffsetFocusPoint *this,float param_1,FNodalPointOffset *param_2,float param_3,
          bool param_4)

{
  uint uVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  uint uVar3;
  FRichCurve *this_00;
  undefined1 in_R9B;
  undefined1 uVar4;
  undefined8 uVar5;
  float fVar6;
  FKeyHandle local_res18;
  FKeyHandle in_stack_ffffffffffffff88;
  FKeyHandle local_64 [3];
  TRotator<double> local_58 [2];
  
  fVar6 = param_1;
  FRealCurve::FindKey((FRealCurve *)this->LocationOffset,param_1,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index == *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
    FKeyHandle::FKeyHandle(local_64);
    in_stack_ffffffffffffff88.Index = in_stack_ffffffffffffff88.Index & 0xffffff00;
    FVar2 = FRichCurve::AddKey(this->LocationOffset,fVar6,param_1,(bool)in_R9B,
                               in_stack_ffffffffffffff88);
    uVar4 = 1;
    local_res18.Index = *(uint *)CONCAT44(extraout_var_00,FVar2.Index);
    FRichCurve::SetKeyTangentMode(this->LocationOffset,local_res18,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(this->LocationOffset,local_res18,RCIM_Cubic);
  }
  else {
    uVar4 = 1;
    FRichCurve::SetKeyValue
              (this->LocationOffset,local_res18,(float)(param_2->LocationOffset).field0_0x0._s_0.X,
               true);
  }
  FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + 1),fVar6,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index == *(uint *)CONCAT44(extraout_var_01,FVar2.Index)) {
    FKeyHandle::FKeyHandle(local_64);
    in_stack_ffffffffffffff88.Index = in_stack_ffffffffffffff88.Index & 0xffffff00;
    FVar2 = FRichCurve::AddKey(this->LocationOffset + 1,fVar6,param_1,(bool)uVar4,
                               in_stack_ffffffffffffff88);
    uVar4 = 1;
    local_res18.Index = *(uint *)CONCAT44(extraout_var_02,FVar2.Index);
    FRichCurve::SetKeyTangentMode(this->LocationOffset + 1,local_res18,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(this->LocationOffset + 1,local_res18,RCIM_Cubic);
  }
  else {
    uVar4 = 1;
    FRichCurve::SetKeyValue
              (this->LocationOffset + 1,local_res18,
               (float)(param_2->LocationOffset).field0_0x0._s_0.Y,true);
  }
  FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + 2),fVar6,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index == *(uint *)CONCAT44(extraout_var_03,FVar2.Index)) {
    FKeyHandle::FKeyHandle(local_64);
    in_stack_ffffffffffffff88.Index = in_stack_ffffffffffffff88.Index & 0xffffff00;
    FVar2 = FRichCurve::AddKey(this->LocationOffset + 2,fVar6,param_1,(bool)uVar4,
                               in_stack_ffffffffffffff88);
    uVar5 = 1;
    local_res18.Index = *(uint *)CONCAT44(extraout_var_04,FVar2.Index);
    FRichCurve::SetKeyTangentMode(this->LocationOffset + 2,local_res18,RCTM_Auto,true);
    FRichCurve::SetKeyInterpMode(this->LocationOffset + 2,local_res18,RCIM_Cubic);
  }
  else {
    uVar5 = 1;
    FRichCurve::SetKeyValue
              (this->LocationOffset + 2,local_res18,
               (float)(param_2->LocationOffset).field0_0x0._s_0.Z,true);
  }
  UE::Math::TQuat<double>::Rotator(&param_2->RotationOffset,local_58);
  uVar3 = 0;
  do {
    uVar4 = (undefined1)uVar5;
    this_00 = this->RotationOffset + (int)uVar3;
    FRealCurve::FindKey((FRealCurve *)this_00,fVar6,param_1);
    FVar2 = FKeyHandle::Invalid();
    uVar1 = uVar3 + 1;
    if (local_res18.Index == *(uint *)CONCAT44(extraout_var_05,FVar2.Index)) {
      FKeyHandle::FKeyHandle(local_64);
      in_stack_ffffffffffffff88.Index = in_stack_ffffffffffffff88.Index & 0xffffff00;
      FVar2 = FRichCurve::AddKey(this_00,fVar6,param_1,(bool)uVar4,in_stack_ffffffffffffff88);
      uVar5 = 1;
      local_res18.Index = *(uint *)CONCAT44(extraout_var_06,FVar2.Index);
      FRichCurve::SetKeyTangentMode(this_00,local_res18,RCTM_Auto,true);
      FRichCurve::SetKeyInterpMode(this_00,local_res18,RCIM_Cubic);
    }
    else if (uVar1 == 0) {
LAB_14d6b5dd7:
      uVar5 = 1;
      FRichCurve::SetKeyValue(this_00,local_res18,0.0,true);
    }
    else if (uVar3 == 0) {
      uVar5 = 1;
      FRichCurve::SetKeyValue(this_00,local_res18,(float)local_58[0].Roll,true);
    }
    else if (uVar3 == 1) {
      uVar5 = 1;
      FRichCurve::SetKeyValue(this_00,local_res18,(float)local_58[0].Pitch,true);
    }
    else {
      if (uVar3 != 2) goto LAB_14d6b5dd7;
      uVar5 = 1;
      FRichCurve::SetKeyValue(this_00,local_res18,(float)local_58[0].Yaw,true);
    }
    uVar3 = uVar1;
    if (2 < uVar1) {
      return true;
    }
  } while( true );
}

// GetCurveForParameter @ 14d6d3390

FRichCurve * __thiscall
FNodalOffsetFocusPoint::GetCurveForParameter(FNodalOffsetFocusPoint *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((uint)param_1 < 6) {
    iVar1 = param_1 / 3 + (param_1 >> 0x1f) +
            (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar2 = param_1 + iVar1 * -3;
    if (iVar1 == 0) {
      return this->LocationOffset + iVar2;
    }
    if (iVar1 == 1) {
      return this->RotationOffset + iVar2;
    }
  }
  return (FRichCurve *)0x0;
}

// GetCurveForParameter @ 14d6d33e0

FRichCurve * __thiscall
FNodalOffsetFocusPoint::GetCurveForParameter(FNodalOffsetFocusPoint *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((uint)param_1 < 6) {
    iVar1 = param_1 / 3 + (param_1 >> 0x1f) +
            (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar2 = param_1 + iVar1 * -3;
    if (iVar1 == 0) {
      return this->LocationOffset + iVar2;
    }
    if (iVar1 == 1) {
      return this->RotationOffset + iVar2;
    }
  }
  return (FRichCurve *)0x0;
}

// GetPoint @ 14d6d75a0

bool __thiscall
FNodalOffsetFocusPoint::GetPoint
          (FNodalOffsetFocusPoint *this,float param_1,FNodalPointOffset *param_2,float param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  FKeyHandle FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  TQuat<double> *pTVar8;
  uint uVar9;
  FNodalPointOffset *pFVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  FKeyHandle local_98;
  FKeyHandle local_94;
  TRotator<double> local_88;
  TQuat<double> local_68 [2];
  
  uVar11 = 0;
  uVar9 = 0;
  pFVar10 = param_2;
  fVar13 = param_1;
  while( true ) {
    FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + (int)uVar9),fVar13,param_1);
    FVar7 = FKeyHandle::Invalid();
    if (local_98.Index == *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
      return false;
    }
    fVar12 = FRichCurve::GetKeyValue(this->LocationOffset + (int)uVar9,local_98);
    if ((2 < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar5)) break;
    (pFVar10->LocationOffset).field0_0x0._s_0.X = (double)fVar12;
    uVar9 = uVar9 + 1;
    pFVar10 = (FNodalPointOffset *)((longlong)&(pFVar10->LocationOffset).field0_0x0 + 8);
    if (2 < uVar9) {
      do {
        FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar11),fVar13,param_1);
        FVar7 = FKeyHandle::Invalid();
        if (local_94.Index == *(uint *)CONCAT44(extraout_var_00,FVar7.Index)) {
          return false;
        }
        fVar13 = FRichCurve::GetKeyValue(this->RotationOffset + (int)uVar11,local_94);
        uVar9 = uVar11 + 1;
        dVar2 = (double)fVar13;
        fVar13 = SUB84(dVar2,0);
        dVar3 = local_88.Pitch;
        dVar4 = dVar2;
        if (((uVar11 != 0) && (dVar3 = dVar2, dVar4 = local_88.Roll, uVar11 != 1)) &&
           (dVar3 = local_88.Pitch, uVar11 == 2)) {
          local_88.Yaw = dVar2;
        }
        local_88.Roll = dVar4;
        local_88.Pitch = dVar3;
        uVar11 = uVar9;
      } while (uVar9 < 3);
      pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_88,local_68);
      dVar2 = pTVar8->Y;
      (param_2->RotationOffset).X = pTVar8->X;
      (param_2->RotationOffset).Y = dVar2;
      dVar2 = pTVar8->W;
      (param_2->RotationOffset).Z = pTVar8->Z;
      (param_2->RotationOffset).W = dVar2;
      return true;
    }
  }
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return (bool)uVar6;
}

// IsEmpty @ 14d6e1990

bool __thiscall FNodalOffsetFocusPoint::IsEmpty(FNodalOffsetFocusPoint *this)

{
  return this->LocationOffset[0].Keys.ArrayNum == 0;
}

// RemovePoint @ 14d6e87b0

void __thiscall FNodalOffsetFocusPoint::RemovePoint(FNodalOffsetFocusPoint *this,float param_1)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar2;
  uint uVar3;
  float fVar4;
  FKeyHandle local_res18;
  
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = param_1;
  do {
    FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + (int)uVar3),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_res18.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
      FRichCurve::DeleteKey(this->LocationOffset + (int)uVar3,local_res18);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  do {
    FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar2),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_res18.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
      FRichCurve::DeleteKey(this->RotationOffset + (int)uVar2,local_res18);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

// SetPoint @ 14d6ee330

bool __thiscall
FNodalOffsetFocusPoint::SetPoint
          (FNodalOffsetFocusPoint *this,float param_1,FNodalPointOffset *param_2,float param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar6;
  FNodalPointOffset *pFVar7;
  double dVar8;
  float fVar9;
  FKeyHandle local_68;
  FKeyHandle local_64;
  TRotator<double> local_58 [2];
  
  uVar6 = 0;
  pFVar7 = param_2;
  fVar9 = param_1;
  while( true ) {
    FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + (int)uVar6),fVar9,param_1);
    FVar5 = FKeyHandle::Invalid();
    if (local_68.Index == *(uint *)CONCAT44(extraout_var,FVar5.Index)) {
      return false;
    }
    if ((2 < uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L""), bVar3)) break;
    FRichCurve::SetKeyValue
              (this->LocationOffset + (int)uVar6,local_68,
               (float)(pFVar7->LocationOffset).field0_0x0._s_0.X,true);
    uVar6 = uVar6 + 1;
    pFVar7 = (FNodalPointOffset *)((longlong)&(pFVar7->LocationOffset).field0_0x0 + 8);
    if (2 < uVar6) {
      UE::Math::TQuat<double>::Rotator(&param_2->RotationOffset,local_58);
      uVar6 = 0;
      do {
        FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar6),fVar9,param_1);
        FVar5 = FKeyHandle::Invalid();
        if (local_64.Index == *(uint *)CONCAT44(extraout_var_00,FVar5.Index)) {
          return false;
        }
        uVar1 = uVar6 + 1;
        if ((uVar1 == 0) ||
           (((dVar8 = local_58[0].Roll, uVar6 != 0 && (dVar8 = local_58[0].Pitch, uVar6 != 1)) &&
            (dVar8 = local_58[0].Yaw, uVar6 != 2)))) {
          dVar8 = 0.0;
        }
        FRichCurve::SetKeyValue(this->RotationOffset + (int)uVar6,local_64,(float)dVar8,true);
        uVar6 = uVar1;
      } while (uVar1 < 3);
      return true;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

