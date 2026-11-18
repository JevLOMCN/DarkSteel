// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 147f91a40

UClass * __cdecl UModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UModel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Model",&Z_Registration_Info_UClass_UModel.InnerSingleton,
               StaticRegisterNativesUModel,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModel>,InternalVTableHelperCtorCaller<UModel>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModel.InnerSingleton;
}

// UModel @ 147fa5f30

UModel * __thiscall UModel::UModel(UModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModel__6B_;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Verts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Verts).ArrayNum = 0;
  (this->Verts).ArrayMax = 0;
  (this->Vectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vectors).ArrayNum = 0;
  (this->Vectors).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Surfs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfs).ArrayNum = 0;
  (this->Surfs).ArrayMax = 0;
  (this->LightmassSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightmassSettings).ArrayNum = 0;
  (this->LightmassSettings).ArrayMax = 0;
  *(undefined8 *)&this->MaterialIndexBuffers = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x48 = 0;
  (this->VertexBuffer).RefCount = 0;
  (this->VertexBuffer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffer).Vertices.ArrayNum = 0;
  (this->VertexBuffer).Vertices.ArrayMax = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->VertexBuffer).Buffers.StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffer).Buffers.PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffer).Buffers.ColorVertexBuffer);
  (this->VertexBuffer).Model = this;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  this->InvalidSurfaces = false;
  this->bOnlyRebuildMaterialIndexBuffers = false;
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  return this;
}

// UModel @ 147fa6050

UModel * __thiscall UModel::UModel(UModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModel__6B_;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Verts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Verts).ArrayNum = 0;
  (this->Verts).ArrayMax = 0;
  (this->Vectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vectors).ArrayNum = 0;
  (this->Vectors).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Surfs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfs).ArrayNum = 0;
  (this->Surfs).ArrayMax = 0;
  (this->LightmassSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightmassSettings).ArrayNum = 0;
  (this->LightmassSettings).ArrayMax = 0;
  *(undefined8 *)&this->MaterialIndexBuffers = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialIndexBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x48 = 0;
  (this->VertexBuffer).RefCount = 0;
  (this->VertexBuffer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffer).Vertices.ArrayNum = 0;
  (this->VertexBuffer).Vertices.ArrayMax = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->VertexBuffer).Buffers.StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffer).Buffers.PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffer).Buffers.ColorVertexBuffer);
  (this->VertexBuffer).Model = this;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  this->InvalidSurfaces = false;
  this->bOnlyRebuildMaterialIndexBuffers = false;
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  return this;
}

// ~UModel @ 147fa9690

void __thiscall UModel::~UModel(UModel *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UModel__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffer).Buffers.ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffer).Buffers.PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->VertexBuffer).Buffers.StaticMeshVertexBuffer);
  pFVar1 = (this->VertexBuffer).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MaterialIndexBuffers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialIndexBuffers);
  pFVar1 = (this->LightmassSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Surfs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Verts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 147fb2070

void __cdecl UModel::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar6 = GetTypeName<UModel>(&local_48);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar5 = GetPrivateStaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar5->_padding_)) {
    uVar9 = 0;
    if (0 < *(int *)&param_1[2].field_0x20) {
      do {
        uVar4 = 0;
        if ((int)uVar9 < *(int *)&param_1[2].field_0x20) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar7 = (longlong)(int)uVar9 * 0x50 + *(longlong *)&param_1[2].field_0x18;
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar7,0,0);
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar7 + 0x20);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)&param_1[2].field_0x20);
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar6 = GetTypeName<UModel>(&local_38);
  pwVar8 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// ApplyStaticLighting @ 147fb3470

void __thiscall UModel::ApplyStaticLighting(UModel *this,FStaticLightingBuildContext *param_1)

{
  return;
}

// BeginDestroy @ 147fb4330

void __thiscall UModel::BeginDestroy(UModel *this)

{
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  UObject::BeginDestroy((UObject *)this);
  pTVar1 = &this->MaterialIndexBuffers;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      BeginReleaseResource
                (*(FRenderResource **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18),
                 (FRenderCommandPipe *)0x0);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  BeginReleaseResource
            ((FRenderResource *)&(this->VertexBuffer).Buffers.PositionVertexBuffer,
             (FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&(this->VertexBuffer).Buffers,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  return;
}

// BeginReleaseResources @ 147fb44a0

void __thiscall UModel::BeginReleaseResources(UModel *this)

{
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pTVar1 = &this->MaterialIndexBuffers;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      BeginReleaseResource
                (*(FRenderResource **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18),
                 (FRenderCommandPipe *)0x0);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  BeginReleaseResource
            ((FRenderResource *)&(this->VertexBuffer).Buffers.PositionVertexBuffer,
             (FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&(this->VertexBuffer).Buffers,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  return;
}

// ClearLocalMaterialIndexBuffersData @ 147fb9b50

void __thiscall UModel::ClearLocalMaterialIndexBuffersData(UModel *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)&this->MaterialIndexBuffers);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)&this->MaterialIndexBuffers;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18);
      *(undefined4 *)(lVar1 + 0x30) = 0;
      if (*(int *)(lVar1 + 0x34) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar1 + 0x28),0,(int *)(lVar1 + 0x34));
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// EmptyModel @ 147fc67a0

