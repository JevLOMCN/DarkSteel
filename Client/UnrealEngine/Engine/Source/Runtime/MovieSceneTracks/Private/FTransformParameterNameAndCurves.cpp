// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// FTransformParameterNameAndCurves @ 1466170f0

FTransformParameterNameAndCurves * __thiscall
FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
          (FTransformParameterNameAndCurves *this,FTransformParameterNameAndCurves *param_1)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  FMovieSceneChannel *pFVar9;
  longlong local_res18;
  
  pFVar9 = (FMovieSceneChannel *)this->Translation;
  this->_padding_ = param_1->_padding_;
  local_res18 = 3;
  lVar5 = (longlong)this - (longlong)param_1;
  piVar6 = &param_1->Translation[0].Values.ArrayNum;
  lVar7 = 3;
  do {
    lVar7 = lVar7 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)(lVar5 + -0x20 + (longlong)piVar6) = (char)piVar6[-8];
    *(undefined1 *)(lVar5 + -0x1f + (longlong)piVar6) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)(lVar5 + -0x10 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)(lVar5 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)(lVar5 + 8 + (longlong)piVar6) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x18 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)piVar6) = 0;
    *(char *)(lVar5 + 0xc + (longlong)piVar6) = (char)iVar1;
    *(undefined4 *)(lVar5 + 0x38 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x3c + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x40 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x44 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x48 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x50 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x68 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x70 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x74 + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x78 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x7c + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x88 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x90 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x98 + (longlong)piVar6) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (lVar7 != 0);
  pFVar9 = (FMovieSceneChannel *)this->Rotation;
  piVar6 = &param_1->Rotation[0].Values.ArrayNum;
  lVar7 = 3;
  do {
    lVar7 = lVar7 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)((longlong)piVar6 + lVar5 + -0x20) = (char)piVar6[-8];
    *(undefined1 *)((longlong)piVar6 + lVar5 + -0x1f) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)((longlong)piVar6 + lVar5 + -0x10) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)((longlong)piVar6 + lVar5) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)((longlong)piVar6 + lVar5 + 8) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x18) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x30) = 0;
    *(char *)((longlong)piVar6 + lVar5 + 0xc) = (char)iVar1;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x38) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x3c) = 0x80;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x44) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x48) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x50) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x68) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x70) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x74) = 0x80;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x78) = 0xffffffff;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x7c) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x88) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x90) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x98) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (lVar7 != 0);
  pFVar9 = (FMovieSceneChannel *)this->Scale;
  piVar6 = &param_1->Scale[0].Values.ArrayNum;
  do {
    local_res18 = local_res18 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)(lVar5 + -0x20 + (longlong)piVar6) = (char)piVar6[-8];
    *(undefined1 *)(lVar5 + -0x1f + (longlong)piVar6) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)(lVar5 + -0x10 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)(lVar5 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)(lVar5 + 8 + (longlong)piVar6) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x18 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)piVar6) = 0;
    *(char *)(lVar5 + 0xc + (longlong)piVar6) = (char)iVar1;
    *(undefined4 *)(lVar5 + 0x38 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x3c + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x40 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x44 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x48 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x50 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x68 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x70 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x74 + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x78 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x7c + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x88 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x90 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x98 + (longlong)piVar6) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (local_res18 != 0);
  return this;
}

// StaticStruct @ 146724c20

UScriptStruct * __cdecl FTransformParameterNameAndCurves::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformParameterNameAndCurves.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FTransformParameterNameAndCurves.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves,
                         (UObject *)pUVar1,L"TransformParameterNameAndCurves");
  }
  return Z_Registration_Info_UScriptStruct_FTransformParameterNameAndCurves.OuterSingleton;
}

// FTransformParameterNameAndCurves @ 146760070

