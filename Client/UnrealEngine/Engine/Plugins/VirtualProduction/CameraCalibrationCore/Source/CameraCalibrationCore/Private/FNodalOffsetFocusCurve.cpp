// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 13

// StaticStruct @ 14d679810

UScriptStruct * __cdecl FNodalOffsetFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodalOffsetFocusCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FNodalOffsetFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetFocusCurve,(UObject *)pUVar1,
                         L"NodalOffsetFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FNodalOffsetFocusCurve.OuterSingleton;
}

// FNodalOffsetFocusCurve @ 14d6a7d30

FNodalOffsetFocusCurve * __thiscall
FNodalOffsetFocusCurve::FNodalOffsetFocusCurve
          (FNodalOffsetFocusCurve *this,FNodalOffsetFocusCurve *param_1)

{
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
  this->Zoom = param_1->Zoom;
  return this;
}

// FNodalOffsetFocusCurve @ 14d6a8190

FNodalOffsetFocusCurve * __thiscall
FNodalOffsetFocusCurve::FNodalOffsetFocusCurve
          (FNodalOffsetFocusCurve *this,FNodalOffsetFocusCurve *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->LocationOffset[0].Keys;
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
  this->Zoom = param_1->Zoom;
  return this;
}

// FNodalOffsetFocusCurve @ 14d6a8710

FNodalOffsetFocusCurve * __thiscall
FNodalOffsetFocusCurve::FNodalOffsetFocusCurve(FNodalOffsetFocusCurve *this)

{
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
  this->Zoom = 0.0;
  return this;
}

// ~FNodalOffsetFocusCurve @ 14d6ac560

void __thiscall FNodalOffsetFocusCurve::~FNodalOffsetFocusCurve(FNodalOffsetFocusCurve *this)

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

// AddPoint @ 14d6b5940

void __thiscall
FNodalOffsetFocusCurve::AddPoint
          (FNodalOffsetFocusCurve *this,float param_1,FNodalPointOffset *param_2,float param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FKeyHandle FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FNodalPointOffset *pFVar5;
  uint uVar6;
  FRichCurve *this_00;
  wchar_t *in_R9;
  FKeyHandle FVar7;
  float fVar8;
  float in_XMM2_Da;
  undefined4 uVar9;
  undefined4 uVar10;
  FKeyHandle local_res18;
  FKeyHandle local_78;
  FKeyHandle local_74;
  undefined1 local_70 [16];
  TRotator<double> local_60 [3];
  
  uVar6 = 0;
  pFVar5 = param_2;
  fVar8 = param_1;
  do {
    FKeyHandle::FKeyHandle(&local_74);
    if (2 < uVar6) {
      in_R9 = L"";
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar7.Index = (uint)(float)(pFVar5->LocationOffset).field0_0x0._s_0.X;
    FBaseFocusCurve::AddPointToCurve
              ((FBaseFocusCurve *)this,(FRichCurve *)local_70,in_XMM2_Da,param_1,(float)FVar7.Index,
               (FKeyHandle)param_3);
    uVar6 = uVar6 + 1;
    pFVar5 = (FNodalPointOffset *)((longlong)&(pFVar5->LocationOffset).field0_0x0 + 8);
  } while (uVar6 < 3);
  UE::Math::TQuat<double>::Rotator(&param_2->RotationOffset,local_60);
  uVar6 = 0;
  do {
    FKeyHandle::FKeyHandle((FKeyHandle *)(local_70 + 4));
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) {
LAB_14d6b5a5c:
      uVar9 = 0;
      uVar10 = 0;
    }
    else if (uVar6 == 0) {
      uVar9 = SUB84(local_60[0].Roll,0);
      uVar10 = (undefined4)((ulonglong)local_60[0].Roll >> 0x20);
    }
    else if (uVar1 == 2) {
      uVar9 = SUB84(local_60[0].Pitch,0);
      uVar10 = (undefined4)((ulonglong)local_60[0].Pitch >> 0x20);
    }
    else {
      if (uVar1 != 3) goto LAB_14d6b5a5c;
      uVar9 = SUB84(local_60[0].Yaw,0);
      uVar10 = (undefined4)((ulonglong)local_60[0].Yaw >> 0x20);
    }
    this_00 = this->RotationOffset + (int)uVar6;
    FRealCurve::FindKey((FRealCurve *)this_00,fVar8,param_1);
    FVar4 = FKeyHandle::Invalid();
    if (local_res18.Index != *(uint *)CONCAT44(extraout_var,FVar4.Index)) {
      in_R9 = (wchar_t *)0x1;
      FRichCurve::SetKeyValue(this_00,local_res18,(float)(double)CONCAT44(uVar10,uVar9),true);
    }
    FVar4 = FKeyHandle::Invalid();
    if (local_res18.Index == *(uint *)CONCAT44(extraout_var_00,FVar4.Index)) {
      FVar7.Index = FVar7.Index & 0xffffff00;
      FRichCurve::AddKey(this_00,fVar8,param_1,SUB81(in_R9,0),FVar7);
      in_R9 = (wchar_t *)0x1;
      FRichCurve::SetKeyTangentMode(this_00,local_78,RCTM_None,true);
      FRichCurve::SetKeyInterpMode(this_00,local_78,RCIM_Linear);
    }
    uVar6 = uVar1;
    if (2 < uVar1) {
      return;
    }
  } while( true );
}

