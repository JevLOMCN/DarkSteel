// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 53

// StaticClass @ 146724e20

UClass * __cdecl UMovieSceneParameterSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneParameterSection,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneParameterSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton;
}

// UMovieSceneParameterSection @ 146765bc0

UMovieSceneParameterSection * __thiscall
UMovieSceneParameterSection::UMovieSceneParameterSection
          (UMovieSceneParameterSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->BoolParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameterNamesAndCurves).ArrayNum = 0;
  (this->BoolParameterNamesAndCurves).ArrayMax = 0;
  (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterNamesAndCurves).ArrayNum = 0;
  (this->ScalarParameterNamesAndCurves).ArrayMax = 0;
  (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2DParameterNamesAndCurves).ArrayNum = 0;
  (this->Vector2DParameterNamesAndCurves).ArrayMax = 0;
  (this->VectorParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterNamesAndCurves).ArrayNum = 0;
  (this->VectorParameterNamesAndCurves).ArrayMax = 0;
  (this->ColorParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorParameterNamesAndCurves).ArrayNum = 0;
  (this->ColorParameterNamesAndCurves).ArrayMax = 0;
  (this->TransformParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformParameterNamesAndCurves).ArrayNum = 0;
  (this->TransformParameterNamesAndCurves).ArrayMax = 0;
  return this;
}

// UMovieSceneParameterSection @ 146765c50

UMovieSceneParameterSection * __thiscall
UMovieSceneParameterSection::UMovieSceneParameterSection
          (UMovieSceneParameterSection *this,FObjectInitializer *param_1)

{
  int iVar1;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->BoolParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameterNamesAndCurves).ArrayNum = 0;
  (this->BoolParameterNamesAndCurves).ArrayMax = 0;
  (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterNamesAndCurves).ArrayNum = 0;
  (this->ScalarParameterNamesAndCurves).ArrayMax = 0;
  (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2DParameterNamesAndCurves).ArrayNum = 0;
  (this->Vector2DParameterNamesAndCurves).ArrayMax = 0;
  (this->VectorParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterNamesAndCurves).ArrayNum = 0;
  (this->VectorParameterNamesAndCurves).ArrayMax = 0;
  (this->ColorParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorParameterNamesAndCurves).ArrayNum = 0;
  (this->ColorParameterNamesAndCurves).ArrayMax = 0;
  (this->TransformParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformParameterNamesAndCurves).ArrayNum = 0;
  (this->TransformParameterNamesAndCurves).ArrayMax = 0;
  local_18 = FSequencerObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 4) {
    *(undefined1 *)&this->_padding_ = 1;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
    return this;
  }
  local_18 = FSequencerObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar1) + '\x01';
  return this;
}

// ~UMovieSceneParameterSection @ 14676aa40

void __thiscall
UMovieSceneParameterSection::~UMovieSceneParameterSection(UMovieSceneParameterSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  DestructItems<FTransformParameterNameAndCurves,int>
            ((FTransformParameterNameAndCurves *)
             (this->TransformParameterNamesAndCurves).AllocatorInstance.Data,
             (this->TransformParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->TransformParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FColorParameterNameAndCurves,int>
            ((FColorParameterNameAndCurves *)
             (this->ColorParameterNamesAndCurves).AllocatorInstance.Data,
             (this->ColorParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->ColorParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVectorParameterNameAndCurves,int>
            ((FVectorParameterNameAndCurves *)
             (this->VectorParameterNamesAndCurves).AllocatorInstance.Data,
             (this->VectorParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->VectorParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector2DParameterNameAndCurves,int>
            ((FVector2DParameterNameAndCurves *)
             (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data,
             (this->Vector2DParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScalarParameterNameAndCurve,int>
            ((FScalarParameterNameAndCurve *)
             (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data,
             (this->ScalarParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBoolParameterNameAndCurve,int>
            ((FBoolParameterNameAndCurve *)
             (this->BoolParameterNamesAndCurves).AllocatorInstance.Data,
             (this->BoolParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->BoolParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// AddBoolParameterKey @ 146775340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddBoolParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,bool param_3)

{
  int *piVar1;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FBoolParameterNameAndCurve *pFVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TMovieSceneChannelData<bool> *this_00;
  TRange<FFrameNumber> *pTVar10;
  longlong lVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 auStack_218 [32];
  FBoolParameterNameAndCurve *local_1f8;
  FBoolParameterNameAndCurve *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  FScriptContainerElement local_1c8;
  undefined1 local_1c7 [3];
  TRange<FFrameNumber> local_1c4;
  undefined1 local_1b4 [4];
  TRange<FFrameNumber> local_1b0;
  TRange<FFrameNumber> local_1a0;
  undefined1 local_190 [32];
  FBoolParameterNameAndCurve local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pTVar2 = &this->BoolParameterNamesAndCurves;
  iVar3 = (this->BoolParameterNamesAndCurves).ArrayNum;
  pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x25;
  local_1c8 = (FScriptContainerElement)param_3;
  while( true ) {
    if ((this->BoolParameterNamesAndCurves).ArrayNum != iVar3) {
      local_1c7[0] = 0;
      `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c7);
    }
    if (pFVar12 == pFVar13) goto LAB_1467753c5;
    if (*pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x25;
  }
  pFVar12 = pFVar12 + 1;
  if (pFVar12 == (FName *)0x0) {
LAB_1467753c5:
    local_170._padding_ = (longlong)param_1;
    FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_170.ParameterCurve);
    pFVar4 = (FBoolParameterNameAndCurve *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_170) &&
       (lVar11 = (longlong)(this->BoolParameterNamesAndCurves).ArrayMax,
       &local_170 < pFVar4 + lVar11)) {
      local_1e0 = (longlong)(this->BoolParameterNamesAndCurves).ArrayNum;
      local_1d8 = 0x128;
      local_1f8 = &local_170;
      local_1f0 = pFVar4;
      local_1e8 = lVar11;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->BoolParameterNamesAndCurves).ArrayNum;
    piVar1 = &(this->BoolParameterNamesAndCurves).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x128,8,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->BoolParameterNamesAndCurves).ArrayNum = uVar8 + 1;
    lVar11 = (longlong)(int)uVar8 * 0x128;
    FBoolParameterNameAndCurve::FBoolParameterNameAndCurve
              ((FBoolParameterNameAndCurve *)((pTVar2->AllocatorInstance).Data + lVar11),&local_170)
    ;
    FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_170.ParameterCurve);
    iVar3 = (this->BoolParameterNamesAndCurves).ArrayNum;
    uVar9 = 0;
    if ((int)uVar8 < iVar3) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_1f8 = (FBoolParameterNameAndCurve *)(longlong)(int)uVar8;
      local_1f0 = (FBoolParameterNameAndCurve *)(longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar12 = (FName *)((pTVar2->AllocatorInstance).Data + lVar11 + 8);
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  this_00 = (TMovieSceneChannelData<bool> *)
            (**(code **)((longlong)*pFVar12 + 0x98))(pFVar12,local_190);
  uVar8 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)this_00,param_2,(FFrameNumber)0x0);
  if (uVar8 == 0xffffffff) {
    TMovieSceneChannelData<bool>::AddKey(this_00,param_2,(bool)local_1c8);
  }
  else {
    pTVar5 = this_00->Values;
    iVar3 = pTVar5->ArrayNum;
    uVar9 = 0;
    if ((int)uVar8 < iVar3) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_1f8 = (FBoolParameterNameAndCurve *)(longlong)(int)uVar8;
      local_1f0 = (FBoolParameterNameAndCurve *)(longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (pTVar5->AllocatorInstance).Data
    [(longlong)&((FBoolParameterNameAndCurve *)(longlong)(int)uVar8)->_padding_] = local_1c8;
  }
  FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this_00,(int)local_1b4);
  bVar7 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar7) {
    local_1b0.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_1b0.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_1c4.LowerBound.Type.Value = '\x01';
    pcVar6 = *(code **)(this->_padding_ + 0x2c8);
    local_1c4.UpperBound.Type.Value = '\x01';
    local_1c4.LowerBound.Value.Value = param_2.Value;
    local_1c4.UpperBound.Value.Value = param_2.Value;
    pTVar10 = TRange<FFrameNumber>::Hull(&local_1a0,&local_1c4,&local_1b0);
    (*pcVar6)(this,pTVar10);
  }
  return;
}

// AddColorParameterKey @ 146775ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddColorParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,
          FLinearColor *param_3,EMovieSceneKeyInterpolation param_4)

{
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FColorParameterNameAndCurves *pFVar3;
  code *pcVar4;
  EMovieSceneKeyInterpolation EVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FName *pFVar11;
  EMovieSceneKeyInterpolation EVar12;
  int *piVar13;
  FName *pFVar14;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_588 [32];
  FColorParameterNameAndCurves *local_568;
  FColorParameterNameAndCurves *local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  undefined1 local_538 [4];
  TRange<FFrameNumber> local_534;
  undefined1 local_524 [8];
  undefined1 local_51c [8];
  TRange<FFrameNumber> local_514;
  TRange<FFrameNumber> local_504;
  FColorParameterNameAndCurves local_4f0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_588;
  pTVar1 = &this->ColorParameterNamesAndCurves;
  iVar2 = (this->ColorParameterNamesAndCurves).ArrayNum;
  pFVar11 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar14 = pFVar11 + (longlong)iVar2 * 0x95;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->ColorParameterNamesAndCurves).ArrayNum != iVar2) {
      local_538[0] = 0;
      `TCheckedPointerIterator<FColorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_538);
    }
    EVar12 = (EMovieSceneKeyInterpolation)param_3;
    if (pFVar11 == pFVar14) break;
    if (*pFVar11 == param_1) goto LAB_1467760b3;
    pFVar11 = pFVar11 + 0x95;
  }
  local_4f0._padding_ = (longlong)param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.AlphaCurve);
  pFVar3 = (FColorParameterNameAndCurves *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= &local_4f0) &&
     (lVar10 = (longlong)(this->ColorParameterNamesAndCurves).ArrayMax, &local_4f0 < pFVar3 + lVar10
     )) {
    local_550 = (longlong)(this->ColorParameterNamesAndCurves).ArrayNum;
    local_548 = 0x4a8;
    local_568 = &local_4f0;
    local_560 = pFVar3;
    local_558 = lVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (this->ColorParameterNamesAndCurves).ArrayNum;
  piVar13 = &(this->ColorParameterNamesAndCurves).ArrayMax;
  if (uVar7 == *piVar13) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4a8,8,&pTVar1->AllocatorInstance,piVar13);
  }
  EVar12 = (EMovieSceneKeyInterpolation)piVar13;
  (this->ColorParameterNamesAndCurves).ArrayNum = uVar7 + 1;
  lVar10 = (longlong)(int)uVar7 * 0x4a8;
  FColorParameterNameAndCurves::FColorParameterNameAndCurves
            ((FColorParameterNameAndCurves *)((pTVar1->AllocatorInstance).Data + lVar10),&local_4f0)
  ;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.AlphaCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.BlueCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.GreenCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.RedCurve);
  iVar2 = (this->ColorParameterNamesAndCurves).ArrayNum;
  uVar8 = 0;
  if ((int)uVar7 < iVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    EVar12 = 0x50;
    local_568 = (FColorParameterNameAndCurves *)(longlong)(int)uVar7;
    local_560 = (FColorParameterNameAndCurves *)(longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar11 = (FName *)((pTVar1->AllocatorInstance).Data + lVar10);
  (**(code **)(this->_padding_ + 0x3a8))(this);
LAB_1467760b3:
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 1),local_res18,param_4);
  iVar2 = (int)pFVar11;
  local_568._0_1_ = EVar5;
  AddKeyToChannel((FMovieSceneFloatChannel *)local_524,(FFrameNumber)(iVar2 + 8),in_XMM2_Da,EVar12);
  local_568._0_1_ =
       GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x26),local_res18,param_4);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_524 + 4),(FFrameNumber)(iVar2 + 0x130),
                  in_XMM2_Da,EVar12);
  local_568._0_1_ =
       GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x4b),local_res18,param_4);
  AddKeyToChannel((FMovieSceneFloatChannel *)local_51c,(FFrameNumber)(iVar2 + 600),in_XMM2_Da,EVar12
                 );
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x70),local_res18,param_4);
  local_568 = (FColorParameterNameAndCurves *)CONCAT71(local_568._1_7_,EVar5);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_51c + 4),(FFrameNumber)(iVar2 + 0x380),
                  in_XMM2_Da,EVar12);
  bVar6 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar6) {
    local_514.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_514.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_534.LowerBound.Type.Value = '\x01';
    local_534.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_534.LowerBound.Value.Value = local_res18[0].Value;
    local_534.UpperBound.Value.Value = local_res18[0].Value;
    pTVar9 = TRange<FFrameNumber>::Hull(&local_504,&local_534,&local_514);
    (*pcVar4)(this,pTVar9);
  }
  return;
}

