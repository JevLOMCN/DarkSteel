// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// FGPUBaseSkinVertexFactory @ 147cc3500

FGPUBaseSkinVertexFactory * __thiscall
FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory
          (FGPUBaseSkinVertexFactory *this,FInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGPUBaseSkinVertexFactory *pFVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this,param_1->FeatureLevel);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x1ffffff;
  this->_padding_ = (longlong)&___7FGPUBaseSkinVertexFactory__6B_;
  (this->ShaderData).InputWeightStream.Reference = (FRHIShaderResourceView *)0x0;
  (this->ShaderData).InputWeightIndexSize = 0;
  (this->ShaderData).UpdatedFrameNumber = 0;
  (this->ShaderData).BoneBuffer.Elements[0].VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->ShaderData).BoneBuffer.Elements[0].VertexBufferSRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->ShaderData).BoneBuffer.Elements[0].Size = 0;
  (this->ShaderData).BoneBuffer.Elements[1].VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->ShaderData).BoneBuffer.Elements[1].VertexBufferSRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->ShaderData).BoneBuffer.Elements[1].Size = 0;
  (this->ShaderData).CurrentBuffer = 0;
  (this->ShaderData).PreviousRevisionNumber = 0;
  (this->ShaderData).CurrentRevisionNumber = 0;
  FShaderDataType::MaxGPUSkinBones = GetMaxGPUSkinBones((ITargetPlatform *)0x0);
  if (0x10000 < FShaderDataType::MaxGPUSkinBones) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxGPUSkinBones <= GHardwareMaxGPUSkinBones",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGPUBaseSkinVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  (this->Data).Ptr = (FGPUSkinDataType *)0x0;
  (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  (this->MorphDeltaBufferSlot).Reference = (FRHIStreamSourceSlot *)0x0;
  this->MorphDeltaStreamIndex = -1;
  this->NumBones = param_1->NumBones;
  this->BoneOffset = param_1->BoneOffset;
  uVar3 = FSharedPoolPolicyData::GetPoolBucketIndex
                    ((FSharedPoolPolicyData *)&GBoneBufferPool.field_0x8,param_1->NumBones * 0x30);
  if (0x11 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bucket < NumPoolBucketSizes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0xb1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGPUBaseSkinVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->BoneBufferSize = FSharedPoolPolicyData::BucketSizes[uVar3];
  this->NumVertices = param_1->NumVertices;
  this->BaseVertexIndex = param_1->BaseVertexIndex;
  this->bUsedForPassthroughVertexFactory = param_1->bUsedForPassthroughVertexFactory;
  this->bUniformBufferDirty = true;
  return this;
}

// ~FGPUBaseSkinVertexFactory @ 147cc8620

void __thiscall
FGPUBaseSkinVertexFactory::~FGPUBaseSkinVertexFactory(FGPUBaseSkinVertexFactory *this)

{
  FRHIStreamSourceSlot *this_00;
  FRHIUniformBuffer *this_01;
  FGPUSkinDataType *pFVar1;
  
  this->_padding_ = (longlong)&___7FGPUBaseSkinVertexFactory__6B_;
  this_00 = (this->MorphDeltaBufferSlot).Reference;
  if (this_00 != (FRHIStreamSourceSlot *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UniformBuffer).Reference;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    ::operator_delete(pFVar1,0x140);
  }
  FShaderDataType::~FShaderDataType(&this->ShaderData);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// CopyDataTypeForLocalVertexFactory @ 147ce6aa0

void __thiscall
FGPUBaseSkinVertexFactory::CopyDataTypeForLocalVertexFactory
          (FGPUBaseSkinVertexFactory *this,FDataType *param_1)

{
  FGPUSkinDataType *pFVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  
  if ((this->Data).Ptr == (FGPUSkinDataType *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x2f3,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Data).Ptr;
  lVar3 = pFVar1->_padding_;
  param_1->_padding_ = pFVar1->_padding_;
  param_1->_padding_ = lVar3;
  pFVar1 = (this->Data).Ptr;
  lVar3 = pFVar1->_padding_;
  param_1->_padding_ = pFVar1->_padding_;
  param_1->_padding_ = lVar3;
  pFVar1 = (this->Data).Ptr;
  lVar3 = pFVar1->_padding_;
  param_1->_padding_ = pFVar1->_padding_;
  param_1->_padding_ = lVar3;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=
            ((TArray<FVertexStreamComponent,TFixedAllocator<4>_> *)&param_1->_padding_,
             (TArray<FVertexStreamComponent,TFixedAllocator<4>_> *)&((this->Data).Ptr)->_padding_);
  pFVar1 = (this->Data).Ptr;
  lVar3 = pFVar1->_padding_;
  param_1->_padding_ = pFVar1->_padding_;
  param_1->_padding_ = lVar3;
  pFVar1 = (this->Data).Ptr;
  uVar4 = *(undefined4 *)&pFVar1->_padding_;
  uVar5 = *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  uVar6 = *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  uVar7 = *(undefined1 *)((longlong)&pFVar1->_padding_ + 6);
  uVar8 = *(undefined1 *)((longlong)&pFVar1->_padding_ + 7);
  (param_1->PreSkinPositionComponent).VertexBuffer = (FVertexBuffer *)pFVar1->_padding_;
  (param_1->PreSkinPositionComponent).StreamOffset = uVar4;
  (param_1->PreSkinPositionComponent).Offset = uVar5;
  (param_1->PreSkinPositionComponent).Stride = uVar6;
  (param_1->PreSkinPositionComponent).Type = (TEnumAsByte<EVertexElementType>)uVar7;
  (param_1->PreSkinPositionComponent).VertexStreamUsage = uVar8;
  param_1->_padding_ = ((this->Data).Ptr)->_padding_;
  param_1->PreSkinPositionComponentSRV = (FRHIShaderResourceView *)((this->Data).Ptr)->_padding_;
  param_1->_padding_ = ((this->Data).Ptr)->_padding_;
  param_1->_padding_ = ((this->Data).Ptr)->_padding_;
  *(int *)&param_1->_padding_ = (int)((this->Data).Ptr)->_padding_;
  param_1->_padding_ = ((this->Data).Ptr)->_padding_;
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) =
       *(undefined1 *)((longlong)&((this->Data).Ptr)->_padding_ + 4);
  *(undefined1 *)((longlong)&param_1->_padding_ + 5) =
       *(undefined1 *)((longlong)&((this->Data).Ptr)->_padding_ + 5);
  *(undefined1 *)((longlong)&param_1->_padding_ + 6) =
       *(undefined1 *)((longlong)&((this->Data).Ptr)->_padding_ + 6);
  return;
}

// GetAlwaysUseDeformerForUnlimitedBoneInfluences @ 147cfa890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGPUBaseSkinVertexFactory::GetAlwaysUseDeformerForUnlimitedBoneInfluences(EShaderPlatform param_1)

{
  char cVar1;
  bool bVar2;
  IMeshDeformerProvider *pIVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (::_TSS0 <= *piVar4) {
    return bCachedResult;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 == -1) {
    if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&UseDeformerForUBICVar.CVarName,
                         L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences");
      UseDeformerForUBICVar.CVar = (IConsoleVariable *)0x0;
      atexit(``FGPUBaseSkinVertexFactory::GetAlwaysUseDeformerForUnlimitedBoneInfluences'::__l2::
             <lambda_1>::operator()'::__l2::_dynamic_atexit_destructor_for__UseDeformerForUBICVar__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    pIVar3 = IMeshDeformerProvider::Get();
    if (((pIVar3 == (IMeshDeformerProvider *)0x0) ||
        (cVar1 = (**(code **)((longlong)*pIVar3 + 8))(pIVar3,param_1), cVar1 == '\0')) ||
       (bVar2 = FShaderPlatformCachedIniValue<bool>::Get(&UseDeformerForUBICVar,param_1), !bVar2)) {
      bCachedResult = false;
    }
    else {
      bCachedResult = true;
    }
    _Init_thread_footer(&::_TSS0);
    return bCachedResult;
  }
  return bCachedResult;
}

// GetBoneInfluenceLimitForAsset @ 147cfad00

int __cdecl
FGPUBaseSkinVertexFactory::GetBoneInfluenceLimitForAsset(int param_1,ITargetPlatform *param_2)

{
  int iVar1;
  int iVar2;
  UClass *this;
  
  if (0 < param_1) {
    return param_1;
  }
  this = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  iVar1 = *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[0xb].field_0x8;
  iVar2 = 0xc;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// GetBoneInfluenceType @ 147cfad80

GPUSkinBoneInfluenceType __thiscall
FGPUBaseSkinVertexFactory::GetBoneInfluenceType(FGPUBaseSkinVertexFactory *this)

{
  return DefaultBoneInfluence;
}

// GetClothVertexFactory @ 147cfb650

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
FGPUBaseSkinVertexFactory::GetClothVertexFactory(FGPUBaseSkinVertexFactory *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)0x0;
}

// GetClothVertexFactory @ 147cfb660

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
FGPUBaseSkinVertexFactory::GetClothVertexFactory(FGPUBaseSkinVertexFactory *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)0x0;
}

// GetColorComponentsSRV @ 147cfb740

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinVertexFactory::GetColorComponentsSRV(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *in_RDX;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 == (FGPUSkinDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    *(FRHIResource **)in_RDX = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetColorIndexMask @ 147cfb790

uint __thiscall FGPUBaseSkinVertexFactory::GetColorIndexMask(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    return (uint)pFVar1->_padding_;
  }
  return 0;
}

// GetMaxGPUSkinBones @ 147d090c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones(ITargetPlatform *param_1)

{
  UClass *this;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = GCVarMaxGPUSkinBones != 0x10000;
  if ((bVar3) && (!bIsLogged)) {
    if (3 < (byte)LogSkeletalMesh._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    }
    bIsLogged = true;
  }
  this = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  iVar1 = *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[0xb].field_0xc;
  iVar2 = iVar1;
  if ((bVar3) && (iVar2 = GCVarMaxGPUSkinBones, iVar1 < GCVarMaxGPUSkinBones)) {
    iVar2 = iVar1;
  }
  iVar1 = 0xc;
  if (0xc < iVar2) {
    iVar1 = iVar2;
  }
  if (GCVarSupport16BitBoneIndex < 1) {
    iVar2 = 0x100;
    if (iVar1 < 0x100) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return iVar1;
}

// GetMinimumPerPlatformMaxGPUSkinBonesValue @ 147d09250

int __cdecl FGPUBaseSkinVertexFactory::GetMinimumPerPlatformMaxGPUSkinBonesValue(void)

{
  int iVar1;
  int iVar2;
  UClass *this;
  bool bVar3;
  
  bVar3 = GCVarMaxGPUSkinBones != 0x10000;
  this = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  iVar1 = *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[0xb].field_0xc;
  if (bVar3) {
    iVar2 = GCVarMaxGPUSkinBones;
    if (iVar1 < GCVarMaxGPUSkinBones) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return iVar1;
}

// GetMorphVertexBuffer @ 147d09460

FMorphVertexBuffer * __thiscall
FGPUBaseSkinVertexFactory::GetMorphVertexBuffer(FGPUBaseSkinVertexFactory *this,bool param_1)

{
  FGPUSkinDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMorphVertexBuffer *pFVar4;
  
  pFVar1 = (this->Data).Ptr;
  if ((pFVar1 == (FGPUSkinDataType *)0x0) ||
     ((pFVar1->bMorphTarget != false &&
      (pFVar1->MorphVertexBufferPool == (FMorphVertexBufferPool *)0x0)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid() && (!Data->bMorphTarget || Data->MorphVertexBufferPool)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x308,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMorphVertexBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Data).Ptr;
  if (pFVar1->bMorphTarget != false) {
    pFVar4 = FMorphVertexBufferPool::GetMorphVertexBufferForReading
                       (pFVar1->MorphVertexBufferPool,param_1);
    return pFVar4;
  }
  return (FMorphVertexBuffer *)0x0;
}

// GetMorphVertexBufferUpdatedFrameNumber @ 147d09500

uint __thiscall
FGPUBaseSkinVertexFactory::GetMorphVertexBufferUpdatedFrameNumber(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (this->Data).Ptr;
  if ((pFVar1 == (FGPUSkinDataType *)0x0) ||
     ((pFVar1->bMorphTarget != false &&
      (pFVar1->MorphVertexBufferPool == (FMorphVertexBufferPool *)0x0)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid() && (!Data->bMorphTarget || Data->MorphVertexBufferPool)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->Data).Ptr;
  if (pFVar1->bMorphTarget != false) {
    return pFVar1->MorphVertexBufferPool->UpdatedFrameNumber;
  }
  return 0;
}

// GetNumBoneInfluences @ 147d09860

uint __thiscall FGPUBaseSkinVertexFactory::GetNumBoneInfluences(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    return pFVar1->NumBoneInfluences;
  }
  return 0;
}

// GetNumTexCoords @ 147d098a0

uint __thiscall FGPUBaseSkinVertexFactory::GetNumTexCoords(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    return (uint)*(byte *)((longlong)&pFVar1->_padding_ + 5);
  }
  return 0;
}

// GetOverrideVertexStreams @ 147d0a750

void __thiscall
FGPUBaseSkinVertexFactory::GetOverrideVertexStreams
          (FGPUBaseSkinVertexFactory *this,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FVertexInputStream> FVar3;
  int iVar4;
  
  if (-1 < this->MorphDeltaStreamIndex) {
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                        (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
      param_1 = (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    uVar2 = this->MorphDeltaStreamIndex;
    puVar1 = (uint *)((longlong)param_1 + (longlong)iVar4 * 0xc);
    *(FRHIStreamSourceSlot **)(puVar1 + 1) = (this->MorphDeltaBufferSlot).Reference;
    *puVar1 = uVar2 & 0xf | 0x80000000;
  }
  return;
}

// GetPositionsSRV @ 147d0bf20

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinVertexFactory::GetPositionsSRV(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *in_RDX;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 == (FGPUSkinDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    *(FRHIResource **)in_RDX = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetTangentsSRV @ 147d0f5e0

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinVertexFactory::GetTangentsSRV(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *in_RDX;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 == (FGPUSkinDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    *(FRHIResource **)in_RDX = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetTextureCoordinatesSRV @ 147d0f710

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinVertexFactory::GetTextureCoordinatesSRV(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *in_RDX;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 == (FGPUSkinDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    *(FRHIResource **)in_RDX = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetTriangleSortingPositionSRV @ 147d0fa40

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinVertexFactory::GetTriangleSortingPositionSRV(FGPUBaseSkinVertexFactory *this)

{
  FRHIShaderResourceView *in_RDX;
  
  (**(code **)(this->_padding_ + 0x88))();
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetUnlimitedBoneInfluences @ 147d0ff00

bool __cdecl FGPUBaseSkinVertexFactory::GetUnlimitedBoneInfluences(ITargetPlatform *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  bool bVar4;
  ITargetPlatformManagerModule *pIVar5;
  ITargetPlatform *pIVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  FName local_res8;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  if (param_1 != (ITargetPlatform *)0x0) {
    pIVar5 = GetTargetPlatformManagerRef();
    pIVar6 = (ITargetPlatform *)(**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
    uVar2 = CVarUnlimitedBoneInfluences._8_8_;
    if (pIVar6 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000147d0ff37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)CVarUnlimitedBoneInfluences._8_8_ + 0xc0))();
      return (bool)uVar3;
    }
    pcVar1 = *(code **)(*(longlong *)CVarUnlimitedBoneInfluences._8_8_ + 0x100);
    local_28 = (void *)0x0;
    local_20 = 0;
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
    if (*(int *)(puVar7 + 1) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)*puVar7;
    }
    pFVar8 = ::FName::FName(&local_res8,pwVar9);
    (*pcVar1)(uVar2,&local_38,*pFVar8,&local_28);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar3 = (**(code **)(*local_38 + 0xc0))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      return (bool)uVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return GCVarUnlimitedBoneInfluences != 0;
}

// InitRHI @ 147d16e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUBaseSkinVertexFactory::InitRHI(FGPUBaseSkinVertexFactory *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  FRHIUniformBuffer *pFVar2;
  FRHIStreamSourceSlot *pFVar3;
  code *pcVar4;
  undefined8 this_00;
  bool bVar5;
  longlong lVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIStreamSourceSlot *this_01;
  TRefCountPtr<FRHIStreamSourceSlot> *pTVar9;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  longlong local_18 [2];
  
  if (this->bUsedForPassthroughVertexFactory == false) {
    lVar6 = (**(code **)(this->_padding_ + 0x68))();
    if (lVar6 == 0) {
      pFVar7 = FGPUSkinVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar8 = RHICreateUniformBuffer
                        (&local_res18,(FRHIUniformBufferLayout *)0x0,
                         (EUniformBufferUsage)(pFVar7->Layout).Reference,2);
      pTVar1 = &this->UniformBuffer;
      if ((FRHIUniformBuffer *)pTVar1 != TVar8.Reference) {
        pFVar2 = pTVar1->Reference;
        pTVar1->Reference = (FRHIUniformBuffer *)(TVar8.Reference)->_padding_;
        (TVar8.Reference)->_padding_ = 0;
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar2);
        }
      }
    }
    else {
      pFVar7 = FGPUSkinAPEXClothVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar8 = RHICreateUniformBuffer
                        (&local_res8,(FRHIUniformBufferLayout *)0x0,
                         (EUniformBufferUsage)(pFVar7->Layout).Reference,2);
      pTVar1 = &this->UniformBuffer;
      local_res18 = local_res8;
      if ((FRHIUniformBuffer *)pTVar1 != TVar8.Reference) {
        pFVar2 = pTVar1->Reference;
        pTVar1->Reference = (FRHIUniformBuffer *)(TVar8.Reference)->_padding_;
        (TVar8.Reference)->_padding_ = 0;
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar2);
          local_res18 = local_res8;
        }
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  this_00 = GNullMorphVertexBuffer._32_8_;
  this_01 = ::operator_new(0x20);
  if (this_01 == (FRHIStreamSourceSlot *)0x0) {
    this_01 = (FRHIStreamSourceSlot *)0x0;
  }
  else {
    FRHIResource::FRHIResource((FRHIResource *)this_01,RRT_StreamSourceSlot);
    this_01->_padding_ = (longlong)&___7FRHIStreamSourceSlot__6B_;
    (this_01->Buffer).Reference = (FRHIBuffer *)this_00;
    if (this_00 != 0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  pTVar9 = &this->MorphDeltaBufferSlot;
  if (pTVar9 != (TRefCountPtr<FRHIStreamSourceSlot> *)local_18) {
    pFVar3 = pTVar9->Reference;
    pTVar9->Reference = this_01;
    this_01 = pFVar3;
  }
  if (this_01 != (FRHIStreamSourceSlot *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// IsMorphTarget @ 147d1a3f0

bool __thiscall FGPUBaseSkinVertexFactory::IsMorphTarget(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    return pFVar1->bMorphTarget;
  }
  return false;
}

// ReleaseRHI @ 147d21320

void __thiscall FGPUBaseSkinVertexFactory::ReleaseRHI(FGPUBaseSkinVertexFactory *this)

{
  FRHIUniformBuffer *this_00;
  
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  this_00 = (this->UniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// SetData @ 147d29800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUBaseSkinVertexFactory::SetData(FGPUBaseSkinVertexFactory *this,FGPUSkinDataType *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147d2980d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x58))(this,0x154be5ed0,param_1);
  return;
}

// SetData @ 147d29820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUBaseSkinVertexFactory::SetData
          (FGPUBaseSkinVertexFactory *this,FRHICommandListBase *param_1,FGPUSkinDataType *param_2)

{
  TUniquePtr<FGPUSkinDataType,TDefaultDelete<FGPUSkinDataType>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FGPUSkinDataType *pFVar4;
  FGPUSkinDataType *pFVar5;
  longlong local_18 [2];
  
  if ((param_2 == (FGPUSkinDataType *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x299,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = &this->Data;
  if (pTVar1->Ptr == (FGPUSkinDataType *)0x0) {
    pFVar4 = ::operator_new(0x140);
    pFVar5 = (FGPUSkinDataType *)0x0;
    if (pFVar4 != (FGPUSkinDataType *)0x0) {
      memset(pFVar4,0,0x140);
      pFVar5 = FGPUSkinDataType::FGPUSkinDataType(pFVar4);
    }
    if (pTVar1 != (TUniquePtr<FGPUSkinDataType,TDefaultDelete<FGPUSkinDataType>_> *)local_18) {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar5;
      pFVar5 = pFVar4;
    }
    if (pFVar5 != (FGPUSkinDataType *)0x0) {
      ::operator_delete(pFVar5,0x140);
    }
  }
  FGPUSkinDataType::operator=(pTVar1->Ptr,param_2);
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// UpdateMorphState @ 147d38650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUBaseSkinVertexFactory::UpdateMorphState
          (FGPUBaseSkinVertexFactory *this,FRHICommandListBase *param_1,bool param_2)

{
  FGPUSkinDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  TGlobalResource<FNullMorphVertexBuffer,0> *pTVar4;
  
  if (((this->Data).Ptr == (FGPUSkinDataType *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x2e7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ((this->Data).Ptr)->bMorphTarget = param_2;
  if (!param_2) {
    return;
  }
  pFVar1 = (this->Data).Ptr;
  if (((pFVar1 == (FGPUSkinDataType *)0x0) ||
      ((pFVar1->bMorphTarget != false &&
       (pFVar1->MorphVertexBufferPool == (FMorphVertexBufferPool *)0x0)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsValid() && (!Data->bMorphTarget || Data->MorphVertexBufferPool)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x308,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Data).Ptr;
  if (pFVar1->bMorphTarget != false) {
    pTVar4 = (TGlobalResource<FNullMorphVertexBuffer,0> *)
             FMorphVertexBufferPool::GetMorphVertexBufferForReading
                       (pFVar1->MorphVertexBufferPool,false);
    if ((FMorphVertexBuffer *)pTVar4 != (FMorphVertexBuffer *)0x0) goto LAB_147d38723;
  }
  pTVar4 = &GNullMorphVertexBuffer;
LAB_147d38723:
  FRHICommandListBase::UpdateStreamSourceSlot
            (param_1,(this->MorphDeltaBufferSlot).Reference,
             (FRHIBuffer *)((FMorphVertexBuffer *)pTVar4)->_padding_);
  return;
}

// UpdateUniformBuffer @ 147d38e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUBaseSkinVertexFactory::UpdateUniformBuffer
          (FGPUBaseSkinVertexFactory *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FShaderParametersMetadata *pFVar6;
  FRHIUniformBufferLayout *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  FRHIResource *local_188;
  FRHIResource *local_180;
  undefined1 local_178 [40];
  ForAnyElementType FStack_150;
  FRHIShaderResourceView *local_148;
  FGPUSkinAPEXClothVertexFactoryUniformShaderParameters local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (this->bUniformBufferDirty == false) {
    return;
  }
  pTVar1 = &this->UniformBuffer;
  lVar5 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar5 == 0) {
    local_178._24_8_ = (FRHIShaderResourceView *)0x0;
    local_178._32_8_ = (FRHIShaderResourceView *)0x0;
    FStack_150.Data = (FScriptContainerElement *)0x0;
    local_148 = (FRHIShaderResourceView *)0x0;
    GetGPUSkinVertexFactoryCommonShaderParameters
              ((FGPUSkinVertexFactoryCommonShaderParameters *)local_178,this);
    if (pTVar1->Reference != (FRHIUniformBuffer *)0x0) {
      FRHICommandListBase::UpdateUniformBuffer(param_1,pTVar1->Reference,local_178);
      goto LAB_147d3907c;
    }
    if ((this->bUsedForPassthroughVertexFactory == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bUsedForPassthroughVertexFactory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                           ,0x2dd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = FGPUSkinVertexFactoryUniformShaderParameters::GetStructMetadata();
    pFVar7 = FShaderParametersMetadata::GetLayout(pFVar6);
    local_198 = 1;
    TVar8 = RHICreateUniformBuffer
                      (&local_180,(FRHIUniformBufferLayout *)local_178,(EUniformBufferUsage)pFVar7,2
                      );
    if ((FRHIUniformBuffer *)pTVar1 != TVar8.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIUniformBuffer *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
  }
  else {
    local_138.Common.BoneMatrices = (FRHIShaderResourceView *)0x0;
    local_138.ClothSimulVertsPositionsNormals = (FRHIShaderResourceView *)0x0;
    local_138.PreviousClothSimulVertsPositionsNormals = (FRHIShaderResourceView *)0x0;
    local_138.Common.PreviousBoneMatrices = (FRHIShaderResourceView *)0x0;
    local_138.Common.InputWeightStream = (FRHIShaderResourceView *)0x0;
    local_138.Common.PreviousMorphBuffer = (FRHIShaderResourceView *)0x0;
    local_138.GPUSkinApexCloth = (FRHIShaderResourceView *)0x0;
    GetGPUSkinAPEXClothVertexFactoryUniformShaderParameters(&local_138,this);
    if (pTVar1->Reference != (FRHIUniformBuffer *)0x0) {
      FRHICommandListBase::UpdateUniformBuffer(param_1,pTVar1->Reference,&local_138);
      goto LAB_147d3907c;
    }
    if ((this->bUsedForPassthroughVertexFactory == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bUsedForPassthroughVertexFactory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                           ,0x2ce,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = FGPUSkinAPEXClothVertexFactoryUniformShaderParameters::GetStructMetadata();
    pFVar7 = FShaderParametersMetadata::GetLayout(pFVar6);
    local_198 = 1;
    TVar8 = RHICreateUniformBuffer
                      (&local_188,(FRHIUniformBufferLayout *)&local_138,(EUniformBufferUsage)pFVar7,
                       2);
    local_180 = local_188;
    if ((FRHIUniformBuffer *)pTVar1 != TVar8.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIUniformBuffer *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
        local_180 = local_188;
      }
    }
  }
  if (local_180 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_180);
  }
LAB_147d3907c:
  this->bUniformBufferDirty = false;
  return;
}

// Use16BitBoneIndex @ 147d392e0

bool __thiscall FGPUBaseSkinVertexFactory::Use16BitBoneIndex(FGPUBaseSkinVertexFactory *this)

{
  FGPUSkinDataType *pFVar1;
  
  pFVar1 = (this->Data).Ptr;
  if (pFVar1 != (FGPUSkinDataType *)0x0) {
    return pFVar1->bUse16BitBoneIndex;
  }
  return false;
}

// UseUnlimitedBoneInfluences @ 147d39300

bool __cdecl
FGPUBaseSkinVertexFactory::UseUnlimitedBoneInfluences(uint param_1,ITargetPlatform *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ITargetPlatformManagerModule *pIVar7;
  ITargetPlatform *pIVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  FName local_res10;
  FName local_res18;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  void *local_48 [2];
  void *local_38 [2];
  
  if (param_2 != (ITargetPlatform *)0x0) {
    pIVar7 = GetTargetPlatformManagerRef();
    pIVar8 = (ITargetPlatform *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
    uVar2 = CVarUnlimitedBoneInfluences._8_8_;
    if (pIVar8 == param_2) {
      cVar3 = (**(code **)(*(longlong *)CVarUnlimitedBoneInfluences._8_8_ + 0xc0))();
      goto LAB_147d3942c;
    }
    local_78 = (void *)0x0;
    local_70 = 0;
    pcVar1 = *(code **)(*(longlong *)CVarUnlimitedBoneInfluences._8_8_ + 0x100);
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 8))(param_2,local_48);
    if (*(int *)(puVar9 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar9;
    }
    pFVar10 = ::FName::FName(&local_res10,pwVar11);
    (*pcVar1)(uVar2,&local_88,*pFVar10,&local_78);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88 != (longlong *)0x0) {
      if ((local_88 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      cVar3 = (**(code **)(*local_88 + 0xc0))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      goto LAB_147d3942c;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  cVar3 = GCVarUnlimitedBoneInfluences != 0;
LAB_147d3942c:
  uVar6 = GCVarUnlimitedBoneInfluencesThreshold;
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    if (param_2 != (ITargetPlatform *)0x0) {
      pIVar7 = GetTargetPlatformManagerRef();
      pIVar8 = (ITargetPlatform *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
      uVar2 = CVarUnlimitedBoneInfluencesThreshold._8_8_;
      if (pIVar8 == param_2) {
        uVar6 = (**(code **)(*(longlong *)CVarUnlimitedBoneInfluencesThreshold._8_8_ + 200))();
      }
      else {
        local_68 = (void *)0x0;
        local_60 = 0;
        pcVar1 = *(code **)(*(longlong *)CVarUnlimitedBoneInfluencesThreshold._8_8_ + 0x100);
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 8))(param_2,local_38);
        if (*(int *)(puVar9 + 1) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)*puVar9;
        }
        pFVar10 = ::FName::FName(&local_res18,pwVar11);
        (*pcVar1)(uVar2,&local_58,*pFVar10,&local_68);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_58 != (longlong *)0x0) {
          if ((local_58 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          uVar6 = (**(code **)(*local_58 + 200))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
    }
    bVar4 = uVar6 < param_1;
  }
  return bVar4;
}

