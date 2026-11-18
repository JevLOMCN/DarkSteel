// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 52

// StaticClass @ 148e406f0

UClass * __cdecl UNiagaraDataInterfaceDataChannelRead::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton;
}

// ScaleSpawnCount<int> @ 148e4f070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<int>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  FNiagaraEmitterID FVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  code *pcVar6;
  int iVar7;
  float fVar8;
  bool bVar9;
  float *pfVar10;
  TRefCountPtr<FNiagaraDataBuffer> TVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  longlong lVar18;
  FNiagaraDataBuffer *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res8 [2];
  FNiagaraEmitterInstance *local_res10;
  longlong local_res20;
  int local_158 [2];
  float *local_150;
  float *local_148;
  int local_140 [2];
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  int local_f8 [2];
  float *local_f0;
  float *local_e8;
  int local_e0 [2];
  float *local_d8;
  float *local_d0;
  int local_c8 [2];
  FNiagaraDataSetReaderInt32<int> local_c0;
  FNiagaraEmitterInstance **local_b0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_a8 [7];
  
  local_res8[0] = 0;
  if ((param_1->NumInstances != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetNumInstances() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7d5,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(local_a8,param_1);
  local_140[0] = 0;
  local_150 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  local_158[0] = 0;
  local_150 = local_150 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
  local_148 = local_150;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_158);
  local_128[0] = 0;
  iVar14 = local_158[0] * param_1->PerInstanceFnInstanceIdx;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_110[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = local_120;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_e0[0] = 0;
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = local_108;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_c8[0] = 0;
  local_f0 = local_f0 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e8 = local_f0;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  local_d8 = local_d8 + local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_a8[0].Ptr)->Owner;
  local_d0 = local_d8;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7e4,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar2.ID = (int)pfVar10[iVar14];
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res10 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar2);
  this_02 = ((local_a8[0].Ptr)->DataChannelData).Object;
  if (this_02 == (FNiagaraDataChannelData *)0x0) {
    pFVar19 = (FNiagaraDataBuffer *)0x0;
  }
  else {
    TVar11 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_res20,0));
    pFVar19 = (FNiagaraDataBuffer *)(TVar11.Reference)->_padding_;
    if (local_res20 != 0) {
      if ((*(int *)(local_res20 + 8) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (pFVar19 != (FNiagaraDataBuffer *)0x0)) {
    uVar3 = pFVar19->NumInstances;
    if ((uVar3 != 0) &&
       (((local_res10 != (FNiagaraEmitterInstance *)0x0 && (local_res10->ExecutionState == Active))
        && (fVar4 = *local_150, local_150 = local_150 + local_140[0], fVar4 != 0.0)))) {
      fVar5 = *local_138;
      local_138 = local_138 + local_128[0];
      fVar4 = *local_120;
      local_120 = local_120 + local_110[0];
      fVar1 = *local_108;
      local_108 = local_108 + local_f8[0];
      fVar22 = *local_f0;
      local_f0 = local_f0 + local_e0[0];
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      fVar21 = *local_d8;
      local_d8 = local_d8 + local_c8[0];
      if (fVar21 < 0.0) {
        fVar21 = __real_7f7fffff;
      }
      this_03 = &(local_a8[0].Ptr)->EmitterInstanceData;
      uVar15 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      uVar15 = uVar15 >> 0x10 ^ uVar15;
      if (*(int *)&((local_a8[0].Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_a8[0].Ptr)->EmitterInstanceData).field_0x34) {
        puVar17 = *(undefined1 **)&((local_a8[0].Ptr)->EmitterInstanceData).field_0x40;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &((local_a8[0].Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar14 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&((local_a8[0].Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar15
                         ) * 4);
        if (iVar14 != -1) {
          do {
            plVar12 = (longlong *)((longlong)iVar14 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar12 == local_res10) {
              if (plVar12 != (longlong *)0x0) goto LAB_148e4f4e5;
              break;
            }
            iVar14 = (int)plVar12[0xd];
          } while (iVar14 != -1);
        }
      }
      local_b0 = &local_res10;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res8,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar15,
                 (bool *)&local_b0);
      plVar12 = (longlong *)((longlong)local_res8[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e4f4e5:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar12 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,uVar3,Default);
      FNiagaraDataSetAccessorInt32<int>::CreateReader(&local_c0,pFVar19,param_2);
      fVar8 = __real_3f800000;
      if ((local_c0.bIsValid != false) && (uVar15 = 0, 0 < (int)uVar3)) {
        lVar18 = 0;
        do {
          if ((local_c0.bIsValid == false) || (local_c0.NumInstances <= (int)uVar15)) {
            iVar14 = 1;
          }
          else {
            iVar14 = *(int *)(local_c0.ComponentData[0] + lVar18 * 4);
          }
          uVar16 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar16;
          iVar7 = -iVar14;
          if (-iVar14 < 0) {
            iVar7 = iVar14;
          }
          fVar20 = (float)iVar7 *
                   (((float)(uVar16 >> 9 | 0x3f800000) - fVar8) * (fVar1 - fVar4) + fVar4);
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          if (fVar20 <= fVar22) {
            fVar20 = fVar22;
          }
          if (fVar5 == 0.0) {
            uVar16 = 0;
            if ((int)uVar15 < (int)plVar12[0xc]) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar13 = (this_00->AllocatorInstance).Data;
          }
          else {
            uVar16 = 0;
            if ((int)uVar15 < (int)plVar12[0xc]) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar13 = (this_00->AllocatorInstance).Data;
            fVar20 = fVar20 * *(float *)(pFVar13 + lVar18 * 8 + 4);
          }
          *(float *)(pFVar13 + lVar18 * 8 + 4) = fVar20;
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uVar3);
      }
    }
  }
  return;
}

// ScaleSpawnCount<double> @ 148e4f6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<double>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  ushort uVar2;
  FNiagaraEmitterID FVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  TRefCountPtr<FNiagaraDataBuffer> TVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 *puVar19;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res10 [2];
  FNiagaraDataSetAccessorFloat<float> local_res20;
  int local_194;
  FNiagaraEmitterInstance *local_188;
  float *local_180;
  float *local_178;
  int local_170 [2];
  float *local_168;
  float *local_160;
  int local_158 [2];
  float *local_150;
  float *local_148;
  int local_140 [2];
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  int local_f8 [2];
  float *local_f0;
  float *local_e8;
  int local_e0 [2];
  longlong local_d8;
  FNiagaraEmitterInstance **local_d0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_c8 [9];
  
  if ((param_1->NumInstances != 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetNumInstances() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x7d5,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(local_c8,param_1);
  local_158[0] = 0;
  local_168 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_158);
  local_170[0] = 0;
  local_168 = local_168 + local_158[0] * param_1->PerInstanceFnInstanceIdx;
  local_160 = local_168;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_170);
  iVar4 = local_170[0];
  local_140[0] = 0;
  pfVar14 = pfVar14 + local_170[0] * param_1->PerInstanceFnInstanceIdx;
  local_180 = pfVar14;
  local_178 = pfVar14;
  local_150 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  local_128[0] = 0;
  local_150 = local_150 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
  local_148 = local_150;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_110[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = local_120;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_e0[0] = 0;
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = local_108;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_f0 = local_f0 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_c8[0].Ptr)->Owner;
  local_e8 = local_f0;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x7e4,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_180 = pfVar14 + iVar4;
  FVar3.ID = (int)*pfVar14;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_188 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar3);
  this_02 = ((local_c8[0].Ptr)->DataChannelData).Object;
  if (this_02 == (FNiagaraDataChannelData *)0x0) {
    lVar20 = 0;
  }
  else {
    TVar15 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_d8,0));
    lVar20 = (TVar15.Reference)->_padding_;
    if (local_d8 != 0) {
      if ((*(int *)(local_d8 + 8) < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (lVar20 != 0)) {
    iVar4 = *(int *)(lVar20 + 0x124);
    if ((iVar4 != 0) &&
       (((local_188 != (FNiagaraEmitterInstance *)0x0 && (local_188->ExecutionState == Active)) &&
        (fVar5 = *local_168, local_168 = local_168 + local_158[0], fVar5 != 0.0)))) {
      pfVar14 = local_150 + local_140[0];
      fVar6 = *local_150;
      fVar5 = *local_138;
      local_138 = local_138 + local_128[0];
      fVar1 = *local_120;
      local_120 = local_120 + local_110[0];
      fVar25 = *local_108;
      local_108 = local_108 + local_f8[0];
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar24 = *local_f0;
      local_f0 = local_f0 + local_e0[0];
      if (fVar24 < 0.0) {
        fVar24 = __real_7f7fffff;
      }
      this_03 = &(local_c8[0].Ptr)->EmitterInstanceData;
      uVar18 = ((uint)((ulonglong)local_188 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_188 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      local_150 = pfVar14;
      if (*(int *)&((local_c8[0].Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_c8[0].Ptr)->EmitterInstanceData).field_0x34) {
        puVar19 = *(undefined1 **)&((local_c8[0].Ptr)->EmitterInstanceData).field_0x40;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = &((local_c8[0].Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar12 = *(int *)(puVar19 +
                         (ulonglong)
                         (*(int *)&((local_c8[0].Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar18
                         ) * 4);
        if (iVar12 != -1) {
          do {
            plVar16 = (longlong *)((longlong)iVar12 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar16 == local_188) {
              if (plVar16 != (longlong *)0x0) goto LAB_148e4fb13;
              break;
            }
            iVar12 = (int)plVar16[0xd];
          } while (iVar12 != -1);
        }
      }
      local_d0 = &local_188;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res10,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar18,
                 (bool *)&local_d0);
      plVar16 = (longlong *)((longlong)local_res10[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e4fb13:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar16 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,iVar4,Default);
      lVar21 = *(longlong *)(lVar20 + 0x10);
      local_res20.bIsFloat = true;
      local_res20.ComponentIndex = -1;
      if ((*(longlong *)(lVar21 + 8) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraDataSetAccessorFloat<float>::Init
                (&local_res20,*(FNiagaraDataSetCompiledData **)(lVar21 + 8),param_2);
      bVar10 = local_res20.bIsFloat;
      fVar9 = __real_b8800000;
      uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar8 = __real_3f800000;
      lVar21 = 0;
      bVar11 = false;
      local_194 = 0;
      if (local_res20.ComponentIndex != -1) {
        bVar11 = true;
        if (local_res20.bIsFloat == false) {
          lVar21 = (ulonglong)(uint)(local_res20.ComponentIndex * *(int *)(lVar20 + 0x134)) +
                   *(longlong *)(lVar20 + 0x38);
        }
        else {
          lVar21 = (ulonglong)(uint)(local_res20.ComponentIndex * *(int *)(lVar20 + 300)) +
                   *(longlong *)(lVar20 + 0x18);
        }
        local_194 = *(int *)(lVar20 + 0x124);
      }
      if ((bVar11) && (uVar22 = 0, 0 < iVar4)) {
        lVar20 = 0;
        do {
          fVar23 = fVar8;
          if ((int)uVar22 < local_194) {
            if (bVar10 == false) {
              uVar2 = *(ushort *)(lVar21 + lVar20 * 2);
              uVar13 = (uVar2 & 0x7fff) * 0x2000;
              fVar23 = (float)(uVar13 + 0x38000000);
              if ((uVar13 & 0xf800000) == 0xf800000) {
                fVar23 = (float)((uVar2 & 0x8000) << 0x10 | uVar13 + 0x70000000);
              }
              else {
                if ((uVar13 & 0xf800000) == 0) {
                  fVar23 = (float)(uVar13 + 0x38800000) + fVar9;
                }
                fVar23 = (float)((uVar2 & 0x8000) << 0x10 | (uint)fVar23);
              }
            }
            else {
              fVar23 = *(float *)(lVar21 + lVar20 * 4);
            }
          }
          uVar13 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar13;
          fVar23 = (float)((uint)fVar23 & uVar18) *
                   (((float)(uVar13 >> 9 | 0x3f800000) - fVar8) * (fVar1 - fVar5) + fVar5);
          if (fVar24 <= fVar23) {
            fVar23 = fVar24;
          }
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar6 == 0.0) {
            uVar13 = 0;
            if ((int)uVar22 < (int)plVar16[0xc]) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar17 = (this_00->AllocatorInstance).Data;
          }
          else {
            uVar13 = 0;
            if ((int)uVar22 < (int)plVar16[0xc]) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar17 = (this_00->AllocatorInstance).Data;
            fVar23 = fVar23 * *(float *)(pFVar17 + lVar20 * 8 + 4);
          }
          *(float *)(pFVar17 + lVar20 * 8 + 4) = fVar23;
          uVar22 = uVar22 + 1;
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar4);
      }
    }
  }
  return;
}

// ScaleSpawnCount<UE::Math::TVector2<double>_> @ 148e4fe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<UE::Math::TVector2<double>_>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  float fVar2;
  ushort uVar3;
  FNiagaraEmitterID FVar4;
  int iVar5;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  TRefCountPtr<FNiagaraDataBuffer> TVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 *puVar18;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> local_198;
  int local_190;
  float local_18c;
  int local_188;
  FNiagaraEmitterInstance *local_180;
  float *local_178;
  float *local_170;
  int local_168 [2];
  float *local_160;
  float *local_158;
  int local_150 [2];
  float *local_148;
  float *local_140;
  int local_138 [2];
  float *local_130;
  float *local_128;
  int local_120 [2];
  float *local_118;
  float *local_110;
  int local_108 [2];
  float *local_100;
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  float *local_e0;
  int local_d8 [2];
  longlong local_d0;
  FNiagaraEmitterInstance **local_c8;
  float local_c0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_b8 [8];
  
  lVar19 = 0;
  if ((param_1->NumInstances != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetNumInstances() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7d5,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(local_b8,param_1);
  local_150[0] = 0;
  local_160 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_150);
  local_168[0] = 0;
  local_160 = local_160 + local_150[0] * param_1->PerInstanceFnInstanceIdx;
  local_158 = local_160;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_168);
  iVar5 = local_168[0];
  local_138[0] = 0;
  pfVar13 = pfVar13 + local_168[0] * param_1->PerInstanceFnInstanceIdx;
  local_178 = pfVar13;
  local_170 = pfVar13;
  local_148 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  local_120[0] = 0;
  local_148 = local_148 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  local_140 = local_148;
  local_130 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  local_108[0] = 0;
  local_130 = local_130 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  local_128 = local_130;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f0[0] = 0;
  local_118 = local_118 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = local_118;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_d8[0] = 0;
  local_100 = local_100 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = local_100;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  local_e8 = local_e8 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_b8[0].Ptr)->Owner;
  local_e0 = local_e8;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7e4,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_178 = pfVar13 + iVar5;
  FVar4.ID = (int)*pfVar13;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_180 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar4);
  this_02 = ((local_b8[0].Ptr)->DataChannelData).Object;
  if (this_02 != (FNiagaraDataChannelData *)0x0) {
    TVar14 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_d0,0));
    lVar19 = (TVar14.Reference)->_padding_;
    if (local_d0 != 0) {
      if ((*(int *)(local_d0 + 8) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (lVar19 != 0)) {
    iVar5 = *(int *)(lVar19 + 0x124);
    if ((iVar5 != 0) &&
       (((local_180 != (FNiagaraEmitterInstance *)0x0 && (local_180->ExecutionState == Active)) &&
        (pfVar13 = local_160 + local_150[0], *local_160 != 0.0)))) {
      pfVar20 = local_148 + local_138[0];
      local_18c = *local_148;
      fVar1 = *local_130;
      local_130 = local_130 + local_120[0];
      fVar2 = *local_118;
      local_118 = local_118 + local_108[0];
      fVar25 = *local_100;
      local_100 = local_100 + local_f0[0];
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar24 = *local_e8;
      local_e8 = local_e8 + local_d8[0];
      if (fVar24 < 0.0) {
        fVar24 = __real_7f7fffff;
      }
      this_03 = &(local_b8[0].Ptr)->EmitterInstanceData;
      uVar17 = ((uint)((ulonglong)local_180 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_180 >> 4)) *
               -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      local_160 = pfVar13;
      local_148 = pfVar20;
      if (*(int *)&((local_b8[0].Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_b8[0].Ptr)->EmitterInstanceData).field_0x34) {
        puVar18 = *(undefined1 **)&((local_b8[0].Ptr)->EmitterInstanceData).field_0x40;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = &((local_b8[0].Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar11 = *(int *)(puVar18 +
                         (ulonglong)
                         (*(int *)&((local_b8[0].Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar17
                         ) * 4);
        if (iVar11 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar11 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar15 == local_180) {
              if (plVar15 != (longlong *)0x0) goto LAB_148e5029b;
              break;
            }
            iVar11 = (int)plVar15[0xd];
          } while (iVar11 != -1);
        }
      }
      local_c8 = &local_180;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)&local_190,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar17,
                 (bool *)&local_c8);
      plVar15 = (longlong *)((longlong)local_190 * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e5029b:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar15 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,iVar5,Default);
      lVar21 = *(longlong *)(lVar19 + 0x10);
      local_198.bIsFloat = true;
      local_198.ComponentIndex = -1;
      if ((*(longlong *)(lVar21 + 8) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompiledData.Get() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x169,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::Init
                (&local_198,*(FNiagaraDataSetCompiledData **)(lVar21 + 8),param_2);
      bVar9 = local_198.bIsFloat;
      fVar8 = __real_b8800000;
      fVar7 = __real_3f800000;
      if (local_198.ComponentIndex != -1) {
        if (local_198.bIsFloat == false) {
          pfVar13 = (float *)((ulonglong)
                              (uint)((local_198.ComponentIndex + 1) * *(int *)(lVar19 + 0x134)) +
                             *(longlong *)(lVar19 + 0x38));
          lVar21 = (ulonglong)(uint)(local_198.ComponentIndex * *(int *)(lVar19 + 0x134)) +
                   *(longlong *)(lVar19 + 0x38);
        }
        else {
          pfVar13 = (float *)((ulonglong)
                              (uint)((local_198.ComponentIndex + 1) * *(int *)(lVar19 + 300)) +
                             *(longlong *)(lVar19 + 0x18));
          lVar21 = (ulonglong)(uint)(local_198.ComponentIndex * *(int *)(lVar19 + 300)) +
                   *(longlong *)(lVar19 + 0x18);
        }
        local_188 = *(int *)(lVar19 + 0x124);
        uVar17 = 0;
        if (0 < (longlong)iVar5) {
          lVar19 = 0;
          lVar21 = lVar21 - (longlong)pfVar13;
          pfVar20 = pfVar13;
          do {
            fVar23 = fVar7;
            fVar22 = fVar7;
            if ((int)uVar17 < local_188) {
              if (bVar9 == false) {
                uVar3 = *(ushort *)((longlong)pfVar20 + lVar21);
                uVar12 = (uVar3 & 0x7fff) * 0x2000;
                local_c0 = (float)(uVar12 + 0x38000000);
                if ((uVar12 & 0xf800000) == 0xf800000) {
                  local_c0 = (float)(uVar12 + 0x70000000);
                }
                else if ((uVar12 & 0xf800000) == 0) {
                  local_c0 = (float)(uVar12 + 0x38800000) + fVar8;
                }
                local_c0 = (float)((uVar3 & 0x8000) << 0x10 | (uint)local_c0);
                uVar12 = (*(ushort *)pfVar20 & 0x7fff) * 0x2000;
                fVar22 = (float)(uVar12 + 0x38000000);
                if ((uVar12 & 0xf800000) == 0xf800000) {
                  fVar22 = (float)(uVar12 + 0x70000000);
                }
                else if ((uVar12 & 0xf800000) == 0) {
                  fVar22 = (float)(uVar12 + 0x38800000) + fVar8;
                }
                fVar23 = local_c0;
                fVar22 = (float)((*(ushort *)pfVar20 & 0x8000) << 0x10 | (uint)fVar22);
              }
              else {
                fVar23 = *(float *)(lVar21 + (longlong)pfVar13);
                fVar22 = *pfVar13;
              }
            }
            uVar12 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar12;
            fVar23 = SQRT(fVar23 * fVar23 + fVar22 * fVar22) *
                     (((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * (fVar2 - fVar1) + fVar1);
            if (fVar24 <= fVar23) {
              fVar23 = fVar24;
            }
            if (fVar23 <= fVar25) {
              fVar23 = fVar25;
            }
            if (local_18c == 0.0) {
              uVar12 = 0;
              if ((int)uVar17 < (int)plVar15[0xc]) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar16 = (this_00->AllocatorInstance).Data;
            }
            else {
              uVar12 = 0;
              if ((int)uVar17 < (int)plVar15[0xc]) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar16 = (this_00->AllocatorInstance).Data;
              fVar23 = fVar23 * *(float *)(pFVar16 + lVar19 * 8 + 4);
            }
            uVar17 = uVar17 + 1;
            *(float *)(pFVar16 + lVar19 * 8 + 4) = fVar23;
            pfVar13 = pfVar13 + 1;
            lVar19 = lVar19 + 1;
            pfVar20 = (float *)((longlong)pfVar20 + 2);
          } while (lVar19 < iVar5);
        }
      }
    }
  }
  return;
}

// ScaleSpawnCount<UE::Math::TVector4<double>_> @ 148e50620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<UE::Math::TVector4<double>_>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  FNiagaraEmitterID FVar2;
  uint uVar3;
  float fVar4;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  TRefCountPtr<FNiagaraDataBuffer> TVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  FNiagaraDataBuffer *pFVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_res8 [2];
  FNiagaraEmitterInstance *local_res10;
  longlong local_res20;
  TVector4<float>_u_0 local_1a8;
  float *local_198;
  float *local_190;
  int local_188 [2];
  float *local_180;
  float *local_178;
  int local_170 [2];
  float *local_168;
  float *local_160;
  int local_158 [2];
  float *local_150;
  float *local_148;
  int local_140 [2];
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  int local_f8 [2];
  FNiagaraEmitterInstance **local_f0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_e8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_d8 [4];
  
  local_res8[0] = 0;
  if ((param_1->NumInstances != 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetNumInstances() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x7d5,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_e8,param_1);
  local_170[0] = 0;
  local_180 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_170);
  local_188[0] = 0;
  local_180 = local_180 + local_170[0] * param_1->PerInstanceFnInstanceIdx;
  local_178 = local_180;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_188);
  iVar11 = local_188[0];
  local_158[0] = 0;
  pfVar13 = pfVar13 + local_188[0] * param_1->PerInstanceFnInstanceIdx;
  local_198 = pfVar13;
  local_190 = pfVar13;
  local_168 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_158);
  local_140[0] = 0;
  local_168 = local_168 + local_158[0] * param_1->PerInstanceFnInstanceIdx;
  local_160 = local_168;
  local_150 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  local_128[0] = 0;
  local_150 = local_150 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
  local_148 = local_150;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_110[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = local_120;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_e8.Ptr)->Owner;
  local_100 = local_108;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x7e4,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_198 = pfVar13 + iVar11;
  FVar2.ID = (int)*pfVar13;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res10 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar2);
  this_02 = ((local_e8.Ptr)->DataChannelData).Object;
  if (this_02 == (FNiagaraDataChannelData *)0x0) {
    pFVar18 = (FNiagaraDataBuffer *)0x0;
  }
  else {
    TVar14 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_res20,0));
    pFVar18 = (FNiagaraDataBuffer *)(TVar14.Reference)->_padding_;
    if (local_res20 != 0) {
      if ((*(int *)(local_res20 + 8) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (pFVar18 != (FNiagaraDataBuffer *)0x0)) {
    uVar3 = pFVar18->NumInstances;
    lVar20 = (longlong)(int)uVar3;
    if ((uVar3 != 0) &&
       (((local_res10 != (FNiagaraEmitterInstance *)0x0 && (local_res10->ExecutionState == Active))
        && (fVar4 = *local_180, local_180 = local_180 + local_170[0], fVar4 != 0.0)))) {
      fVar21 = *local_168;
      local_168 = local_168 + local_158[0];
      fVar4 = *local_150;
      local_150 = local_150 + local_140[0];
      fVar1 = *local_138;
      local_138 = local_138 + local_128[0];
      fVar23 = *local_120;
      local_120 = local_120 + local_110[0];
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar22 = *local_108;
      local_108 = local_108 + local_f8[0];
      if (fVar22 < 0.0) {
        fVar22 = __real_7f7fffff;
      }
      this_03 = &(local_e8.Ptr)->EmitterInstanceData;
      uVar16 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar16 = uVar16 >> 0x10 ^ uVar16;
      if (*(int *)&((local_e8.Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_e8.Ptr)->EmitterInstanceData).field_0x34) {
        puVar17 = *(undefined1 **)&((local_e8.Ptr)->EmitterInstanceData).field_0x40;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &((local_e8.Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar11 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&((local_e8.Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar16) *
                         4);
        if (iVar11 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar11 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar15 == local_res10) {
              if (plVar15 != (longlong *)0x0) goto LAB_148e50a85;
              break;
            }
            iVar11 = (int)plVar15[0xd];
          } while (iVar11 != -1);
        }
      }
      local_f0 = &local_res10;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res8,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar16,
                 (bool *)&local_f0);
      plVar15 = (longlong *)((longlong)local_res8[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e50a85:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar15 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,uVar3,Default);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                (local_d8,pFVar18,param_2);
      uVar9 = _UNK_15076b188;
      uVar8 = ___xmm_3f80000000000000000000003f800000;
      fVar7 = __real_3f800000;
      if ((local_d8[0].bIsValid != false) && (uVar16 = 0, 0 < (int)uVar3)) {
        if (fVar21 == 0.0) {
          lVar19 = 0;
          do {
            if ((local_d8[0].bIsValid == false) || (local_d8[0].NumInstances <= (int)uVar16)) {
              local_1a8._0_8_ = uVar8;
              local_1a8._8_8_ = uVar9;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                        (local_d8,(TVector4<float> *)&local_1a8._s_0,uVar16);
            }
            uVar12 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar12;
            uVar3 = 0;
            if ((int)uVar16 < (int)plVar15[0xc]) {
              uVar3 = ~uVar16 >> 0x1f;
            }
            fVar21 = SQRT(local_1a8._s_0.X * local_1a8._s_0.X + local_1a8._s_0.Y * local_1a8._s_0.Y
                          + local_1a8._s_0.Z * local_1a8._s_0.Z +
                            local_1a8._s_0.W * local_1a8._s_0.W) *
                     (((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar22 <= fVar21) {
              fVar21 = fVar22;
            }
            if (fVar21 <= fVar23) {
              fVar21 = fVar23;
            }
            if ((uVar3 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(float *)((this_00->AllocatorInstance).Data + lVar19 * 8 + 4) = fVar21;
            lVar19 = lVar19 + 1;
          } while (lVar19 < lVar20);
        }
        else if (0 < lVar20) {
          lVar19 = 0;
          do {
            if ((local_d8[0].bIsValid == false) || (local_d8[0].NumInstances <= (int)uVar16)) {
              local_1a8._0_8_ = uVar8;
              local_1a8._8_8_ = uVar9;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                        (local_d8,(TVector4<float> *)&local_1a8._s_0,uVar16);
            }
            uVar12 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar12;
            uVar3 = 0;
            if ((int)uVar16 < (int)plVar15[0xc]) {
              uVar3 = ~uVar16 >> 0x1f;
            }
            fVar21 = SQRT(local_1a8._s_0.X * local_1a8._s_0.X + local_1a8._s_0.Y * local_1a8._s_0.Y
                          + local_1a8._s_0.Z * local_1a8._s_0.Z +
                            local_1a8._s_0.W * local_1a8._s_0.W) *
                     (((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar22 <= fVar21) {
              fVar21 = fVar22;
            }
            if (fVar21 <= fVar23) {
              fVar21 = fVar23;
            }
            if ((uVar3 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            uVar16 = uVar16 + 1;
            *(float *)(pFVar5 + lVar19 * 8 + 4) = fVar21 * *(float *)(pFVar5 + lVar19 * 8 + 4);
            lVar19 = lVar19 + 1;
          } while (lVar19 < lVar20);
        }
      }
    }
  }
  return;
}

// ScaleSpawnCount<UE::Math::TVector<double>_> @ 148e50d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<UE::Math::TVector<double>_>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  FNiagaraEmitterID FVar2;
  uint uVar3;
  float fVar4;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  TRefCountPtr<FNiagaraDataBuffer> TVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 *puVar15;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  FNiagaraDataBuffer *pFVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res8 [2];
  FNiagaraEmitterInstance *local_res10;
  longlong local_res20;
  TVector<float>_u_0 local_188;
  float *local_178;
  float *local_170;
  int local_168 [2];
  float *local_160;
  float *local_158;
  int local_150 [2];
  float *local_148;
  float *local_140;
  int local_138 [2];
  float *local_130;
  float *local_128;
  int local_120 [2];
  float *local_118;
  float *local_110;
  int local_108 [2];
  float *local_100;
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  float *local_e0;
  int local_d8 [2];
  FNiagaraEmitterInstance **local_d0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_c8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_b8 [4];
  
  local_res8[0] = 0;
  if ((param_1->NumInstances != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetNumInstances() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7d5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_c8,param_1);
  local_150[0] = 0;
  local_160 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_150);
  local_168[0] = 0;
  local_160 = local_160 + local_150[0] * param_1->PerInstanceFnInstanceIdx;
  local_158 = local_160;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_168);
  iVar9 = local_168[0];
  local_138[0] = 0;
  pfVar11 = pfVar11 + local_168[0] * param_1->PerInstanceFnInstanceIdx;
  local_178 = pfVar11;
  local_170 = pfVar11;
  local_148 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  local_120[0] = 0;
  local_148 = local_148 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  local_140 = local_148;
  local_130 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  local_108[0] = 0;
  local_130 = local_130 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  local_128 = local_130;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f0[0] = 0;
  local_118 = local_118 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = local_118;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_d8[0] = 0;
  local_100 = local_100 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = local_100;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  local_e8 = local_e8 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_c8.Ptr)->Owner;
  local_e0 = local_e8;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7e4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_178 = pfVar11 + iVar9;
  FVar2.ID = (int)*pfVar11;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res10 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar2);
  this_02 = ((local_c8.Ptr)->DataChannelData).Object;
  if (this_02 == (FNiagaraDataChannelData *)0x0) {
    pFVar16 = (FNiagaraDataBuffer *)0x0;
  }
  else {
    TVar12 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_res20,0));
    pFVar16 = (FNiagaraDataBuffer *)(TVar12.Reference)->_padding_;
    if (local_res20 != 0) {
      if ((*(int *)(local_res20 + 8) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (pFVar16 != (FNiagaraDataBuffer *)0x0)) {
    uVar3 = pFVar16->NumInstances;
    lVar18 = (longlong)(int)uVar3;
    if ((uVar3 != 0) &&
       (((local_res10 != (FNiagaraEmitterInstance *)0x0 && (local_res10->ExecutionState == Active))
        && (fVar4 = *local_160, local_160 = local_160 + local_150[0], fVar4 != 0.0)))) {
      fVar19 = *local_148;
      local_148 = local_148 + local_138[0];
      fVar4 = *local_130;
      local_130 = local_130 + local_120[0];
      fVar1 = *local_118;
      local_118 = local_118 + local_108[0];
      fVar21 = *local_100;
      local_100 = local_100 + local_f0[0];
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar20 = *local_e8;
      local_e8 = local_e8 + local_d8[0];
      if (fVar20 < 0.0) {
        fVar20 = __real_7f7fffff;
      }
      this_03 = &(local_c8.Ptr)->EmitterInstanceData;
      uVar14 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      if (*(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x34) {
        puVar15 = *(undefined1 **)&((local_c8.Ptr)->EmitterInstanceData).field_0x40;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &((local_c8.Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar9 = *(int *)(puVar15 +
                        (ulonglong)
                        (*(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar14) *
                        4);
        if (iVar9 != -1) {
          do {
            plVar13 = (longlong *)((longlong)iVar9 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar13 == local_res10) {
              if (plVar13 != (longlong *)0x0) goto LAB_148e511f5;
              break;
            }
            iVar9 = (int)plVar13[0xd];
          } while (iVar9 != -1);
        }
      }
      local_d0 = &local_res10;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res8,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar14,
                 (bool *)&local_d0);
      plVar13 = (longlong *)((longlong)local_res8[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e511f5:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar13 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,uVar3,Default);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (local_b8,pFVar16,param_2);
      fVar7 = __real_3f800000;
      if ((local_b8[0].bIsValid != false) && (uVar14 = 0, 0 < (int)uVar3)) {
        if (fVar19 == 0.0) {
          lVar17 = 0;
          do {
            if ((local_b8[0].bIsValid == false) || (local_b8[0].NumInstances <= (int)uVar14)) {
              local_188._s_0.X = fVar7;
              local_188._s_0.Y = fVar7;
              local_188._s_0.Z = fVar7;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (local_b8,(TVector<float> *)&local_188._s_0,uVar14);
            }
            uVar10 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar10;
            uVar3 = 0;
            if ((int)uVar14 < (int)plVar13[0xc]) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            fVar19 = SQRT(local_188._s_0.X * local_188._s_0.X + local_188._s_0.Y * local_188._s_0.Y
                          + local_188._s_0.Z * local_188._s_0.Z) *
                     (((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar20 <= fVar19) {
              fVar19 = fVar20;
            }
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            if ((uVar3 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar14 = uVar14 + 1;
            *(float *)((this_00->AllocatorInstance).Data + lVar17 * 8 + 4) = fVar19;
            lVar17 = lVar17 + 1;
          } while (lVar17 < lVar18);
        }
        else if (0 < lVar18) {
          lVar17 = 0;
          do {
            if ((local_b8[0].bIsValid == false) || (local_b8[0].NumInstances <= (int)uVar14)) {
              local_188._s_0.X = fVar7;
              local_188._s_0.Y = fVar7;
              local_188._s_0.Z = fVar7;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (local_b8,(TVector<float> *)&local_188._s_0,uVar14);
            }
            uVar10 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar10;
            uVar3 = 0;
            if ((int)uVar14 < (int)plVar13[0xc]) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            fVar19 = SQRT(local_188._s_0.X * local_188._s_0.X + local_188._s_0.Y * local_188._s_0.Y
                          + local_188._s_0.Z * local_188._s_0.Z) *
                     (((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar20 <= fVar19) {
              fVar19 = fVar20;
            }
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            if ((uVar3 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            uVar14 = uVar14 + 1;
            *(float *)(pFVar5 + lVar17 * 8 + 4) = fVar19 * *(float *)(pFVar5 + lVar17 * 8 + 4);
            lVar17 = lVar17 + 1;
          } while (lVar17 < lVar18);
        }
      }
    }
  }
  return;
}

// ScaleSpawnCount<FNiagaraPosition> @ 148e514e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ScaleSpawnCount<FNiagaraPosition>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  FNiagaraEmitterID FVar2;
  uint uVar3;
  float fVar4;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  TRefCountPtr<FNiagaraDataBuffer> TVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 *puVar15;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  FNiagaraDataBuffer *pFVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res8 [2];
  FNiagaraEmitterInstance *local_res10;
  longlong local_res20;
  TVector<float>_u_0 local_188;
  float *local_178;
  float *local_170;
  int local_168 [2];
  float *local_160;
  float *local_158;
  int local_150 [2];
  float *local_148;
  float *local_140;
  int local_138 [2];
  float *local_130;
  float *local_128;
  int local_120 [2];
  float *local_118;
  float *local_110;
  int local_108 [2];
  float *local_100;
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  float *local_e0;
  int local_d8 [2];
  FNiagaraEmitterInstance **local_d0;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_c8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_b8 [4];
  
  local_res8[0] = 0;
  if ((param_1->NumInstances != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetNumInstances() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7d5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_c8,param_1);
  local_150[0] = 0;
  local_160 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_150);
  local_168[0] = 0;
  local_160 = local_160 + local_150[0] * param_1->PerInstanceFnInstanceIdx;
  local_158 = local_160;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_168);
  iVar9 = local_168[0];
  local_138[0] = 0;
  pfVar11 = pfVar11 + local_168[0] * param_1->PerInstanceFnInstanceIdx;
  local_178 = pfVar11;
  local_170 = pfVar11;
  local_148 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  local_120[0] = 0;
  local_148 = local_148 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  local_140 = local_148;
  local_130 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  local_108[0] = 0;
  local_130 = local_130 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  local_128 = local_130;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f0[0] = 0;
  local_118 = local_118 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = local_118;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_d8[0] = 0;
  local_100 = local_100 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = local_100;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  local_e8 = local_e8 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_c8.Ptr)->Owner;
  local_e0 = local_e8;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x7e4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_178 = pfVar11 + iVar9;
  FVar2.ID = (int)*pfVar11;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res10 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar2);
  this_02 = ((local_c8.Ptr)->DataChannelData).Object;
  if (this_02 == (FNiagaraDataChannelData *)0x0) {
    pFVar16 = (FNiagaraDataBuffer *)0x0;
  }
  else {
    TVar12 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_res20,0));
    pFVar16 = (FNiagaraDataBuffer *)(TVar12.Reference)->_padding_;
    if (local_res20 != 0) {
      if ((*(int *)(local_res20 + 8) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + -1;
      UNLOCK();
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (pFVar16 != (FNiagaraDataBuffer *)0x0)) {
    uVar3 = pFVar16->NumInstances;
    lVar18 = (longlong)(int)uVar3;
    if ((uVar3 != 0) &&
       (((local_res10 != (FNiagaraEmitterInstance *)0x0 && (local_res10->ExecutionState == Active))
        && (fVar4 = *local_160, local_160 = local_160 + local_150[0], fVar4 != 0.0)))) {
      fVar19 = *local_148;
      local_148 = local_148 + local_138[0];
      fVar4 = *local_130;
      local_130 = local_130 + local_120[0];
      fVar1 = *local_118;
      local_118 = local_118 + local_108[0];
      fVar21 = *local_100;
      local_100 = local_100 + local_f0[0];
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar20 = *local_e8;
      local_e8 = local_e8 + local_d8[0];
      if (fVar20 < 0.0) {
        fVar20 = __real_7f7fffff;
      }
      this_03 = &(local_c8.Ptr)->EmitterInstanceData;
      uVar14 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      if (*(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x34) {
        puVar15 = *(undefined1 **)&((local_c8.Ptr)->EmitterInstanceData).field_0x40;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &((local_c8.Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar9 = *(int *)(puVar15 +
                        (ulonglong)
                        (*(int *)&((local_c8.Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar14) *
                        4);
        if (iVar9 != -1) {
          do {
            plVar13 = (longlong *)((longlong)iVar9 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar13 == local_res10) {
              if (plVar13 != (longlong *)0x0) goto LAB_148e51945;
              break;
            }
            iVar9 = (int)plVar13[0xd];
          } while (iVar9 != -1);
        }
      }
      local_d0 = &local_res10;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res8,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar14,
                 (bool *)&local_d0);
      plVar13 = (longlong *)((longlong)local_res8[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e51945:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar13 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this_00,uVar3,Default);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (local_b8,pFVar16,param_2);
      fVar7 = __real_3f800000;
      if ((local_b8[0].bIsValid != false) && (uVar14 = 0, 0 < (int)uVar3)) {
        if (fVar19 == 0.0) {
          lVar17 = 0;
          do {
            if ((local_b8[0].bIsValid == false) || (local_b8[0].NumInstances <= (int)uVar14)) {
              local_188._s_0.X = fVar7;
              local_188._s_0.Y = fVar7;
              local_188._s_0.Z = fVar7;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (local_b8,(TVector<float> *)&local_188._s_0,uVar14);
            }
            uVar10 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar10;
            uVar3 = 0;
            if ((int)uVar14 < (int)plVar13[0xc]) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            fVar19 = SQRT(local_188._s_0.X * local_188._s_0.X + local_188._s_0.Y * local_188._s_0.Y
                          + local_188._s_0.Z * local_188._s_0.Z) *
                     (((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar20 <= fVar19) {
              fVar19 = fVar20;
            }
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            if ((uVar3 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar14 = uVar14 + 1;
            *(float *)((this_00->AllocatorInstance).Data + lVar17 * 8 + 4) = fVar19;
            lVar17 = lVar17 + 1;
          } while (lVar17 < lVar18);
        }
        else if (0 < lVar18) {
          lVar17 = 0;
          do {
            if ((local_b8[0].bIsValid == false) || (local_b8[0].NumInstances <= (int)uVar14)) {
              local_188._s_0.X = fVar7;
              local_188._s_0.Y = fVar7;
              local_188._s_0.Z = fVar7;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (local_b8,(TVector<float> *)&local_188._s_0,uVar14);
            }
            uVar10 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar10;
            uVar3 = 0;
            if ((int)uVar14 < (int)plVar13[0xc]) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            fVar19 = SQRT(local_188._s_0.X * local_188._s_0.X + local_188._s_0.Y * local_188._s_0.Y
                          + local_188._s_0.Z * local_188._s_0.Z) *
                     (((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (fVar1 - fVar4) + fVar4);
            if (fVar20 <= fVar19) {
              fVar19 = fVar20;
            }
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            if ((uVar3 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            uVar14 = uVar14 + 1;
            *(float *)(pFVar5 + lVar17 * 8 + 4) = fVar19 * *(float *)(pFVar5 + lVar17 * 8 + 4);
            lVar17 = lVar17 + 1;
          } while (lVar17 < lVar18);
        }
      }
    }
  }
  return;
}

// SpawnDirect<int> @ 148e51c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::SpawnDirect<int>
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  FNiagaraEmitterID FVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataChannelData *this_02;
  TReferenceControllerBase<1> *pTVar9;
  FNiagaraSystemSimulation *pFVar10;
  code *pcVar11;
  int iVar12;
  float fVar13;
  bool bVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float *pfVar18;
  TRefCountPtr<FNiagaraDataBuffer> TVar19;
  longlong *plVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  undefined1 *puVar24;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  longlong lVar25;
  FNiagaraDataBuffer *pFVar26;
  int local_res8 [2];
  FVectorVMExternalFunctionContext *local_res10;
  FNiagaraEmitterInstance *local_148;
  float *local_140;
  float *local_138;
  int local_130 [2];
  float *local_128;
  float *local_120;
  int local_118 [2];
  float *local_110;
  float *local_108;
  int local_100 [2];
  float *local_f8;
  float *local_f0;
  int local_e8 [2];
  float *local_e0;
  float *local_d8;
  int local_d0 [2];
  float *local_c8;
  float *local_c0;
  int local_b8 [2];
  float *local_b0;
  float *local_a8;
  int local_a0 [2];
  FNiagaraDataSetReaderInt32<int> local_98;
  longlong local_88;
  FNiagaraEmitterInstance **local_80;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_78 [4];
  
  pFVar26 = (FNiagaraDataBuffer *)0x0;
  local_res8[0] = 0;
  local_res10 = param_1;
  if ((param_1->NumInstances != 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetNumInstances() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x787,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(local_78,param_1);
  local_118[0] = 0;
  local_128 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_118);
  local_130[0] = 0;
  local_128 = local_128 + local_118[0] * param_1->PerInstanceFnInstanceIdx;
  local_120 = local_128;
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_130);
  iVar16 = local_130[0];
  local_100[0] = 0;
  pfVar18 = pfVar18 + local_130[0] * param_1->PerInstanceFnInstanceIdx;
  local_140 = pfVar18;
  local_138 = pfVar18;
  local_110 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  local_e8[0] = 0;
  local_110 = local_110 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_108 = local_110;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  local_d0[0] = 0;
  local_f8 = local_f8 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0 = local_f8;
  local_e0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  local_b8[0] = 0;
  local_e0 = local_e0 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  local_d8 = local_e0;
  local_c8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  local_a0[0] = 0;
  local_c8 = local_c8 + local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  local_c0 = local_c8;
  local_b0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_b0 = local_b0 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  this_01 = (local_78[0].Ptr)->Owner;
  local_a8 = local_b0;
  if ((this_01 == (FNiagaraSystemInstance *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x797,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_140 = pfVar18 + iVar16;
  FVar5.ID = (int)*pfVar18;
  if (((this_01->Emitters).ArrayNum < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_148 = FNiagaraSystemInstance::GetEmitterByID(this_01,FVar5);
  this_02 = ((local_78[0].Ptr)->DataChannelData).Object;
  if (this_02 != (FNiagaraDataChannelData *)0x0) {
    TVar19 = FNiagaraDataChannelData::GetCPUData(this_02,SUB81(&local_88,0));
    pFVar26 = (FNiagaraDataBuffer *)(TVar19.Reference)->_padding_;
    if (local_88 != 0) {
      if ((*(int *)(local_88 + 8) < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + -1;
      UNLOCK();
    }
  }
  pTVar9 = (this_01->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar10 = (this_01->SystemSimulation).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar10 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (this->bOnlySpawnOnceOnSubticks == false) {
    bVar14 = true;
  }
  else {
    bVar14 = (pFVar10->TickInfo).TickNumber == (pFVar10->TickInfo).TickCount + -1;
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (pFVar26 != (FNiagaraDataBuffer *)0x0)) {
    uVar6 = pFVar26->NumInstances;
    if ((uVar6 != 0) &&
       ((((local_148 != (FNiagaraEmitterInstance *)0x0 && (local_148->ExecutionState == Active)) &&
         (pfVar18 = local_128 + local_118[0], *local_128 != 0.0)) && (bVar14)))) {
      fVar7 = *local_110;
      local_110 = local_110 + local_100[0];
      fVar3 = *local_f8;
      local_f8 = local_f8 + local_e8[0];
      fVar4 = *local_e0;
      local_e0 = local_e0 + local_d0[0];
      fVar8 = *local_c8;
      local_c8 = local_c8 + local_b8[0];
      if ((int)fVar8 < 0) {
        fVar8 = 0.0;
      }
      pfVar1 = local_b0 + local_a0[0];
      fVar15 = *local_b0;
      if ((int)fVar15 < 0) {
        fVar15 = NAN;
      }
      this_03 = &(local_78[0].Ptr)->EmitterInstanceData;
      uVar21 = ((uint)((ulonglong)local_148 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_148 >> 4)) *
               -0x7a143595;
      uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
      uVar21 = uVar21 >> 0x10 ^ uVar21;
      local_128 = pfVar18;
      local_b0 = pfVar1;
      if (*(int *)&((local_78[0].Ptr)->EmitterInstanceData).field_0x8 !=
          *(int *)&((local_78[0].Ptr)->EmitterInstanceData).field_0x34) {
        puVar24 = *(undefined1 **)&((local_78[0].Ptr)->EmitterInstanceData).field_0x40;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = &((local_78[0].Ptr)->EmitterInstanceData).field_0x38;
        }
        iVar16 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&((local_78[0].Ptr)->EmitterInstanceData).field_0x48 - 1U & uVar21
                         ) * 4);
        if (iVar16 != -1) {
          do {
            plVar20 = (longlong *)((longlong)iVar16 * 0x70 + *(longlong *)&this_03->field_0x0);
            if ((FNiagaraEmitterInstance *)*plVar20 == local_148) {
              if (plVar20 != (longlong *)0x0) goto LAB_148e520df;
              break;
            }
            iVar16 = (int)plVar20[0xd];
          } while (iVar16 != -1);
        }
      }
      local_80 = &local_148;
      TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                  *)this_03,(uint)local_res8,
                 (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar21,
                 (bool *)&local_80);
      plVar20 = (longlong *)((longlong)local_res8[0] * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e520df:
      this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                (plVar20 + 0xb);
      TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar6,Default);
      FNiagaraDataSetAccessorInt32<int>::CreateReader(&local_98,pFVar26,param_2);
      fVar13 = __real_3f800000;
      if ((local_98.bIsValid != false) && (uVar21 = 0, 0 < (longlong)(int)uVar6)) {
        lVar25 = 0;
        do {
          if ((local_98.bIsValid == false) || (local_98.NumInstances <= (int)uVar21)) {
            iVar16 = 1;
          }
          else {
            iVar16 = *(int *)(local_98.ComponentData[0] + lVar25 * 4);
          }
          uVar23 = local_res10->RandStream->Seed * 0xbb38435 + 0x3619636b;
          local_res10->RandStream->Seed = uVar23;
          iVar12 = -iVar16;
          if (-iVar16 < 0) {
            iVar12 = iVar16;
          }
          fVar17 = (float)(int)((float)iVar12 *
                               (((float)(uVar23 >> 9 | 0x3f800000) - fVar13) * (fVar4 - fVar3) +
                               fVar3));
          fVar22 = fVar15;
          if ((int)fVar17 < (int)fVar15) {
            fVar22 = fVar17;
          }
          fVar17 = fVar8;
          if ((int)fVar8 < (int)fVar22) {
            fVar17 = fVar22;
          }
          if (fVar7 == 1.4013e-45) {
            uVar23 = 0;
            if ((int)uVar21 < (int)plVar20[0xc]) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar2 = (this_00->AllocatorInstance).Data + lVar25 * 8;
            *(int *)pFVar2 = *(int *)pFVar2 + (int)fVar17;
          }
          else if (fVar7 == 0.0) {
            uVar23 = 0;
            if ((int)uVar21 < (int)plVar20[0xc]) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)((this_00->AllocatorInstance).Data + lVar25 * 8) = fVar17;
          }
          uVar21 = uVar21 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)uVar6);
      }
    }
  }
  return;
}

// UNiagaraDataInterfaceDataChannelRead @ 148e550b0

UNiagaraDataInterfaceDataChannelRead * __thiscall
UNiagaraDataInterfaceDataChannelRead::UNiagaraDataInterfaceDataChannelRead
          (UNiagaraDataInterfaceDataChannelRead *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataChannelRead__6B_;
  (this->Channel).field0_0x0.DebugPtr = (UNiagaraDataChannelAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->AccessContext).AccessContext);
  this->bAutoLinkToSpawningNDC = true;
  this->bReadCurrentFrame = false;
  this->bUpdateSourceDataEveryTick = true;
  this->bOverrideSpawnGroupToDataChannelIndex = false;
  this->bOnlySpawnOnceOnSubticks = true;
  (this->CompiledData).FunctionInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledData).FunctionInfo.ArrayNum = 0;
  (this->CompiledData).FunctionInfo.ArrayMax = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x8 = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x20 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x28 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x34 = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x40 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x48 = 0;
  (this->CompiledData).TotalParams = 0;
  (this->CompiledData).bUsedByCPU = false;
  (this->CompiledData).bUsedByGPU = false;
  (this->CompiledData).bNeedsSpawnDataTable = true;
  (this->CompiledData).bSpawnsParticles = false;
  (this->CompiledData).bCallsWrite = false;
  return this;
}

// UNiagaraDataInterfaceDataChannelRead @ 148e55160

UNiagaraDataInterfaceDataChannelRead * __thiscall
UNiagaraDataInterfaceDataChannelRead::UNiagaraDataInterfaceDataChannelRead
          (UNiagaraDataInterfaceDataChannelRead *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataChannelRead__6B_;
  (this->Channel).field0_0x0.DebugPtr = (UNiagaraDataChannelAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->AccessContext).AccessContext);
  this->bAutoLinkToSpawningNDC = true;
  this->bReadCurrentFrame = false;
  this->bUpdateSourceDataEveryTick = true;
  this->bOverrideSpawnGroupToDataChannelIndex = false;
  this->bOnlySpawnOnceOnSubticks = true;
  (this->CompiledData).FunctionInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledData).FunctionInfo.ArrayNum = 0;
  (this->CompiledData).FunctionInfo.ArrayMax = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x8 = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x20 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x28 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x34 = 0;
  *(undefined8 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x40 = 0;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x48 = 0;
  (this->CompiledData).TotalParams = 0;
  (this->CompiledData).bUsedByCPU = false;
  (this->CompiledData).bUsedByGPU = false;
  (this->CompiledData).bNeedsSpawnDataTable = true;
  (this->CompiledData).bSpawnsParticles = false;
  (this->CompiledData).bCallsWrite = false;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxy_DataChannelRead__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceDataChannelRead @ 148e56900

void __thiscall
UNiagaraDataInterfaceDataChannelRead::~UNiagaraDataInterfaceDataChannelRead
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataChannelRead__6B_;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompiledData).GPUScriptParameterInfos.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CompiledData).GPUScriptParameterInfos);
  DestructItems<FNDIDataChannelFunctionInfo,int>
            ((FNDIDataChannelFunctionInfo *)(this->CompiledData).FunctionInfo.AllocatorInstance.Data
             ,(this->CompiledData).FunctionInfo.ArrayNum);
  pFVar2 = (this->CompiledData).FunctionInfo.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 148e57fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  FNiagaraDataBuffer *pFVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int local_20 [2];
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_18;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_18,param_1);
  iVar7 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar4 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((*(char *)(lVar1 + 0x51) == '\0') || (GNDCReadForcePrevFrame != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pFVar3 = FNDIDataChannelReadInstanceData::GetReadBufferCPU(local_18.Ptr,bVar5);
  fVar6 = 0.0;
  if ((pFVar3 != (FNiagaraDataBuffer *)0x0) &&
     (fVar6 = 0.0, INiagaraModule::bDataChannelsEnabled != false)) {
    fVar6 = (float)pFVar3->NumInstances;
  }
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar7 = iVar7 + 1;
      *pfVar2 = fVar6;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148e58610

void __thiscall
`UNiagaraDataInterfaceDataChannelRead::GetNDCSpawnData'::__l12::<lambda_1>::operator()
          (void *this,FNDIDataChannelRead_EmitterInstanceData *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  
  iVar1 = (param_1->NDCSpawnData).NDCSpawnData.ArrayNum;
  piVar15 = (param_1->NDCSpawnData).NDCSpawnDataBuckets;
  pFVar3 = (param_1->NDCSpawnData).NDCSpawnData.AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  iVar16 = 0;
  uVar10 = 0xffffffff;
  puVar5 = (uint *)*plVar4;
  uVar20 = *(uint *)(*(longlong *)(*(longlong *)this + 8) + 0xc4);
  *plVar4 = (longlong)(puVar5 + (int)plVar4[2]);
  uVar12 = 0;
  uVar2 = *puVar5;
  piVar18 = piVar15;
  uVar11 = 0;
  uVar21 = uVar20;
  do {
    uVar14 = 0xf;
    uVar19 = uVar11 + (0x8000 >> ((byte)uVar12 & 0x1f)) * *piVar18;
    if (uVar2 < uVar19) {
      uVar21 = (uVar2 - uVar11 >> (0xf - (byte)uVar12 & 0x1f)) + uVar21;
      uVar10 = 0;
      if ((int)uVar21 < iVar1) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(uint *)(pFVar3 + (longlong)(int)uVar21 * 4);
      break;
    }
    uVar21 = uVar21 + *piVar18;
    uVar12 = uVar12 + 1;
    piVar18 = piVar18 + 1;
    uVar11 = uVar19;
  } while (uVar12 < 0x10);
  puVar6 = *(undefined8 **)((longlong)this + 0x10);
  puVar5 = (uint *)*puVar6;
  *puVar6 = puVar5 + *(int *)(puVar6 + 1);
  if (uVar10 < uVar20) {
    *puVar5 = uVar10;
    uVar20 = 0;
    if ((int)uVar10 < iVar1) {
      uVar20 = ~uVar10 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 0x18);
    puVar5 = (uint *)*plVar4;
    uVar20 = *(uint *)(pFVar3 + (longlong)(int)uVar10 * 4);
    *plVar4 = (longlong)(puVar5 + (int)plVar4[1]);
    *puVar5 = uVar20;
    plVar4 = *(longlong **)((longlong)this + 0x20);
    iVar1 = (int)plVar4[1];
    if (0 < iVar1) {
      bVar22 = 0;
      uVar10 = 0;
      do {
        iVar17 = 0x8000 >> (bVar22 & 0x1f);
        bVar22 = bVar22 + 1;
        uVar11 = 0xffff >> (bVar22 & 0x1f);
        uVar21 = ~uVar11 & uVar20;
        uVar20 = uVar20 & uVar11;
        iVar13 = (uVar21 >> ((byte)uVar14 & 0x1f)) * iVar17;
        uVar11 = uVar10 + iVar17 * *piVar15;
        if ((uVar2 < uVar11) && (iVar13 != 0)) {
          piVar15 = (int *)*plVar4;
          *plVar4 = (longlong)(piVar15 + iVar1);
          *piVar15 = iVar16 + ((uVar2 - (uVar2 - uVar10 >> ((byte)uVar14 & 0x1f)) * iVar17) - uVar10
                              );
          return;
        }
        iVar16 = iVar16 + iVar13;
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 1;
        uVar10 = uVar11;
      } while (uVar14 < 0x80000000);
      piVar15 = (int *)*plVar4;
      *plVar4 = (longlong)(piVar15 + iVar1);
      *piVar15 = iVar16;
    }
  }
  else {
    *puVar5 = 0xffffffff;
    puVar6 = *(undefined8 **)((longlong)this + 0x18);
    puVar7 = (undefined4 *)*puVar6;
    *puVar6 = puVar7 + *(int *)(puVar6 + 1);
    *puVar7 = 0xffffffff;
    puVar6 = *(undefined8 **)((longlong)this + 0x20);
    puVar7 = (undefined4 *)*puVar6;
    *puVar6 = puVar7 + *(int *)(puVar6 + 1);
    *puVar7 = 0xffffffff;
  }
  return;
}

// operator() @ 148e58ca0

void __thiscall
`UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_2>::operator()
          (void *this,FNDIDataChannelRegisterBinding *param_1,FNDIInputParam<int> *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  
  if (param_1->DataSetRegisterIndex == 0xffffffff) {
    **(byte **)this = 0;
    return;
  }
  piVar3 = (param_2->Data).InputPtr;
  bVar1 = **(byte **)this;
  piVar6 = (int *)((ulonglong)
                   (param_1->DataSetRegisterIndex *
                   *(int *)(*(longlong *)((longlong)this + 0x10) + 0x130)) +
                   (ulonglong)*(uint *)((longlong)this + 0x18) * 4 +
                  *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x28));
  (param_2->Data).InputPtr = piVar3 + (param_2->Data).AdvanceOffset;
  iVar2 = *piVar3;
  switch(*(undefined4 *)((longlong)this + 8)) {
  case 0:
    **(byte **)this = bVar1 & iVar2 == *piVar6;
    return;
  case 1:
    **(byte **)this = bVar1 & iVar2 != *piVar6;
    return;
  case 2:
    **(byte **)this = bVar1 & iVar2 < *piVar6;
    return;
  case 3:
    **(byte **)this = bVar1 & iVar2 <= *piVar6;
    return;
  case 4:
    **(byte **)this = bVar1 & *piVar6 < iVar2;
    return;
  case 5:
    **(byte **)this = bVar1 & *piVar6 <= iVar2;
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                     ,0x788,L"");
  if (!bVar5) {
    **(undefined1 **)this = 0;
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// operator() @ 148e59260

void __thiscall
`UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_3>::operator()
          (void *this,FNDIDataChannelRegisterBinding *param_1,FNDIInputParam<FFloat16> *param_2)

{
  byte bVar1;
  FFloat16 *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  ushort local_res10 [4];
  
  if (param_1->DataSetRegisterIndex == 0xffffffff) {
    **(byte **)this = 0;
    return;
  }
  pFVar2 = (param_2->Data).InputPtr;
  bVar1 = **(byte **)this;
  puVar5 = (ushort *)
           ((ulonglong)
            (param_1->DataSetRegisterIndex * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x134))
            + (ulonglong)*(uint *)((longlong)this + 0x18) * 2 +
           *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x38));
  (param_2->Data).InputPtr = pFVar2 + (param_2->Data).AdvanceOffset;
  local_res10[0] = pFVar2->Encoded;
  switch(*(undefined4 *)((longlong)this + 8)) {
  case 0:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    if (fVar6 == fVar7) {
      bVar4 = true;
      break;
    }
    goto LAB_148e593ba;
  case 1:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    if (fVar6 != fVar7) {
      bVar4 = true;
      break;
    }
    goto LAB_148e593ba;
  case 2:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    bVar4 = fVar6 < fVar7;
    break;
  case 3:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    bVar4 = fVar6 <= fVar7;
    break;
  case 4:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    bVar4 = fVar7 < fVar6;
    break;
  case 5:
    fVar6 = FGenericPlatformMath::LoadHalf(local_res10);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar5);
    bVar4 = fVar7 <= fVar6;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                       ,0x788,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_148e593ba:
    bVar4 = false;
  }
  **(byte **)this = bVar1 & bVar4;
  return;
}

// BeginDestroy @ 148e5bd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::BeginDestroy(UNiagaraDataInterfaceDataChannelRead *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UNiagaraDataInterfaceDataChannelRead **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// BuildShaderParameters @ 148e5c4c0

void __thiscall
UNiagaraDataInterfaceDataChannelRead::BuildShaderParameters
          (UNiagaraDataInterfaceDataChannelRead *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIDataChannelReadLocal::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x40;
  return;
}

// CalculateTickGroup @ 148e5cb60

ETickingGroup __thiscall
UNiagaraDataInterfaceDataChannelRead::CalculateTickGroup
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *pUVar2;
  ETickingGroup EVar3;
  
  EVar3 = GNDCReadForceTG;
  if (7 < (uint)GNDCReadForceTG) {
    pUVar1 = (this->Channel).field0_0x0.DebugPtr;
    if (((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
        (pUVar2 = (pUVar1->DataChannel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannel *)0x0))
       && (pUVar2->bEnforceTickGroupReadWriteOrder != false)) {
      return (pUVar2->FinalWriteTickGroup).Value + TG_StartPhysics;
    }
    EVar3 = TG_PrePhysics;
  }
  return EVar3;
}

// CanExecuteOnTarget @ 148e5cfc0

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::CanExecuteOnTarget
          (UNiagaraDataInterfaceDataChannelRead *this,ENiagaraSimTarget param_1)

{
  return true;
}

// Consume @ 148e5df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::Consume
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FNDIDataChannelReadInstanceData *this_00;
  longlong *plVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Consume> FVar8;
  float *pfVar9;
  float *pfVar10;
  FNiagaraDataBuffer *pFVar11;
  FNiagaraDataBuffer *pFVar12;
  uint uVar13;
  FName FVar14;
  FName FVar15;
  int iVar16;
  atomic<int> aVar17;
  int iVar18;
  byte bVar19;
  undefined1 auStackY_4f8 [32];
  bool local_498;
  byte local_497;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> local_490;
  FName local_488;
  FColor_u_0 local_480 [2];
  FNiagaraDataBuffer *local_478;
  FNiagaraDataBuffer *local_470;
  UNiagaraDataInterfaceDataChannelRead *local_468;
  float *local_460;
  int local_458 [2];
  FNiagaraDataBuffer *local_450;
  atomic<int> aStack_448;
  undefined4 uStack_444;
  bool *local_440;
  FNiagaraDataBuffer *local_438;
  FNiagaraDataBuffer *pFStack_430;
  undefined8 local_428;
  FName local_420;
  FName local_418;
  FName local_410;
  FNiagaraDataBuffer *local_400;
  atomic<int> aStack_3f8;
  undefined4 uStack_3f4;
  bool *local_3f0;
  FVectorVMExternalFunctionContext *local_3e8;
  FName local_3e0;
  undefined1 local_3d8 [16];
  bool *local_3c8;
  <lambda_2> local_3b8;
  <lambda_1> local_398;
  FNDIVariadicOutputHandler<16> local_378;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  FVar8 = StatPtr_STAT_NDIDataChannelRead_Consume;
  local_468 = this;
  local_3e8 = param_1;
  if (StatPtr_STAT_NDIDataChannelRead_Consume ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Consume>)0x0) {
    pFVar7 = ::FName::FName(&local_3e0,"STAT_NDIDataChannelRead_Consume");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Consume>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Consume,*pFVar7
                       ,L"NDIDataChannelRead Consume","STATGROUP_NiagaraDataChannels",
                       "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar15 = *(FName *)FVar8;
  bVar19 = 0;
  local_410.ComparisonIndex.Value = 0;
  local_410.Number = 0;
  local_497 = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_480[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_480[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar19 = 1;
      local_497 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_420.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_420.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_420,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                   ,0x683);
        bVar19 = 3;
        local_497 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_488 = FVar15;
      local_418 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      local_497 = bVar19 | 4;
      goto LAB_148e5e093;
    }
  }
  local_418 = local_410;
  FVar15 = local_410;
LAB_148e5e093:
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>
            ((FUserPtrHandler<FNDIDataChannelReadInstanceData> *)&local_400,param_1);
  local_428 = (bool *)((ulonglong)local_428._4_4_ << 0x20);
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_428);
  local_458[0] = 0;
  local_478 = (FNiagaraDataBuffer *)(pfVar9 + (int)local_428 * param_1->PerInstanceFnInstanceIdx);
  local_438 = local_478;
  pFStack_430 = local_478;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_458);
  iVar18 = local_458[0];
  aStack_448 = (atomic<int>)0x0;
  pfVar9 = pfVar9 + local_458[0] * param_1->PerInstanceFnInstanceIdx;
  local_488 = (FName)pfVar9;
  local_460 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&aStack_448);
  aVar4 = aStack_448;
  local_490._0_4_ = (uint)~param_2 >> 0x1f;
  local_470 = (FNiagaraDataBuffer *)(pfVar10 + (int)aStack_448 * param_1->PerInstanceFnInstanceIdx);
  uVar6 = 0;
  if (param_2 < (local_468->CompiledData).FunctionInfo.ArrayNum) {
    uVar6 = local_490._0_4_;
  }
  uVar13 = local_490._0_4_;
  local_450 = local_470;
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar13 = local_490._0_4_;
  }
  this_00 = (FNDIDataChannelReadInstanceData *)CONCAT44(uStack_3f4,aStack_3f8);
  if ((param_2 < 0) || ((this_00->FuncToDataSetBindingInfo).ArrayNum <= param_2)) {
    local_490 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0;
  }
  else {
    local_490 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                &this_00->FuncToDataSetBindingInfo;
    uVar6 = 0;
    if (param_2 < (this_00->FuncToDataSetBindingInfo).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
         ((longlong)local_490 + 0x80) !=
        (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      local_490 = *(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
                   ((longlong)local_490 + 0x80);
    }
    local_490 = *(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
                 ((longlong)local_490 + (longlong)param_2 * 0x10);
  }
  FNDIVariadicOutputHandler<16>::FNDIVariadicOutputHandler<16>
            (&local_378,param_1,(FNDIDataChannel_FunctionToDataSetBinding *)local_490);
  if ((local_468->bReadCurrentFrame == false) || (GNDCReadForcePrevFrame != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pFVar11 = FNDIDataChannelReadInstanceData::GetReadBufferCPU(this_00,bVar5);
  if (((pFVar11 == (FNiagaraDataBuffer *)0x0) ||
      (local_490 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0))
     || (INiagaraModule::bDataChannelsEnabled == false)) {
    FNDIVariadicOutputHandler<16>::Fallback(&local_378,param_1->NumInstances);
    if (0 < iVar18) {
      memset(pfVar9,0,(longlong)param_1->NumInstances << 2);
    }
    if (0 < (int)aVar4) {
      memset(pfVar9,0xff,(longlong)param_1->NumInstances << 2);
    }
  }
  else {
    iVar18 = 0;
    if (0 < param_1->NumInstances) {
      local_468 = (UNiagaraDataInterfaceDataChannelRead *)((longlong)(int)local_428 << 2);
      FVar14 = local_488;
      do {
        aVar17 = (atomic<int>)0xffffffff;
        pFVar12 = (FNiagaraDataBuffer *)
                  ((longlong)&local_478->_padding_ + (longlong)&local_468->_padding_);
        iVar16 = 1;
        plVar3 = &local_478->_padding_;
        local_478 = pFVar12;
        if (*(float *)plVar3 == 0.0) {
LAB_148e5e3c3:
          FNDIVariadicOutputHandler<16>::Fallback(&local_378,1);
        }
        else {
          LOCK();
          paVar1 = &this_00->ConsumeIndex;
          aVar17 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          local_498 = true;
          if (((int)aVar17 < 0) || ((int)pFVar11->NumInstances <= (int)aVar17)) {
            aVar17 = (atomic<int>)0xffffffff;
            LOCK();
            this_00->ConsumeIndex = (atomic<int>)pFVar11->NumInstances;
            UNLOCK();
            goto LAB_148e5e3c3;
          }
          local_440 = &local_498;
          local_3f0 = &local_498;
          pFStack_430 = (FNiagaraDataBuffer *)CONCAT44(pFStack_430._4_4_,aVar17);
          local_428 = &local_498;
          local_3d8._8_8_ = pFStack_430;
          local_3b8._12_4_ = uStack_3f4;
          local_3b8.Index = (int)aVar17;
          local_398._12_4_ = uStack_444;
          local_398.Index = (int)aVar17;
          local_450 = pFVar11;
          aStack_448 = aVar17;
          local_438 = pFVar11;
          local_400 = pFVar11;
          aStack_3f8 = aVar17;
          local_3d8._0_8_ = pFVar11;
          local_3c8 = local_428;
          local_3b8.Data = pFVar11;
          local_3b8.bAllReadsSuccess = local_3f0;
          local_398.Data = pFVar11;
          local_398.bAllReadsSuccess = local_440;
          bVar5 = FNDIVariadicOutputHandler<16>::
                  Process<_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_3>_>
                            (&local_378,true,1,(FNDIDataChannel_FunctionToDataSetBinding *)local_490
                             ,&local_398,&local_3b8,(<lambda_3> *)local_3d8);
          if ((bVar5) && (local_498 != false)) {
            iVar16 = 0;
          }
          if (!bVar5) goto LAB_148e5e3c3;
        }
        pfVar9 = (float *)FVar14;
        if (0 < local_458[0]) {
          pfVar9 = (float *)((longlong)FVar14 + (longlong)local_458[0] * 4);
          *(int *)FVar14 = iVar16 + -1;
        }
        if (0 < (int)aVar4) {
          *(atomic<int> *)&local_470->_padding_ = aVar17;
          local_470 = (FNiagaraDataBuffer *)
                      ((longlong)&local_470->_padding_ + (longlong)(int)aVar4 * 4);
        }
        iVar18 = iVar18 + 1;
        FVar15 = local_418;
        FVar14 = (FName)pfVar9;
      } while (iVar18 < local_3e8->NumInstances);
    }
  }
  if (local_378.HalfOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
    FMemory::Free((void *)local_378.HalfOutputs.AllocatorInstance.SecondaryData);
  }
  if (local_378.IntOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
    FMemory::Free((void *)local_378.IntOutputs.AllocatorInstance.SecondaryData);
  }
  if (local_378.FloatOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
    FMemory::Free((void *)local_378.FloatOutputs.AllocatorInstance.SecondaryData);
  }
  bVar19 = local_497;
  if ((local_497 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar19 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar19 & 4) != 0) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// CopyToInternal @ 148e5f180

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::CopyToInternal
          (UNiagaraDataInterfaceDataChannelRead *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UNiagaraDataChannelAsset *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Channel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannelAsset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)(param_1 + 1) = (this->Channel).field0_0x0;
      FNDIDataChannelCompiledData::operator=
                ((FNDIDataChannelCompiledData *)&param_1[1]._padding_,&this->CompiledData);
      if ((FNDCAccessContextInst *)&param_1[1]._padding_ != &this->AccessContext) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)&param_1[1]._padding_,
                   (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
                   (this->AccessContext).AccessContext.StructMemory);
      }
      *(bool *)&param_1[1]._padding_ = this->bAutoLinkToSpawningNDC;
      *(bool *)((longlong)&param_1[1]._padding_ + 1) = this->bReadCurrentFrame;
      *(bool *)((longlong)&param_1[1]._padding_ + 2) = this->bUpdateSourceDataEveryTick;
      *(bool *)((longlong)&param_1[1]._padding_ + 3) = this->bOverrideSpawnGroupToDataChannelIndex;
      *(bool *)((longlong)&param_1[1]._padding_ + 4) = this->bOnlySpawnOnceOnSubticks;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar6);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// DestroyPerInstanceData @ 148e63240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelData *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
    if (((this->CompiledData).bUsedByGPU != false) &&
       ((this->CompiledData).bSpawnsParticles != false)) {
      pFVar3 = TSharedPtr<FNiagaraDataChannelData,1>::operator->
                         ((TSharedPtr<FNiagaraDataChannelData,1> *)((longlong)param_1 + 0x10));
      LOCK();
      pFVar3->NumGPUSpawningReaders = (atomic<int>)((int)pFVar3->NumGPUSpawningReaders + -1);
      UNLOCK();
    }
    local_a8 = *(undefined8 *)((longlong)param_1 + 0x10);
    pTStack_a0 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  lStack_80 = this->_padding_;
  if (lStack_80 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy722>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 148e641f0

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::Equals
          (UNiagaraDataInterfaceDataChannelRead *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
    if ((bVar2) &&
       ((this->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)param_1[1]._padding_)) {
      bVar2 = FInstancedStruct::Identical
                        (&(this->AccessContext).AccessContext,
                         (FInstancedStruct *)&param_1[1]._padding_,0);
      if (((bVar2) &&
          (((this->bAutoLinkToSpawningNDC == (bool)(char)param_1[1]._padding_ &&
            (this->bReadCurrentFrame == (bool)*(char *)((longlong)&param_1[1]._padding_ + 1))) &&
           (this->bUpdateSourceDataEveryTick == (bool)*(char *)((longlong)&param_1[1]._padding_ + 2)
           )))) && (this->bOverrideSpawnGroupToDataChannelIndex ==
                    (bool)*(char *)((longlong)&param_1[1]._padding_ + 3))) {
        return this->bOnlySpawnOnceOnSubticks ==
               (bool)*(char *)((longlong)&param_1[1]._padding_ + 4);
      }
    }
    return false;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar5);
}

// FindSourceDI @ 148e659d0

UNiagaraDataInterfaceDataChannelWrite * __thiscall
UNiagaraDataInterfaceDataChannelRead::FindSourceDI(UNiagaraDataInterfaceDataChannelRead *this)

{
  return (UNiagaraDataInterfaceDataChannelWrite *)0x0;
}

// GetEmitterDependencies @ 148e68e20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::GetEmitterDependencies
          (UNiagaraDataInterfaceDataChannelRead *this,UNiagaraSystem *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetGpuCountBufferEstimate @ 148e6ca60

uint __thiscall
UNiagaraDataInterfaceDataChannelRead::GetGpuCountBufferEstimate
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return 1;
}

// GetNDCSpawnData @ 148e6d210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::GetNDCSpawnData
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraEmitterID FVar1;
  FNiagaraSystemInstance *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  FNiagaraDataBuffer *pFVar6;
  FNiagaraEmitterInstance *pFVar7;
  FNDIDataChannelRead_EmitterInstanceData *pFVar8;
  int iVar9;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  int local_a0 [2];
  float *local_98;
  int local_90 [2];
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_88;
  float *local_78;
  float *local_70;
  int local_68 [2];
  float *local_60;
  float *pfStack_58;
  int local_50 [2];
  FUserPtrHandler<FNDIDataChannelReadInstanceData> *local_48;
  float **local_40;
  float **local_38;
  float **local_30;
  float **local_28;
  
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_88,param_1);
  iVar9 = 0;
  local_68[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar3 = local_68[0];
  local_50[0] = 0;
  local_60 = (float *)0x0;
  pfStack_58 = (float *)0x0;
  pfVar5 = pfVar5 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar5;
  local_70 = pfVar5;
  local_60 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_b8 = (float *)0x0;
  local_b0[0] = 0;
  local_60 = local_60 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfStack_58 = local_60;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98 = (float *)0x0;
  local_90[0] = 0;
  local_b8 = local_b8 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_a8 = (float *)0x0;
  local_a0[0] = 0;
  local_98 = local_98 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_a8 = local_a8 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  this_00 = (local_88.Ptr)->Owner;
  if ((this_00 == (FNiagaraSystemInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x5a1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->bReadCurrentFrame == false) || (GNDCReadForcePrevFrame != false)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pFVar6 = FNDIDataChannelReadInstanceData::GetReadBufferCPU(local_88.Ptr,bVar4);
  if ((pFVar6 == (FNiagaraDataBuffer *)0x0) || (INiagaraModule::bDataChannelsEnabled == false)) {
    if (0 < param_1->NumInstances) {
      do {
        iVar9 = iVar9 + 1;
        *local_b8 = -NAN;
        *local_a8 = -NAN;
        *local_98 = -NAN;
        local_b8 = local_b8 + local_b0[0];
        local_a8 = local_a8 + local_a0[0];
        local_98 = local_98 + local_90[0];
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else {
    local_48 = &local_88;
    local_40 = &local_60;
    local_38 = &local_b8;
    local_30 = &local_a8;
    local_28 = &local_98;
    if (iVar3 < 1) {
      pFVar7 = FNiagaraSystemInstance::GetEmitterByID(this_00,(FNiagaraEmitterID)*pfVar5);
      pFVar8 = TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
               ::Find((TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
                       *)&(local_88.Ptr)->EmitterInstanceData,pFVar7);
      if (pFVar8 == (FNDIDataChannelRead_EmitterInstanceData *)0x0) {
        if (0 < param_1->NumInstances) {
          do {
            iVar9 = iVar9 + 1;
            *local_b8 = -NAN;
            *local_a8 = -NAN;
            *local_98 = -NAN;
            local_b8 = local_b8 + local_b0[0];
            local_a8 = local_a8 + local_a0[0];
            local_98 = local_98 + local_90[0];
          } while (iVar9 < param_1->NumInstances);
        }
      }
      else if (0 < param_1->NumInstances) {
        do {
          `UNiagaraDataInterfaceDataChannelRead::GetNDCSpawnData'::__l12::<lambda_1>::operator()
                    (&local_48,pFVar8);
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_1->NumInstances);
      }
    }
    else if (0 < param_1->NumInstances) {
      do {
        FVar1.ID = (int)*pfVar5;
        pfVar5 = pfVar5 + iVar3;
        pFVar7 = FNiagaraSystemInstance::GetEmitterByID(this_00,FVar1);
        pFVar8 = TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
                 ::Find((TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
                         *)&(local_88.Ptr)->EmitterInstanceData,pFVar7);
        if (pFVar8 == (FNDIDataChannelRead_EmitterInstanceData *)0x0) {
          *local_b8 = -NAN;
          *local_a8 = -NAN;
          *local_98 = -NAN;
          local_b8 = local_b8 + local_b0[0];
          local_a8 = local_a8 + local_a0[0];
          local_98 = local_98 + local_90[0];
        }
        else {
          `UNiagaraDataInterfaceDataChannelRead::GetNDCSpawnData'::__l12::<lambda_1>::operator()
                    (&local_48,pFVar8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  return;
}

// GetPrivateStaticClass @ 148e6e420

UClass * __cdecl UNiagaraDataInterfaceDataChannelRead::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton;
}

// GetVMExternalFunction @ 148e70a60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction
          (UNiagaraDataInterfaceDataChannelRead *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName *pFVar1;
  uchar uVar2;
  ushort uVar3;
  int iVar4;
  FName FVar5;
  TObjectPtr<UNiagaraDataChannel>_u_0 TVar6;
  UNiagaraDataChannelAsset *pUVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FNiagaraTypeDefinition *pFVar13;
  FNiagaraTypeDefinition *pFVar14;
  FName *pFVar15;
  undefined1 local_518 [8];
  FDelegateAllocation local_510;
  undefined1 local_500 [8];
  FDelegateAllocation local_4f8;
  undefined1 local_4e8 [8];
  FDelegateAllocation local_4e0;
  undefined1 local_4d0 [8];
  FDelegateAllocation local_4c8;
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  undefined1 local_4a0 [8];
  FDelegateAllocation local_498;
  undefined1 local_488 [8];
  FDelegateAllocation local_480;
  undefined1 local_470 [8];
  FDelegateAllocation local_468;
  undefined1 local_458 [8];
  FDelegateAllocation local_450;
  undefined1 local_440 [8];
  FDelegateAllocation local_438;
  undefined1 local_428 [8];
  FDelegateAllocation local_420;
  undefined1 local_410 [8];
  FDelegateAllocation local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FNiagaraVariableBase local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FNiagaraVariableBase local_358;
  UNiagaraDataInterfaceDataChannelRead *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  UNiagaraDataInterfaceDataChannelRead *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  UNiagaraDataInterfaceDataChannelRead *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDestructionSentinel local_2a0;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDelegateAllocation *local_1e0;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar5 = param_1->Name;
  if (FVar5 == NDIDataChannelReadLocal::NAME_Num) {
    local_4d0 = (undefined1  [8])0x0;
    local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
               (FWriteAccessScope *)&local_1f8);
    local_1e0 = &local_4c8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_4c8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`5'::<lambda_1>_>
                  ::_vftable_;
      puVar11[3] = this;
    }
    if (local_1f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
               (FWriteAccessScope *)&local_318);
    if ((local_4c8.DelegateSize != 0) &&
       (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_4c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4c8,0,0,0x10);
      local_4c8.DelegateSize = 0;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_4c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4d0);
  }
  else if (FVar5 == NDIDataChannelUtilities::GetNDCSpawnDataName) {
    local_4b8 = (undefined1  [8])0x0;
    local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)&local_1d8);
    local_1c0 = &local_4b0;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_4b0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`9'::<lambda_2>_>
                  ::_vftable_;
      puVar11[3] = this;
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)&local_300);
    if ((local_4b0.DelegateSize != 0) &&
       (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_4b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4b0,0,0,0x10);
      local_4b0.DelegateSize = 0;
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    if (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_4b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b8);
  }
  else {
    if (FVar5 == NDIDataChannelReadLocal::NAME_SpawnDirect) {
      DecodeVariableFromSpecifiers(&local_358,param_1);
      TVar6 = (((this->Channel).field0_0x0.DebugPtr)->DataChannel).field0_0x0;
      iVar4 = ((TVar6.DebugPtr)->ChannelVariables).ArrayNum;
      pFVar15 = *(FName **)((longlong)TVar6 + 0x28);
      if ((iVar4 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar1 = (FName *)((longlong)pFVar15 + (longlong)iVar4 * 0xc);
      for (; pFVar15 != pFVar1; pFVar15 = (FName *)&pFVar15[1].Number) {
        if (*pFVar15 == local_358.Name) {
          pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)(pFVar15 + 1));
          pFVar14 = FNiagaraTypeDefinitionHandle::Resolve(&local_358.TypeDefHandle);
          if ((((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
                (pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr) &&
              (pFVar13->UnderlyingType == pFVar14->UnderlyingType)) &&
             (pFVar13->Flags == pFVar14->Flags)) {
            FVar5 = *pFVar15;
            pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                ((FNiagaraTypeDefinitionHandle *)(pFVar15 + 1));
            TVar8.ObjectPtr.field0_0x0 =
                 (FObjectPtr)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar8.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(TVar8.DebugPtr);
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
                (pFVar13->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
               (pFVar13->Flags == FNiagaraTypeDefinition::IntDef.Flags)) {
              local_4a0 = (undefined1  [8])0x0;
              local_498.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_498.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
                         (FWriteAccessScope *)&local_1b8);
              local_1a0 = &local_498;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_498);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`19'::<lambda_4>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_1b8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
                         (FWriteAccessScope *)&local_2e8);
              if ((local_498.DelegateSize != 0) &&
                 (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_498.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_498,0,0,0x10);
                local_498.DelegateSize = 0;
              }
              if (local_2e8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
              }
              if (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_498.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_4a0);
              return;
            }
            if ((byte)LogTemp._0_1_ < 4) {
              return;
            }
            pUVar7 = (this->Channel).field0_0x0.DebugPtr;
            if (pUVar7 == (UNiagaraDataChannelAsset *)0x0) {
              ::FString::FString(&local_3e8,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar7,&local_3e8,(UObject *)0x0);
            }
            ::FName::ToString(&param_1->Name,&local_78);
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_398,(UObject *)0x0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
            }
            local_58.Data.AllocatorInstance.Data = local_3e8.Data.AllocatorInstance.Data;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              local_58.Data.AllocatorInstance.Data = local_3e8.Data.AllocatorInstance.Data;
            }
            goto LAB_148e71e21;
          }
        }
      }
      if ((byte)LogTemp._0_1_ < 4) {
        return;
      }
      pUVar7 = (this->Channel).field0_0x0.DebugPtr;
      if (pUVar7 == (UNiagaraDataChannelAsset *)0x0) {
        ::FString::FString(&local_3d8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_3d8,(UObject *)0x0);
      }
      ::FName::ToString(&param_1->Name,&local_68);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_388,(UObject *)0x0);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
      }
    }
    else if (FVar5 == NDIDataChannelReadLocal::NAME_ScaleSpawnCount) {
      DecodeVariableFromSpecifiers(&local_3a8,param_1);
      TVar6 = (((this->Channel).field0_0x0.DebugPtr)->DataChannel).field0_0x0;
      iVar4 = ((TVar6.DebugPtr)->ChannelVariables).ArrayNum;
      pFVar15 = *(FName **)((longlong)TVar6 + 0x28);
      if ((iVar4 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar1 = (FName *)((longlong)pFVar15 + (longlong)iVar4 * 0xc);
      for (; pFVar15 != pFVar1; pFVar15 = (FName *)&pFVar15[1].Number) {
        if (*pFVar15 == local_3a8.Name) {
          pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)(pFVar15 + 1));
          pFVar14 = FNiagaraTypeDefinitionHandle::Resolve(&local_3a8.TypeDefHandle);
          if ((((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
                (pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr) &&
              (pFVar13->UnderlyingType == pFVar14->UnderlyingType)) &&
             (pFVar13->Flags == pFVar14->Flags)) {
            FVar5 = *pFVar15;
            pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                ((FNiagaraTypeDefinitionHandle *)(pFVar15 + 1));
            TVar8.ObjectPtr.field0_0x0 =
                 (FObjectPtr)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar8.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(TVar8.DebugPtr);
            }
            uVar3 = pFVar13->UnderlyingType;
            uVar2 = pFVar13->Flags;
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeDefinition::IntDef.Flags)) {
              local_488 = (undefined1  [8])0x0;
              local_480.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_480.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_488,
                         (FWriteAccessScope *)&local_198);
              local_180 = &local_480;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_480);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`68'::<lambda_6>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_198.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_488,
                         (FWriteAccessScope *)&local_2d0);
              if ((local_480.DelegateSize != 0) &&
                 (local_480.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_480.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_480,0,0,0x10);
                local_480.DelegateSize = 0;
              }
              if (local_2d0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
              }
              if (local_480.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_480.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_488);
              return;
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeHelper::DoubleDef.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeHelper::DoubleDef.Flags)) {
              local_470 = (undefined1  [8])0x0;
              local_468.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_468.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
                         (FWriteAccessScope *)&local_178);
              local_160 = &local_468;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_468);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`71'::<lambda_7>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_178.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
                         (FWriteAccessScope *)&local_2b8);
              if ((local_468.DelegateSize != 0) &&
                 (local_468.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_468.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_468,0,0,0x10);
                local_468.DelegateSize = 0;
              }
              if (local_2b8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
              }
              if (local_468.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_468.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_470);
              return;
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeHelper::Vector2DDef.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeHelper::Vector2DDef.Flags)) {
              local_458 = (undefined1  [8])0x0;
              local_450.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_450.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_458,
                         (FWriteAccessScope *)&local_158);
              local_140 = &local_450;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_450);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`74'::<lambda_8>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_158.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_458,
                         (FWriteAccessScope *)&local_2a0);
              if ((local_450.DelegateSize != 0) &&
                 (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_450.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_450,0,0,0x10);
                local_450.DelegateSize = 0;
              }
              if (local_2a0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
              }
              if (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_450.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_458);
              return;
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeHelper::VectorDef.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeHelper::VectorDef.Flags)) {
              local_440 = (undefined1  [8])0x0;
              local_438.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_438.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
                         (FWriteAccessScope *)&local_138);
              local_120 = &local_438;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_438);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`77'::<lambda_9>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_138.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
                         (FWriteAccessScope *)&local_288);
              if ((local_438.DelegateSize != 0) &&
                 (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_438.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_438,0,0,0x10);
                local_438.DelegateSize = 0;
              }
              if (local_288.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
              }
              if (local_438.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_438.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_440);
              return;
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeHelper::Vector4Def.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeHelper::Vector4Def.Flags)) {
              local_428 = (undefined1  [8])0x0;
              local_420.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_420.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_428,
                         (FWriteAccessScope *)&local_118);
              local_100 = &local_420;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_420);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`80'::<lambda_10>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_118.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_428,
                         (FWriteAccessScope *)&local_270);
              if ((local_420.DelegateSize != 0) &&
                 (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_420.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_420,0,0,0x10);
                local_420.DelegateSize = 0;
              }
              if (local_270.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
              }
              if (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_420.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_428);
              return;
            }
            if ((((TObjectPtr<UObject>_u_0)TVar8.DebugPtr ==
                  FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
                (uVar3 == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
               (uVar2 == FNiagaraTypeDefinition::PositionDef.Flags)) {
              local_500 = (undefined1  [8])0x0;
              local_4f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_4f8.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_500,
                         (FWriteAccessScope *)&local_f8);
              local_e0 = &local_4f8;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_4f8);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::`83'::<lambda_11>_>
                            ::_vftable_;
                puVar11[3] = this;
                *(FName *)(puVar11 + 4) = FVar5;
              }
              if (local_f8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_500);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_500,
                         (FWriteAccessScope *)&local_258);
              if ((local_4f8.DelegateSize != 0) &&
                 (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_4f8.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_4f8,0,0,0x10);
                local_4f8.DelegateSize = 0;
              }
              if (local_258.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
              }
              if (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_4f8.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_500);
              return;
            }
            if ((byte)LogTemp._0_1_ < 4) {
              return;
            }
            pUVar7 = (this->Channel).field0_0x0.DebugPtr;
            if (pUVar7 == (UNiagaraDataChannelAsset *)0x0) {
              ::FString::FString(&local_3c8,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar7,&local_3c8,(UObject *)0x0);
            }
            ::FName::ToString(&param_1->Name,&local_38);
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_378,(UObject *)0x0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Data.AllocatorInstance.Data);
            }
            local_58.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
              local_58.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
            }
            goto LAB_148e71e21;
          }
        }
      }
      if ((byte)LogTemp._0_1_ < 4) {
        return;
      }
      pUVar7 = (this->Channel).field0_0x0.DebugPtr;
      if (pUVar7 == (UNiagaraDataChannelAsset *)0x0) {
        ::FString::FString(&local_3b8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_3b8,(UObject *)0x0);
      }
      ::FName::ToString(&param_1->Name,&local_48);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_368,(UObject *)0x0);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
      }
    }
    else {
      iStack_340 = FNDIDataChannelCompiledData::FindFunctionInfoIndex
                             (&this->CompiledData,FVar5,&param_1->VariadicInputs,
                              &param_1->VariadicOutputs);
      FVar5 = param_1->Name;
      if (FVar5 == NDIDataChannelReadLocal::NAME_Read) {
        local_4e8 = (undefined1  [8])0x0;
        local_4e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_4e0.DelegateSize = 0;
        local_348 = this;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
                   (FWriteAccessScope *)&local_d8);
        local_c0 = &local_4e0;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_4e0);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::A]::<lambda_12>_>
                      ::_vftable_;
          puVar11[3] = local_348;
          puVar11[4] = CONCAT44(uStack_33c,iStack_340);
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
                   (FWriteAccessScope *)&local_240);
        if ((local_4e0.DelegateSize != 0) &&
           (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_4e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_4e0,0,0,0x10);
          local_4e0.DelegateSize = 0;
        }
        if (local_240.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
        }
        if (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_4e0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_4e8);
        return;
      }
      if (FVar5 == NDIDataChannelReadLocal::NAME_Consume) {
        local_518 = (undefined1  [8])0x0;
        local_510.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_510.DelegateSize = 0;
        local_338 = this;
        iStack_330 = iStack_340;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                   (FWriteAccessScope *)&local_b8);
        local_a0 = &local_510;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_510);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::E]::<lambda_13>_>
                      ::_vftable_;
          puVar11[3] = local_338;
          puVar11[4] = CONCAT44(uStack_32c,iStack_330);
        }
        if (local_b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_518);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                   (FWriteAccessScope *)&local_228);
        if ((local_510.DelegateSize != 0) &&
           (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_510.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_510,0,0,0x10);
          local_510.DelegateSize = 0;
        }
        if (local_228.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
        }
        if (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_510.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_518);
        return;
      }
      if (FVar5 == NDIDataChannelReadLocal::NAME_SpawnConditional) {
        local_410 = (undefined1  [8])0x0;
        local_408.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_408.DelegateSize = 0;
        local_328 = this;
        iStack_320 = iStack_340;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_410,
                   (FWriteAccessScope *)&local_98);
        local_80 = &local_408;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_408);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::I]::<lambda_14>_>
                      ::_vftable_;
          puVar11[3] = local_328;
          puVar11[4] = CONCAT44(uStack_31c,iStack_320);
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_410,
                   (FWriteAccessScope *)&local_210);
        if ((local_408.DelegateSize != 0) &&
           (local_408.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_408.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_408,0,0,0x10);
          local_408.DelegateSize = 0;
        }
        if (local_210.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
        }
        if (local_408.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_408.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_410);
        return;
      }
      if ((byte)LogTemp._0_1_ < 4) {
        return;
      }
      ::FName::ToString(&param_1->Name,&local_58);
      if (this == (UNiagaraDataInterfaceDataChannelRead *)0x0) {
        ::FString::FString(&local_3f8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_3f8,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Could_not_find__151d12d48,
                 (FLogCategoryBase *)&LogTemp);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
    }
