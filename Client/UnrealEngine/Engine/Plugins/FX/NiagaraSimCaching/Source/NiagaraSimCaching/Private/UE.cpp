// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 12

// Construct<FMovieSceneNiagaraCacheParams> @ 14ea20c10

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneNiagaraCacheParams>(void *param_1)

{
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams(param_1);
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x1040000;
  *(undefined ***)param_1 = &___7FMovieSceneNiagaraCacheParams__6B_;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffab | 0x2b;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FMovieSceneNiagaraCacheParams> @ 14ea20d60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraCacheParams>(void *param_1)

{
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams(param_1);
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x1040000;
  *(undefined ***)param_1 = &___7FMovieSceneNiagaraCacheParams__6B_;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffab | 0x2b;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FMovieSceneNiagaraCacheParams> @ 14ea20d70

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraCacheParams>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneNiagaraCacheParams__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// Copy<FMovieSceneNiagaraCacheParams> @ 14ea20dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneNiagaraCacheParams>
          (void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(uint *)((longlong)param_1 + 0x18) =
         *(uint *)((longlong)param_1 + 0x18) ^
         (*(uint *)((longlong)param_1 + 0x18) ^ *(uint *)((longlong)param_2 + 0x18)) & 1;
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    uVar1 = (*(uint *)((longlong)param_1 + 0x24) ^ *(uint *)((longlong)param_2 + 0x24)) & 1 ^
            *(uint *)((longlong)param_1 + 0x24);
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    uVar1 = (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 2 ^ uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    uVar1 = (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 4 ^ uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    uVar1 = (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 8 ^ uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    uVar1 = (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 0x10 ^ uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    uVar1 = (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 0x20 ^ uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    *(uint *)((longlong)param_1 + 0x24) =
         (uVar1 ^ *(uint *)((longlong)param_2 + 0x24)) & 0x40 ^ uVar1;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x38),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x38));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x48),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x48));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x68));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x78) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x78));
    }
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined1 *)((longlong)param_1 + 0x80) = *(undefined1 *)((longlong)param_2 + 0x80);
    *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
    *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
    *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
    *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
    param_1 = (void *)((longlong)param_1 + 0x88);
    param_2 = (void *)((longlong)param_2 + 0x88);
  }
  return true;
}

// Construct<FMovieSceneNiagaraCacheSectionTemplate> @ 14ea21000

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneNiagaraCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneNiagaraCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMovieSceneNiagaraCacheSectionTemplate> @ 14ea21020

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneNiagaraCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMovieSceneNiagaraCacheSectionTemplate> @ 14ea21040

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraCacheSectionTemplate>(void *param_1)

{
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            (*(FMovieSceneNiagaraSectionTemplateParameter **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneNiagaraCacheSectionTemplate> @ 14ea21080

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneNiagaraCacheSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FMovieSceneNiagaraSectionTemplateParameter *pFVar4;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pFVar6 = (ForAnyElementType *)((longlong)pvVar5 + 0x10);
    *(undefined1 *)((longlong)pvVar5 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar5);
    if (pFVar6 != pFVar1) {
      DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
                ((FMovieSceneNiagaraSectionTemplateParameter *)pFVar6->Data,
                 *(int *)((longlong)pvVar5 + 0x18));
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1c);
      pFVar4 = (FMovieSceneNiagaraSectionTemplateParameter *)pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
        ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int>
                  (pFVar6->Data,pFVar4,iVar3);
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x20);
  }
  return true;
}

// Construct<FMovieSceneNiagaraSectionTemplateParameter> @ 14ea21170

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneNiagaraSectionTemplateParameter>(void *param_1)

{
  undefined4 local_res8;
  undefined4 local_res10;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  local_res8 = local_res8 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  local_res10 = local_res10 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(ulonglong *)param_1 = (ulonglong)local_res8;
  *(ulonglong *)((longlong)param_1 + 8) = (ulonglong)local_res10;
  FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
            ((FMovieSceneNiagaraCacheParams *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FMovieSceneNiagaraSectionTemplateParameter> @ 14ea211d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraSectionTemplateParameter>
          (void *param_1)

{
  undefined4 local_res8;
  undefined4 local_res10;
  
  local_res10 = local_res10 & 0xffffff00;
  local_res8 = local_res8 & 0xffffff00;
  *(ulonglong *)param_1 = (ulonglong)local_res8;
  *(ulonglong *)((longlong)param_1 + 8) = (ulonglong)local_res10;
  FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
            ((FMovieSceneNiagaraCacheParams *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FMovieSceneNiagaraSectionTemplateParameter> @ 14ea21210

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraSectionTemplateParameter>(void *param_1)

{
  FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams
            ((FMovieSceneNiagaraCacheParams *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FMovieSceneNiagaraSectionTemplateParameter> @ 14ea21220

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneNiagaraSectionTemplateParameter>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      FMovieSceneNiagaraCacheParams::operator=
                ((FMovieSceneNiagaraCacheParams *)(puVar3 + 2),
                 (FMovieSceneNiagaraCacheParams *)
                 ((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1) + 0x10));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x13;
    } while (param_3 != 0);
  }
  return true;
}

