// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 34

// DereferenceIfNecessary<BuildPatchServices::FBuildPatchFileConstructor,BuildPatchServices::FBuildPatchFileConstructor_*_&> @ 1431ae1e0

FBuildPatchFileConstructor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FBuildPatchFileConstructor,BuildPatchServices::FBuildPatchFileConstructor_*_&>
          (FBuildPatchFileConstructor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FBuildPatchServicesModule,FBuildPatchServicesModule_*_&> @ 1431ae200

FBuildPatchServicesModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FBuildPatchServicesModule,FBuildPatchServicesModule_*_&>
          (FBuildPatchServicesModule **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_> @ 1431b5280

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_>
          (ushort param_1,ForElementType<FGuid> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRequestInfo::FRequestSplat>_> @ 1431b5350

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRequestInfo::FRequestSplat>_>
          (ushort param_1,ForElementType<FRequestInfo::FRequestSplat> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FRequestInfo::FRequestSplat>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1431b54f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  ForElementType<unsigned_char> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<unsigned_char> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x81) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x80;
LAB_1431b55b4:
    uVar6 = uVar8;
    if (_Src == (ForElementType<unsigned_char>)0x0) goto LAB_1431b5600;
    memmove(param_4,(void *)_Src,(longlong)iVar1);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x81) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x81) goto LAB_1431b55b4;
    iVar5 = iVar1;
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1);
      goto LAB_1431b5600;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1431b5600:
  *param_6 = uVar6;
  return iVar1;
}

// Construct<FFileManifestData> @ 1431ff510

void __cdecl UE::CoreUObject::Private::Construct<FFileManifestData>(void *param_1)

{
  ::FString::FString(param_1,L"");
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x50),L"");
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FFileManifestData> @ 1431ff570

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFileManifestData>(void *param_1)

{
  ::FString::FString(param_1,L"");
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x50),L"");
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FFileManifestData> @ 1431ff5d0

void __cdecl UE::CoreUObject::Private::Destruct<FFileManifestData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FFileManifestData> @ 1431ff630

bool __cdecl
UE::CoreUObject::Private::Copy<FFileManifestData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x18);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      iVar3 = *(int *)((longlong)param_2 + 0x30);
      piVar2 = (int *)((longlong)param_1 + 0x34);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x38),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x38));
    *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_2 + 0x48);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
    *(undefined1 *)((longlong)param_1 + 0x60) = *(undefined1 *)((longlong)param_2 + 0x60);
    *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
    param_1 = (int *)((longlong)param_1 + 0x68);
    param_2 = (int *)((longlong)param_2 + 0x68);
  }
  return true;
}

// Construct<FChunkPartData> @ 1431ff830

void __cdecl UE::CoreUObject::Private::Construct<FChunkPartData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FChunkPartData> @ 1431ff850

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChunkPartData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChunkPartData> @ 1431ff870

void __cdecl UE::CoreUObject::Private::Destruct<FChunkPartData>(void *param_1)

{
  return;
}

// Copy<FChunkPartData> @ 1431ff880

bool __cdecl UE::CoreUObject::Private::Copy<FChunkPartData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChunkInfoData> @ 1431ff8c0

void __cdecl UE::CoreUObject::Private::Construct<FChunkInfoData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChunkInfoData> @ 1431ff8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChunkInfoData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FChunkInfoData> @ 1431ff920

void __cdecl UE::CoreUObject::Private::Destruct<FChunkInfoData>(void *param_1)

{
  return;
}

// Copy<FChunkInfoData> @ 1431ff930

bool __cdecl UE::CoreUObject::Private::Copy<FChunkInfoData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSHAHashData> @ 1431ff980

void __cdecl UE::CoreUObject::Private::Construct<FSHAHashData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSHAHashData> @ 1431ff9a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSHAHashData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSHAHashData> @ 1431ff9c0

void __cdecl UE::CoreUObject::Private::Destruct<FSHAHashData>(void *param_1)

{
  return;
}

// Copy<FSHAHashData> @ 1431ff9d0

bool __cdecl UE::CoreUObject::Private::Copy<FSHAHashData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomFieldData> @ 1431ffa10

void __cdecl UE::CoreUObject::Private::Construct<FCustomFieldData>(void *param_1)

{
  ::FString::FString(param_1,L"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),L"");
  return;
}

// ConstructForTests<FCustomFieldData> @ 1431ffa40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomFieldData>(void *param_1)

{
  ::FString::FString(param_1,L"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),L"");
  return;
}

// Destruct<FCustomFieldData> @ 1431ffa70

void __cdecl UE::CoreUObject::Private::Destruct<FCustomFieldData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomFieldData> @ 1431ffab0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomFieldData>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<BuildPatchServices::FChunkDeltaOptimiser,BuildPatchServices::FChunkDeltaOptimiser_*_&> @ 143215840

FChunkDeltaOptimiser * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FChunkDeltaOptimiser,BuildPatchServices::FChunkDeltaOptimiser_*_&>
          (FChunkDeltaOptimiser **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FDiffManifests,BuildPatchServices::FDiffManifests_*_&> @ 143215860

FDiffManifests * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FDiffManifests,BuildPatchServices::FDiffManifests_*_&>
          (FDiffManifests **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&> @ 143273860

FDownloadDelegates * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&>
          (FDownloadDelegates **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&> @ 143273880

FDownloadDelegates * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&>
          (FDownloadDelegates **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FFileOperationTracker,BuildPatchServices::FFileOperationTracker_*_&> @ 1432738a0

FFileOperationTracker * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FFileOperationTracker,BuildPatchServices::FFileOperationTracker_*_&>
          (FFileOperationTracker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FInstallerAnalytics,BuildPatchServices::FInstallerAnalytics_*_&> @ 1432738c0

FInstallerAnalytics * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FInstallerAnalytics,BuildPatchServices::FInstallerAnalytics_*_&>
          (FInstallerAnalytics **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FOptimisedDelta,BuildPatchServices::FOptimisedDelta_*_&> @ 1432738e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FOptimisedDelta * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FOptimisedDelta,BuildPatchServices::FOptimisedDelta_*_&>
          (FOptimisedDelta **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FPackageChunks,BuildPatchServices::FPackageChunks_*_&> @ 143273900

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FPackageChunks * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FPackageChunks,BuildPatchServices::FPackageChunks_*_&>
          (FPackageChunks **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<BuildPatchServices::FFakeHttpManager,BuildPatchServices::FFakeHttpManager_*_&> @ 1432f8a80

FFakeHttpManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<BuildPatchServices::FFakeHttpManager,BuildPatchServices::FFakeHttpManager_*_&>
          (FFakeHttpManager **param_1)

{
  return *param_1;
}

