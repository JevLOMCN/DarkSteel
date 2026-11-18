// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FChunk @ 144266870

FChunk * __thiscall
TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk::FChunk(FChunk *this)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TObjectPtr<UObject> *pTVar2;
  longlong lVar3;
  
  lVar3 = 6;
  pTVar1 = (TObjectPtr<UObject>_u_0 *)this;
  do {
    pTVar2 = (TObjectPtr<UObject> *)pTVar1;
    (pTVar2->field0_0x0).DebugPtr = (UObject *)0x0;
    pTVar2[1].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[2].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[3].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[4].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[5].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[6].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[7].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[8].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[9].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[10].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[0xb].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[0xc].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[0xd].field0_0x0.DebugPtr = (UObject *)0x0;
    pTVar2[0xe].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
    pTVar2[0xf].field0_0x0.DebugPtr = (UObject *)0x0;
    lVar3 = lVar3 + -1;
    pTVar1 = &pTVar2[0x10].field0_0x0;
  } while (lVar3 != 0);
  pTVar2[0x10].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
  pTVar2[0x11].field0_0x0.DebugPtr = (UObject *)0x0;
  pTVar2[0x12].field0_0x0 = (TObjectPtr<UObject>_u_0)0x0;
  pTVar2[0x13].field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// FChunk @ 1442668c0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FChunk * __thiscall
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
::FChunk::FChunk(FChunk *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = 100;
  puVar1 = (undefined1 *)((longlong)&this->Elements[0].NetHandle.field0_0x0 + 4);
  do {
    *(undefined8 *)(puVar1 + -0xc) = 0;
    *(FNetHandle_u_0 *)(puVar1 + -4) = (FNetHandle_u_0)0x0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0xff;
    puVar1 = puVar1 + 0x38;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// FChunk @ 1442f5e70

FChunk * __thiscall
TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk::
FChunk(FChunk *this)

{
  undefined8 uVar1;
  float *pfVar2;
  longlong lVar3;
  
  lVar3 = 0x800;
  pfVar2 = &this->Elements[0].CullDistanceOverride;
  do {
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (((FObjectInfo *)(pfVar2 + -7))->WorldLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pfVar2 + -5) = uVar1;
    *(double *)(pfVar2 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pfVar2[-1] = 0.0;
    *pfVar2 = 3.4028235e+38;
    lVar3 = lVar3 + -1;
    pfVar2 = pfVar2 + 8;
  } while (lVar3 != 0);
  return this;
}

