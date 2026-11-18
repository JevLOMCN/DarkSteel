// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusDebugDrawDataProviderProxy @ 14e1518a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusDebugDrawDataProviderProxy * __thiscall
FOptimusDebugDrawDataProviderProxy::FOptimusDebugDrawDataProviderProxy
          (FOptimusDebugDrawDataProviderProxy *this,UPrimitiveComponent *param_1,
          FOptimusDebugDrawParameters *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  FSceneInterface *pFVar14;
  double *pdVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_148 [32];
  TIntRect<int>_u_0 local_128 [2];
  double local_108;
  double local_f8 [16];
  ulonglong local_78;
  
  local_128[0]._8_8_ = _UNK_152e271e8;
  local_128[0]._0_8_ = ___xmm_00000438000007800000000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_148;
  this->_padding_ = (longlong)&___7FOptimusDebugDrawDataProviderProxy__6B_;
  ShaderPrint::FShaderPrintSetup::FShaderPrintSetup
            (&this->Setup,(TIntRect<int> *)&local_128[0]._s_0);
  pFVar14 = (FSceneInterface *)0x0;
  uVar16 = 0;
  (this->CachedParameters).Common.field_0x8 = 1;
  *(undefined8 *)&(this->CachedParameters).Common = 0;
  (this->CachedParameters).ShaderPrint_StateBuffer = (FRDGBufferSRV *)0x0;
  (this->CachedParameters).ShaderPrint_RWEntryBuffer = (FRDGBufferUAV *)0x0;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pFVar14 = UActorComponent::GetScene((UActorComponent *)param_1);
  }
  this->Scene = pFVar14;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    pdVar15 = local_f8;
    local_f8[0] = 0.0;
    local_f8[1] = 0.0;
    local_f8[2] = 0.0;
    local_f8[3] = 0.0;
    local_f8[4] = 0.0;
    local_f8[5] = 0.0;
    local_f8[6] = 0.0;
    local_f8[7] = 0.0;
    local_f8[8] = 0.0;
    local_f8[9] = 0.0;
    local_f8[10] = 0.0;
    local_f8[0xb] = 0.0;
    local_f8[0xc] = 0.0;
    local_f8[0xd] = 0.0;
    local_f8[0xe] = 0.0;
    local_f8[0xf] = 0.0;
  }
  else {
    pdVar15 = (double *)(**(code **)(*(longlong *)param_1 + 0x808))(param_1,local_f8);
  }
  auVar1 = *(undefined1 (*) [16])(pdVar15 + 0xc);
  auVar2 = *(undefined1 (*) [16])(pdVar15 + 0xe);
  dVar3 = pdVar15[1];
  dVar4 = pdVar15[6];
  dVar5 = pdVar15[7];
  dVar6 = pdVar15[4];
  dVar7 = pdVar15[5];
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_108 = (double)CONCAT44(auVar2._4_4_ ^ uVar19,auVar2._0_4_ ^ uVar18);
  dVar8 = pdVar15[10];
  dVar9 = pdVar15[0xb];
  uVar20 = auVar1._0_4_ ^ uVar18;
  uVar21 = auVar1._4_4_ ^ uVar19;
  dVar10 = pdVar15[8];
  dVar11 = pdVar15[9];
  uVar18 = auVar1._8_4_ ^ uVar18;
  uVar19 = auVar1._12_4_ ^ uVar19;
  dVar12 = pdVar15[2];
  dVar13 = pdVar15[3];
  (this->LocalToWorld).M[0][0] = (float)*pdVar15;
  (this->LocalToWorld).M[0][1] = (float)dVar3;
  (this->LocalToWorld).M[0][2] = (float)dVar12;
  (this->LocalToWorld).M[0][3] = (float)dVar13;
  (this->LocalToWorld).M[1][0] = (float)dVar6;
  (this->LocalToWorld).M[1][1] = (float)dVar7;
  (this->LocalToWorld).M[1][2] = (float)dVar4;
  (this->LocalToWorld).M[1][3] = (float)dVar5;
  auVar17._0_8_ = (double)CONCAT44(uVar21,uVar20);
  auVar17._8_4_ = uVar18;
  auVar17._12_4_ = uVar19;
  (this->LocalToWorld).M[2][0] = (float)dVar10;
  (this->LocalToWorld).M[2][1] = (float)dVar11;
  (this->LocalToWorld).M[2][2] = (float)dVar8;
  (this->LocalToWorld).M[2][3] = (float)dVar9;
  (this->LocalToWorld).M[3][0] = (float)(auVar17._0_8_ + auVar1._0_8_);
  (this->LocalToWorld).M[3][1] = (float)(auVar17._8_8_ + auVar1._8_8_);
  (this->LocalToWorld).M[3][2] = (float)(local_108 + auVar2._0_8_);
  (this->LocalToWorld).M[3][3] = (float)auVar2._8_8_;
  local_128[0]._4_4_ = param_2->FontSize;
  local_128[0]._0_4_ = param_2->FontSize;
  (this->Setup).FontSize.field0_0x0 = (TIntPoint<int>_u_0)local_128[0]._0_8_;
  if ((this->Setup).bEnabled == false) {
    (this->Setup).MaxLineCount = 0;
    (this->Setup).MaxTriangleCount = 0;
  }
  else {
    (this->Setup).MaxLineCount = param_2->MaxLineCount;
    (this->Setup).MaxTriangleCount = param_2->MaxTriangleCount;
    uVar16 = param_2->MaxCharacterCount;
  }
  *(uint *)&(this->Setup).PreViewTranslation.field0_0x0 = uVar20;
  *(uint *)((longlong)&(this->Setup).PreViewTranslation.field0_0x0 + 4) = uVar21;
  *(uint *)((longlong)&(this->Setup).PreViewTranslation.field0_0x0 + 8) = uVar18;
  *(uint *)((longlong)&(this->Setup).PreViewTranslation.field0_0x0 + 0xc) = uVar19;
  (this->Setup).MaxCharacterCount = uVar16;
  (this->Setup).PreViewTranslation.field0_0x0._s_0.Z = local_108;
  ShaderPrint::GetParameters(&this->Setup,&this->ConfigParameters);
  if (param_2->bForceEnable != false) {
    ShaderPrint::SetEnabled(true);
  }
  return this;
}

