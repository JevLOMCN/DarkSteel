// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64> @ 14321fce0

TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
* __thiscall
TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
::
TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
          (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
           *this,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&this->field_0x18,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&param_1->field_0x18);
  *(undefined8 *)&this->field_0x68 = *(undefined8 *)&param_1->field_0x68;
  return this;
}

// operator= @ 1432299a0

TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash> *
__thiscall
TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>::operator=
          (TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>
           *this,TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>
                 *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
  }
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  uVar1 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x30 = uVar1;
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  return this;
}

// TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,FSHAHash_const_&> @ 143270790

TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash> * __thiscall
TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash>::
TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,FSHAHash_const_&>
          (TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FSHAHash *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
    memcpy(*(void **)this,_Src,(longlong)iVar1);
  }
  uVar2 = param_2->Hash[1];
  uVar3 = param_2->Hash[2];
  uVar4 = param_2->Hash[3];
  uVar5 = param_2->Hash[4];
  uVar6 = param_2->Hash[5];
  uVar7 = param_2->Hash[6];
  uVar8 = param_2->Hash[7];
  uVar9 = param_2->Hash[8];
  uVar10 = param_2->Hash[9];
  uVar11 = param_2->Hash[10];
  uVar12 = param_2->Hash[0xb];
  uVar13 = param_2->Hash[0xc];
  uVar14 = param_2->Hash[0xd];
  uVar15 = param_2->Hash[0xe];
  uVar16 = param_2->Hash[0xf];
  this->field_0x10 = param_2->Hash[0];
  this->field_0x11 = uVar2;
  this->field_0x12 = uVar3;
  this->field_0x13 = uVar4;
  this->field_0x14 = uVar5;
  this->field_0x15 = uVar6;
  this->field_0x16 = uVar7;
  this->field_0x17 = uVar8;
  this->field_0x18 = uVar9;
  this->field_0x19 = uVar10;
  this->field_0x1a = uVar11;
  this->field_0x1b = uVar12;
  this->field_0x1c = uVar13;
  this->field_0x1d = uVar14;
  this->field_0x1e = uVar15;
  this->field_0x1f = uVar16;
  uVar2 = param_2->Hash[0x11];
  uVar3 = param_2->Hash[0x12];
  uVar4 = param_2->Hash[0x13];
  this->field_0x20 = param_2->Hash[0x10];
  this->field_0x21 = uVar2;
  this->field_0x22 = uVar3;
  this->field_0x23 = uVar4;
  return this;
}

// TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,enum_BuildPatchServices::EChunkLoadResult_&> @ 143270820

TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,BuildPatchServices::EChunkLoadResult> *
__thiscall
TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult>
::
TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,enum_BuildPatchServices::EChunkLoadResult_&>
          (void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          EChunkLoadResult *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1);
  }
  *(EChunkLoadResult *)((longlong)this + 0x10) = *param_2;
  return this;
}

// TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_> @ 14327e170

TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
* __thiscall
TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
::
TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
          (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
           *this,TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  *(undefined8 *)&param_1->field_0x18 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x20);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x38,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x38);
  return this;
}

// operator= @ 14328a0c0

TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
* __thiscall
TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
::operator=(TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
            *this,TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (this != param_1) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
  }
  puVar1 = &param_1->field_0x10;
  puVar2 = &this->field_0x10;
  if (puVar2 != puVar1) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  uVar3 = *(undefined8 *)&param_1->field_0x28;
  uVar4 = *(undefined8 *)&this->field_0x20;
  uVar5 = *(undefined8 *)&this->field_0x28;
  uVar6 = *(undefined8 *)&this->field_0x30;
  uVar7 = *(undefined8 *)&this->field_0x38;
  uVar8 = *(undefined8 *)&this->field_0x40;
  uVar9 = *(undefined8 *)&this->field_0x48;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = uVar3;
  *(undefined8 *)&param_1->field_0x20 = uVar4;
  *(undefined8 *)&param_1->field_0x28 = uVar5;
  *(undefined8 *)&param_1->field_0x30 = uVar6;
  *(undefined8 *)&param_1->field_0x38 = uVar7;
  *(undefined8 *)&param_1->field_0x40 = uVar8;
  *(undefined8 *)&param_1->field_0x48 = uVar9;
  return this;
}

// operator= @ 14328a1a0

TTuple<FGuid,BuildPatchServices::FChunkUriResponse> * __thiscall
TTuple<FGuid,BuildPatchServices::FChunkUriResponse>::operator=
          (TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *this,
          TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  puVar1 = &param_1->field_0x18;
  puVar2 = &this->field_0x18;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar3;
  this->field_0x10 = param_1->field_0x10;
  if (puVar2 != puVar1) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
    *(undefined4 *)&this->field_0x24 = *(undefined4 *)&param_1->field_0x24;
    *(undefined8 *)&param_1->field_0x20 = 0;
  }
  if (&this->field_0x28 != &param_1->field_0x28) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->field_0x28,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->field_0x28);
  }
  return this;
}

