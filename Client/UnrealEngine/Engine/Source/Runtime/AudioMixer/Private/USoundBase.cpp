// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// CreateSoundGenerator @ 146550c60

TSharedPtr<ISoundGenerator,1> * __thiscall
USoundBase::CreateSoundGenerator
          (USoundBase *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  (**(code **)(this->_padding_ + 0x378))();
  return __return_storage_ptr__;
}

// EnableSubmixSendsOnPreview @ 146552d10

bool __thiscall USoundBase::EnableSubmixSendsOnPreview(USoundBase *this)

{
  return false;
}

// GetAllDefaultParameters @ 1465550a0

bool __thiscall
USoundBase::GetAllDefaultParameters
          (USoundBase *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// ImplementsParameterInterface @ 14655c5b0

bool __thiscall
USoundBase::ImplementsParameterInterface
          (USoundBase *this,TSharedPtr<Audio::FParameterInterface,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// InitResources @ 14655f990

void __thiscall USoundBase::InitResources(USoundBase *this)

{
  return;
}

// IsAttenuationSettingsEditable @ 146560c80

bool __thiscall USoundBase::IsAttenuationSettingsEditable(USoundBase *this)

{
  return true;
}