LAB_148e71e21:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HasPostSimulateTick @ 148e72960

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::HasPostSimulateTick
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return true;
}

// HasPostStageTick @ 148e72990

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::HasPostStageTick
          (UNiagaraDataInterfaceDataChannelRead *this,ENiagaraScriptUsage param_1)

{
  return (param_1 - EmitterUpdateScript & 0xfd) == 0;
}

// HasPreSimulateTick @ 148e729d0

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::HasPreSimulateTick(UNiagaraDataInterfaceDataChannelRead *this)

{
  return true;
}

// HasTickGroupPrereqs @ 148e72c10

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::HasTickGroupPrereqs
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *pUVar2;
  
  if ((uint)GNDCReadForceTG < 8) {
    return true;
  }
  pUVar1 = (this->Channel).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
     (pUVar2 = (pUVar1->DataChannel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannel *)0x0)) {
    return pUVar2->bEnforceTickGroupReadWriteOrder;
  }
  return false;
}

// InitAccessContext @ 148e74140

void __thiscall
UNiagaraDataInterfaceDataChannelRead::InitAccessContext(UNiagaraDataInterfaceDataChannelRead *this)

{
  TObjectPtr<UNiagaraDataChannelAsset>_u_0 TVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  longlong *plVar4;
  UScriptStruct *pUVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  TVar1 = (this->Channel).field0_0x0;
  if (((TVar1.DebugPtr == (UNiagaraDataChannelAsset *)0x0) ||
      (plVar2 = *(longlong **)((longlong)TVar1 + 0x28), plVar2 == (longlong *)0x0)) ||
     (this->bAutoLinkToSpawningNDC != false)) {
    FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
    return;
  }
  plVar4 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(plVar2,local_res8);
  pUVar3 = (UScriptStruct *)*plVar4;
  pUVar5 = FNDCAccessContextLegacy::StaticStruct();
  if (pUVar3 == pUVar5) {
    FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  }
  else if ((((this->AccessContext).AccessContext.StructMemory == (uchar *)0x0) ||
           (pUVar5 = (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
           pUVar5 == (UScriptStruct *)0x0)) || (pUVar3 != pUVar5)) {
    puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x2b0))(plVar2,local_res8);
    FInstancedStruct::InitializeAs
              (&(this->AccessContext).AccessContext,(UScriptStruct *)*puVar6,(uchar *)0x0);
    return;
  }
  return;
}

