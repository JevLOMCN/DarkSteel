// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FChunkUriResponse @ 14327ebc0

FChunkUriResponse * __thiscall
BuildPatchServices::FChunkUriResponse::FChunkUriResponse
          (FChunkUriResponse *this,FChunkUriResponse *param_1)

{
  bool bVar1;
  
  bVar1 = param_1->bFailed;
  (this->Uri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bFailed = bVar1;
  (this->Uri).Data.AllocatorInstance.Data = (param_1->Uri).Data.AllocatorInstance.Data;
  (param_1->Uri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Uri).Data.ArrayNum = (param_1->Uri).Data.ArrayNum;
  (this->Uri).Data.ArrayMax = (param_1->Uri).Data.ArrayMax;
  (param_1->Uri).Data.ArrayNum = 0;
  (param_1->Uri).Data.ArrayMax = 0;
  *(undefined8 *)&(this->AdditionalHeaders).field_0x0 = 0;
  *(undefined8 *)&(this->AdditionalHeaders).field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalHeaders).field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalHeaders).field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalHeaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalHeaders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalHeaders).field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalHeaders).field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalHeaders).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->AdditionalHeaders,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->AdditionalHeaders);
  return this;
}

