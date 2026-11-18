// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// TTuple<FString,FGuid><TStringView<char8_t>,FGuid> @ 142d1a210

TTuple<FString,FGuid> * __thiscall
TTuple<FString,FGuid>::TTuple<FString,FGuid><TStringView<char8_t>,FGuid>
          (TTuple<FString,FGuid> *this,TStringView<char8_t> *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TTuple<FString,FGuid> *pTVar4;
  FString local_18;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  pTVar4 = (TTuple<FString,FGuid> *)
           ::FString::ConstructFromPtrSize
                     (&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (this != pTVar4) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)pTVar4;
    *(undefined8 *)pTVar4 = 0;
    *(int *)&this->field_0x8 = *(int *)&pTVar4->field_0x8;
    *(int *)&this->field_0xc = *(int *)&pTVar4->field_0xc;
    *(undefined8 *)&pTVar4->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  *(uint *)&this->field_0x10 = param_2->A;
  *(uint *)&this->field_0x14 = uVar1;
  *(uint *)&this->field_0x18 = uVar2;
  *(uint *)&this->field_0x1c = uVar3;
  return this;
}