// InitPerInstanceData @ 148e74f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::InitPerInstanceData
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  bool bVar1;
  
  *(undefined ***)param_1 = &___7FNDIDataChannelReadInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 8;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  if (INiagaraModule::bDataChannelsEnabled != false) {
    bVar1 = FNDIDataChannelReadInstanceData::Tick(param_1,this,param_2,true);
    return bVar1;
  }
  return false;
}

// Num @ 148e756a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::Num
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  FNiagaraDataBuffer *pFVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int local_20 [2];
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_18,param_1);
  iVar5 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar6 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((this->bReadCurrentFrame == false) || (GNDCReadForcePrevFrame != false)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pFVar2 = FNDIDataChannelReadInstanceData::GetReadBufferCPU(local_18.Ptr,bVar3);
  fVar4 = 0.0;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) &&
     (fVar4 = 0.0, INiagaraModule::bDataChannelsEnabled != false)) {
    fVar4 = (float)pFVar2->NumInstances;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar6;
    do {
      iVar5 = iVar5 + 1;
      *pfVar1 = fVar4;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// PerInstanceDataSize @ 148e75a90

int __thiscall
UNiagaraDataInterfaceDataChannelRead::PerInstanceDataSize
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return 0x120;
}

// PerInstanceTick @ 148e76040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::PerInstanceTick
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Tick> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res18 [4];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  FVar9 = StatPtr_STAT_NDIDataChannelRead_Tick;
  if (StatPtr_STAT_NDIDataChannelRead_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Tick>)0x0) {
    pFVar8 = ::FName::FName(&local_58,"STAT_NDIDataChannelRead_Tick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Tick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Tick,*pFVar8,
                       L"NDIDataChannelRead Tick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
                       L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_148e76192:
    bVar4 = false;
    FVar12 = local_50;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar11.Value;
        local_68.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                   ,0x2e2);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e76192;
    local_60.s.LowPart = FVar11.Value;
    local_60.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  if (param_2 == (FNiagaraSystemInstance *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                       ,0x2e3,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled != false) && (param_1 != (void *)0x0)) {
    bVar6 = FNDIDataChannelReadInstanceData::Tick(param_1,this,param_2,false);
    if (bVar6) {
      bVar6 = false;
      goto LAB_148e761ed;
    }
  }
  bVar6 = true;
LAB_148e761ed:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar6;
}

