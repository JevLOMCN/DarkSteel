// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FCustomRenderPassRendererInput @ 1453f93b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCustomRenderPassRendererInput * __thiscall
FSceneInterface::FCustomRenderPassRendererInput::FCustomRenderPassRendererInput
          (FCustomRenderPassRendererInput *this,FCustomRenderPassRendererInput *param_1)

{
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  double dVar1;
  AActor *pAVar2;
  undefined4 uVar3;
  
  dVar1 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar1;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar1 = (param_1->ViewRotationMatrix).M[0][1];
  (this->ViewRotationMatrix).M[0][0] = (param_1->ViewRotationMatrix).M[0][0];
  (this->ViewRotationMatrix).M[0][1] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[0][3];
  (this->ViewRotationMatrix).M[0][2] = (param_1->ViewRotationMatrix).M[0][2];
  (this->ViewRotationMatrix).M[0][3] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[1][1];
  (this->ViewRotationMatrix).M[1][0] = (param_1->ViewRotationMatrix).M[1][0];
  (this->ViewRotationMatrix).M[1][1] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[1][3];
  (this->ViewRotationMatrix).M[1][2] = (param_1->ViewRotationMatrix).M[1][2];
  (this->ViewRotationMatrix).M[1][3] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[2][1];
  (this->ViewRotationMatrix).M[2][0] = (param_1->ViewRotationMatrix).M[2][0];
  (this->ViewRotationMatrix).M[2][1] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[2][3];
  (this->ViewRotationMatrix).M[2][2] = (param_1->ViewRotationMatrix).M[2][2];
  (this->ViewRotationMatrix).M[2][3] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[3][1];
  (this->ViewRotationMatrix).M[3][0] = (param_1->ViewRotationMatrix).M[3][0];
  (this->ViewRotationMatrix).M[3][1] = dVar1;
  dVar1 = (param_1->ViewRotationMatrix).M[3][3];
  (this->ViewRotationMatrix).M[3][2] = (param_1->ViewRotationMatrix).M[3][2];
  (this->ViewRotationMatrix).M[3][3] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[0][1];
  (this->ProjectionMatrix).M[0][0] = (param_1->ProjectionMatrix).M[0][0];
  (this->ProjectionMatrix).M[0][1] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[0][3];
  (this->ProjectionMatrix).M[0][2] = (param_1->ProjectionMatrix).M[0][2];
  (this->ProjectionMatrix).M[0][3] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[1][1];
  (this->ProjectionMatrix).M[1][0] = (param_1->ProjectionMatrix).M[1][0];
  (this->ProjectionMatrix).M[1][1] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[1][3];
  (this->ProjectionMatrix).M[1][2] = (param_1->ProjectionMatrix).M[1][2];
  (this->ProjectionMatrix).M[1][3] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[2][1];
  (this->ProjectionMatrix).M[2][0] = (param_1->ProjectionMatrix).M[2][0];
  (this->ProjectionMatrix).M[2][1] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[2][3];
  (this->ProjectionMatrix).M[2][2] = (param_1->ProjectionMatrix).M[2][2];
  (this->ProjectionMatrix).M[2][3] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[3][1];
  (this->ProjectionMatrix).M[3][0] = (param_1->ProjectionMatrix).M[3][0];
  (this->ProjectionMatrix).M[3][1] = dVar1;
  dVar1 = (param_1->ProjectionMatrix).M[3][3];
  (this->ProjectionMatrix).M[3][2] = (param_1->ProjectionMatrix).M[3][2];
  (this->ProjectionMatrix).M[3][3] = dVar1;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x34 = 0;
  (this->HiddenPrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HiddenPrimitives).HashSize = 0;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(&this->HiddenPrimitives,&param_1->HiddenPrimitives);
  this_00 = &this->ShowOnlyPrimitives;
  *(undefined8 *)&this_00->field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
  (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
  if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    operator=((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)&param_1->ShowOnlyPrimitives);
  }
  FEngineShowFlags::FEngineShowFlags(&this->EngineShowFlags,&param_1->EngineShowFlags);
  uVar3 = *(undefined4 *)&(param_1->ViewActor).field_0x4;
  pAVar2 = (param_1->ViewActor).Actor;
  (this->ViewActor).ActorUniqueId = (param_1->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->ViewActor).field_0x4 = uVar3;
  (this->ViewActor).Actor = pAVar2;
  this->ViewStateInterface = param_1->ViewStateInterface;
  this->PostVolumeUserFlags = param_1->PostVolumeUserFlags;
  this->bIsSceneCapture = param_1->bIsSceneCapture;
  this->bUseMainViewFamilyShowFlags = param_1->bUseMainViewFamilyShowFlags;
  this->bOverridesPostVolumeUserFlags = param_1->bOverridesPostVolumeUserFlags;
  this->CustomRenderPass = param_1->CustomRenderPass;
  return this;
}

// ~FCustomRenderPassRendererInput @ 1454d6fd0

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
FSceneInterface::FCustomRenderPassRendererInput::~FCustomRenderPassRendererInput
          (FCustomRenderPassRendererInput *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  FVar1 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if (*(int *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->ShowOnlyPrimitives);
  }
  (this->HiddenPrimitives).HashSize = 0;
  FVar3 = (this->HiddenPrimitives).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HiddenPrimitives).Elements);
  return;
}