// AddScalarParameterKey @ 146778a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddScalarParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,float param_3,
          EMovieSceneKeyInterpolation param_4)

{
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneKeyInterpolation EVar6;
  uint uVar7;
  uint uVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FName *pFVar11;
  FName *pFVar12;
  FMovieSceneFloatChannel *pFVar13;
  EMovieSceneKeyInterpolation EVar14;
  undefined8 in_R9;
  int *piVar15;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_1f8 [32];
  FName *local_1d8;
  FName *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  TRange<FFrameNumber> local_1a4;
  undefined1 local_194 [12];
  longlong lStack_188;
  TRange<FFrameNumber> local_180;
  FName local_170;
  FMovieSceneFloatChannel local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pTVar1 = &this->ScalarParameterNamesAndCurves;
  iVar2 = (this->ScalarParameterNamesAndCurves).ArrayNum;
  pFVar12 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar2 * 0x26;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->ScalarParameterNamesAndCurves).ArrayNum != iVar2) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    EVar14 = (EMovieSceneKeyInterpolation)in_R9;
    if (pFVar12 == pFVar11) goto LAB_146778a95;
    if (*pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x26;
  }
  pFVar13 = (FMovieSceneFloatChannel *)(pFVar12 + 1);
  if (pFVar13 == (FMovieSceneFloatChannel *)0x0) {
LAB_146778a95:
    local_170 = param_1;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_168);
    pFVar12 = (FName *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar12 <= &local_170) &&
       (lVar10 = (longlong)(this->ScalarParameterNamesAndCurves).ArrayMax,
       &local_170 < pFVar12 + lVar10 * 0x26)) {
      local_1c0 = (longlong)(this->ScalarParameterNamesAndCurves).ArrayNum;
      local_1b8 = 0x130;
      local_1d8 = &local_170;
      local_1d0 = pFVar12;
      local_1c8 = lVar10;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = (this->ScalarParameterNamesAndCurves).ArrayNum;
    piVar15 = &(this->ScalarParameterNamesAndCurves).ArrayMax;
    if (uVar7 == *piVar15) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,8,&pTVar1->AllocatorInstance,piVar15);
    }
    EVar14 = (EMovieSceneKeyInterpolation)piVar15;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this->ScalarParameterNamesAndCurves).ArrayNum = uVar7 + 1;
    lVar10 = (longlong)(int)uVar7 * 0x130;
    *(FName *)(pFVar3 + lVar10) = local_170;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 8),&local_168);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_168);
    iVar2 = (this->ScalarParameterNamesAndCurves).ArrayNum;
    uVar8 = 0;
    if ((int)uVar7 < iVar2) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      EVar14 = 0x50;
      local_1d8 = (FName *)(longlong)(int)uVar7;
      local_1d0 = (FName *)(longlong)iVar2;
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
    pFVar13 = (FMovieSceneFloatChannel *)((pTVar1->AllocatorInstance).Data + lVar10 + 8);
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  EVar6 = GetInterpolationMode(pFVar13,local_res18,param_4);
  local_1d8 = (FName *)CONCAT71(local_1d8._1_7_,EVar6);
  AddKeyToChannel((FMovieSceneFloatChannel *)local_194,(FFrameNumber)(int)pFVar13,in_XMM2_Da,EVar14)
  ;
  bVar5 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar5) {
    local_194._4_8_ = this->_padding_;
    lStack_188 = this->_padding_;
    local_1a4.LowerBound.Type.Value = '\x01';
    local_1a4.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_1a4.LowerBound.Value.Value = local_res18[0].Value;
    local_1a4.UpperBound.Value.Value = local_res18[0].Value;
    pTVar9 = TRange<FFrameNumber>::Hull
                       (&local_180,&local_1a4,(TRange<FFrameNumber> *)(local_194 + 4));
    (*pcVar4)(this,pTVar9);
  }
  return;
}

