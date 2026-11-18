// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// TGPUSkinAPEXClothVertexFactory<1> @ 147cc2600

TGPUSkinAPEXClothVertexFactory<1> * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::TGPUSkinAPEXClothVertexFactory<1>
          (TGPUSkinAPEXClothVertexFactory<1> *this,FInitializer *param_1,uint param_2)

{
  FGPUBaseSkinAPEXClothVertexFactory::FGPUBaseSkinAPEXClothVertexFactory
            ((FGPUBaseSkinAPEXClothVertexFactory *)this,param_2);
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory
            ((FGPUBaseSkinVertexFactory *)&this->field_0xf0,param_1);
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  *(undefined ***)&this->field_0xf0 = &_vftable__for__TGPUSkinVertexFactory<1>__;
  this->ClothDataPtr = (FGPUSkinAPEXClothDataType *)0x0;
  return this;
}

// TGPUSkinAPEXClothVertexFactory<1> @ 147cc2670

TGPUSkinAPEXClothVertexFactory<1> * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::TGPUSkinAPEXClothVertexFactory<1>
          (TGPUSkinAPEXClothVertexFactory<1> *this,Type param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,bool param_6)

{
  FInitializer local_28;
  
  FGPUBaseSkinAPEXClothVertexFactory::FGPUBaseSkinAPEXClothVertexFactory
            ((FGPUBaseSkinAPEXClothVertexFactory *)this,param_5);
  local_28.BaseVertexIndex = param_4;
  local_28.bUsedForPassthroughVertexFactory = param_6;
  local_28.BoneOffset = 0;
  local_28.FeatureLevel = param_1;
  local_28.NumBones = param_2;
  local_28.NumVertices = param_3;
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory
            ((FGPUBaseSkinVertexFactory *)&this->field_0xf0,&local_28);
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  *(undefined ***)&this->field_0xf0 = &_vftable__for__TGPUSkinVertexFactory<1>__;
  this->ClothDataPtr = (FGPUSkinAPEXClothDataType *)0x0;
  return this;
}

// TGPUSkinAPEXClothVertexFactory<0> @ 147cc2720

TGPUSkinAPEXClothVertexFactory<0> * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::TGPUSkinAPEXClothVertexFactory<0>
          (TGPUSkinAPEXClothVertexFactory<0> *this,FInitializer *param_1,uint param_2)

{
  FGPUBaseSkinAPEXClothVertexFactory::FGPUBaseSkinAPEXClothVertexFactory
            ((FGPUBaseSkinAPEXClothVertexFactory *)this,param_2);
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory
            ((FGPUBaseSkinVertexFactory *)&this->field_0xf0,param_1);
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  *(undefined ***)&this->field_0xf0 = &_vftable__for__TGPUSkinVertexFactory<0>__;
  this->ClothDataPtr = (FGPUSkinAPEXClothDataType *)0x0;
  return this;
}

// TGPUSkinAPEXClothVertexFactory<0> @ 147cc2790

TGPUSkinAPEXClothVertexFactory<0> * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::TGPUSkinAPEXClothVertexFactory<0>
          (TGPUSkinAPEXClothVertexFactory<0> *this,Type param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,bool param_6)

{
  FInitializer local_28;
  
  FGPUBaseSkinAPEXClothVertexFactory::FGPUBaseSkinAPEXClothVertexFactory
            ((FGPUBaseSkinAPEXClothVertexFactory *)this,param_5);
  local_28.BaseVertexIndex = param_4;
  local_28.bUsedForPassthroughVertexFactory = param_6;
  local_28.BoneOffset = 0;
  local_28.FeatureLevel = param_1;
  local_28.NumBones = param_2;
  local_28.NumVertices = param_3;
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory
            ((FGPUBaseSkinVertexFactory *)&this->field_0xf0,&local_28);
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  *(undefined ***)&this->field_0xf0 = &_vftable__for__TGPUSkinVertexFactory<0>__;
  this->ClothDataPtr = (FGPUSkinAPEXClothDataType *)0x0;
  return this;
}

// ~TGPUSkinAPEXClothVertexFactory<1> @ 147cc75f0

