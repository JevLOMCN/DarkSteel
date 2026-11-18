// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 14658f520

UScriptStruct * __cdecl FMovieSceneParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParameterSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParameterSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParameterSectionTemplate.OuterSingleton;
}

// FMovieSceneParameterSectionTemplate @ 146610ca0

FMovieSceneParameterSectionTemplate * __thiscall
FMovieSceneParameterSectionTemplate::FMovieSceneParameterSectionTemplate
          (FMovieSceneParameterSectionTemplate *this,UMovieSceneParameterSection *param_1)

{
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScalarParameterNameAndCurve *pFVar9;
  FBoolParameterNameAndCurve *pFVar10;
  FVector2DParameterNameAndCurves *pFVar11;
  FVectorParameterNameAndCurves *pFVar12;
  FColorParameterNameAndCurves *pFVar13;
  FTransformParameterNameAndCurves *pFVar14;
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar20;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  pTVar1 = &this->Scalars;
  this->_padding_ = (longlong)&___7FMovieSceneParameterSectionTemplate__6B_;
  pTVar15 = UMovieSceneParameterSection::GetScalarParameterNamesAndCurves(param_1);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar15->ArrayNum;
  pFVar9 = (FScalarParameterNameAndCurve *)(pTVar15->AllocatorInstance).Data;
  piVar2 = &(this->Scalars).ArrayMax;
  (this->Scalars).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FScalarParameterNameAndCurve,FScalarParameterNameAndCurve,int>
              ((pTVar1->AllocatorInstance).Data,pFVar9,iVar8);
  }
  pTVar3 = &this->Bools;
  pTVar16 = UMovieSceneParameterSection::GetBoolParameterNamesAndCurves(param_1);
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar16->ArrayNum;
  pFVar10 = (FBoolParameterNameAndCurve *)(pTVar16->AllocatorInstance).Data;
  piVar2 = &(this->Bools).ArrayMax;
  (this->Bools).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FBoolParameterNameAndCurve,FBoolParameterNameAndCurve,int>
              ((pTVar3->AllocatorInstance).Data,pFVar10,iVar8);
  }
  pTVar4 = &this->Vector2Ds;
  pTVar17 = UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves(param_1);
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar17->ArrayNum;
  pFVar11 = (FVector2DParameterNameAndCurves *)(pTVar17->AllocatorInstance).Data;
  piVar2 = &(this->Vector2Ds).ArrayMax;
  (this->Vector2Ds).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (600,8,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FVector2DParameterNameAndCurves,FVector2DParameterNameAndCurves,int>
              ((pTVar4->AllocatorInstance).Data,pFVar11,iVar8);
  }
  pTVar5 = &this->Vectors;
  pTVar18 = UMovieSceneParameterSection::GetVectorParameterNamesAndCurves(param_1);
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar18->ArrayNum;
  pFVar12 = (FVectorParameterNameAndCurves *)(pTVar18->AllocatorInstance).Data;
  piVar2 = &(this->Vectors).ArrayMax;
  (this->Vectors).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x380,8,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FVectorParameterNameAndCurves,FVectorParameterNameAndCurves,int>
              ((pTVar5->AllocatorInstance).Data,pFVar12,iVar8);
  }
  pTVar6 = &this->Colors;
  pTVar19 = UMovieSceneParameterSection::GetColorParameterNamesAndCurves(param_1);
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar19->ArrayNum;
  pFVar13 = (FColorParameterNameAndCurves *)(pTVar19->AllocatorInstance).Data;
  piVar2 = &(this->Colors).ArrayMax;
  (this->Colors).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4a8,8,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FColorParameterNameAndCurves,FColorParameterNameAndCurves,int>
              ((pTVar6->AllocatorInstance).Data,pFVar13,iVar8);
  }
  pTVar7 = &this->Transforms;
  pTVar20 = UMovieSceneParameterSection::GetTransformParameterNamesAndCurves(param_1);
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = pTVar20->ArrayNum;
  pFVar14 = (FTransformParameterNameAndCurves *)(pTVar20->AllocatorInstance).Data;
  piVar2 = &(this->Transforms).ArrayMax;
  (this->Transforms).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa70,8,iVar8,0,&pTVar7->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FTransformParameterNameAndCurves,FTransformParameterNameAndCurves,int>
              ((pTVar7->AllocatorInstance).Data,pFVar14,iVar8);
  }
  return this;
}

// ~FMovieSceneParameterSectionTemplate @ 146620e00

