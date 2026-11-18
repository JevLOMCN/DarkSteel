// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 1456521b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FUniformSphereSamplesBuffer::InitRHI(FUniformSphereSamplesBuffer *this,FRHICommandListBase *param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].GroupSize = 8;
  local_res8[0].GroupSizeInv = 0.125;
  FReadBuffer::InitializeWithData<_FUniformSphereSamplesBuffer::InitRHI_::__l2::<lambda_1>_>
            (&this->UniformSphereSamplesBuffer,param_1,L"UniformSphereSamplesBuffer",0x10,0x40,
             PF_A32B32G32R32F,Static,local_res8);
  return;
}

// ReleaseRHI @ 145652210

void __thiscall FUniformSphereSamplesBuffer::ReleaseRHI(FUniformSphereSamplesBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  (this->UniformSphereSamplesBuffer).NumBytes = 0;
  this_00 = (this->UniformSphereSamplesBuffer).Buffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->UniformSphereSamplesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UniformSphereSamplesBuffer).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->UniformSphereSamplesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// operator() @ 145669700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FUniformSphereSamplesBuffer::InitRHI'::__l2::<lambda_1>::operator()
          (void *this,FRHIBufferInitializer *param_1)

{
  void *pvVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float _X;
  float fVar14;
  float fVar15;
  
  pvVar1 = param_1->WritableData;
  iVar11 = (int)(param_1->WritableSize >> 4);
  if ((iVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar4 = __real_40c90fdb;
  fVar3 = __real_3f800000;
  uVar8 = *(uint *)this;
  uVar12 = 0;
  uVar7 = 0xde4dc0de;
  if (uVar8 != 0) {
    do {
      uVar10 = 0;
      if (uVar8 != 0) {
        do {
          fVar13 = *(float *)((longlong)this + 4);
          uVar6 = uVar7 * 0xbb38435 + 0x3619636b;
          uVar8 = uVar8 * uVar10 + uVar12;
          uVar7 = uVar6 * 0xbb38435 + 0x3619636b;
          fVar14 = fVar3 - (((float)(uVar6 >> 9 | 0x3f800000) - fVar3) + (float)uVar12) *
                           (fVar13 + fVar13);
          fVar15 = SQRT(fVar3 - fVar14 * fVar14);
          _X = (((float)(uVar7 >> 9 | 0x3f800000) - fVar3) + (float)uVar10) * fVar13 * fVar4;
          fVar13 = cosf(_X);
          uVar6 = (uint)((int)uVar8 < iVar11) & ~uVar8 >> 0x1f;
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pfVar9 = (float *)((longlong)(int)uVar8 * 0x10 + (longlong)pvVar1);
          *pfVar9 = fVar13 * fVar15;
          fVar13 = sinf(_X);
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pfVar9[1] = fVar13 * fVar15;
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pfVar9[2] = fVar14;
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = uVar10 + 1;
          pfVar9[3] = 0.0;
          uVar8 = *(uint *)this;
        } while (uVar10 < uVar8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar8);
  }
  return;
}