void __thiscall
TGPUSkinAPEXClothVertexFactory<1>::~TGPUSkinAPEXClothVertexFactory<1>
          (TGPUSkinAPEXClothVertexFactory<1> *this)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FGPUSkinAPEXClothDataType *pFVar2;
  FScriptContainerElement *pFVar3;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  this_00 = &this->field_0xf0;
  *(undefined ***)this_00 = &_vftable__for__TGPUSkinVertexFactory<1>__;
  if ((this->ClothDataPtr->ClothBuffer).Reference != (FRHIShaderResourceView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ClothDataPtr->ClothBuffer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                       ,0x2d3,L"ClothBuffer RHI resource should have been released in ReleaseRHI");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = this->ClothDataPtr;
  if (pFVar2 != (FGPUSkinAPEXClothDataType *)0x0) {
    pFVar3 = (pFVar2->ClothIndexMapping).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    this_01 = (pFVar2->ClothBuffer).Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    ::operator_delete(pFVar2,0x158);
  }
  *(undefined8 *)&this->field_0x288 = 0;
  *(undefined ***)this_00 = &___7FGPUBaseSkinVertexFactory__6B_;
  if (*(FRHIResource **)&this->field_0x298 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x298);
  }
  if (*(FRHIResource **)&this->field_0x290 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x290);
  }
  if (*(void **)&this->field_0x288 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x288,0x140);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::~FShaderDataType
            ((FShaderDataType *)&this->field_0x230);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this_00);
  lVar7 = 2;
  *(undefined ***)this = &___7FGPUBaseSkinAPEXClothVertexFactory__6B_;
  puVar6 = (undefined8 *)&this->field_0x58;
  do {
    puVar1 = puVar6 + -2;
    puVar6 = puVar6 + -3;
    lVar7 = lVar7 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
    if ((FRHIResource *)*puVar6 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar6);
    }
  } while (lVar7 != 0);
  return;
}

// ~TGPUSkinAPEXClothVertexFactory<0> @ 147cc7750

void __thiscall
TGPUSkinAPEXClothVertexFactory<0>::~TGPUSkinAPEXClothVertexFactory<0>
          (TGPUSkinAPEXClothVertexFactory<0> *this)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FGPUSkinAPEXClothDataType *pFVar2;
  FScriptContainerElement *pFVar3;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *(undefined ***)this = &_vftable__for__FGPUBaseSkinAPEXClothVertexFactory__;
  this_00 = &this->field_0xf0;
  *(undefined ***)this_00 = &_vftable__for__TGPUSkinVertexFactory<0>__;
  if ((this->ClothDataPtr->ClothBuffer).Reference != (FRHIShaderResourceView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ClothDataPtr->ClothBuffer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                       ,0x2d3,L"ClothBuffer RHI resource should have been released in ReleaseRHI");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = this->ClothDataPtr;
  if (pFVar2 != (FGPUSkinAPEXClothDataType *)0x0) {
    pFVar3 = (pFVar2->ClothIndexMapping).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    this_01 = (pFVar2->ClothBuffer).Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    ::operator_delete(pFVar2,0x158);
  }
  *(undefined8 *)&this->field_0x288 = 0;
  *(undefined ***)this_00 = &___7FGPUBaseSkinVertexFactory__6B_;
  if (*(FRHIResource **)&this->field_0x298 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x298);
  }
  if (*(FRHIResource **)&this->field_0x290 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x290);
  }
  if (*(void **)&this->field_0x288 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x288,0x140);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::~FShaderDataType
            ((FShaderDataType *)&this->field_0x230);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this_00);
  lVar7 = 2;
  *(undefined ***)this = &___7FGPUBaseSkinAPEXClothVertexFactory__6B_;
  puVar6 = (undefined8 *)&this->field_0x58;
  do {
    puVar1 = puVar6 + -2;
    puVar6 = puVar6 + -3;
    lVar7 = lVar7 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
    if ((FRHIResource *)*puVar6 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar6);
    }
  } while (lVar7 != 0);
  return;
}

// GetClothBuffer @ 147cfaff0

/* WARNING: Removing unreachable block (ram,0x000147cfb050) */

