// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 4

// FGeomCacheVertexFactory @ 14ca05830

FGeomCacheVertexFactory * __thiscall
FGeomCacheVertexFactory::FGeomCacheVertexFactory(FGeomCacheVertexFactory *this,Type param_1)

{
  FVertexFactory::FVertexFactory((FVertexFactory *)this,param_1);
  *(undefined ***)this = &___7FGeometryCacheVertexVertexFactory__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->field_0x140);
  *(undefined8 *)&this->field_0x168 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x170 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined8 *)&this->field_0x188 = 0;
  *(undefined8 *)&this->field_0x190 = 0;
  *(undefined8 *)&this->field_0x198 = 0;
  *(undefined4 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  *(undefined8 *)&this->field_0x1f0 = 0;
  *(undefined8 *)&this->field_0x1f8 = 0;
  *(undefined8 *)&this->field_0x200 = 0;
  this->field_0x208 = 0;
  *(undefined4 *)&this->field_0x1e4 = 4;
  *(undefined ***)this = &___7FGeomCacheVertexFactory__6B_;
  return this;
}

// Init @ 14ca20040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeomCacheVertexFactory::Init
          (FGeomCacheVertexFactory *this,FRHICommandListBase *param_1,FVertexBuffer *param_2,
          FVertexBuffer *param_3,FVertexBuffer *param_4,FVertexBuffer *param_5,
          FVertexBuffer *param_6,FVertexBuffer *param_7)

{
  undefined1 auStackY_108 [32];
  FDataType local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_c8.PositionComponent.StreamOffset = 0;
  local_c8.PositionComponent.Offset = '\0';
  local_c8.PositionComponent.Stride = '\0';
  local_c8.PositionComponent.Type.Value = '\0';
  local_c8.PositionComponent.VertexStreamUsage = Default;
  local_c8.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_c8.TangentBasisComponents[0].StreamOffset = 0;
  local_c8.TangentBasisComponents[0].Offset = '\0';
  local_c8.TangentBasisComponents[0].Stride = '\0';
  local_c8.TangentBasisComponents[0].Type.Value = '\0';
  local_c8.TangentBasisComponents[0].VertexStreamUsage = Default;
  local_c8.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_c8.TangentBasisComponents[1].StreamOffset = 0;
  local_c8.TangentBasisComponents[1].Offset = '\0';
  local_c8.TangentBasisComponents[1].Stride = '\0';
  local_c8.TangentBasisComponents[1].Type.Value = '\0';
  local_c8.TangentBasisComponents[1].VertexStreamUsage = Default;
  local_c8.TextureCoordinates.ArrayNum = 0;
  local_c8.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_c8.ColorComponent.StreamOffset = 0;
  local_c8.ColorComponent.Offset = '\0';
  local_c8.ColorComponent.Stride = '\0';
  local_c8.ColorComponent.Type.Value = '\0';
  local_c8.ColorComponent.VertexStreamUsage = Default;
  local_c8.MotionBlurDataComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_c8.MotionBlurDataComponent.StreamOffset = 0;
  local_c8.MotionBlurDataComponent.Offset = '\0';
  local_c8.MotionBlurDataComponent.Stride = '\0';
  local_c8.MotionBlurDataComponent.Type.Value = '\0';
  local_c8.MotionBlurDataComponent.VertexStreamUsage = Default;
  local_c8.bIsDummyData = false;
  local_c8.TextureCoordinates.ArrayMax = 4;
  InitComponentVF(param_2,param_3,param_4,param_5,param_6,param_7,&local_c8);
  FGeometryCacheVertexVertexFactory::SetData
            ((FGeometryCacheVertexVertexFactory *)this,param_1,&local_c8);
  return;
}

// InitComponentVF @ 14ca20fd0

void __cdecl
FGeomCacheVertexFactory::InitComponentVF
          (FVertexBuffer *param_1,FVertexBuffer *param_2,FVertexBuffer *param_3,
          FVertexBuffer *param_4,FVertexBuffer *param_5,FVertexBuffer *param_6,FDataType *param_7)