// PerInstanceTickPostSimulate @ 148e765e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_PostTick> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res18 [2];
  FName local_58;
  LARGE_INTEGER local_50;
  FName local_48;
  FName local_40;
  FStatMessage local_30;
  
  FVar9 = StatPtr_STAT_NDIDataChannelRead_PostTick;
  if (StatPtr_STAT_NDIDataChannelRead_PostTick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_PostTick>)0x0) {
    pFVar8 = ::FName::FName(&local_48,"STAT_NDIDataChannelRead_PostTick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_PostTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_PostTick,
                       *pFVar8,L"NDIDataChannelRead PostTick","STATGROUP_NiagaraDataChannels",
                       "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar11.Value;
        local_58.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                   ,0x2fa);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_50.s.LowPart = FVar11.Value;
      local_50.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_148e76736;
    }
  }
  bVar4 = false;
  FVar12 = local_40;
LAB_148e76736:
  if (param_2 == (FNiagaraSystemInstance *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                       ,0x2fb,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if ((INiagaraModule::bDataChannelsEnabled == false) || (param_1 == (void *)0x0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_30.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_30.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_50);
      local_30.StatData.Pad[4] = '\0';
      local_30.StatData.Pad[5] = '\0';
      local_30.StatData.Pad[6] = '\0';
      local_30.StatData.Pad[7] = '\0';
      local_30.StatData.Pad[0] = local_50.s.LowPart._0_1_;
      local_30.StatData.Pad[1] = local_50.s.LowPart._1_1_;
      local_30.StatData.Pad[2] = local_50.s.LowPart._2_1_;
      local_30.StatData.Pad[3] = local_50.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_30);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar6;
}

// PostInitProperties @ 148e76be0

void __thiscall
UNiagaraDataInterfaceDataChannelRead::PostInitProperties(UNiagaraDataInterfaceDataChannelRead *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) && (INiagaraModule::bDataChannelsEnabled != false)) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowNotUserVariable);
  }
  return;
}

