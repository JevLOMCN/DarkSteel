// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 26

// Construct<FSimulationStageMetaData> @ 148de79f0

void __cdecl UE::CoreUObject::Private::Construct<FSimulationStageMetaData>(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 1;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  return;
}

// ConstructForTests<FSimulationStageMetaData> @ 148de7a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSimulationStageMetaData>(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 1;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  return;
}

// Destruct<FSimulationStageMetaData> @ 148de7b10

void __cdecl UE::CoreUObject::Private::Destruct<FSimulationStageMetaData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
    return;
  }
  return;
}

// Copy<FSimulationStageMetaData> @ 148de7b50

bool __cdecl
UE::CoreUObject::Private::Copy<FSimulationStageMetaData>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      puVar3[1] = *(undefined8 *)((longlong)pvVar2 + 8);
      puVar3[2] = *(undefined8 *)((longlong)pvVar2 + 0x10);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)pvVar2 + 0x18);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *(undefined8 *)((longlong)pvVar2 + 0x1c);
      *(undefined8 *)((longlong)puVar3 + 0x24) = *(undefined8 *)((longlong)pvVar2 + 0x24);
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)pvVar2 + 0x2c);
      *(undefined1 *)((longlong)puVar3 + 0x34) = *(undefined1 *)((longlong)pvVar2 + 0x34);
      puVar3[7] = *(undefined8 *)((longlong)pvVar2 + 0x38);
      puVar3[8] = *(undefined8 *)((longlong)pvVar2 + 0x40);
      *(undefined1 *)(puVar3 + 9) = *(undefined1 *)((longlong)pvVar2 + 0x48);
      uVar1 = (*(uint *)((longlong)puVar3 + 0x4c) ^ *(uint *)((longlong)pvVar2 + 0x4c)) & 1 ^
              *(uint *)((longlong)puVar3 + 0x4c);
      *(uint *)((longlong)puVar3 + 0x4c) = uVar1;
      uVar1 = (uVar1 ^ *(uint *)((longlong)pvVar2 + 0x4c)) & 2 ^ uVar1;
      *(uint *)((longlong)puVar3 + 0x4c) = uVar1;
      uVar1 = (uVar1 ^ *(uint *)((longlong)pvVar2 + 0x4c)) & 4 ^ uVar1;
      *(uint *)((longlong)puVar3 + 0x4c) = uVar1;
      *(uint *)((longlong)puVar3 + 0x4c) = (uVar1 ^ *(uint *)((longlong)pvVar2 + 0x4c)) & 8 ^ uVar1;
      puVar3[10] = *(undefined8 *)((longlong)pvVar2 + 0x50);
      *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)((longlong)pvVar2 + 0x58);
      *(undefined8 *)((longlong)puVar3 + 0x5c) = *(undefined8 *)((longlong)pvVar2 + 0x5c);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar3 + 0xd),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x68));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar3 + 0xf),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x78));
      *(undefined4 *)(puVar3 + 0x11) = *(undefined4 *)((longlong)pvVar2 + 0x88);
      *(undefined8 *)((longlong)puVar3 + 0x8c) = *(undefined8 *)((longlong)pvVar2 + 0x8c);
      *(undefined1 *)((longlong)puVar3 + 0x94) = *(undefined1 *)((longlong)pvVar2 + 0x94);
      *(undefined1 *)((longlong)puVar3 + 0x95) = *(undefined1 *)((longlong)pvVar2 + 0x95);
      puVar3[0x13] = *(undefined8 *)((longlong)pvVar2 + 0x98);
      *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)((longlong)pvVar2 + 0xa0);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0xa8);
      puVar3 = puVar3 + 0x15;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraShaderScriptParametersMetadata> @ 148de8570

void __cdecl
UE::CoreUObject::Private::Construct<FNiagaraShaderScriptParametersMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FNiagaraShaderScriptParametersMetadata> @ 148de85b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraShaderScriptParametersMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FNiagaraShaderScriptParametersMetadata> @ 148de85f0