TRefCountPtr<FRHIShaderResourceView> __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetClothBuffer(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *in_RDX;
  
  if (this->ClothDataPtr == (FGPUSkinAPEXClothDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (this->ClothDataPtr->ClothBuffer).Reference;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    *(FRHIShaderResourceView **)in_RDX = this_00;
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothBuffer @ 147cfb070

/* WARNING: Removing unreachable block (ram,0x000147cfb0d0) */

TRefCountPtr<FRHIShaderResourceView> __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetClothBuffer(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *in_RDX;
  
  if (this->ClothDataPtr == (FGPUSkinAPEXClothDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (this->ClothDataPtr->ClothBuffer).Reference;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    *(FRHIShaderResourceView **)in_RDX = this_00;
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothBuffer @ 147cfb0f0

/* WARNING: Removing unreachable block (ram,0x000147cfb150) */

TRefCountPtr<FRHIShaderResourceView> __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetClothBuffer(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *in_RDX;
  
  if (this->ClothDataPtr == (FGPUSkinAPEXClothDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (this->ClothDataPtr->ClothBuffer).Reference;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    *(FRHIShaderResourceView **)in_RDX = this_00;
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothBuffer @ 147cfb170

/* WARNING: Removing unreachable block (ram,0x000147cfb1d0) */

TRefCountPtr<FRHIShaderResourceView> __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetClothBuffer(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *in_RDX;
  
  if (this->ClothDataPtr == (FGPUSkinAPEXClothDataType *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    this_00 = (this->ClothDataPtr->ClothBuffer).Reference;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    *(FRHIShaderResourceView **)in_RDX = this_00;
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothIndexOffset @ 147cfb420

uint __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetClothIndexOffset
          (TGPUSkinAPEXClothVertexFactory<1> *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGPUSkinAPEXClothDataType *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  pFVar3 = this->ClothDataPtr;
  if (pFVar3 == (FGPUSkinAPEXClothDataType *)0x0) {
LAB_147cfb492:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                       ,700,L"Cloth Index Mapping not found for Vertex Index %u");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar7 = 0;
  }
  else {
    iVar2 = (pFVar3->ClothIndexMapping).ArrayNum;
    pFVar6 = (pFVar3->ClothIndexMapping).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((pFVar3->ClothIndexMapping).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FClothBufferIndexMapping,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) goto LAB_147cfb492;
      if (*(uint *)pFVar6 == param_1) break;
      pFVar6 = pFVar6 + 0xc;
    }
    uVar7 = param_2 * *(int *)(pFVar6 + 8) + *(int *)(pFVar6 + 4);
  }
  return uVar7;
}

// GetClothIndexOffset @ 147cfb4e0

uint __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetClothIndexOffset
          (TGPUSkinAPEXClothVertexFactory<0> *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGPUSkinAPEXClothDataType *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  pFVar3 = this->ClothDataPtr;
  if (pFVar3 == (FGPUSkinAPEXClothDataType *)0x0) {
LAB_147cfb552:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                       ,700,L"Cloth Index Mapping not found for Vertex Index %u");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar7 = 0;
  }
  else {
    iVar2 = (pFVar3->ClothIndexMapping).ArrayNum;
    pFVar6 = (pFVar3->ClothIndexMapping).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((pFVar3->ClothIndexMapping).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FClothBufferIndexMapping,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) goto LAB_147cfb552;
      if (*(uint *)pFVar6 == param_1) break;
      pFVar6 = pFVar6 + 0xc;
    }
    uVar7 = param_2 * *(int *)(pFVar6 + 8) + *(int *)(pFVar6 + 4);
  }
  return uVar7;
}

// GetClothVertexFactory @ 147cfb610

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetClothVertexFactory(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)&this[-1].field_0x1e0;
}

// GetClothVertexFactory @ 147cfb620

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetClothVertexFactory(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)&this[-1].field_0x1e0;
}

// GetClothVertexFactory @ 147cfb630

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetClothVertexFactory(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)&this[-1].field_0x1e0;
}

// GetClothVertexFactory @ 147cfb640

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetClothVertexFactory(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  return (FGPUBaseSkinAPEXClothVertexFactory *)&this[-1].field_0x1e0;
}

// GetType @ 147d0fa70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetType(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  return &StaticType;
}

// GetType @ 147d0fa80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetType(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  return &StaticType;
}

// GetVertexFactory @ 147d136e0

FGPUBaseSkinVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetVertexFactory(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  FGPUBaseSkinVertexFactory *pFVar1;
  
  pFVar1 = (FGPUBaseSkinVertexFactory *)&this->field_0xf0;
  if (this == (TGPUSkinAPEXClothVertexFactory<1> *)0x0) {
    pFVar1 = (FGPUBaseSkinVertexFactory *)0x0;
  }
  return pFVar1;
}

// GetVertexFactory @ 147d13700

FGPUBaseSkinVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<1>::GetVertexFactory(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  FGPUBaseSkinVertexFactory *pFVar1;
  
  pFVar1 = (FGPUBaseSkinVertexFactory *)&this->field_0xf0;
  if (this == (TGPUSkinAPEXClothVertexFactory<1> *)0x0) {
    pFVar1 = (FGPUBaseSkinVertexFactory *)0x0;
  }
  return pFVar1;
}

// GetVertexFactory @ 147d13720

FGPUBaseSkinVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetVertexFactory(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  FGPUBaseSkinVertexFactory *pFVar1;
  
  pFVar1 = (FGPUBaseSkinVertexFactory *)&this->field_0xf0;
  if (this == (TGPUSkinAPEXClothVertexFactory<0> *)0x0) {
    pFVar1 = (FGPUBaseSkinVertexFactory *)0x0;
  }
  return pFVar1;
}

// GetVertexFactory @ 147d13740

FGPUBaseSkinVertexFactory * __thiscall
TGPUSkinAPEXClothVertexFactory<0>::GetVertexFactory(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  FGPUBaseSkinVertexFactory *pFVar1;
  
  pFVar1 = (FGPUBaseSkinVertexFactory *)&this->field_0xf0;
  if (this == (TGPUSkinAPEXClothVertexFactory<0> *)0x0) {
    pFVar1 = (FGPUBaseSkinVertexFactory *)0x0;
  }
  return pFVar1;
}

// InitRHI @ 147d16b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinAPEXClothVertexFactory<1>::InitRHI
          (TGPUSkinAPEXClothVertexFactory<1> *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  undefined1 auStackY_168 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_138;
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FGPUBaseSkinVertexFactory::InitRHI((FGPUBaseSkinVertexFactory *)this,param_1);
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  (**(code **)(*(longlong *)this + 0xc0))(this,&local_a8);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0x11;
  if (*(longlong *)&this->field_0x198 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x3ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = (uint)(byte)this->field_0x1c;
  if (this->field_0x1c == 5) {
    TVar3 = GMaxRHIFeatureLevel;
  }
  TGPUSkinVertexFactory<1>::GetVertexElements
            (TVar3,Default,*(FGPUSkinDataType **)&this->field_0x198,&local_138,
             (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)&this->field_0x20,(int *)&this->field_0x1b0);
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,&local_138,'\x10','\x10');
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_138,Default);
  return;
}

// InitRHI @ 147d16c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinAPEXClothVertexFactory<0>::InitRHI
          (TGPUSkinAPEXClothVertexFactory<0> *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  undefined1 auStackY_168 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_138;
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FGPUBaseSkinVertexFactory::InitRHI((FGPUBaseSkinVertexFactory *)this,param_1);
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  (**(code **)(*(longlong *)this + 0xc0))(this,&local_a8);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0x11;
  if (*(longlong *)&this->field_0x198 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x3ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = (uint)(byte)this->field_0x1c;
  if (this->field_0x1c == 5) {
    TVar3 = GMaxRHIFeatureLevel;
  }
  TGPUSkinVertexFactory<0>::GetVertexElements
            (TVar3,Default,*(FGPUSkinDataType **)&this->field_0x198,&local_138,
             (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)&this->field_0x20,(int *)&this->field_0x1b0);
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,&local_138,'\x10','\x10');
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_138,Default);
  return;
}

// ModifyCompilationEnvironment @ 147d1ad00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinAPEXClothVertexFactory<1>::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  TGPUSkinVertexFactory<1>::ModifyCompilationEnvironment(param_1,param_2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPUSKIN_APEX_CLOTH",L"1");
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_APEX_CLOTH_PREVIOUS",
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1);
  return;
}

