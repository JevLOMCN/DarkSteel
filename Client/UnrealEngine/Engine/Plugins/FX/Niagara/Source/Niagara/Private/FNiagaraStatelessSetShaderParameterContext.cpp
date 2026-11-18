// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// ConvertRangeToScaleBias<UE::Math::TVector<float>_> @ 14941a200

void __thiscall
FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
          (FNiagaraStatelessSetShaderParameterContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c [5];
  
  if (param_1->ParameterOffset == -1) {
    uVar8 = *(undefined8 *)&(param_1->Min).field0_0x0;
    fVar6 = (param_1->Min).field0_0x0._s_0.Z;
  }
  else {
    iVar1 = param_1->ParameterOffset * 4;
    lVar7 = (longlong)iVar1;
    if ((iVar1 < 0) || ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < lVar7 + 0xcU))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x2d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = (this->RendererParameterData).DataPtr;
    uVar8 = *(undefined8 *)(puVar2 + lVar7);
    fVar6 = *(float *)(puVar2 + lVar7 + 8);
  }
  *(undefined8 *)&param_3->field0_0x0 = uVar8;
  (param_3->field0_0x0)._s_0.Z = fVar6;
  if (param_1->ParameterOffset == -1) {
    pfVar5 = &local_28;
    local_28 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    fStack_24 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
    local_20 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
  }
  else {
    local_1c[0] = 0.0;
    local_1c[1] = 0.0;
    pfVar5 = local_1c;
    local_1c[2] = 0.0;
  }
  fVar6 = pfVar5[2];
  *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)pfVar5;
  (param_2->field0_0x0)._s_0.Z = fVar6;
  return;
}

// GetRendererParameterValue<float> @ 14941f5d0

float __thiscall
FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
          (FNiagaraStatelessSetShaderParameterContext *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  if (param_1 == -1) {
    return *param_2;
  }
  iVar3 = param_1 * 4;
  if ((iVar3 < 0) ||
     ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < (longlong)iVar3 + 4U)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->RendererParameterData).DataPtr + iVar3);
}

// FNiagaraStatelessSetShaderParameterContext @ 149475e20

FNiagaraStatelessSetShaderParameterContext * __thiscall
FNiagaraStatelessSetShaderParameterContext::FNiagaraStatelessSetShaderParameterContext
          (FNiagaraStatelessSetShaderParameterContext *this,
          FNiagaraStatelessSpaceTransforms *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,FShaderParametersMetadata *param_4,
          uchar *param_5)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  this->ShaderParametersBase = param_5;
  (this->RendererParameterData).DataPtr = puVar1;
  (this->RendererParameterData).ArrayNum = iVar2;
  *(undefined4 *)&(this->RendererParameterData).field_0xc = uVar3;
  this->SpaceTransforms = param_1;
  puVar1 = param_3->DataPtr;
  iVar2 = param_3->ArrayNum;
  uVar3 = *(undefined4 *)&param_3->field_0xc;
  this->ShaderParametersMetadata = param_4;
  this->BuiltDataOffset = 0;
  (this->BuiltData).DataPtr = puVar1;
  (this->BuiltData).ArrayNum = iVar2;
  *(undefined4 *)&(this->BuiltData).field_0xc = uVar3;
  this->ParameterOffset = 0;
  return this;
}

// TransformPositionRangeToScaleBias @ 14947fc30

void __thiscall
FNiagaraStatelessSetShaderParameterContext::TransformPositionRangeToScaleBias
          (FNiagaraStatelessSetShaderParameterContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,ENiagaraCoordinateSpace param_2
          ,TVector<float> *param_3,TVector<float> *param_4)

{
  int iVar1;
  FNiagaraStatelessSpaceTransforms *this_00;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  if (param_1->ParameterOffset == -1) {
    local_68._s_0.X = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    local_68._s_0.Y = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
    local_68._s_0.Z = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
    FNiagaraStatelessSpaceTransforms::TransformVector
              (this->SpaceTransforms,(TVector<float> *)&local_58._s_0,param_2,Simulation,
               (TVector<float> *)&local_68._s_0);
    *(undefined8 *)&param_3->field0_0x0 = local_58._0_8_;
    (param_3->field0_0x0)._s_0.Z = local_58._s_0.Z;
    local_48._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    local_48._0_8_ = *(undefined8 *)&(param_1->Min).field0_0x0;
    FNiagaraStatelessSpaceTransforms::TransformPosition
              (this->SpaceTransforms,(TVector<float> *)&local_38._s_0,param_2,Simulation,
               (TVector<float> *)&local_48._s_0);
  }
  else {
    *(undefined8 *)&param_3->field0_0x0 = 0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    this_00 = this->SpaceTransforms;
    if (param_1->ParameterOffset == -1) {
      local_28._0_8_ = *(undefined8 *)&(param_1->Min).field0_0x0;
      local_28._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    }
    else {
      iVar1 = param_1->ParameterOffset * 4;
      lVar5 = (longlong)iVar1;
      if ((iVar1 < 0) ||
         ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < lVar5 + 0xcU)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar2 = (this->RendererParameterData).DataPtr;
      local_28._0_8_ = *(undefined8 *)(puVar2 + lVar5);
      local_28._s_0.Z = (float)*(undefined4 *)(puVar2 + lVar5 + 8);
    }
    FNiagaraStatelessSpaceTransforms::TransformPosition
              (this_00,(TVector<float> *)&local_18._s_0,param_2,Simulation,
               (TVector<float> *)&local_28._s_0);
    local_38._0_8_ = local_18._0_8_;
    local_38._s_0.Z = local_18._s_0.Z;
  }
  *(undefined8 *)&param_4->field0_0x0 = local_38._0_8_;
  (param_4->field0_0x0)._s_0.Z = local_38._s_0.Z;
  return;
}

