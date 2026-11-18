// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 3

// ~FWmfMediaHardwareVideoDecodingShader @ 14ea97630

void __thiscall
FWmfMediaHardwareVideoDecodingShader::~FWmfMediaHardwareVideoDecodingShader
          (FWmfMediaHardwareVideoDecodingShader *this)

{
  undefined1 *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xb0);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xa0);
  this_00 = &this->field_0x88;
  pFVar1 = *(FShaderLooseParameterBufferInfo **)this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(this_00 + ((longlong)pFVar1 >> 0x18));
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,*(int *)&this->field_0x90);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x78);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x68);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x58);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x40);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x30);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x20);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// GetCommonParameters @ 14eaacda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHardwareVideoDecodingShaderParams * __cdecl
FWmfMediaHardwareVideoDecodingShader::GetCommonParameters
          (FHardwareVideoDecodingShaderParams *__return_storage_ptr__,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  TMatrix<double> *pTVar16;
  undefined1 auStack_c8 [32];
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  __return_storage_ptr__->PointClampedSamplerY = (FRHISamplerState *)0x0;
  __return_storage_ptr__->TextureY = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->TextureUV = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->BilinearClampedSamplerUV = (FRHISamplerState *)0x0;
  __return_storage_ptr__->BilinearClampedSamplerUVAlpha = (FRHISamplerState *)0x0;
  __return_storage_ptr__->PointClampedSamplerY =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pTVar16 = MediaShaders::CombineColorTransformAndOffset
                      (&local_a8,&MediaShaders::YuvToRgbRec709Scaled,&MediaShaders::YUVOffset8bits);
  dVar1 = pTVar16->M[1][2];
  dVar2 = pTVar16->M[1][3];
  dVar3 = pTVar16->M[1][0];
  dVar4 = pTVar16->M[1][1];
  dVar5 = pTVar16->M[2][2];
  dVar6 = pTVar16->M[2][3];
  dVar7 = pTVar16->M[2][0];
  dVar8 = pTVar16->M[2][1];
  dVar9 = pTVar16->M[3][2];
  dVar10 = pTVar16->M[3][3];
  dVar11 = pTVar16->M[3][0];
  dVar12 = pTVar16->M[3][1];
  dVar13 = pTVar16->M[0][2];
  dVar14 = pTVar16->M[0][3];
  dVar15 = pTVar16->M[0][1];
  (__return_storage_ptr__->ColorTransform).M[0][0] = (float)pTVar16->M[0][0];
  (__return_storage_ptr__->ColorTransform).M[0][1] = (float)dVar15;
  (__return_storage_ptr__->ColorTransform).M[0][2] = (float)dVar13;
  (__return_storage_ptr__->ColorTransform).M[0][3] = (float)dVar14;
  (__return_storage_ptr__->ColorTransform).M[1][0] = (float)dVar3;
  (__return_storage_ptr__->ColorTransform).M[1][1] = (float)dVar4;
  (__return_storage_ptr__->ColorTransform).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->ColorTransform).M[1][3] = (float)dVar2;
  (__return_storage_ptr__->ColorTransform).M[2][0] = (float)dVar7;
  (__return_storage_ptr__->ColorTransform).M[2][1] = (float)dVar8;
  (__return_storage_ptr__->ColorTransform).M[2][2] = (float)dVar5;
  (__return_storage_ptr__->ColorTransform).M[2][3] = (float)dVar6;
  (__return_storage_ptr__->ColorTransform).M[3][0] = (float)dVar11;
  (__return_storage_ptr__->ColorTransform).M[3][1] = (float)dVar12;
  (__return_storage_ptr__->ColorTransform).M[3][2] = (float)dVar9;
  (__return_storage_ptr__->ColorTransform).M[3][3] = (float)dVar10;
  __return_storage_ptr__->SrgbToLinear = (uint)param_1;
  return __return_storage_ptr__;
}

// ShouldCompilePermutation @ 14eabdf30

bool __cdecl
FWmfMediaHardwareVideoDecodingShader::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  uVar1 = *(ushort *)param_1;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel) {
    return true;
  }
  uVar1 = *(ushort *)param_1;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xf4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bIsPC != 0) {
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xc1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].Language != LANGUAGE_OpenGL) {
      return true;
    }
  }
  return false;
}