void __thiscall UModel::EmptyModel(UModel *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->Nodes).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Verts).ArrayMax;
  (this->Verts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->Verts).AllocatorInstance,0,piVar1);
  }
  if (param_1 != 0) {
    piVar1 = &(this->Vectors).ArrayMax;
    (this->Vectors).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Vectors).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Points).ArrayMax;
    (this->Points).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Points).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Surfs).ArrayMax;
    (this->Surfs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,0,&(this->Surfs).AllocatorInstance,0,piVar1);
    }
  }
  this->NumSharedSides = 4;
  return;
}

// FindBrush @ 147fcc040

ABrush * __thiscall UModel::FindBrush(UModel *this,TVector<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ABrush *pAVar4;
  uint uVar5;
  
  if ((this->Nodes).ArrayNum != 0) {
    uVar3 = FindSurf(this,param_1,0,__real_3dcccccd);
    if (uVar3 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar3 < (this->Surfs).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pAVar4 = (ABrush *)(*pcVar1)();
          return pAVar4;
        }
      }
      return *(ABrush **)((this->Surfs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x50 + 0x20)
      ;
    }
  }
  return (ABrush *)0x0;
}

// FindNearestVertex @ 147fcc630

float __thiscall
UModel::FindNearestVertex
          (UModel *this,TVector<float> *param_1,TVector<float> *param_2,float param_3,int *param_4)

{
  float fVar1;
  
  if ((this->Nodes).ArrayNum != 0) {
    fVar1 = ::FindNearestVertex(this,param_1,param_2,param_3,0,param_4);
    return fVar1;
  }
  return __real_bf800000;
}

// GetCenter @ 147fd1040

TVector<double> * __thiscall UModel::GetCenter(UModel *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  double dVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  
  uVar12 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  uVar14 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if (0 < (this->Nodes).ArrayNum) {
    lVar16 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < (this->Nodes).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar4 = (this->Nodes).AllocatorInstance.Data;
      uVar15 = 0;
      FVar3 = pFVar4[lVar16 + 0x36];
      if (FVar3 != (FScriptContainerElement)0x0) {
        uVar12 = uVar12 + (byte)FVar3;
        do {
          uVar13 = *(int *)(pFVar4 + lVar16 + 0x10) + uVar15;
          uVar10 = 0;
          if ((int)uVar13 < (this->Verts).ArrayNum) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar6)();
            return pTVar11;
          }
          uVar10 = *(uint *)((this->Verts).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18);
          uVar13 = 0;
          if ((int)uVar10 < (this->Points).ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar6)();
            return pTVar11;
          }
          pFVar5 = (this->Points).AllocatorInstance.Data;
          uVar15 = uVar15 + 1;
          uVar1 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar10 * 0xc + 4);
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               (double)*(float *)(pFVar5 + (longlong)(int)uVar10 * 0xc) +
               (__return_storage_ptr__->field0_0x0)._s_0.X;
          (__return_storage_ptr__->field0_0x0)._s_0.Y =
               (double)(float)uVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
          (__return_storage_ptr__->field0_0x0)._s_0.Z =
               (double)(float)((ulonglong)uVar1 >> 0x20) +
               (__return_storage_ptr__->field0_0x0)._s_0.Z;
        } while (uVar15 < (byte)FVar3);
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0x40;
    } while ((int)uVar14 < (this->Nodes).ArrayNum);
    if (uVar12 != 0) {
      dVar17 = __real_3ff0000000000000 / (double)uVar12;
      dVar8 = (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar17;
      dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.X * dVar17;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar17 * dVar2;
    }
  }
  return __return_storage_ptr__;
}

// GetNodeBoundingBox @ 147fd3e70

