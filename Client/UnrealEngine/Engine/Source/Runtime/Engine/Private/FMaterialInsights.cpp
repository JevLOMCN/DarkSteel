// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMaterialInsights @ 147f29da0

FMaterialInsights * __thiscall FMaterialInsights::FMaterialInsights(FMaterialInsights *this)

{
  (this->ConnectionInsights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionInsights).ArrayNum = 0;
  (this->ConnectionInsights).ArrayMax = 0;
  (this->UniformParameterAllocationInsights).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->UniformParameterAllocationInsights).ArrayNum = 0;
  (this->UniformParameterAllocationInsights).ArrayMax = 0;
  (this->IRString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IRString).Data.ArrayNum = 0;
  (this->IRString).Data.ArrayMax = 0;
  *(undefined8 *)&this->Legacy_ShaderStringParameters = 0;
  *(undefined8 *)&(this->Legacy_ShaderStringParameters).field_0x8 = 0;
  *(undefined8 *)&(this->Legacy_ShaderStringParameters).field_0x20 = 0;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x28 = 0;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x34 = 0;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Legacy_ShaderStringParameters).field_0x40 = 0;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x48 = 0;
  (this->LegacyHLSLCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyHLSLCode).Data.ArrayNum = 0;
  (this->LegacyHLSLCode).Data.ArrayMax = 0;
  *(undefined8 *)&this->New_ShaderStringParameters = 0;
  *(undefined8 *)&(this->New_ShaderStringParameters).field_0x8 = 0;
  *(undefined8 *)&(this->New_ShaderStringParameters).field_0x20 = 0;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x28 = 0;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x34 = 0;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->New_ShaderStringParameters).field_0x40 = 0;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x48 = 0;
  (this->NewHLSLCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewHLSLCode).Data.ArrayNum = 0;
  (this->NewHLSLCode).Data.ArrayMax = 0;
  return this;
}

// Empty @ 147f37970

void __thiscall FMaterialInsights::Empty(FMaterialInsights *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  
  piVar1 = &(this->ConnectionInsights).ArrayMax;
  (this->ConnectionInsights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->UniformParameterAllocationInsights).ArrayMax;
  (this->UniformParameterAllocationInsights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->UniformParameterAllocationInsights).AllocatorInstance,0,piVar1);
  }
  ::FString::Empty(&this->IRString);
  bVar4 = 1 < *(int *)&(this->Legacy_ShaderStringParameters).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->Legacy_ShaderStringParameters);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Legacy_ShaderStringParameters,0,
                    *(int *)&(this->Legacy_ShaderStringParameters).field_0x8);
  puVar2 = &(this->Legacy_ShaderStringParameters).field_0xc;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->Legacy_ShaderStringParameters,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x34 = 0;
  iVar3 = *(int *)&(this->Legacy_ShaderStringParameters).field_0x2c;
  *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->Legacy_ShaderStringParameters).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->Legacy_ShaderStringParameters).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Legacy_ShaderStringParameters);
  }
  ::FString::Empty(&this->LegacyHLSLCode);
  this_00 = &this->New_ShaderStringParameters;
  bVar4 = 1 < *(int *)&(this->New_ShaderStringParameters).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->New_ShaderStringParameters).field_0x8);
  puVar2 = &(this->New_ShaderStringParameters).field_0xc;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x34 = 0;
  iVar3 = *(int *)&(this->New_ShaderStringParameters).field_0x2c;
  *(undefined4 *)&(this->New_ShaderStringParameters).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->New_ShaderStringParameters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->New_ShaderStringParameters).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->New_ShaderStringParameters).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ::FString::Empty(&this->NewHLSLCode);
  return;
}

