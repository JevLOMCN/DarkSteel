// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e6fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonAnimation * __thiscall
FGLTFLevelSequenceDataConverter::Convert
          (FGLTFLevelSequenceDataConverter *this,ALevelSequenceActor *param_1)

{
  longlong lVar1;
  ULevel *pUVar2;
  ULevelSequence *pUVar3;
  FGLTFJsonAnimation *pFVar4;
  ULevelSequence *local_res18;
  ULevelSequence *local_res20;
  
  pUVar2 = AActor::GetLevel((AActor *)param_1);
  if (pUVar2 != (ULevel *)0x0) {
    pUVar3 = ALevelSequenceActor::GetSequence(param_1);
    if (pUVar3 != (ULevelSequence *)0x0) {
      lVar1 = *(longlong *)&this->field_0x58;
      local_res20 = pUVar3;
      TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>::
      Emplace<ULevelSequence_const_*_const_&>
                ((TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x5a8),&local_res18,(bool *)&local_res20);
      pFVar4 = TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::GetOrAdd
                         (*(TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>
                            **)(lVar1 + 0x8d8),pUVar2,pUVar3);
      return pFVar4;
    }
  }
  return (FGLTFJsonAnimation *)0x0;
}

