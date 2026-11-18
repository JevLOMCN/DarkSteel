// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateElementBatch @ 1424eabd0

FSlateElementBatch * __thiscall
FSlateElementBatch::FSlateElementBatch
          (FSlateElementBatch *this,FSlateShaderResource *param_1,FShaderParams *param_2,
          ESlateShader param_3,ESlateDrawPrimitive param_4,ESlateDrawEffect param_5,
          ESlateBatchDrawFlag param_6,FSlateDrawElement *param_7,int param_8,uint param_9,
          ISlateUpdatableInstanceBuffer *param_10)

{
  schar sVar1;
  FSlateClippingState *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  sVar1 = param_7->SceneIndex;
  pFVar2 = (param_7->ClipStateHandle).CachedClipState;
  iVar5 = (param_7->ClipStateHandle).PrecachedClipIndex;
  uVar6 = *(undefined4 *)&(param_7->ClipStateHandle).field_0xc;
  (this->BatchKey).CustomDrawer.Object = (ICustomSlateElement *)0x0;
  (this->BatchKey).CustomDrawer.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_2->PixelParams).field0_0x0 + 8);
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams.field0_0x0 =
       *(undefined8 *)&(param_2->PixelParams).field0_0x0;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_2->PixelParams2).field0_0x0 + 8);
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams2.field0_0x0 =
       *(undefined8 *)&(param_2->PixelParams2).field0_0x0;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams2.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_2->PixelParams3).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->PixelParams3).field0_0x0 + 8);
  (this->BatchKey).DrawFlags = param_6;
  (this->BatchKey).DrawPrimitiveType = param_4;
  (this->BatchKey).DrawEffects = param_5;
  (this->BatchKey).InstanceCount = param_8;
  (this->BatchKey).InstanceOffset = param_9;
  (this->BatchKey).InstanceData = param_10;
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams3.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams3.field0_0x0 + 8) = uVar4;
  (this->BatchKey).ShaderType = param_3;
  (this->BatchKey).ClipStateHandle.CachedClipState = pFVar2;
  (this->BatchKey).ClipStateHandle.PrecachedClipIndex = iVar5;
  *(undefined4 *)&(this->BatchKey).ClipStateHandle.field_0xc = uVar6;
  (this->BatchKey).SceneIndex = sVar1;
  this->ShaderResource = param_1;
  this->NumElementsInBatch = 0;
  this->VertexArrayIndex = -1;
  this->IndexArrayIndex = -1;
  return this;
}

// FSlateElementBatch @ 1424eac60

FSlateElementBatch * __thiscall
FSlateElementBatch::FSlateElementBatch
          (FSlateElementBatch *this,TWeakPtr<ICustomSlateElement,1> *param_1,
          FSlateDrawElement *param_2)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  ICustomSlateElement *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  atomic<int> *paVar8;
  
  uVar4 = *(undefined4 *)&(param_2->ClipStateHandle).CachedClipState;
  uVar5 = *(undefined4 *)((longlong)&(param_2->ClipStateHandle).CachedClipState + 4);
  iVar6 = (param_2->ClipStateHandle).PrecachedClipIndex;
  uVar7 = *(undefined4 *)&(param_2->ClipStateHandle).field_0xc;
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  pIVar3 = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    (this->BatchKey).CustomDrawer.Object = pIVar3;
    paVar8 = (atomic<int> *)&DAT_0000000c;
    (this->BatchKey).CustomDrawer.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    paVar8 = &pTVar2->WeakReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
    (this->BatchKey).CustomDrawer.Object = pIVar3;
    (this->BatchKey).CustomDrawer.WeakReferenceCount.ReferenceController = pTVar2;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  (this->BatchKey).DrawFlags = None;
  (this->BatchKey).ShaderType = Default;
  (this->BatchKey).DrawPrimitiveType = TriangleList;
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams.field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams2.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams2.field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->BatchKey).ShaderParams.PixelParams3.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BatchKey).ShaderParams.PixelParams3.field0_0x0 + 8) = 0;
  (this->BatchKey).InstanceCount = 0;
  (this->BatchKey).InstanceOffset = 0;
  (this->BatchKey).SceneIndex = -1;
  (this->BatchKey).DrawEffects = None;
  *(undefined4 *)&(this->BatchKey).ClipStateHandle.CachedClipState = uVar4;
  *(undefined4 *)((longlong)&(this->BatchKey).ClipStateHandle.CachedClipState + 4) = uVar5;
  (this->BatchKey).ClipStateHandle.PrecachedClipIndex = iVar6;
  *(undefined4 *)&(this->BatchKey).ClipStateHandle.field_0xc = uVar7;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  this->ShaderResource = (FSlateShaderResource *)0x0;
  this->NumElementsInBatch = 0;
  this->VertexArrayIndex = -1;
  this->IndexArrayIndex = -1;
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar8 = &pTVar2->WeakReferenceCount;
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  return this;
}