void __thiscall UModel::GetNodeBoundingBox(UModel *this,FBspNode *param_1,TBox<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->Max).field0_0x0._s_0.Y = (double)uVar1;
  (param_2->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar13 = (param_2->Max).field0_0x0._s_0.X;
  dVar14 = (param_2->Max).field0_0x0._s_0.Y;
  param_2->IsValid = '\0';
  dVar12 = (param_2->Max).field0_0x0._s_0.Z;
  (param_2->Min).field0_0x0._s_0.X = dVar13;
  (param_2->Min).field0_0x0._s_0.Y = dVar14;
  (param_2->Min).field0_0x0._s_0.Z = dVar12;
  uVar3 = param_1->iVertPool;
  if (param_1->NumVertices != '\0') {
    lVar10 = (longlong)(int)uVar3 * 0x18;
    uVar9 = uVar3;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Verts).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = *(uint *)((this->Verts).AllocatorInstance.Data + lVar10);
      uVar8 = 0;
      if ((int)uVar7 < (this->Points).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->Points).AllocatorInstance.Data;
      uVar1 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar7 * 0xc);
      dVar13 = (double)(float)((ulonglong)uVar1 >> 0x20);
      dVar14 = (double)*(float *)(pFVar4 + (longlong)(int)uVar7 * 0xc + 8);
      dVar12 = (double)(float)uVar1;
      if (param_2->IsValid == '\0') {
        (param_2->Max).field0_0x0._s_0.X = dVar12;
        (param_2->Max).field0_0x0._s_0.Y = dVar13;
        (param_2->Max).field0_0x0._s_0.Z = dVar14;
        dVar13 = (param_2->Max).field0_0x0._s_0.X;
        dVar14 = (param_2->Max).field0_0x0._s_0.Y;
        param_2->IsValid = '\x01';
        dVar12 = (param_2->Max).field0_0x0._s_0.Z;
        (param_2->Min).field0_0x0._s_0.X = dVar13;
        (param_2->Min).field0_0x0._s_0.Y = dVar14;
        (param_2->Min).field0_0x0._s_0.Z = dVar12;
      }
      else {
        dVar2 = (param_2->Min).field0_0x0._s_0.X;
        dVar11 = (param_2->Min).field0_0x0._s_0.Y;
        if (dVar12 <= dVar2) {
          dVar2 = dVar12;
        }
        if (dVar13 <= dVar11) {
          dVar11 = dVar13;
        }
        (param_2->Min).field0_0x0._s_0.X = dVar2;
        dVar2 = (param_2->Min).field0_0x0._s_0.Z;
        (param_2->Min).field0_0x0._s_0.Y = dVar11;
        if (dVar14 <= dVar2) {
          dVar2 = dVar14;
        }
        dVar11 = (param_2->Max).field0_0x0._s_0.X;
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        (param_2->Min).field0_0x0._s_0.Z = dVar2;
        dVar12 = (param_2->Max).field0_0x0._s_0.Y;
        (param_2->Max).field0_0x0._s_0.X = dVar11;
        if (dVar12 <= dVar13) {
          dVar12 = dVar13;
        }
        dVar13 = (param_2->Max).field0_0x0._s_0.Z;
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        (param_2->Max).field0_0x0._s_0.Y = dVar12;
        (param_2->Max).field0_0x0._s_0.Z = dVar13;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)(uVar9 - uVar3) < (int)(uint)param_1->NumVertices);
  }
  return;
}

// GetPrivateStaticClass @ 147fd62d0

UClass * __cdecl UModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Model",&Z_Registration_Info_UClass_UModel.InnerSingleton,
               StaticRegisterNativesUModel,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModel>,InternalVTableHelperCtorCaller<UModel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModel.InnerSingleton;
}

// GetResourceSizeEx @ 147fd6950

