// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 28

// FShaderCompilerEnvironment @ 145e40c50

/* WARNING: Type propagation algorithm not settling */

FShaderCompilerEnvironment * __thiscall
FShaderCompilerEnvironment::FShaderCompilerEnvironment
          (FShaderCompilerEnvironment *this,TMemoryHasher<FBlake3,FBlake3Hash> *param_1)

{
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar1;
  FRHIUniformBufferShaderBindingLayout *pFVar2;
  
  *(undefined8 *)&this->IncludeVirtualPathToContentsMap = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x48 = 0;
  *(undefined8 *)&this->IncludeVirtualPathToSharedContentsMap = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x48 = 0;
  (this->CompilerFlags).Data = 0;
  *(undefined8 *)&this->RenderTargetOutputFormatsMap = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x48 = 0;
  (this->ResourceTableMap).Resources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceTableMap).Resources.ArrayNum = 0;
  (this->ResourceTableMap).Resources.ArrayMax = 0;
  *(undefined8 *)&this->UniformBufferMap = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x40 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x48 = 0;
  (this->RHIShaderBindingLayout).Hash = 0;
  (this->RHIShaderBindingLayout).Flags = None;
  (this->RHIShaderBindingLayout).NumUniformBufferEntries = 0;
  this->ShaderBindingLayout = (FShaderBindingLayout *)0x0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[0].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[1].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[2].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[3].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[4].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[5].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[6].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[7].field1_0x10 = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pTVar1 = &(this->RHIShaderBindingLayout).UniformBufferEntries;
  pTVar1->Elements[0].LayoutName.Data.ArrayNum = 0;
  pTVar1->Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[1].LayoutName.Data.ArrayNum = 0;
  pFVar2[1].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[2].LayoutName.Data.ArrayNum = 0;
  pFVar2[2].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[3].LayoutName.Data.ArrayNum = 0;
  pFVar2[3].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[4].LayoutName.Data.ArrayNum = 0;
  pFVar2[4].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[5].LayoutName.Data.ArrayNum = 0;
  pFVar2[5].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[6].LayoutName.Data.ArrayNum = 0;
  pFVar2[6].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[7].LayoutName.Data.ArrayNum = 0;
  pFVar2[7].LayoutName.Data.ArrayMax = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->FullPrecisionInPS = false;
  this->Definitions = (TPimplPtr<FShaderCompilerDefinitions,1>)0x0;
  this->Hasher = param_1;
  *(undefined8 *)&this->CompileArgs = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x8 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x20 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x28 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompileArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompileArgs).field_0x34 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x40 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x48 = 0;
  *(undefined8 *)&this->UnusedStringDefinitions = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x48 = 0;
  return this;
}

// FShaderCompilerEnvironment @ 145e40ed0

FShaderCompilerEnvironment * __thiscall
FShaderCompilerEnvironment::FShaderCompilerEnvironment
          (FShaderCompilerEnvironment *this,FShaderCompilerEnvironment *param_1)

{
  TMap<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  int *piVar2;
  FShaderResourceTableMap *pFVar3;
  TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
  *this_01;
  int iVar4;
  FScriptContainerElement *_Src;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar5;
  
  *(undefined8 *)&this->IncludeVirtualPathToContentsMap = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)param_1);
  this_00 = &this->IncludeVirtualPathToSharedContentsMap;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x20 = 0;
  puVar1 = &(this->IncludeVirtualPathToSharedContentsMap).field_0x48;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->IncludeVirtualPathToSharedContentsMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->IncludeVirtualPathToSharedContentsMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)
               &(param_1->IncludeVirtualPathToSharedContentsMap).field_0x38,
               *(int *)&(param_1->IncludeVirtualPathToSharedContentsMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->IncludeVirtualPathToSharedContentsMap);
  }
  (this->CompilerFlags).Data = (param_1->CompilerFlags).Data;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x0 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x48 = 0;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->RenderTargetOutputFormatsMap,
              (TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->RenderTargetOutputFormatsMap);
  pFVar3 = &this->ResourceTableMap;
  (pFVar3->Resources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ResourceTableMap).Resources.ArrayMax;
  iVar4 = (param_1->ResourceTableMap).Resources.ArrayNum;
  _Src = (param_1->ResourceTableMap).Resources.AllocatorInstance.Data;
  (this->ResourceTableMap).Resources.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,piVar2);
    memcpy((pFVar3->Resources).AllocatorInstance.Data,_Src,(longlong)iVar4 << 4);
  }
  this_01 = &this->UniformBufferMap;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x20 = 0;
  puVar1 = &(this->UniformBufferMap).field_0x48;
  *(undefined4 *)&(this->UniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_01 != &param_1->UniformBufferMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->UniformBufferMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->UniformBufferMap).field_0x38,
               *(int *)&(param_1->UniformBufferMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->UniformBufferMap);
  }
  this->ShaderBindingLayout = param_1->ShaderBindingLayout;
  (this->RHIShaderBindingLayout).Hash = (param_1->RHIShaderBindingLayout).Hash;
  (this->RHIShaderBindingLayout).Flags = (param_1->RHIShaderBindingLayout).Flags;
  (this->RHIShaderBindingLayout).NumUniformBufferEntries =
       (param_1->RHIShaderBindingLayout).NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
            (&(this->RHIShaderBindingLayout).UniformBufferEntries,
             &(param_1->RHIShaderBindingLayout).UniformBufferEntries);
  this->TargetPlatform = param_1->TargetPlatform;
  this->FullPrecisionInPS = param_1->FullPrecisionInPS;
  this->Definitions = (TPimplPtr<FShaderCompilerDefinitions,1>)0x0;
  if (param_1->Definitions != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    TVar5 = (TPimplPtr<FShaderCompilerDefinitions,1>)
            (**(code **)((longlong)param_1->Definitions + -8))();
    this->Definitions = TVar5;
  }
  this->Hasher = param_1->Hasher;
  *(undefined8 *)&(this->CompileArgs).field_0x0 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x8 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x20 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x28 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompileArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompileArgs).field_0x34 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x40 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x48 = 0;
  TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
               *)&this->CompileArgs,
              (TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
               *)&param_1->CompileArgs);
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x0 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->UnusedStringDefinitions,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->UnusedStringDefinitions);
  return this;
}