// PostLoad @ 148e76d30

void __thiscall
UNiagaraDataInterfaceDataChannelRead::PostLoad(UNiagaraDataInterfaceDataChannelRead *this)

{
  UNiagaraDataChannelAsset *this_00;
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  this_00 = (this->Channel).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraDataChannelAsset *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000148e76d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x460))(this);
  return;
}

// PostSimulateCanOverlapFrames @ 148e77860

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::PostSimulateCanOverlapFrames
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return false;
}

// PostStageCanOverlapTickGroups @ 148e77a10

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::PostStageCanOverlapTickGroups
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return false;
}

// PostStageTick @ 148e77a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::PostStageTick
          (UNiagaraDataInterfaceDataChannelRead *this,FNDICpuPrePostStageContext *param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType FVar10;
  void *pvVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  longlong lVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  int iVar24;
  ForAnyElementType *pFVar25;
  longlong lVar26;
  float fVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType *local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  undefined4 local_164;
  uint local_160 [2];
  void *local_158;
  int local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong *local_120;
  undefined8 uStack_118;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  local_158 = param_1->PerInstanceData;
  if ((local_158 == (void *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x314,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((param_1->Usage != EmitterUpdateScript) && (param_1->Usage != SystemUpdateScript)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.Usage == ENiagaraScriptUsage::EmitterUpdateScript || Context.Usage == ENiagaraScriptUsage::SystemUpdateScript"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x315,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pvVar11 = local_158;
  iVar22 = 0;
  local_100._0_4_ = 0;
  uVar13 = 1;
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_158 + 0xd8);
  *(undefined4 *)((longlong)local_158 + 0xc4) = 0xffffffff;
  iVar15 = *(int *)((longlong)local_158 + 0xf0);
  plVar4 = (longlong *)((longlong)local_158 + 200);
  uStack_108._4_4_ = 0;
  if (iVar15 != 0) {
    pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_158 + 0xe8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_158 + 0xe8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar23 = pTVar3;
    }
    uVar14 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar17 = (longlong)iVar22;
      local_100._0_4_ = (int)local_100 + 0x20;
      iVar22 = iVar22 + 1;
      uStack_108._4_4_ = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_148e77b72;
      uVar14 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar17 * 4 + 4);
    }
    uVar13 = -uVar14 & uVar14;
    uVar7 = (ulonglong)uVar13 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_e0 = (int)lVar17;
    uStack_108._4_4_ = (int)local_100 + -1 + local_e0;
    if (iVar15 < uStack_108._4_4_) {
      uStack_108._4_4_ = iVar15;
    }
  }
LAB_148e77b72:
  uVar14 = *(uint *)((longlong)local_158 + 0xf0);
  bVar16 = (byte)uVar14 & 0x1f;
  uStack_14c = 1 << bVar16;
  iStack_f8 = *(int *)((longlong)local_158 + 0xd0) - *(int *)((longlong)local_158 + 0xfc);
  uVar20 = uVar14 & 0xffffffe0;
  iVar24 = (int)uVar14 >> 5;
  uVar19 = -1 << bVar16;
  uStack_118 = CONCAT44(uVar13,iVar22);
  uStack_108._0_4_ = 0xffffffff;
  local_100._4_4_ = local_5c;
  TStack_d0._padding_ = uStack_118;
  uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_108._4_4_;
  TStack_d0.BaseBitIndex = (int)local_100;
  TStack_d0._28_4_ = local_5c;
  local_150 = iVar24;
  pTStack_148 = pTVar3;
  local_140 = uVar19;
  uStack_13c = uVar14;
  uStack_138 = uVar20;
  local_d8 = plVar4;
  TStack_d0.Array = pTVar3;
  if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
     (local_120 = plVar4, local_110 = pTVar3,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = __real_4f000000;
  uVar13 = *(uint *)((longlong)pvVar11 + 0xf0);
  if (uVar14 != uVar13) {
    pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar11 + 0xe8);
    if (pTVar23 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar23 = pTVar3;
    }
    uVar19 = uVar19 & *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar24 * 4);
    while (uVar19 == 0) {
      uStack_138 = uVar20 + 0x20;
      local_150 = iVar24 + 1;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_150)
      goto LAB_148e77caa;
      uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar24 * 4 + 4);
      local_140 = 0xffffffff;
      uVar20 = uStack_138;
      iVar24 = local_150;
    }
    uStack_14c = -uVar19 & uVar19;
    uVar7 = (ulonglong)uStack_14c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_dc = (int)lVar17;
    uStack_13c = local_dc + -1 + uVar20;
    if ((int)uVar13 < (int)uStack_13c) {
LAB_148e77caa:
      uStack_13c = uVar13;
    }
  }
  uStack_118 = CONCAT44(uStack_14c,local_150);
  uStack_108 = CONCAT44(uStack_13c,local_140);
  local_100 = CONCAT44(uStack_134,uStack_138);
  iStack_f8 = *(int *)((longlong)local_158 + 0xd0) - *(int *)((longlong)local_158 + 0xfc);
  local_110 = pTStack_148;
  uStack_80 = CONCAT44(uStack_f4,iStack_f8);
  local_98 = pTStack_148;
  local_120 = plVar4;
  local_a8 = plVar4;
  uStack_a0 = uStack_118;
  uStack_90 = uStack_108;
  local_88 = local_100;
  do {
    plVar4 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_d0.CurrentBitIndex == uStack_90._4_4_) && (TStack_d0.Array == local_98)) &&
       (plVar4 == local_a8)) {
      return;
    }
    lVar17 = *plVar4;
    pFVar18 = (ForAnyElementType *)(lVar17 + 8 + (longlong)TStack_d0.CurrentBitIndex * 0x70);
    plVar4 = *(longlong **)((longlong)TStack_d0.CurrentBitIndex * 0x70 + lVar17);
    if ((plVar4 == (longlong *)0x0) || (iVar15 = *(int *)&pFVar18[0xb].Data, iVar15 == 0)) {
      iVar15 = *(int *)((longlong)&pFVar18[0xb].Data + 4);
      *(undefined4 *)&pFVar18[0xb].Data = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,pFVar18 + 10,0,(int *)((longlong)&pFVar18[0xb].Data + 4));
      }
      iVar15 = *(int *)((longlong)&pFVar18[1].Data + 4);
      *(undefined4 *)&pFVar18[1].Data = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar18,0,(int *)((longlong)&pFVar18[1].Data + 4));
      }
      pFVar18[2].Data = (FScriptContainerElement *)0x0;
      pFVar18[3].Data = (FScriptContainerElement *)0x0;
      pFVar18[4].Data = (FScriptContainerElement *)0x0;
      pFVar18[5].Data = (FScriptContainerElement *)0x0;
      pFVar18[6].Data = (FScriptContainerElement *)0x0;
      pFVar18[7].Data = (FScriptContainerElement *)0x0;
      pFVar18[8].Data = (FScriptContainerElement *)0x0;
      pFVar18[9].Data = (FScriptContainerElement *)0x0;
    }
    else {
      iVar22 = *(int *)((longlong)local_158 + 0xc4);
      if (*(int *)((longlong)local_158 + 0xc4) == -1) {
        *(int *)((longlong)local_158 + 0xc4) = iVar15;
        iVar22 = iVar15;
      }
      if ((*(int *)&pFVar18[0xb].Data != iVar22) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("EmitterInstData.NDCSpawnCounts.Num() == InstanceData->NDCElementCountAtSpawn"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                              ,0x328,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = *(uint *)&pFVar18[0xb].Data;
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar13,&local_178,0,(int *)((longlong)&local_170 + 4));
      }
      pFVar21 = pFVar18[10].Data;
      iVar15 = *(int *)&pFVar18[0xb].Data;
      pFVar5 = pFVar21 + (longlong)iVar15 * 8;
      while( true ) {
        if (*(int *)&pFVar18[0xb].Data != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNDIDataChannelRead_EmitterSpawnInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar21 == pFVar5) break;
        fVar27 = (float)*(uint *)pFVar21 * *(float *)(pFVar21 + 4);
        if (fVar9 <= (float)*(uint *)pFVar21 * *(float *)(pFVar21 + 4)) {
          fVar27 = fVar9;
        }
        local_164 = (undefined4)(longlong)fVar27;
        if (((local_178.Data <= (FScriptContainerElement *)&local_164) &&
            ((FScriptContainerElement *)&local_164 < local_178.Data + (longlong)local_170._4_4_ * 4)
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((int)local_170 == local_170._4_4_) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_178,(int *)((longlong)&local_170 + 4));
          local_170 = CONCAT44(local_170._4_4_,iVar22);
        }
        lVar17 = (longlong)(int)local_170;
        pFVar21 = pFVar21 + 8;
        local_170 = CONCAT44(local_170._4_4_,(int)local_170 + 1);
        *(undefined4 *)(local_178.Data + lVar17 * 4) = local_164;
      }
      iVar15 = *(int *)((longlong)&pFVar18[0xb].Data + 4);
      *(undefined4 *)&pFVar18[0xb].Data = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,pFVar18 + 10,0,(int *)((longlong)&pFVar18[0xb].Data + 4));
      }
      iVar15 = *(int *)((longlong)&pFVar18[1].Data + 4);
      piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
      *(undefined4 *)&pFVar18[1].Data = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar18,0,piVar1);
      }
      local_res20 = pFVar18 + 2;
      local_res20->Data = (FScriptContainerElement *)0x0;
      pFVar18[3].Data = (FScriptContainerElement *)0x0;
      pFVar18[4].Data = (FScriptContainerElement *)0x0;
      pFVar18[5].Data = (FScriptContainerElement *)0x0;
      pFVar18[6].Data = (FScriptContainerElement *)0x0;
      pFVar18[7].Data = (FScriptContainerElement *)0x0;
      pFVar18[8].Data = (FScriptContainerElement *)0x0;
      pFVar18[9].Data = (FScriptContainerElement *)0x0;
      lVar17 = (**(code **)(*plVar4 + 0x68))(plVar4);
      if (lVar17 != 0) {
        uVar13 = 0;
        if (this->bOverrideSpawnGroupToDataChannelIndex == false) {
          iVar15 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          if (0 < (int)local_170) {
            lVar26 = 0;
            iVar22 = (int)local_170;
            do {
              uVar14 = 0;
              if ((int)uVar13 < iVar22) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if (uVar14 == 0) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar22 = (int)local_170;
              }
              uVar13 = uVar13 + 1;
              iVar15 = iVar15 + *(int *)(local_178.Data + lVar26);
              lVar26 = lVar26 + 4;
              local_f0 = CONCAT44(local_f0._4_4_,iVar15);
            } while ((int)uVar13 < iVar22);
          }
          iVar15 = *(int *)(lVar17 + 0x198);
          if (iVar15 == *(int *)(lVar17 + 0x19c)) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)(lVar17 + 400),(int *)(lVar17 + 0x19c));
          }
          *(int *)(lVar17 + 0x198) = iVar15 + 1;
          puVar6 = (undefined8 *)(*(longlong *)(lVar17 + 400) + (longlong)iVar15 * 0x10);
          *puVar6 = local_f0;
          puVar6[1] = uStack_e8;
          iVar15 = (int)local_170;
        }
        else {
          local_130 = 0;
          uStack_128 = 0;
          iVar15 = (int)local_170;
          if (0 < (int)local_170) {
            lVar26 = 0;
            do {
              uVar14 = 0;
              if ((int)uVar13 < iVar15) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if (uVar14 == 0) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar15 = (int)local_170;
              }
              if (*(int *)(local_178.Data + lVar26) != 0) {
                iVar15 = *(int *)(lVar17 + 0x198);
                local_130 = CONCAT44(local_130._4_4_,*(int *)(local_178.Data + lVar26));
                uStack_128 = CONCAT44(uVar13,(undefined4)uStack_128);
                if (iVar15 == *(int *)(lVar17 + 0x19c)) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x410,(ForAnyElementType *)(lVar17 + 400),
                                      (int *)(lVar17 + 0x19c));
                }
                *(int *)(lVar17 + 0x198) = iVar15 + 1;
                puVar6 = (undefined8 *)(*(longlong *)(lVar17 + 400) + (longlong)iVar15 * 0x10);
                *puVar6 = local_130;
                puVar6[1] = uStack_128;
                iVar15 = (int)local_170;
              }
              uVar13 = uVar13 + 1;
              lVar26 = lVar26 + 4;
            } while ((int)uVar13 < iVar15);
          }
        }
        pFVar25 = local_res20;
        if ((this->CompiledData).bNeedsSpawnDataTable != false) {
          uVar13 = 0;
          if (0 < iVar15) {
            lVar17 = 0;
            do {
              uVar14 = 0;
              if ((int)uVar13 < iVar15) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar14 = *(uint *)(local_178.Data + lVar17);
              local_160[0] = uVar14;
              if (((pFVar18->Data <= (FScriptContainerElement *)local_160) &&
                  ((FScriptContainerElement *)local_160 < pFVar18->Data + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar15 = *(int *)&pFVar18[1].Data;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar18,piVar1);
              }
              *(int *)&pFVar18[1].Data = iVar15 + 1;
              uVar13 = uVar13 + 1;
              lVar17 = lVar17 + 4;
              *(uint *)(pFVar18->Data + (longlong)iVar15 * 4) = local_160[0];
              *(uint *)&pFVar25->Data = *(int *)&pFVar25->Data + (uVar14 >> 0xf);
              piVar2 = (int *)((longlong)&pFVar25->Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x7fff) >> 0xe);
              *(uint *)&pFVar25[1].Data = *(int *)&pFVar25[1].Data + ((uVar14 & 0x3fff) >> 0xd);
              piVar2 = (int *)((longlong)&pFVar25[1].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x1fff) >> 0xc);
              *(uint *)&pFVar25[2].Data = *(int *)&pFVar25[2].Data + ((uVar14 & 0xfff) >> 0xb);
              piVar2 = (int *)((longlong)&pFVar25[2].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x7ff) >> 10);
              *(uint *)&pFVar25[3].Data = *(int *)&pFVar25[3].Data + ((uVar14 & 0x3ff) >> 9);
              piVar2 = (int *)((longlong)&pFVar25[3].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x1ff) >> 8);
              *(uint *)&pFVar25[4].Data = *(int *)&pFVar25[4].Data + ((uVar14 & 0xff) >> 7);
              piVar2 = (int *)((longlong)&pFVar25[4].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x7f) >> 6);
              *(uint *)&pFVar25[5].Data = *(int *)&pFVar25[5].Data + ((uVar14 & 0x3f) >> 5);
              piVar2 = (int *)((longlong)&pFVar25[5].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 0x1f) >> 4);
              *(uint *)&pFVar25[6].Data = *(int *)&pFVar25[6].Data + ((uVar14 & 0xf) >> 3);
              piVar2 = (int *)((longlong)&pFVar25[6].Data + 4);
              *piVar2 = *piVar2 + ((uVar14 & 7) >> 2);
              *(uint *)&pFVar25[7].Data = *(int *)&pFVar25[7].Data + ((uVar14 & 3) >> 1);
              piVar2 = (int *)((longlong)&pFVar25[7].Data + 4);
              *piVar2 = *piVar2 + (uVar14 & 1);
              iVar15 = (int)local_170;
            } while ((int)uVar13 < (int)local_170);
          }
          iVar22 = 0;
          do {
            local_res20 = (ForAnyElementType *)
                          CONCAT44(local_res20._4_4_,*(undefined4 *)&pFVar18[1].Data);
            uVar13 = 0x8000 >> ((byte)iVar22 & 0x1f);
            local_168 = 0;
            if (0 < iVar15) {
              do {
                uVar14 = local_168;
                uVar19 = 0;
                if ((int)local_168 < iVar15) {
                  uVar19 = ~local_168 >> 0x1f;
                }
                if (uVar19 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar15 = (int)local_170;
                }
                FVar10.Data = local_178.Data;
                lVar17 = (longlong)(int)uVar14;
                uVar14 = *(uint *)(local_178.Data + lVar17 * 4);
                if (uVar13 <= uVar14) {
                  do {
                    *(uint *)(FVar10.Data + lVar17 * 4) = uVar14 - uVar13;
                    if (((pFVar18->Data <= (FScriptContainerElement *)&local_168) &&
                        ((FScriptContainerElement *)&local_168 <
                         pFVar18->Data + (longlong)*piVar1 * 4)) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar15 = *(int *)&pFVar18[1].Data;
                    if (iVar15 == *piVar1) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,pFVar18,piVar1);
                    }
                    *(int *)&pFVar18[1].Data = iVar15 + 1;
                    *(uint *)(pFVar18->Data + (longlong)iVar15 * 4) = local_168;
                    uVar14 = *(uint *)(FVar10.Data + lVar17 * 4);
                  } while (uVar13 <= uVar14);
                  iVar15 = (int)local_170;
                }
                local_168 = local_168 + 1;
              } while ((int)local_168 < iVar15);
            }
            if (*(int *)&pFVar18[1].Data - (int)local_res20 != *(int *)&pFVar25->Data) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EndSize - StartSize == SpawnDataBuckets[Bucket]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                                  ,900,L"");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar15 = (int)local_170;
            }
            iVar22 = iVar22 + 1;
            pFVar25 = (ForAnyElementType *)((longlong)&pFVar25->Data + 4);
          } while (iVar22 < 0x10);
        }
      }
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  } while( true );
}