FTransformParameterNameAndCurves * __thiscall
FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
          (FTransformParameterNameAndCurves *this,FTransformParameterNameAndCurves *param_1)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  FMovieSceneChannel *pFVar9;
  longlong local_res18;
  
  pFVar9 = (FMovieSceneChannel *)this->Translation;
  this->_padding_ = param_1->_padding_;
  local_res18 = 3;
  lVar5 = (longlong)this - (longlong)param_1;
  piVar6 = &param_1->Translation[0].Values.ArrayNum;
  lVar7 = 3;
  do {
    lVar7 = lVar7 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)(lVar5 + -0x20 + (longlong)piVar6) = (char)piVar6[-8];
    *(undefined1 *)(lVar5 + -0x1f + (longlong)piVar6) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)(lVar5 + -0x10 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)(lVar5 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)(lVar5 + 8 + (longlong)piVar6) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x18 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)piVar6) = 0;
    *(char *)(lVar5 + 0xc + (longlong)piVar6) = (char)iVar1;
    *(undefined4 *)(lVar5 + 0x38 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x3c + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x40 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x44 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x48 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x50 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x68 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x70 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x74 + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x78 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x7c + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x88 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x90 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x98 + (longlong)piVar6) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (lVar7 != 0);
  pFVar9 = (FMovieSceneChannel *)this->Rotation;
  piVar6 = &param_1->Rotation[0].Values.ArrayNum;
  lVar7 = 3;
  do {
    lVar7 = lVar7 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)((longlong)piVar6 + lVar5 + -0x20) = (char)piVar6[-8];
    *(undefined1 *)((longlong)piVar6 + lVar5 + -0x1f) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)((longlong)piVar6 + lVar5 + -0x10) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)((longlong)piVar6 + lVar5) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)((longlong)piVar6 + lVar5 + 8) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x18) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x30) = 0;
    *(char *)((longlong)piVar6 + lVar5 + 0xc) = (char)iVar1;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x38) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x3c) = 0x80;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x44) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x48) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x50) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x68) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x70) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x74) = 0x80;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x78) = 0xffffffff;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x7c) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x88) = 0;
    *(undefined4 *)((longlong)piVar6 + lVar5 + 0x90) = 0;
    *(undefined8 *)((longlong)piVar6 + lVar5 + 0x98) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (lVar7 != 0);
  pFVar9 = (FMovieSceneChannel *)this->Scale;
  piVar6 = &param_1->Scale[0].Values.ArrayNum;
  do {
    local_res18 = local_res18 + -1;
    FMovieSceneChannel::FMovieSceneChannel(pFVar9,(FMovieSceneChannel *)(piVar6 + -0x22));
    pFVar9->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar8 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar6);
    *(char *)(lVar5 + -0x20 + (longlong)piVar6) = (char)piVar6[-8];
    *(undefined1 *)(lVar5 + -0x1f + (longlong)piVar6) = *(undefined1 *)((longlong)piVar6 + -0x1f);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar4 = (int *)(lVar5 + -0xc + (longlong)piVar6);
    iVar1 = piVar6[-4];
    pvVar2 = *(void **)(piVar6 + -6);
    *(int *)(lVar5 + -0x10 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pvVar2,(longlong)iVar1 << 2);
    }
    pFVar8 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar6);
    piVar4 = (int *)(lVar5 + 4 + (longlong)piVar6);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar6;
    pFVar3 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
    *(int *)(lVar5 + (longlong)piVar6) = iVar1;
    if (iVar1 == 0) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar8,iVar1,piVar4);
      memcpy(pFVar8->Data,pFVar3,(longlong)iVar1 * 0x1c);
    }
    pFVar9 = (FMovieSceneChannel *)&pFVar9[2].KeyMovedEvent.field_0x10;
    *(int *)(lVar5 + 8 + (longlong)piVar6) = piVar6[2];
    iVar1 = piVar6[3];
    *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x18 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)piVar6) = 0;
    *(char *)(lVar5 + 0xc + (longlong)piVar6) = (char)iVar1;
    *(undefined4 *)(lVar5 + 0x38 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x3c + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x40 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x44 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x48 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x50 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x68 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x70 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x74 + (longlong)piVar6) = 0x80;
    *(undefined4 *)(lVar5 + 0x78 + (longlong)piVar6) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x7c + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x88 + (longlong)piVar6) = 0;
    *(undefined4 *)(lVar5 + 0x90 + (longlong)piVar6) = 0;
    *(undefined8 *)(lVar5 + 0x98 + (longlong)piVar6) = *(undefined8 *)(piVar6 + 0x26);
    piVar6 = piVar6 + 0x4a;
  } while (local_res18 != 0);
  return this;
}

// FTransformParameterNameAndCurves @ 1467605a0

FTransformParameterNameAndCurves * __thiscall
FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
          (FTransformParameterNameAndCurves *this)

{
  this->_padding_ = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Rotation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Rotation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Rotation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale + 2);
  return this;
}

// ~FTransformParameterNameAndCurves @ 146769ad0

void __thiscall
FTransformParameterNameAndCurves::~FTransformParameterNameAndCurves
          (FTransformParameterNameAndCurves *this)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Rotation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Rotation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Rotation);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation);
  return;
}

// operator= @ 14676b230

FTransformParameterNameAndCurves * __thiscall
FTransformParameterNameAndCurves::operator=
          (FTransformParameterNameAndCurves *this,FTransformParameterNameAndCurves *param_1)

