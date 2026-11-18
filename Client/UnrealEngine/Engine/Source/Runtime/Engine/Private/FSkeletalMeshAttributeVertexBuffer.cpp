// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetFriendlyName @ 1475d4980

FString * __thiscall
FSkeletalMeshAttributeVertexBuffer::GetFriendlyName
          (FSkeletalMeshAttributeVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletalMeshAttributeVertexBuffer");
  return __return_storage_ptr__;
}

// ~FSkeletalMeshAttributeVertexBuffer @ 1484461d0

void __thiscall
FSkeletalMeshAttributeVertexBuffer::~FSkeletalMeshAttributeVertexBuffer
          (FSkeletalMeshAttributeVertexBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshAttributeVertexBuffer__6B_;
  pFVar1 = this->ValueData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->ValueData = (FSkeletalMeshVertexDataInterface *)0x0;
  this_00 = (this->ValueBuffer).VertexBufferSRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ValueBuffer).VertexBufferRHI.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// Allocate @ 148451ec0

void __thiscall
FSkeletalMeshAttributeVertexBuffer::Allocate(FSkeletalMeshAttributeVertexBuffer *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FSkeletalMeshVertexDataInterface *pFVar5;
  
  pFVar5 = this->ValueData;
  if (pFVar5 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar5)(pFVar5,1);
  }
  iVar1 = this->PixelFormat;
  this->ValueData = (FSkeletalMeshVertexDataInterface *)0x0;
  if (iVar1 == 0xd) {
    this->ComponentStride = 4;
  }
  else if (iVar1 == 0x15) {
    this->ComponentStride = 2;
  }
  else {
    if (iVar1 != 0x47) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshAttributeVertexBuffer.cpp"
                         ,0x71,L"");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->ComponentStride = 1;
  }
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 == (FSkeletalMeshVertexDataInterface *)0x0) {
    this->ValueData = (FSkeletalMeshVertexDataInterface *)0x0;
    return;
  }
  iVar1 = this->ComponentCount;
  iVar2 = this->ComponentStride;
  *pFVar5 = (FSkeletalMeshVertexDataInterface)
            &FSkeletalMeshVertexAttributeData::_vftable__for__FSkeletalMeshVertexDataInterface__;
  pFVar5[2] = (FSkeletalMeshVertexDataInterface)0x0;
  pFVar5[3] = (FSkeletalMeshVertexDataInterface)0x0;
  *(undefined1 *)(pFVar5 + 4) = 0;
  *(int *)(pFVar5 + 5) = iVar1 * iVar2;
  pFVar5[1] = (FSkeletalMeshVertexDataInterface)
              &FSkeletalMeshVertexAttributeData::_vftable__for__TResourceArray<unsigned_char,0>__;
  this->ValueData = pFVar5;
  return;
}

// CleanUp @ 14845c250

void __thiscall
FSkeletalMeshAttributeVertexBuffer::CleanUp(FSkeletalMeshAttributeVertexBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->ValueData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->ValueData = (FSkeletalMeshVertexDataInterface *)0x0;
  return;
}

// GetResourceSize @ 14846ead0

int __thiscall
FSkeletalMeshAttributeVertexBuffer::GetResourceSize(FSkeletalMeshAttributeVertexBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  pFVar1 = this->ValueData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    pcVar2 = *(code **)((longlong)*pFVar1 + 0x20);
    iVar3 = (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1);
    iVar4 = (*pcVar2)(pFVar1);
    return iVar4 * iVar3;
  }
  return 0;
}

// Init @ 148474a10