void __thiscall UModel::GetResourceSizeEx(UModel *this,FResourceSizeEx *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  iStack_38 = 0;
  iVar2 = *(int *)&(this->MaterialIndexBuffers).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialIndexBuffers).field_0x10
  ;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&(this->MaterialIndexBuffers).field_0x20;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar5;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_147fd69f9;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_24 = (int)lVar4 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_147fd69f9:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = &this->MaterialIndexBuffers;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      FResourceSizeEx::AddUnknownMemoryBytes
                (param_1,(longlong)
                         *(int *)(*(longlong *)
                                   (*(longlong *)&this->MaterialIndexBuffers + 8 +
                                   (longlong)TStack_60.CurrentBitIndex * 0x18) + 0x30) << 2);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// GetSurfacePlanes @ 147fd8410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModel::GetSurfacePlanes
          (UModel *this,AActor *param_1,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  USceneComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  TMatrix<double> *pTVar29;
  TTransform<double> *this_00;
  longlong lVar30;
  uint uVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1d8;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148 [2];
  
  if ((this->Nodes).ArrayNum != 0) {
    if (param_1 == (AActor *)0x0) {
      pTVar29 = &local_1c8;
      local_1c8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_1c8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_1c8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_1c8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_1c8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_1c8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_1c8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_1c8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_1c8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_1c8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_1c8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_1c8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_1c8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_1c8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_1c8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_1c8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    }
    else {
      pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
      this_00 = &pUVar1->ComponentToWorld;
      if (pUVar1 == (USceneComponent *)0x0) {
        this_00 = &UE::Math::TTransform<double>::Identity;
      }
      pTVar29 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,local_148);
    }
    dVar14 = pTVar29->M[2][0];
    dVar15 = pTVar29->M[2][1];
    dVar16 = pTVar29->M[1][0];
    dVar17 = pTVar29->M[1][1];
    dVar18 = pTVar29->M[0][0];
    dVar19 = pTVar29->M[0][1];
    dVar20 = pTVar29->M[2][2];
    dStack_280 = pTVar29->M[2][3];
    dVar21 = pTVar29->M[1][2];
    dStack_2a0 = pTVar29->M[1][3];
    dVar22 = pTVar29->M[0][2];
    dStack_2c0 = pTVar29->M[0][3];
    dVar23 = pTVar29->M[3][0];
    dVar24 = pTVar29->M[3][1];
    dVar25 = pTVar29->M[3][2];
    dStack_260 = pTVar29->M[3][3];
    local_258 = dVar17 * dVar20 - dVar15 * dVar21;
    uStack_240 = 0;
    uStack_220 = 0;
    dStack_250 = dVar14 * dVar21 - dVar16 * dVar20;
    local_248 = dVar16 * dVar15 - dVar14 * dVar17;
    local_238 = dVar22 * dVar15 - dVar19 * dVar20;
    dStack_230 = dVar18 * dVar20 - dVar22 * dVar14;
    local_228 = dVar19 * dVar14 - dVar18 * dVar15;
    local_218 = dVar19 * dVar21 - dVar22 * dVar17;
    dStack_210 = dVar22 * dVar16 - dVar18 * dVar21;
    uStack_200 = 0;
    local_208 = dVar18 * dVar17 - dVar19 * dVar16;
    dVar13 = dStack_2a0 * dVar22 - dStack_2c0 * dVar21;
    dVar10 = dStack_280 * dVar22 - dStack_2c0 * dVar20;
    dVar12 = dStack_280 * dVar21 - dStack_2a0 * dVar20;
    dVar6 = dStack_260 * dVar22 - dVar25 * dStack_2c0;
    dVar8 = dStack_260 * dVar21 - dVar25 * dStack_2a0;
    dVar5 = dStack_260 * dVar20 - dVar25 * dStack_280;
    uVar31 = 0;
    if (0 < (this->Surfs).ArrayNum) {
      uVar33 = (uint)__xmm_80000000000000008000000000000000;
      uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      lVar30 = 0;
      local_2d8 = dVar18;
      dStack_2d0 = dVar19;
      local_2c8 = dVar22;
      local_2b8 = dVar16;
      dStack_2b0 = dVar17;
      local_2a8 = dVar21;
      local_298 = dVar14;
      dStack_290 = dVar15;
      local_288 = dVar20;
      local_278 = dVar23;
      dStack_270 = dVar24;
      local_268 = dVar25;
      do {
        uVar27 = 0;
        if ((int)uVar31 < (this->Surfs).ArrayNum) {
          uVar27 = ~uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Surfs).AllocatorInstance.Data;
        local_2e8 = (double)*(float *)(pFVar2 + lVar30 + 0x38);
        dVar9 = (double)*(float *)(pFVar2 + lVar30 + 0x30);
        dVar11 = (double)*(float *)(pFVar2 + lVar30 + 0x34);
        dVar7 = (double)*(float *)(pFVar2 + lVar30 + 0x3c);
        local_2f8 = dVar11 * local_228 + dVar9 * local_248 + local_2e8 * local_208 +
                    ___xmm_3ff00000000000000000000000000000 * 0.0;
        local_308 = dVar11 * local_238 + dVar9 * local_258 + local_2e8 * local_218 +
                    ___xmm_00000000000000000000000000000000 * 0.0;
        dStack_300 = dVar11 * dStack_230 + dVar9 * dStack_250 + local_2e8 * dStack_210 +
                     DAT_150aa8f68 * 0.0;
        dVar32 = dStack_300 * dStack_300 + local_308 * local_308 + local_2f8 * local_2f8;
        if (dVar32 <= __real_3e45798ee0000000) {
          dStack_300 = 0.0;
          local_2f8 = 0.0;
          local_308 = 0.0;
        }
        else {
          local_1d8 = __real_3ff0000000000000 / SQRT(dVar32);
          dStack_300 = dStack_300 * local_1d8;
          local_2f8 = local_2f8 * local_1d8;
          local_308 = local_308 * local_1d8;
        }
        if (((((dVar5 * dVar17 - dVar8 * dVar15) + dVar12 * dVar24) * dVar18 -
             ((dVar5 * dVar19 - dVar6 * dVar15) + dVar10 * dVar24) * dVar16) +
            ((dVar8 * dVar19 - dVar6 * dVar17) + dVar13 * dVar24) * dVar14) -
            ((dVar12 * dVar19 - dVar10 * dVar17) + dVar13 * dVar15) * dVar23 < 0.0) {
          local_308 = (double)CONCAT44((uint)((ulonglong)local_308 >> 0x20) ^ uVar34,
                                       SUB84(local_308,0) ^ uVar33);
          dStack_300 = (double)CONCAT44((uint)((ulonglong)dStack_300 >> 0x20) ^ uVar34,
                                        SUB84(dStack_300,0) ^ uVar33);
          local_2f8 = (double)CONCAT44((uint)((ulonglong)local_2f8 >> 0x20) ^ uVar34,
                                       SUB84(local_2f8,0) ^ uVar33);
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        dVar9 = dVar7 * dVar9;
        dVar32 = dVar7 * local_2e8;
        dVar7 = dVar7 * dVar11;
        dStack_2f0 = dStack_300 *
                     (dVar17 * dVar7 + dVar19 * dVar9 + dVar15 * dVar32 +
                     dVar24 * __real_3ff0000000000000) +
                     local_308 *
                     (dVar16 * dVar7 + dVar18 * dVar9 + dVar14 * dVar32 +
                     dVar23 * __real_3ff0000000000000) +
                     local_2f8 *
                     (dVar21 * dVar7 + dVar22 * dVar9 + dVar20 * dVar32 +
                     dVar25 * __real_3ff0000000000000);
        if (((pFVar2 <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 < pFVar2 + (longlong)param_2->ArrayMax * 0x20))
           && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar28 = param_2->ArrayNum;
        if (iVar28 == param_2->ArrayMax) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1020,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar28 + 1;
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 0x50;
        pFVar3 = (param_2->AllocatorInstance).Data;
        pFVar2 = pFVar3 + (longlong)iVar28 * 0x20;
        *(double *)pFVar2 = local_308;
        *(double *)(pFVar2 + 8) = dStack_300;
        pFVar3 = pFVar3 + (longlong)iVar28 * 0x20 + 0x10;
        *(double *)pFVar3 = local_2f8;
        *(double *)(pFVar3 + 8) = dStack_2f0;
      } while ((int)uVar31 < (this->Surfs).ArrayNum);
    }
  }
  return;
}

// GroupAllNodes @ 147fdc570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModel::GroupAllNodes
          (UModel *this,ULevel *param_1,
          TArray<ULightComponentBase_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// Initialize @ 147fe19a0

void __thiscall UModel::Initialize(UModel *this,ABrush *param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FGuid *pFVar7;
  FGuid local_18;
  
  pFVar7 = FGuid::NewGuid(&local_18);
  uVar2 = pFVar7->A;
  uVar3 = pFVar7->B;
  uVar4 = pFVar7->C;
  uVar5 = pFVar7->D;
  this->RootOutside = param_2;
  (this->LightingGuid).A = uVar2;
  (this->LightingGuid).B = uVar3;
  (this->LightingGuid).C = uVar4;
  (this->LightingGuid).D = uVar5;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  EmptyModel(this,1,1);
  if (param_1 != (ABrush *)0x0) {
    if ((param_1->BrushComponent).field0_0x0.DebugPtr == (UBrushComponent *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->GetBrushComponent()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Model.cpp"
                         ,0x319,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (param_1->Brush).field0_0x0.DebugPtr = this;
  }
  return;
}

// Initialize @ 147fe1a60

void __thiscall UModel::Initialize(UModel *this)

{
  this->RootOutside = true;
  if ((this->_padding_ & 0x10) == 0) {
    EmptyModel(this,1,0);
    return;
  }
  return;
}

// IsAsset @ 147fe23a0

bool __thiscall UModel::IsAsset(UModel *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 147fe3200

bool __thiscall UModel::IsReadyForFinishDestroy(UModel *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// PostDuplicate @ 147fe5d10

void __thiscall UModel::PostDuplicate(UModel *this,bool param_1)

{
  return;
}

// PostLoad @ 147fe61d0

void __thiscall UModel::PostLoad(UModel *this)

{
  wchar_t *pwVar1;
  
  UObject::PostLoad((UObject *)this);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x10) == 0)) {
    UpdateVertices(this);
    return;
  }
  return;
}

// PreSave @ 147fe64a0

void __thiscall UModel::PreSave(UModel *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PrecomputeSphereFilter @ 147fe6690

void __thiscall UModel::PrecomputeSphereFilter(UModel *this,TPlane<double> *param_1)

{
  if ((this->Nodes).ArrayNum != 0) {
    ::PrecomputeSphereFilter(this,0,param_1);
    return;
  }
  return;
}

// Rename @ 147fedf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UModel::Rename(UModel *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  longlong lVar2;
  int iVar3;
  UPackage *pUVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  UPackage *pUVar7;
  size_t sVar8;
  UModel *this_00;
  UObject *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_80 [8];
  FString FStack_78;
  TStringView<wchar_t> TStack_68;
  FString FStack_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"UObject::Rename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pUVar7 = GObjTransientPkg;
  if ((param_2 != (UObject *)0x0) && (param_2 != (UObject *)this->_padding_)) {
    if (((this->_padding_ & 0x30) == 0) &&
       (pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2), pUVar4 != pUVar7)) {
      pUVar9 = *(UObject **)(this->_padding_ + 0xe0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar9[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) != &pUVar9[1].field_0x8)) {
        if ((param_3 & 2) != 0) {
          bVar13 = false;
          goto LAB_142109c5c;
        }
        auStack_80 = *(undefined1 (*) [8])(*(longlong *)(this->_padding_ + 0xe0) + 0x18);
        ::FName::ToString((FName *)auStack_80,&FStack_78);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&TStack_68,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (TStack_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(TStack_68.DataPtr);
        }
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if (((param_3 >> 9 & 1) == 0) && (pFVar5 != pFVar6)) {
      if (pFVar6 == (FLinkerLoad *)0x0) {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
        pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        if (pUVar4 == pUVar7) goto LAB_1421099f4;
      }
      if ((pFVar5 != (FLinkerLoad *)0x0) && ((this->_padding_ & 0x1400) != 0)) {
        if (1 < (byte)LogObj._0_1_) {
          auStack_80 = (undefined1  [8])0x150852300;
          if (((uint)this->_padding_ >> 10 & 1) != 0) {
            auStack_80 = (undefined1  [8])0x1508522e8;
          }
          pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&FStack_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (TStack_68.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(TStack_68.DataPtr);
          }
          if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,true);
    }
  }
LAB_1421099f4:
  if (param_1 == (wchar_t *)0x0) {
LAB_142109af3:
    if ((param_3 & 2) == 0) {
LAB_142109afd:
      FVar1 = (FName)this->_padding_;
      if ((param_2 != (UObject *)0x0) && ((param_3 & 4) == 0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
      }
      LockUObjectHashTables();
      if (param_1 == (wchar_t *)0x0) {
        if ((param_2 == (UObject *)0x0) ||
           (pUVar9 = StaticFindObjectFastInternal
                               ((UClass *)0x0,param_2,FVar1,None,RF_NoFlags,Borrowed),
           FVar10 = FVar1, pUVar9 != (UObject *)0x0)) {
          pUVar11 = (UClass *)param_2;
          if (param_2 == (UObject *)0x0) {
            pUVar11 = (UClass *)this->_padding_;
          }
          FVar10 = MakeUniqueObjectName((UObject *)auStack_80,pUVar11,(FName)this->_padding_,None);
          goto LAB_142109c21;
        }
      }
      else {
        FVar10 = (FName)::FName::FName((FName *)auStack_80,param_1);
LAB_142109c21:
        FVar10 = *(FName *)FVar10;
      }
      lVar2 = this->_padding_;
      if ((this->_padding_ & 1) != 0) {
        Z_Construct_UClass_UPackage_NoRegister();
      }
      UObjectBase::LowLevelRename((UObjectBase *)this,FVar10,param_2);
      UnlockUObjectHashTables();
      (**(code **)(this->_padding_ + 0xe0))(this,lVar2,FVar1);
    }
  }
  else {
    sVar8 = wcslen(param_1);
    FStack_78.Data.ArrayNum = (int)sVar8;
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    TStack_68.DataPtr = param_1;
    if ((param_3 >> 6 & 1) == 0) {
      FStack_78.Data.ArrayMax = TStack_68._12_4_;
      pUVar9 = param_2;
      if (param_2 == (UObject *)0x0) {
        pUVar9 = (UObject *)this->_padding_;
      }
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UModel *)StaticFindObject((UClass *)0x0,pUVar9,&TStack_68,ExactClass);
    }
    else {
      TStack_68._12_4_ = FStack_78.Data.ArrayMax;
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UModel *)
                StaticFindFirstObject((UClass *)0x0,&TStack_68,ExactClass,NoLogging,(wchar_t *)0x0);
    }
    if (this_00 != this) {
      if (this_00 == (UModel *)0x0) goto LAB_142109af3;
      if ((param_3 & 2) != 0) {
        bVar13 = false;
        goto LAB_142109c5c;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&FStack_58,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (TStack_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(TStack_68.DataPtr);
      }
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      goto LAB_142109afd;
    }
    auStack_80 = (undefined1  [8])this_00->_padding_;
    ::FName::ToString((FName *)auStack_80,&FStack_78);
    ::FString::FString(&FStack_58,param_1);
    FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    if (FStack_78.Data.ArrayNum == FStack_58.Data.ArrayNum) {
      if (FStack_78.Data.ArrayNum < 2) {
        bVar13 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)FStack_78.Data.AllocatorInstance.Data,
                       (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
      }
    }
    else {
      bVar13 = FStack_78.Data.ArrayNum + FStack_58.Data.ArrayNum == 1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (!bVar13) goto LAB_142109af3;
  }
  bVar13 = true;
LAB_142109c5c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// Serialize @ 147ff2020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UModel::Serialize(UModel *this,FArchive *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FBspNode,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBspSurf,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVert,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  ulong64 *puVar9;
  ulong64 *puVar10;
  uint *puVar11;
  uint *puVar12;
  code *pcVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  UClass *pUVar16;
  FArchive *pFVar17;
  ulong64 *puVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uchar uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStackY_958 [32];
  FStripDataFlags local_918 [2];
  uint local_914;
  uint local_910;
  uint local_90c;
  float local_908 [2];
  TArray<FBspSurf,TSizedDefaultAllocator<32>_> local_900;
  UModel *local_8f0;
  TArray<FBspNode,TSizedDefaultAllocator<32>_> local_8e8;
  UModel *local_8d8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_8d0;
  UModel *local_8c0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_8b8;
  UModel *local_8a8;
  TArray<FVert,TSizedDefaultAllocator<32>_> local_8a0;
  UModel *local_890;
  TArray<FLeaf,TSizedDefaultAllocator<32>_> local_888;
  TArray<int,TSizedDefaultAllocator<32>_> local_878;
  TArray<int,TSizedDefaultAllocator<32>_> local_868;
  undefined8 local_858 [3];
  undefined4 local_840 [2];
  ulong64 local_838 [254];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_958;
  UObject::Serialize((UObject *)this,param_1);
  lVar23 = this->_padding_;
  if (lVar23 == 0) {
LAB_147ff208e:
    uVar24 = '\0';
  }
  else {
    pUVar16 = Z_Construct_UClass_ABrush_NoRegister();
    lVar23 = *(longlong *)(lVar23 + 0x10);
    iVar6 = (int)pUVar16->_padding_;
    if ((*(int *)(lVar23 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar16->_padding_)) goto LAB_147ff208e;
    uVar24 = '\x01';
  }
  FStripDataFlags::FStripDataFlags(local_918,param_1,uVar24,&GOldestLoadablePackageFileUEVersion);
  pFVar17 = UE::Math::operator<<(param_1,&(this->Bounds).Origin);
  UE::Math::operator<<(pFVar17,&(this->Bounds).BoxExtent);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.IsLoading()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                            ,0x1a2,L"float -> double conversion applied outside of load!"), bVar15))
    {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    plVar8 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar8[1] < (float *)*plVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_908);
      }
    }
    else {
      local_908[0] = *(float *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    (this->Bounds).SphereRadius = (double)local_908[0];
  }
  else {
    ::operator<<(param_1,&(this->Bounds).SphereRadius);
  }
  uVar26 = 0;
  lVar23 = 0x40;
  if (((param_1->field_0x28 & 1) == 0) || (0x1d8 < *(int *)&param_1->field_0x40)) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
              (&this->Vectors,param_1,false);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
              (&this->Points,param_1,false);
    TArray<FBspNode,TSizedDefaultAllocator<32>_>::BulkSerialize(&this->Nodes,param_1,false);
  }
  else {
    local_8b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8b8.ArrayNum = 0;
    local_8b8.ArrayMax = 0;
    local_8d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8d0.ArrayNum = 0;
    local_8d0.ArrayMax = 0;
    local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8e8.ArrayNum = 0;
    local_8e8.ArrayMax = 0;
    local_8d8 = this;
    local_8c0 = this;
    local_8a8 = this;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
              (&local_8b8,param_1,false);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
              (&local_8d0,param_1,false);
    TArray<FBspNode,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_8e8,param_1,false);
    FVar14.Data = local_8b8.AllocatorInstance.Data;
    pTVar1 = &this->Vectors;
    if (pTVar1 != &local_8b8) {
      iVar6 = local_8b8.ArrayNum;
      lVar21 = (longlong)local_8b8.ArrayNum;
      piVar7 = &(this->Vectors).ArrayMax;
      (this->Vectors).ArrayNum = local_8b8.ArrayNum;
      if ((local_8b8.ArrayNum == 0) && (*piVar7 == 0)) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_8b8.ArrayNum,*piVar7,&pTVar1->AllocatorInstance,local_8b8.ArrayNum,
                   piVar7);
        if (iVar6 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar14.Data,lVar21 * 0xc);
        }
      }
    }
    FVar14.Data = local_8d0.AllocatorInstance.Data;
    pTVar1 = &this->Points;
    if (pTVar1 != &local_8d0) {
      iVar6 = local_8d0.ArrayNum;
      lVar21 = (longlong)local_8d0.ArrayNum;
      piVar7 = &(this->Points).ArrayMax;
      (this->Points).ArrayNum = local_8d0.ArrayNum;
      if ((local_8d0.ArrayNum == 0) && (*piVar7 == 0)) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_8d0.ArrayNum,*piVar7,&pTVar1->AllocatorInstance,local_8d0.ArrayNum,
                   piVar7);
        if (iVar6 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar14.Data,lVar21 * 0xc);
        }
      }
    }
    FVar14.Data = local_8e8.AllocatorInstance.Data;
    pTVar2 = &this->Nodes;
    if (pTVar2 != &local_8e8) {
      lVar21 = (longlong)local_8e8.ArrayNum;
      piVar7 = &(this->Nodes).ArrayMax;
      iVar6 = *piVar7;
      (this->Nodes).ArrayNum = local_8e8.ArrayNum;
      if (local_8e8.ArrayNum == 0) {
        if (iVar6 == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,0,iVar6,&pTVar2->AllocatorInstance,0,piVar7);
        }
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,local_8e8.ArrayNum,iVar6,&pTVar2->AllocatorInstance,local_8e8.ArrayNum,
                   piVar7);
        memcpy((pTVar2->AllocatorInstance).Data,FVar14.Data,lVar21 << 6);
      }
    }
    if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.AllocatorInstance.Data);
    }
    if (local_8d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.AllocatorInstance.Data);
    }
    if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.AllocatorInstance.Data);
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
LAB_147ff2551:
    TArrayPrivateFriend::Serialize<FBspSurf,TSizedDefaultAllocator<32>_>(param_1,&this->Surfs);
    TArray<FVert,TSizedDefaultAllocator<32>_>::BulkSerialize(&this->Verts,param_1,false);
  }
  else {
    uVar22 = uVar26;
    uVar27 = uVar26;
    if (0 < (this->Nodes).ArrayNum) {
      do {
        uVar20 = (uint)uVar22;
        uVar25 = 0;
        if ((int)uVar20 < (this->Nodes).ArrayNum) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar5 = (this->Nodes).AllocatorInstance.Data + uVar27 + 0x37;
        *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 & 0x1f);
        uVar22 = (ulonglong)(uVar20 + 1);
        uVar27 = uVar27 + 0x40;
      } while ((int)(uVar20 + 1) < (this->Nodes).ArrayNum);
    }
    if (((param_1->field_0x28 & 1) == 0) || (0x1d8 < *(int *)&param_1->field_0x40))
    goto LAB_147ff2551;
    local_900.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_900.ArrayNum = 0;
    local_900.ArrayMax = 0;
    local_8a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8a0.ArrayNum = 0;
    local_8a0.ArrayMax = 0;
    local_8f0 = this;
    local_890 = this;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_8f0);
    TArrayPrivateFriend::Serialize<FBspSurf,TSizedDefaultAllocator<32>_>(param_1,&local_900);
    TArray<FVert,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_8a0,param_1,false);
    FVar14.Data = local_900.AllocatorInstance.Data;
    pTVar3 = &this->Surfs;
    if (pTVar3 != &local_900) {
      iVar6 = local_900.ArrayNum;
      piVar7 = &(this->Surfs).ArrayMax;
      (this->Surfs).ArrayNum = local_900.ArrayNum;
      if ((local_900.ArrayNum == 0) && (*piVar7 == 0)) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,local_900.ArrayNum,*piVar7,&pTVar3->AllocatorInstance,
                   local_900.ArrayNum,piVar7);
        ConstructItems<FBspSurf,FBspSurf,int>
                  ((pTVar3->AllocatorInstance).Data,(FBspSurf *)FVar14.Data,iVar6);
      }
    }
    FVar14.Data = local_8a0.AllocatorInstance.Data;
    pTVar4 = &this->Verts;
    if (pTVar4 != &local_8a0) {
      iVar6 = local_8a0.ArrayNum;
      lVar21 = (longlong)local_8a0.ArrayNum;
      piVar7 = &(this->Verts).ArrayMax;
      (this->Verts).ArrayNum = local_8a0.ArrayNum;
      if ((local_8a0.ArrayNum == 0) && (*piVar7 == 0)) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,local_8a0.ArrayNum,*piVar7,&pTVar4->AllocatorInstance,local_8a0.ArrayNum,
                   piVar7);
        if (iVar6 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,FVar14.Data,lVar21 * 0x18);
        }
      }
    }
    if (local_8a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.AllocatorInstance.Data);
    }
    if ((FBspSurf *)local_900.AllocatorInstance.Data != (FBspSurf *)0x0) {
      FMemory::Free(local_900.AllocatorInstance.Data);
    }
  }
  if (((param_1->field_0x28 & 1) == 0) || (0x149 < *(int *)&param_1->field_0x40)) {
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumSharedSides);
      }
    }
    else {
      this->NumSharedSides = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  else {
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumSharedSides);
      }
    }
    else {
      this->NumSharedSides = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    plVar8 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_914);
      }
    }
    else {
      local_914 = *(uint *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    puVar18 = local_838 + 1;
    do {
      puVar18[-1] = 0;
      *puVar18 = 0;
      puVar18 = puVar18 + 4;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    if (0 < (int)local_914) {
      puVar18 = local_838 + 1;
      do {
        pFVar17 = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x168))(param_1,puVar18 + -3);
        puVar10 = puVar18 + -1;
        puVar9 = (ulong64 *)**(undefined8 **)&pFVar17->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar9 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,puVar10,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,puVar10);
          }
        }
        else {
          *puVar10 = *puVar9;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 8;
        }
        puVar10 = (ulong64 *)**(longlong **)&pFVar17->field_0x8;
        if ((ulong64 *)(*(longlong **)&pFVar17->field_0x8)[1] < puVar10 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,puVar18,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,puVar18);
          }
        }
        else {
          *puVar18 = *puVar10;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 8;
        }
        puVar11 = (uint *)**(undefined8 **)&pFVar17->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar11 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(uint *)(puVar18 + -2));
          }
        }
        else {
          *(uint *)(puVar18 + -2) = *puVar11;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
        }
        uVar25 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar25;
        puVar18 = puVar18 + 4;
      } while ((int)uVar25 < (int)local_914);
    }
  }
  bVar19 = 1;
  if (0x1b9 < *(int *)&param_1->field_0x40) {
    bVar19 = ~((byte)param_1->field_0x2b >> 4) & 1;
  }
  if (((param_1->field_0x28 & 5) != 0) && (bVar19 != 0)) {
    local_858[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_858);
    local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_878.ArrayNum = 0;
    local_878.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_878,param_1,false);
    local_888.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_888.ArrayNum = 0;
    local_888.ArrayMax = 0;
    TArray<FLeaf,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_888,param_1,false);
    if (local_888.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.AllocatorInstance.Data);
    }
    if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.AllocatorInstance.Data);
    }
  }
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    local_910 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_910 = (uint)(this->RootOutside != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_910);
    if (1 < local_910) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      this->RootOutside = local_910 != 0;
    }
  }
  else {
    this->RootOutside = *piVar7 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    local_90c = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_90c = (uint)(this->Linked != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_90c);
    if (1 < local_90c) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147ff2960;
    this->Linked = local_90c != 0;
  }
  else {
    this->Linked = *piVar7 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x14a)) {
    local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.ArrayNum = 0;
    local_868.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_868,param_1,false);
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
  }