// FShaderCompilerEnvironment @ 145e411a0

/* WARNING: Type propagation algorithm not settling */

FShaderCompilerEnvironment * __thiscall
FShaderCompilerEnvironment::FShaderCompilerEnvironment(FShaderCompilerEnvironment *this)

{
  TPimplPtr<FShaderCompilerDefinitions,1> *pTVar1;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar6;
  FRHIUniformBufferShaderBindingLayout *pFVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  TPimplPtr<FShaderCompilerDefinitions,1> local_78;
  uint local_70;
  uint uStack_6c;
  undefined1 *puStack_68;
  undefined4 local_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  FShaderCompilerEnvironment *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  
  puVar14 = (undefined8 *)0x0;
  puVar3 = &(this->IncludeVirtualPathToContentsMap).field_0xc;
  *(undefined8 *)&this->IncludeVirtualPathToContentsMap = 0;
  pTVar1 = &this->Definitions;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x8 = 0;
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToContentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x48 = 0;
  *(undefined8 *)&this->IncludeVirtualPathToSharedContentsMap = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x48 = 0;
  (this->CompilerFlags).Data = 0;
  *(undefined8 *)&this->RenderTargetOutputFormatsMap = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTargetOutputFormatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x48 = 0;
  (this->ResourceTableMap).Resources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceTableMap).Resources.ArrayNum = 0;
  (this->ResourceTableMap).Resources.ArrayMax = 0;
  *(undefined8 *)&this->UniformBufferMap = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->UniformBufferMap).field_0x40 = 0;
  *(undefined4 *)&(this->UniformBufferMap).field_0x48 = 0;
  (this->RHIShaderBindingLayout).Hash = 0;
  (this->RHIShaderBindingLayout).Flags = None;
  (this->RHIShaderBindingLayout).NumUniformBufferEntries = 0;
  this->ShaderBindingLayout = (FShaderBindingLayout *)0x0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[0].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[1].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[2].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[3].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[4].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[5].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[6].field1_0x10 = 0;
  *(undefined8 *)&(this->RHIShaderBindingLayout).UniformBufferEntries.Elements[7].field1_0x10 = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pTVar6 = &(this->RHIShaderBindingLayout).UniformBufferEntries;
  pTVar6->Elements[0].LayoutName.Data.ArrayNum = 0;
  pTVar6->Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[1].LayoutName.Data.ArrayNum = 0;
  pFVar7[1].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[2].LayoutName.Data.ArrayNum = 0;
  pFVar7[2].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[3].LayoutName.Data.ArrayNum = 0;
  pFVar7[3].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[4].LayoutName.Data.ArrayNum = 0;
  pFVar7[4].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[5].LayoutName.Data.ArrayNum = 0;
  pFVar7[5].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[6].LayoutName.Data.ArrayNum = 0;
  pFVar7[6].LayoutName.Data.ArrayMax = 0;
  (this->RHIShaderBindingLayout).UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar7 = (this->RHIShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar7[7].LayoutName.Data.ArrayNum = 0;
  pFVar7[7].LayoutName.Data.ArrayMax = 0;
  this->TargetPlatform = (ITargetPlatform *)0x0;
  this->FullPrecisionInPS = false;
  *pTVar1 = (TPimplPtr<FShaderCompilerDefinitions,1>)0x0;
  this->Hasher = (TMemoryHasher<FBlake3,FBlake3Hash> *)0x0;
  *(undefined8 *)&this->CompileArgs = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x8 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x20 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x28 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompileArgs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompileArgs).field_0x34 = 0;
  *(undefined8 *)&(this->CompileArgs).field_0x40 = 0;
  *(undefined4 *)&(this->CompileArgs).field_0x48 = 0;
  *(undefined8 *)&this->UnusedStringDefinitions = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->UnusedStringDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x48 = 0;
  puVar8 = ::operator_new(0x70);
  puVar12 = puVar14;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = UE::Core::Private::PimplPtr::DeleterFunc<FShaderCompilerDefinitions>;
    puVar8[1] = UE::Core::Private::PimplPtr::CopyFunc<FShaderCompilerDefinitions>;
    FShaderCompilerDefinitions::FShaderCompilerDefinitions
              ((FShaderCompilerDefinitions *)(puVar8 + 2),true);
    puVar12 = puVar8;
  }
  if (&local_78 == pTVar1) {
    if ((TPimplPtr<FShaderCompilerDefinitions,1>)(puVar12 + 2) !=
        (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
      pcVar9 = (code *)*puVar12;
      goto LAB_145e4149f;
    }
  }
  else {
    TVar2 = *pTVar1;
    *pTVar1 = (TPimplPtr<FShaderCompilerDefinitions,1>)(puVar12 + 2);
    if (TVar2 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
      pcVar9 = *(code **)((longlong)TVar2 + -0x10);
      puVar12 = (undefined8 *)((longlong)TVar2 + -0x10);
LAB_145e4149f:
      (*pcVar9)(puVar12);
    }
  }
  for (lVar4 = 0x3f; 0x1dUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar18 = 1 << ((byte)lVar4 & 0x1f);
  iVar11 = *(int *)&(this->IncludeVirtualPathToContentsMap).field_0x48;
  if ((iVar11 < (int)uVar18) || ((int)uVar18 < iVar11)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->IncludeVirtualPathToContentsMap).field_0x8);
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x8 = 0;
  if (*(int *)puVar3 != 0xf) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0xf,(ForAnyElementType *)this,0,(int *)puVar3);
  }
  puVar3 = &(this->IncludeVirtualPathToContentsMap).field_0x10;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x34 = 0;
  iVar11 = *(int *)&(this->IncludeVirtualPathToContentsMap).field_0x2c;
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x28 = 0;
  if ((iVar11 < 0x20) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar3,0);
  }
  if (!bVar5) {
    return this;
  }
  *(uint *)&(this->IncludeVirtualPathToContentsMap).field_0x48 = uVar18;
  if (*(longlong *)&(this->IncludeVirtualPathToContentsMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->IncludeVirtualPathToContentsMap).field_0x40,0,0,4);
  }
  if (uVar18 == 0) goto LAB_145e415c5;
  uVar19 = uVar18;
  if (uVar18 < 2) {
    if (*(longlong *)&(this->IncludeVirtualPathToContentsMap).field_0x40 != 0) {
      uVar19 = 0;
      goto LAB_145e41574;
    }
  }
  else {
LAB_145e41574:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->IncludeVirtualPathToContentsMap).field_0x40,0,uVar19,4);
  }
  if (0 < (int)uVar18) {
    uVar20 = (ulonglong)uVar18;
    puVar12 = puVar14;
    do {
      puVar16 = *(undefined1 **)&(this->IncludeVirtualPathToContentsMap).field_0x40;
      puVar13 = &(this->IncludeVirtualPathToContentsMap).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar13 = puVar16;
      }
      uVar10 = (ulonglong)puVar12 & (longlong)(int)uVar18 - 1U;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      *(undefined4 *)(puVar13 + uVar10 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_145e415c5:
  if (*(int *)&(this->IncludeVirtualPathToContentsMap).field_0x48 != 0) {
    uVar18 = *(uint *)&(this->IncludeVirtualPathToContentsMap).field_0x28;
    local_70 = 0;
    uStack_6c = 1;
    uStack_5c = 0;
    uStack_58 = 0;
    if (uVar18 != 0) {
      puVar21 = *(uint **)&(this->IncludeVirtualPathToContentsMap).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar3;
      }
      uVar19 = *puVar21;
      puVar12 = puVar14;
      while (uVar19 == 0) {
        uStack_58 = (int)puVar12 + 0x20;
        puVar12 = (undefined8 *)(ulonglong)uStack_58;
        iVar11 = (int)puVar14;
        local_70 = iVar11 + 1;
        puVar14 = (undefined8 *)(ulonglong)local_70;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_70)
        goto LAB_145e41668;
        uVar19 = puVar21[(longlong)iVar11 + 1];
      }
      uStack_6c = -uVar19 & uVar19;
      uVar20 = (ulonglong)uStack_6c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_5c = (uStack_58 - 1) + (int)lVar4;
      puVar14 = (undefined8 *)(ulonglong)uStack_5c;
      if ((int)uVar18 < (int)uStack_5c) {
LAB_145e41668:
        puVar14 = (undefined8 *)(ulonglong)uVar18;
        uStack_5c = uVar18;
      }
    }
    local_60 = 0xffffffff;
    local_48._padding_._0_4_ = local_70;
    local_48._padding_._4_4_ = uStack_6c;
    local_48.UnvisitedBitMask = 0xffffffff;
    local_48.CurrentBitIndex = uStack_5c;
    local_48._28_4_ = uStack_54;
    local_48.BaseBitIndex = uStack_58;
    puStack_68 = puVar3;
    local_50 = this;
    local_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((int)puVar14 < (int)uVar18) {
      do {
        iVar17 = (int)puVar14;
        puVar14 = (undefined8 *)
                  (*(longlong *)&local_50->IncludeVirtualPathToContentsMap + (longlong)iVar17 * 0x28
                  );
        iVar11 = *(int *)(*(longlong *)&local_50->IncludeVirtualPathToContentsMap + 8 +
                         (longlong)iVar17 * 0x28);
        if (iVar11 == 0) {
          pwVar15 = L"";
          iVar11 = 0;
        }
        else {
          pwVar15 = (wchar_t *)*puVar14;
          iVar11 = iVar11 + -1;
        }
        uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar15);
        uVar18 = *(int *)&(this->IncludeVirtualPathToContentsMap).field_0x48 - 1U & uVar18;
        *(uint *)((longlong)puVar14 + 0x24) = uVar18;
        puVar3 = *(undefined1 **)&(this->IncludeVirtualPathToContentsMap).field_0x40;
        puVar16 = &(this->IncludeVirtualPathToContentsMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar16 = puVar3;
        }
        uVar20 = (longlong)*(int *)&(this->IncludeVirtualPathToContentsMap).field_0x48 - 1U &
                 (longlong)(int)uVar18;
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar16 + uVar20 * 4);
        *(int *)(puVar16 + uVar20 * 4) = iVar17;
        local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
        puVar14 = (undefined8 *)(ulonglong)(uint)local_48.CurrentBitIndex;
      } while (local_48.CurrentBitIndex < (local_48.Array)->NumBits);
    }
  }
  return this;
}