// AddTransformParameterKey @ 1467795a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddTransformParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,
          TTransform<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FTransformParameterNameAndCurves *pFVar4;
  code *pcVar5;
  FMovieSceneFloatValue *pFVar6;
  TTransform<double> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TRange<FFrameNumber> *pTVar11;
  longlong lVar12;
  FName *pFVar13;
  FName *pFVar14;
  undefined1 auStack_e18 [32];
  FTransformParameterNameAndCurves *local_df8;
  FTransformParameterNameAndCurves *local_df0;
  longlong local_de8;
  longlong local_de0;
  undefined8 local_dd8;
  undefined1 local_dc8 [4];
  TRange<FFrameNumber> local_dc4;
  undefined1 local_db4 [4];
  undefined1 local_db0 [4];
  undefined1 local_dac [4];
  undefined1 local_da8 [4];
  undefined1 local_da4 [4];
  undefined1 local_da0 [4];
  undefined1 local_d9c [4];
  undefined1 local_d98 [4];
  undefined1 local_d94 [4];
  TTransform<double> *local_d90;
  double local_d88;
  double dStack_d80;
  double local_d78;
  double local_d70;
  double dStack_d68;
  double local_d60;
  TRotator<double> local_d58;
  TRange<FFrameNumber> local_d40;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_d30;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_d10;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_cf0;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_cd0;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_cb0;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_c90;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_c70;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_c50;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_c30;
  TQuat<double> local_c08;
  TRange<FFrameNumber> local_be8;
  float local_bd8;
  undefined8 local_bd4;
  undefined8 uStack_bcc;
  undefined1 local_bc4;
  undefined4 local_bc3;
  undefined2 local_bbf;
  undefined1 local_bbd;
  float local_bb8;
  undefined8 local_bb4;
  undefined8 uStack_bac;
  undefined1 local_ba4;
  undefined4 local_ba3;
  undefined2 local_b9f;
  undefined1 local_b9d;
  float local_b98;
  undefined8 local_b94;
  undefined8 uStack_b8c;
  undefined1 local_b84;
  undefined4 local_b83;
  undefined2 local_b7f;
  undefined1 local_b7d;
  float local_b78;
  undefined8 local_b74;
  undefined8 uStack_b6c;
  undefined1 local_b64;
  undefined4 local_b63;
  undefined2 local_b5f;
  undefined1 local_b5d;
  float local_b58;
  undefined8 local_b54;
  undefined8 uStack_b4c;
  undefined1 local_b44;
  undefined4 local_b43;
  undefined2 local_b3f;
  undefined1 local_b3d;
  float local_b38;
  undefined8 local_b34;
  undefined8 uStack_b2c;
  undefined1 local_b24;
  undefined4 local_b23;
  undefined2 local_b1f;
  undefined1 local_b1d;
  float local_b18;
  undefined8 local_b14;
  undefined8 uStack_b0c;
  undefined1 local_b04;
  undefined4 local_b03;
  undefined2 local_aff;
  undefined1 local_afd;
  float local_af8;
  undefined8 local_af4;
  undefined8 uStack_aec;
  undefined1 local_ae4;
  undefined4 local_ae3;
  undefined2 local_adf;
  undefined1 local_add;
  float local_ad8;
  undefined8 local_ad4;
  undefined8 uStack_acc;
  undefined1 local_ac4;
  undefined4 local_ac3;
  undefined2 local_abf;
  undefined1 local_abd;
  FTransformParameterNameAndCurves local_ab8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e18;
  pTVar2 = &this->TransformParameterNamesAndCurves;
  iVar3 = (this->TransformParameterNamesAndCurves).ArrayNum;
  pFVar6 = (FMovieSceneFloatValue *)(ulonglong)(uint)param_2.Value;
  pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar14 = pFVar13 + (longlong)iVar3 * 0x14e;
  local_d90 = param_3;
  while( true ) {
    if ((this->TransformParameterNamesAndCurves).ArrayNum != iVar3) {
      local_dc8[0] = 0;
      `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_dc8);
    }
    if (pFVar13 == pFVar14) break;
    if (*pFVar13 == param_1) goto LAB_146779812;
    pFVar13 = pFVar13 + 0x14e;
  }
  local_ab8._padding_ = (longlong)param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Translation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Translation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Translation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Rotation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Rotation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Rotation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Scale);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Scale + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab8.Scale + 2);
  pFVar4 = (FTransformParameterNameAndCurves *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= &local_ab8) &&
     (lVar12 = (longlong)(this->TransformParameterNamesAndCurves).ArrayMax,
     &local_ab8 < pFVar4 + lVar12)) {
    local_de0 = (longlong)(this->TransformParameterNamesAndCurves).ArrayNum;
    local_dd8 = 0xa70;
    local_df8 = &local_ab8;
    local_df0 = pFVar4;
    local_de8 = lVar12;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar9 = (this->TransformParameterNamesAndCurves).ArrayNum;
  piVar1 = &(this->TransformParameterNamesAndCurves).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa70,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TransformParameterNamesAndCurves).ArrayNum = uVar9 + 1;
  lVar12 = (longlong)(int)uVar9 * 0xa70;
  FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
            ((FTransformParameterNameAndCurves *)((pTVar2->AllocatorInstance).Data + lVar12),
             &local_ab8);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Scale + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Scale + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Scale);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Rotation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Rotation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Rotation);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Translation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Translation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab8.Translation);
  iVar3 = (this->TransformParameterNamesAndCurves).ArrayNum;
  uVar10 = 0;
  if ((int)uVar9 < iVar3) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_df8 = (FTransformParameterNameAndCurves *)(longlong)(int)uVar9;
    local_df0 = (FTransformParameterNameAndCurves *)(longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar13 = (FName *)((pTVar2->AllocatorInstance).Data + lVar12);
  (**(code **)(this->_padding_ + 0x3a8))(this);
LAB_146779812:
  pTVar7 = local_d90;
  local_d88 = (local_d90->Translation).XY.m128d_f64[0];
  dStack_d80 = (local_d90->Translation).XY.m128d_f64[1];
  local_d78 = (local_d90->Translation).ZW.m128d_f64[0];
  local_c08.Z = (local_d90->Rotation).ZW.m128d_f64[0];
  local_c08.W = (local_d90->Rotation).ZW.m128d_f64[1];
  local_c08.X = (local_d90->Rotation).XY.m128d_f64[0];
  local_c08.Y = (local_d90->Rotation).XY.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_c08,&local_d58);
  local_d70 = (pTVar7->Scale3D).XY.m128d_f64[0];
  dStack_d68 = (pTVar7->Scale3D).XY.m128d_f64[1];
  local_d60 = (pTVar7->Scale3D).ZW.m128d_f64[0];
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_d30,(FMovieSceneChannel *)(pFVar13 + 1),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xf),
             (FKeyHandleLookupTable *)(pFVar13 + 0x14));
  local_d30.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x11);
  if ((local_d30._padding_ == 0) ||
     (local_d30.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_ad8 = (float)local_d88;
  local_ac4 = 0;
  local_ac3 = 0x2000000;
  local_abf = 0;
  local_abd = 0;
  local_ad4 = 0;
  uStack_acc = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_d30,(FFrameNumber)(int)local_db4,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_d10,(FMovieSceneChannel *)(pFVar13 + 0x26),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x34),
             (FKeyHandleLookupTable *)(pFVar13 + 0x39));
  local_d10.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x36);
  if ((local_d10._padding_ == 0) ||
     (local_d10.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_bd8 = (float)dStack_d80;
  local_bc4 = 0;
  local_bc3 = 0x2000000;
  local_bbf = 0;
  local_bbd = 0;
  local_bd4 = 0;
  uStack_bcc = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_d10,(FFrameNumber)(int)local_db0,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_cf0,(FMovieSceneChannel *)(pFVar13 + 0x4b),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x59),
             (FKeyHandleLookupTable *)(pFVar13 + 0x5e));
  local_cf0.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x5b);
  if ((local_cf0._padding_ == 0) ||
     (local_cf0.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_bb8 = (float)local_d78;
  local_ba4 = 0;
  local_ba3 = 0x2000000;
  local_b9f = 0;
  local_b9d = 0;
  local_bb4 = 0;
  uStack_bac = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_cf0,(FFrameNumber)(int)local_dac,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_cd0,(FMovieSceneChannel *)(pFVar13 + 0x70),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x7e),
             (FKeyHandleLookupTable *)(pFVar13 + 0x83));
  local_cd0.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x80);
  if ((local_cd0._padding_ == 0) ||
     (local_cd0.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b98 = (float)local_d58.Roll;
  local_b84 = 0;
  local_b83 = 0x2000000;
  local_b7f = 0;
  local_b7d = 0;
  local_b94 = 0;
  uStack_b8c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_cd0,(FFrameNumber)(int)local_da8,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_cb0,(FMovieSceneChannel *)(pFVar13 + 0x95),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xa3),
             (FKeyHandleLookupTable *)(pFVar13 + 0xa8));
  local_cb0.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xa5);
  if ((local_cb0._padding_ == 0) ||
     (local_cb0.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b78 = (float)local_d58.Pitch;
  local_b64 = 0;
  local_b63 = 0x2000000;
  local_b5f = 0;
  local_b5d = 0;
  local_b74 = 0;
  uStack_b6c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_cb0,(FFrameNumber)(int)local_da4,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_c90,(FMovieSceneChannel *)(pFVar13 + 0xba),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 200),
             (FKeyHandleLookupTable *)(pFVar13 + 0xcd));
  local_c90.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xca);
  if ((local_c90._padding_ == 0) ||
     (local_c90.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b58 = (float)local_d58.Yaw;
  local_b44 = 0;
  local_b43 = 0x2000000;
  local_b3f = 0;
  local_b3d = 0;
  local_b54 = 0;
  uStack_b4c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_c90,(FFrameNumber)(int)local_da0,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_c70,(FMovieSceneChannel *)(pFVar13 + 0xdf),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xed),
             (FKeyHandleLookupTable *)(pFVar13 + 0xf2));
  local_c70.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0xef);
  if ((local_c70._padding_ == 0) ||
     (local_c70.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b38 = (float)local_d70;
  local_b24 = 0;
  local_b23 = 0x2000000;
  local_b1f = 0;
  local_b1d = 0;
  local_b34 = 0;
  uStack_b2c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_c70,(FFrameNumber)(int)local_d9c,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_c50,(FMovieSceneChannel *)(pFVar13 + 0x104),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x112),
             (FKeyHandleLookupTable *)(pFVar13 + 0x117));
  local_c50.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x114);
  if ((local_c50._padding_ == 0) ||
     (local_c50.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b18 = (float)dStack_d68;
  local_b04 = 0;
  local_b03 = 0x2000000;
  local_aff = 0;
  local_afd = 0;
  local_b14 = 0;
  uStack_b0c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_c50,(FFrameNumber)(int)local_d98,pFVar6);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_c30,(FMovieSceneChannel *)(pFVar13 + 0x129),
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x137),
             (FKeyHandleLookupTable *)(pFVar13 + 0x13c));
  local_c30.Values = (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(pFVar13 + 0x139);
  if ((local_c30._padding_ == 0) ||
     (local_c30.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_af8 = (float)local_d60;
  local_ae4 = 0;
  local_ae3 = 0x2000000;
  local_adf = 0;
  local_add = 0;
  local_af4 = 0;
  uStack_aec = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_c30,(FFrameNumber)(int)local_d94,pFVar6);
  bVar8 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar8) {
    local_d40.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_d40.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_dc4.LowerBound.Type.Value = '\x01';
    pcVar5 = *(code **)(this->_padding_ + 0x2c8);
    local_dc4.UpperBound.Type.Value = '\x01';
    local_dc4.LowerBound.Value.Value = param_2.Value;
    local_dc4.UpperBound.Value.Value = param_2.Value;
    pTVar11 = TRange<FFrameNumber>::Hull(&local_be8,&local_dc4,&local_d40);
    (*pcVar5)(this,pTVar11);
  }
  return;
}

// AddVector2DParameterKey @ 146779f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddVector2DParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,
          TVector2<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EMovieSceneKeyInterpolation EVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FName *pFVar11;
  EMovieSceneKeyInterpolation EVar12;
  int *piVar13;
  FName *pFVar14;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_328 [32];
  FName *local_308;
  FName *local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2d8 [4];
  TRange<FFrameNumber> local_2d4;
  undefined1 local_2c4 [8];
  TRange<FFrameNumber> local_2bc;
  TRange<FFrameNumber> local_2ac;
  FName local_298;
  FMovieSceneFloatChannel local_290;
  FMovieSceneFloatChannel local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_328;
  pTVar1 = &this->Vector2DParameterNamesAndCurves;
  iVar2 = (this->Vector2DParameterNamesAndCurves).ArrayNum;
  pFVar11 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar14 = pFVar11 + (longlong)iVar2 * 0x4b;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->Vector2DParameterNamesAndCurves).ArrayNum != iVar2) {
      local_2d8[0] = 0;
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_2d8);
    }
    EVar12 = (EMovieSceneKeyInterpolation)param_3;
    if (pFVar11 == pFVar14) break;
    if (*pFVar11 == param_1) goto LAB_14677a109;
    pFVar11 = pFVar11 + 0x4b;
  }
  local_298 = param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_290);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_168);
  pFVar11 = (FName *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar11 <= &local_298) &&
     (lVar10 = (longlong)(this->Vector2DParameterNamesAndCurves).ArrayMax,
     &local_298 < pFVar11 + lVar10 * 0x4b)) {
    local_2f0 = (longlong)(this->Vector2DParameterNamesAndCurves).ArrayNum;
    local_2e8 = 600;
    local_308 = &local_298;
    local_300 = pFVar11;
    local_2f8 = lVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (this->Vector2DParameterNamesAndCurves).ArrayNum;
  piVar13 = &(this->Vector2DParameterNamesAndCurves).ArrayMax;
  if (uVar7 == *piVar13) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (600,8,&pTVar1->AllocatorInstance,piVar13);
  }
  EVar12 = (EMovieSceneKeyInterpolation)piVar13;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  (this->Vector2DParameterNamesAndCurves).ArrayNum = uVar7 + 1;
  lVar10 = (longlong)(int)uVar7 * 600;
  *(FName *)(pFVar3 + lVar10) = local_298;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 8),&local_290);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 0x130),&local_168);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_168);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_290);
  iVar2 = (this->Vector2DParameterNamesAndCurves).ArrayNum;
  uVar8 = 0;
  if ((int)uVar7 < iVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    EVar12 = 0x50;
    local_308 = (FName *)(longlong)(int)uVar7;
    local_300 = (FName *)(longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar11 = (FName *)((pTVar1->AllocatorInstance).Data + lVar10);
  (**(code **)(this->_padding_ + 0x3a8))(this);
LAB_14677a109:
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 1),local_res18,param_4);
  local_308._0_1_ = EVar5;
  AddKeyToChannel((FMovieSceneFloatChannel *)local_2c4,(FFrameNumber)((int)pFVar11 + 8),in_XMM2_Da,
                  EVar12);
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x26),local_res18,param_4);
  local_308 = (FName *)CONCAT71(local_308._1_7_,EVar5);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_2c4 + 4),(FFrameNumber)((int)pFVar11 + 0x130),
                  in_XMM2_Da,EVar12);
  bVar6 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar6) {
    local_2bc.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_2bc.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_2d4.LowerBound.Type.Value = '\x01';
    local_2d4.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_2d4.LowerBound.Value.Value = local_res18[0].Value;
    local_2d4.UpperBound.Value.Value = local_res18[0].Value;
    pTVar9 = TRange<FFrameNumber>::Hull(&local_2ac,&local_2d4,&local_2bc);
    (*pcVar4)(this,pTVar9);
  }
  return;
}

// AddVectorParameterKey @ 14677a210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::AddVectorParameterKey
          (UMovieSceneParameterSection *this,FName param_1,FFrameNumber param_2,
          TVector<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EMovieSceneKeyInterpolation EVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FName *pFVar11;
  EMovieSceneKeyInterpolation EVar12;
  int *piVar13;
  FName *pFVar14;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_458 [32];
  FName *local_438;
  FName *local_430;
  longlong local_428;
  longlong local_420;
  undefined8 local_418;
  undefined1 local_408 [4];
  TRange<FFrameNumber> local_404;
  undefined1 local_3f4 [8];
  undefined1 local_3ec [12];
  longlong lStack_3e0;
  TRange<FFrameNumber> local_3d8;
  FName local_3c8;
  FMovieSceneFloatChannel local_3c0;
  FMovieSceneFloatChannel local_298;
  FMovieSceneFloatChannel local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_458;
  pTVar1 = &this->VectorParameterNamesAndCurves;
  iVar2 = (this->VectorParameterNamesAndCurves).ArrayNum;
  pFVar11 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar14 = pFVar11 + (longlong)iVar2 * 0x70;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->VectorParameterNamesAndCurves).ArrayNum != iVar2) {
      local_408[0] = 0;
      `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_408);
    }
    EVar12 = (EMovieSceneKeyInterpolation)param_3;
    if (pFVar11 == pFVar14) break;
    if (*pFVar11 == param_1) goto LAB_14677a416;
    pFVar11 = pFVar11 + 0x70;
  }
  local_3c8 = param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_3c0);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_298);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_170);
  pFVar11 = (FName *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar11 <= &local_3c8) &&
     (lVar10 = (longlong)(this->VectorParameterNamesAndCurves).ArrayMax,
     &local_3c8 < pFVar11 + lVar10 * 0x70)) {
    local_420 = (longlong)(this->VectorParameterNamesAndCurves).ArrayNum;
    local_418 = 0x380;
    local_438 = &local_3c8;
    local_430 = pFVar11;
    local_428 = lVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (this->VectorParameterNamesAndCurves).ArrayNum;
  piVar13 = &(this->VectorParameterNamesAndCurves).ArrayMax;
  if (uVar7 == *piVar13) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x380,8,&pTVar1->AllocatorInstance,piVar13);
  }
  EVar12 = (EMovieSceneKeyInterpolation)piVar13;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  (this->VectorParameterNamesAndCurves).ArrayNum = uVar7 + 1;
  lVar10 = (longlong)(int)uVar7 * 0x380;
  *(FName *)(pFVar3 + lVar10) = local_3c8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 8),&local_3c0);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 0x130),&local_298);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pFVar3 + lVar10 + 600),&local_170);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_170);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_298);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_3c0);
  iVar2 = (this->VectorParameterNamesAndCurves).ArrayNum;
  uVar8 = 0;
  if ((int)uVar7 < iVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    EVar12 = 0x50;
    local_438 = (FName *)(longlong)(int)uVar7;
    local_430 = (FName *)(longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar11 = (FName *)((pTVar1->AllocatorInstance).Data + lVar10);
  (**(code **)(this->_padding_ + 0x3a8))(this);
LAB_14677a416:
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 1),local_res18,param_4);
  iVar2 = (int)pFVar11;
  local_438._0_1_ = EVar5;
  AddKeyToChannel((FMovieSceneFloatChannel *)local_3f4,(FFrameNumber)(iVar2 + 8),in_XMM2_Da,EVar12);
  local_438._0_1_ =
       GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x26),local_res18,param_4);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_3f4 + 4),(FFrameNumber)(iVar2 + 0x130),
                  in_XMM2_Da,EVar12);
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x4b),local_res18,param_4);
  local_438 = (FName *)CONCAT71(local_438._1_7_,EVar5);
  AddKeyToChannel((FMovieSceneFloatChannel *)local_3ec,(FFrameNumber)(iVar2 + 600),in_XMM2_Da,EVar12
                 );
  bVar6 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar6) {
    local_3ec._4_8_ = this->_padding_;
    lStack_3e0 = this->_padding_;
    local_404.LowerBound.Type.Value = '\x01';
    local_404.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_404.LowerBound.Value.Value = local_res18[0].Value;
    local_404.UpperBound.Value.Value = local_res18[0].Value;
    pTVar9 = TRange<FFrameNumber>::Hull
                       (&local_3d8,&local_404,(TRange<FFrameNumber> *)(local_3ec + 4));
    (*pcVar4)(this,pTVar9);
  }
  return;
}