LAB_147ff2960:
  puVar11 = &this->NumUniqueVertices;
  puVar12 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar12 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar11);
    }
  }
  else {
    *puVar11 = *puVar12;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (((local_918[0].GlobalStripFlags & 1) == 0) || ((local_918[0].ClassStripFlags & 1) == 0)) {
    ::operator<<(param_1,&this->VertexBuffer);
  }
  ::operator<<(param_1,&this->LightingGuid);
  TArrayPrivateFriend::Serialize<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32>_>
            (param_1,&this->LightmassSettings);
  return;
}

// Serialize @ 147ff2a10

void __thiscall UModel::Serialize(UModel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUModel @ 147ff8840

void __cdecl UModel::StaticRegisterNativesUModel(void)

{
  return;
}

// UpdateVertices @ 1480004e0

void __thiscall UModel::UpdateVertices(UModel *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  FRenderCommandFence::Wait(&this->ReleaseResourcesFence,false);
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar4 = Z_Construct_UClass_ABrush_NoRegister();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      return;
    }
  }
  FStaticMeshVertexBuffers::InitModelBuffers
            (&(this->VertexBuffer).Buffers,&(this->VertexBuffer).Vertices);
  piVar1 = &(this->VertexBuffer).Vertices.ArrayMax;
  (this->VertexBuffer).Vertices.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->VertexBuffer).Vertices.AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  return;
}