void __cdecl
UE::CoreUObject::Private::Destruct<FNiagaraShaderScriptParametersMetadata>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<FNiagaraShaderScriptExternalConstant,int>
            (*(FNiagaraShaderScriptExternalConstant **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FNiagaraDataInterfaceGPUParamInfo,int>
            (*(FNiagaraDataInterfaceGPUParamInfo **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNiagaraShaderScriptParametersMetadata> @ 148de8600

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraShaderScriptParametersMetadata>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FNiagaraShaderScriptExternalConstant *pFVar5;
  void *_Src;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_>::operator=
              (param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    *(undefined1 *)
     &(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
       ((longlong)param_1 + 0x20))->AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    piVar1 = &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x20))->ArrayNum;
    if (piVar1 != &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                   ((longlong)param_2 + 0x20))->ArrayNum) {
      DestructItems<FNiagaraShaderScriptExternalConstant,int>
                (*(FNiagaraShaderScriptExternalConstant **)piVar1,
                 *(int *)&(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *
                            )((longlong)param_1 + 0x30))->AllocatorInstance).Data);
      iVar3 = *(int *)&(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
      piVar2 = (int *)((longlong)
                       &(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_1 + 0x30))->AllocatorInstance).Data + 4);
      pFVar5 = *(FNiagaraShaderScriptExternalConstant **)
                &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x20))->ArrayNum;
      iVar4 = *piVar2;
      *(int *)&(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x30))->AllocatorInstance).Data = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar2);
        ConstructItems<FNiagaraShaderScriptExternalConstant,FNiagaraShaderScriptExternalConstant,int>
                  (*(void **)piVar1,pFVar5,iVar3);
      }
    }
    piVar1 = &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x30))->ArrayNum;
    if (piVar1 != &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                   ((longlong)param_2 + 0x30))->ArrayNum) {
      iVar3 = *(int *)&(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_2 + 0x40))->AllocatorInstance).Data;
      piVar2 = (int *)((longlong)
                       &(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_1 + 0x40))->AllocatorInstance).Data + 4);
      _Src = *(void **)&((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_2 + 0x30))->ArrayNum;
      iVar4 = *piVar2;
      *(int *)&(((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x40))->AllocatorInstance).Data = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(*(void **)piVar1,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    pFVar6 = (((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x50))->AllocatorInstance).Data;
    iVar3 = ((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x40))->ArrayNum;
    iVar4 = ((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x40))->ArrayMax;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(pFVar6 + 8) = *(int *)(pFVar6 + 8) + 1;
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)
             (((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x50))->AllocatorInstance).Data;
    ((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
    ((longlong)param_1 + 0x40))->ArrayNum = iVar3;
    ((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
    ((longlong)param_1 + 0x40))->ArrayMax = iVar4;
    (((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
     ((longlong)param_1 + 0x50))->AllocatorInstance).Data = pFVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    param_2 = &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x50))->ArrayNum;
    param_1 = &((TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x50))->ArrayNum;
  }
  return true;
}

// Construct<FNiagaraShaderScriptExternalConstant> @ 148de87e0