// ExternalPopulateEvaluationField @ 14678f460

void __thiscall
UMovieSceneParameterSection::ExternalPopulateEvaluationField
          (UMovieSceneParameterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar7 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  lVar14 = (longlong)(this->ScalarParameterNamesAndCurves).ArrayNum;
  uVar12 = 0;
  iVar11 = (this->Vector2DParameterNamesAndCurves).ArrayNum;
  iVar1 = (this->VectorParameterNamesAndCurves).ArrayNum;
  iVar2 = (this->ColorParameterNamesAndCurves).ArrayNum;
  iVar10 = (this->BoolParameterNamesAndCurves).ArrayNum;
  lVar13 = (longlong)iVar10;
  iVar3 = (this->TransformParameterNamesAndCurves).ArrayNum;
  if (0 < lVar14) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->ScalarParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data;
      if ((*(int *)(pFVar4 + lVar15 + 0x80) != 0) ||
         (pFVar4[lVar15 + 0x9c] == (FScriptContainerElement)0x1)) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                          (param_3,(UObject *)this,uVar12);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar9,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x130;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar12 = 0;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->BoolParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->BoolParameterNamesAndCurves).AllocatorInstance.Data;
      if ((*(int *)(pFVar4 + lVar14 + 0x80) != 0) ||
         (pFVar4[lVar14 + 0x89] == (FScriptContainerElement)0x1)) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)this,uVar12 | 0x1000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar10,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x128;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = (longlong)iVar11;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Vector2DParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data;
      if ((((*(int *)(pFVar4 + lVar14 + 0x80) != 0) ||
           (pFVar4[lVar14 + 0x9c] == (FScriptContainerElement)0x1)) ||
          (*(int *)(pFVar4 + lVar14 + 0x1a8) != 0)) ||
         (pFVar4[lVar14 + 0x1c4] == (FScriptContainerElement)0x1)) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)this,uVar12 | 0x2000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar11,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 600;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = (longlong)iVar1;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->VectorParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->VectorParameterNamesAndCurves).AllocatorInstance.Data;
      if ((((*(int *)(pFVar4 + lVar14 + 0x80) != 0) ||
           (pFVar4[lVar14 + 0x9c] == (FScriptContainerElement)0x1)) ||
          (*(int *)(pFVar4 + lVar14 + 0x1a8) != 0)) ||
         (((pFVar4[lVar14 + 0x1c4] == (FScriptContainerElement)0x1 ||
           (*(int *)(pFVar4 + lVar14 + 0x2d0) != 0)) ||
          (pFVar4[lVar14 + 0x2ec] == (FScriptContainerElement)0x1)))) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)this,uVar12 | 0x3000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar11,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x380;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = (longlong)iVar2;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->ColorParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->ColorParameterNamesAndCurves).AllocatorInstance.Data;
      if ((((*(int *)(pFVar4 + lVar14 + 0x80) != 0) ||
           (pFVar4[lVar14 + 0x9c] == (FScriptContainerElement)0x1)) ||
          (*(int *)(pFVar4 + lVar14 + 0x1a8) != 0)) ||
         (((pFVar4[lVar14 + 0x1c4] == (FScriptContainerElement)0x1 ||
           (*(int *)(pFVar4 + lVar14 + 0x2d0) != 0)) ||
          ((pFVar4[lVar14 + 0x2ec] == (FScriptContainerElement)0x1 ||
           ((*(int *)(pFVar4 + lVar14 + 0x3f8) != 0 ||
            (pFVar4[lVar14 + 0x414] == (FScriptContainerElement)0x1)))))))) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)this,uVar12 | 0x4000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar11,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x4a8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = (longlong)iVar3;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->TransformParameterNamesAndCurves).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
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
      pFVar4 = (this->TransformParameterNamesAndCurves).AllocatorInstance.Data;
      if ((((((((*(int *)(pFVar4 + lVar14 + 0x80) != 0) ||
               (pFVar4[lVar14 + 0x9c] == (FScriptContainerElement)0x1)) ||
              (*(int *)(pFVar4 + lVar14 + 0x1a8) != 0)) ||
             ((pFVar4[lVar14 + 0x1c4] == (FScriptContainerElement)0x1 ||
              (*(int *)(pFVar4 + lVar14 + 0x2d0) != 0)))) ||
            (pFVar4[lVar14 + 0x2ec] == (FScriptContainerElement)0x1)) ||
           (((*(int *)(pFVar4 + lVar14 + 0x3f8) != 0 ||
             (pFVar4[lVar14 + 0x414] == (FScriptContainerElement)0x1)) ||
            ((*(int *)(pFVar4 + lVar14 + 0x520) != 0 ||
             (((pFVar4[lVar14 + 0x53c] == (FScriptContainerElement)0x1 ||
               (*(int *)(pFVar4 + lVar14 + 0x648) != 0)) ||
              (pFVar4[lVar14 + 0x664] == (FScriptContainerElement)0x1)))))))) ||
          ((*(int *)(pFVar4 + lVar14 + 0x770) != 0 ||
           (pFVar4[lVar14 + 0x78c] == (FScriptContainerElement)0x1)))) ||
         ((*(int *)(pFVar4 + lVar14 + 0x898) != 0 ||
          (((pFVar4[lVar14 + 0x8b4] == (FScriptContainerElement)0x1 ||
            (*(int *)(pFVar4 + lVar14 + 0x9c0) != 0)) ||
           (pFVar4[lVar14 + 0x9dc] == (FScriptContainerElement)0x1)))))) {
        if ((0xfffffe < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                               ,0x14,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)this,uVar12 | 0x5000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar11,iVar7);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0xa70;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// GetBoolParameterNamesAndCurves @ 1467946e0

TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetBoolParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->BoolParameterNamesAndCurves;
}

// GetBoolParameterNamesAndCurves @ 1467946f0

TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetBoolParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->BoolParameterNamesAndCurves;
}

// GetColorParameterNamesAndCurves @ 146794a40

TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetColorParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->ColorParameterNamesAndCurves;
}