// ModifyCompilationEnvironment @ 147d1ada0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinAPEXClothVertexFactory<0>::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  TGPUSkinVertexFactory<0>::ModifyCompilationEnvironment(param_1,param_2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPUSKIN_APEX_CLOTH",L"1");
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_APEX_CLOTH_PREVIOUS",
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1);
  return;
}

// ReleaseRHI @ 147d210c0

void __thiscall
TGPUSkinAPEXClothVertexFactory<1>::ReleaseRHI(TGPUSkinAPEXClothVertexFactory<1> *this)

{
  FRHIResource *pFVar1;
  longlong lVar2;
  
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  pFVar1 = *(FRHIResource **)&this->field_0x1a0;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1a0 = 0;
    FRHIResource::Release(pFVar1);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData((FShaderDataType *)&this->field_0x140)
  ;
  FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::ReleaseClothSimulData
            ((ClothShaderType *)&this[-1].field_0x1f0);
  lVar2 = *(longlong *)&this->field_0x1d0;
  if ((lVar2 != 0) && (pFVar1 = *(FRHIResource **)(lVar2 + 0x140), pFVar1 != (FRHIResource *)0x0)) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    FRHIResource::Release(pFVar1);
    return;
  }
  return;
}

// ReleaseRHI @ 147d21140