// TransformPositionRangeToValue @ 14947fdd0

TVector<float> * __thiscall
FNiagaraStatelessSetShaderParameterContext::TransformPositionRangeToValue
          (FNiagaraStatelessSetShaderParameterContext *this,TVector<float> *__return_storage_ptr__,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,ENiagaraCoordinateSpace param_2
          )

{
  int iVar1;
  FNiagaraStatelessSpaceTransforms *this_00;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float> *pTVar5;
  longlong lVar6;
  TVector<float>_u_0 local_18;
  
  this_00 = this->SpaceTransforms;
  if (param_1->ParameterOffset == -1) {
    local_18._0_8_ = *(undefined8 *)&(param_1->Min).field0_0x0;
    local_18._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  }
  else {
    iVar1 = param_1->ParameterOffset * 4;
    lVar6 = (longlong)iVar1;
    if ((iVar1 < 0) || ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < lVar6 + 0xcU))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x2d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TVector<float> *)(*pcVar3)();
        return pTVar5;
      }
    }
    puVar2 = (this->RendererParameterData).DataPtr;
    local_18._0_8_ = *(undefined8 *)(puVar2 + lVar6);
    local_18._s_0.Z = (float)*(undefined4 *)(puVar2 + lVar6 + 8);
  }
  FNiagaraStatelessSpaceTransforms::TransformPosition
            (this_00,__return_storage_ptr__,param_2,Simulation,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// TransformRotationRangeToScaleBias @ 14947feb0

void __thiscall
FNiagaraStatelessSetShaderParameterContext::TransformRotationRangeToScaleBias
          (FNiagaraStatelessSetShaderParameterContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,ENiagaraCoordinateSpace param_2
          ,TVector<float> *param_3,TVector<float> *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uchar *puVar6;
  FNiagaraStatelessSpaceTransforms *this_00;
  code *pcVar7;
  bool bVar8;
  TQuat<float> *pTVar9;
  TVector<float> *pTVar10;
  float fVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TVector<float> local_48;
  TQuat<float> local_38;
  TQuat<float> local_28;
  TQuat<float> local_18;
  
  if (param_1->ParameterOffset == -1) {
    fVar11 = (param_1->Max).field0_0x0._s_0.Y;
    fVar2 = (param_1->Max).field0_0x0._s_0.Z;
    fVar3 = (param_1->Min).field0_0x0._s_0.Y;
    fVar4 = (param_1->Min).field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = fVar11 - fVar3;
    (param_3->field0_0x0)._s_0.Z = fVar2 - fVar4;
    *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)&(param_1->Min).field0_0x0;
    (param_4->field0_0x0)._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  }
  else {
    *(undefined8 *)&param_3->field0_0x0 = 0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    if (param_1->ParameterOffset == -1) {
      uVar5 = *(undefined8 *)&(param_1->Min).field0_0x0;
      uVar13 = (undefined4)uVar5;
      uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
      fVar11 = (param_1->Min).field0_0x0._s_0.Z;
    }
    else {
      iVar1 = param_1->ParameterOffset * 4;
      lVar12 = (longlong)iVar1;
      if ((iVar1 < 0) ||
         ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < lVar12 + 0xcU)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      puVar6 = (this->RendererParameterData).DataPtr;
      uVar5 = *(undefined8 *)(puVar6 + lVar12);
      uVar13 = (undefined4)uVar5;
      uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
      fVar11 = *(float *)(puVar6 + lVar12 + 8);
    }
    *(ulonglong *)&param_4->field0_0x0 = CONCAT44(uVar14,uVar13);
    (param_4->field0_0x0)._s_0.Z = fVar11;
  }
  this_00 = this->SpaceTransforms;
  pTVar9 = UE::Math::TQuat<float>::MakeFromEuler(&local_18,param_4);
  local_38.X = pTVar9->X;
  local_38.Y = pTVar9->Y;
  local_38.Z = pTVar9->Z;
  local_38.W = pTVar9->W;
  FNiagaraStatelessSpaceTransforms::TransformRotation
            (this_00,&local_28,param_2,Simulation,&local_38);
  pTVar10 = UE::Math::TQuat<float>::Euler(&local_28,&local_48);
  *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)&pTVar10->field0_0x0;
  (param_4->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
  return;
}

