// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> @ 14608f1d0

TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> * __thiscall
TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>::
TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>
          (TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          FCachedInterpolation *param_1)

{
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  ::
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            ((TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
              *)this,&param_1->Data);
  (this->TypedValue).Range = param_1->Range;
  this->bIsSet = true;
  return this;
}

// TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_> @ 146117d20

TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
* __thiscall
TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
::
TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
           *this,TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  (this->TypedValue).TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  this->bIsSet = true;
  return this;
}

// operator= @ 14611e9a0

TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_>::operator=
          (TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if (param_1 != (TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *)this) {
    pFVar1 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->field0_0x0).TypedValue.ArrayNum = param_1->ArrayNum;
    (this->field0_0x0).TypedValue.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> @ 146298df0

TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> * __thiscall
TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_>::
TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_>
          (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *this,
          TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue> *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  
  *(undefined8 *)&this->TypedValue = *(undefined8 *)param_1;
  bVar3 = (this->TypedValue).field_0x48 & 0xfe;
  (this->TypedValue).field_0x48 = bVar3 | 2;
  if ((param_1->field_0x48 & 1) != 0) {
    (this->TypedValue).field_0x48 = bVar3 | 3;
    param_1->field_0x48 = param_1->field_0x48 & 0xfe;
    puVar1 = &(this->TypedValue).field_0x48;
    *puVar1 = *puVar1 ^ (param_1->field_0x48 ^ (this->TypedValue).field_0x48) & 2;
    uVar2 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(this->TypedValue).field_0x8 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&(this->TypedValue).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&(this->TypedValue).field_0x18 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(this->TypedValue).field_0x20 = uVar2;
    uVar2 = *(undefined8 *)&param_1->field_0x30;
    *(undefined8 *)&(this->TypedValue).field_0x28 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&(this->TypedValue).field_0x30 = uVar2;
    uVar2 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&(this->TypedValue).field_0x38 = *(undefined8 *)&param_1->field_0x38;
    *(undefined8 *)&(this->TypedValue).field_0x40 = uVar2;
    this->bIsSet = true;
    return this;
  }
  this->bIsSet = true;
  return this;
}