// ~FShaderCompilerEnvironment @ 145e43920

void __thiscall
FShaderCompilerEnvironment::~FShaderCompilerEnvironment(FShaderCompilerEnvironment *this)

{
  void *pvVar1;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FRHIUniformBufferShaderBindingLayout *pFVar5;
  
  *(undefined4 *)&(this->UnusedStringDefinitions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnusedStringDefinitions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnusedStringDefinitions);
  *(undefined4 *)&(this->CompileArgs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompileArgs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompileArgs);
  TVar2 = this->Definitions;
  if (TVar2 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    (**(code **)((longlong)TVar2 + -0x10))((longlong)TVar2 + -0x10);
  }
  pFVar5 = (FRHIUniformBufferShaderBindingLayout *)&this->TargetPlatform;
  lVar4 = 8;
  do {
    pFVar3 = pFVar5[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar4 != 0);
  *(undefined4 *)&(this->UniformBufferMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UniformBufferMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UniformBufferMap);
  pFVar3 = (this->ResourceTableMap).Resources.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->RenderTargetOutputFormatsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderTargetOutputFormatsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderTargetOutputFormatsMap);
  *(undefined4 *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IncludeVirtualPathToSharedContentsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IncludeVirtualPathToSharedContentsMap);
  *(undefined4 *)&(this->IncludeVirtualPathToContentsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IncludeVirtualPathToContentsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 145e45220

FShaderCompilerEnvironment * __thiscall
FShaderCompilerEnvironment::operator=
          (FShaderCompilerEnvironment *this,FShaderCompilerEnvironment *param_1)

{
  int *piVar1;
  FShaderResourceTableMap *pFVar2;
  TPimplPtr<FShaderCompilerDefinitions,1> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar6;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)param_1);
  if (&this->IncludeVirtualPathToSharedContentsMap !=
      &param_1->IncludeVirtualPathToSharedContentsMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->IncludeVirtualPathToSharedContentsMap).field_0x38,
               (int *)&(this->IncludeVirtualPathToSharedContentsMap).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->IncludeVirtualPathToSharedContentsMap).field_0x38,
               *(int *)&(param_1->IncludeVirtualPathToSharedContentsMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->IncludeVirtualPathToSharedContentsMap,
                (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->IncludeVirtualPathToSharedContentsMap);
  }
  (this->CompilerFlags).Data = (param_1->CompilerFlags).Data;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->RenderTargetOutputFormatsMap,
              (TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->RenderTargetOutputFormatsMap);
  pFVar2 = &this->ResourceTableMap;
  if (pFVar2 != &param_1->ResourceTableMap) {
    iVar4 = (param_1->ResourceTableMap).Resources.ArrayNum;
    piVar1 = &(this->ResourceTableMap).Resources.ArrayMax;
    _Src = (param_1->ResourceTableMap).Resources.AllocatorInstance.Data;
    iVar5 = *piVar1;
    (this->ResourceTableMap).Resources.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,iVar5,(ForAnyElementType *)pFVar2,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pFVar2->Resources).AllocatorInstance.Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  if (&this->UniformBufferMap != &param_1->UniformBufferMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->UniformBufferMap).field_0x38,
               (int *)&(this->UniformBufferMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->UniformBufferMap).field_0x38,
               *(int *)&(param_1->UniformBufferMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->UniformBufferMap,
                (TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->UniformBufferMap);
  }
  this->ShaderBindingLayout = param_1->ShaderBindingLayout;
  (this->RHIShaderBindingLayout).Hash = (param_1->RHIShaderBindingLayout).Hash;
  (this->RHIShaderBindingLayout).Flags = (param_1->RHIShaderBindingLayout).Flags;
  (this->RHIShaderBindingLayout).NumUniformBufferEntries =
       (param_1->RHIShaderBindingLayout).NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
            (&(this->RHIShaderBindingLayout).UniformBufferEntries,
             &(param_1->RHIShaderBindingLayout).UniformBufferEntries);
  this->TargetPlatform = param_1->TargetPlatform;
  pTVar3 = &this->Definitions;
  this->FullPrecisionInPS = param_1->FullPrecisionInPS;
  if (&param_1->Definitions != pTVar3) {
    TVar6 = *pTVar3;
    if (TVar6 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
      *pTVar3 = (TPimplPtr<FShaderCompilerDefinitions,1>)0x0;
      (**(code **)((longlong)TVar6 + -0x10))();
    }
    TVar6 = param_1->Definitions;
    if (TVar6 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
      TVar6 = (TPimplPtr<FShaderCompilerDefinitions,1>)(**(code **)((longlong)TVar6 + -8))();
      *pTVar3 = TVar6;
    }
  }
  this->Hasher = param_1->Hasher;
  TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
               *)&this->CompileArgs,
              (TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
               *)&param_1->CompileArgs);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->UnusedStringDefinitions,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->UnusedStringDefinitions);
  return this;
}