// ProvidePerInstanceDataForRenderThread @ 148e78f50

void __thiscall
UNiagaraDataInterfaceDataChannelRead::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceDataChannelRead *this,void *param_1,void *param_2,ulong64 *param_3)

{
  int *piVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  FNiagaraDataChannelLayoutInfo *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  UNiagaraDataInterfaceDataChannelRead *pUVar12;
  void *pvVar13;
  longlong *plVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  UObject *pUVar20;
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  int iVar29;
  uint uVar30;
  ForAnyElementType *pFVar31;
  uint uVar32;
  uint uVar33;
  UNiagaraDataInterfaceDataChannelRead *local_res8;
  undefined1 local_res10 [8];
  void *local_res18;
  int local_178;
  uint local_174;
  uint local_160;
  undefined4 uStack_124;
  undefined8 local_108;
  TReferenceControllerBase<1> *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_88 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  
  local_res8 = this;
  local_res18 = param_2;
  memset(param_1,0,0xa8);
  local_160 = 1;
  uVar30 = local_160;
  (((FVariadicParameterGPUScriptInfo *)((longlong)param_1 + 0x18))->GPUScriptParameterOffsetTable).
  _padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x90);
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  lVar23 = *(longlong *)((longlong)param_2 + 0x10);
  if (lVar23 == 0) {
    puVar25 = &local_98;
    uVar22 = 0;
    bVar16 = true;
    local_98 = 0;
    pTStack_90 = (TReferenceControllerBase<1> *)0x0;
    bVar11 = false;
  }
  else {
    uVar22 = *(undefined8 *)(lVar23 + 0x48);
    local_100 = *(TReferenceControllerBase<1> **)(lVar23 + 0x50);
    if (local_100 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar25 = &local_108;
    bVar11 = true;
    bVar16 = false;
    local_108 = uVar22;
  }
  if (param_1 != puVar25) {
    *(undefined8 *)param_1 = uVar22;
    *puVar25 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),(FSharedReferencer<1> *)(puVar25 + 1)
              );
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  }
  pUVar12 = local_res8;
  if ((local_res8->bReadCurrentFrame == false) || (GNDCReadForcePrevFrame != false)) {
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x10) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)local_res18 + 0xc4);
  if ((*(char *)((longlong)local_res18 + 0x28) != '\0') &&
     (INiagaraModule::bDataChannelsEnabled != false)) {
    *(undefined1 *)((longlong)local_res18 + 0x28) = 0;
    pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)local_res18 + 8));
    this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar20[1].field_0x8);
    if ((this_00 == (UNiagaraDataChannel *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ret",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                            ,0x3a,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar21 = UNiagaraDataChannel::GetLayoutInfo(this_00,local_88);
    if ((pTVar21->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar8 = pTVar21->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88[0].SharedReferenceCount.ReferenceController);
    FVariadicParameterGPUScriptInfo::Init
              ((FVariadicParameterGPUScriptInfo *)((longlong)param_1 + 0x18),&pUVar12->CompiledData,
               &pFVar8->CompiledDataGPU);
  }
  pvVar13 = local_res18;
  local_160 = 1;
  pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_res18 + 0xd8);
  iVar19 = *(int *)((longlong)local_res18 + 0xf0);
  plVar5 = (longlong *)((longlong)local_res18 + 200);
  iVar27 = 0;
  iVar29 = 0;
  iVar17 = 0;
  if (iVar19 != 0) {
    pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res18 + 0xe8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res18 + 0xe8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar28 = pTVar4;
    }
    uVar32 = *(uint *)(pTVar28->AllocatorInstance).InlineData;
    while (uVar32 == 0) {
      lVar23 = (longlong)iVar27;
      iVar29 = iVar29 + 0x20;
      iVar27 = iVar27 + 1;
      iVar17 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_148e791c6;
      uVar32 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar23 * 4 + 4);
    }
    local_160 = -uVar32 & uVar32;
    uVar6 = (ulonglong)local_160 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar17 = (int)lVar23 + -1 + iVar29;
    if (iVar19 < iVar17) {
      iVar17 = iVar19;
    }
  }
