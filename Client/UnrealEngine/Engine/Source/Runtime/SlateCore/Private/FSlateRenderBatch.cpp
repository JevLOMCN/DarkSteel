// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FSlateRenderBatch @ 1424eaf50

FSlateRenderBatch * __thiscall
FSlateRenderBatch::FSlateRenderBatch
          (FSlateRenderBatch *this,int param_1,FShaderParams *param_2,FSlateShaderResource *param_3,
          ESlateDrawPrimitive param_4,ESlateShader param_5,ESlateDrawEffect param_6,
          ESlateBatchDrawFlag param_7,schar param_8,
          TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *param_9,TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                   *param_10,int param_11,int param_12)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FSlateRenderBatch *pFVar6;
  
  uVar3 = *(undefined8 *)((longlong)&(param_2->PixelParams).field0_0x0 + 8);
  *(undefined8 *)&(this->ShaderParams).PixelParams.field0_0x0 =
       *(undefined8 *)&(param_2->PixelParams).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShaderParams).PixelParams.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_2->PixelParams2).field0_0x0 + 8);
  *(undefined8 *)&(this->ShaderParams).PixelParams2.field0_0x0 =
       *(undefined8 *)&(param_2->PixelParams2).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShaderParams).PixelParams2.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_2->PixelParams3).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->PixelParams3).field0_0x0 + 8);
  this->SourceVertices = param_9;
  this->SourceIndices = param_10;
  this->VertexOffset = param_11;
  this->IndexOffset = param_12;
  this->DrawFlags = param_7;
  this->ShaderType = param_5;
  this->DrawPrimitiveType = param_4;
  this->DrawEffects = param_6;
  this->SceneIndex = param_8;
  this->LayerId = param_1;
  *(undefined8 *)&(this->ShaderParams).PixelParams3.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(this->ShaderParams).PixelParams3.field0_0x0 + 8) = uVar4;
  this->NextBatchIndex = -1;
  (this->DynamicOffset).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->ClippingState = (FSlateClippingState *)0x0;
  this->ShaderResource = param_3;
  this->InstanceData = (ISlateUpdatableInstanceBufferRenderProxy *)0x0;
  this->CustomDrawer = (ICustomSlateElement *)0x0;
  this->NumVertices = 0;
  this->NumIndices = 0;
  this->InstanceCount = 0;
  this->InstanceOffset = 0;
  this->CachedUsedPostBuffers = None;
  this->bIsMergable = '\x01';
  this->bIsMerged = '\0';
  if ((param_3 != (FSlateShaderResource *)0x0) && (param_3->DestroyState != '!')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderResource == nullptr || !ShaderResource->Debug_IsDestroyed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderBatch.cpp"
                       ,0x2f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateRenderBatch *)(*pcVar2)();
      return pFVar6;
    }
  }
  return this;
}

// AddIndex @ 1424ff780

void __thiscall FSlateRenderBatch::AddIndex(FSlateRenderBatch *this,uint param_1)

{
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_res10 [6];
  
  pTVar1 = this->SourceIndices;
  puVar2 = (uint *)(pTVar1->AllocatorInstance)._padding_;
  local_res10[0] = param_1;
  if ((puVar2 <= local_res10) && (local_res10 < puVar2 + pTVar1->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar5 + 1;
  *(uint *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) = local_res10[0];
  this->NumIndices = this->NumIndices + 1;
  return;
}

// AddVertex @ 1425008a0

void __thiscall FSlateRenderBatch::AddVertex(FSlateRenderBatch *this,FSlateVertex *param_1)

{
  TVector2<float>_u_0 *pTVar1;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar2;
  longlong lVar3;
  undefined8 uVar4;
  TVector2<float>_u_0 TVar5;
  int iVar6;
  longlong lVar7;
  
  pTVar2 = this->SourceVertices;
  iVar6 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,1,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  uVar4 = *(undefined8 *)(param_1->TexCoords + 2);
  lVar7 = (longlong)iVar6 * 0x2c;
  lVar3 = (this->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar7 + lVar3) = *(undefined8 *)param_1->TexCoords;
  ((undefined8 *)(lVar7 + lVar3))[1] = uVar4;
  TVar5 = (param_1->Position).field0_0x0;
  pTVar1 = (TVector2<float>_u_0 *)(lVar7 + 0x10 + lVar3);
  *pTVar1 = (param_1->MaterialTexCoords).field0_0x0;
  pTVar1[1] = TVar5;
  *(undefined8 *)(lVar7 + 0x20 + lVar3) = *(undefined8 *)&param_1->Color;
  *(undefined4 *)(lVar7 + 0x28 + lVar3) = *(undefined4 *)param_1->PixelSize;
  this->NumVertices = this->NumVertices + 1;
  return;
}

// EmplaceIndex @ 1425081c0

void __thiscall FSlateRenderBatch::EmplaceIndex(FSlateRenderBatch *this,uint param_1)

{
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  int iVar2;
  
  pTVar1 = this->SourceIndices;
  iVar2 = pTVar1->ArrayNum;
  if (iVar2 == pTVar1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar2 + 1;
  *(uint *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar2 * 4) = param_1;
  this->NumIndices = this->NumIndices + 1;
  return;
}

// EmplaceVertex @ 142508220

void __thiscall FSlateRenderBatch::EmplaceVertex(FSlateRenderBatch *this,FSlateVertex *param_1)

{
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  undefined8 uVar2;
  TVector2<float>_u_0 TVar3;
  int iVar4;
  undefined8 *puVar5;
  
  pTVar1 = this->SourceVertices;
  iVar4 = pTVar1->ArrayNum;
  if (iVar4 == pTVar1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x42c,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar4 + 1;
  uVar2 = *(undefined8 *)(param_1->TexCoords + 2);
  puVar5 = (undefined8 *)((longlong)iVar4 * 0x2c + (pTVar1->AllocatorInstance)._padding_);
  *puVar5 = *(undefined8 *)param_1->TexCoords;
  puVar5[1] = uVar2;
  TVar3 = (param_1->Position).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar5 + 2) = (param_1->MaterialTexCoords).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar5 + 3) = TVar3;
  puVar5[4] = *(undefined8 *)&param_1->Color;
  *(undefined4 *)(puVar5 + 5) = *(undefined4 *)param_1->PixelSize;
  this->NumVertices = this->NumVertices + 1;
  return;
}

// ReserveIndices @ 14251cb40

void __thiscall FSlateRenderBatch::ReserveIndices(FSlateRenderBatch *this,uint param_1)

{
  uint uVar1;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar2;
  
  pTVar2 = this->SourceIndices;
  uVar1 = pTVar2->ArrayNum + param_1;
  if (-1 < (int)uVar1) {
    if (pTVar2->ArrayMax < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (4,4,uVar1,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