void __thiscall
TGPUSkinAPEXClothVertexFactory<0>::ReleaseRHI(TGPUSkinAPEXClothVertexFactory<0> *this)

{
  FRHIResource *pFVar1;
  longlong lVar2;
  
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  pFVar1 = *(FRHIResource **)&this->field_0x1a0;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1a0 = 0;
    FRHIResource::Release(pFVar1);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData((FShaderDataType *)&this->field_0x140)
  ;
  FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::ReleaseClothSimulData
            ((ClothShaderType *)&this[-1].field_0x1f0);
  lVar2 = *(longlong *)&this->field_0x1d0;
  if ((lVar2 != 0) && (pFVar1 = *(FRHIResource **)(lVar2 + 0x140), pFVar1 != (FRHIResource *)0x0)) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    FRHIResource::Release(pFVar1);
    return;
  }
  return;
}

// SetData @ 147d295e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinAPEXClothVertexFactory<1>::SetData
          (TGPUSkinAPEXClothVertexFactory<1> *this,FRHICommandListBase *param_1,
          FGPUSkinDataType *param_2)

{
  undefined1 *puVar1;
  FGPUSkinDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FGPUSkinDataType *this_00;
  longlong local_18 [2];
  
  if ((param_2 == (FGPUSkinDataType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClothData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x520,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &this->field_0x198;
  if (*(longlong *)puVar1 == 0) {
    this_00 = ::operator_new(0x158);
    if (this_00 != (FGPUSkinDataType *)0x0) {
      memset(this_00,0,0x158);
      FGPUSkinDataType::FGPUSkinDataType(this_00);
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
    }
    *(FGPUSkinDataType **)&this->field_0x1d0 = this_00;
    if ((longlong *)puVar1 != local_18) {
      pFVar2 = *(FGPUSkinDataType **)puVar1;
      *(FGPUSkinDataType **)puVar1 = this_00;
      this_00 = pFVar2;
    }
    if (this_00 != (FGPUSkinDataType *)0x0) {
      ::operator_delete(this_00,0x140);
    }
  }
  FGPUSkinAPEXClothDataType::operator=
            (*(FGPUSkinAPEXClothDataType **)&this->field_0x1d0,(FGPUSkinAPEXClothDataType *)param_2)
  ;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// SetData @ 147d296f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinAPEXClothVertexFactory<0>::SetData
          (TGPUSkinAPEXClothVertexFactory<0> *this,FRHICommandListBase *param_1,
          FGPUSkinDataType *param_2)

{
  undefined1 *puVar1;
  FGPUSkinDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FGPUSkinDataType *this_00;
  longlong local_18 [2];
  
  if ((param_2 == (FGPUSkinDataType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClothData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x520,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &this->field_0x198;
  if (*(longlong *)puVar1 == 0) {
    this_00 = ::operator_new(0x158);
    if (this_00 != (FGPUSkinDataType *)0x0) {
      memset(this_00,0,0x158);
      FGPUSkinDataType::FGPUSkinDataType(this_00);
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
    }
    *(FGPUSkinDataType **)&this->field_0x1d0 = this_00;
    if ((longlong *)puVar1 != local_18) {
      pFVar2 = *(FGPUSkinDataType **)puVar1;
      *(FGPUSkinDataType **)puVar1 = this_00;
      this_00 = pFVar2;
    }
    if (this_00 != (FGPUSkinDataType *)0x0) {
      ::operator_delete(this_00,0x140);
    }
  }
  FGPUSkinAPEXClothDataType::operator=
            (*(FGPUSkinAPEXClothDataType **)&this->field_0x1d0,(FGPUSkinAPEXClothDataType *)param_2)
  ;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// ShouldCompilePermutation @ 147d2d360

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TGPUSkinAPEXClothVertexFactory<1>::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled(param_1->Platform);
  if ((bVar1) && (((param_1->MaterialParameters)._padding_ & 0x1000000002U) != 0)) {
    bVar1 = TGPUSkinVertexFactory<1>::ShouldCompilePermutation(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 147d2d3b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TGPUSkinAPEXClothVertexFactory<0>::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled(param_1->Platform);
  if ((bVar1) && (((param_1->MaterialParameters)._padding_ & 0x1000000002U) != 0)) {
    bVar1 = TGPUSkinVertexFactory<0>::ShouldCompilePermutation(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