void __thiscall
FSkeletalMeshAttributeVertexBuffer::Init
          (FSkeletalMeshAttributeVertexBuffer *this,EPixelFormat param_1,int param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> local_18;
  
  if (param_2 * param_3 != param_4->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumVertices * InComponentCount == InValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshAttributeVertexBuffer.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (3 < param_3 - 1U) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponentCount >= 1 && InComponentCount <= 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshAttributeVertexBuffer.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ComponentCount = param_3;
  this->PixelFormat = (uint)param_1;
  Allocate(this);
  (**(code **)((longlong)*this->ValueData + 8))(this->ValueData,param_2);
  local_18.DataPtr = param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  SetData(this,&local_18);
  return;
}

// InitRHI @ 1484756c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshAttributeVertexBuffer::InitRHI
          (FSkeletalMeshAttributeVertexBuffer *this,FRHICommandListBase *param_1)

{
  FVertexBufferAndSRV *pFVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  longlong *plVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  FRHIResource *local_res8;
  
  plVar3 = (longlong *)(**(code **)((longlong)*this->ValueData + 0x28))();
  (**(code **)(*plVar3 + 0x10))(plVar3);
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pFVar1 = &this->ValueBuffer;
  if ((FRHIBuffer *)pFVar1 != TVar4.Reference) {
    this_00 = (pFVar1->VertexBufferRHI).Reference;
    (pFVar1->VertexBufferRHI).Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,
                     (FInitializer *)(pFVar1->VertexBufferRHI).Reference);
  pTVar2 = &(this->ValueBuffer).VertexBufferSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar5.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 1484833b0

void __thiscall
FSkeletalMeshAttributeVertexBuffer::ReleaseRHI(FSkeletalMeshAttributeVertexBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  this_00 = (this->ValueBuffer).VertexBufferRHI.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->ValueBuffer).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ValueBuffer).VertexBufferSRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->ValueBuffer).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  (this->ValueBuffer).Size = 0;
  return;
}

// Serialize @ 1484910c0

void __thiscall
FSkeletalMeshAttributeVertexBuffer::Serialize
          (FSkeletalMeshAttributeVertexBuffer *this,FArchive *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  FSkeletalMeshVertexDataInterface *pFVar4;
  bool bVar5;
  
  piVar3 = &this->ComponentCount;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PixelFormat,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->PixelFormat);
    }
  }
  else {
    this->PixelFormat = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ComponentStride,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ComponentStride);
    }
  }
  else {
    this->ComponentStride = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
LAB_1484911f5:
    pFVar4 = this->ValueData;
    if (pFVar4 != (FSkeletalMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar4 + 0x30))(pFVar4,param_1);
    }
  }
  else {
    iVar1 = this->PixelFormat;
    if (iVar1 == 0xd) {
      bVar5 = this->ComponentStride == 4;
LAB_1484911dc:
      if (bVar5) {
        Allocate(this);
        goto LAB_1484911f5;
      }
    }
    else {
      if (iVar1 == 0x15) {
        bVar5 = this->ComponentStride == 2;
        goto LAB_1484911dc;
      }
      if (iVar1 == 0x47) {
        bVar5 = this->ComponentStride == 1;
        goto LAB_1484911dc;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// SetData @ 148493460

void __thiscall
FSkeletalMeshAttributeVertexBuffer::SetData
          (FSkeletalMeshAttributeVertexBuffer *this,TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  ushort *_Dst;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  ushort local_res8 [4];
  
  _Dst = (ushort *)(**(code **)((longlong)*this->ValueData + 0x18))();
  fVar3 = __real_437f0000;
  fVar2 = __real_3f800000;
  iVar6 = this->PixelFormat;
  if (iVar6 == 0xd) {
    memcpy(_Dst,param_1->DataPtr,(longlong)param_1->ArrayNum << 2);
    return;
  }
  if (iVar6 == 0x15) {
    pfVar8 = param_1->DataPtr;
    iVar6 = param_1->ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res8[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res8,*pfVar8);
        uVar7 = uVar7 + 1;
        *_Dst = local_res8[0];
        _Dst = _Dst + 1;
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar7 < iVar6);
    }
  }
  else if (iVar6 == 0x47) {
    pfVar8 = param_1->DataPtr;
    uVar7 = 0;
    iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
    if (0 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = uVar7 + 1;
        fVar9 = *pfVar8;
        if (fVar2 <= *pfVar8) {
          fVar9 = fVar2;
        }
        pfVar8 = pfVar8 + 1;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        *(char *)_Dst = (char)(int)(fVar9 * fVar3);
        _Dst = (ushort *)((longlong)_Dst + 1);
      } while ((int)uVar7 < iVar6);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshAttributeVertexBuffer.cpp"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