// GetColorParameterNamesAndCurves @ 146794a50

TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetColorParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->ColorParameterNamesAndCurves;
}

// GetParameterNames @ 146796ca0

void __thiscall
UMovieSceneParameterSection::GetParameterNames
          (UMovieSceneParameterSection *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->ScalarParameterNamesAndCurves).ArrayNum;
  pFVar3 = (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x130;
  while( true ) {
    if ((this->ScalarParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)pFVar3);
    pFVar3 = pFVar3 + 0x130;
  }
  iVar1 = (this->VectorParameterNamesAndCurves).ArrayNum;
  pFVar3 = (this->VectorParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x380;
  while( true ) {
    if ((this->VectorParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVectorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)pFVar3);
    pFVar3 = pFVar3 + 0x380;
  }
  iVar1 = (this->ColorParameterNamesAndCurves).ArrayNum;
  pFVar3 = (this->ColorParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x4a8;
  while( true ) {
    if ((this->ColorParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)pFVar3);
    pFVar3 = pFVar3 + 0x4a8;
  }
  iVar1 = (this->TransformParameterNamesAndCurves).ArrayNum;
  pFVar3 = (this->TransformParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0xa70;
  while( true ) {
    if ((this->TransformParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTransformParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)pFVar3);
    pFVar3 = pFVar3 + 0xa70;
  }
  return;
}

// GetPrivateStaticClass @ 146799220

UClass * __cdecl UMovieSceneParameterSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneParameterSection,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneParameterSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParameterSection.InnerSingleton;
}

// GetScalarParameterNamesAndCurves @ 14679afc0

TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetScalarParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->ScalarParameterNamesAndCurves;
}

// GetScalarParameterNamesAndCurves @ 14679afd0

TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetScalarParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->ScalarParameterNamesAndCurves;
}

// GetTransformParameterNamesAndCurves @ 14679bb20

TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetTransformParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->TransformParameterNamesAndCurves;
}

// GetTransformParameterNamesAndCurves @ 14679bb30

TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetTransformParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->TransformParameterNamesAndCurves;
}

// GetVector2DParameterNamesAndCurves @ 14679c160

TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->Vector2DParameterNamesAndCurves;
}

// GetVector2DParameterNamesAndCurves @ 14679c170

TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->Vector2DParameterNamesAndCurves;
}

// GetVectorParameterNamesAndCurves @ 14679c180

TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetVectorParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->VectorParameterNamesAndCurves;
}

// GetVectorParameterNamesAndCurves @ 14679c190

TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParameterSection::GetVectorParameterNamesAndCurves(UMovieSceneParameterSection *this)

{
  return &this->VectorParameterNamesAndCurves;
}

