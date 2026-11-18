// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 36

// StaticStruct @ 146063d40

UScriptStruct * __cdecl FMovieSceneFloatChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannel,(UObject *)pUVar1,
                         L"MovieSceneFloatChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton;
}

// FMovieSceneFloatChannel @ 146093af0

FMovieSceneFloatChannel * __thiscall
FMovieSceneFloatChannel::FMovieSceneFloatChannel(FMovieSceneFloatChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->DefaultValue = 0.0;
  this->bHasDefaultValue = false;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->PreInfinityExtrap = '\x04';
  this->PostInfinityExtrap = '\x04';
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x38 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x40 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x58 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x60 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x64 = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x6c = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x78 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  (this->TickResolution).Numerator = 60000;
  (this->TickResolution).Denominator = 1;
  return this;
}

// ~FMovieSceneFloatChannel @ 146097c60

void __thiscall FMovieSceneFloatChannel::~FMovieSceneFloatChannel(FMovieSceneFloatChannel *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  pvVar1 = *(void **)&(this->KeyHandles).field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->KeyHandles).field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->KeyHandles);
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Times).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this);
  return;
}

// AddConstantKey @ 1460a6640

int __thiscall
FMovieSceneFloatChannel::AddConstantKey
          (FMovieSceneFloatChannel *this,FFrameNumber param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::InsertKeyInternal(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  *(float *)(pFVar1 + (longlong)(int)uVar4 * 0x1c) = param_2;
  pFVar1[(longlong)(int)uVar4 * 0x1c + 0x18] = (FScriptContainerElement)0x1;
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return uVar4;
}

// AddCubicKey @ 1460a6890

int __thiscall
FMovieSceneFloatChannel::AddCubicKey
          (FMovieSceneFloatChannel *this,FFrameNumber param_1,float param_2,
          ERichCurveTangentMode param_3,FMovieSceneTangentData *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::InsertKeyInternal(this,param_1);
  uVar7 = 0;
  if ((int)uVar5 < (this->Values).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5 * 0x1c;
  *(float *)(pFVar1 + lVar8) = param_2;
  pFVar1[lVar8 + 0x18] = (FScriptContainerElement)0x2;
  pFVar1[lVar8 + 0x19] = SUB41(param_3,0);
  uVar3 = *(undefined8 *)&param_4->ArriveTangentWeight;
  *(undefined8 *)(pFVar1 + lVar8 + 4) = *(undefined8 *)param_4;
  *(undefined8 *)(pFVar1 + lVar8 + 4 + 8) = uVar3;
  *(undefined4 *)(pFVar1 + lVar8 + 0x14) = *(undefined4 *)&param_4->TangentWeightMode;
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return uVar5;
}

// AddKeys @ 1460a7a20

void __thiscall
FMovieSceneFloatChannel::AddKeys
          (FMovieSceneFloatChannel *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTimes.Num() == InValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneFloatChannel.cpp"
                       ,0x1a8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->Times).ArrayNum;
  pTVar1 = &this->Times;
  piVar2 = &(this->Times).ArrayNum;
  if (pTVar1 == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&pTVar1->AllocatorInstance,piVar2,&(this->Times).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4,(param_1->AllocatorInstance).Data,
           (longlong)iVar4 << 2);
  }
  pTVar3 = &this->Values;
  if (pTVar3 == param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,iVar4,&pTVar3->AllocatorInstance,&(this->Values).ArrayNum,
                       &(this->Values).ArrayMax);
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x1c,
           (param_2->AllocatorInstance).Data,(longlong)iVar4 * 0x1c);
  }
  if (iVar8 < *piVar2) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&this->KeyHandles,(int)local_res8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *piVar2);
  }
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// AddLinearKey @ 1460a7db0

