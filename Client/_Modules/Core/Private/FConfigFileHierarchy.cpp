// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FConfigFileHierarchy @ 1418550c0

FConfigFileHierarchy * __thiscall
FConfigFileHierarchy::FConfigFileHierarchy(FConfigFileHierarchy *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->KeyGen = 0x200000;
  return this;
}

// AddDynamicLayer @ 14185c8a0

int __thiscall FConfigFileHierarchy::AddDynamicLayer(FConfigFileHierarchy *this,FString *param_1)

{
  int local_res8 [2];
  TPairInitializer<int_&,FString_const_&> local_res10;
  int *local_18;
  FString *local_10;
  
  this->KeyGen = this->KeyGen + 1;
  local_res8[0] = this->KeyGen;
  local_18 = local_res8;
  local_10 = param_1;
  TSet<TTuple<int,FUtf8String>,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,FString_const_&>_>
            ((TSet<TTuple<int,FUtf8String>,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_18);
  return local_res8[0];
}

// AddStaticLayer @ 141860990

int __thiscall
FConfigFileHierarchy::AddStaticLayer
          (FConfigFileHierarchy *this,FString *param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  int iVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FUtf8String local_28;
  undefined1 local_18 [16];
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_4 = param_5 + ((param_2 * 0x40 + param_3) * 0x40 + param_4) * 8;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = FUtf8String::ConstructFromPtrSize
                     ((FUtf8String *)local_18,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                      iVar3);
  if (&local_28 != pFVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  local_18._0_8_ = &param_4;
  local_18._8_8_ = &local_28;
  TSet<TTuple<int,FUtf8String>,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,FUtf8String_&&>_>
            ((TSet<TTuple<int,FUtf8String>,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<int_&,FUtf8String_&&> *)&param_5,(bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return param_4;
}

// GenerateDynamicKey @ 1418722f0

int __thiscall FConfigFileHierarchy::GenerateDynamicKey(FConfigFileHierarchy *this)

{
  this->KeyGen = this->KeyGen + 1;
  return this->KeyGen;
}

