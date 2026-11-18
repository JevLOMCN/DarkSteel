// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 20

// StaticClass @ 146725470

UClass * __cdecl UMovieSceneComponentMaterialParameterSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.
                InnerSingleton,StaticRegisterNativesUMovieSceneComponentMaterialParameterSection,
               0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneComponentMaterialParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialParameterSection>,
               local_res8,UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.InnerSingleton;
}

// UMovieSceneComponentMaterialParameterSection @ 146763330

UMovieSceneComponentMaterialParameterSection * __thiscall
UMovieSceneComponentMaterialParameterSection::UMovieSceneComponentMaterialParameterSection
          (UMovieSceneComponentMaterialParameterSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ScalarParameterInfosAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterInfosAndCurves).ArrayNum = 0;
  (this->ScalarParameterInfosAndCurves).ArrayMax = 0;
  (this->ColorParameterInfosAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorParameterInfosAndCurves).ArrayNum = 0;
  (this->ColorParameterInfosAndCurves).ArrayMax = 0;
  return this;
}

// UMovieSceneComponentMaterialParameterSection @ 146763390

UMovieSceneComponentMaterialParameterSection * __thiscall
UMovieSceneComponentMaterialParameterSection::UMovieSceneComponentMaterialParameterSection
          (UMovieSceneComponentMaterialParameterSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ScalarParameterInfosAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterInfosAndCurves).ArrayNum = 0;
  (this->ScalarParameterInfosAndCurves).ArrayMax = 0;
  (this->ColorParameterInfosAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorParameterInfosAndCurves).ArrayNum = 0;
  (this->ColorParameterInfosAndCurves).ArrayMax = 0;
  *(undefined2 *)&this->_padding_ = 0x201;
  return this;
}

// ~UMovieSceneComponentMaterialParameterSection @ 14676a170