void __thiscall
FMovieSceneParameterSectionTemplate::~FMovieSceneParameterSectionTemplate
          (FMovieSceneParameterSectionTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTransformParameterNameAndCurves,int>
            ((FTransformParameterNameAndCurves *)(this->Transforms).AllocatorInstance.Data,
             (this->Transforms).ArrayNum);
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FColorParameterNameAndCurves,int>
            ((FColorParameterNameAndCurves *)(this->Colors).AllocatorInstance.Data,
             (this->Colors).ArrayNum);
  pFVar1 = (this->Colors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVectorParameterNameAndCurves,int>
            ((FVectorParameterNameAndCurves *)(this->Vectors).AllocatorInstance.Data,
             (this->Vectors).ArrayNum);
  pFVar1 = (this->Vectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector2DParameterNameAndCurves,int>
            ((FVector2DParameterNameAndCurves *)(this->Vector2Ds).AllocatorInstance.Data,
             (this->Vector2Ds).ArrayNum);
  pFVar1 = (this->Vector2Ds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBoolParameterNameAndCurve,int>
            ((FBoolParameterNameAndCurve *)(this->Bools).AllocatorInstance.Data,
             (this->Bools).ArrayNum);
  pFVar1 = (this->Bools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScalarParameterNameAndCurve,int>
            ((FScalarParameterNameAndCurve *)(this->Scalars).AllocatorInstance.Data,
             (this->Scalars).ArrayNum);
  pFVar1 = (this->Scalars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// operator= @ 146622430

FMovieSceneParameterSectionTemplate * __thiscall
FMovieSceneParameterSectionTemplate::operator=
          (FMovieSceneParameterSectionTemplate *this,FMovieSceneParameterSectionTemplate *param_1)

{
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScalarParameterNameAndCurve *pFVar9;
  FBoolParameterNameAndCurve *pFVar10;
  FVector2DParameterNameAndCurves *pFVar11;
  FVectorParameterNameAndCurves *pFVar12;
  FColorParameterNameAndCurves *pFVar13;
  FTransformParameterNameAndCurves *pFVar14;
  
  pTVar1 = &this->Scalars;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  if (pTVar1 != &param_1->Scalars) {
    DestructItems<FScalarParameterNameAndCurve,int>
              ((FScalarParameterNameAndCurve *)(pTVar1->AllocatorInstance).Data,
               (this->Scalars).ArrayNum);
    iVar8 = (param_1->Scalars).ArrayNum;
    piVar2 = &(this->Scalars).ArrayMax;
    pFVar9 = (FScalarParameterNameAndCurve *)(param_1->Scalars).AllocatorInstance.Data;
    (this->Scalars).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,iVar8,*piVar2,&pTVar1->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FScalarParameterNameAndCurve,FScalarParameterNameAndCurve,int>
                ((pTVar1->AllocatorInstance).Data,pFVar9,iVar8);
    }
  }
  pTVar3 = &this->Bools;
  if (pTVar3 != &param_1->Bools) {
    DestructItems<FBoolParameterNameAndCurve,int>
              ((FBoolParameterNameAndCurve *)(pTVar3->AllocatorInstance).Data,(this->Bools).ArrayNum
              );
    iVar8 = (param_1->Bools).ArrayNum;
    piVar2 = &(this->Bools).ArrayMax;
    pFVar10 = (FBoolParameterNameAndCurve *)(param_1->Bools).AllocatorInstance.Data;
    (this->Bools).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x128,8,iVar8,*piVar2,&pTVar3->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FBoolParameterNameAndCurve,FBoolParameterNameAndCurve,int>
                ((pTVar3->AllocatorInstance).Data,pFVar10,iVar8);
    }
  }
  pTVar4 = &this->Vector2Ds;
  if (pTVar4 != &param_1->Vector2Ds) {
    DestructItems<FVector2DParameterNameAndCurves,int>
              ((FVector2DParameterNameAndCurves *)(pTVar4->AllocatorInstance).Data,
               (this->Vector2Ds).ArrayNum);
    iVar8 = (param_1->Vector2Ds).ArrayNum;
    piVar2 = &(this->Vector2Ds).ArrayMax;
    pFVar11 = (FVector2DParameterNameAndCurves *)(param_1->Vector2Ds).AllocatorInstance.Data;
    (this->Vector2Ds).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (600,8,iVar8,*piVar2,&pTVar4->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVector2DParameterNameAndCurves,FVector2DParameterNameAndCurves,int>
                ((pTVar4->AllocatorInstance).Data,pFVar11,iVar8);
    }
  }
  pTVar5 = &this->Vectors;
  if (pTVar5 != &param_1->Vectors) {
    DestructItems<FVectorParameterNameAndCurves,int>
              ((FVectorParameterNameAndCurves *)(pTVar5->AllocatorInstance).Data,
               (this->Vectors).ArrayNum);
    iVar8 = (param_1->Vectors).ArrayNum;
    piVar2 = &(this->Vectors).ArrayMax;
    pFVar12 = (FVectorParameterNameAndCurves *)(param_1->Vectors).AllocatorInstance.Data;
    (this->Vectors).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x380,8,iVar8,*piVar2,&pTVar5->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVectorParameterNameAndCurves,FVectorParameterNameAndCurves,int>
                ((pTVar5->AllocatorInstance).Data,pFVar12,iVar8);
    }
  }
  pTVar6 = &this->Colors;
  if (pTVar6 != &param_1->Colors) {
    DestructItems<FColorParameterNameAndCurves,int>
              ((FColorParameterNameAndCurves *)(pTVar6->AllocatorInstance).Data,
               (this->Colors).ArrayNum);
    iVar8 = (param_1->Colors).ArrayNum;
    piVar2 = &(this->Colors).ArrayMax;
    pFVar13 = (FColorParameterNameAndCurves *)(param_1->Colors).AllocatorInstance.Data;
    (this->Colors).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x4a8,8,iVar8,*piVar2,&pTVar6->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FColorParameterNameAndCurves,FColorParameterNameAndCurves,int>
                ((pTVar6->AllocatorInstance).Data,pFVar13,iVar8);
    }
  }
  pTVar7 = &this->Transforms;
  if (pTVar7 != &param_1->Transforms) {
    DestructItems<FTransformParameterNameAndCurves,int>
              ((FTransformParameterNameAndCurves *)(pTVar7->AllocatorInstance).Data,
               (this->Transforms).ArrayNum);
    iVar8 = (param_1->Transforms).ArrayNum;
    piVar2 = &(this->Transforms).ArrayMax;
    pFVar14 = (FTransformParameterNameAndCurves *)(param_1->Transforms).AllocatorInstance.Data;
    (this->Transforms).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa70,8,iVar8,*piVar2,&pTVar7->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FTransformParameterNameAndCurves,FTransformParameterNameAndCurves,int>
                ((pTVar7->AllocatorInstance).Data,pFVar14,iVar8);
    }
  }
  return this;
}

// EvaluateCurves @ 146668fd0

void __thiscall
FMovieSceneParameterSectionTemplate::EvaluateCurves
          (FMovieSceneParameterSectionTemplate *this,FMovieSceneContext *param_1,
          FEvaluatedParameterSectionValues *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ForElementType<FScalarParameterNameAndValue> FVar4;
  undefined8 uVar5;
  ForElementType<FBoolParameterNameAndValue> FVar6;
  ForElementType<FVector2DParameterNameAndValue> FVar7;
  ForElementType<FVectorParameterNameAndValue> FVar8;
  ForElementType<FColorParameterNameAndValue> FVar9;
  ForElementType<FTransformParameterNameAndValue> FVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  ForElementType<FScalarParameterNameAndValue> FVar38;
  FFrameTime FVar39;
  FScriptContainerElement *pFVar40;
  FScriptContainerElement *pFVar41;
  ForElementType<FBoolParameterNameAndValue> FVar42;
  ForElementType<FVector2DParameterNameAndValue> FVar43;
  ForElementType<FVectorParameterNameAndValue> FVar44;
  ForElementType<FColorParameterNameAndValue> FVar45;
  ForElementType<FTransformParameterNameAndValue> FVar46;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  float local_174;
  float local_170 [6];
  undefined8 local_158;
  float local_150 [2];
  uint local_148;
  float local_140;
  float local_13c;
  float local_138 [2];
  float local_130;
  float local_12c;
  float local_128 [4];
  undefined1 local_118 [8];
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  
  uVar3 = *(uint *)((longlong)&param_1->_padding_ + 4);
  if (uVar3 == 0x80000000) {
    if ((int)param_1->_padding_ == 0) {
      param_1 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
      cVar25 = (char)param_1->_padding_;
    }
    else {
      cVar25 = (char)param_1->_padding_;
    }
    if (cVar25 == '\x02') {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar24) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar39 = *(FFrameTime *)((longlong)&param_1->_padding_ + 4);
  }
  else {
    local_res8[1] = 0;
    FVar39.SubFrame = 0.0;
    FVar39.FrameNumber.Value = uVar3;
    local_res8[0] = uVar3;
  }
  iVar35 = (this->Scalars).ArrayNum;
  pFVar41 = (this->Scalars).AllocatorInstance.Data;
  pFVar40 = pFVar41 + (longlong)iVar35 * 0x130;
  while( true ) {
    if ((this->Scalars).ArrayNum != iVar35) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar41 == pFVar40) break;
    local_174 = 0.0;
    bVar24 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 8),FVar39,&local_174);
    if (bVar24) {
      iVar34 = (param_2->ScalarValues).ArrayNum;
      piVar1 = &(param_2->ScalarValues).ArrayMax;
      if (iVar34 == *piVar1) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FScalarParameterNameAndValue>_>
                           (0x40c,(ForElementType<FScalarParameterNameAndValue> *)param_2,piVar1);
      }
      (param_2->ScalarValues).ArrayNum = iVar34 + 1;
      FVar4 = (param_2->ScalarValues).AllocatorInstance.SecondaryData;
      FVar38 = (ForElementType<FScalarParameterNameAndValue>)param_2;
      if (FVar4 != (ForElementType<FScalarParameterNameAndValue>)0x0) {
        FVar38 = FVar4;
      }
      uVar5 = *(undefined8 *)pFVar41;
      *(float *)((uchar *)((longlong)FVar38 + 8) + (longlong)iVar34 * 0xc) = local_174;
      *(undefined8 *)((longlong)FVar38 + (longlong)iVar34 * 0xc) = uVar5;
    }
    pFVar41 = pFVar41 + 0x130;
  }
  iVar35 = (this->Bools).ArrayNum;
  pFVar41 = (this->Bools).AllocatorInstance.Data;
  pFVar40 = pFVar41 + (longlong)iVar35 * 0x128;
  while( true ) {
    if ((this->Bools).ArrayNum != iVar35) {
      `TCheckedPointerIterator<FBoolParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar41 == pFVar40) break;
    local_res8[0] = local_res8[0] & 0xffffff00;
    cVar25 = (**(code **)(*(longlong *)(pFVar41 + 8) + 0xa0))(pFVar41 + 8,FVar39,local_res8);
    if (cVar25 != '\0') {
      iVar34 = (param_2->BoolValues).ArrayNum;
      if (iVar34 == (param_2->BoolValues).ArrayMax) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterNameAndValue>_>
                           (0x40c,&(param_2->BoolValues).AllocatorInstance,
                            &(param_2->BoolValues).ArrayMax);
      }
      (param_2->BoolValues).ArrayNum = iVar34 + 1;
      FVar6 = (param_2->BoolValues).AllocatorInstance.SecondaryData;
      FVar42 = (ForElementType<FBoolParameterNameAndValue>)&param_2->BoolValues;
      if (FVar6 != (ForElementType<FBoolParameterNameAndValue>)0x0) {
        FVar42 = FVar6;
      }
      *(undefined8 *)((longlong)FVar42 + (longlong)iVar34 * 0xc) = *(undefined8 *)pFVar41;
      ((uchar *)((longlong)FVar42 + 8))[(longlong)iVar34 * 0xc] = (uchar)local_res8[0];
    }
    pFVar41 = pFVar41 + 0x128;
  }
  iVar35 = (this->Vector2Ds).ArrayNum;
  pFVar41 = (this->Vector2Ds).AllocatorInstance.Data;
  pFVar40 = pFVar41 + (longlong)iVar35 * 600;
  while( true ) {
    if ((this->Vector2Ds).ArrayNum != iVar35) {
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_178);
    }
    if (pFVar41 == pFVar40) break;
    local_170[0] = 0.0;
    local_170[1] = 0.0;
    bVar24 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 8),FVar39,local_170);
    bVar26 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x130),FVar39,local_170 + 1);
    if (bVar26 || bVar24) {
      piVar1 = &(param_2->Vector2DValues).ArrayMax;
      iVar34 = (param_2->Vector2DValues).ArrayNum;
      dVar16 = (double)local_170[0];
      dVar17 = (double)local_170[1];
      if (iVar34 == *piVar1) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVector2DParameterNameAndValue>_>
                           (0x818,&(param_2->Vector2DValues).AllocatorInstance,piVar1);
      }
      lVar36 = (longlong)iVar34;
      (param_2->Vector2DValues).ArrayNum = iVar34 + 1;
      FVar7 = (param_2->Vector2DValues).AllocatorInstance.SecondaryData;
      FVar43 = (ForElementType<FVector2DParameterNameAndValue>)&param_2->Vector2DValues;
      if (FVar7 != (ForElementType<FVector2DParameterNameAndValue>)0x0) {
        FVar43 = FVar7;
      }
      *(undefined8 *)((longlong)FVar43 + lVar36 * 0x18) = *(undefined8 *)pFVar41;
      *(double *)((uchar *)((longlong)FVar43 + 8) + lVar36 * 0x18) = dVar16;
      *(double *)((uchar *)((longlong)FVar43 + 0x10) + lVar36 * 0x18) = dVar17;
    }
    pFVar41 = pFVar41 + 600;
  }
  local_148 = (this->Vectors).ArrayNum;
  uVar37 = (ulonglong)(int)local_148;
  pFVar41 = (this->Vectors).AllocatorInstance.Data;
  pFVar40 = pFVar41 + uVar37 * 0x380;
  while( true ) {
    if ((this->Vectors).ArrayNum != (int)uVar37) {
      `TCheckedPointerIterator<FVectorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_177);
    }
    if (pFVar41 == pFVar40) break;
    local_170[2] = 0.0;
    local_170[3] = 0.0;
    local_170[4] = 0.0;
    bVar24 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 8),FVar39,local_170 + 2);
    bVar26 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x130),FVar39,local_170 + 3);
    bVar27 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 600),FVar39,local_170 + 4);
    if (bVar27 || (bVar26 || bVar24)) {
      piVar1 = &(param_2->VectorValues).ArrayMax;
      iVar35 = (param_2->VectorValues).ArrayNum;
      dVar16 = (double)local_170[2];
      dVar17 = (double)local_170[3];
      dVar18 = (double)local_170[4];
      if (iVar35 == *piVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVectorParameterNameAndValue>_>
                           (0x820,&(param_2->VectorValues).AllocatorInstance,piVar1);
      }
      (param_2->VectorValues).ArrayNum = iVar35 + 1;
      FVar8 = (param_2->VectorValues).AllocatorInstance.SecondaryData;
      FVar44 = (ForElementType<FVectorParameterNameAndValue>)&param_2->VectorValues;
      if (FVar8 != (ForElementType<FVectorParameterNameAndValue>)0x0) {
        FVar44 = FVar8;
      }
      lVar36 = (longlong)iVar35 * 0x20;
      *(undefined8 *)(lVar36 + (longlong)FVar44) = *(undefined8 *)pFVar41;
      *(double *)(lVar36 + 8 + (longlong)FVar44) = dVar16;
      *(double *)(lVar36 + 0x10 + (longlong)FVar44) = dVar17;
      *(double *)(lVar36 + 0x18 + (longlong)FVar44) = dVar18;
    }
    uVar37 = (ulonglong)local_148;
    pFVar41 = pFVar41 + 0x380;
  }
  local_res8[0] = (this->Colors).ArrayNum;
  uVar37 = (ulonglong)(int)local_res8[0];
  pFVar41 = (this->Colors).AllocatorInstance.Data;
  pFVar40 = pFVar41 + uVar37 * 0x4a8;
  while( true ) {
    if ((this->Colors).ArrayNum != (int)uVar37) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_176);
    }
    if (pFVar41 == pFVar40) break;
    _local_118 = FLinearColor::White.field0_0x0;
    bVar24 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 8),FVar39,(float *)local_118);
    bVar26 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x130),FVar39,(float *)(local_118 + 4)
                       );
    bVar27 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 600),FVar39,(float *)(local_118 + 8));
    bVar28 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x380),FVar39,
                        (float *)(local_118 + 0xc));
    if (bVar28 || (bVar27 || (bVar26 || bVar24))) {
      iVar35 = (param_2->ColorValues).ArrayNum;
      piVar1 = &(param_2->ColorValues).ArrayMax;
      if (iVar35 == *piVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FColorParameterNameAndValue>_>
                           (0x418,&(param_2->ColorValues).AllocatorInstance,piVar1);
      }
      (param_2->ColorValues).ArrayNum = iVar35 + 1;
      FVar9 = (param_2->ColorValues).AllocatorInstance.SecondaryData;
      FVar45 = (ForElementType<FColorParameterNameAndValue>)&param_2->ColorValues;
      if (FVar9 != (ForElementType<FColorParameterNameAndValue>)0x0) {
        FVar45 = FVar9;
      }
      *(undefined8 *)((longlong)FVar45 + (longlong)iVar35 * 0x18) = *(undefined8 *)pFVar41;
      *(undefined1 (*) [8])((uchar *)((longlong)FVar45 + 8) + (longlong)iVar35 * 0x18) = local_118;
      *(undefined8 *)((uchar *)((longlong)FVar45 + 8) + (longlong)iVar35 * 0x18 + 8) = uStack_110;
    }
    uVar37 = (ulonglong)local_res8[0];
    pFVar41 = pFVar41 + 0x4a8;
  }
  local_res8[0] = (this->Transforms).ArrayNum;
  uVar37 = (ulonglong)(int)local_res8[0];
  pFVar41 = (this->Transforms).AllocatorInstance.Data;
  pFVar40 = pFVar41 + uVar37 * 0xa70;
  while( true ) {
    if ((this->Transforms).ArrayNum != (int)uVar37) {
      `TCheckedPointerIterator<FTransformParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_175);
    }
    if (pFVar41 == pFVar40) break;
    local_158 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    local_150[0] = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    bVar24 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 8),FVar39,&local_140);
    bVar26 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x130),FVar39,&local_13c);
    bVar27 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 600),FVar39,local_138);
    bVar28 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x380),FVar39,local_128);
    bVar29 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x4a8),FVar39,&local_130);
    bVar30 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x5d0),FVar39,&local_12c);
    bVar31 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x6f8),FVar39,(float *)&local_158);
    bVar32 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x820),FVar39,
                        (float *)((longlong)&local_158 + 4));
    bVar33 = FMovieSceneFloatChannel::Evaluate
                       ((FMovieSceneFloatChannel *)(pFVar41 + 0x948),FVar39,local_150);
    if (bVar33 || (bVar32 ||
                  (bVar31 || (bVar30 || (bVar29 || (bVar28 || (bVar27 || (bVar26 || bVar24)))))))) {
      local_108 = *(undefined8 *)pFVar41;
      piVar1 = &(param_2->TransformValues).ArrayMax;
      dStack_100 = (double)local_140;
      iVar35 = (param_2->TransformValues).ArrayNum;
      dVar16 = (double)local_13c;
      dVar17 = (double)local_138[0];
      dVar18 = (double)local_130;
      dVar19 = (double)local_12c;
      dVar20 = (double)local_128[0];
      dVar21 = (double)(float)local_158;
      dVar22 = (double)local_158._4_4_;
      dVar23 = (double)local_150[0];
      if (iVar35 == *piVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FTransformParameterNameAndValue>_>
                           (0x850,&(param_2->TransformValues).AllocatorInstance,piVar1);
      }
      (param_2->TransformValues).ArrayNum = iVar35 + 1;
      FVar10 = (param_2->TransformValues).AllocatorInstance.SecondaryData;
      lVar36 = (longlong)iVar35;
      FVar46 = (ForElementType<FTransformParameterNameAndValue>)&param_2->TransformValues;
      if (FVar10 != (ForElementType<FTransformParameterNameAndValue>)0x0) {
        FVar46 = FVar10;
      }
      puVar2 = (undefined8 *)((longlong)FVar46 + lVar36 * 0x50);
      *puVar2 = local_108;
      puVar2[1] = dStack_100;
      auVar14._8_4_ = SUB84(dVar17,0);
      auVar14._0_8_ = dVar16;
      auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])((uchar *)((longlong)FVar46 + 0x10) + lVar36 * 0x50) = auVar14;
      auVar12._8_4_ = SUB84(dVar19,0);
      auVar12._0_8_ = dVar18;
      auVar12._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])((uchar *)((longlong)FVar46 + 0x20) + lVar36 * 0x50) = auVar12;
      auVar15._8_4_ = SUB84(dVar21,0);
      auVar15._0_8_ = dVar20;
      auVar15._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])((uchar *)((longlong)FVar46 + 0x30) + lVar36 * 0x50) = auVar15;
      auVar13._8_4_ = SUB84(dVar23,0);
      auVar13._0_8_ = dVar22;
      auVar13._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])((uchar *)((longlong)FVar46 + 0x40) + lVar36 * 0x50) = auVar13;
    }
    uVar37 = (ulonglong)local_res8[0];
    pFVar41 = pFVar41 + 0xa70;
  }
  return;
}