LAB_148e791c6:
  local_174 = *(uint *)((longlong)local_res18 + 0xf0);
  TStack_f0._padding_ = CONCAT44(local_160,iVar27);
  uVar32 = local_174 & 0xffffffe0;
  TStack_f0.CurrentBitIndex = iVar17;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)local_174 >> 5;
  TStack_f0._28_4_ = local_5c;
  TStack_f0.BaseBitIndex = iVar29;
  uStack_d0 = CONCAT44(uStack_124,
                       *(int *)((longlong)local_res18 + 0xd0) -
                       *(int *)((longlong)local_res18 + 0xfc));
  local_f8 = plVar5;
  TStack_f0.Array = pTVar4;
  if ((((int)local_174 < 0) || (iVar19 < (int)local_174)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar18 = *(uint *)((longlong)pvVar13 + 0xf0);
  if (local_174 != uVar18) {
    pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar28 = pTVar4;
    }
    uVar33 = -1 << ((byte)local_174 & 0x1f) &
             *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
    while (uVar33 == 0) {
      lVar23 = (longlong)iVar27;
      uVar32 = uVar32 + 0x20;
      iVar27 = iVar27 + 1;
      local_174 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_148e792e4;
      uVar33 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar23 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_174 = (int)lVar23 + -1 + uVar32;
    if ((int)uVar18 < (int)local_174) {
      local_174 = uVar18;
    }
  }
LAB_148e792e4:
  iVar19 = 0;
  iVar27 = iVar19;
  while( true ) {
    plVar14 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_res8 = (UNiagaraDataInterfaceDataChannelRead *)
                   ((ulonglong)local_res8 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_f0.CurrentBitIndex == local_174) && (TStack_f0.Array == pTVar4)) &&
       (plVar14 == plVar5)) break;
    lVar23 = *plVar14;
    lVar9 = *(longlong *)((longlong)TStack_f0.CurrentBitIndex * 0x70 + lVar23);
    iVar29 = iVar19;
    if (lVar9 != 0) {
      iVar27 = iVar27 + *(int *)((longlong)TStack_f0.CurrentBitIndex * 0x70 + 0x10 + lVar23) + 0x10;
      iVar29 = *(int *)(lVar9 + 200);
      if (iVar29 < iVar19) {
        iVar29 = iVar19;
      }
    }
    iVar19 = iVar29;
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  uVar32 = iVar19 + 1 + iVar27;
  piVar1 = (int *)((longlong)param_1 + 0x98);
  piVar2 = (int *)((longlong)param_1 + 0x9c);
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  iVar27 = 0;
  *piVar1 = 0;
  if (*piVar2 < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar32,pFVar3,0,piVar2);
  }
  iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar19 + 1,pFVar3,piVar1,piVar2);
  memset(pFVar3->Data + (longlong)iVar29 * 4,0,(longlong)(iVar19 + 1) << 2);
  local_178 = *piVar1;
  iVar19 = *(int *)((longlong)pvVar13 + 0xf0);
  iVar29 = iVar27;
  iVar17 = iVar27;
  local_160 = uVar30;
  if (iVar19 != 0) {
    pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar28 = pTVar4;
    }
    uVar30 = *(uint *)(pTVar28->AllocatorInstance).InlineData;
    while (uVar30 == 0) {
      lVar23 = (longlong)iVar27;
      iVar29 = iVar29 + 0x20;
      iVar27 = iVar27 + 1;
      iVar17 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_148e79480;
      uVar30 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar23 * 4 + 4);
    }
    local_160 = -uVar30 & uVar30;
    uVar6 = (ulonglong)local_160 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar17 = iVar29 + -1 + (int)lVar23;
    if (iVar19 < iVar17) {
      iVar17 = iVar19;
    }
  }
LAB_148e79480:
  uVar30 = *(uint *)((longlong)local_res18 + 0xf0);
  uVar32 = uVar30 & 0xffffffe0;
  TStack_c0.CurrentBitIndex = iVar17;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(local_160,iVar27);
  iVar27 = (int)uVar30 >> 5;
  TStack_c0._28_4_ = local_3c;
  TStack_c0.BaseBitIndex = iVar29;
  uStack_a0 = CONCAT44(uStack_124,
                       *(int *)((longlong)local_res18 + 0xd0) -
                       *(int *)((longlong)local_res18 + 0xfc));
  local_c8 = plVar5;
  TStack_c0.Array = pTVar4;
  if ((((int)uVar30 < 0) || (iVar19 < (int)uVar30)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar18 = *(uint *)((longlong)pvVar13 + 0xf0);
  if (uVar30 != uVar18) {
    pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)pvVar13 + 0xe8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar28 = pTVar4;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) &
             *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
    while (uVar30 == 0) {
      lVar23 = (longlong)iVar27;
      uVar32 = uVar32 + 0x20;
      iVar27 = iVar27 + 1;
      uVar30 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_148e795b0;
      uVar30 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar23 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar30 = (int)lVar23 + -1 + uVar32;
    if ((int)uVar18 < (int)uVar30) {
      uVar30 = uVar18;
    }
  }
LAB_148e795b0:
  while( true ) {
    plVar14 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar30) && (TStack_c0.Array == pTVar4)) &&
       (plVar14 == plVar5)) break;
    lVar24 = (longlong)TStack_c0.CurrentBitIndex * 0x70;
    lVar23 = *plVar14;
    lVar9 = *(longlong *)(lVar24 + lVar23);
    if ((lVar9 != 0) &&
       (pFVar31 = (ForAnyElementType *)(lVar23 + 8 + lVar24), *(longlong *)(lVar9 + 0x18) != 0)) {
      iVar19 = *(int *)(lVar24 + 0x10 + lVar23);
      uVar32 = *(uint *)(lVar9 + 200);
      uVar18 = 0;
      if ((int)uVar32 < *piVar1) {
        uVar18 = ~uVar32 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(int *)(pFVar3->Data + (longlong)(int)uVar32 * 4) = local_178;
      local_178 = local_178 + iVar19 + 0x10;
      pFVar26 = (FScriptContainerElement *)(pFVar31 + 2);
      lVar23 = 0x10;
      do {
        if (((pFVar3->Data <= pFVar26) && (pFVar26 < pFVar3->Data + (longlong)*piVar2 * 4)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = *piVar1;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar3,piVar2);
        }
        *piVar1 = iVar19 + 1;
        uVar7 = *(undefined4 *)pFVar26;
        pFVar26 = pFVar26 + 4;
        *(undefined4 *)(pFVar3->Data + (longlong)iVar19 * 4) = uVar7;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      if ((pFVar3 == pFVar31) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)&pFVar31[1].Data;
      if (iVar19 != 0) {
        iVar27 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar19,pFVar3,piVar1,piVar2);
        memcpy(pFVar3->Data + (longlong)iVar27 * 4,pFVar31->Data,(longlong)iVar19 << 2);
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return;
}

// Read @ 148e79bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::Read
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  code *pcVar1;
  FNDIDataChannelReadInstanceData *this_00;
  FNDIDataChannel_FunctionToDataSetBinding *pFVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Read> FVar7;
  float *pfVar8;
  FNiagaraDataBuffer *pFVar9;
  uint uVar10;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar11;
  float fVar12;
  FName FVar13;
  int iVar14;
  byte bVar15;
  longlong lVar16;
  FNiagaraDataBuffer *_Dst;
  FNiagaraDataBuffer *pFVar17;
  undefined1 auStackY_4d8 [32];
  bool local_478;
  byte local_477;
  FName local_470;
  FNDIDataChannel_FunctionToDataSetBinding *local_468;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> local_460;
  FNiagaraDataBuffer *local_458;
  float fStack_450;
  undefined4 uStack_44c;
  bool *local_448;
  FNiagaraDataBuffer *local_440;
  FNiagaraDataBuffer *pFStack_438;
  undefined8 local_430;
  FName local_428;
  UNiagaraDataInterfaceDataChannelRead *local_420;
  FName local_418;
  FName local_410;
  FNiagaraDataBuffer *local_400;
  float fStack_3f8;
  undefined4 uStack_3f4;
  bool *local_3f0;
  FName local_3e8 [2];
  undefined1 local_3d8 [16];
  bool *local_3c8;
  <lambda_2> local_3b8;
  <lambda_1> local_398;
  FNDIVariadicOutputHandler<16> local_378;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  FVar7 = StatPtr_STAT_NDIDataChannelRead_Read;
  local_420 = this;
  if (StatPtr_STAT_NDIDataChannelRead_Read ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Read>)0x0) {
    pFVar6 = ::FName::FName(local_3e8,"STAT_NDIDataChannelRead_Read");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Read>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Read,*pFVar6,
                       L"NDIDataChannelRead Read","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
                       L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar15 = 0;
  local_410.ComparisonIndex.Value = 0;
  local_410.Number = 0;
  local_477 = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_468 = (FNDIDataChannel_FunctionToDataSetBinding *)
                  ((ulonglong)local_468 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_468,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar15 = 1;
      local_477 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_428.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_428.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_428,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                   ,0x631);
        bVar15 = 3;
        local_477 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_470 = FVar13;
      local_418 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar15 = bVar15 | 4;
      local_477 = bVar15;
      goto LAB_148e79d4b;
    }
  }
  local_418 = local_410;
  FVar13 = local_410;
LAB_148e79d4b:
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>
            ((FUserPtrHandler<FNDIDataChannelReadInstanceData> *)&local_400,param_1);
  local_430 = (bool *)((ulonglong)local_430._4_4_ << 0x20);
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_430);
  fStack_450 = 0.0;
  local_470 = (FName)(pfVar8 + (int)local_430 * param_1->PerInstanceFnInstanceIdx);
  local_440 = (FNiagaraDataBuffer *)local_470;
  pFStack_438 = (FNiagaraDataBuffer *)local_470;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&fStack_450);
  fVar3 = fStack_450;
  _Dst = (FNiagaraDataBuffer *)(pfVar8 + (int)fStack_450 * param_1->PerInstanceFnInstanceIdx);
  local_460._0_4_ = (uint)~param_2 >> 0x1f;
  uVar5 = 0;
  if (param_2 < (local_420->CompiledData).FunctionInfo.ArrayNum) {
    uVar5 = local_460._0_4_;
  }
  uVar10 = local_460._0_4_;
  local_458 = _Dst;
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar10 = local_460._0_4_;
  }
  this_00 = (FNDIDataChannelReadInstanceData *)CONCAT44(uStack_3f4,fStack_3f8);
  if ((param_2 < 0) || ((this_00->FuncToDataSetBindingInfo).ArrayNum <= param_2)) {
    local_468 = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
  }
  else {
    local_460 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                &this_00->FuncToDataSetBindingInfo;
    uVar5 = 0;
    if (param_2 < (this_00->FuncToDataSetBindingInfo).ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar11 = *(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
              ((longlong)local_460 + 0x80);
    if (*(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
         ((longlong)local_460 + 0x80) ==
        (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar11 = local_460;
    }
    local_468 = *(FNDIDataChannel_FunctionToDataSetBinding **)
                 ((longlong)FVar11 + (longlong)param_2 * 0x10);
  }
  FNDIVariadicOutputHandler<16>::FNDIVariadicOutputHandler<16>(&local_378,param_1,local_468);
  if ((local_420->bReadCurrentFrame == false) || (GNDCReadForcePrevFrame != false)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pFVar9 = FNDIDataChannelReadInstanceData::GetReadBufferCPU(this_00,bVar4);
  pFVar2 = local_468;
  if (((pFVar9 == (FNiagaraDataBuffer *)0x0) ||
      (local_468 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0)) ||
     (INiagaraModule::bDataChannelsEnabled == false)) {
    FNDIVariadicOutputHandler<16>::Fallback(&local_378,param_1->NumInstances);
    if (0 < (int)fVar3) {
      memset(_Dst,0,(longlong)param_1->NumInstances << 2);
    }
  }
  else {
    iVar14 = 0;
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)(int)local_430;
      do {
        fStack_450 = *(float *)(longlong *)local_470;
        local_448 = &local_478;
        local_3f0 = &local_478;
        pFStack_438 = (FNiagaraDataBuffer *)CONCAT44(pFStack_438._4_4_,fStack_450);
        local_430 = &local_478;
        local_3d8._8_8_ = pFStack_438;
        local_3b8._12_4_ = uStack_3f4;
        local_3b8.Index = (int)fStack_450;
        local_398._12_4_ = uStack_44c;
        local_398.Index = (int)fStack_450;
        local_478 = true;
        local_470 = (FName)((longlong)(longlong *)local_470 + lVar16 * 4);
        local_458 = pFVar9;
        local_440 = pFVar9;
        local_400 = pFVar9;
        fStack_3f8 = fStack_450;
        local_3d8._0_8_ = pFVar9;
        local_3c8 = local_430;
        local_3b8.Data = pFVar9;
        local_3b8.bAllReadsSuccess = local_3f0;
        local_398.Data = pFVar9;
        local_398.bAllReadsSuccess = local_448;
        bVar4 = FNDIVariadicOutputHandler<16>::
                Process<_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_3>_>
                          (&local_378,(uint)fStack_450 < pFVar9->NumInstances,1,pFVar2,&local_398,
                           &local_3b8,(<lambda_3> *)local_3d8);
        if ((bVar4) && (local_478 != false)) {
          fVar12 = -NAN;
        }
        else {
          fVar12 = 0.0;
        }
        pFVar17 = _Dst;
        if (0 < (int)fVar3) {
          pFVar17 = (FNiagaraDataBuffer *)((longlong)&_Dst->_padding_ + (longlong)(int)fVar3 * 4);
          *(float *)&_Dst->_padding_ = fVar12;
        }
        iVar14 = iVar14 + 1;
        FVar13 = local_418;
        _Dst = pFVar17;
        bVar15 = local_477;
      } while (iVar14 < param_1->NumInstances);
    }
  }
  if (local_378.HalfOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
    FMemory::Free((void *)local_378.HalfOutputs.AllocatorInstance.SecondaryData);
  }
  if (local_378.IntOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
    FMemory::Free((void *)local_378.IntOutputs.AllocatorInstance.SecondaryData);
  }
  if (local_378.FloatOutputs.AllocatorInstance.SecondaryData !=
      (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
    FMemory::Free((void *)local_378.FloatOutputs.AllocatorInstance.SecondaryData);
  }
  if ((bVar15 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar15 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar15 & 4) != 0) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// RequiresCurrentFrameNDC @ 148e7bc00

bool __thiscall
UNiagaraDataInterfaceDataChannelRead::RequiresCurrentFrameNDC
          (UNiagaraDataInterfaceDataChannelRead *this)

{
  return this->bReadCurrentFrame;
}

// Serialize @ 148e7c670

void __thiscall
UNiagaraDataInterfaceDataChannelRead::Serialize
          (UNiagaraDataInterfaceDataChannelRead *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (iVar1 < 0x56) {
    this->bOverrideSpawnGroupToDataChannelIndex = true;
  }
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 148e7c6d0

void __thiscall
UNiagaraDataInterfaceDataChannelRead::Serialize
          (UNiagaraDataInterfaceDataChannelRead *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FNiagaraCustomVersion::GUID);
  if (iVar1 < 0x56) {
    this->bOverrideSpawnGroupToDataChannelIndex = true;
  }
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  return;
}

// SetShaderParameters @ 148e7db80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::SetShaderParameters
          (UNiagaraDataInterfaceDataChannelRead *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraShaderScript *pFVar2;
  FScriptContainerElement *_Src;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  FInstanceData *pFVar9;
  FShaderParametersMetadata *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRHIShaderResourceView *pFVar12;
  FRDGBuffer *pFVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  size_t _Size;
  FNiagaraCompileHash local_38;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar8 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar9 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                   *)(pFVar1 + 1),uVar8);
  uVar16 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar10 = TShaderParameterStructTypeInfo<NDIDataChannelReadLocal::FShaderParameters>::
            GetStructMetadata();
  bVar5 = false;
  bVar6 = false;
  plVar17 = (longlong *)(param_1->BaseParameters + uVar16);
  param_1->ParametersOffset = pFVar10->Size + uVar16;
  if (pFVar9 != (FInstanceData *)0x0) {
    pFVar2 = param_1->ComputeInstanceData->Context->GPUScript_RT;
    local_38.DataHash.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DataHash.ArrayNum = (pFVar2->BaseCompileHash).DataHash.ArrayNum;
    _Size = (size_t)local_38.DataHash.ArrayNum;
    _Src = (pFVar2->BaseCompileHash).DataHash.AllocatorInstance.Data;
    if (local_38.DataHash.ArrayNum == 0) {
      local_38.DataHash.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.DataHash.ArrayNum,0,(ForAnyElementType *)&local_38,
                 local_38.DataHash.ArrayNum,&local_38.DataHash.ArrayMax);
      memcpy(local_38.DataHash.AllocatorInstance.Data,_Src,_Size);
    }
    iVar18 = -1;
    uVar16 = FNiagaraCompileHash::GetTypeHash(&local_38);
    iVar7 = TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FNiagaraCompileHash>
                      ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pFVar9->GPUScriptParameterTableOffsets,uVar16,&local_38);
    if (iVar7 != -1) {
      lVar14 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar9->GPUScriptParameterTableOffsets;
      piVar15 = (int *)(lVar14 + 0x10);
      if (lVar14 == 0) {
        piVar15 = (int *)0x0;
      }
      if (piVar15 != (int *)0x0) {
        iVar18 = *piVar15;
      }
    }
    if (((((pFVar9->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0) &&
         (iVar18 != -1)) &&
        (pFVar3 = (pFVar9->GPUBuffer).Reference, pFVar3 != (FNiagaraDataBuffer *)0x0)) &&
       (((pFVar11 = FRDGBuilder::CreateSRV
                              (param_1->GraphBuilder,pFVar9->NDCSpawnDataBuffer,PF_R32_SINT),
         bVar6 = bVar5, pFVar11 != (FRDGBufferSRV *)0x0 &&
         (pFVar12 = (pFVar9->ParameterLayoutBuffer).SRV.Reference,
         pFVar12 != (FRHIShaderResourceView *)0x0)) &&
        ((pFVar9->ParameterLayoutBuffer).NumBytes != 0)))) {
      *plVar17 = (longlong)pFVar12;
      *(int *)(plVar17 + 1) = iVar18;
      *(uint *)((longlong)plVar17 + 0xc) = pFVar3->FloatStride >> 2;
      *(uint *)(plVar17 + 2) = pFVar3->Int32Stride >> 2;
      pFVar12 = (pFVar3->GPUBufferFloat).SRV.Reference;
      if (pFVar12 == (FRHIShaderResourceView *)0x0) {
        pFVar12 = FNiagaraRenderer::GetDummyFloatBuffer();
      }
      plVar17[3] = (longlong)pFVar12;
      pFVar12 = (pFVar3->GPUBufferInt).SRV.Reference;
      if (pFVar12 == (FRHIShaderResourceView *)0x0) {
        pFVar12 = FNiagaraRenderer::GetDummyIntBuffer();
      }
      plVar17[4] = (longlong)pFVar12;
      bVar6 = true;
      *(uint *)(plVar17 + 5) = pFVar3->GPUInstanceCountBufferOffset;
      *(uint *)((longlong)plVar17 + 0x2c) = pFVar9->ConsumeInstanceCountOffset;
      *(uint *)(plVar17 + 6) = pFVar3->NumInstancesAllocated;
      *(int *)((longlong)plVar17 + 0x34) = pFVar9->NDCElementCountAtSpawn;
      plVar17[7] = (longlong)pFVar11;
    }
    if (local_38.DataHash.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataHash.AllocatorInstance.Data);
    }
    if (bVar6) {
      return;
    }
  }
  pFVar12 = FNiagaraRenderer::GetDummyUIntBuffer();
  *plVar17 = (longlong)pFVar12;
  *(undefined4 *)(plVar17 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)plVar17 + 0xc) = 0;
  pFVar12 = FNiagaraRenderer::GetDummyFloatBuffer();
  plVar17[3] = (longlong)pFVar12;
  pFVar12 = FNiagaraRenderer::GetDummyIntBuffer();
  plVar17[4] = (longlong)pFVar12;
  plVar17[5] = -1;
  *(undefined4 *)(plVar17 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)plVar17 + 0x34) = 0;
  pFVar13 = FSystemTextures::GetDefaultBuffer
                      ((FSystemTextures *)&GSystemTextures,param_1->GraphBuilder,4,0);
  pFVar11 = FRDGBuilder::CreateSRV(param_1->GraphBuilder,pFVar13,PF_R32_SINT);
  plVar17[7] = (longlong)pFVar11;
  return;
}