{
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *pTVar1;
  int *piVar2;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVertexBuffer *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pTVar1 = &param_7->TextureCoordinates;
  piVar2 = &(param_7->TextureCoordinates).ArrayMax;
  (param_7->PositionComponent).VertexBuffer = param_1;
  (param_7->PositionComponent).StreamOffset = 0;
  (param_7->PositionComponent).Offset = '\0';
  (param_7->PositionComponent).Stride = '\f';
  (param_7->PositionComponent).Type = '\x03';
  (param_7->PositionComponent).VertexStreamUsage = Default;
  (param_7->TextureCoordinates).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_28 = param_5;
  uStack_20 = 0;
  uStack_1c = 0x20800;
  if ((pTVar1 <= &local_28) && (&local_28 < (pTVar1->AllocatorInstance).InlineData + *piVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_7->TextureCoordinates).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_7->TextureCoordinates).ArrayNum = iVar6 + 1;
  pTVar3 = (pTVar1->AllocatorInstance).InlineData + iVar6;
  *(FVertexBuffer **)pTVar3->Pad = local_28;
  *(ulonglong *)(pTVar3->Pad + 8) = CONCAT44(uStack_1c,uStack_20);
  param_7->TangentBasisComponents[0].VertexBuffer = param_3;
  param_7->TangentBasisComponents[0].StreamOffset = 0;
  param_7->TangentBasisComponents[0].Offset = '\0';
  param_7->TangentBasisComponents[0].Stride = '\x04';
  param_7->TangentBasisComponents[0].Type = '\x05';
  param_7->TangentBasisComponents[0].VertexStreamUsage = Default;
  param_7->TangentBasisComponents[1].VertexBuffer = param_4;
  param_7->TangentBasisComponents[1].StreamOffset = 0;
  param_7->TangentBasisComponents[1].Offset = '\0';
  param_7->TangentBasisComponents[1].Stride = '\x04';
  param_7->TangentBasisComponents[1].Type = '\x05';
  param_7->TangentBasisComponents[1].VertexStreamUsage = Default;
  (param_7->ColorComponent).VertexBuffer = param_6;
  (param_7->ColorComponent).StreamOffset = 0;
  (param_7->ColorComponent).Offset = '\0';
  (param_7->ColorComponent).Stride = '\x04';
  (param_7->ColorComponent).Type = '\b';
  (param_7->ColorComponent).VertexStreamUsage = Default;
  (param_7->MotionBlurDataComponent).VertexBuffer = param_2;
  (param_7->MotionBlurDataComponent).StreamOffset = 0;
  (param_7->MotionBlurDataComponent).Offset = '\0';
  (param_7->MotionBlurDataComponent).Stride = '\f';
  (param_7->MotionBlurDataComponent).Type = '\x03';
  (param_7->MotionBlurDataComponent).VertexStreamUsage = Default;
  return;
}

// InitDummyComponentVF @ 14ca21410

void __cdecl FGeomCacheVertexFactory::InitDummyComponentVF(FDataType *param_1)

{
  int iVar1;
  ForElementType<FVertexStreamComponent> *pFVar2;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *pTVar3;
  undefined1 local_res8 [8];
  FVertexBuffer local_178;
  FRHIResource *local_148;
  FVertexBuffer local_140;
  FRHIResource *local_110;
  FVertexBuffer local_108;
  FRHIResource *local_d8;
  FVertexBuffer local_d0;
  FRHIResource *local_a0;
  FVertexBuffer local_98;
  FRHIResource *local_68;
  FVertexBuffer local_60;
  FRHIResource *local_30;
  
  param_1->bIsDummyData = true;
  FVertexBuffer::FVertexBuffer(&local_98);
  local_98._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  local_68 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_60);
  local_60._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  local_30 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_d0);
  local_a0 = (FRHIResource *)0x0;
  local_d0._padding_ = (longlong)&___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&local_108);
  local_d8 = (FRHIResource *)0x0;
  local_108._padding_ = (longlong)&___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&local_140);
  local_140._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  local_110 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_178);
  local_178._padding_ = (longlong)&___7FGeomCacheColorBuffer__6B_;
  local_148 = (FRHIResource *)0x0;
  InitComponentVF(&local_98,&local_60,&local_d0,&local_108,&local_140,&local_178,param_1);
  pTVar3 = &param_1->TextureCoordinates;
  (param_1->PositionComponent).VertexBuffer = (FVertexBuffer *)0x0;
  iVar1 = (param_1->TextureCoordinates).ArrayNum;
  pFVar2 = &pTVar3->AllocatorInstance;
  while( true ) {
    if ((param_1->TextureCoordinates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVertexStreamComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar3 == (TArray<FVertexStreamComponent,TFixedAllocator<4>_> *)(pFVar2->InlineData + iVar1)
       ) break;
    (pTVar3->AllocatorInstance).InlineData[0].Pad[0] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[1] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[2] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[3] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[4] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[5] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[6] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0].Pad[7] = '\0';
    pTVar3 = (TArray<FVertexStreamComponent,TFixedAllocator<4>_> *)
             ((pTVar3->AllocatorInstance).InlineData + 1);
  }
  param_1->TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
  param_1->TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
  (param_1->ColorComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (param_1->MotionBlurDataComponent).VertexBuffer = (FVertexBuffer *)0x0;
  if (local_148 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_148);
  }
  FVertexBuffer::~FVertexBuffer(&local_178);
  if (local_110 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_110);
  }
  FVertexBuffer::~FVertexBuffer(&local_140);
  if (local_d8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_d8);
  }
  FVertexBuffer::~FVertexBuffer(&local_108);
  if (local_a0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a0);
  }
  FVertexBuffer::~FVertexBuffer(&local_d0);
  if (local_30 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_30);
  }
  FVertexBuffer::~FVertexBuffer(&local_60);
  if (local_68 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_68);
  }
  FVertexBuffer::~FVertexBuffer(&local_98);
  return;
}