{
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  this->_padding_ = param_1->_padding_;
  plVar7 = &this->Translation[0]._padding_;
  plVar8 = &param_1->Translation[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[0]._padding_;
  plVar8 = &param_1->Translation[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[0]._padding_;
  plVar8 = &param_1->Translation[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Translation[0].PreInfinityExtrap.Value = param_1->Translation[0].PreInfinityExtrap.Value;
  this->Translation[0].PostInfinityExtrap.Value = param_1->Translation[0].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Translation[0].Times,&param_1->Translation[0].Times);
  pTVar1 = &param_1->Translation[0].Values;
  pTVar2 = &this->Translation[0].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Translation[0].Values.ArrayNum;
    piVar3 = &this->Translation[0].Values.ArrayMax;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    this->Translation[0].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Translation[0].DefaultValue = param_1->Translation[0].DefaultValue;
  this->Translation[0].bHasDefaultValue = param_1->Translation[0].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Translation[0].KeyHandles);
  plVar7 = &this->Translation[1]._padding_;
  plVar8 = &param_1->Translation[1]._padding_;
  this->Translation[0].TickResolution = param_1->Translation[0].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[1]._padding_;
  plVar8 = &param_1->Translation[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[1]._padding_;
  plVar8 = &param_1->Translation[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Translation[1].PreInfinityExtrap.Value = param_1->Translation[1].PreInfinityExtrap.Value;
  this->Translation[1].PostInfinityExtrap.Value = param_1->Translation[1].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Translation[1].Times,&param_1->Translation[1].Times);
  pTVar1 = &param_1->Translation[1].Values;
  pTVar2 = &this->Translation[1].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Translation[1].Values.ArrayNum;
    piVar3 = &this->Translation[1].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Translation[1].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Translation[1].DefaultValue = param_1->Translation[1].DefaultValue;
  this->Translation[1].bHasDefaultValue = param_1->Translation[1].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Translation[1].KeyHandles);
  plVar7 = &this->Translation[2]._padding_;
  plVar8 = &param_1->Translation[2]._padding_;
  this->Translation[1].TickResolution = param_1->Translation[1].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[2]._padding_;
  plVar8 = &param_1->Translation[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Translation[2]._padding_;
  plVar8 = &param_1->Translation[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Translation[2].PreInfinityExtrap.Value = param_1->Translation[2].PreInfinityExtrap.Value;
  this->Translation[2].PostInfinityExtrap.Value = param_1->Translation[2].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Translation[2].Times,&param_1->Translation[2].Times);
  pTVar1 = &param_1->Translation[2].Values;
  pTVar2 = &this->Translation[2].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Translation[2].Values.ArrayNum;
    piVar3 = &this->Translation[2].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Translation[2].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Translation[2].DefaultValue = param_1->Translation[2].DefaultValue;
  this->Translation[2].bHasDefaultValue = param_1->Translation[2].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Translation[2].KeyHandles);
  plVar7 = &this->Rotation[0]._padding_;
  plVar8 = &param_1->Rotation[0]._padding_;
  this->Translation[2].TickResolution = param_1->Translation[2].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[0]._padding_;
  plVar8 = &param_1->Rotation[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[0]._padding_;
  plVar8 = &param_1->Rotation[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Rotation[0].PreInfinityExtrap.Value = param_1->Rotation[0].PreInfinityExtrap.Value;
  this->Rotation[0].PostInfinityExtrap.Value = param_1->Rotation[0].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Rotation[0].Times,&param_1->Rotation[0].Times);
  pTVar1 = &param_1->Rotation[0].Values;
  pTVar2 = &this->Rotation[0].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Rotation[0].Values.ArrayNum;
    piVar3 = &this->Rotation[0].Values.ArrayMax;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    this->Rotation[0].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Rotation[0].DefaultValue = param_1->Rotation[0].DefaultValue;
  this->Rotation[0].bHasDefaultValue = param_1->Rotation[0].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Rotation[0].KeyHandles);
  plVar7 = &this->Rotation[1]._padding_;
  plVar8 = &param_1->Rotation[1]._padding_;
  this->Rotation[0].TickResolution = param_1->Rotation[0].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[1]._padding_;
  plVar8 = &param_1->Rotation[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[1]._padding_;
  plVar8 = &param_1->Rotation[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Rotation[1].PreInfinityExtrap.Value = param_1->Rotation[1].PreInfinityExtrap.Value;
  this->Rotation[1].PostInfinityExtrap.Value = param_1->Rotation[1].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Rotation[1].Times,&param_1->Rotation[1].Times);
  pTVar1 = &param_1->Rotation[1].Values;
  pTVar2 = &this->Rotation[1].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Rotation[1].Values.ArrayNum;
    piVar3 = &this->Rotation[1].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Rotation[1].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Rotation[1].DefaultValue = param_1->Rotation[1].DefaultValue;
  this->Rotation[1].bHasDefaultValue = param_1->Rotation[1].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Rotation[1].KeyHandles);
  plVar7 = &this->Rotation[2]._padding_;
  plVar8 = &param_1->Rotation[2]._padding_;
  this->Rotation[1].TickResolution = param_1->Rotation[1].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[2]._padding_;
  plVar8 = &param_1->Rotation[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Rotation[2]._padding_;
  plVar8 = &param_1->Rotation[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Rotation[2].PreInfinityExtrap.Value = param_1->Rotation[2].PreInfinityExtrap.Value;
  this->Rotation[2].PostInfinityExtrap.Value = param_1->Rotation[2].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Rotation[2].Times,&param_1->Rotation[2].Times);
  pTVar1 = &param_1->Rotation[2].Values;
  pTVar2 = &this->Rotation[2].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Rotation[2].Values.ArrayNum;
    piVar3 = &this->Rotation[2].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Rotation[2].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Rotation[2].DefaultValue = param_1->Rotation[2].DefaultValue;
  this->Rotation[2].bHasDefaultValue = param_1->Rotation[2].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Rotation[2].KeyHandles);
  plVar7 = &this->Scale[0]._padding_;
  plVar8 = &param_1->Scale[0]._padding_;
  this->Rotation[2].TickResolution = param_1->Rotation[2].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[0]._padding_;
  plVar8 = &param_1->Scale[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[0]._padding_;
  plVar8 = &param_1->Scale[0]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Scale[0].PreInfinityExtrap.Value = param_1->Scale[0].PreInfinityExtrap.Value;
  this->Scale[0].PostInfinityExtrap.Value = param_1->Scale[0].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Scale[0].Times,&param_1->Scale[0].Times);
  pTVar1 = &param_1->Scale[0].Values;
  pTVar2 = &this->Scale[0].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Scale[0].Values.ArrayNum;
    piVar3 = &this->Scale[0].Values.ArrayMax;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    this->Scale[0].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Scale[0].DefaultValue = param_1->Scale[0].DefaultValue;
  this->Scale[0].bHasDefaultValue = param_1->Scale[0].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Scale[0].KeyHandles);
  plVar7 = &this->Scale[1]._padding_;
  plVar8 = &param_1->Scale[1]._padding_;
  this->Scale[0].TickResolution = param_1->Scale[0].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[1]._padding_;
  plVar8 = &param_1->Scale[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[1]._padding_;
  plVar8 = &param_1->Scale[1]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Scale[1].PreInfinityExtrap.Value = param_1->Scale[1].PreInfinityExtrap.Value;
  this->Scale[1].PostInfinityExtrap.Value = param_1->Scale[1].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Scale[1].Times,&param_1->Scale[1].Times);
  pTVar1 = &param_1->Scale[1].Values;
  pTVar2 = &this->Scale[1].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Scale[1].Values.ArrayNum;
    piVar3 = &this->Scale[1].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Scale[1].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Scale[1].DefaultValue = param_1->Scale[1].DefaultValue;
  this->Scale[1].bHasDefaultValue = param_1->Scale[1].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Scale[1].KeyHandles);
  plVar7 = &this->Scale[2]._padding_;
  plVar8 = &param_1->Scale[2]._padding_;
  this->Scale[1].TickResolution = param_1->Scale[1].TickResolution;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[2]._padding_;
  plVar8 = &param_1->Scale[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  plVar7 = &this->Scale[2]._padding_;
  plVar8 = &param_1->Scale[2]._padding_;
  if (plVar8 != plVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar7,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar8);
  }
  this->Scale[2].PreInfinityExtrap.Value = param_1->Scale[2].PreInfinityExtrap.Value;
  this->Scale[2].PostInfinityExtrap.Value = param_1->Scale[2].PostInfinityExtrap.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
            (&this->Scale[2].Times,&param_1->Scale[2].Times);
  pTVar1 = &param_1->Scale[2].Values;
  pTVar2 = &this->Scale[2].Values;
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->Scale[2].Values.ArrayNum;
    piVar3 = &this->Scale[2].Values.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->Scale[2].Values.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->Scale[2].DefaultValue = param_1->Scale[2].DefaultValue;
  this->Scale[2].bHasDefaultValue = param_1->Scale[2].bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->Scale[2].KeyHandles);
  this->Scale[2].TickResolution = param_1->Scale[2].TickResolution;
  return this;
}

