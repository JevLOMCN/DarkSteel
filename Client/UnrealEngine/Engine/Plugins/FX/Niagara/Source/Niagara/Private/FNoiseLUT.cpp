// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// InitRHI @ 149473070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall NiagaraStateless::FNoiseLUT::InitRHI(FNoiseLUT *this,FRHICommandListBase *param_1)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = (this->CpuData).ArrayNum * 0xc;
  FByteAddressBuffer::Initialize(&this->GpuData,param_1,L"NiagaraStateless::FNoiseLUT",uVar1,Static)
  ;
  _Dst = FRHICommandListBase::LockBuffer
                   (param_1,(this->GpuData).Buffer.Reference,0,uVar1,RLM_WriteOnly);
  memcpy(_Dst,(this->CpuData).AllocatorInstance.Data,(ulonglong)uVar1);
  FRHICommandListBase::UnlockBuffer(param_1,(this->GpuData).Buffer.Reference);
  return;
}

// ReleaseRHI @ 149473110

void __thiscall NiagaraStateless::FNoiseLUT::ReleaseRHI(FNoiseLUT *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  (this->GpuData).NumBytes = 0;
  this_00 = (this->GpuData).Buffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->GpuData).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->GpuData).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->GpuData).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// FNoiseLUT @ 149475f40

FNoiseLUT * __thiscall
NiagaraStateless::FNoiseLUT::FNoiseLUT(FNoiseLUT *this,uint param_1,uint param_2,float param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FNoiseLUT *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_128;
  float fStack_124;
  float local_108;
  TVector<float>_u_0 local_f8;
  FNiagaraMatrix3x4 local_e8 [4];
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->LUTRows = param_1;
  this->_padding_ = (longlong)&___7FNoiseLUT_NiagaraStateless__6B_;
  piVar1 = &(this->CpuData).ArrayNum;
  this->LUTRowWidth = param_2;
  piVar2 = &(this->CpuData).ArrayMax;
  this->FieldTravelSpeed = param_3;
  uVar14 = 0;
  *piVar2 = 0;
  (this->CpuData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->GpuData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GpuData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GpuData).NumBytes = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,this->LUTRowWidth * this->LUTRows,&(this->CpuData).AllocatorInstance,piVar1,
             piVar2);
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar15 = this->LUTRows;
  if (uVar15 != 0) {
    do {
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar13 = uVar14 * this->LUTRowWidth;
      uVar10 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      fVar20 = (float)uVar14 - (float)uVar15 * fVar7;
      fVar21 = fVar20 * __real_40400000;
      fVar22 = fVar20 * __real_41100000;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FNoiseLUT *)(*pcVar4)();
        return pFVar11;
      }
      pFVar3 = (this->CpuData).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)(int)uVar13 * 0xc) = uVar8;
      *(undefined4 *)(pFVar3 + (longlong)(int)uVar13 * 0xc + 8) = uVar19;
      if (1 < this->LUTRowWidth) {
        uVar15 = 1;
        fStack_124 = (float)((ulonglong)uVar8 >> 0x20);
        local_128 = (float)uVar8;
        do {
          uVar13 = uVar13 + 1;
          local_f8._0_8_ = CONCAT44(fVar21,fVar20);
          local_f8._s_0.Z = fVar22;
          JacobianSimplex_ALU(local_e8,(TVector<float> *)&local_f8._s_0);
          fVar17 = (float)local_e8[0].row2.field0_0x0._0_4_ -
                   (float)local_e8[0].row0.field0_0x0._8_4_;
          local_108 = (float)local_e8[0].row1.field0_0x0._8_4_ -
                      (float)local_e8[0].row2.field0_0x0._4_4_;
          uVar18 = (float)local_e8[0].row0.field0_0x0._4_4_ -
                   (float)local_e8[0].row1.field0_0x0._0_4_;
          fVar16 = local_108 * local_108 + fVar17 * fVar17 + (float)uVar18 * (float)uVar18;
          if (fVar16 != fVar6) {
            if (fVar5 <= fVar16) {
              fVar16 = __real_3f800000 / SQRT(fVar16);
              local_108 = local_108 * fVar16;
              fVar17 = fVar16 * fVar17;
              uVar18 = fVar16 * (float)uVar18;
            }
            else {
              fVar17 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                              0x20);
              local_108 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
          }
          fVar16 = this->FieldTravelSpeed;
          local_128 = local_128 + local_108;
          fStack_124 = fStack_124 + fVar17;
          uVar19 = (float)uVar19 + (float)uVar18;
          uVar10 = 0;
          if ((int)uVar13 < *piVar1) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          fVar20 = fVar20 + fVar16 * local_108;
          fVar21 = fVar21 + fVar16 * fVar17;
          fVar22 = fVar22 + fVar16 * (float)uVar18;
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FNoiseLUT *)(*pcVar4)();
            return pFVar11;
          }
          lVar12 = (longlong)(int)uVar13;
          uVar15 = uVar15 + 1;
          pFVar3 = (this->CpuData).AllocatorInstance.Data;
          *(float *)(pFVar3 + lVar12 * 0xc) = local_128;
          *(float *)(pFVar3 + lVar12 * 0xc + 4) = fStack_124;
          *(undefined4 *)(pFVar3 + lVar12 * 0xc + 8) = uVar19;
        } while (uVar15 < this->LUTRowWidth);
      }
      uVar15 = this->LUTRows;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
  }
  return this;
}

// GetGlobalLUT @ 14947add0

FNoiseLUT * __cdecl NiagaraStateless::FNoiseLUT::GetGlobalLUT(void)

{
  return (FNoiseLUT *)&GGlobalLUT;
}