// ImportEntityImpl @ 1467a0000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneParameterSection::ImportEntityImpl
          (UMovieSceneParameterSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObjectBaseUtility *this_00;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_>
  *this_01;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_02;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar7;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar8;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar9;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> *pTVar10;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar11;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_03;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar12;
  undefined1 uVar13;
  uint uVar14;
  FName *pFVar15;
  undefined8 uVar16;
  undefined1 local_res8 [8];
  UMovieSceneEntitySystemLinker *local_res10;
  FEntityImportParams *local_res18;
  longlong *local_d78;
  FGuid local_d70;
  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_> local_d60;
  FMovieSceneFloatChannel *local_d38;
  FMovieSceneFloatChannel *local_d30;
  FMovieSceneFloatChannel *local_d28;
  FMovieSceneFloatChannel *local_d20;
  FMovieSceneFloatChannel *local_d18;
  FMovieSceneFloatChannel *local_d10;
  FMovieSceneFloatChannel *local_d08;
  FMovieSceneFloatChannel *local_d00;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_cf8;
  undefined1 local_cf6;
  FSourceFloatChannel local_cf0;
  bool local_ce8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_ce0;
  undefined1 local_cde;
  FSourceFloatChannel local_cd8;
  bool local_cd0;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_cc8;
  undefined1 local_cc6;
  FSourceFloatChannel local_cc0;
  bool local_cb8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_cb0;
  undefined1 local_cae;
  FSourceFloatChannel local_ca8;
  bool local_ca0;
  undefined1 local_c98 [64];
  undefined1 local_c58;
  undefined4 local_c50;
  FName *local_c48;
  undefined1 local_c40;
  bool local_c38;
  undefined1 local_c30 [64];
  undefined1 local_bf0;
  undefined4 local_be8;
  FName *local_be0;
  undefined1 local_bd8;
  bool local_bd0;
  undefined1 local_bc8 [64];
  undefined1 local_b88;
  undefined4 local_b80;
  FName *local_b78;
  undefined1 local_b70;
  bool local_b68;
  undefined **local_b60 [3];
  char local_b44;
  undefined2 local_b40;
  undefined8 local_b3c;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_b30;
  FName *local_b28;
  undefined1 local_b20;
  undefined1 local_b18;
  undefined **local_b10 [3];
  char local_af4;
  undefined2 local_af0;
  undefined8 local_aec;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_ae0;
  FName *local_ad8;
  undefined1 local_ad0;
  undefined1 local_ac8;
  TComponentTypeID<FGuid> local_ac0;
  bool bStack_abe;
  undefined1 uStack_abd;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_aa8;
  undefined1 uStack_aa6;
  undefined1 uStack_aa5;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_a90;
  undefined1 uStack_a8e;
  undefined1 uStack_a8d;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_a78;
  undefined1 uStack_a76;
  undefined1 uStack_a75;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_a60;
  undefined1 uStack_a5e;
  undefined1 uStack_a5d;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_a48;
  undefined1 uStack_a46;
  undefined1 uStack_a45;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_a30;
  undefined1 uStack_a2e;
  undefined1 uStack_a2d;
  undefined **local_a18;
  undefined1 local_a10 [40];
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_9e8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_9d0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_9b8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_9a0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_988;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_970;
  undefined1 local_958;
  undefined **local_950;
  undefined1 local_948 [40];
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_920;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_908;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_8f0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_8d8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_8c0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_8a8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_890;
  undefined1 local_878;
  undefined **local_870;
  undefined1 local_868 [40];
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_840;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_828;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_810;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_7f8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_7e0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_7c8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_7b0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_798 [2];
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 local_754;
  undefined4 uStack_750;
  undefined4 local_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 local_704;
  undefined4 uStack_700;
  undefined4 local_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 local_6b4;
  undefined4 uStack_6b0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_688;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_658;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_628;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_5f8;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_5c8;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_598;
  undefined **local_568;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_560;
  undefined1 local_460;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_458;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_408;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_3a0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_320;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_2a0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_220;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_188;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_f0;
  
  local_res10 = param_1;
  local_res18 = param_2;
  pUVar4 = UMovieSceneParameterSectionExtender::StaticClass();
  this_00 = UObjectBaseUtility::GetImplementingOuterObject
                      ((UObjectBaseUtility *)&this[-1]._padding_,pUVar4);
  if (this_00 == (UObjectBaseUtility *)0x0) {
    local_d78 = (longlong *)0x0;
  }
  else {
    local_d78 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
    if (local_d78 != (longlong *)0x0) goto LAB_1467a0081;
  }
  local_res8[0] = 0;
  bVar3 = `UMovieSceneParameterSection::ImportEntityImpl'::__l3::<lambda_1>::operator()(local_res8);
  if (!bVar3) {
    return;
  }
LAB_1467a0081:
  uVar1 = param_2->EntityID;
  uVar14 = uVar1 & 0xffffff;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(local_res18,&local_d70);
  local_d60.Payload._20_1_ = 1;
  bStack_abe = ((local_d70.C != 0 || local_d70.D != 0) || local_d70.B != 0) || local_d70.A != 0;
  local_ac0 = pFVar5->GenericObjectBinding;
  local_d60.bAddMutualComponents = false;
  local_d60.Payload._0_4_ = _local_ac0;
  local_d60._padding_ =
       (longlong)
       &___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE___MovieScene_UE__6B_;
  switch(uVar1 >> 0x18) {
  case 0:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 0x130 + this->_padding_);
    if ((pFVar15[0x10].ComparisonIndex.Value != 0) || ((char)pFVar15[0x13].Number == '\x01')) {
      pTVar10 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                ::Add<FName,FName_const_&>
                          (&local_d60,&local_628,pFVar6->ScalarParameterName,pFVar15);
      local_ae0 = pFVar5->FloatChannel[0];
      local_b10[1]._0_4_ = *(undefined4 *)&pTVar10->field_0x8;
      local_ac8 = pTVar10->field_0x2c;
      local_af4 = pTVar10->field_0x1c;
      if (local_af4 != '\0') {
        local_b10._12_8_ = *(undefined8 *)&pTVar10->field_0xc;
        unique0x1000090c = *(undefined8 *)&pTVar10->field_0x14;
      }
      local_af0 = *(undefined2 *)&pTVar10->field_0x20;
      local_aec = 0xffffffff;
      if (*(int *)&pTVar10->field_0x24 != -1) {
        local_aec = *(undefined8 *)&pTVar10->field_0x24;
      }
      local_b10[0] = &
                     ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_ad0 = 1;
      local_ad8 = pFVar15 + 1;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                          *)local_b10);
    }
    break;
  case 1:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 0x128 + this->_padding_);
    if ((pFVar15[0x10].ComparisonIndex.Value != 0) ||
       (*(char *)((longlong)&pFVar15[0x11].ComparisonIndex.Value + 1) == '\x01')) {
      pTVar10 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                ::Add<FName,FName_const_&>(&local_d60,&local_658,pFVar6->BoolParameterName,pFVar15);
      local_b30 = pFVar5->BoolChannel;
      local_b60[1]._0_4_ = *(undefined4 *)&pTVar10->field_0x8;
      local_b18 = pTVar10->field_0x2c;
      local_b44 = pTVar10->field_0x1c;
      if (local_b44 != '\0') {
        local_b60._12_8_ = *(undefined8 *)&pTVar10->field_0xc;
        unique0x1000092c = *(undefined8 *)&pTVar10->field_0x14;
      }
      local_b40 = *(undefined2 *)&pTVar10->field_0x20;
      local_b3c = 0xffffffff;
      if (*(int *)&pTVar10->field_0x24 != -1) {
        local_b3c = *(undefined8 *)&pTVar10->field_0x24;
      }
      local_b60[0] = &
                     ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_b20 = 1;
      local_b28 = pFVar15 + 1;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
                          *)local_b60);
    }
    break;
  case 2:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 600 + this->_padding_);
    if ((((pFVar15[0x10].ComparisonIndex.Value != 0) || ((char)pFVar15[0x13].Number == '\x01')) ||
        (pFVar15[0x35].ComparisonIndex.Value != 0)) || ((char)pFVar15[0x38].Number == '\x01')) {
      this_01 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                   ::Add<FName,FName_const_&>
                             (&local_d60,&local_5f8,pFVar6->Vector2DParameterName,pFVar15);
      if ((pFVar15[0x10].ComparisonIndex.Value == 0) && ((char)pFVar15[0x13].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_d38 = (FMovieSceneFloatChannel *)(pFVar15 + 1);
      this_02 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_>
                   ::
                   AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                             (this_01,&local_458,pFVar5->FloatChannel[0],&local_d38,bVar3);
      local_d30 = (FMovieSceneFloatChannel *)(pFVar15 + 0x26);
      if ((pFVar15[0x35].ComparisonIndex.Value == 0) && ((char)pFVar15[0x38].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar7 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                         (this_02,&local_408,pFVar5->FloatChannel[1],&local_d30,bVar3);
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,pTVar7);
    }
    break;
  case 3:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 0x380 + this->_padding_);
    if (((((pFVar15[0x10].ComparisonIndex.Value != 0) || ((char)pFVar15[0x13].Number == '\x01')) ||
         (pFVar15[0x35].ComparisonIndex.Value != 0)) ||
        (((char)pFVar15[0x38].Number == '\x01' || (pFVar15[0x5a].ComparisonIndex.Value != 0)))) ||
       ((char)pFVar15[0x5d].Number == '\x01')) {
      pTVar10 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                ::Add<FName,FName_const_&>
                          (&local_d60,&local_5c8,pFVar6->VectorParameterName,pFVar15);
      if ((pFVar15[0x10].ComparisonIndex.Value == 0) && ((char)pFVar15[0x13].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_c98[0x1c] = pTVar10->field_0x1c;
      local_c98._56_8_ = pFVar15 + 1;
      local_c38 = (bool)pTVar10->field_0x2c;
      local_c98._8_4_ = *(undefined4 *)&pTVar10->field_0x8;
      uStack_aa6 = uVar13;
      local_aa8 = pFVar5->FloatChannel[0];
      if (local_c98[0x1c] != '\0') {
        local_798[1].Payload._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
        uStack_768 = *(undefined4 *)&pTVar10->field_0x10;
        uStack_764 = *(undefined4 *)&pTVar10->field_0x14;
        uStack_760 = *(undefined4 *)&pTVar10->field_0x18;
      }
      local_c98._32_2_ = *(undefined2 *)&pTVar10->field_0x20;
      uVar16 = 0xffffffff;
      local_754 = 0xffffffff;
      uStack_750 = 0;
      if (*(int *)&pTVar10->field_0x24 != -1) {
        uVar16 = *(undefined8 *)&pTVar10->field_0x24;
      }
      local_c48 = pFVar15 + 0x26;
      if ((pFVar15[0x35].ComparisonIndex.Value == 0) && ((char)pFVar15[0x38].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      uStack_a8e = uVar13;
      local_a90 = pFVar5->FloatChannel[1];
      if (local_c98[0x1c] != '\0') {
        local_c98._12_4_ = local_798[1].Payload._12_4_;
        local_c98._16_4_ = uStack_768;
        local_c98._20_4_ = uStack_764;
        local_c98._24_4_ = uStack_760;
      }
      local_c98._36_8_ = 0xffffffff;
      if ((int)uVar16 != -1) {
        local_c98._36_8_ = uVar16;
      }
      local_d28 = (FMovieSceneFloatChannel *)(pFVar15 + 0x4b);
      local_c98._48_4_ = _local_aa8;
      local_c50 = _local_a90;
      local_c98._0_8_ =
           &
           ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523__MovieScene_UE__6B_
      ;
      local_c58 = 1;
      local_c40 = 1;
      if ((pFVar15[0x5a].ComparisonIndex.Value == 0) && ((char)pFVar15[0x5d].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar8 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                         ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                           *)local_c98,&local_3a0,pFVar5->FloatChannel[2],&local_d28,bVar3);
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,pTVar8);
    }
    break;
  case 4:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 0x4a8 + this->_padding_);
    if ((((pFVar15[0x10].ComparisonIndex.Value != 0) || ((char)pFVar15[0x13].Number == '\x01')) ||
        (pFVar15[0x35].ComparisonIndex.Value != 0)) ||
       ((((char)pFVar15[0x38].Number == '\x01' || (pFVar15[0x5a].ComparisonIndex.Value != 0)) ||
        (((char)pFVar15[0x5d].Number == '\x01' ||
         ((pFVar15[0x7f].ComparisonIndex.Value != 0 || ((char)pFVar15[0x82].Number == '\x01'))))))))
    {
      pTVar10 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                ::Add<FName,FName_const_&>(&local_d60,&local_598,pFVar6->ColorParameterName,pFVar15)
      ;
      if ((pFVar15[0x10].ComparisonIndex.Value == 0) && ((char)pFVar15[0x13].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_c30[0x1c] = pTVar10->field_0x1c;
      local_c30._56_8_ = pFVar15 + 1;
      local_bd0 = (bool)pTVar10->field_0x2c;
      local_c30._8_4_ = *(undefined4 *)&pTVar10->field_0x8;
      uStack_a76 = uVar13;
      local_a78 = pFVar5->FloatChannel[0];
      if (local_c30[0x1c] != '\0') {
        local_71c = *(undefined4 *)&pTVar10->field_0xc;
        uStack_718 = *(undefined4 *)&pTVar10->field_0x10;
        uStack_714 = *(undefined4 *)&pTVar10->field_0x14;
        uStack_710 = *(undefined4 *)&pTVar10->field_0x18;
      }
      local_c30._32_2_ = *(undefined2 *)&pTVar10->field_0x20;
      uVar16 = 0xffffffff;
      local_704 = 0xffffffff;
      uStack_700 = 0;
      if (*(int *)&pTVar10->field_0x24 != -1) {
        uVar16 = *(undefined8 *)&pTVar10->field_0x24;
      }
      local_be0 = pFVar15 + 0x26;
      if ((pFVar15[0x35].ComparisonIndex.Value == 0) && ((char)pFVar15[0x38].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      uStack_a5e = uVar13;
      local_a60 = pFVar5->FloatChannel[1];
      if (local_c30[0x1c] != '\0') {
        local_c30._12_4_ = local_71c;
        local_c30._16_4_ = uStack_718;
        local_c30._20_4_ = uStack_714;
        local_c30._24_4_ = uStack_710;
      }
      local_d20 = (FMovieSceneFloatChannel *)(pFVar15 + 0x4b);
      local_c30._36_8_ = 0xffffffff;
      if ((int)uVar16 != -1) {
        local_c30._36_8_ = uVar16;
      }
      local_c30._48_4_ = _local_a78;
      local_be8 = _local_a60;
      local_c30._0_8_ =
           &
           ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523__MovieScene_UE__6B_
      ;
      local_bf0 = 1;
      local_bd8 = 1;
      if ((pFVar15[0x5a].ComparisonIndex.Value == 0) && ((char)pFVar15[0x5d].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar11 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   ::
                   AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                             ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                               *)local_c30,&local_320,pFVar5->FloatChannel[2],&local_d20,bVar3);
      local_d18 = (FMovieSceneFloatChannel *)(pFVar15 + 0x70);
      if ((pFVar15[0x7f].ComparisonIndex.Value == 0) && ((char)pFVar15[0x82].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar9 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                         (pTVar11,&local_188,pFVar5->FloatChannel[3],&local_d18,bVar3);
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,pTVar9);
    }
    break;
  case 5:
    if (((int)this->_padding_ <= (int)uVar14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (FName *)((ulonglong)uVar14 * 0xa70 + this->_padding_);
    if (((((pFVar15[0x10].ComparisonIndex.Value != 0) || ((char)pFVar15[0x13].Number == '\x01')) ||
         (pFVar15[0x35].ComparisonIndex.Value != 0)) ||
        (((char)pFVar15[0x38].Number == '\x01' || (pFVar15[0x5a].ComparisonIndex.Value != 0)))) ||
       ((((((char)pFVar15[0x5d].Number == '\x01' ||
           ((pFVar15[0x7f].ComparisonIndex.Value != 0 || ((char)pFVar15[0x82].Number == '\x01'))))
          || (pFVar15[0xa4].ComparisonIndex.Value != 0)) ||
         (((((char)pFVar15[0xa7].Number == '\x01' || (pFVar15[0xc9].ComparisonIndex.Value != 0)) ||
           ((char)pFVar15[0xcc].Number == '\x01')) ||
          (((pFVar15[0xee].ComparisonIndex.Value != 0 || ((char)pFVar15[0xf1].Number == '\x01')) ||
           ((pFVar15[0x113].ComparisonIndex.Value != 0 ||
            (((char)pFVar15[0x116].Number == '\x01' || (pFVar15[0x138].ComparisonIndex.Value != 0)))
            ))))))) || ((char)pFVar15[0x13b].Number == '\x01')))) {
      pTVar10 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                ::Add<FName,FName_const_&>
                          (&local_d60,&local_688,pFVar6->TransformParameterName,pFVar15);
      if ((pFVar15[0x10].ComparisonIndex.Value == 0) && ((char)pFVar15[0x13].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_bc8[0x1c] = pTVar10->field_0x1c;
      local_bc8._56_8_ = pFVar15 + 1;
      local_b68 = (bool)pTVar10->field_0x2c;
      local_bc8._8_4_ = *(undefined4 *)&pTVar10->field_0x8;
      uStack_a46 = uVar13;
      local_a48 = pFVar5->FloatChannel[0];
      if (local_bc8[0x1c] != '\0') {
        local_6cc = *(undefined4 *)&pTVar10->field_0xc;
        uStack_6c8 = *(undefined4 *)&pTVar10->field_0x10;
        uStack_6c4 = *(undefined4 *)&pTVar10->field_0x14;
        uStack_6c0 = *(undefined4 *)&pTVar10->field_0x18;
      }
      local_bc8._32_2_ = *(undefined2 *)&pTVar10->field_0x20;
      uVar16 = 0xffffffff;
      local_6b4 = 0xffffffff;
      uStack_6b0 = 0;
      if (*(int *)&pTVar10->field_0x24 != -1) {
        uVar16 = *(undefined8 *)&pTVar10->field_0x24;
      }
      local_b78 = pFVar15 + 0x26;
      if ((pFVar15[0x35].ComparisonIndex.Value == 0) && ((char)pFVar15[0x38].Number != '\x01')) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      uStack_a2e = uVar13;
      local_a30 = pFVar5->FloatChannel[1];
      if (local_bc8[0x1c] != '\0') {
        local_bc8._12_4_ = local_6cc;
        local_bc8._16_4_ = uStack_6c8;
        local_bc8._20_4_ = uStack_6c4;
        local_bc8._24_4_ = uStack_6c0;
      }
      local_d10 = (FMovieSceneFloatChannel *)(pFVar15 + 0x4b);
      local_bc8._36_8_ = 0xffffffff;
      if ((int)uVar16 != -1) {
        local_bc8._36_8_ = uVar16;
      }
      local_bc8._48_4_ = _local_a48;
      local_b80 = _local_a30;
      local_bc8._0_8_ =
           &
           ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523__MovieScene_UE__6B_
      ;
      local_b88 = 1;
      local_b70 = 1;
      if ((pFVar15[0x5a].ComparisonIndex.Value == 0) && ((char)pFVar15[0x5d].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar11 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   ::
                   AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                             ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                               *)local_bc8,&local_2a0,pFVar5->FloatChannel[2],&local_d10,bVar3);
      local_d08 = (FMovieSceneFloatChannel *)(pFVar15 + 0x70);
      if ((pFVar15[0x7f].ComparisonIndex.Value == 0) && ((char)pFVar15[0x82].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_03 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   ::
                   AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                             (pTVar11,&local_220,pFVar5->FloatChannel[3],&local_d08,bVar3);
      local_d00 = (FMovieSceneFloatChannel *)(pFVar15 + 0x95);
      if ((pFVar15[0xa4].ComparisonIndex.Value == 0) && ((char)pFVar15[0xa7].Number != '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pTVar12 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ::
                AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                          (this_03,&local_f0,pFVar5->FloatChannel[4],&local_d00,bVar3);
      local_cf0.Source = (FMovieSceneFloatChannel *)(pFVar15 + 0xba);
      if ((pFVar15[0xc9].ComparisonIndex.Value == 0) && ((char)pFVar15[0xcc].Number != '\x01')) {
        local_cf6 = 0;
      }
      else {
        local_cf6 = 1;
      }
      local_cf8 = pFVar5->FloatChannel[5];
      uVar13 = pTVar12->field_0xa8;
      local_a18 = &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      local_ce8 = true;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  *)local_a10,ForwardingConstructor,(TAddConditional<FGuid> *)&pTVar12->field_0x8,
                 (TAdd<FName> *)&pTVar12->field_0x20,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar12->field_0x30,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar12->field_0x48,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar12->field_0x60,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar12->field_0x78,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar12->field_0x90,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_cf8);
      local_cd8.Source = (FMovieSceneFloatChannel *)(pFVar15 + 0xdf);
      local_a18 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      if ((pFVar15[0xee].ComparisonIndex.Value == 0) && ((char)pFVar15[0xf1].Number != '\x01')) {
        local_cde = 0;
      }
      else {
        local_cde = 1;
      }
      local_ce0 = pFVar5->FloatChannel[6];
      local_950 = &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      local_cd0 = true;
      local_958 = uVar13;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  *)local_948,ForwardingConstructor,(TAddConditional<FGuid> *)local_a10,
                 (TAdd<FName> *)(local_a10 + 0x18),&local_9e8,&local_9d0,&local_9b8,&local_9a0,
                 &local_988,&local_970,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_ce0);
      local_cc0.Source = (FMovieSceneFloatChannel *)(pFVar15 + 0x104);
      local_950 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      if ((pFVar15[0x113].ComparisonIndex.Value == 0) && ((char)pFVar15[0x116].Number != '\x01')) {
        local_cc6 = 0;
      }
      else {
        local_cc6 = 1;
      }
      local_cc8 = pFVar5->FloatChannel[7];
      local_870 = &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      local_cb8 = true;
      local_878 = uVar13;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  *)local_868,ForwardingConstructor,(TAddConditional<FGuid> *)local_948,
                 (TAdd<FName> *)(local_948 + 0x18),&local_920,&local_908,&local_8f0,&local_8d8,
                 &local_8c0,&local_8a8,&local_890,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_cc8);
      local_ca8.Source = (FMovieSceneFloatChannel *)(pFVar15 + 0x129);
      local_870 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      if ((pFVar15[0x138].ComparisonIndex.Value == 0) && ((char)pFVar15[0x13b].Number != '\x01')) {
        local_cae = 0;
      }
      else {
        local_cae = 1;
      }
      local_cb0 = pFVar5->FloatChannel[8];
      local_568 = &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      local_ca0 = true;
      local_798[1]._padding_._0_1_ = uVar13;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                (&local_560,ForwardingConstructor,(TAddConditional<FGuid> *)local_868,
                 (TAdd<FName> *)(local_868 + 0x18),&local_840,&local_828,&local_810,&local_7f8,
                 &local_7e0,&local_7c8,&local_7b0,local_798,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_cb0);
      local_568 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      local_460 = uVar13;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                          *)&local_568);
    }
  }
  (**(code **)(*local_d78 + 0x10))(local_d78,&this[-1]._padding_,local_res10,local_res18,param_3);
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1680

bool __thiscall
UMovieSceneParameterSection::PopulateEvaluationFieldImpl
          (UMovieSceneParameterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return true;
}

// PostEditImport @ 1467b1f60

void __thiscall UMovieSceneParameterSection::PostEditImport(UMovieSceneParameterSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
                    /* WARNING: Could not recover jumptable at 0x0001467b1f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))(this);
  return;
}

// ReconstructChannelProxy @ 1467b4d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneParameterSection::ReconstructChannelProxy(UMovieSceneParameterSection *this)

{
  int iVar1;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar2;
  ForElementType<FMovieSceneChannelEntry> FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FMovieSceneChannelProxy *local_70;
  FSharedReferencer<1> local_68;
  TSharedRef<FMovieSceneChannelProxy,1> local_60;
  FMovieSceneChannelProxyData local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar1 = (this->ScalarParameterNamesAndCurves).ArrayNum;
  pFVar5 = (this->ScalarParameterNamesAndCurves).AllocatorInstance.Data;
  local_50.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x130;
  local_50.Entries.ArrayNum = 0;
  local_50.Entries.ArrayMax = 1;
  while( true ) {
    if ((this->ScalarParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar5 == pFVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x130;
  }
  iVar1 = (this->BoolParameterNamesAndCurves).ArrayNum;
  pFVar5 = (this->BoolParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x128;
  while( true ) {
    if ((this->BoolParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar5 == pFVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneBoolChannel>
              (&local_50,(FMovieSceneBoolChannel *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x128;
  }
  iVar1 = (this->Vector2DParameterNamesAndCurves).ArrayNum;
  pFVar5 = (this->Vector2DParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 600;
  while( true ) {
    if ((this->Vector2DParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_78);
    }
    if (pFVar5 == pFVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x130));
    pFVar5 = pFVar5 + 600;
  }
  iVar1 = (this->ColorParameterNamesAndCurves).ArrayNum;
  pFVar5 = (this->ColorParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x4a8;
  while( true ) {
    if ((this->ColorParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar5 == pFVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x130));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 600));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x380));
    pFVar5 = pFVar5 + 0x4a8;
  }
  iVar1 = (this->TransformParameterNamesAndCurves).ArrayNum;
  pFVar5 = (this->TransformParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0xa70;
  while( true ) {
    if ((this->TransformParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_78);
    }
    if (pFVar5 == pFVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x130));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 600));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x380));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x4a8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x5d0));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x6f8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x820));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(pFVar5 + 0x948));
    pFVar5 = pFVar5 + 0xa70;
  }
  pTVar2 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>(&local_60,&local_50);
  local_68.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_70 = pTVar2->Object;
  if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->_padding_ != &local_70) {
    this->_padding_ = (longlong)local_70;
    local_70 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FMovieSceneChannelEntry>)&local_50;
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar3 = local_50.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar3,local_50.Entries.ArrayNum);
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_50.Entries.AllocatorInstance.SecondaryData);
  }
  return;
}

// RemoveBoolParameter @ 1467b9190

bool __thiscall
UMovieSceneParameterSection::RemoveBoolParameter(UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->BoolParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->BoolParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->BoolParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->BoolParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x128;
        FMovieSceneBoolChannel::~FMovieSceneBoolChannel((FMovieSceneBoolChannel *)(_Dst + 8));
        iVar7 = (this->BoolParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x128,(longlong)iVar7 * 0x128);
        }
        piVar1 = &(this->BoolParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,&pTVar2->AllocatorInstance,(this->BoolParameterNamesAndCurves).ArrayNum,
                   &(this->BoolParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x128;
    } while ((int)uVar9 < (this->BoolParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveColorParameter @ 1467b9820

bool __thiscall
UMovieSceneParameterSection::RemoveColorParameter(UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->ColorParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->ColorParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->ColorParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->ColorParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x4a8;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 0x380))
        ;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 600));
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 0x130))
        ;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 8));
        iVar7 = (this->ColorParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x4a8,(longlong)iVar7 * 0x4a8);
        }
        piVar1 = &(this->ColorParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4a8,8,&pTVar2->AllocatorInstance,(this->ColorParameterNamesAndCurves).ArrayNum,
                   &(this->ColorParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x4a8;
    } while ((int)uVar9 < (this->ColorParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveScalarParameter @ 1467b9b70

bool __thiscall
UMovieSceneParameterSection::RemoveScalarParameter(UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->ScalarParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->ScalarParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->ScalarParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->ScalarParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x130;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 8));
        iVar7 = (this->ScalarParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x130,(longlong)iVar7 * 0x130);
        }
        piVar1 = &(this->ScalarParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x130,8,&pTVar2->AllocatorInstance,(this->ScalarParameterNamesAndCurves).ArrayNum
                   ,&(this->ScalarParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x130;
    } while ((int)uVar9 < (this->ScalarParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveTransformParameter @ 1467b9d00

bool __thiscall
UMovieSceneParameterSection::RemoveTransformParameter
          (UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FTransformParameterNameAndCurves *this_00;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->TransformParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->TransformParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->TransformParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->TransformParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = (FTransformParameterNameAndCurves *)
                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xa70);
        FTransformParameterNameAndCurves::~FTransformParameterNameAndCurves(this_00);
        iVar7 = (this->TransformParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(this_00,this_00 + 1,(longlong)iVar7 * 0xa70);
        }
        piVar1 = &(this->TransformParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa70,8,&pTVar2->AllocatorInstance,
                   (this->TransformParameterNamesAndCurves).ArrayNum,
                   &(this->TransformParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xa70;
    } while ((int)uVar9 < (this->TransformParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveVector2DParameter @ 1467b9e90

bool __thiscall
UMovieSceneParameterSection::RemoveVector2DParameter
          (UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->Vector2DParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->Vector2DParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->Vector2DParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->Vector2DParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 600;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 0x130))
        ;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 8));
        iVar7 = (this->Vector2DParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 600,(longlong)iVar7 * 600);
        }
        piVar1 = &(this->Vector2DParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (600,8,&pTVar2->AllocatorInstance,(this->Vector2DParameterNamesAndCurves).ArrayNum
                   ,&(this->Vector2DParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 600;
    } while ((int)uVar9 < (this->Vector2DParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveVectorParameter @ 1467ba020

bool __thiscall
UMovieSceneParameterSection::RemoveVectorParameter(UMovieSceneParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->VectorParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->VectorParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->VectorParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->VectorParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x380;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 600));
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 0x130))
        ;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel((FMovieSceneFloatChannel *)(_Dst + 8));
        iVar7 = (this->VectorParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x380,(longlong)iVar7 * 0x380);
        }
        piVar1 = &(this->VectorParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x380,8,&pTVar2->AllocatorInstance,(this->VectorParameterNamesAndCurves).ArrayNum
                   ,&(this->VectorParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x380;
    } while ((int)uVar9 < (this->VectorParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// Serialize @ 1467c14c0

void __thiscall
UMovieSceneParameterSection::Serialize(UMovieSceneParameterSection *this,FArchive *param_1)

{
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// Serialize @ 1467c1500

void __thiscall
UMovieSceneParameterSection::Serialize
          (UMovieSceneParameterSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,pFVar1);
  if ((pFVar1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// StaticRegisterNativesUMovieSceneParameterSection @ 1467c29d0

void __cdecl UMovieSceneParameterSection::StaticRegisterNativesUMovieSceneParameterSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneParameterSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca830

UObject * __thiscall UMovieSceneParameterSection::_getUObject(UMovieSceneParameterSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execAddBoolParameterKey @ 1467ca8c0

void __cdecl
UMovieSceneParameterSection::execAddBoolParameterKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FFrameNumber local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddBoolParameterKey((UMovieSceneParameterSection *)param_1,local_18[0],local_res20[0],
                      local_res10[0] != 0);
  return;
}

// execAddColorParameterKey @ 1467cacc0

void __cdecl
UMovieSceneParameterSection::execAddColorParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMovieSceneKeyInterpolation local_res10 [8];
  FFrameNumber local_res20 [2];
  FName local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_38[0].ComparisonIndex.Value = 0;
  local_38[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = Auto;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddColorParameterKey
            ((UMovieSceneParameterSection *)param_1,local_38[0],local_res20[0],
             (FLinearColor *)&local_18._s_0,local_res10[0]);
  return;
}

// execAddScalarParameterKey @ 1467cb060

void __cdecl
UMovieSceneParameterSection::execAddScalarParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMovieSceneKeyInterpolation local_res10 [8];
  float local_res20 [2];
  FFrameNumber local_18 [2];
  FName local_10;
  
  local_10.ComparisonIndex.Value = 0;
  local_10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  local_18[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Auto;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddScalarParameterKey
            ((UMovieSceneParameterSection *)param_1,local_10,local_18[0],local_res20[0],
             local_res10[0]);
  return;
}

// execAddTransformParameterKey @ 1467cb1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneParameterSection::execAddTransformParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_c8 [32];
  EMovieSceneKeyInterpolation local_98 [4];
  FFrameNumber local_94;
  FName local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_94.Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98[0] = Auto;
  pTVar12 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddTransformParameterKey
            ((UMovieSceneParameterSection *)param_1,local_90,local_94,pTVar12,local_98[0]);
  return;
}

// execAddVector2DParameterKey @ 1467cb3a0

void __cdecl
UMovieSceneParameterSection::execAddVector2DParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMovieSceneKeyInterpolation local_res10 [8];
  FFrameNumber local_res20 [2];
  FName local_38 [2];
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_38[0].ComparisonIndex.Value = 0;
  local_38[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = Auto;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddVector2DParameterKey
            ((UMovieSceneParameterSection *)param_1,local_38[0],local_res20[0],
             (TVector2<double> *)&local_18._s_0,local_res10[0]);
  return;
}

// execAddVectorParameterKey @ 1467cb510

void __cdecl
UMovieSceneParameterSection::execAddVectorParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMovieSceneKeyInterpolation local_res10 [8];
  FFrameNumber local_res20 [2];
  FName local_48;
  double local_40;
  double dStack_38;
  double local_30;
  TVector<double>_u_0 local_28;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = Auto;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.X = local_40;
  local_28._s_0.Y = dStack_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_30;
  AddVectorParameterKey
            ((UMovieSceneParameterSection *)param_1,local_48,local_res20[0],
             (TVector<double> *)&local_28._s_0,local_res10[0]);
  return;
}

// execGetParameterNames @ 1467cb850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneParameterSection::execGetParameterNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this;
  bool *pbVar3;
  bool *pbVar4;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [4];
  FName local_94;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  this = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88;
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    this = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[7].field_0x18;
  pbVar3 = *(bool **)&param_1[7].field_0x10;
  pbVar4 = pbVar3 + (longlong)iVar1 * 0x130;
  while( true ) {
    if (*(int *)&param_1[7].field_0x18 != iVar1) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pbVar3 == pbVar4) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (this,&local_94,pbVar3);
    pbVar3 = pbVar3 + 0x130;
  }
  iVar1 = *(int *)&param_1[8].field_0x10;
  pbVar3 = *(bool **)&param_1[8].field_0x8;
  pbVar4 = pbVar3 + (longlong)iVar1 * 0x380;
  while( true ) {
    if (*(int *)&param_1[8].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FVectorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pbVar3 == pbVar4) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (this,&local_94,pbVar3);
    pbVar3 = pbVar3 + 0x380;
  }
  iVar1 = *(int *)&param_1[8].field_0x20;
  pbVar3 = *(bool **)&param_1[8].field_0x18;
  pbVar4 = pbVar3 + (longlong)iVar1 * 0x4a8;
  while( true ) {
    if (*(int *)&param_1[8].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pbVar3 == pbVar4) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (this,&local_94,pbVar3);
    pbVar3 = pbVar3 + 0x4a8;
  }
  iVar1 = *(int *)&param_1[9].field_0x8;
  pbVar3 = *(bool **)(param_1 + 9);
  pbVar4 = pbVar3 + (longlong)iVar1 * 0xa70;
  while( true ) {
    if (*(int *)&param_1[9].field_0x8 != iVar1) {
      `TCheckedPointerIterator<FTransformParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pbVar3 == pbVar4) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (this,&local_94,pbVar3);
    pbVar3 = pbVar3 + 0xa70;
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execRemoveBoolParameter @ 1467cbd50

