// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// operator<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData> @ 14672b900

TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>
* __thiscall
TPairInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&,UE::MovieScene::FAudioComponentEvaluationData_const_&>
::
operator<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>
          (TPairInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&,UE::MovieScene::FAudioComponentEvaluationData_const_&>
           *this,TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>
                 *__return_storage_ptr__)

{
  bool bVar1;
  FAudioComponentEvaluationData *pFVar2;
  TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *pTVar3;
  FWeakObjectPtr FVar4;
  double dVar5;
  
  pFVar2 = this->Value;
  pTVar3 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&pTVar3->field_0x8;
  FVar4 = (pFVar2->AudioComponent).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x10 = FVar4.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x14 = FVar4.ObjectSerialNumber;
  *(double *)&__return_storage_ptr__->field_0x18 = pFVar2->VolumeMultiplier;
  dVar5 = pFVar2->PitchMultiplier;
  __return_storage_ptr__->field_0x2c = 0;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar5;
  bVar1 = (pFVar2->PartialDesyncComputation).bIsSet;
  __return_storage_ptr__->field_0x2c = bVar1;
  if (bVar1 != false) {
    *(float *)&__return_storage_ptr__->field_0x28 = (pFVar2->PartialDesyncComputation).TypedValue;
  }
  __return_storage_ptr__->field_0x34 = 0;
  bVar1 = (pFVar2->LastAudioTime).bIsSet;
  __return_storage_ptr__->field_0x34 = bVar1;
  if (bVar1 != false) {
    *(float *)&__return_storage_ptr__->field_0x30 = (pFVar2->LastAudioTime).TypedValue;
  }
  __return_storage_ptr__->field_0x3c = 0;
  bVar1 = (pFVar2->LastContextTime).bIsSet;
  __return_storage_ptr__->field_0x3c = bVar1;
  if (bVar1 != false) {
    *(float *)&__return_storage_ptr__->field_0x38 = (pFVar2->LastContextTime).TypedValue;
  }
  __return_storage_ptr__->field_0x40 = pFVar2->bEvaluatedThisFrame;
  __return_storage_ptr__->field_0x41 = pFVar2->bAudioComponentHasBeenPlayed;
  return __return_storage_ptr__;
}

// operator<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short> @ 1468836d0

TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>
* __thiscall
TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>
::
operator<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>
          (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>
           *this,TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>
                 *__return_storage_ptr__)

{
  byte bVar1;
  FKeyType *pFVar2;
  ushort *puVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>
  *pTVar7;
  
  pFVar2 = this->Key;
  puVar3 = this->Value;
  iVar5 = (pFVar2->Object).ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = (pFVar2->Object).ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar5;
  bVar1 = (pFVar2->Property).TypeIndex;
  __return_storage_ptr__->field_0x10 = bVar1;
  if (2 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])
            (&__return_storage_ptr__->field_0x8,&pFVar2->Property);
  *(ushort *)&__return_storage_ptr__->field_0x14 = *puVar3;
  return __return_storage_ptr__;
}

