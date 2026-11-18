// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_> @ 143200630

TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
* __thiscall
TPairInitializer<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
::
operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          (TPairInitializer<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
           *this,TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FGuid *pFVar3;
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
  *pTVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar3 = this->Key;
  puVar1 = &__return_storage_ptr__->field_0x10;
  pTVar4 = this->Value;
  uVar5 = pFVar3->B;
  uVar6 = pFVar3->C;
  uVar7 = pFVar3->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar3->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar7;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pTVar4->field_0x8;
  _Src = *(void **)pTVar4;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x18);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pTVar4->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x28,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&pTVar4->field_0x18);
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = *(undefined8 *)&pTVar4->field_0x68;
  return __return_storage_ptr__;
}

// operator<FString,BuildPatchServices::FFileManifest>_TTuple<FString,BuildPatchServices::FFileManifest> @ 143270c30

TTuple<FString,BuildPatchServices::FFileManifest> * __thiscall
TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&>::
operator<FString,BuildPatchServices::FFileManifest>_TTuple<FString,BuildPatchServices::FFileManifest>
          (TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&> *this,
          TTuple<FString,BuildPatchServices::FFileManifest> *__return_storage_ptr__)

{
  EFileMetaFlags EVar1;
  FFileManifest *pFVar2;
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
  uchar uVar17;
  
  pFVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Filename).Data.AllocatorInstance.Data;
  (pFVar2->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar2->Filename).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar2->Filename).Data.ArrayMax;
  (pFVar2->Filename).Data.ArrayNum = 0;
  (pFVar2->Filename).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->SymlinkTarget).Data.AllocatorInstance.Data;
  (pFVar2->SymlinkTarget).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x28 = (pFVar2->SymlinkTarget).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x2c = (pFVar2->SymlinkTarget).Data.ArrayMax;
  (pFVar2->SymlinkTarget).Data.ArrayNum = 0;
  (pFVar2->SymlinkTarget).Data.ArrayMax = 0;
  uVar3 = (pFVar2->FileHash).Hash[1];
  uVar4 = (pFVar2->FileHash).Hash[2];
  uVar5 = (pFVar2->FileHash).Hash[3];
  uVar6 = (pFVar2->FileHash).Hash[4];
  uVar7 = (pFVar2->FileHash).Hash[5];
  uVar8 = (pFVar2->FileHash).Hash[6];
  uVar9 = (pFVar2->FileHash).Hash[7];
  uVar10 = (pFVar2->FileHash).Hash[8];
  uVar11 = (pFVar2->FileHash).Hash[9];
  uVar12 = (pFVar2->FileHash).Hash[10];
  uVar13 = (pFVar2->FileHash).Hash[0xb];
  uVar14 = (pFVar2->FileHash).Hash[0xc];
  uVar15 = (pFVar2->FileHash).Hash[0xd];
  uVar16 = (pFVar2->FileHash).Hash[0xe];
  uVar17 = (pFVar2->FileHash).Hash[0xf];
  __return_storage_ptr__->field_0x30 = (pFVar2->FileHash).Hash[0];
  __return_storage_ptr__->field_0x31 = uVar3;
  __return_storage_ptr__->field_0x32 = uVar4;
  __return_storage_ptr__->field_0x33 = uVar5;
  __return_storage_ptr__->field_0x34 = uVar6;
  __return_storage_ptr__->field_0x35 = uVar7;
  __return_storage_ptr__->field_0x36 = uVar8;
  __return_storage_ptr__->field_0x37 = uVar9;
  __return_storage_ptr__->field_0x38 = uVar10;
  __return_storage_ptr__->field_0x39 = uVar11;
  __return_storage_ptr__->field_0x3a = uVar12;
  __return_storage_ptr__->field_0x3b = uVar13;
  __return_storage_ptr__->field_0x3c = uVar14;
  __return_storage_ptr__->field_0x3d = uVar15;
  __return_storage_ptr__->field_0x3e = uVar16;
  __return_storage_ptr__->field_0x3f = uVar17;
  uVar3 = (pFVar2->FileHash).Hash[0x11];
  uVar4 = (pFVar2->FileHash).Hash[0x12];
  uVar5 = (pFVar2->FileHash).Hash[0x13];
  __return_storage_ptr__->field_0x40 = (pFVar2->FileHash).Hash[0x10];
  __return_storage_ptr__->field_0x41 = uVar3;
  __return_storage_ptr__->field_0x42 = uVar4;
  __return_storage_ptr__->field_0x43 = uVar5;
  EVar1 = pFVar2->FileMetaFlags;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  __return_storage_ptr__->field_0x44 = EVar1;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x48 =
       (pFVar2->InstallTags).AllocatorInstance.Data;
  (pFVar2->InstallTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x50 = (pFVar2->InstallTags).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x54 = (pFVar2->InstallTags).ArrayMax;
  (pFVar2->InstallTags).ArrayNum = 0;
  (pFVar2->InstallTags).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x58 =
       (pFVar2->ChunkParts).AllocatorInstance.Data;
  (pFVar2->ChunkParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x60 = (pFVar2->ChunkParts).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x64 = (pFVar2->ChunkParts).ArrayMax;
  (pFVar2->ChunkParts).ArrayNum = 0;
  (pFVar2->ChunkParts).ArrayMax = 0;
  *(ulong64 *)&__return_storage_ptr__->field_0x68 = pFVar2->FileSize;
  return __return_storage_ptr__;
}

// operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 1432f89e0

TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>::
operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2);
  }
  return __return_storage_ptr__;
}

