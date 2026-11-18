// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// GetAccessors @ 14d618030

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,1>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,1>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

