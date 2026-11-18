// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// UpdateDataImpl<FNDIArrayImplHelper<unsigned_char>_> @ 1490ac840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<unsigned_char>::
UpdateDataImpl<FNDIArrayImplHelper<unsigned_char>_>
          (FNDIArrayInstanceData_RenderThread<unsigned_char> *this,FRHICommandList *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,4,PF_R8_UINT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1);
  }
  *(undefined1 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 4) = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<int>_> @ 1490ac8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<int>::UpdateDataImpl<FNDIArrayImplHelper<int>_>
          (FNDIArrayInstanceData_RenderThread<int> *this,FRHICommandList *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,4,PF_R32_SINT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 2);
  }
  *(undefined4 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 4) = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<float>_> @ 1490ac9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<float>::UpdateDataImpl<FNDIArrayImplHelper<float>_>
          (FNDIArrayInstanceData_RenderThread<float> *this,FRHICommandList *param_1,
          TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,4,PF_R32_FLOAT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 2);
  }
  *(undefined4 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 4) = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TMatrix<float>_>_> @ 1490aca70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>::
UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TMatrix<float>_>_>
          (FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *this,
          FRHICommandList *param_1,TArrayView<UE::Math::TMatrix<float>_const_,int> *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EPixelFormat EVar11;
  void *_Dst;
  longlong lVar12;
  
  iVar2 = param_2->ArrayNum;
  EVar11 = PF_R32_FLOAT;
  if (*(int *)&this->field_0x2c == -1) {
    EVar11 = PF_A32B32G32R32F;
  }
  iVar3 = iVar2;
  if (iVar2 < *(int *)&this->field_0x24) {
    iVar3 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar2,iVar3,0x40,EVar11);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar2) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar2 << 6);
  }
  uVar10 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar9 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar4 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  lVar12 = (longlong)*(int *)&this->field_0x28 * 0x40;
  *(undefined8 *)(lVar12 + (longlong)_Dst) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((float *)(lVar12 + (longlong)_Dst) + 2) = uVar4;
  pfVar1 = (float *)(lVar12 + 0x10 + (longlong)_Dst);
  *(undefined8 *)pfVar1 = uVar5;
  *(undefined8 *)(pfVar1 + 2) = uVar6;
  pfVar1 = (float *)(lVar12 + 0x20 + (longlong)_Dst);
  *(undefined8 *)pfVar1 = uVar7;
  *(undefined8 *)(pfVar1 + 2) = uVar8;
  pfVar1 = (float *)(lVar12 + 0x30 + (longlong)_Dst);
  *(undefined8 *)pfVar1 = uVar9;
  *(undefined8 *)(pfVar1 + 2) = uVar10;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TQuat<float>_>_> @ 1490acb40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>::
UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TQuat<float>_>_>
          (FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *this,
          FRHICommandList *param_1,TArrayView<UE::Math::TQuat<float>_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  EPixelFormat EVar3;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  EVar3 = PF_R32_FLOAT;
  if (*(int *)&this->field_0x2c == -1) {
    EVar3 = PF_A32B32G32R32F;
  }
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,0x10,EVar3);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 4);
  }
  *(TQuat<float> *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 0x10) =
       UE::Math::TQuat<float>::Identity;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector2<float>_>_> @ 1490acc10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>::
UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector2<float>_>_>
          (FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *this,
          FRHICommandList *param_1,TArrayView<UE::Math::TVector2<float>_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  EPixelFormat EVar3;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  EVar3 = PF_R32_FLOAT;
  if (*(int *)&this->field_0x2c == -1) {
    EVar3 = PF_G32R32F;
  }
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,8,EVar3);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 3);
  }
  ((TVector2<float>_u_0 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 8))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector4<float>_>_> @ 1490acce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>::
UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector4<float>_>_>
          (FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *this,
          FRHICommandList *param_1,TArrayView<UE::Math::TVector4<float>_const_,int> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  EPixelFormat EVar4;
  void *_Dst;
  
  iVar2 = param_2->ArrayNum;
  EVar4 = PF_R32_FLOAT;
  if (*(int *)&this->field_0x2c == -1) {
    EVar4 = PF_A32B32G32R32F;
  }
  iVar3 = iVar2;
  if (iVar2 < *(int *)&this->field_0x24) {
    iVar3 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar2,iVar3,0x10,EVar4);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar2) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar2 << 4);
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector<float>_>_> @ 1490acdb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>::
UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector<float>_>_>
          (FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *this,
          FRHICommandList *param_1,TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,0xc,PF_R32_FLOAT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 * 0xc);
  }
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  iVar1 = *(int *)&this->field_0x28;
  *(undefined8 *)((longlong)_Dst + (longlong)iVar1 * 0xc) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(undefined4 *)((longlong)_Dst + (longlong)iVar1 * 0xc + 8) = uVar3;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<FLinearColor>_> @ 1490ace80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<FLinearColor>::UpdateDataImpl<FNDIArrayImplHelper<FLinearColor>_>
          (FNDIArrayInstanceData_RenderThread<FLinearColor> *this,FRHICommandList *param_1,
          TArrayView<FLinearColor_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  EPixelFormat EVar3;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  EVar3 = PF_R32_FLOAT;
  if (*(int *)&this->field_0x2c == -1) {
    EVar3 = PF_A32B32G32R32F;
  }
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,0x10,EVar3);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 4);
  }
  ((FLinearColor_u_0 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<FNiagaraID>_> @ 1490acf50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<FNiagaraID>::UpdateDataImpl<FNDIArrayImplHelper<FNiagaraID>_>
          (FNDIArrayInstanceData_RenderThread<FNiagaraID> *this,FRHICommandList *param_1,
          TArrayView<FNiagaraID_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,8,PF_R32_SINT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 << 3);
  }
  *(undefined8 *)((longlong)_Dst + (longlong)*(int *)&this->field_0x28 * 8) = 0xffffffffffffffff;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<FNiagaraPosition>_> @ 1490ad000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<FNiagaraPosition>::
UpdateDataImpl<FNDIArrayImplHelper<FNiagaraPosition>_>
          (FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *this,FRHICommandList *param_1,
          TArrayView<FNiagaraPosition_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = iVar1;
  if (iVar1 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar1,iVar2,0xc,PF_R32_FLOAT);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                    *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar1) {
    memcpy(_Dst,param_2->DataPtr,(longlong)iVar1 * 0xc);
  }
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  iVar1 = *(int *)&this->field_0x28;
  *(undefined8 *)((longlong)_Dst + (longlong)iVar1 * 0xc) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(undefined4 *)((longlong)_Dst + (longlong)iVar1 * 0xc + 8) = uVar3;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

// UpdateDataImpl<FNDIArrayImplHelper<bool>_> @ 1490ad0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThread<bool>::UpdateDataImpl<FNDIArrayImplHelper<bool>_>
          (FNDIArrayInstanceData_RenderThread<bool> *this,FRHICommandList *param_1,
          TArrayView<bool_const_,int> *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  bool *pbVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = param_2->ArrayNum;
  iVar2 = iVar5;
  if (iVar5 < *(int *)&this->field_0x24) {
    iVar2 = *(int *)&this->field_0x24;
  }
  FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
            ((FNDIArrayInstanceData_RenderThreadBase *)this,param_1,iVar5,iVar2,4,PF_R8_UINT);
  pcVar3 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8,0,
                      *(uint *)&this->field_0x20,RLM_WriteOnly);
  if (0 < iVar5) {
    pbVar4 = param_2->DataPtr;
    pcVar6 = pcVar3;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *pcVar6 = -(bVar1 != false);
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar6 + 1;
    } while (iVar5 != 0);
  }
  pcVar3[(longlong)*(int *)&this->field_0x28 * 4] = '\0';
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)&this->field_0x8)
  ;
  return;
}