// TransformVectorRangeToScaleBias @ 149480000

void __thiscall
FNiagaraStatelessSetShaderParameterContext::TransformVectorRangeToScaleBias
          (FNiagaraStatelessSetShaderParameterContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,ENiagaraCoordinateSpace param_2
          ,TVector<float> *param_3,TVector<float> *param_4)

{
  int iVar1;
  FNiagaraStatelessSpaceTransforms *this_00;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  if (param_1->ParameterOffset == -1) {
    local_68._s_0.X = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    local_68._s_0.Y = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
    local_68._s_0.Z = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
    FNiagaraStatelessSpaceTransforms::TransformVector
              (this->SpaceTransforms,(TVector<float> *)&local_58._s_0,param_2,Simulation,
               (TVector<float> *)&local_68._s_0);
    *(undefined8 *)&param_3->field0_0x0 = local_58._0_8_;
    (param_3->field0_0x0)._s_0.Z = local_58._s_0.Z;
    local_48._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    local_48._0_8_ = *(undefined8 *)&(param_1->Min).field0_0x0;
    FNiagaraStatelessSpaceTransforms::TransformVector
              (this->SpaceTransforms,(TVector<float> *)&local_38._s_0,param_2,Simulation,
               (TVector<float> *)&local_48._s_0);
  }
  else {
    *(undefined8 *)&param_3->field0_0x0 = 0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    this_00 = this->SpaceTransforms;
    if (param_1->ParameterOffset == -1) {
      local_28._0_8_ = *(undefined8 *)&(param_1->Min).field0_0x0;
      local_28._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    }
    else {
      iVar1 = param_1->ParameterOffset * 4;
      lVar5 = (longlong)iVar1;
      if ((iVar1 < 0) ||
         ((ulonglong)(longlong)(this->RendererParameterData).ArrayNum < lVar5 + 0xcU)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar2 = (this->RendererParameterData).DataPtr;
      local_28._0_8_ = *(undefined8 *)(puVar2 + lVar5);
      local_28._s_0.Z = (float)*(undefined4 *)(puVar2 + lVar5 + 8);
    }
    FNiagaraStatelessSpaceTransforms::TransformVector
              (this_00,(TVector<float> *)&local_18._s_0,param_2,Simulation,
               (TVector<float> *)&local_28._s_0);
    local_38._0_8_ = local_18._0_8_;
    local_38._s_0.Z = local_18._s_0.Z;
  }
  *(undefined8 *)&param_4->field0_0x0 = local_38._0_8_;
  (param_4->field0_0x0)._s_0.Z = local_38._s_0.Z;
  return;
}

// ValidateIncludeStructType @ 149480c30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType
          (FNiagaraStatelessSetShaderParameterContext *this,uint param_1,
          FShaderParametersMetadata *param_2)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  longlong lVar3;
  FRHIUniformBufferLayout *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar2 = this->ShaderParametersMetadata;
  iVar1 = (pFVar2->Members).ArrayNum;
  pFVar7 = (pFVar2->Members).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((pFVar2->Members).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
    if (*(uint *)(pFVar7 + 0x14) == param_1) break;
    pFVar7 = pFVar7 + 0x30;
  }
  if ((pFVar7[0x18] == (FScriptContainerElement)0x15) && (*(longlong *)(pFVar7 + 0x28) != 0)) {
    if (((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(pFVar7 + 0x28);
    pFVar4 = (param_2->Layout).Reference;
    if ((*(longlong *)(lVar3 + 0x48) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x48);
    if ((((*(uint *)(lVar3 + 0x8c) == pFVar4->ConstantBufferSize) &&
         (*(uchar *)(lVar3 + 0x92) == pFVar4->StaticSlot)) &&
        (*(EUniformBufferBindingFlags *)(lVar3 + 0x93) == pFVar4->BindingFlags)) &&
       ((*(int *)(lVar3 + 0x30) == (pFVar4->Resources).ArrayNum &&
        (bVar6 = CompareItems<FRHIUniformBufferResource,int>
                           (*(FRHIUniformBufferResource **)(lVar3 + 0x28),
                            (FRHIUniformBufferResource *)(pFVar4->Resources).AllocatorInstance.Data,
                            *(int *)(lVar3 + 0x30)), bVar6)))) {
      return;
    }
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  return;
}