int __thiscall
FMovieSceneFloatChannel::AddLinearKey
          (FMovieSceneFloatChannel *this,FFrameNumber param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::InsertKeyInternal(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  *(float *)(pFVar1 + (longlong)(int)uVar4 * 0x1c) = param_2;
  pFVar1[(longlong)(int)uVar4 * 0x1c + 0x18] = (FScriptContainerElement)0x0;
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return uVar4;
}

// AsPiecewiseCurve @ 1460abbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPiecewiseCurve * __thiscall
FMovieSceneFloatChannel::AsPiecewiseCurve
          (FMovieSceneFloatChannel *this,FPiecewiseCurve *__return_storage_ptr__,bool param_1)

{
  int *piVar1;
  FCachedInterpolation *pFVar2;
  code *pcVar3;
  FFrameTime FVar4;
  FFrameTime FVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FPiecewiseCurve *pFVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  char local_207;
  undefined1 local_206 [6];
  longlong local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1c8;
  uint uStack_1c4;
  FCachedInterpolation local_1c0;
  double local_160;
  longlong local_158;
  FScriptContainerElement local_110;
  undefined8 local_108;
  FCachedInterpolation local_100;
  FCachedInterpolation local_a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  piVar1 = &(__return_storage_ptr__->Values).ArrayMax;
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  *piVar1 = 0;
  iVar8 = (this->Times).ArrayNum;
  local_207 = param_1;
  if (iVar8 == 0) {
    if (this->bHasDefaultValue != false) {
      local_160 = (double)this->DefaultValue;
      local_1c8 = 0;
      local_158 = (ulonglong)uStack_1c4 << 0x20;
      local_110 = (FScriptContainerElement)0x1;
      local_108 = 0x7fffffff80000000;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
      uVar15 = (ulonglong)(byte)local_110;
      pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
      (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
      pFVar14[0x50] = local_110;
      if ((7 < (byte)local_110) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar15])(pFVar14,&local_160);
      *(undefined8 *)(pFVar14 + 0x58) = local_108;
    }
  }
  else {
    if ((param_1) && ((this->PreInfinityExtrap).Value != '\x05')) {
      local_100.Data.TypeIndex = '\0';
      local_100.Range.Start.Value = 0;
      local_100.Range.End.Value = -1;
      if ((iVar8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      uStack_1f4 = 0;
      local_1f8 = *(int *)(this->Times).AllocatorInstance.Data - 1;
      FVar4.SubFrame = 0.0;
      FVar4.FrameNumber.Value = local_1f8;
      bVar7 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CacheExtrapolation
                        (this,FVar4,&local_100);
      if (bVar7) {
        iVar8 = (__return_storage_ptr__->Values).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
        }
        uVar15 = (ulonglong)local_100.Data.TypeIndex;
        (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
        pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
        pFVar14[0x50] = (FScriptContainerElement)local_100.Data.TypeIndex;
        if ((7 < local_100.Data.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
          return pFVar11;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar15])(pFVar14,&local_100);
        *(FCachedInterpolationRange *)(pFVar14 + 0x58) = local_100.Range;
      }
      else {
        local_208 = 0;
        `FMovieSceneFloatChannel::AsPiecewiseCurve'::__l16::<lambda_1>::operator()(&local_208);
      }
    }
    uVar15 = 0;
    uVar16 = (this->Times).ArrayNum;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (*piVar1 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar16,(ForAnyElementType *)__return_storage_ptr__,
                 (__return_storage_ptr__->Values).ArrayNum,piVar1);
    }
    iVar8 = (this->Times).ArrayNum;
    if (0 < iVar8 + -1) {
      local_200 = 0;
      uVar18 = uVar15;
      do {
        uVar16 = (uint)uVar15;
        if (uVar16 == iVar8 - 1U) {
LAB_1460ac051:
          uVar12 = 0;
          if ((int)uVar16 < (this->Times).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          iVar8 = *(int *)((this->Times).AllocatorInstance.Data + uVar18);
          iVar9 = iVar8 + 1;
          if (0x7ffffffe < iVar8) {
            iVar9 = iVar8;
          }
          uVar12 = 0;
          if ((int)uVar16 < (this->Values).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          iVar10 = (__return_storage_ptr__->Values).ArrayNum;
          local_1e0 = (double)*(float *)((this->Values).AllocatorInstance.Data + local_200);
          iStack_1d8 = iVar8;
          if (iVar10 == (__return_storage_ptr__->Values).ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,(ForAnyElementType *)__return_storage_ptr__,
                                &(__return_storage_ptr__->Values).ArrayMax);
          }
          (__return_storage_ptr__->Values).ArrayNum = iVar10 + 1;
          pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data;
          lVar13 = (longlong)iVar10 * 0x60;
          uVar15 = (ulonglong)(uVar16 + 1);
          uVar18 = uVar18 + 4;
          *(double *)(pFVar14 + lVar13) = local_1e0;
          *(ulonglong *)(pFVar14 + lVar13 + 8) = CONCAT44(uStack_1d4,iStack_1d8);
          pFVar14[lVar13 + 0x50] = (FScriptContainerElement)0x1;
          *(ulonglong *)(pFVar14 + lVar13 + 0x58) = CONCAT44(iVar9,iVar8);
        }
        else {
          uVar17 = uVar16 + 1;
          uVar12 = 0;
          if ((int)uVar17 < iVar8) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          local_1f0 = uVar18 + 4;
          iVar8 = *(int *)((this->Times).AllocatorInstance.Data + local_1f0);
          uVar12 = 0;
          if ((int)uVar16 < (this->Times).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          if (*(int *)((this->Times).AllocatorInstance.Data + uVar18) == iVar8) goto LAB_1460ac051;
          TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForKey
                    (&local_1c0,this,uVar16,(FCycleParams *)0x0);
          uVar18 = local_1f0;
          if (local_1c0.Range.Start.Value < local_1c0.Range.End.Value) {
            pFVar2 = (FCachedInterpolation *)(__return_storage_ptr__->Values).AllocatorInstance.Data
            ;
            piVar1 = &(__return_storage_ptr__->Values).ArrayMax;
            if (((pFVar2 <= &local_1c0) && (&local_1c0 < pFVar2 + *piVar1)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
            iVar8 = (__return_storage_ptr__->Values).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
            }
            uVar6 = local_1c0.Data._80_8_;
            (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
            pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data +
                      (longlong)iVar8 * 0x60;
            pFVar14[0x50] = local_1c0.Data.TypeIndex;
            if ((7 < (byte)local_1c0.Data.TypeIndex) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x105,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[uVar6 & 0xff])(pFVar14,&local_1c0);
            *(ulonglong *)(pFVar14 + 0x58) =
                 CONCAT44(local_1c0.Range.End.Value,local_1c0.Range.Start.Value);
            uVar15 = (ulonglong)uVar17;
            uVar18 = local_1f0;
          }
          else {
            uVar15 = (ulonglong)uVar17;
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6209394576726163666>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneFloatChannel.cpp"
                               ,0xd2,"Interp.IsValid()");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
          }
        }
        iVar8 = (this->Times).ArrayNum;
        local_200 = local_200 + 0x1c;
      } while ((int)uVar15 < iVar8 + -1);
    }
    if ((local_207 != '\0') && ((this->PostInfinityExtrap).Value != '\x05')) {
      iVar8 = (this->Times).ArrayNum;
      local_a0.Data.TypeIndex = '\0';
      local_a0.Range.Start.Value = 0;
      local_a0.Range.End.Value = -1;
      uVar12 = iVar8 - 1;
      uVar16 = 0;
      if ((int)uVar12 < iVar8) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      uStack_1e4 = 0;
      local_1e8 = *(int *)((this->Times).AllocatorInstance.Data +
                          (longlong)(this->Times).ArrayNum * 4 + -4) + 1;
      FVar5.SubFrame = 0.0;
      FVar5.FrameNumber.Value = local_1e8;
      bVar7 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CacheExtrapolation
                        (this,FVar5,&local_a0);
      if (bVar7) {
        iVar8 = (__return_storage_ptr__->Values).ArrayNum;
        if (iVar8 == (__return_storage_ptr__->Values).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->Values).ArrayMax);
        }
        uVar15 = (ulonglong)local_a0.Data.TypeIndex;
        (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
        pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
        pFVar14[0x50] = (FScriptContainerElement)local_a0.Data.TypeIndex;
        if ((7 < local_a0.Data.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
          return pFVar11;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar15])(pFVar14,&local_a0);
        *(FCachedInterpolationRange *)(pFVar14 + 0x58) = local_a0.Range;
      }
      else {
        `FMovieSceneFloatChannel::AsPiecewiseCurve'::__l34::<lambda_2>::operator()(local_206);
      }
    }
  }
  return __return_storage_ptr__;
}

// AutoSetTangents @ 1460ae070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMovieSceneFloatChannel::AutoSetTangents(FMovieSceneFloatChannel *this,float param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  int iStackX_18;
  longlong lStackX_20;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_120;
  
  dVar8 = __real_3f1a36e2e0000000;
  if (1 < (this->Values).ArrayNum) {
    pFVar16 = (this->Values).AllocatorInstance.Data;
    if (pFVar16[0x18] == (FScriptContainerElement)0x0) {
      pFVar16[0x14] = (FScriptContainerElement)0x0;
      if (((this->Values).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      if (((this->Times).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Times).AllocatorInstance.Data;
      if (((this->Times).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar24 = (double)(*(int *)((this->Times).AllocatorInstance.Data + 4) - *(int *)pFVar3);
      if (dVar24 <= dVar8) {
        dVar24 = dVar8;
      }
      *(float *)(pFVar16 + 8) =
           (float)((double)(*(float *)(pFVar2 + 0x1c) - *(float *)pFVar16) / dVar24);
    }
    else if ((pFVar16[0x18] == (FScriptContainerElement)0x2) &&
            ((pFVar16[0x19] == (FScriptContainerElement)0x0 ||
             (pFVar16[0x19] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar16 + 4) = 0;
      pFVar16[0x14] = (FScriptContainerElement)0x0;
    }
    iVar14 = (this->Values).ArrayNum;
    uVar15 = iVar14 - 1;
    uVar11 = 0;
    if ((int)uVar15 < iVar14) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar16 = (this->Values).AllocatorInstance.Data;
    lVar18 = (longlong)(this->Values).ArrayNum * 0x1c;
    if (pFVar16[lVar18 + -4] == (FScriptContainerElement)0x0) {
      pFVar16[lVar18 + -8] = (FScriptContainerElement)0x0;
      iVar14 = (this->Values).ArrayNum;
      uVar21 = iVar14 - 1;
      uVar11 = iVar14 - 2;
      uVar15 = 0;
      if ((int)uVar11 < iVar14) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar21 < (this->Times).ArrayNum) {
        uVar15 = ~uVar21 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Times).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar11 < (this->Times).ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar24 = (double)(*(int *)(pFVar3 + (longlong)(int)uVar21 * 4) -
                       *(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)uVar11 * 4));
      if (dVar24 <= dVar8) {
        dVar24 = dVar8;
      }
      *(float *)(pFVar16 + lVar18 + -0x18) =
           (float)((double)(*(float *)(pFVar16 + lVar18 + -0x1c) -
                           *(float *)(pFVar2 + (longlong)(int)uVar11 * 0x1c)) / dVar24);
    }
    else if ((pFVar16[lVar18 + -4] == (FScriptContainerElement)0x2) &&
            ((pFVar16[lVar18 + -3] == (FScriptContainerElement)0x0 ||
             (pFVar16[lVar18 + -3] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar16 + lVar18 + -0x18) = 0;
      pFVar16[lVar18 + -8] = (FScriptContainerElement)0x0;
    }
    dVar9 = __real_401aaaaaaaaaaaaa;
    dVar24 = __real_3feb333333333333;
    fVar7 = __real_3a83126f;
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    iVar14 = (this->Values).ArrayNum;
    iStackX_18 = 0;
    uVar15 = 1;
    if (1 < iVar14 + -1) {
      uVar22 = 0;
      uVar21 = 2;
      lStack_138 = 1;
      lStackX_20 = 0x1c;
      lStack_130 = 0;
      lStack_120 = 0;
      fVar28 = __real_3f800000;
      do {
        fVar23 = 0.0;
        uVar20 = ~uVar22 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar22 < iVar14) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = ~uVar15 >> 0x1f;
        fVar5 = *(float *)((this->Values).AllocatorInstance.Data + lStack_120);
        uVar12 = 0;
        if ((int)uVar15 < (this->Values).ArrayNum) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (this->Values).AllocatorInstance.Data + lStackX_20;
        if (pFVar16[0x18] == (FScriptContainerElement)0x2) {
          if ((pFVar16[0x19] == (FScriptContainerElement)0x0) ||
             (pFVar16[0x19] == (FScriptContainerElement)0x4)) {
            uVar17 = ~uVar21 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar21 < (this->Values).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar6 = *(float *)((this->Values).AllocatorInstance.Data + lStackX_20 + 0x1c);
            uVar12 = 0;
            if ((int)uVar21 < (this->Times).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->Times).AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar22 < (this->Times).ArrayNum) {
              uVar12 = uVar20;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            dVar26 = (double)(*(int *)(pFVar2 + lStack_138 * 4 + 4) -
                             *(int *)((this->Times).AllocatorInstance.Data + lStack_130));
            if (dVar26 <= dVar8) {
              dVar26 = dVar8;
            }
            if (pFVar16[0x19] == (FScriptContainerElement)0x4) {
              fVar23 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CalcSmartTangent
                                 (this,uVar15);
              if (((((float)((uint)*(float *)(pFVar16 + 4) & uVar11) <= fVar7) ||
                   ((float)((uint)(*(float *)(pFVar16 + 4) - fVar23) & uVar11) <= fVar7)) ||
                  (9 < iStackX_18)) || ((int)uVar15 < 2)) {
                iStackX_18 = 0;
              }
              else {
                iStackX_18 = iStackX_18 + 1;
                uVar22 = uVar22 - 2;
                lStack_138 = lStack_138 + -2;
                lStack_120 = lStack_120 + -0x38;
                lStackX_20 = lStackX_20 + -0x38;
                uVar15 = uVar15 - 2;
                uVar21 = uVar21 - 2;
                lStack_130 = lStack_130 + -8;
              }
            }
            else if (GCachedSequencerAutoTangentInterpolation == 0) {
              fVar23 = (float)((double)(((fVar6 - *(float *)pFVar16) + (*(float *)pFVar16 - fVar5))
                                       * (fVar28 - param_1)) / dVar26);
            }
            else if ((0 < GCachedSequencerAutoTangentInterpolation) &&
                    (((fVar1 = *(float *)pFVar16, fVar5 < fVar1 && (fVar1 < fVar6)) ||
                     ((fVar1 < fVar5 && (fVar6 < fVar1)))))) {
              fVar23 = (float)((double)(((fVar6 - fVar1) + (fVar1 - fVar5)) * (fVar28 - param_1)) /
                              dVar26);
              if (GCachedSequencerAutoTangentInterpolation < 2) {
                dVar26 = (double)(float)((uint)(fVar1 - fVar5) & uVar11) /
                         (double)(float)((uint)(fVar6 - fVar5) & uVar11);
                if (dVar26 <= dVar24) {
                  if (dVar26 < ___real_3fc3333333333334) {
                    fVar23 = (float)(dVar26 * dVar9 * (double)fVar23);
                  }
                }
                else {
                  fVar23 = (float)((__real_3ff0000000000000 - (dVar26 - dVar24) * dVar9) *
                                  (double)fVar23);
                }
              }
              else if (GCachedSequencerAutoTangentInterpolation == 2) {
                uVar12 = 0;
                if ((int)uVar22 < (this->Times).ArrayNum) {
                  uVar12 = uVar20;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (this->Times).AllocatorInstance.Data;
                uVar12 = 0;
                if ((int)uVar15 < (this->Times).ArrayNum) {
                  uVar12 = uVar19;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                dVar26 = (double)(*(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4) -
                                 *(int *)(pFVar2 + lStack_130));
                uVar12 = 0;
                if ((int)uVar15 < (this->Times).ArrayNum) {
                  uVar12 = uVar19;
                }
                if (dVar26 <= dVar8) {
                  dVar26 = dVar8;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (this->Times).AllocatorInstance.Data;
                uVar12 = 0;
                if ((int)uVar21 < (this->Times).ArrayNum) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                dVar27 = (double)(*(float *)pFVar16 - fVar5) * (__real_3ff8000000000000 / dVar26);
                dVar26 = (double)(*(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4 + 4
                                          ) - *(int *)(pFVar2 + lStack_138 * 4));
                if (dVar26 <= dVar8) {
                  dVar26 = dVar8;
                }
                dVar25 = (__real_3ff8000000000000 / dVar26) * (double)(fVar6 - *(float *)pFVar16);
                dVar26 = (double)fVar23;
                iVar14 = 1;
                if (0.0 < dVar25) {
                  iVar14 = -1;
                }
                iVar13 = 1;
                if (0.0 < dVar27) {
                  iVar13 = -1;
                }
                if (iVar13 == iVar14) {
                  iVar13 = 1;
                  if (0.0 < dVar26) {
                    iVar13 = -1;
                  }
                  if (iVar13 != iVar14) goto LAB_1460add43;
                  if (dVar25 < 0.0) {
                    if (dVar26 <= dVar25) {
                      dVar26 = dVar25;
                    }
                    if (dVar26 <= dVar27) {
                      dVar26 = dVar27;
                    }
                  }
                  else {
                    if (dVar25 <= dVar26) {
                      dVar26 = dVar25;
                    }
                    if (dVar27 <= dVar26) {
                      dVar26 = dVar27;
                    }
                  }
                }
                else {
LAB_1460add43:
                  dVar26 = 0.0;
                }
                fVar23 = (float)dVar26;
                fVar28 = __real_3f800000;
              }
            }
            *(float *)(pFVar16 + 4) = fVar23;
            *(float *)(pFVar16 + 8) = fVar23;
            pFVar16[0x14] = (FScriptContainerElement)0x0;
          }
        }
        else if (pFVar16[0x18] == (FScriptContainerElement)0x0) {
          pFVar16[0x14] = (FScriptContainerElement)0x0;
          uVar12 = 0;
          if ((int)uVar21 < (this->Values).ArrayNum) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->Values).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar15 < (this->Times).ArrayNum) {
            uVar12 = uVar19;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Times).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar22 < (this->Times).ArrayNum) {
            uVar12 = uVar20;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar26 = (double)(*(int *)(pFVar3 + lStack_138 * 4) -
                           *(int *)((this->Times).AllocatorInstance.Data + lStack_130));
          if (dVar26 <= dVar8) {
            dVar26 = dVar8;
          }
          *(float *)(pFVar16 + 4) = (float)((double)(*(float *)pFVar16 - fVar5) / dVar26);
          uVar12 = 0;
          if ((int)uVar21 < (this->Times).ArrayNum) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Times).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar15 < (this->Times).ArrayNum) {
            uVar12 = uVar19;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar26 = (double)(*(int *)(pFVar3 + lStack_138 * 4 + 4) -
                           *(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4));
          if (dVar26 <= dVar8) {
            dVar26 = dVar8;
          }
          *(float *)(pFVar16 + 8) =
               (float)((double)(*(float *)(pFVar2 + lStackX_20 + 0x1c) - *(float *)pFVar16) / dVar26
                      );
        }
        uVar22 = uVar22 + 1;
        iVar14 = (this->Values).ArrayNum;
        lStack_138 = lStack_138 + 1;
        lStackX_20 = lStackX_20 + 0x1c;
        lStack_130 = lStack_130 + 4;
        lStack_120 = lStack_120 + 0x1c;
        uVar15 = uVar15 + 1;
        uVar21 = uVar21 + 1;
      } while ((int)uVar15 < iVar14 + -1);
    }
  }
  return;
}

// ClearDefault @ 1460b1b90

void __thiscall FMovieSceneFloatChannel::ClearDefault(FMovieSceneFloatChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// ComputeEffectiveRange @ 1460b5d70

TRange<FFrameNumber> * __thiscall
FMovieSceneFloatChannel::ComputeEffectiveRange
          (FMovieSceneFloatChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  bool bVar10;
  TRange<FFrameNumber> *pTVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  uint local_res10;
  uint local_res18;
  undefined4 uStackX_21;
  undefined2 uStackX_25;
  undefined1 uStackX_27;
  
  pTVar1 = &this->Times;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (this == (FMovieSceneFloatChannel *)0xffffffffffffff80)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Times && Values",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                        ,0x2f3,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
      return pTVar11;
    }
  }
  iVar2 = (this->Times).ArrayNum;
  if (iVar2 != 0) {
    uVar13 = iVar2 - 1;
    uVar12 = 0;
    if ((int)uVar13 < iVar2) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    local_res8 = CONCAT31(local_res8._1_3_,1);
    uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4);
    if ((this->Times).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    uVar4 = *(undefined4 *)(pTVar1->AllocatorInstance).Data;
    uStackX_21._3_1_ = (undefined1)uVar4;
    uStackX_25 = (undefined2)((uint)uVar4 >> 8);
    uStackX_27 = (undefined1)((uint)uVar4 >> 0x18);
    local_resc = (undefined1)uVar3;
    uStackX_d = (undefined2)((uint)uVar3 >> 8);
    uStackX_f = (undefined1)((uint)uVar3 >> 0x18);
    TVar6._1_4_ = uStackX_21;
    TVar6.Type.Value = 1;
    TVar6.Value.Value._1_2_ = uStackX_25;
    TVar6.Value.Value._3_1_ = uStackX_27;
    TVar7.Value.Value._0_1_ = local_resc;
    TVar7._0_4_ = local_res8;
    TVar7.Value.Value._1_2_ = uStackX_d;
    TVar7.Value.Value._3_1_ = uStackX_f;
    __return_storage_ptr__->LowerBound = TVar6;
    __return_storage_ptr__->UpperBound = TVar7;
    return __return_storage_ptr__;
  }
  local_res10 = local_res10 & 0xffffff00;
  local_res18 = local_res18 & 0xffffff00;
  TVar8.Value.Value = 0;
  TVar8._0_4_ = local_res10;
  TVar9.Value.Value = 0;
  TVar9._0_4_ = local_res18;
  __return_storage_ptr__->LowerBound = TVar8;
  __return_storage_ptr__->UpperBound = TVar9;
  return __return_storage_ptr__;
}

// ComputeExtents @ 1460b6b60

FInterpolationExtents * __thiscall
FMovieSceneFloatChannel::ComputeExtents
          (FMovieSceneFloatChannel *this,FInterpolationExtents *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2)

{
  double dVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FInterpolationExtents *pFVar4;
  FFloatChannelPiecewiseData local_res8 [4];
  FInterpolationExtents local_28;
  
  local_res8[0].Channel = this;
  pFVar4 = UE::MovieScene::Interpolation::
           ComputePiecewiseExtents<UE::MovieScene::Interpolation::FFloatChannelPiecewiseData>
                     (&local_28,local_res8,param_1,param_2);
  dVar1 = pFVar4->MaxValue;
  FVar2 = pFVar4->MinValueTime;
  FVar3 = pFVar4->MaxValueTime;
  __return_storage_ptr__->MinValue = pFVar4->MinValue;
  __return_storage_ptr__->MaxValue = dVar1;
  __return_storage_ptr__->MinValueTime = FVar2;
  __return_storage_ptr__->MaxValueTime = FVar3;
  return __return_storage_ptr__;
}

// DeleteKeys @ 1460bad80

void __thiscall
FMovieSceneFloatChannel::DeleteKeys
          (FMovieSceneFloatChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeys(&local_28,&local_38);
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// DeleteKeysFrom @ 1460bc370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneFloatChannel::DeleteKeysFrom
          (FMovieSceneFloatChannel *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  bool bVar4;
  int iVar5;
  FCachedInterpolation *this_00;
  undefined1 auStackY_f8 [32];
  double local_c0;
  FMovieSceneTangentData local_b8;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_a0;
  FCachedInterpolation local_80;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0._padding_ = (longlong)&this->KeyHandles;
  local_a0._padding_ = (longlong)&this->Times;
  local_a0.Values = &this->Values;
  local_a0._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_a0._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_a0.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = (this->Times).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < iVar5) {
    iVar5 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_a0,param_1,(FFrameNumber)0x0);
    if (iVar5 == -1) {
      FVar2.SubFrame = 0.0;
      FVar2.FrameNumber.Value = param_1.Value;
      local_c0 = 0.0;
      this_00 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                          (&local_80,this,(FTimeEvaluationCache *)0x0,FVar2);
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = param_1.Value;
      bVar4 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this_00,FVar3,&local_c0)
      ;
      if (bVar4) {
        local_b8.UnserializedPaddingBytes[0] = '\0';
        local_b8.UnserializedPaddingBytes[1] = '\0';
        local_b8.UnserializedPaddingBytes[2] = '\0';
        local_b8.TangentWeightMode.Value = '\0';
        local_b8.ArriveTangent = 0.0;
        local_b8.LeaveTangent = 0.0;
        local_b8.ArriveTangentWeight = 0.0;
        local_b8.LeaveTangentWeight = 0.0;
        TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddCubicKey
                  (this,param_1,(float)local_c0,RCTM_Auto,&local_b8);
      }
    }
  }
  TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeysFrom(&local_a0,param_1,param_2);
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// DuplicateKeys @ 1460c1720

void __thiscall
FMovieSceneFloatChannel::DuplicateKeys
          (FMovieSceneFloatChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneFloatValue>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// Evaluate @ 1460c2c40

bool __thiscall
FMovieSceneFloatChannel::Evaluate(FMovieSceneFloatChannel *this,FFrameTime param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::EvaluateCached
                    (this,(FTimeEvaluationCache *)0x0,param_1,param_2);
  return bVar1;
}

// GetHandle @ 1460ca910

FKeyHandle __thiscall FMovieSceneFloatChannel::GetHandle(FMovieSceneFloatChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  FMovieSceneChannelData::GetHandle(&local_28,param_1);
  return (FKeyHandle)param_1;
}

// GetIndex @ 1460ca9f0

int __thiscall FMovieSceneFloatChannel::GetIndex(FMovieSceneFloatChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if ((this == (FMovieSceneFloatChannel *)0xffffffffffffff90) ||
     (this == (FMovieSceneFloatChannel *)0xffffffffffffff80)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (&this->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
    return -1;
  }
  iVar3 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&this->KeyHandles,param_1);
  return iVar3;
}

// GetInterpolationForTime @ 1460ccdd0

FCachedInterpolation * __thiscall
FMovieSceneFloatChannel::GetInterpolationForTime
          (FMovieSceneFloatChannel *this,FCachedInterpolation *__return_storage_ptr__,
          FFrameTime param_1)

{
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
            (__return_storage_ptr__,this,(FTimeEvaluationCache *)0x0,param_1);
  return __return_storage_ptr__;
}

// GetKeyTimes @ 1460cd610

void __thiscall
FMovieSceneFloatChannel::GetKeyTimes
          (FMovieSceneFloatChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMovieSceneChannelData::GetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// GetKeys @ 1460cda80

void __thiscall
FMovieSceneFloatChannel::GetKeys
          (FMovieSceneFloatChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::GetKeys(&local_28,param_1,param_2,param_3);
  return;
}

// GetNumKeys @ 1460ce250

int __thiscall FMovieSceneFloatChannel::GetNumKeys(FMovieSceneFloatChannel *this)

{
  return (this->Times).ArrayNum;
}

// Offset @ 1460dab70

void __thiscall FMovieSceneFloatChannel::Offset(FMovieSceneFloatChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::Offset(&local_28,param_1);
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// Optimize @ 1460dddc0

void __thiscall
FMovieSceneFloatChannel::Optimize(FMovieSceneFloatChannel *this,FKeyDataOptimizationParams *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FFrameRate FVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  uint uStack_188;
  ForAnyElementType FStack_180;
  int iStack_178;
  int iStack_174;
  FScriptContainerElement *pFStack_170;
  uint uStack_168;
  uint uStack_164;
  void *pvStack_160;
  undefined8 uStack_158;
  FScriptContainerElement *pFStack_150;
  uint uStack_148;
  uint uStack_144;
  TMovieSceneChannelData<FMovieSceneFloatValue> TStack_140;
  longlong lStack_120;
  void *pvStack_118;
  undefined8 uStack_110;
  FScriptContainerElement *pFStack_108;
  longlong lStack_100;
  FScriptContainerElement *pFStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<FKeyHandle_const_,int> aTStack_e8 [10];
  
  TStack_140._padding_ = (longlong)&this->Times;
  TStack_140._padding_ = (longlong)&this->KeyHandles;
  TStack_140.Values = &this->Values;
  TStack_140._padding_ = (longlong)this;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_140._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (TStack_140.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvStack_118 = (void *)0x0;
  uStack_110 = 0;
  pvStack_160 = (void *)0x0;
  uStack_158 = 0;
  (**(code **)(this->_padding_ + 8))(this,&param_1->Range,&pvStack_118,&pvStack_160);
  dVar9 = __real_3fd5555555555555;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar7 = __real_3ff0000000000000;
  if (2 < (int)uStack_158) {
    uStack_188 = 0;
    FStack_180.Data = (FScriptContainerElement *)0x0;
    iStack_178 = 0;
    iStack_174 = 0;
    uStack_164 = 1;
    if (1 < (int)uStack_158 + -1) {
      lStack_120 = 4;
      do {
        lVar10 = lStack_120;
        uVar13 = uStack_164;
        uStack_148 = ~uStack_164 >> 0x1f;
        uVar12 = 0;
        if ((int)uStack_164 < (int)uStack_158) {
          uVar12 = uStack_148;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((FKeyHandleLookupTable *)TStack_140._padding_ == (FKeyHandleLookupTable *)0x0) {
          auStackX_18[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(auStackX_18);
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)TStack_140._padding_,
                              (FKeyHandle)*(uint *)((longlong)pvStack_160 + lVar10));
        }
        uStack_144 = uVar13 + 1;
        uVar15 = 0;
        uVar13 = uVar15;
        if ((int)uStack_144 < (int)uStack_158) {
          uVar13 = ~uStack_144 >> 0x1f;
        }
        uStack_168 = uVar12;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lStack_100 = lVar10 + 4;
        if ((FKeyHandleLookupTable *)TStack_140._padding_ == (FKeyHandleLookupTable *)0x0) {
          auStackX_20[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(auStackX_20);
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)TStack_140._padding_,
                              (FKeyHandle)*(uint *)((longlong)pvStack_160 + lStack_100));
        }
        iVar2 = (TStack_140.Values)->ArrayNum;
        pFVar17 = ((TStack_140.Values)->AllocatorInstance).Data;
        if ((iVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = uVar15;
        if ((int)uVar12 < iVar2) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar24 = *(float *)(pFVar17 + (longlong)(int)uVar12 * 0x1c);
        iVar2 = *(int *)(TStack_140._padding_ + 8);
        pFStack_170 = ((ForAnyElementType *)TStack_140._padding_)->Data;
        FVar5 = param_1->DisplayRate;
        if ((iVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = uVar15;
        if ((int)uVar12 < iVar2) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = ((ForAnyElementType *)TStack_140._padding_)->Data;
        iVar2 = *(int *)(pFStack_170 + (longlong)(int)uVar12 * 4);
        iVar3 = *(int *)(TStack_140._padding_ + 8);
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar15;
        if ((int)uVar13 < iVar3) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFStack_170 = ((TStack_140.Values)->AllocatorInstance).Data;
        iVar3 = *(int *)(pFVar17 + (longlong)(int)uVar13 * 4);
        iVar4 = (TStack_140.Values)->ArrayNum;
        if ((iVar4 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar15;
        if ((int)uVar13 < iVar4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = pFStack_170 + (longlong)(int)uVar13 * 0x1c;
        iVar4 = *(int *)(TStack_140._padding_ + 8);
        pFStack_150 = ((ForAnyElementType *)TStack_140._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar15;
        if ((int)uStack_188 < iVar4) {
          uVar13 = ~uStack_188 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFStack_170 = (FScriptContainerElement *)(longlong)(int)uStack_188;
        iVar4 = *(int *)(pFStack_150 + (longlong)pFStack_170 * 4);
        pFStack_108 = ((TStack_140.Values)->AllocatorInstance).Data;
        pFStack_150 = (FScriptContainerElement *)
                      CONCAT44(pFStack_150._4_4_,(TStack_140.Values)->ArrayNum);
        if (((TStack_140.Values)->ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar15;
        if ((int)uStack_188 < (int)pFStack_150) {
          uVar13 = ~uStack_188 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = pFStack_108 + (longlong)pFStack_170 * 0x1c;
        dVar26 = (double)FVar5.Numerator / (double)FVar5.Denominator;
        dVar25 = (double)(iVar3 - iVar4) * (dVar7 / dVar26);
        if (dVar25 <= 0.0) {
LAB_1460ddb52:
          fVar23 = *(float *)pFVar16;
        }
        else if (pFVar16[0x18] == (FScriptContainerElement)0x1) {
          if (iVar2 < iVar3) goto LAB_1460ddb52;
          fVar23 = *(float *)pFVar17;
        }
        else {
          fVar23 = *(float *)pFVar16;
          fVar1 = *(float *)pFVar17;
          dVar21 = ((double)(iVar2 - iVar4) * (dVar7 / dVar26)) / dVar25;
          if ((pFVar16[0x18] == (FScriptContainerElement)0x0) &&
             ((GSequencerLinearCubicInterpolation == 0 ||
              (pFVar17[0x18] != (FScriptContainerElement)0x2)))) {
            fVar23 = (float)((double)(fVar1 - fVar23) * dVar21 + (double)fVar23);
          }
          else {
            fVar20 = (float)dVar21;
            fVar22 = (float)((double)fVar1 -
                            (double)*(float *)(pFVar17 + 4) * dVar26 * dVar25 * dVar9);
            fVar18 = (float)((double)*(float *)(pFVar16 + 8) * dVar26 * dVar25 * dVar9 +
                            (double)fVar23);
            fVar19 = (fVar22 - fVar18) * fVar20 + fVar18;
            fVar23 = (fVar18 - fVar23) * fVar20 + fVar23;
            fVar23 = (fVar19 - fVar23) * fVar20 + fVar23;
            fVar23 = (((((fVar1 - fVar22) * fVar20 + fVar22) - fVar19) * fVar20 + fVar19) - fVar23)
                     * fVar20 + fVar23;
          }
        }
        fVar24 = (float)((uint)(fVar23 - fVar24) & uVar8);
        if (fVar24 < param_1->Tolerance || fVar24 == param_1->Tolerance) {
          if ((int)uStack_164 < (int)uStack_158) {
            uVar15 = uStack_148;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (FScriptContainerElement *)((longlong)pvStack_160 + lStack_120);
          if (((FStack_180.Data <= pFVar17) &&
              (pFVar17 < FStack_180.Data + (longlong)iStack_174 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (iStack_178 == iStack_174) {
            iStack_178 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&FStack_180,&iStack_174);
          }
          *(undefined4 *)(FStack_180.Data + (longlong)iStack_178 * 4) = *(undefined4 *)pFVar17;
          iStack_178 = iStack_178 + 1;
        }
        else {
          uStack_188 = uStack_168;
        }
        uStack_164 = uStack_144;
        lStack_120 = lStack_100;
      } while ((int)uStack_144 < (int)uStack_158 + -1);
    }
    iVar2 = iStack_178;
    pFStack_f8 = FStack_180.Data;
    if ((iStack_178 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    aTStack_e8[0]._12_4_ = uStack_ec;
    aTStack_e8[0].ArrayNum = iVar2;
    aTStack_e8[0].DataPtr = (FKeyHandle *)pFStack_f8;
    iStack_f0 = iVar2;
    TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeys(&TStack_140,aTStack_e8);
    if (param_1->bAutoSetInterpolation != false) {
      TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
    }
    if (FStack_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_180.Data);
    }
  }
  if (pvStack_160 != (void *)0x0) {
    FMemory::Free(pvStack_160);
  }
  if (pvStack_118 != (void *)0x0) {
    FMemory::Free(pvStack_118);
  }
  return;
}

// PopulateCurvePoints @ 1460de660

void __thiscall
FMovieSceneFloatChannel::PopulateCurvePoints
          (FMovieSceneFloatChannel *this,double param_1,double param_2,double param_3,float param_4,
          FFrameRate param_5,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_6)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double local_res8;
  double local_b8;
  double local_b0;
  FFrameRate local_a8;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float> local_a0;
  
  if (this != (FMovieSceneFloatChannel *)0x0) {
    uVar1 = (this->PreInfinityExtrap).Value;
    uVar2 = (this->PostInfinityExtrap).Value;
    iVar3 = (this->Times).ArrayNum;
    local_a8 = param_5;
    local_res8 = param_2;
    param_5 = (FFrameRate)(double)param_4;
    local_b8 = param_1;
    local_b0 = param_3;
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (this->Values).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((uVar1 == '\0') || (uVar1 == '\x01')) || (uVar1 == '\x02')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (((uVar2 == '\0') || (uVar2 == '\x01')) || (uVar2 == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((bVar7) || (bVar6)) && ((1 < iVar3 && (1 < iVar4)))) {
      UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                (&local_a0,this,&local_a8,&local_b0,(double *)&param_5,&local_b8,&local_res8,param_6
                );
    }
    else {
      UE::MovieScene::Private::
      PopulateCurvePoints<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                (this,&local_a8,local_b0,(float)(double)param_5,local_b8,local_res8,param_6);
    }
  }
  return;
}

// PostEditChange @ 1460e09a0

void __thiscall FMovieSceneFloatChannel::PostEditChange(FMovieSceneFloatChannel *this)

{
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// RemapTimes @ 1460e7680

void __thiscall
FMovieSceneFloatChannel::RemapTimes(FMovieSceneFloatChannel *this,IRetimingInterface *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  TMovieSceneChannelData<FMovieSceneFloatValue> TStack_38;
  
  pTVar2 = &this->Values;
  pTVar1 = &this->Times;
  if ((this->Times).ArrayNum != (this->Values).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel->Times.Num() == InChannel->Values.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                       ,0x361,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar9 = (double)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  TStack_38._padding_ = (longlong)&this->KeyHandles;
  TStack_38._padding_ = (longlong)pTVar1;
  TStack_38._padding_ = (longlong)this;
  TStack_38.Values = pTVar2;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar2 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes(&TStack_38,param_1);
  uVar7 = 0;
  if (0 < (this->Times).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Values).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar7 = uVar7 + 1;
      *(float *)(pFVar3 + lVar8 + 4) = (float)((double)*(float *)(pFVar3 + lVar8 + 4) * dVar9);
      *(float *)(pFVar3 + lVar8 + 8) = (float)((double)*(float *)(pFVar3 + lVar8 + 8) * dVar9);
      lVar8 = lVar8 + 0x1c;
    } while ((int)uVar7 < (this->Times).ArrayNum);
  }
  return;
}

// Reset @ 1460e9370

void __thiscall FMovieSceneFloatChannel::Reset(FMovieSceneFloatChannel *this)

{
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->Values).AllocatorInstance,0,&(this->Values).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->bHasDefaultValue = false;
  return;
}

// Serialize @ 1460f3c40

bool __thiscall FMovieSceneFloatChannel::Serialize(FMovieSceneFloatChannel *this,FArchive *param_1)

{
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  FFrameRate *pFVar3;
  undefined1 *puVar4;
  uchar *puVar5;
  longlong *plVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  ulonglong *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  int iStackX_20;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if ((iVar11 < 0xc) &&
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     iVar11 < 0x35)) {
    return false;
  }
  iVar11 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  iStackX_20 = iVar11;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PreInfinityExtrap,1);
  }
  else {
    (this->PreInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PostInfinityExtrap,1);
  }
  else {
    (this->PostInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) goto LAB_1460f3a41;
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 4;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    puVar4 = &param_1->field_0x2a;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Times).ArrayNum << 2,(longlong)(this->Times).ArrayMax << 2);
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = (this->Times).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < (int)auStackX_10[0]) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->Times).AllocatorInstance.Data,
                 (longlong)(int)(auStackX_10[0] * auStackX_18[0]));
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Values).ArrayNum * 0x1c,
               (longlong)(this->Values).ArrayMax * 0x1c);
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 0x1c;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = (this->Values).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar11 = iStackX_20;
    if ((int)auStackX_10[0] < 1) goto LAB_1460f3a41;
    iVar11 = auStackX_10[0] * auStackX_18[0];
    pFVar12 = (this->Values).AllocatorInstance.Data;
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((auStackX_10[0] == 4) && ((param_1->field_0x2a & 1) == 0)) {
      piVar8 = &(this->Times).ArrayMax;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)(this->Times).ArrayNum << 2,(longlong)(this->Times).ArrayMax << 2
                );
      plVar6 = *(longlong **)&param_1->field_0x8;
      auStackX_18[0] = 0;
      if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
        }
      }
      else {
        auStackX_18[0] = *(uint *)*plVar6;
        *plVar6 = *plVar6 + 4;
      }
      if ((int)auStackX_18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_18[0]);
      }
      (this->Times).ArrayNum = 0;
      if (*piVar8 != auStackX_18[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,auStackX_18[0],&(this->Times).AllocatorInstance,0,piVar8);
      }
      if (0 < (int)auStackX_18[0]) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,auStackX_18[0],&(this->Times).AllocatorInstance,&(this->Times).ArrayNum,
                   piVar8);
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(this->Times).AllocatorInstance.Data,
                   (longlong)(int)(auStackX_18[0] * auStackX_10[0]));
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FFrameNumber,TSizedDefaultAllocator<32>_>(param_1,&this->Times)
      ;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((auStackX_10[0] != 0x1c) || ((param_1->field_0x2a & 1) != 0)) {
      TArrayPrivateFriend::Serialize<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>
                (param_1,&this->Values);
      iVar11 = iStackX_20;
      goto LAB_1460f3a41;
    }
    pTVar1 = &this->Values;
    piVar8 = &(this->Values).ArrayMax;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Values).ArrayNum * 0x1c,
               (longlong)(this->Values).ArrayMax * 0x1c);
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((int)auStackX_18[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_18[0]);
    }
    piVar9 = &(this->Values).ArrayNum;
    *piVar9 = 0;
    if (*piVar8 != auStackX_18[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,auStackX_18[0],&pTVar1->AllocatorInstance,0,piVar8);
    }
    iVar11 = iStackX_20;
    if ((int)auStackX_18[0] < 1) goto LAB_1460f3a41;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,auStackX_18[0],&pTVar1->AllocatorInstance,piVar9,piVar8);
    iVar11 = auStackX_18[0] * auStackX_10[0];
    pFVar12 = (pTVar1->AllocatorInstance).Data;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,(longlong)iVar11);
  iVar11 = iStackX_20;
LAB_1460f3a41:
  pfVar2 = &this->DefaultValue;
  pfVar7 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    auStackX_10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      auStackX_10[0] = (uint)(this->bHasDefaultValue != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
    if (1 < auStackX_10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      this->bHasDefaultValue = auStackX_10[0] != 0;
    }
  }
  else {
    this->bHasDefaultValue = *piVar8 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = &this->TickResolution;
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar3);
    }
  }
  else {
    pFVar3->Numerator = *piVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar8 = &(this->TickResolution).Denominator;
  piVar9 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar9 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar8);
    }
  }
  else {
    *piVar8 = *piVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (0x34 < iVar11) {
    puVar10 = *(ulonglong **)&param_1->field_0x8;
    if (puVar10[1] < *puVar10 + 4) {
      auStackX_10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      if (1 < auStackX_10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar10 = *puVar10 + 4;
    }
  }
  return true;
}

// SerializeFromMismatchedTag @ 1460f5730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneFloatChannel::SerializeFromMismatchedTag
          (FMovieSceneFloatChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int *piVar1;
  code *pcVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UScriptStruct *this_00;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  double in_XMM2_Qa;
  undefined1 auStackY_148 [32];
  FPropertyTypeName FStack_118;
  FFrameNumber FStack_114;
  int iStack_110;
  int iStack_10c;
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  TStack_108;
  FMovieSceneFloatValue FStack_f8;
  undefined1 auStack_d8 [16];
  longlong lStack_c8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  void *pvStack_90;
  undefined4 uStack_88;
  void *pvStack_80;
  longlong lStack_78;
  float fStack_70;
  undefined2 uStack_6c;
  ForAnyElementType FStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                    ::__l2::RichCurveName,"RichCurve");
    _Init_thread_footer(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((this == (FMovieSceneFloatChannel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x4cc,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FStack_118.Index = (param_1->TypeName).Index;
  bVar4 = UE::FPropertyTypeName::IsStruct
                    (&FStack_118,
                     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                     ::__l2::RichCurveName);
  if (bVar4) {
    auStack_d8._8_8_ = 0;
    lStack_c8 = 0;
    lStack_b0 = 0;
    pvStack_90 = (void *)0x0;
    uStack_88 = 0;
    pvStack_80 = (void *)0x0;
    lStack_78 = 0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    uStack_60 = 0;
    lStack_a8 = ___xmm_00000000ffffffff0000008000000000;
    lStack_a0 = _UNK_150631d98;
    fStack_70 = 3.4028235e+38;
    uStack_6c = 0x404;
    auStack_d8._0_8_ = &___7FRichCurve__6B_;
    this_00 = FRichCurve::StaticStruct();
    UScriptStruct::SerializeItem(this_00,param_2,auStack_d8,(void *)0x0);
    if (fStack_70 != __real_7f7fffff) {
      this->DefaultValue = fStack_70;
      this->bHasDefaultValue = true;
    }
    (this->PreInfinityExtrap).Value = (uchar)uStack_6c;
    (this->PostInfinityExtrap).Value = uStack_6c._1_1_;
    if ((int)(uint)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uStack_60 & 0xffffffff);
    }
    piVar1 = &(this->Times).ArrayMax;
    if (*piVar1 < (int)(uint)uStack_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)uStack_60,&(this->Times).AllocatorInstance,(this->Times).ArrayNum,piVar1)
      ;
    }
    if ((int)(uint)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)uStack_60);
    }
    piVar1 = &(this->Values).ArrayMax;
    if (*piVar1 < (int)(uint)uStack_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,(uint)uStack_60,&(this->Values).AllocatorInstance,(this->Values).ArrayNum,
                 piVar1);
    }
    GetLegacyConversionFrameRate();
    FRichCurve::GetKeyIterator((FRichCurve *)auStack_d8,&TStack_108);
    iVar9 = 0;
    for (; (pTVar3 = TStack_108.Container, lVar7 = (longlong)TStack_108.Index, -1 < TStack_108.Index
           && (TStack_108.Index < (TStack_108.Container)->ArrayNum));
        TStack_108.Index = TStack_108.Index + 1) {
      uVar6 = 0;
      if (TStack_108.Index < (TStack_108.Container)->ArrayNum) {
        uVar6 = (uint)~TStack_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar8 = (pTVar3->AllocatorInstance).Data + lVar7 * 0x1c;
      uVar6 = 0;
      if (TStack_108.Index < (TStack_108.Container)->ArrayNum) {
        uVar6 = (uint)~TStack_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      UpgradeLegacyMovieSceneTime((UObject *)&FStack_114,(FFrameRate)0x0,in_XMM2_Qa);
      FStack_f8.Tangent.ArriveTangentWeight = 0.0;
      FStack_f8.Tangent.LeaveTangentWeight = 0.0;
      FStack_f8.Tangent.UnserializedPaddingBytes[0] = '\0';
      FStack_f8.Tangent.UnserializedPaddingBytes[1] = '\0';
      FStack_f8.Tangent.UnserializedPaddingBytes[2] = '\0';
      FStack_f8.PaddingByte = '\0';
      FStack_f8.UnserializedPaddingBytes[0] = '\0';
      FStack_f8.Tangent.TangentWeightMode.Value = '\0';
      FStack_f8.Value = *(float *)(pFVar8 + 8);
      FStack_f8.InterpMode.Value = *(uchar *)pFVar8;
      FStack_f8.TangentMode.Value = *(uchar *)(pFVar8 + 1);
      FStack_f8.Tangent.ArriveTangent =
           ((float)iStack_10c / (float)iStack_110) * *(float *)(pFVar8 + 0xc);
      FStack_f8.Tangent.LeaveTangent =
           ((float)iStack_10c / (float)iStack_110) * *(float *)(pFVar8 + 0x14);
      ConvertInsertAndSort<FMovieSceneFloatValue>
                (iVar9,FStack_114,&FStack_f8,&this->Times,&this->Values);
      iVar9 = iVar9 + 1;
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    auStack_d8._0_8_ = &___7FIndexedCurve__6B_;
    if (pvStack_80 != (void *)0x0) {
      FMemory::Free(pvStack_80);
    }
    uStack_88 = 0;
    if (pvStack_90 != (void *)0x0) {
      FMemory::Free(pvStack_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(auStack_d8 + 8));
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// Set @ 1460f6d60

void __thiscall
FMovieSceneFloatChannel::Set
          (FMovieSceneFloatChannel *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  iVar3 = param_2->ArrayNum;
  iVar7 = 0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar3);
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&local_38,iVar3,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar3);
  if (iVar3 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&local_48,iVar3,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar4,(longlong)iVar3 << 2);
  }
  if (((int)local_40 != (int)local_30) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x84,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->Times;
  if (pTVar1 != (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    (this->Times).ArrayNum = (int)local_40;
    (this->Times).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->Values;
  if (pTVar2 != (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)&local_38) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = local_38.Data;
    (this->Values).ArrayNum = (int)local_30;
    (this->Values).ArrayMax = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  if (0 < (this->Times).ArrayNum) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&this->KeyHandles,(int)local_res8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->Times).ArrayNum);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// SetKeyTimes @ 1460f7d10

void __thiscall
FMovieSceneFloatChannel::SetKeyTimes
          (FMovieSceneFloatChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneFloatValue>::SetKeyTimes(&local_28,&local_38,&local_48);
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// SetKeysOnly @ 1460f7f30

void __thiscall
FMovieSceneFloatChannel::SetKeysOnly
          (FMovieSceneFloatChannel *this,TArrayView<FFrameNumber,int> *param_1,
          TArrayView<FMovieSceneFloatValue,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  
  iVar2 = param_2->ArrayNum;
  if (param_1->ArrayNum != iVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTimes.Num() == InValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneFloatChannel.cpp"
                       ,0x109,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->Times).ArrayMax;
  piVar1 = &(this->Times).ArrayMax;
  (this->Times).ArrayNum = iVar3;
  if ((iVar3 == 0) && (iVar4 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,iVar4,&(this->Times).AllocatorInstance,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Times).AllocatorInstance.Data,param_1->DataPtr,(longlong)iVar3 << 2);
    }
  }
  iVar3 = (this->Values).ArrayMax;
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar2,iVar3,&(this->Values).AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->Values).AllocatorInstance.Data,param_2->DataPtr,(longlong)iVar2 * 0x1c);
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return;
}

// UpdateOrAddKeys @ 1460fec90

void __thiscall
FMovieSceneFloatChannel::UpdateOrAddKeys
          (FMovieSceneFloatChannel *this,TArrayView<FFrameNumber_const_,int> *param_1,
          TArrayView<FMovieSceneFloatValue,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FMovieSceneFloatValue,int> local_48;
  TArrayView<FFrameNumber_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKeys(&local_28,&local_38,&local_48);
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(this,0.0);
  return;
}

// operator() @ 1504e2c60

bool __thiscall
`FMovieSceneFloatChannel::AsPiecewiseCurve'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6209394576726163644>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6209394576726163644>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2fe0

bool __thiscall
`FMovieSceneFloatChannel::AsPiecewiseCurve'::__l34::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6209394576726163682>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6209394576726163682>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