// ChangeFocus @ 14d6b9480

void __thiscall
FNodalOffsetFocusCurve::ChangeFocus
          (FNodalOffsetFocusCurve *this,float param_1,float param_2,float param_3)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar2;
  uint uVar3;
  float fVar4;
  FKeyHandle local_48;
  
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = param_1;
  do {
    FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + (int)uVar3),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_48.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
      FRichCurve::SetKeyTime(this->LocationOffset + (int)uVar3,local_48,param_2);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  do {
    FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar2),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_48.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
      FRichCurve::SetKeyTime(this->RotationOffset + (int)uVar2,local_48,param_2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

// GetCurveForParameter @ 14d6d32f0

FRichCurve * __thiscall
FNodalOffsetFocusCurve::GetCurveForParameter(FNodalOffsetFocusCurve *this,int param_1)

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

// GetCurveForParameter @ 14d6d3340

FRichCurve * __thiscall
FNodalOffsetFocusCurve::GetCurveForParameter(FNodalOffsetFocusCurve *this,int param_1)

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

// IsEmpty @ 14d6e1980

bool __thiscall FNodalOffsetFocusCurve::IsEmpty(FNodalOffsetFocusCurve *this)

{
  return this->LocationOffset[0].Keys.ArrayNum == 0;
}

// MergeFocus @ 14d6e3b60

void __thiscall
FNodalOffsetFocusCurve::MergeFocus
          (FNodalOffsetFocusCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  FRichCurve *pFVar1;
  undefined8 uVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  FKeyHandle FVar9;
  uint uVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FRichCurveKey *pFVar11;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  FKeyHandle local_88;
  FKeyHandle local_84;
  
  fVar15 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar9 = FKeyHandle::Invalid();
  uVar14 = 0;
  if (local_88.Index != *(uint *)CONCAT44(extraout_var,FVar9.Index)) {
    FRealCurve::FindKey((FRealCurve *)this,fVar15,param_2);
    FVar9 = FKeyHandle::Invalid();
    if ((local_84.Index == *(uint *)CONCAT44(extraout_var_00,FVar9.Index)) || (!param_3)) {
      FVar9 = FKeyHandle::Invalid();
      if (local_84.Index == *(uint *)CONCAT44(extraout_var_01,FVar9.Index)) {
        FRichCurve::SetKeyTime(this->LocationOffset,local_88,param_2);
      }
    }
    else {
      pFVar11 = FRichCurve::GetKey(this->LocationOffset,local_88);
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->Value;
      fVar3 = pFVar11->LeaveTangentWeight;
      uVar2 = *(undefined8 *)&pFVar11->ArriveTangentWeight;
      uVar10 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)this,local_84);
      uVar12 = uVar14;
      if ((int)uVar10 < this->LocationOffset[0].Keys.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = this->LocationOffset[0].Keys.AllocatorInstance.Data;
      lVar13 = (longlong)(int)uVar10 * 0x1c;
      *(undefined8 *)(pFVar4 + lVar13) = uVar6;
      *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar7;
      *(undefined8 *)(pFVar4 + lVar13 + 0x10) = uVar2;
      *(float *)(pFVar4 + lVar13 + 0x18) = fVar3;
      FRichCurve::DeleteKey(this->LocationOffset,local_88);
    }
  }
  pFVar1 = this->LocationOffset + 1;
  FRealCurve::FindKey((FRealCurve *)pFVar1,fVar15,param_1);
  FVar9 = FKeyHandle::Invalid();
  if (local_88.Index != *(uint *)CONCAT44(extraout_var_02,FVar9.Index)) {
    FRealCurve::FindKey((FRealCurve *)pFVar1,fVar15,param_2);
    FVar9 = FKeyHandle::Invalid();
    if ((local_84.Index == *(uint *)CONCAT44(extraout_var_03,FVar9.Index)) || (!param_3)) {
      FVar9 = FKeyHandle::Invalid();
      if (local_84.Index == *(uint *)CONCAT44(extraout_var_04,FVar9.Index)) {
        FRichCurve::SetKeyTime(pFVar1,local_88,param_2);
      }
    }
    else {
      pFVar11 = FRichCurve::GetKey(pFVar1,local_88);
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->Value;
      fVar3 = pFVar11->LeaveTangentWeight;
      uVar2 = *(undefined8 *)&pFVar11->ArriveTangentWeight;
      uVar10 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)pFVar1,local_84);
      uVar12 = 0;
      if ((int)uVar10 < this->LocationOffset[1].Keys.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = this->LocationOffset[1].Keys.AllocatorInstance.Data;
      lVar13 = (longlong)(int)uVar10 * 0x1c;
      *(undefined8 *)(pFVar4 + lVar13) = uVar6;
      *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar7;
      *(undefined8 *)(pFVar4 + lVar13 + 0x10) = uVar2;
      *(float *)(pFVar4 + lVar13 + 0x18) = fVar3;
      FRichCurve::DeleteKey(pFVar1,local_88);
    }
  }
  pFVar1 = this->LocationOffset + 2;
  FRealCurve::FindKey((FRealCurve *)pFVar1,fVar15,param_1);
  FVar9 = FKeyHandle::Invalid();
  if (local_88.Index != *(uint *)CONCAT44(extraout_var_05,FVar9.Index)) {
    FRealCurve::FindKey((FRealCurve *)pFVar1,fVar15,param_2);
    FVar9 = FKeyHandle::Invalid();
    if ((local_84.Index == *(uint *)CONCAT44(extraout_var_06,FVar9.Index)) || (!param_3)) {
      FVar9 = FKeyHandle::Invalid();
      if (local_84.Index == *(uint *)CONCAT44(extraout_var_07,FVar9.Index)) {
        FRichCurve::SetKeyTime(pFVar1,local_88,param_2);
      }
    }
    else {
      pFVar11 = FRichCurve::GetKey(pFVar1,local_88);
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->Value;
      fVar15 = pFVar11->LeaveTangentWeight;
      uVar2 = *(undefined8 *)&pFVar11->ArriveTangentWeight;
      uVar10 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)pFVar1,local_84);
      uVar12 = 0;
      if ((int)uVar10 < this->LocationOffset[2].Keys.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = this->LocationOffset[2].Keys.AllocatorInstance.Data;
      lVar13 = (longlong)(int)uVar10 * 0x1c;
      *(undefined8 *)(pFVar4 + lVar13) = uVar6;
      *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar7;
      *(undefined8 *)(pFVar4 + lVar13 + 0x10) = uVar2;
      *(float *)(pFVar4 + lVar13 + 0x18) = fVar15;
      FRichCurve::DeleteKey(pFVar1,local_88);
    }
  }
  do {
    FBaseFocusCurve::MergeFocusInCurve
              ((FBaseFocusCurve *)this,this->RotationOffset + (int)uVar14,param_1,param_2,param_3,
               param_4);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 3);
  return;
}

