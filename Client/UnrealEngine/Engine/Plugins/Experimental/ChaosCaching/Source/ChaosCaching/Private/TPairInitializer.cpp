// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// operator<FName,FParticleTransformTrack>_TTuple<FName,FParticleTransformTrack> @ 14dadd6e0

TTuple<FName,FParticleTransformTrack> * __thiscall
TPairInitializer<FName_const_&,FParticleTransformTrack_&&>::
operator<FName,FParticleTransformTrack>_TTuple<FName,FParticleTransformTrack>
          (TPairInitializer<FName_const_&,FParticleTransformTrack_&&> *this,
          TTuple<FName,FParticleTransformTrack> *__return_storage_ptr__)

{
  FParticleTransformTrack *pFVar1;
  uint uVar2;
  
  pFVar1 = this->Value;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 =
       (pFVar1->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  (pFVar1->RawTransformTrack).PosKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x10 = (pFVar1->RawTransformTrack).PosKeys.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x14 = (pFVar1->RawTransformTrack).PosKeys.ArrayMax;
  (pFVar1->RawTransformTrack).PosKeys.ArrayNum = 0;
  (pFVar1->RawTransformTrack).PosKeys.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x18 =
       (pFVar1->RawTransformTrack).RotKeys.AllocatorInstance.Data;
  (pFVar1->RawTransformTrack).RotKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x20 = (pFVar1->RawTransformTrack).RotKeys.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x24 = (pFVar1->RawTransformTrack).RotKeys.ArrayMax;
  (pFVar1->RawTransformTrack).RotKeys.ArrayNum = 0;
  (pFVar1->RawTransformTrack).RotKeys.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x28 =
       (pFVar1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
  (pFVar1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x30 = (pFVar1->RawTransformTrack).ScaleKeys.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x34 = (pFVar1->RawTransformTrack).ScaleKeys.ArrayMax;
  (pFVar1->RawTransformTrack).ScaleKeys.ArrayNum = 0;
  (pFVar1->RawTransformTrack).ScaleKeys.ArrayMax = 0;
  *(float *)&__return_storage_ptr__->field_0x38 = pFVar1->BeginOffset;
  __return_storage_ptr__->field_0x3c = pFVar1->bDeactivateOnEnd;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x40 =
       (pFVar1->KeyTimestamps).AllocatorInstance.Data;
  (pFVar1->KeyTimestamps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x48 = (pFVar1->KeyTimestamps).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x4c = (pFVar1->KeyTimestamps).ArrayMax;
  (pFVar1->KeyTimestamps).ArrayNum = 0;
  (pFVar1->KeyTimestamps).ArrayMax = 0;
  return __return_storage_ptr__;
}