// ContainsDefinition @ 145e4f960

bool __thiscall
FShaderCompilerEnvironment::ContainsDefinition(FShaderCompilerEnvironment *this,FName param_1)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uVar4 = FShaderCompilerDefinitions::FindMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1,param_1.Number + uVar4);
    if (uVar4 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar4 < *(int *)((longlong)this_00 + 0x38)) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((((TArray<EShaderCompilerDefineVariant,TSizedDefaultAllocator<32>_> *)
           ((longlong)this_00 + 0x30))->AllocatorInstance).Data[(int)uVar4] !=
          (FScriptContainerElement)0x0) {
        return true;
      }
    }
  }
  return false;
}

// GetDefinitionsAsCommentedCode @ 145e577d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e57e3c) */

FString * __thiscall
FShaderCompilerEnvironment::GetDefinitionsAsCommentedCode
          (FShaderCompilerEnvironment *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar3;
  TPimplPtr<FShaderCompilerDefinitions,1> TVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_938 [32];
  FIdentityFunctor local_8e8 [8];
  ForAnyElementType local_8e0;
  undefined8 local_8d8;
  undefined1 local_8d0 [8];
  FString local_8c8;
  FString local_8b8;
  TPimplPtr<FShaderCompilerDefinitions,1> local_8a8;
  uint local_8a0;
  wchar_t local_89c [1035];
  wchar_t local_86;
  undefined2 local_84;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_938;
  if ((this->Definitions == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Definitions.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x4f4,
                         L"GetDefinitionsAsCommentedCode is not supported on FShaderCompilerEnvironment in hashing mode"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar2)();
    return pFVar10;
  }
  local_8e0.Data = (FScriptContainerElement *)0x0;
  local_8d8 = 0;
  uVar6 = *(uint *)((longlong)this->Definitions + 0x54);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&local_8e0,0,(int *)((longlong)&local_8d8 + 4));
  }
  local_8a8 = this->Definitions;
  local_89c[0] = L'\0';
  local_86 = L'\0';
  local_8a0 = 0;
  iVar9 = *(int *)((longlong)local_8a8 + 0x28);
  if (0 < iVar9) {
    do {
      TVar3 = local_8a8;
      lVar13 = (longlong)(int)local_8a0;
      uVar6 = 0;
      if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x38)) {
        uVar6 = ~local_8a0 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar2)();
        return pFVar10;
      }
    } while ((*(char *)(lVar13 + *(longlong *)((longlong)TVar3 + 0x30)) == '\0') &&
            (local_8a0 = local_8a0 + 1, (int)local_8a0 < iVar9));
  }
  uVar6 = 0;
  if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
    do {
      TVar3 = local_8a8;
      lVar13 = (longlong)(int)local_8a0;
      uVar7 = uVar6;
      if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x38)) {
        uVar7 = ~local_8a0 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar2)();
        return pFVar10;
      }
      TVar4 = local_8a8;
      lVar14 = (longlong)(int)local_8a0;
      if (*(char *)(lVar13 + *(longlong *)((longlong)TVar3 + 0x30)) == '\x01') {
        uVar7 = uVar6;
        if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
          uVar7 = ~local_8a0 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
        uVar7 = *(uint *)(*(longlong *)((longlong)TVar4 + 0x20) + 8 + lVar14 * 0xc);
        if (uVar7 < 10) {
LAB_145e57aab:
          local_86 = (short)uVar7 + L'0';
          local_84 = 0;
        }
        else {
          pwVar12 = L"%d";
LAB_145e57ad3:
          TCString<wchar_t>::SprintfImpl(&local_86,pwVar12);
        }
      }
      else {
        uVar7 = uVar6;
        if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x38)) {
          uVar7 = ~local_8a0 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
        TVar3 = local_8a8;
        lVar13 = (longlong)(int)local_8a0;
        if (*(char *)(lVar14 + *(longlong *)((longlong)TVar4 + 0x30)) == '\x02') {
          uVar7 = uVar6;
          if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
            uVar7 = ~local_8a0 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
          uVar7 = *(uint *)(*(longlong *)((longlong)TVar3 + 0x20) + 8 + lVar13 * 0xc);
          if (uVar7 < 10) goto LAB_145e57aab;
          pwVar12 = L"%u";
          goto LAB_145e57ad3;
        }
        uVar7 = uVar6;
        if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x38)) {
          uVar7 = ~local_8a0 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
        TVar4 = local_8a8;
        lVar14 = (longlong)(int)local_8a0;
        if (*(char *)(lVar13 + *(longlong *)((longlong)TVar3 + 0x30)) == '\x03') {
          uVar7 = uVar6;
          if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
            uVar7 = ~local_8a0 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
          TCString<wchar_t>::SprintfImpl(&local_86,L"%#.9gf");
        }
        else {
          uVar7 = uVar6;
          if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x38)) {
            uVar7 = ~local_8a0 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
          if ((*(char *)(lVar14 + *(longlong *)((longlong)TVar4 + 0x30)) != '\x04') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Defines.ValueTypes[Index] == EShaderCompilerDefineVariant::String"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderCompilerDefinitions.h"
                                 ,0x125,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
          TVar3 = local_8a8;
          lVar13 = (longlong)(int)local_8a0;
          uVar7 = uVar6;
          if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
            uVar7 = ~local_8a0 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
          uVar7 = *(uint *)(*(longlong *)((longlong)TVar3 + 0x20) + 8 + lVar13 * 0xc);
          uVar8 = uVar6;
          if ((int)uVar7 < *(int *)((longlong)TVar3 + 0x48)) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
        }
      }
      TVar3 = local_8a8;
      lVar13 = (longlong)(int)local_8a0;
      uVar7 = uVar6;
      if ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28)) {
        uVar7 = ~local_8a0 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar2)();
        return pFVar10;
      }
      ::FName::ToStringInternal
                ((FName *)(*(longlong *)((longlong)TVar3 + 0x20) + lVar13 * 0xc),local_89c,0x40b);
      ::FString::PrintfImpl(&local_8c8,L"// #define %s %s\n");
      if (((local_8e0.Data <= (FScriptContainerElement *)&local_8c8) &&
          ((FScriptContainerElement *)&local_8c8 < local_8e0.Data + (longlong)local_8d8._4_4_ * 0x10
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar2)();
        return pFVar10;
      }
      iVar9 = (int)local_8d8;
      if ((int)local_8d8 == local_8d8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_8e0,(int *)((longlong)&local_8d8 + 4));
      }
      local_8d8 = CONCAT44(local_8d8._4_4_,iVar9 + 1);
      lVar13 = (longlong)iVar9;
      *(undefined8 *)(local_8e0.Data + lVar13 * 0x10) = 0;
      *(FScriptContainerElement **)(local_8e0.Data + lVar13 * 0x10) =
           local_8c8.Data.AllocatorInstance.Data;
      *(int *)(local_8e0.Data + lVar13 * 0x10 + 8) = local_8c8.Data.ArrayNum;
      *(int *)(local_8e0.Data + lVar13 * 0x10 + 0xc) = local_8c8.Data.ArrayMax;
      local_8c8.Data.ArrayNum = 0;
      local_8c8.Data.ArrayMax = 0;
      local_8c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = *(int *)((longlong)local_8a8 + 0x28);
      TVar3 = local_8a8;
      do {
        local_8a0 = local_8a0 + 1;
        local_8a8 = TVar3;
        if (iVar9 <= (int)local_8a0) break;
        lVar13 = (longlong)(int)local_8a0;
        uVar7 = uVar6;
        if ((int)local_8a0 < *(int *)((longlong)TVar3 + 0x38)) {
          uVar7 = ~local_8a0 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
        plVar1 = (longlong *)((longlong)TVar3 + 0x30);
        TVar3 = local_8a8;
      } while (*(char *)(lVar13 + *plVar1) == '\0');
    } while ((int)local_8a0 < *(int *)((longlong)local_8a8 + 0x28));
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_8e0.Data,(int)local_8d8,local_8e8[0],(TLess<void> *)local_8e8);
  iVar9 = (int)local_8d8;
  uVar11 = (ulonglong)(int)local_8d8;
  pFVar16 = local_8e0.Data + uVar11 * 0x10;
  local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8.Data.ArrayNum = 0;
  local_8b8.Data.ArrayMax = 0;
  FVar15.Data = local_8e0.Data;
  while( true ) {
    if ((int)uVar11 != iVar9) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_8d0);
    }
    if (FVar15.Data == pFVar16) break;
    uVar7 = *(int *)(FVar15.Data + 8) - 1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      uVar7 = uVar6;
    }
    ::FString::AppendChars(&local_8b8,*(wchar_t **)FVar15.Data,uVar7);
    uVar11 = local_8d8 & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x10;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"#line 1 \"%s\"\n%s");
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_8e0.Data,(int)local_8d8);
  if (local_8e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data);
  }
  return __return_storage_ptr__;
}

