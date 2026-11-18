// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ICompressedAnimData @ 1473d7b20

ICompressedAnimData * __thiscall
ICompressedAnimData::ICompressedAnimData(ICompressedAnimData *this,ICompressedAnimData *param_1)

{
  this->_padding_ = (longlong)&___7ICompressedAnimData__6B_;
  this->CompressedNumberOfKeys = param_1->CompressedNumberOfKeys;
  return this;
}

// ~ICompressedAnimData @ 1473daed0

void __thiscall ICompressedAnimData::~ICompressedAnimData(ICompressedAnimData *this)

{
  this->_padding_ = (longlong)&___7ICompressedAnimData__6B_;
  return;
}

// operator= @ 1473db8b0

ICompressedAnimData * __thiscall
ICompressedAnimData::operator=(ICompressedAnimData *this,ICompressedAnimData *param_1)

{
  this->CompressedNumberOfKeys = param_1->CompressedNumberOfKeys;
  return this;
}

// GetDebugString @ 147401630

FString * __thiscall
ICompressedAnimData::GetDebugString(ICompressedAnimData *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// SerializeCompressedData @ 147418f90

void __thiscall
ICompressedAnimData::SerializeCompressedData(ICompressedAnimData *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->CompressedNumberOfKeys;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147418fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// SerializeCompressedData @ 147418fe0

void __thiscall
ICompressedAnimData::SerializeCompressedData
          (ICompressedAnimData *this,UObject *param_1,FArchive *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147418fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_2);
  return;
}