// SpawnConditional @ 148e80b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelRead::SpawnConditional
          (UNiagaraDataInterfaceDataChannelRead *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this_00;
  float *pfVar1;
  ForElementType<FNDIInputParam<float>_> FVar2;
  ForElementType<FNDIInputParam<int>_> FVar3;
  ForElementType<FNDIInputParam<FFloat16>_> FVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  FNiagaraSystemInstance *this_01;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraSystemSimulation *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Spawn> FVar14;
  float *pfVar15;
  TRefCountPtr<FNiagaraDataBuffer> TVar16;
  longlong *plVar17;
  uint uVar18;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar19;
  uint uVar20;
  undefined1 *puVar21;
  int iVar22;
  FVectorVMExternalFunctionContext *this_02;
  ForElementType<FNDIInputParam<float>_> FVar23;
  ForElementType<FNDIInputParam<int>_> FVar24;
  ForElementType<FNDIInputParam<FFloat16>_> FVar25;
  longlong lVar26;
  FName FVar27;
  byte bVar28;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *this_03;
  FName FVar29;
  undefined1 auStackY_748 [32];
  bool local_6e8;
  byte local_6e7;
  undefined1 local_6e6;
  undefined1 local_6e5;
  undefined1 local_6e4 [4];
  FVectorVMExternalFunctionContext *local_6e0;
  FName local_6d8;
  float local_6d0;
  FColor_u_0 local_6cc;
  int local_6c8;
  float local_6c4;
  float local_6c0;
  float local_6bc;
  FNDIDataChannel_FunctionToDataSetBinding *local_6b8;
  FName local_6b0;
  FNiagaraEmitterInstance *local_6a8;
  FName local_6a0;
  FName local_698;
  float *local_688;
  float *local_680;
  int local_678 [2];
  float *local_670;
  float *local_668;
  int local_660 [2];
  float *local_658;
  float *local_650;
  int local_648 [2];
  float *local_640;
  float *local_638;
  int local_630 [2];
  float *local_628;
  float *local_620;
  int local_618 [2];
  FUserPtrHandler<FNDIDataChannelReadInstanceData> local_610;
  FNiagaraEmitterInstance **local_600;
  longlong local_5f8;
  longlong local_5f0;
  float *local_5e8;
  float *local_5e0;
  int local_5d8 [2];
  bool *local_5d0;
  float fStack_5c8;
  undefined4 uStack_5c4;
  FName local_5c0;
  uint uStack_5b8;
  undefined4 uStack_5b4;
  bool *local_5b0;
  float fStack_5a8;
  undefined4 uStack_5a4;
  FName local_5a0;
  uint uStack_598;
  undefined4 uStack_594;
  bool *local_590;
  float fStack_588;
  undefined4 uStack_584;
  FName local_580;
  uint uStack_578;
  undefined4 uStack_574;
  FName local_570;
  <lambda_3> local_568;
  <lambda_2> local_548;
  <lambda_1> local_528;
  FNDIVariadicInputHandler<16> local_508;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_6d0 = 0.0;
  FVar14 = StatPtr_STAT_NDIDataChannelRead_Spawn;
  local_6e0 = param_1;
  if (StatPtr_STAT_NDIDataChannelRead_Spawn ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Spawn>)0x0) {
    pFVar13 = ::FName::FName(&local_570,"STAT_NDIDataChannelRead_Spawn");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Spawn>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Spawn,*pFVar13
                        ,L"NDIDataChannelRead Spawn","STATGROUP_NiagaraDataChannels",
                        "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar27 = *(FName *)FVar14;
  bVar28 = 0;
  local_698.ComparisonIndex.Value = 0;
  local_698.Number = 0;
  local_6e7 = 0;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_6cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6cc._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar28 = 1;
      local_6e7 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_6b0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_6b0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6b0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                   ,0x6f9);
        bVar28 = 3;
        local_6e7 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_6d8 = FVar27;
      local_6a0 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      local_6e7 = bVar28 | 4;
      goto LAB_148e80ca7;
    }
  }
  local_6a0 = local_698;
  FVar27 = local_698;
LAB_148e80ca7:
  this_02 = local_6e0;
  if ((local_6e0->NumInstances != 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetNumInstances() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x6fe,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
  FUserPtrHandler<FNDIDataChannelReadInstanceData>(&local_610,this_02);
  this_01 = (local_610.Ptr)->Owner;
  if (this_01 != (FNiagaraSystemInstance *)0x0) {
    if ((param_2 < 0) || (((local_610.Ptr)->FuncToDataSetBindingInfo).ArrayNum <= param_2)) {
      local_6b8 = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
    }
    else {
      uVar18 = 0;
      if (param_2 < ((local_610.Ptr)->FuncToDataSetBindingInfo).ArrayNum) {
        uVar18 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar19 = ((local_610.Ptr)->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
        FVar19 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                 &(local_610.Ptr)->FuncToDataSetBindingInfo;
      }
      local_6b8 = *(FNDIDataChannel_FunctionToDataSetBinding **)
                   ((longlong)FVar19 + (longlong)param_2 * 0x10);
      this_02 = local_6e0;
    }
    local_678[0] = 0;
    local_688 = FVectorVMExternalFunctionContext::GetNextRegister(this_02,local_678);
    local_5d8[0] = 0;
    local_688 = local_688 + local_678[0] * this_02->PerInstanceFnInstanceIdx;
    local_680 = local_688;
    pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(this_02,local_5d8);
    lVar26 = (longlong)local_5d8[0];
    local_660[0] = 0;
    pfVar15 = pfVar15 + local_5d8[0] * this_02->PerInstanceFnInstanceIdx;
    local_5e0 = pfVar15;
    local_670 = FVectorVMExternalFunctionContext::GetNextRegister(local_6e0,local_660);
    local_648[0] = 0;
    local_670 = local_670 + local_660[0] * local_6e0->PerInstanceFnInstanceIdx;
    local_668 = local_670;
    local_658 = FVectorVMExternalFunctionContext::GetNextRegister(local_6e0,local_648);
    local_630[0] = 0;
    local_658 = local_658 + local_648[0] * local_6e0->PerInstanceFnInstanceIdx;
    local_650 = local_658;
    local_640 = FVectorVMExternalFunctionContext::GetNextRegister(local_6e0,local_630);
    local_618[0] = 0;
    local_640 = local_640 + local_630[0] * local_6e0->PerInstanceFnInstanceIdx;
    local_638 = local_640;
    local_628 = FVectorVMExternalFunctionContext::GetNextRegister(local_6e0,local_618);
    local_628 = local_628 + local_618[0] * local_6e0->PerInstanceFnInstanceIdx;
    local_620 = local_628;
    FNDIVariadicInputHandler<16>::FNDIVariadicInputHandler<16>(&local_508,local_6e0,local_6b8);
    local_5e8 = pfVar15 + lVar26;
    local_6a8 = FNiagaraSystemInstance::GetEmitterByID(this_01,(FNiagaraEmitterID)*pfVar15);
    FVar29 = (FName)((local_610.Ptr)->DataChannelData).Object;
    if (FVar29 != (FName)0x0) {
      TVar16 = FNiagaraDataChannelData::GetCPUData
                         ((FNiagaraDataChannelData *)FVar29,SUB81(&local_5f0,0));
      local_6d8 = (FName)(TVar16.Reference)->_padding_;
      FVar29 = local_6d8;
      if (local_5f0 != 0) {
        if ((*(int *)(local_5f0 + 8) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsBeingRead()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x2c,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        LOCK();
        *(int *)(local_5f0 + 8) = *(int *)(local_5f0 + 8) + -1;
        UNLOCK();
        FVar29 = local_6d8;
      }
    }
    local_6d8 = FVar29;
    pTVar7 = (this_01->SystemSimulation).SharedReferenceCount.ReferenceController;
    pFVar8 = (this_01->SystemSimulation).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar8 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FVar29 = local_6d8;
    if (this->bOnlySpawnOnceOnSubticks == false) {
      bVar11 = true;
    }
    else {
      bVar11 = (pFVar8->TickInfo).TickNumber == (pFVar8->TickInfo).TickCount + -1;
    }
    if ((INiagaraModule::bDataChannelsEnabled != false) && (local_6d8 != (FName)0x0)) {
      iVar22 = *(int *)((longlong)local_6d8 + 0x124);
      if ((iVar22 != 0) &&
         ((((local_6a8 != (FNiagaraEmitterInstance *)0x0 && (local_6a8->ExecutionState == Active))
           && (fVar6 = *local_688, local_688 = local_688 + local_678[0], fVar6 != 0.0)) && (bVar11))
         )) {
        local_6c4 = *local_670;
        local_670 = local_670 + local_660[0];
        pfVar15 = local_658 + local_648[0];
        local_6c0 = *local_658;
        local_658 = pfVar15;
        if (((iVar22 != 0) && (local_6c4 != 2.8026e-45)) && ((uint)local_6c4 < 3)) {
          lVar26 = 0;
          pfVar15 = local_640 + local_630[0];
          local_6d0 = *local_640;
          if ((int)local_6d0 < 0) {
            local_6d0 = 0.0;
          }
          pfVar1 = local_628 + local_618[0];
          local_6bc = *local_628;
          if ((int)*local_628 < 0) {
            local_6bc = 0.0;
          }
          this_03 = &(local_610.Ptr)->EmitterInstanceData;
          uVar18 = ((uint)((ulonglong)local_6a8 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_6a8 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          uVar18 = uVar18 >> 0x10 ^ uVar18;
          local_640 = pfVar15;
          local_628 = pfVar1;
          if (*(int *)&((local_610.Ptr)->EmitterInstanceData).field_0x8 !=
              *(int *)&((local_610.Ptr)->EmitterInstanceData).field_0x34) {
            puVar21 = *(undefined1 **)&((local_610.Ptr)->EmitterInstanceData).field_0x40;
            if (puVar21 == (undefined1 *)0x0) {
              puVar21 = &((local_610.Ptr)->EmitterInstanceData).field_0x38;
            }
            iVar12 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&((local_610.Ptr)->EmitterInstanceData).field_0x48 - 1U &
                             uVar18) * 4);
            if (iVar12 != -1) {
              do {
                plVar17 = (longlong *)((longlong)iVar12 * 0x70 + *(longlong *)&this_03->field_0x0);
                if ((FNiagaraEmitterInstance *)*plVar17 == local_6a8) {
                  if (plVar17 != (longlong *)0x0) goto LAB_148e81128;
                  break;
                }
                iVar12 = (int)plVar17[0xd];
              } while (iVar12 != -1);
            }
          }
          local_600 = &local_6a8;
          TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FNiagaraEmitterInstance_*_const_&>_>
                    ((TSet<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>,FDefaultSetAllocator>
                      *)this_03,(uint)&local_6c8,
                     (TKeyInitializer<FNiagaraEmitterInstance_*_const_&> *)(ulonglong)uVar18,
                     (bool *)&local_600);
          plVar17 = (longlong *)((longlong)local_6c8 * 0x70 + *(longlong *)&this_03->field_0x0);
LAB_148e81128:
          this_00 = (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *)
                    (plVar17 + 0xb);
          TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
                    (this_00,iVar22,Default);
          fVar10 = local_6c4;
          fVar6 = __real_3f800000;
          uVar18 = 0;
          local_5f8 = (longlong)iVar22;
          if (0 < iVar22) {
            do {
              local_590 = &local_6e8;
              local_5b0 = &local_6e8;
              fStack_5c8 = local_6c0;
              fStack_5a8 = local_6c0;
              fStack_588 = local_6c0;
              local_5d0 = &local_6e8;
              local_568._12_4_ = uStack_5c4;
              local_568.Op = (ENiagaraConditionalOperator)local_6c0;
              local_548._12_4_ = uStack_5a4;
              local_548.Op = (ENiagaraConditionalOperator)local_6c0;
              local_568._28_4_ = uStack_5b4;
              local_568.DataChannelIdx = uVar18;
              local_528._12_4_ = uStack_584;
              local_528.Op = (ENiagaraConditionalOperator)local_6c0;
              local_548._28_4_ = uStack_594;
              local_548.DataChannelIdx = uVar18;
              local_528._28_4_ = uStack_574;
              local_528.DataChannelIdx = uVar18;
              local_6e8 = true;
              local_5c0 = FVar29;
              uStack_5b8 = uVar18;
              local_5a0 = FVar29;
              uStack_598 = uVar18;
              local_580 = FVar29;
              uStack_578 = uVar18;
              local_568.bConditionsPass = local_5d0;
              local_568.Data = (FNiagaraDataBuffer *)FVar29;
              local_548.bConditionsPass = local_5b0;
              local_548.Data = (FNiagaraDataBuffer *)FVar29;
              local_528.bConditionsPass = local_590;
              local_528.Data = (FNiagaraDataBuffer *)FVar29;
              FNDIVariadicInputHandler<16>::
              Process<_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_3>_>
                        (&local_508,true,1,local_6b8,&local_528,&local_548,&local_568);
              iVar22 = local_508.FloatInputs.ArrayNum;
              FVar23 = (ForElementType<FNDIInputParam<float>_>)&local_508;
              if (local_508.FloatInputs.AllocatorInstance.SecondaryData !=
                  (ForElementType<FNDIInputParam<float>_>)0x0) {
                FVar23 = local_508.FloatInputs.AllocatorInstance.SecondaryData;
              }
              FVar2 = (ForElementType<FNDIInputParam<float>_>)
                      ((longlong)FVar23 + (longlong)iVar22 * 0x18);
              while( true ) {
                if (local_508.FloatInputs.ArrayNum != iVar22) {
                  local_6e6 = 0;
                  `TCheckedPointerIterator<FNDIInputParam<float>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_6e6);
                }
                if (FVar23 == FVar2) break;
                *(undefined8 *)FVar23 = *(undefined8 *)((longlong)FVar23 + 8);
                FVar23 = (ForElementType<FNDIInputParam<float>_>)((longlong)FVar23 + 0x18);
              }
              iVar22 = local_508.IntInputs.ArrayNum;
              FVar24 = (ForElementType<FNDIInputParam<int>_>)&local_508.IntInputs;
              if (local_508.IntInputs.AllocatorInstance.SecondaryData !=
                  (ForElementType<FNDIInputParam<int>_>)0x0) {
                FVar24 = local_508.IntInputs.AllocatorInstance.SecondaryData;
              }
              FVar3 = (ForElementType<FNDIInputParam<int>_>)
                      ((longlong)FVar24 + (longlong)iVar22 * 0x18);
              while( true ) {
                if (local_508.IntInputs.ArrayNum != iVar22) {
                  local_6e5 = 0;
                  `TCheckedPointerIterator<FNDIInputParam<int>,int,0>::operator!='::__l2::<lambda_1>
                  ::operator()(&local_6e5);
                }
                if (FVar24 == FVar3) break;
                *(undefined8 *)FVar24 = *(undefined8 *)((longlong)FVar24 + 8);
                FVar24 = (ForElementType<FNDIInputParam<int>_>)((longlong)FVar24 + 0x18);
              }
              iVar22 = local_508.HalfInputs.ArrayNum;
              FVar25 = (ForElementType<FNDIInputParam<FFloat16>_>)&local_508.HalfInputs;
              if (local_508.HalfInputs.AllocatorInstance.SecondaryData !=
                  (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
                FVar25 = local_508.HalfInputs.AllocatorInstance.SecondaryData;
              }
              FVar4 = (ForElementType<FNDIInputParam<FFloat16>_>)
                      ((longlong)FVar25 + (longlong)iVar22 * 0x18);
              while( true ) {
                if (local_508.HalfInputs.ArrayNum != iVar22) {
                  local_6e4[0] = 0;
                  `TCheckedPointerIterator<FNDIInputParam<FFloat16>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_6e4);
                }
                if (FVar25 == FVar4) break;
                *(undefined8 *)FVar25 = *(undefined8 *)((longlong)FVar25 + 8);
                FVar25 = (ForElementType<FNDIInputParam<FFloat16>_>)((longlong)FVar25 + 0x18);
              }
              if (local_6e8 != false) {
                uVar20 = local_6e0->RandStream->Seed * 0xbb38435 + 0x3619636b;
                local_6e0->RandStream->Seed = uVar20;
                iVar22 = (int)((float)(((int)local_6bc - (int)local_6d0) + 1) *
                              ((float)(uVar20 >> 9 | 0x3f800000) - fVar6)) + (int)local_6d0;
                if (fVar10 == 1.4013e-45) {
                  uVar20 = 0;
                  if ((int)uVar18 < (int)plVar17[0xc]) {
                    uVar20 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar5 = (this_00->AllocatorInstance).Data + lVar26 * 8;
                  *(int *)pFVar5 = *(int *)pFVar5 + iVar22;
                }
                else if (fVar10 == 0.0) {
                  uVar20 = 0;
                  if ((int)uVar18 < (int)plVar17[0xc]) {
                    uVar20 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  *(int *)((this_00->AllocatorInstance).Data + lVar26 * 8) = iVar22;
                }
              }
              uVar18 = uVar18 + 1;
              lVar26 = lVar26 + 1;
              FVar27 = local_6a0;
              FVar29 = local_6d8;
            } while (lVar26 < local_5f8);
          }
        }
      }
    }
    if (local_508.HalfInputs.AllocatorInstance.SecondaryData !=
        (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
      FMemory::Free((void *)local_508.HalfInputs.AllocatorInstance.SecondaryData);
    }
    if (local_508.IntInputs.AllocatorInstance.SecondaryData !=
        (ForElementType<FNDIInputParam<int>_>)0x0) {
      FMemory::Free((void *)local_508.IntInputs.AllocatorInstance.SecondaryData);
    }
    if (local_508.FloatInputs.AllocatorInstance.SecondaryData !=
        (ForElementType<FNDIInputParam<float>_>)0x0) {
      FMemory::Free((void *)local_508.FloatInputs.AllocatorInstance.SecondaryData);
    }
  }
  bVar28 = local_6e7;
  if ((local_6e7 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar28 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar28 & 4) != 0) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead @ 148e81650

void __cdecl
UNiagaraDataInterfaceDataChannelRead::StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead
          (void)

{
  return;
}