// AllocateResources @ 14e17bef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusDebugDrawDataProviderProxy::AllocateResources
          (FOptimusDebugDrawDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  FShaderPrintData local_f8;
  FFrozenShaderPrintData local_78;
  
  ShaderPrint::CreateShaderPrintData(&local_f8,param_1,&this->Setup);
  ShaderPrint::SetParameters(param_1,&local_f8,&this->CachedParameters);
  bVar3 = ShaderPrint::IsEnabled(&local_f8);
  if (bVar3) {
    ShaderPrint::FreezeShaderPrintData(&local_78,param_1,&local_f8);
    ShaderPrint::SubmitShaderPrintData(&local_78,this->Scene);
    if (local_78.ShaderPrintStateBuffer.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_78.ShaderPrintStateBuffer.Reference)->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_78.ShaderPrintStateBuffer.Reference)->_padding_)
                  (local_78.ShaderPrintStateBuffer.Reference,1);
      }
    }
    if (local_78.ShaderPrintEntryBuffer.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_78.ShaderPrintEntryBuffer.Reference)->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_78.ShaderPrintEntryBuffer.Reference)->_padding_)
                  (local_78.ShaderPrintEntryBuffer.Reference,1);
      }
    }
  }
  if (local_f8.UniformBuffer != (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)local_f8.UniformBuffer);
  }
  return;
}

// GatherDispatchData @ 14e1b3ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusDebugDrawDataProviderProxy::GatherDispatchData
          (FOptimusDebugDrawDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  TVector2<float>_u_0 TVar6;
  bool bVar7;
  TVector2<float>_u_0 *pTVar8;
  int iVar9;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar4 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = 0;
  if (0 < iVar2) {
    pTVar8 = (TVector2<float>_u_0 *)(puVar4 + (longlong)iVar1 + 0x48);
    do {
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar6 = *(TVector2<float>_u_0 *)((this->LocalToWorld).M[0] + 2);
      iVar9 = iVar9 + 1;
      pTVar8[-9] = *(TVector2<float>_u_0 *)(this->LocalToWorld).M[0];
      pTVar8[-8] = TVar6;
      TVar6 = *(TVector2<float>_u_0 *)((this->LocalToWorld).M[1] + 2);
      pTVar8[-7] = *(TVector2<float>_u_0 *)((this->LocalToWorld).M + 1);
      pTVar8[-6] = TVar6;
      TVar6 = *(TVector2<float>_u_0 *)((this->LocalToWorld).M[2] + 2);
      pTVar8[-5] = *(TVector2<float>_u_0 *)((this->LocalToWorld).M + 2);
      pTVar8[-4] = TVar6;
      TVar6 = *(TVector2<float>_u_0 *)((this->LocalToWorld).M[3] + 2);
      pTVar8[-3] = *(TVector2<float>_u_0 *)((this->LocalToWorld).M + 3);
      pTVar8[-2] = TVar6;
      pTVar8[-1] = *(TVector2<float>_u_0 *)&(this->ConfigParameters).Resolution.field0_0x0;
      *pTVar8 = (this->ConfigParameters).FontSize.field0_0x0;
      pTVar8[1] = (this->ConfigParameters).FontSpacing.field0_0x0;
      pTVar8[2]._s_0.X = (float)(this->ConfigParameters).MaxCharacterCount;
      *(uint *)((longlong)pTVar8 + 0x14) = (this->ConfigParameters).MaxSymbolCount;
      pTVar8[3]._s_0.X = (float)(this->ConfigParameters).MaxStateCount;
      *(uint *)((longlong)pTVar8 + 0x1c) = (this->ConfigParameters).MaxLineCount;
      pTVar8[4]._s_0.X = (float)(this->ConfigParameters).MaxTriangleCount;
      pTVar8[5] = (TVector2<float>_u_0)(this->CachedParameters).ShaderPrint_StateBuffer;
      pTVar8[6] = (TVector2<float>_u_0)(this->CachedParameters).ShaderPrint_RWEntryBuffer;
      pTVar8 = (TVector2<float>_u_0 *)((longlong)pTVar8 + (longlong)iVar3);
    } while (iVar9 < iVar2);
  }
  return;
}

// IsValid @ 14e1f05e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOptimusDebugDrawDataProviderProxy::IsValid
          (FOptimusDebugDrawDataProviderProxy *this,FValidationData *param_1)

{
  bool bVar1;
  
  if ((param_1->ParameterStructSize == 0x80) && (this->Scene != (FSceneInterface *)0x0)) {
    bVar1 = ShaderPrint::IsSupported(GMaxRHIShaderPlatform);
    return bVar1;
  }
  return false;
}