void __cdecl
UE::CoreUObject::Private::Construct<FNiagaraShaderScriptExternalConstant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FNiagaraShaderScriptExternalConstant> @ 148de8800

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraShaderScriptExternalConstant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNiagaraShaderScriptExternalConstant> @ 148de8820

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraShaderScriptExternalConstant>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FNiagaraShaderScriptExternalConstant> @ 148de8840

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraShaderScriptExternalConstant>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      ::FString::operator=
                ((FString *)(puVar1 + 1),
                 (FString *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraDataInterfaceGPUParamInfo> @ 148de88e0

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraDataInterfaceGPUParamInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FNiagaraDataInterfaceGPUParamInfo> @ 148de8910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraDataInterfaceGPUParamInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FNiagaraDataInterfaceGPUParamInfo> @ 148de8940

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraDataInterfaceGPUParamInfo>(void *param_1)

{
  DestructItems<FNiagaraDataInterfaceGeneratedFunction,int>
            (*(FNiagaraDataInterfaceGeneratedFunction **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// SerializeArchive<FNiagaraDataInterfaceGPUParamInfo> @ 148de8990

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FNiagaraDataInterfaceGPUParamInfo>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  ::operator<<(param_1,param_2);
  ::operator<<(param_1,(FString *)((longlong)param_2 + 0x10));
  if (((param_1->field_0x28 & 1) == 0) || (0x36 < iVar1)) {
    TArrayPrivateFriend::
    Serialize<FNiagaraDataInterfaceGeneratedFunction,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FNiagaraDataInterfaceGeneratedFunction,TSizedDefaultAllocator<32>_> *
                       )((longlong)param_2 + 0x28));
  }
  return true;
}

// Copy<FNiagaraDataInterfaceGPUParamInfo> @ 148de8a10

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraDataInterfaceGPUParamInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FNiagaraDataInterfaceGeneratedFunction *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      DestructItems<FNiagaraDataInterfaceGeneratedFunction,int>
                ((FNiagaraDataInterfaceGeneratedFunction *)pFVar4->Data,
                 *(int *)((longlong)param_1 + 0x30));
      iVar2 = *(int *)((longlong)param_2 + 0x30);
      piVar1 = (int *)((longlong)param_1 + 0x34);
      pFVar3 = (FNiagaraDataInterfaceGeneratedFunction *)
               ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FNiagaraDataInterfaceGeneratedFunction,FNiagaraDataInterfaceGeneratedFunction,int>
                  (pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x38);
    param_2 = (int *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FNiagaraDataInterfaceGeneratedFunction> @ 148de8b60

void __cdecl
UE::CoreUObject::Private::Construct<FNiagaraDataInterfaceGeneratedFunction>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FNiagaraDataInterfaceGeneratedFunction> @ 148de8ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraDataInterfaceGeneratedFunction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FNiagaraDataInterfaceGeneratedFunction> @ 148de8bd0

void __cdecl
UE::CoreUObject::Private::Destruct<FNiagaraDataInterfaceGeneratedFunction>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// SerializeArchive<FNiagaraDataInterfaceGeneratedFunction> @ 148de8c30

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FNiagaraDataInterfaceGeneratedFunction>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceGeneratedFunction::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FNiagaraDataInterfaceGeneratedFunction> @ 148de8c50

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraDataInterfaceGeneratedFunction>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      *puVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      ::FString::operator=((FString *)(puVar5 + 1),(FString *)((longlong)pvVar4 + 8));
      pFVar1 = (ForAnyElementType *)(puVar5 + 3);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar4 + 0x18)) {
        iVar3 = *(int *)((longlong)pvVar4 + 0x20);
        piVar2 = (int *)((longlong)puVar5 + 0x24);
        _Src = ((ForAnyElementType *)((longlong)pvVar4 + 0x18))->Data;
        *(int *)(puVar5 + 4) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      *(undefined2 *)(puVar5 + 5) = *(undefined2 *)((longlong)pvVar4 + 0x28);
      TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *)(puVar5 + 6)
                 ,(TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pvVar4 + 0x30));
      TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *)(puVar5 + 8)
                 ,(TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *)
                  ((longlong)pvVar4 + 0x40));
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x50);
      puVar5 = puVar5 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraCompileEvent> @ 148de8e10

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraCompileEvent>(void *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 auStack_18 [2];
  
  *(undefined1 *)param_1 = 1;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *puVar1 = 0;
  piVar2 = (int *)((longlong)param_1 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *piVar2 = 0;
  if (puVar1 != auStack_18) {
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*piVar2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  }
  else {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)((longlong)param_1 + 0x48),0,piVar2);
    *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  }
  return;
}

// ConstructForTests<FNiagaraCompileEvent> @ 148de8e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNiagaraCompileEvent>(void *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 auStack_18 [2];
  
  *(undefined1 *)param_1 = 1;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *puVar1 = 0;
  piVar2 = (int *)((longlong)param_1 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *piVar2 = 0;
  if (puVar1 != auStack_18) {
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*piVar2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  }
  else {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)((longlong)param_1 + 0x48),0,piVar2);
    *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  }
  return;
}

// Destruct<FNiagaraCompileEvent> @ 148de8e30

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraCompileEvent>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FNiagaraCompileEvent> @ 148de8e80

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraCompileEvent>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar6);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x30);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x48)) {
        iVar4 = *(int *)((longlong)param_2 + 0x50);
        piVar2 = (int *)((longlong)param_1 + 0x54);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x48))->Data;
        *(int *)((longlong)param_1 + 0x50) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 << 4);
          }
        }
      }
      puVar3 = (undefined1 *)((longlong)param_2 + 0x58);
      param_2 = (void *)((longlong)param_2 + 0x60);
      *(undefined1 *)((longlong)param_1 + 0x58) = *puVar3;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