void __thiscall
UMovieSceneComponentMaterialParameterSection::~UMovieSceneComponentMaterialParameterSection
          (UMovieSceneComponentMaterialParameterSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  DestructItems<FColorMaterialParameterInfoAndCurves,int>
            ((FColorMaterialParameterInfoAndCurves *)
             (this->ColorParameterInfosAndCurves).AllocatorInstance.Data,
             (this->ColorParameterInfosAndCurves).ArrayNum);
  pFVar1 = (this->ColorParameterInfosAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScalarMaterialParameterInfoAndCurve,int>
            ((FScalarMaterialParameterInfoAndCurve *)
             (this->ScalarParameterInfosAndCurves).AllocatorInstance.Data,
             (this->ScalarParameterInfosAndCurves).ArrayNum);
  pFVar1 = (this->ScalarParameterInfosAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// AddColorParameterKey @ 146775b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneComponentMaterialParameterSection::AddColorParameterKey
          (UMovieSceneComponentMaterialParameterSection *this,FMaterialParameterInfo *param_1,
          FFrameNumber param_2,FLinearColor *param_3,FString *param_4,FString *param_5,
          FParameterChannelNames *param_6,EMovieSceneKeyInterpolation param_7)

{
  TArray<FColorMaterialParameterInfoAndCurves,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FColorMaterialParameterInfoAndCurves *pFVar3;
  code *pcVar4;
  EMovieSceneKeyInterpolation EVar5;
  bool bVar6;
  uint uVar7;
  TRange<FFrameNumber> *pTVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  EMovieSceneKeyInterpolation EVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_598 [32];
  FColorMaterialParameterInfoAndCurves *local_578;
  FColorMaterialParameterInfoAndCurves *local_570;
  longlong local_568;
  longlong local_560;
  undefined8 local_558;
  undefined1 local_548 [4];
  undefined8 local_544;
  TRange<FFrameNumber> local_53c;
  undefined1 local_52c [8];
  undefined1 local_524 [8];
  TRange<FFrameNumber> local_51c;
  TRange<FFrameNumber> local_50c;
  FColorMaterialParameterInfoAndCurves local_4f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_598;
  pTVar1 = &this->ColorParameterInfosAndCurves;
  iVar2 = (this->ColorParameterInfosAndCurves).ArrayNum;
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  pFVar14 = pFVar11 + (longlong)iVar2 * 0x4b0;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->ColorParameterInfosAndCurves).ArrayNum != iVar2) {
      local_548[0] = 0;
      `TCheckedPointerIterator<FColorMaterialParameterInfoAndCurves,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_548);
    }
    EVar12 = (EMovieSceneKeyInterpolation)param_3;
    if (pFVar11 == pFVar14) break;
    if ((((*(uint *)pFVar11 == (param_1->Name).ComparisonIndex.Value) &&
         (*(uint *)(pFVar11 + 4) == (param_1->Name).Number)) &&
        (pFVar11[8] == (FScriptContainerElement)(param_1->Association).Value)) &&
       (*(int *)(pFVar11 + 0xc) == param_1->Index)) goto LAB_146775d58;
    pFVar11 = pFVar11 + 0x4b0;
  }
  local_4f8.ParameterInfo.Association.Value = '\x02';
  local_544 = 0;
  local_4f8.ParameterInfo.Name.ComparisonIndex.Value = 0;
  local_4f8.ParameterInfo.Name.Number = 0;
  local_4f8.ParameterInfo.Index = -1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f8.RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f8.GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f8.BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f8.AlphaCurve);
  local_4f8.ParameterInfo.Name = param_1->Name;
  local_4f8.ParameterInfo.Association.Value = (param_1->Association).Value;
  local_4f8.ParameterInfo._9_3_ = *(undefined3 *)&param_1->field_0x9;
  local_4f8.ParameterInfo.Index = param_1->Index;
  pFVar3 = (FColorMaterialParameterInfoAndCurves *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= &local_4f8) &&
     (lVar9 = (longlong)(this->ColorParameterInfosAndCurves).ArrayMax, &local_4f8 < pFVar3 + lVar9))
  {
    local_560 = (longlong)(this->ColorParameterInfosAndCurves).ArrayNum;
    local_558 = 0x4b0;
    local_578 = &local_4f8;
    local_570 = pFVar3;
    local_568 = lVar9;
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
  uVar7 = (this->ColorParameterInfosAndCurves).ArrayNum;
  piVar13 = &(this->ColorParameterInfosAndCurves).ArrayMax;
  if (uVar7 == *piVar13) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4b0,8,&pTVar1->AllocatorInstance,piVar13);
  }
  EVar12 = (EMovieSceneKeyInterpolation)piVar13;
  (this->ColorParameterInfosAndCurves).ArrayNum = uVar7 + 1;
  lVar9 = (longlong)(int)uVar7 * 0x4b0;
  FColorMaterialParameterInfoAndCurves::FColorMaterialParameterInfoAndCurves
            ((FColorMaterialParameterInfoAndCurves *)((pTVar1->AllocatorInstance).Data + lVar9),
             &local_4f8);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f8.AlphaCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f8.BlueCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f8.GreenCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f8.RedCurve);
  iVar2 = (this->ColorParameterInfosAndCurves).ArrayNum;
  uVar10 = 0;
  if ((int)uVar7 < iVar2) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    EVar12 = 0x50;
    local_578 = (FColorMaterialParameterInfoAndCurves *)(longlong)(int)uVar7;
    local_570 = (FColorMaterialParameterInfoAndCurves *)(longlong)iVar2;
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
  pFVar11 = (pTVar1->AllocatorInstance).Data + lVar9;
  (**(code **)(this->_padding_ + 0x3a0))(this);
LAB_146775d58:
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x10),local_res18,param_7);
  iVar2 = (int)pFVar11;
  local_578._0_1_ = EVar5;
  AddKeyToChannel((FMovieSceneFloatChannel *)local_52c,(FFrameNumber)(iVar2 + 0x10),in_XMM2_Da,
                  EVar12);
  local_578._0_1_ =
       GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x138),local_res18,param_7);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_52c + 4),(FFrameNumber)(iVar2 + 0x138),
                  in_XMM2_Da,EVar12);
  local_578._0_1_ =
       GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x260),local_res18,param_7);
  AddKeyToChannel((FMovieSceneFloatChannel *)local_524,(FFrameNumber)(iVar2 + 0x260),in_XMM2_Da,
                  EVar12);
  EVar5 = GetInterpolationMode((FMovieSceneFloatChannel *)(pFVar11 + 0x388),local_res18,param_7);
  local_578 = (FColorMaterialParameterInfoAndCurves *)CONCAT71(local_578._1_7_,EVar5);
  AddKeyToChannel((FMovieSceneFloatChannel *)(local_524 + 4),(FFrameNumber)(iVar2 + 0x388),
                  in_XMM2_Da,EVar12);
  bVar6 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar6) {
    local_51c.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_51c.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_53c.LowerBound.Type.Value = '\x01';
    local_53c.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_53c.LowerBound.Value.Value = local_res18[0].Value;
    local_53c.UpperBound.Value.Value = local_res18[0].Value;
    pTVar8 = TRange<FFrameNumber>::Hull(&local_50c,&local_53c,&local_51c);
    (*pcVar4)(this,pTVar8);
  }
  return;
}

// AddScalarParameterKey @ 146778760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneComponentMaterialParameterSection::AddScalarParameterKey
          (UMovieSceneComponentMaterialParameterSection *this,FMaterialParameterInfo *param_1,
          FFrameNumber param_2,float param_3,FString *param_4,FString *param_5,
          EMovieSceneKeyInterpolation param_6)

{
  TArray<FScalarMaterialParameterInfoAndCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneKeyInterpolation EVar6;
  uint uVar7;
  TRange<FFrameNumber> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FMovieSceneFloatChannel *pFVar11;
  EMovieSceneKeyInterpolation EVar12;
  undefined8 in_R9;
  int *piVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  undefined1 auStack_218 [32];
  FName *local_1f8;
  FName *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [4];
  undefined8 local_1c4;
  TRange<FFrameNumber> local_1bc;
  undefined1 local_1ac [12];
  longlong lStack_1a0;
  TRange<FFrameNumber> local_198;
  FName local_188;
  FName FStack_180;
  FMovieSceneFloatChannel local_178;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_218;
  pTVar1 = &this->ScalarParameterInfosAndCurves;
  iVar2 = (this->ScalarParameterInfosAndCurves).ArrayNum;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  pFVar15 = pFVar10 + (longlong)iVar2 * 0x138;
  local_res18[0].Value = param_2.Value;
  while( true ) {
    if ((this->ScalarParameterInfosAndCurves).ArrayNum != iVar2) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<FScalarMaterialParameterInfoAndCurve,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1c8);
    }
    EVar12 = (EMovieSceneKeyInterpolation)in_R9;
    if (pFVar10 == pFVar15) goto LAB_146778804;
    if ((((*(uint *)pFVar10 == (param_1->Name).ComparisonIndex.Value) &&
         (*(uint *)(pFVar10 + 4) == (param_1->Name).Number)) &&
        (pFVar10[8] == (FScriptContainerElement)(param_1->Association).Value)) &&
       (*(int *)(pFVar10 + 0xc) == param_1->Index)) break;
    pFVar10 = pFVar10 + 0x138;
  }
  pFVar11 = (FMovieSceneFloatChannel *)(pFVar10 + 0x10);
  if (pFVar11 == (FMovieSceneFloatChannel *)0x0) {
LAB_146778804:
    FStack_180.ComparisonIndex.Value._0_1_ = 2;
    local_1c4 = 0;
    local_188.ComparisonIndex.Value = 0;
    local_188.Number = 0;
    FStack_180.Number = 0xffffffff;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_178);
    local_188 = param_1->Name;
    FStack_180 = *(FName *)&param_1->Association;
    pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= &local_188) &&
       (lVar9 = (longlong)(this->ScalarParameterInfosAndCurves).ArrayMax,
       &local_188 < pFVar3 + lVar9 * 0x27)) {
      local_1e0 = (longlong)(this->ScalarParameterInfosAndCurves).ArrayNum;
      local_1d8 = 0x138;
      local_1f8 = &local_188;
      local_1f0 = pFVar3;
      local_1e8 = lVar9;
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
    uVar7 = (this->ScalarParameterInfosAndCurves).ArrayNum;
    piVar13 = &(this->ScalarParameterInfosAndCurves).ArrayMax;
    if (uVar7 == *piVar13) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x138,8,&pTVar1->AllocatorInstance,piVar13);
    }
    EVar12 = (EMovieSceneKeyInterpolation)piVar13;
    (this->ScalarParameterInfosAndCurves).ArrayNum = uVar7 + 1;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar7 * 0x138;
    pFVar3 = (FName *)(pFVar10 + lVar9);
    *pFVar3 = local_188;
    pFVar3[1] = FStack_180;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)(pFVar10 + lVar9 + 0x10),&local_178);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_178);
    iVar2 = (this->ScalarParameterInfosAndCurves).ArrayNum;
    uVar14 = 0;
    if ((int)uVar7 < iVar2) {
      uVar14 = ~uVar7 >> 0x1f;
    }
    if (uVar14 == 0) {
      EVar12 = 0x50;
      local_1f8 = (FName *)(longlong)(int)uVar7;
      local_1f0 = (FName *)(longlong)iVar2;
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
    pFVar11 = (FMovieSceneFloatChannel *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x10);
    (**(code **)(this->_padding_ + 0x3a0))(this);
  }
  EVar6 = GetInterpolationMode(pFVar11,local_res18,param_6);
  local_1f8 = (FName *)CONCAT71(local_1f8._1_7_,EVar6);
  AddKeyToChannel((FMovieSceneFloatChannel *)local_1ac,(FFrameNumber)(int)pFVar11,in_XMM2_Da,EVar12)
  ;
  bVar5 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar5) {
    local_1ac._4_8_ = this->_padding_;
    lStack_1a0 = this->_padding_;
    local_1bc.LowerBound.Type.Value = '\x01';
    local_1bc.UpperBound.Type.Value = '\x01';
    pcVar4 = *(code **)(this->_padding_ + 0x2c8);
    local_1bc.LowerBound.Value.Value = local_res18[0].Value;
    local_1bc.UpperBound.Value.Value = local_res18[0].Value;
    pTVar8 = TRange<FFrameNumber>::Hull
                       (&local_198,&local_1bc,(TRange<FFrameNumber> *)(local_1ac + 4));
    (*pcVar4)(this,pTVar8);
  }
  return;
}

// CacheChannelProxy @ 14677e440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieSceneComponentMaterialParameterSection::CacheChannelProxy
          (UMovieSceneComponentMaterialParameterSection *this)

{
  int iVar1;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar2;
  ForElementType<FMovieSceneChannelEntry> FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  FMovieSceneChannelProxy *local_60;
  FSharedReferencer<1> local_58;
  TSharedRef<FMovieSceneChannelProxy,1> local_50;
  FMovieSceneChannelProxyData local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  iVar1 = (this->ScalarParameterInfosAndCurves).ArrayNum;
  pFVar4 = (this->ScalarParameterInfosAndCurves).AllocatorInstance.Data;
  local_40.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x138;
  local_40.Entries.ArrayNum = 0;
  local_40.Entries.ArrayMax = 1;
  while( true ) {
    if ((this->ScalarParameterInfosAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FScalarMaterialParameterInfoAndCurve,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_68);
    }
    if (pFVar4 == pFVar5) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_40,(FMovieSceneFloatChannel *)(pFVar4 + 0x10));
    pFVar4 = pFVar4 + 0x138;
  }
  iVar1 = (this->ColorParameterInfosAndCurves).ArrayNum;
  pFVar4 = (this->ColorParameterInfosAndCurves).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x4b0;
  while( true ) {
    if ((this->ColorParameterInfosAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FColorMaterialParameterInfoAndCurves,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_68);
    }
    if (pFVar4 == pFVar5) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_40,(FMovieSceneFloatChannel *)(pFVar4 + 0x10));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_40,(FMovieSceneFloatChannel *)(pFVar4 + 0x138));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_40,(FMovieSceneFloatChannel *)(pFVar4 + 0x260));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_40,(FMovieSceneFloatChannel *)(pFVar4 + 0x388));
    pFVar4 = pFVar4 + 0x4b0;
  }
  pTVar2 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>(&local_50,&local_40);
  local_58.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_60 = pTVar2->Object;
  if (local_58.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_58.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->_padding_ != &local_60) {
    this->_padding_ = (longlong)local_60;
    local_60 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FMovieSceneChannelEntry>)&local_40;
  if (local_40.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar3 = local_40.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar3,local_40.Entries.ArrayNum);
  if (local_40.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_40.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// ExternalPopulateEvaluationField @ 14678ee40

void __thiscall
UMovieSceneComponentMaterialParameterSection::ExternalPopulateEvaluationField
          (UMovieSceneComponentMaterialParameterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  iVar6 = (this->ScalarParameterInfosAndCurves).ArrayNum;
  uVar8 = 0;
  iVar1 = (this->ColorParameterInfosAndCurves).ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    do {
      if (0xfffffe < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneComponentMaterialParameterSection.cpp"
                           ,0x17,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity(param_3,(UObject *)this,uVar7)
      ;
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar5,iVar4);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  if (0 < iVar1) {
    do {
      if (0xfffffe < uVar8) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneComponentMaterialParameterSection.cpp"
                           ,0x17,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar6 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar8 | 0x1000000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar6,iVar4);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar1);
  }
  return;
}

// GetPrivateStaticClass @ 1467981a0

UClass * __cdecl UMovieSceneComponentMaterialParameterSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.
                InnerSingleton,StaticRegisterNativesUMovieSceneComponentMaterialParameterSection,
               0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneComponentMaterialParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialParameterSection>,
               local_res8,UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.InnerSingleton;
}

// ImportEntityImpl @ 14679dc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialParameterSection::ImportEntityImpl
          (UMovieSceneComponentMaterialParameterSection *this,UMovieSceneEntitySystemLinker *param_1
          ,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
  *this_00;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  *pTVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ushort local_res8;
  bool bStackX_a;
  undefined1 uStackX_b;
  FComponentMaterialInfo local_378;
  FGuid local_368;
  undefined4 local_358;
  uint uStack_354;
  uint uStack_350;
  uint uStack_34c;
  TComponentTypeID<FGuid> local_340;
  bool bStack_33e;
  undefined1 uStack_33d;
  undefined **local_328;
  undefined1 local_320 [44];
  undefined1 local_2f4;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_2f0;
  undefined8 *local_2e8;
  undefined1 local_2e0;
  TComponentTypeID<FComponentMaterialInfo> local_2d8;
  FName local_2d4;
  longlong lStack_2cc;
  undefined1 local_2c4;
  undefined4 local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b0 [52];
  undefined1 local_27c;
  undefined4 local_278;
  undefined8 *local_270;
  undefined1 local_268;
  undefined4 local_260;
  undefined8 *local_258;
  undefined1 local_250;
  undefined4 local_248;
  undefined8 *local_240;
  undefined1 local_238;
  undefined4 local_230;
  undefined8 *local_228;
  undefined1 local_220;
  bool local_218;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_210;
  undefined1 uStack_20e;
  undefined1 uStack_20d;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_1f8;
  undefined2 uStack_1f6;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_1e0;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  uint local_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
  local_1a0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  local_e8;
  
  uVar1 = param_2->EntityID;
  uVar11 = uVar1 & 0xffffff;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_368);
  local_378.MaterialSlotName.ComparisonIndex.Value = 0;
  local_378.MaterialSlotName.Number = 0;
  local_378._8_8_ = (ulonglong)(uint3)local_378._13_3_ << 0x28;
  pUVar6 = Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1]._padding_,pUVar6);
  if (pUVar7 != (UObject *)0x0) {
    local_378.MaterialSlotName.ComparisonIndex.Value = *(uint *)&pUVar7[8].field_0x0;
    local_378.MaterialSlotName.Number = *(uint *)&pUVar7[8].field_0x4;
    local_378._8_8_ = *(undefined8 *)&pUVar7[8].field_0x8;
  }
  local_358 = local_368.A;
  uStack_354 = local_368.B;
  uStack_350 = local_368.C;
  uStack_34c = local_368.D;
  bStack_33e = ((local_368.B != 0 || local_368.A != 0) || local_368.C != 0) || local_368.D != 0;
  local_340 = pFVar4->GenericObjectBinding;
  local_1bc = local_368.A;
  uStack_1b8 = local_368.B;
  uStack_1b4 = local_368.C;
  uStack_1b0 = local_368.D;
  if (uVar1 >> 0x18 == 0) {
    if (((int)this->_padding_ <= (int)uVar11) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar10 = (undefined8 *)((ulonglong)uVar11 * 0x138 + this->_padding_);
    if ((*(int *)(puVar10 + 0x11) != 0) || (*(char *)((longlong)puVar10 + 0xa4) == '\x01')) {
      bStackX_a = ((ulonglong)this[-1].ScalarParameterInfosAndCurves.AllocatorInstance.Data &
                  0xff0000) == 0;
      local_res8 = (pFVar4->Tags).AbsoluteBlend.Value;
      local_320._0_4_ = _local_340;
      local_320._24_2_ = pFVar5->ScalarMaterialParameterInfo;
      local_2f0 = pFVar4->FloatChannel[0];
      local_2e8 = puVar10 + 2;
      local_2d8 = pFVar5->ComponentMaterialInfo;
      local_320._28_8_ = *puVar10;
      local_320._36_8_ = puVar10[1];
      local_2c0 = _local_res8;
      local_328 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMaterialParameterInfo___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFComponentMaterialInfo___23_UFAddConditional_23__MovieScene_UE__6B_
      ;
      local_320[0x14] = 1;
      local_2f4 = 1;
      local_2e0 = 1;
      local_2c4 = 1;
      local_2d4 = local_378.MaterialSlotName;
      lStack_2cc._0_4_ = local_378.MaterialSlotIndex;
      lStack_2cc._4_1_ = local_378.MaterialType;
      lStack_2cc._5_3_ = local_378._13_3_;
      local_2b8 = 0;
      local_320._4_4_ = local_358;
      local_320._8_4_ = uStack_354;
      local_320._12_4_ = uStack_350;
      local_320._16_4_ = uStack_34c;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
                          *)&local_328);
    }
  }
  else if (uVar1 >> 0x18 == 1) {
    if (((int)this->_padding_ <= (int)uVar11) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2b0._12_4_ = local_358;
    puVar10 = (undefined8 *)((ulonglong)uVar11 * 0x4b0 + this->_padding_);
    if (((((*(int *)(puVar10 + 0x11) != 0) || (*(char *)((longlong)puVar10 + 0xa4) == '\x01')) ||
         (*(int *)(puVar10 + 0x36) != 0)) ||
        ((*(char *)((longlong)puVar10 + 0x1cc) == '\x01' || (*(int *)(puVar10 + 0x5b) != 0)))) ||
       ((*(char *)((longlong)puVar10 + 0x2f4) == '\x01' ||
        ((*(int *)(puVar10 + 0x80) != 0 || (*(char *)((longlong)puVar10 + 0x41c) == '\x01')))))) {
      local_2b0._32_2_ = pFVar5->ColorMaterialParameterInfo;
      if ((*(int *)(puVar10 + 0x11) == 0) && (*(char *)((longlong)puVar10 + 0xa4) != '\x01')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      local_270 = puVar10 + 2;
      local_258 = puVar10 + 0x27;
      local_358._2_1_ = uVar9;
      local_358._0_2_ = pFVar4->FloatChannel[0];
      if ((*(int *)(puVar10 + 0x36) == 0) && (*(char *)((longlong)puVar10 + 0x1cc) != '\x01')) {
        uStack_20e = 0;
      }
      else {
        uStack_20e = 1;
      }
      local_240 = puVar10 + 0x4c;
      local_210 = pFVar4->FloatChannel[1];
      if ((*(int *)(puVar10 + 0x5b) == 0) && (*(char *)((longlong)puVar10 + 0x2f4) != '\x01')) {
        uStack_1f6._0_1_ = 0;
      }
      else {
        uStack_1f6._0_1_ = 1;
      }
      local_228 = puVar10 + 0x71;
      local_1f8 = pFVar4->FloatChannel[2];
      if ((*(int *)(puVar10 + 0x80) == 0) && (*(char *)((longlong)puVar10 + 0x41c) != '\x01')) {
        uStack_1de = 0;
      }
      else {
        uStack_1de = 1;
      }
      local_2b0._8_4_ = _local_340;
      local_278 = local_358;
      local_260 = _local_210;
      local_1e0 = pFVar4->FloatChannel[3];
      local_248 = _local_1f8;
      local_230 = _local_1e0;
      local_2b0._36_8_ = *puVar10;
      local_2b0._44_8_ = puVar10[1];
      local_2b0._0_8_ =
           &
           ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMaterialParameterInfo___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523__MovieScene_UE__6B_
      ;
      local_2b0[0x1c] = 1;
      local_27c = 1;
      local_268 = 1;
      local_250 = 1;
      local_238 = 1;
      local_220 = 1;
      local_218 = false;
      local_2b0._16_4_ = uStack_354;
      local_2b0._20_4_ = uStack_350;
      local_2b0._24_4_ = uStack_34c;
      this_00 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
                 *)UE::MovieScene::
                   TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   ::Add<FComponentMaterialInfo,FComponentMaterialInfo_&>
                             ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                               *)local_2b0,&local_1a0,pFVar5->ComponentMaterialInfo,&local_378);
      pTVar8 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
               ::AddTagConditional(this_00,&local_e8,
                                   (FComponentTypeID)(pFVar4->Tags).AbsoluteBlend.Value,
                                   ((ulonglong)
                                    this[-1].ScalarParameterInfosAndCurves.AllocatorInstance.Data &
                                   0xff0000) == 0);
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
                (param_3,pTVar8);
    }
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b12e0

bool __thiscall
UMovieSceneComponentMaterialParameterSection::PopulateEvaluationFieldImpl
          (UMovieSceneComponentMaterialParameterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return true;
}

// PostEditImport @ 1467b1ed0

void __thiscall
UMovieSceneComponentMaterialParameterSection::PostEditImport
          (UMovieSceneComponentMaterialParameterSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
                    /* WARNING: Could not recover jumptable at 0x0001467b1ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a0))(this);
  return;
}

// RemoveColorParameter @ 1467b9650

bool __thiscall
UMovieSceneComponentMaterialParameterSection::RemoveColorParameter
          (UMovieSceneComponentMaterialParameterSection *this,FMaterialParameterInfo *param_1)

{
  int *piVar1;
  TArray<FColorMaterialParameterInfoAndCurves,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (0 < (this->ColorParameterInfosAndCurves).ArrayNum) {
    pTVar2 = &this->ColorParameterInfosAndCurves;
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->ColorParameterInfosAndCurves).ArrayNum) {
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
      pFVar7 = (pTVar2->AllocatorInstance).Data + lVar11;
      if ((((*(uint *)pFVar7 == (param_1->Name).ComparisonIndex.Value) &&
           (*(uint *)(pFVar7 + 4) == (param_1->Name).Number)) &&
          (pFVar7[8] == (FScriptContainerElement)(param_1->Association).Value)) &&
         (*(int *)(pFVar7 + 0xc) == param_1->Index)) {
        uVar6 = 0;
        if ((int)uVar9 < (this->ColorParameterInfosAndCurves).ArrayNum) {
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
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x4b0;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)(pFVar7 + 0x388));
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)(pFVar7 + 0x260));
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)(pFVar7 + 0x138));
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)(pFVar7 + 0x10));
        iVar8 = (this->ColorParameterInfosAndCurves).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x4b0,(longlong)iVar8 * 0x4b0);
        }
        piVar1 = &(this->ColorParameterInfosAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4b0,8,&pTVar2->AllocatorInstance,(this->ColorParameterInfosAndCurves).ArrayNum,
                   &(this->ColorParameterInfosAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a0))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x4b0;
    } while ((int)uVar9 < (this->ColorParameterInfosAndCurves).ArrayNum);
  }
  return false;
}

// RemoveScalarParameter @ 1467b99d0

bool __thiscall
UMovieSceneComponentMaterialParameterSection::RemoveScalarParameter
          (UMovieSceneComponentMaterialParameterSection *this,FMaterialParameterInfo *param_1)

{
  int *piVar1;
  TArray<FScalarMaterialParameterInfoAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (0 < (this->ScalarParameterInfosAndCurves).ArrayNum) {
    pTVar2 = &this->ScalarParameterInfosAndCurves;
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->ScalarParameterInfosAndCurves).ArrayNum) {
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
      pFVar7 = (pTVar2->AllocatorInstance).Data + lVar11;
      if ((((*(uint *)pFVar7 == (param_1->Name).ComparisonIndex.Value) &&
           (*(uint *)(pFVar7 + 4) == (param_1->Name).Number)) &&
          (pFVar7[8] == (FScriptContainerElement)(param_1->Association).Value)) &&
         (*(int *)(pFVar7 + 0xc) == param_1->Index)) {
        uVar6 = 0;
        if ((int)uVar9 < (this->ScalarParameterInfosAndCurves).ArrayNum) {
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
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x138;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel
                  ((FMovieSceneFloatChannel *)(pFVar7 + 0x10));
        iVar8 = (this->ScalarParameterInfosAndCurves).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 0x138,(longlong)iVar8 * 0x138);
        }
        piVar1 = &(this->ScalarParameterInfosAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x138,8,&pTVar2->AllocatorInstance,(this->ScalarParameterInfosAndCurves).ArrayNum
                   ,&(this->ScalarParameterInfosAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a0))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x138;
    } while ((int)uVar9 < (this->ScalarParameterInfosAndCurves).ArrayNum);
  }
  return false;
}

// StaticRegisterNativesUMovieSceneComponentMaterialParameterSection @ 1467c27e0

void __cdecl
UMovieSceneComponentMaterialParameterSection::
StaticRegisterNativesUMovieSceneComponentMaterialParameterSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca730

UObject * __thiscall
UMovieSceneComponentMaterialParameterSection::_getUObject
          (UMovieSceneComponentMaterialParameterSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execAddColorParameterKey @ 1467ca9e0

void __cdecl
UMovieSceneComponentMaterialParameterSection::execAddColorParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FParameterChannelNames *pFVar2;
  FMaterialParameterInfo *pFVar3;
  EMovieSceneKeyInterpolation local_res10 [16];
  FFrameNumber local_res20 [2];
  FMaterialParameterInfo local_b8;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FParameterChannelNames local_78;
  FLinearColor_u_0 local_38;
  
  local_b8.Association.Value = '\x02';
  local_b8.Name.ComparisonIndex.Value = 0;
  local_b8.Name.Number = 0;
  local_b8.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20[0].Value = 0;
  pFVar3 = &local_b8;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar3 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
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
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FText::FText(&local_78.R);
  FText::FText(&local_78.G);
  FText::FText(&local_78.B);
  FText::FText(&local_78.A);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = Auto;
  pFVar2 = &local_78;
  if ((FParameterChannelNames *)param_2->MostRecentPropertyAddress != (FParameterChannelNames *)0x0)
  {
    pFVar2 = (FParameterChannelNames *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38._0_8_ = local_88;
  local_38._8_8_ = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddColorParameterKey
            ((UMovieSceneComponentMaterialParameterSection *)param_1,pFVar3,local_res20[0],
             (FLinearColor *)&local_38._s_0,&local_98,&local_a8,pFVar2,local_res10[0]);
  if (local_78.A.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.A.TextData.Reference + 0x10))();
  }
  if (local_78.B.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.B.TextData.Reference + 0x10))();
  }
  if (local_78.G.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.G.TextData.Reference + 0x10))();
  }
  if (local_78.R.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.R.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddScalarParameterKey @ 1467cae30

void __cdecl
UMovieSceneComponentMaterialParameterSection::execAddScalarParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMaterialParameterInfo *pFVar2;
  EMovieSceneKeyInterpolation local_res10 [8];
  float local_res20 [2];
  FFrameNumber local_58 [2];
  FMaterialParameterInfo local_50;
  FString local_40;
  FString local_30;
  
  local_50.Association.Value = '\x02';
  local_50.Name.ComparisonIndex.Value = 0;
  local_50.Name.Number = 0;
  local_50.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0].Value = 0;
  pFVar2 = &local_50;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar2 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
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
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddScalarParameterKey
            ((UMovieSceneComponentMaterialParameterSection *)param_1,pFVar2,local_58[0],
             local_res20[0],&local_30,&local_40,local_res10[0]);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveColorParameter @ 1467cbf50

void __cdecl
UMovieSceneComponentMaterialParameterSection::execRemoveColorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMaterialParameterInfo *pFVar3;
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  local_18.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar3 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveColorParameter((UMovieSceneComponentMaterialParameterSection *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveScalarParameter @ 1467cc0b0

void __cdecl
UMovieSceneComponentMaterialParameterSection::execRemoveScalarParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMaterialParameterInfo *pFVar3;
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  local_18.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar3 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveScalarParameter((UMovieSceneComponentMaterialParameterSection *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