// Merge @ 145e62890

void __thiscall
FShaderCompilerEnvironment::Merge
          (FShaderCompilerEnvironment *this,FShaderCompilerEnvironment *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FShaderCompilerEnvironment *pFVar5;
  TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
  *pTVar6;
  TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  FString *pFVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  uint *puVar26;
  undefined1 local_res8 [8];
  FShaderCompilerEnvironment *local_res10;
  int local_res18;
  undefined4 uStack_12c;
  uint local_128;
  undefined1 local_118 [8];
  TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
  *local_110;
  FShaderCompilerEnvironment *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong local_b0;
  longlong local_a8;
  FString *local_a0;
  FString *local_98;
  undefined4 local_74;
  undefined4 local_54;
  FString *pFVar21;
  FString *pFVar25;
  
  uVar11 = *(uint *)&(param_1->IncludeVirtualPathToContentsMap).field_0x28;
  TStack_100.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(param_1->IncludeVirtualPathToContentsMap).field_0x10;
  pFVar17 = (FString *)0x0;
  uVar20 = 0;
  local_128 = 1;
  uVar18 = 0;
  pFVar16 = pFVar17;
  uVar9 = 1;
  uVar24 = uVar18;
  if (uVar11 != 0) {
    puVar26 = *(uint **)&(param_1->IncludeVirtualPathToContentsMap).field_0x20;
    pFVar16 = (FString *)(ulonglong)uVar11;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)TStack_100.Array;
    }
    uVar9 = *puVar26;
    pFVar21 = pFVar17;
    pFVar25 = pFVar17;
    uVar24 = uVar20;
    uVar18 = uVar20;
    while (uVar9 == 0) {
      iVar12 = (int)pFVar21;
      uVar24 = (int)pFVar25 + 0x20;
      pFVar25 = (FString *)(ulonglong)uVar24;
      uVar18 = iVar12 + 1;
      pFVar21 = (FString *)(ulonglong)uVar18;
      uVar9 = 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_145e62940;
      uVar9 = puVar26[(longlong)iVar12 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar10 = (uVar24 - 1) + local_res18;
    if ((int)uVar11 < (int)uVar10) {
      uVar10 = uVar11;
    }
    pFVar16 = (FString *)(ulonglong)uVar10;
  }
LAB_145e62940:
  TStack_100.CurrentBitIndex = (int)pFVar16;
  TStack_100._padding_ = CONCAT44(uVar9,uVar18);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = local_74;
  TStack_100.BaseBitIndex = uVar24;
  local_res10 = param_1;
  local_108 = param_1;
  if (TStack_100.CurrentBitIndex < (int)uVar11) {
    do {
      pFVar5 = local_108;
      lVar14 = (longlong)(int)pFVar16 * 0x28;
      pFVar16 = (FString *)(*(longlong *)&local_108->IncludeVirtualPathToContentsMap + lVar14);
      iVar12 = (pFVar16->Data).ArrayNum;
      if (iVar12 == 0) {
        pwVar15 = L"";
        uVar11 = uVar20;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        uVar11 = iVar12 - 1;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,pwVar15);
      iVar12 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                           *)this,uVar11,pFVar16);
      if (iVar12 == -1) {
LAB_145e62a26:
        local_b0 = *(longlong *)&pFVar5->IncludeVirtualPathToContentsMap + lVar14;
        local_a8 = local_b0 + 0x10;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000020,
                   (bool *)&local_b0);
      }
      else {
        lVar1 = *(longlong *)&this->IncludeVirtualPathToContentsMap + (longlong)iVar12 * 0x28;
        pFVar16 = (FString *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pFVar16 = pFVar17;
        }
        if (pFVar16 == (FString *)0x0) goto LAB_145e62a26;
        lVar1 = *(longlong *)&pFVar5->IncludeVirtualPathToContentsMap;
        iVar12 = *(int *)(lVar1 + 0x18 + lVar14);
        uVar11 = iVar12 - 1;
        if (iVar12 == 0) {
          uVar11 = uVar20;
        }
        ::FString::AppendChars(pFVar16,*(wchar_t **)(lVar1 + 0x10 + lVar14),uVar11);
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      pFVar16 = (FString *)(ulonglong)(uint)TStack_100.CurrentBitIndex;
    } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
  }
  if ((*(int *)&(param_1->IncludeVirtualPathToSharedContentsMap).field_0x8 !=
       *(int *)&(param_1->IncludeVirtualPathToSharedContentsMap).field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.IncludeVirtualPathToSharedContentsMap.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x4db,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->CompilerFlags).Data = (this->CompilerFlags).Data | (param_1->CompilerFlags).Data;
  FShaderResourceTableMap::Append(&this->ResourceTableMap,&param_1->ResourceTableMap);
  TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
             *)&this->UniformBufferMap,
            ((*(int *)&(this->UniformBufferMap).field_0x8 -
             *(int *)&(this->UniformBufferMap).field_0x34) -
            *(int *)&(param_1->UniformBufferMap).field_0x34) +
            *(int *)&(param_1->UniformBufferMap).field_0x8);
  local_110 = &param_1->UniformBufferMap;
  puVar3 = &(param_1->UniformBufferMap).field_0x10;
  iVar12 = *(int *)&(param_1->UniformBufferMap).field_0x28;
  iVar23 = 0;
  iVar13 = 0;
  if (iVar12 != 0) {
    puVar26 = *(uint **)&(param_1->UniformBufferMap).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar3;
    }
    uVar11 = *puVar26;
    while (uVar11 == 0) {
      iVar19 = (int)pFVar17;
      iVar23 = iVar23 + 0x20;
      uVar20 = iVar19 + 1;
      pFVar17 = (FString *)(ulonglong)uVar20;
      iVar13 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar20) goto LAB_145e62b81;
      uVar11 = puVar26[(longlong)iVar19 + 1];
    }
    local_128 = -uVar11 & uVar11;
    uVar2 = (ulonglong)local_128 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = iVar23 + -1 + (int)lVar14;
    if (iVar12 < iVar13) {
      iVar13 = iVar12;
    }
  }