void __cdecl
UMovieSceneParameterSection::execRemoveBoolParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *_Dst;
  ulonglong uVar10;
  uint uVar11;
  longlong local_res8;
  
  uVar9 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)&param_1[7].field_0x8) {
    pUVar1 = param_1 + 7;
    uVar10 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&param_1[7].field_0x8) {
        uVar6 = uVar11;
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
      if (*(longlong *)(*(FScriptContainerElement **)pUVar1 + uVar10) == lVar4) {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[7].field_0x8) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = *(FScriptContainerElement **)pUVar1 + (longlong)(int)uVar8 * 0x128;
        FMovieSceneBoolChannel::~FMovieSceneBoolChannel((FMovieSceneBoolChannel *)(_Dst + 8));
        iVar7 = *(int *)&param_1[7].field_0x8 + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x128,(longlong)iVar7 * 0x128);
        }
        *(int *)&param_1[7].field_0x8 = *(int *)&param_1[7].field_0x8 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,(ForAnyElementType *)pUVar1,*(int *)&param_1[7].field_0x8,
                   (int *)&param_1[7].field_0xc);
        (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1);
        *(undefined1 *)param_3 = 1;
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x128;
    } while ((int)(uVar8 + 1) < *(int *)&param_1[7].field_0x8);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveColorParameter @ 1467cc010