// RemovePoint @ 14d6e86d0

void __thiscall
FNodalOffsetFocusCurve::RemovePoint(FNodalOffsetFocusCurve *this,float param_1,float param_2)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar2;
  uint uVar3;
  float fVar4;
  FKeyHandle local_res20;
  
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = param_1;
  do {
    FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + (int)uVar3),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_res20.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
      FRichCurve::DeleteKey(this->LocationOffset + (int)uVar3,local_res20);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  do {
    FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar2),fVar4,param_1);
    FVar1 = FKeyHandle::Invalid();
    if (local_res20.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
      FRichCurve::DeleteKey(this->RotationOffset + (int)uVar2,local_res20);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

// SetPoint @ 14d6ee180

void __thiscall
FNodalOffsetFocusCurve::SetPoint
          (FNodalOffsetFocusCurve *this,float param_1,FNodalPointOffset *param_2,float param_3)

{
  double dVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FKeyHandle local_res18;
  TRotator<double> local_50 [3];
  
  dVar1 = (param_2->LocationOffset).field0_0x0._s_0.X;
  fVar5 = param_1;
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
    FRichCurve::SetKeyValue(this->LocationOffset,local_res18,(float)dVar1,true);
  }
  dVar1 = (param_2->LocationOffset).field0_0x0._s_0.Y;
  FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + 1),fVar5,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index != *(uint *)CONCAT44(extraout_var_00,FVar2.Index)) {
    FRichCurve::SetKeyValue(this->LocationOffset + 1,local_res18,(float)dVar1,true);
  }
  dVar1 = (param_2->LocationOffset).field0_0x0._s_0.Z;
  FRealCurve::FindKey((FRealCurve *)(this->LocationOffset + 2),fVar5,param_1);
  FVar2 = FKeyHandle::Invalid();
  if (local_res18.Index != *(uint *)CONCAT44(extraout_var_01,FVar2.Index)) {
    FRichCurve::SetKeyValue(this->LocationOffset + 2,local_res18,(float)dVar1,true);
  }
  UE::Math::TQuat<double>::Rotator(&param_2->RotationOffset,local_50);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    if (uVar4 == 0) {
LAB_14d6ee2b0:
      uVar6 = 0;
      uVar7 = 0;
    }
    else if (uVar3 == 0) {
      uVar6 = SUB84(local_50[0].Roll,0);
      uVar7 = (undefined4)((ulonglong)local_50[0].Roll >> 0x20);
    }
    else if (uVar4 == 2) {
      uVar6 = SUB84(local_50[0].Pitch,0);
      uVar7 = (undefined4)((ulonglong)local_50[0].Pitch >> 0x20);
    }
    else {
      if (uVar4 != 3) goto LAB_14d6ee2b0;
      uVar6 = SUB84(local_50[0].Yaw,0);
      uVar7 = (undefined4)((ulonglong)local_50[0].Yaw >> 0x20);
    }
    FRealCurve::FindKey((FRealCurve *)(this->RotationOffset + (int)uVar3),fVar5,param_1);
    FVar2 = FKeyHandle::Invalid();
    if (local_res18.Index != *(uint *)CONCAT44(extraout_var_02,FVar2.Index)) {
      FRichCurve::SetKeyValue
                (this->RotationOffset + (int)uVar3,local_res18,(float)(double)CONCAT44(uVar7,uVar6),
                 true);
    }
    uVar3 = uVar4;
    if (2 < uVar4) {
      return;
    }
  } while( true );
}