LAB_145e62b81:
  uVar11 = *(uint *)&(param_1->UniformBufferMap).field_0x28;
  uVar9 = uVar11 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(local_128,uVar20);
  TStack_d8.CurrentBitIndex = iVar13;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_d8._28_4_ = local_54;
  TStack_d8.BaseBitIndex = iVar23;
  uStack_b8 = CONCAT44(uStack_12c,
                       *(int *)&(param_1->UniformBufferMap).field_0x8 -
                       *(int *)&(param_1->UniformBufferMap).field_0x34);
  local_e0 = local_110;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar6 = local_110;
  uVar20 = *(uint *)&(param_1->UniformBufferMap).field_0x28;
  if (uVar11 != uVar20) {
    puVar22 = *(undefined1 **)&(param_1->UniformBufferMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar14 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_145e62ca0;
      uVar11 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = (int)lVar14 + -1 + uVar9;
    if ((int)uVar20 < (int)uVar11) {
      uVar11 = uVar20;
    }
  }
LAB_145e62ca0:
  while( true ) {
    pTVar7 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar5 = local_res10;
    if (((TStack_d8.CurrentBitIndex == uVar11) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == pTVar6))
    break;
    pFVar17 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_d8.CurrentBitIndex * 0x40);
    iVar23 = (pFVar17->Data).ArrayNum;
    iVar12 = iVar23 + -1;
    if (iVar23 == 0) {
      pwVar15 = L"";
      iVar12 = 0;
    }
    else {
      pwVar15 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar15);
    iVar12 = TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
                         *)&this->UniformBufferMap,uVar9,pFVar17);
    if (iVar12 == -1) {
      local_98 = pFVar17 + 1;
      local_a0 = pFVar17;
      TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<FString_const_&,FUniformBufferEntry_const_&>_>
                ((TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
                  *)&this->UniformBufferMap,(uint)local_118,
                 (TPairInitializer<FString_const_&,FUniformBufferEntry_const_&> *)(ulonglong)uVar9,
                 (bool *)&local_a0);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  if ((this->Definitions == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Definitions.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x4eb,
                         L"Merge is not supported on FShaderCompilerEnvironment in hashing mode"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FShaderCompilerDefinitions::Merge
            ((FShaderCompilerDefinitions *)this->Definitions,
             (FShaderCompilerDefinitions *)pFVar5->Definitions);
  TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
  ::Append<FDefaultSetAllocator>(&this->CompileArgs,&pFVar5->CompileArgs);
  TMap<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
  ::Append<FDefaultSetAllocator>
            (&this->RenderTargetOutputFormatsMap,&pFVar5->RenderTargetOutputFormatsMap);
  this->FullPrecisionInPS = (bool)(this->FullPrecisionInPS | pFVar5->FullPrecisionInPS);
  return;
}

// SerializeCompilationDependencies @ 145e6c0b0

void __thiscall
FShaderCompilerEnvironment::SerializeCompilationDependencies
          (FShaderCompilerEnvironment *this,FArchive *param_1)

{
  FShaderCompilerFlags *pFVar1;
  ulong64 *puVar2;
  
  TSetPrivateFriend::
  Serialize<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
                      *)&this->CompileArgs);
  pFVar1 = &this->CompilerFlags;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Data);
    }
  }
  else {
    pFVar1->Data = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
                      *)&this->RenderTargetOutputFormatsMap);
  TArrayPrivateFriend::Serialize<FUniformResourceEntry,TSizedDefaultAllocator<32>_>
            (param_1,&(this->ResourceTableMap).Resources);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
                      *)&this->UniformBufferMap);
  ::operator<<(param_1,&this->RHIShaderBindingLayout);
  ::operator<<(param_1,&this->FullPrecisionInPS);
  if ((param_1->field_0x28 & 1) != 0) {
    FShaderResourceTableMap::FixupOnLoad(&this->ResourceTableMap,&this->UniformBufferMap);
  }
  return;
}