void __cdecl
UMovieSceneParameterSection::execRemoveColorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveColorParameter((UMovieSceneParameterSection *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveScalarParameter @ 1467cc170

void __cdecl
UMovieSceneParameterSection::execRemoveScalarParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  void *_Dst;
  ulonglong uVar10;
  uint uVar11;
  longlong local_res8;
  
  uVar9 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)&param_1[7].field_0x18) {
    puVar1 = &param_1[7].field_0x10;
    uVar10 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&param_1[7].field_0x18) {
        uVar6 = uVar11;
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
      if (*(longlong *)(*(longlong *)puVar1 + uVar10) == lVar4) {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[7].field_0x18) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 0x130);
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)((longlong)_Dst + 8));
        iVar7 = *(int *)&param_1[7].field_0x18 + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x130),(longlong)iVar7 * 0x130);
        }
        *(int *)&param_1[7].field_0x18 = *(int *)&param_1[7].field_0x18 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x130,8,(ForAnyElementType *)puVar1,*(int *)&param_1[7].field_0x18,
                   (int *)&param_1[7].field_0x1c);
        (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1);
        *(undefined1 *)param_3 = 1;
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x130;
    } while ((int)(uVar8 + 1) < *(int *)&param_1[7].field_0x18);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveTransformParameter @ 1467cc370

void __cdecl
UMovieSceneParameterSection::execRemoveTransformParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FTransformParameterNameAndCurves *this;
  ulonglong uVar10;
  uint uVar11;
  longlong local_res8;
  
  uVar9 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)&param_1[9].field_0x8) {
    pUVar1 = param_1 + 9;
    uVar10 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&param_1[9].field_0x8) {
        uVar6 = uVar11;
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
      if (*(longlong *)(*(FScriptContainerElement **)pUVar1 + uVar10) == lVar4) {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[9].field_0x8) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this = (FTransformParameterNameAndCurves *)
               (*(FScriptContainerElement **)pUVar1 + (longlong)(int)uVar8 * 0xa70);
        FTransformParameterNameAndCurves::~FTransformParameterNameAndCurves(this);
        iVar7 = *(int *)&param_1[9].field_0x8 + ~uVar8;
        if (iVar7 != 0) {
          memmove(this,this + 1,(longlong)iVar7 * 0xa70);
        }
        *(int *)&param_1[9].field_0x8 = *(int *)&param_1[9].field_0x8 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa70,8,(ForAnyElementType *)pUVar1,*(int *)&param_1[9].field_0x8,
                   (int *)&param_1[9].field_0xc);
        (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1);
        *(undefined1 *)param_3 = 1;
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0xa70;
    } while ((int)(uVar8 + 1) < *(int *)&param_1[9].field_0x8);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveVector2DParameter @ 1467cc570

void __cdecl
UMovieSceneParameterSection::execRemoveVector2DParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveVector2DParameter((UMovieSceneParameterSection *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveVectorParameter @ 1467cc610

void __cdecl
UMovieSceneParameterSection::execRemoveVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveVectorParameter((UMovieSceneParameterSection *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// operator() @ 1504f3570

bool __thiscall
`UMovieSceneParameterSection::ImportEntityImpl'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6075324548356505009>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6075324548356505009>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