// SerializeEverythingButFiles @ 145e6c1a0

void __thiscall
FShaderCompilerEnvironment::SerializeEverythingButFiles
          (FShaderCompilerEnvironment *this,FArchive *param_1)

{
  FShaderCompilerFlags *pFVar1;
  ulong64 *puVar2;
  
  if (this->Definitions != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    ::operator<<(param_1,(FShaderCompilerDefinitions *)this->Definitions);
  }
  TSetPrivateFriend::
  Serialize<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
                      *)&this->CompileArgs);
  pFVar1 = &this->CompilerFlags;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Data);
    }
  }
  else {
    pFVar1->Data = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
                      *)&this->RenderTargetOutputFormatsMap);
  TArrayPrivateFriend::Serialize<FUniformResourceEntry,TSizedDefaultAllocator<32>_>
            (param_1,&(this->ResourceTableMap).Resources);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
                      *)&this->UniformBufferMap);
  ::operator<<(param_1,&this->RHIShaderBindingLayout);
  ::operator<<(param_1,&this->FullPrecisionInPS);
  if ((param_1->field_0x28 & 1) != 0) {
    FShaderResourceTableMap::FixupOnLoad(&this->ResourceTableMap,&this->UniformBufferMap);
  }
  return;
}

// SetDefine @ 145e6d660

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,FString *param_2
          )

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  this_00 = this->Definitions;
  if (this_00 == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    ::FName::ToString(&param_1->Name,&local_18);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    SetDefine(this,(wchar_t *)FVar2.Data,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue((FShaderCompilerDefinitions *)this_00,iVar1,pwVar3)
    ;
  }
  return;
}

// SetDefine @ 145e6d710

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,int param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  ::FName::ToString(&param_1->Name,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetDefine(this,(wchar_t *)FVar2.Data,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6d7b0

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,uint param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  ::FName::ToString(&param_1->Name,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetDefine(this,(wchar_t *)FVar2.Data,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6d850

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,float param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FString local_28 [2];
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  ::FName::ToString(&param_1->Name,local_28);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  SetDefine(this,(wchar_t *)FVar2.Data,param_2);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6d8f0

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,wchar_t *param_2
          )

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  ::FName::ToString(&param_1->Name,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetDefine(this,(wchar_t *)FVar2.Data,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6d990

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FShaderCompilerDefineNameCache *param_1,bool param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  this_00 = this->Definitions;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  ::FName::ToString(&param_1->Name,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetDefine(this,(wchar_t *)FVar2.Data,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6da30

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,wchar_t *param_1,wchar_t *param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  FName local_res8;
  
  this_00 = this->Definitions;
  if (this_00 == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pTVar1 = this->Hasher;
    sVar4 = wcslen(param_1);
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
    pTVar1 = this->Hasher;
    sVar4 = wcslen(param_2);
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_2,(longlong)(int)sVar4);
  }
  else {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar2,param_2);
  }
  return;
}

// SetDefine @ 145e6dae0

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,wchar_t *param_1,FString *param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  FName local_res8;
  
  this_00 = this->Definitions;
  if (this_00 == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pTVar1 = this->Hasher;
    sVar4 = wcslen(param_1);
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
    ::operator<<((FArchive *)this->Hasher,param_2);
  }
  else {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue((FShaderCompilerDefinitions *)this_00,iVar2,pwVar5)
    ;
  }
  return;
}

// SetDefine @ 145e6db90

void __thiscall
FShaderCompilerEnvironment::SetDefine(FShaderCompilerEnvironment *this,wchar_t *param_1,int param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  FName local_res8;
  uint local_res18 [4];
  
  this_00 = this->Definitions;
  local_res18[0] = param_2;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar2,param_2);
    return;
  }
  pTVar1 = this->Hasher;
  sVar4 = wcslen(param_1);
  (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
  pTVar1 = this->Hasher;
  if (*(longlong *)pTVar1->_padding_ + 4U <= (ulonglong)((longlong *)pTVar1->_padding_)[1]) {
    *(longlong *)pTVar1->_padding_ = *(longlong *)pTVar1->_padding_ + 4;
    return;
  }
  if ((pTVar1->_padding_ & 0x10000) == 0) {
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,local_res18,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)pTVar1,local_res18);
  return;
}

// SetDefine @ 145e6dc80

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,wchar_t *param_1,uint param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  FName local_res8;
  uint local_res18 [4];
  
  this_00 = this->Definitions;
  local_res18[0] = param_2;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar2,param_2);
    return;
  }
  pTVar1 = this->Hasher;
  sVar4 = wcslen(param_1);
  (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
  pTVar1 = this->Hasher;
  if (*(longlong *)pTVar1->_padding_ + 4U <= (ulonglong)((longlong *)pTVar1->_padding_)[1]) {
    *(longlong *)pTVar1->_padding_ = *(longlong *)pTVar1->_padding_ + 4;
    return;
  }
  if ((pTVar1->_padding_ & 0x10000) == 0) {
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,local_res18,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)pTVar1,local_res18);
  return;
}

// SetDefine @ 145e6dd70

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,wchar_t *param_1,float param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  FName local_res8;
  float local_res18 [2];
  
  this_00 = this->Definitions;
  local_res18[0] = param_2;
  if (this_00 == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pTVar1 = this->Hasher;
    sVar4 = wcslen(param_1);
    (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
    pTVar1 = this->Hasher;
    if ((ulonglong)((longlong *)pTVar1->_padding_)[1] < *(longlong *)pTVar1->_padding_ + 4U) {
      if ((pTVar1->_padding_ & 0x10000) == 0) {
        (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)pTVar1,(uint *)local_res18);
      }
    }
    else {
      *(longlong *)pTVar1->_padding_ = *(longlong *)pTVar1->_padding_ + 4;
    }
  }
  else {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar2,param_2);
  }
  return;
}

// SetDefine @ 145e6de50

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,wchar_t *param_1,bool param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  TMemoryHasher<FBlake3,FBlake3Hash> *pTVar1;
  int iVar2;
  FName *pFVar3;
  size_t sVar4;
  FName local_res8;
  bool local_res18 [16];
  
  this_00 = this->Definitions;
  local_res18[0] = param_2;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,param_1);
    iVar2 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,*pFVar3);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar2,param_2);
    return;
  }
  pTVar1 = this->Hasher;
  sVar4 = wcslen(param_1);
  (**(code **)(pTVar1->_padding_ + 0x188))(pTVar1,param_1,(longlong)(int)sVar4);
  ::operator<<((FArchive *)this->Hasher,local_res18);
  return;
}

// SetDefine @ 145e6def0

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FName param_1,FString *param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  FString local_18;
  
  this_00 = this->Definitions;
  local_res10 = param_1;
  if (this_00 == (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    pFVar2 = ::FName::ToString(&local_res10,&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    SetDefine(this,pwVar3,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue((FShaderCompilerDefinitions *)this_00,iVar1,pwVar3)
    ;
  }
  return;
}

// SetDefine @ 145e6dfa0

void __thiscall
FShaderCompilerEnvironment::SetDefine(FShaderCompilerEnvironment *this,FName param_1,int param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  FString local_18;
  
  this_00 = this->Definitions;
  local_res10 = param_1;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  SetDefine(this,pwVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6e040

void __thiscall
FShaderCompilerEnvironment::SetDefine(FShaderCompilerEnvironment *this,FName param_1,uint param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  FString local_18;
  
  this_00 = this->Definitions;
  local_res10 = param_1;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  SetDefine(this,pwVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6e0e0

void __thiscall
FShaderCompilerEnvironment::SetDefine(FShaderCompilerEnvironment *this,FName param_1,float param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10 [3];
  FString local_28 [2];
  
  this_00 = this->Definitions;
  local_res10[0] = param_1;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  pFVar2 = ::FName::ToString(local_res10,local_28);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  SetDefine(this,pwVar3,param_2);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6e180

void __thiscall
FShaderCompilerEnvironment::SetDefine
          (FShaderCompilerEnvironment *this,FName param_1,wchar_t *param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  FString local_18;
  
  this_00 = this->Definitions;
  local_res10 = param_1;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  SetDefine(this,pwVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefine @ 145e6e220

void __thiscall
FShaderCompilerEnvironment::SetDefine(FShaderCompilerEnvironment *this,FName param_1,bool param_2)

{
  TPimplPtr<FShaderCompilerDefinitions,1> this_00;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  FString local_18;
  
  this_00 = this->Definitions;
  local_res10 = param_1;
  if (this_00 != (TPimplPtr<FShaderCompilerDefinitions,1>)0x0) {
    iVar1 = FShaderCompilerDefinitions::FindOrAddMapIndex
                      ((FShaderCompilerDefinitions *)this_00,param_1);
    FShaderCompilerDefinitions::InternalSetValue
              ((FShaderCompilerDefinitions *)this_00,iVar1,param_2);
    return;
  }
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  SetDefine(this,pwVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

