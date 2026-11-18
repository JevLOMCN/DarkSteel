// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// BuildUniformBuffers @ 1492dc520

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

void __thiscall FNiagaraGPUSystemTick::BuildUniformBuffers(FNiagaraGPUSystemTick *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FRHIResource *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uchar *puVar13;
  uint uVar14;
  int *piVar15;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  uint local_res18;
  undefined8 local_res20;
  undefined4 uVar16;
  FRHIResource *local_78;
  FRHIResource *local_70;
  FMemScope local_68;
  FMemScope local_60;
  uchar *local_58;
  
  pcVar10 = (char *)&(this->ExternalUnformBuffers_RT).ArrayNum;
  if (((this->ExternalUnformBuffers_RT).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalUnformBuffers_RT.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                         ,0x144,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = ((this->bHasInterpolatedParameters != false) + 1) * this->InstanceCount;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar11,(ForAnyElementType *)this,(int *)pcVar10,
                     &(this->ExternalUnformBuffers_RT).ArrayMax);
  DefaultConstructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            ((this->ExternalUnformBuffers_RT).AllocatorInstance.Data + (longlong)iVar8 * 8,iVar11);
  local_res18 = this->InstanceCount;
  puVar13 = this->InstanceData_ParamData_Packed;
  local_58 = puVar13;
  if (((int)local_res18 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = 0;
  if (this->InstanceCount != 0) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < (int)local_res18) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if (uVar9 == 0) {
        pcVar10 = (char *)(longlong)(int)uVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar16 = (undefined4)((ulonglong)pcVar10 >> 0x20);
      piVar15 = (int *)(longlong)(int)uVar14;
      lVar2 = *(longlong *)(*(longlong *)(puVar13 + (longlong)piVar15 * 0x128 + 200) + 0x78);
      if ((lVar2 == 0) || ((*(int *)(lVar2 + 0x30) == 0 && (*(int *)(lVar2 + 0x8c) == 0)))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(puVar13 + (longlong)piVar15 * 0x128 + 200) + 0x68)
                    + 0xac) & 2) != 0) {
        if ((lVar2 == 0) || (!bVar6)) {
          pcVar10 = "ExternalCBufferLayout && bExternalLayoutValid";
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<101103177960522066>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                             ,0x152,"ExternalCBufferLayout && bExternalLayoutValid");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          local_res20 = *(undefined8 *)(puVar13 + (longlong)piVar15 * 0x128 + 0xb8);
          uVar9 = *(uint *)(puVar13 + (longlong)piVar15 * 0x128 + 0x120);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                            ::__l2::LLMScope_Name1233,L"RHIMisc/CreateUniformBuffer");
            _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FLLMScope::FLLMScope
                    (local_res8,
                     `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                     ::__l2::LLMScope_Name1233,false,None,Default,true);
          FMemScope::FMemScope
                    (&local_68,
                     &`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                      ::__l2::LLMScope_Name1233,true);
          pcVar10 = (char *)(CONCAT44(uVar16,uVar9 >> 2) & 0xffffffff00000001);
          (**(code **)(GDynamicRHI->_padding_ + 0x128))
                    (GDynamicRHI,&local_78,local_res20,lVar2,pcVar10,1);
          FMemScope::~FMemScope(&local_68);
          FLLMScope::~FLLMScope(local_res8);
          uVar9 = 0;
          if ((int)uVar14 < (this->ExternalUnformBuffers_RT).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (pcVar10 = (char *)piVar15,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar1 = (this->ExternalUnformBuffers_RT).AllocatorInstance.Data + (longlong)piVar15 * 8;
          if (pFVar1 != (FScriptContainerElement *)&local_78) {
            pFVar3 = *(FRHIResource **)pFVar1;
            *(FRHIResource **)pFVar1 = local_78;
            local_78 = (FRHIResource *)0x0;
            if (pFVar3 == (FRHIResource *)0x0) goto LAB_1492dc835;
            FRHIResource::Release(pFVar3);
          }
          if (local_78 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_78);
          }
        }
      }
LAB_1492dc835:
      uVar16 = (undefined4)((ulonglong)pcVar10 >> 0x20);
      if ((*(byte *)(*(longlong *)(*(longlong *)(puVar13 + (longlong)piVar15 * 0x128 + 200) + 0x68)
                    + 0xac) & 4) != 0) {
        if ((lVar2 == 0) || (!bVar6)) {
          pcVar10 = "ExternalCBufferLayout && bExternalLayoutValid";
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<101103177960522073>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                             ,0x159,"ExternalCBufferLayout && bExternalLayoutValid");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if ((*(uint *)(puVar13 + (longlong)piVar15 * 0x128 + 0xc0) <
               (uint)(*(int *)(lVar2 + 0x8c) * 2)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExternalCBufferLayout->ConstantBufferSize + ExternalCBufferLayout->ConstantBufferSize <= Instance.ExternalParamDataSize"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                 ,0x15b,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar9 = *(uint *)(lVar2 + 0x8c);
          lVar4 = *(longlong *)(puVar13 + (longlong)piVar15 * 0x128 + 0xb8);
          uVar12 = *(uint *)(puVar13 + (longlong)piVar15 * 0x128 + 0x120);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                            ::__l2::LLMScope_Name1233,L"RHIMisc/CreateUniformBuffer");
            _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FLLMScope::FLLMScope
                    (local_res10,
                     `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                     ::__l2::LLMScope_Name1233,false,None,Default,true);
          FMemScope::FMemScope
                    (&local_60,
                     &`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                      ::__l2::LLMScope_Name1233,true);
          pcVar10 = (char *)(CONCAT44(uVar16,uVar12 >> 2) & 0xffffffff00000001);
          (**(code **)(GDynamicRHI->_padding_ + 0x128))
                    (GDynamicRHI,&local_70,(ulonglong)uVar9 + lVar4,lVar2,pcVar10,1);
          FMemScope::~FMemScope(&local_60);
          FLLMScope::~FLLMScope(local_res10);
          uVar12 = this->InstanceCount + uVar14;
          uVar9 = 0;
          if ((int)uVar12 < (this->ExternalUnformBuffers_RT).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar1 = (this->ExternalUnformBuffers_RT).AllocatorInstance.Data +
                   (longlong)(int)uVar12 * 8;
          if (pFVar1 != (FScriptContainerElement *)&local_70) {
            pFVar3 = *(FRHIResource **)pFVar1;
            *(FRHIResource **)pFVar1 = local_70;
            local_70 = (FRHIResource *)0x0;
            if (pFVar3 == (FRHIResource *)0x0) goto LAB_1492dca0f;
            FRHIResource::Release(pFVar3);
          }
          if (local_70 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_70);
          }
        }
      }
LAB_1492dca0f:
      uVar14 = uVar14 + 1;
      puVar13 = local_58;
    } while (uVar14 < this->InstanceCount);
  }
  return;
}

// Destroy @ 1492e0710

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

void __thiscall FNiagaraGPUSystemTick::Destroy(FNiagaraGPUSystemTick *this)

{
  uint uVar1;
  FNiagaraComputeDataInterfaceInstanceData *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  uchar *puVar7;
  
  uVar1 = this->InstanceCount;
  puVar6 = this->InstanceData_ParamData_Packed;
  if (((int)uVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar7 = puVar6 + (longlong)(int)uVar1 * 0x128;
  for (; puVar6 != puVar7; puVar6 = puVar6 + 0x128) {
    *(undefined4 *)(*(longlong *)(puVar6 + 200) + 0x204) = *(undefined4 *)(puVar6 + 0x118);
    if (*(void **)(puVar6 + 0x108) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar6 + 0x108));
    }
    if (*(void **)(puVar6 + 0xe0) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar6 + 0xe0));
    }
    if (*(void **)(puVar6 + 0xd0) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar6 + 0xd0));
    }
  }
  FMemory::Free(this->InstanceData_ParamData_Packed);
  if (this->DIInstanceData != (FNiagaraComputeDataInterfaceInstanceData *)0x0) {
    FMemory::Free(this->DIInstanceData->PerInstanceDataForRT);
    pFVar2 = this->DIInstanceData;
    if (pFVar2 != (FNiagaraComputeDataInterfaceInstanceData *)0x0) {
      *(undefined4 *)&(pFVar2->InterfaceProxiesToOffsets).field_0x48 = 0;
      pvVar3 = *(void **)&(pFVar2->InterfaceProxiesToOffsets).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar2->InterfaceProxiesToOffsets);
      ::operator_delete(pFVar2,0x60);
    }
  }
  return;
}

// GetExternalUniformBuffer @ 1492ee830

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

FRHIUniformBuffer * __thiscall
FNiagaraGPUSystemTick::GetExternalUniformBuffer
          (FNiagaraGPUSystemTick *this,FNiagaraComputeInstanceData *param_1,bool param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FRHIUniformBuffer *pFVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = this->InstanceData_ParamData_Packed;
  if ((int)this->InstanceCount < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIUniformBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (param_2) {
    uVar6 = this->InstanceCount;
  }
  else {
    uVar6 = 0;
  }
  uVar6 = uVar6 + (int)(((longlong)param_1 - (longlong)puVar1) / 0x128);
  uVar5 = 0;
  if ((int)uVar6 < (this->ExternalUnformBuffers_RT).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIUniformBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FRHIUniformBuffer **)
          ((this->ExternalUnformBuffers_RT).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
}

// Init @ 1492f3460

/* WARNING: Type propagation algorithm not settling */
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
FNiagaraGPUSystemTick::Init(FNiagaraGPUSystemTick *this,FNiagaraSystemInstance *param_1)

{
  undefined1 *puVar1;
  TArray<FNiagaraDataInterfaceProxy_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNiagaraDataInterfaceProxyRW_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  longlong *plVar5;
  short *psVar6;
  float *pfVar7;
  uint *puVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraComputeExecutionContext *pFVar10;
  FNiagaraSimStageExecutionData *pFVar11;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> FVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  FWeakObjectPtr *pFVar18;
  FNiagaraComputeExecutionContext *pFVar19;
  ForElementType<FNiagaraSimStageExecutionLoopData> FVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  FNiagaraComputeDataInterfaceInstanceData *pFVar30;
  FNiagaraComputeDataInterfaceInstanceData *pFVar31;
  void *pvVar32;
  UObject *pUVar33;
  longlong lVar34;
  uchar *puVar35;
  longlong lVar36;
  int *piVar37;
  FNiagaraTypeRegistry *pFVar38;
  FNiagaraTypeDefinition *pFVar39;
  char cVar40;
  FNiagaraOwnerParameters *pFVar41;
  ulonglong uVar42;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> FVar43;
  byte bVar44;
  uint uVar45;
  FScriptContainerElement *pFVar46;
  short sVar47;
  FWeakObjectPtr *this_00;
  FNiagaraComputeInstanceData *pFVar48;
  longlong *plVar49;
  short sVar50;
  uint uVar51;
  FNiagaraComputeDataInterfaceInstanceData *pFVar52;
  FNiagaraParameterStore *this_01;
  ForElementType<FNiagaraSimStageExecutionLoopData> FVar53;
  FNiagaraParameterStore *pFVar54;
  FNiagaraComputeInstanceData *pFVar55;
  undefined1 local_res20 [8];
  char local_1e8 [4];
  int local_1e4;
  uint local_1e0;
  FNiagaraComputeInstanceData *local_1d8;
  ForElementType<FNiagaraSimStageExecutionLoopData> local_1d0;
  int local_1c8;
  int local_1c4;
  longlong *local_1c0;
  int local_1b8;
  int iStack_1b4;
  int *local_1a8;
  uchar *local_1a0;
  longlong local_198;
  FNiagaraParameterStore *local_190;
  FWeakObjectPtr *local_188;
  int local_180 [2];
  FNiagaraComputeExecutionContext *local_178;
  FNiagaraParameterStore *local_170;
  longlong local_168;
  ulonglong local_160;
  TArrayView<FNiagaraEmitterExecutionIndex_const_,int> local_158;
  longlong local_148;
  ForElementType<FNiagaraSimStageExecutionLoopData> local_140;
  FNiagaraEmitterExecutionIndex *local_138;
  TPairInitializer<FNiagaraDataInterfaceProxy_*_const_&,int_&&> local_130;
  longlong local_120;
  int local_118;
  void *local_110;
  undefined8 local_108;
  longlong local_100;
  int local_f8;
  void *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  void *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  int local_b8;
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  void *local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  void *local_70;
  undefined8 local_68;
  longlong *local_60;
  int *local_58;
  
  pFVar52 = (FNiagaraComputeDataInterfaceInstanceData *)0x0;
  if ((param_1 == (FNiagaraSystemInstance *)0x0) &&
     (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<101103177960521749>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                          ,0x15,"InSystemInstance != nullptr"), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((param_1->ActualExecutionState == Complete) || (param_1->ActualExecutionState == Disabled))
     && (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<101103177960521751>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                             ,0x17,"!InSystemInstance->IsComplete()"), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  this->SystemInstanceID = param_1->ID;
  this->SystemGpuComputeProxy = (param_1->SystemGpuComputeProxy).Ptr;
  uVar25 = param_1->GPUDataInterfaceInstanceDataSize;
  if (uVar25 != 0) {
    pFVar30 = ::operator_new(0x60);
    pFVar31 = pFVar52;
    if (pFVar30 != (FNiagaraComputeDataInterfaceInstanceData *)0x0) {
      *(undefined8 *)&pFVar30->InterfaceProxiesToOffsets = 0;
      *(undefined8 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x8 = 0;
      *(undefined8 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x20 = 0;
      pFVar30->PerInstanceDataForRT = (void *)0x0;
      *(undefined4 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x28 = 0;
      *(undefined4 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x34 = 0;
      *(undefined8 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x40 = 0;
      *(undefined4 *)&(pFVar30->InterfaceProxiesToOffsets).field_0x48 = 0;
      pFVar30->Instances = 0;
      pFVar31 = pFVar30;
    }
    this->DIInstanceData = pFVar31;
    pFVar31->PerInstanceDataSize = uVar25;
    pvVar32 = FMemory::Malloc((ulonglong)uVar25,0);
    this->DIInstanceData->PerInstanceDataForRT = pvVar32;
    this->DIInstanceData->Instances = (param_1->DataInterfaceInstanceDataOffsets).ArrayNum;
    pvVar32 = this->DIInstanceData->PerInstanceDataForRT;
    TSet<TTuple<FNiagaraDataInterfaceProxy_*,int>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,int,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FNiagaraDataInterfaceProxy_*,int>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,int,0>,FDefaultSetAllocator>
               *)&this->DIInstanceData->InterfaceProxiesToOffsets,
              (param_1->GPUDataInterfaces).ArrayNum);
    iVar26 = (param_1->GPUDataInterfaces).ArrayNum;
    this_00 = (FWeakObjectPtr *)(param_1->GPUDataInterfaces).AllocatorInstance.Data;
    local_188 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar26 * 0xc);
    while( true ) {
      pFVar18 = local_188;
      if ((param_1->GPUDataInterfaces).ArrayNum != iVar26) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar18) break;
      pUVar33 = FWeakObjectPtr::Get(this_00);
      if (pUVar33 != (UObject *)0x0) {
        local_168 = *(longlong *)(pUVar33 + 1);
        uVar25 = this_00[1].ObjectIndex;
        iVar24 = (**(code **)(*(longlong *)pUVar33 + 800))(pUVar33);
        uVar51 = iVar24 + 0xfU & 0xfffffff0;
        if (((int)uVar51 < 1) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<101103177960521783>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                ,0x37,"RTDataSize > 0"), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((local_168 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Proxy",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                ,0x38,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar45 = 0;
        if ((int)uVar25 < (param_1->DataInterfaceInstanceData).ArrayNum) {
          uVar45 = ~uVar25 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        (**(code **)(*(longlong *)pUVar33 + 0x318))
                  (pUVar33,pvVar32,
                   (param_1->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar25,
                   &this->SystemInstanceID);
        local_60 = &local_168;
        local_58 = local_180;
        local_180[0] = (int)pFVar52;
        TSet<TTuple<FNiagaraDataInterfaceProxy_*,int>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FNiagaraDataInterfaceProxy_*_const_&,int_&&>_>
                  ((TSet<TTuple<FNiagaraDataInterfaceProxy_*,int>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,int,0>,FDefaultSetAllocator>
                    *)&this->DIInstanceData->InterfaceProxiesToOffsets,&local_130,(bool *)&local_60)
        ;
        pvVar32 = (void *)((longlong)pvVar32 + (longlong)(int)uVar51);
        pFVar52 = (FNiagaraComputeDataInterfaceInstanceData *)(ulonglong)((int)pFVar52 + uVar51);
      }
      this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
    }
  }
  bVar23 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar21 = false;
  if ((param_1->ActiveGPUEmitterCount == 0xffffffff) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("((uint32) 0xffffffff) > InSystemInstance->ActiveGPUEmitterCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                          ,0x49,L""), bVar22)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar25 = param_1->ActiveGPUEmitterCount * 0x128 + 0xf & 0xfffffff0;
  local_130.Value = FMemory::Malloc((ulonglong)(param_1->TotalGPUParamSize + uVar25),0);
  this->InstanceData_ParamData_Packed = (uchar *)local_130.Value;
  bVar44 = param_1->GPUParamIncludeInterpolation;
  local_160 = (ulonglong)bVar44;
  puVar35 = (uchar *)((ulonglong)uVar25 + (longlong)local_130.Value);
  this->GlobalParamData = puVar35;
  lVar36 = local_160 + 1;
  local_148 = lVar36 * 0x20;
  this->SystemParamData = puVar35 + local_148;
  this->OwnerParamData = puVar35 + lVar36 * 0x60;
  uVar25 = param_1->CurrentFrameIndex;
  uVar14 = *(undefined8 *)&param_1->GlobalParameters[uVar25].EngineInvDeltaTime;
  *(undefined8 *)puVar35 = *(undefined8 *)(param_1->GlobalParameters + uVar25);
  *(undefined8 *)(puVar35 + 8) = uVar14;
  pfVar7 = &param_1->GlobalParameters[uVar25].EngineRealTime;
  uVar14 = *(undefined8 *)(pfVar7 + 2);
  *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)pfVar7;
  *(undefined8 *)(puVar35 + 0x18) = uVar14;
  puVar35 = this->SystemParamData;
  uVar25 = param_1->CurrentFrameIndex;
  uVar14 = *(undefined8 *)&param_1->SystemParameters[uVar25].EngineLodDistanceFraction;
  *(undefined8 *)puVar35 = *(undefined8 *)(param_1->SystemParameters + uVar25);
  *(undefined8 *)(puVar35 + 8) = uVar14;
  puVar8 = &param_1->SystemParameters[uVar25].EngineExecutionState;
  uVar14 = *(undefined8 *)(puVar8 + 2);
  *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)puVar8;
  *(undefined8 *)(puVar35 + 0x18) = uVar14;
  piVar37 = &param_1->SystemParameters[uVar25].SignificanceIndex;
  uVar14 = *(undefined8 *)(piVar37 + 2);
  *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)piVar37;
  *(undefined8 *)(puVar35 + 0x28) = uVar14;
  pfVar7 = &param_1->SystemParameters[uVar25].TimeStepFraction;
  uVar14 = *(undefined8 *)(pfVar7 + 2);
  lVar34 = 4;
  *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)pfVar7;
  *(undefined8 *)(puVar35 + 0x38) = uVar14;
  puVar35 = this->OwnerParamData;
  pFVar41 = param_1->OwnerParameters + param_1->CurrentFrameIndex;
  do {
    uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[0] + 2);
    *(undefined8 *)puVar35 = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[0];
    *(undefined8 *)(puVar35 + 8) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[1] + 2);
    *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[1];
    *(undefined8 *)(puVar35 + 0x18) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[2] + 2);
    *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[2];
    *(undefined8 *)(puVar35 + 0x28) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[3] + 2);
    *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[3];
    *(undefined8 *)(puVar35 + 0x38) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[0] + 2);
    *(undefined8 *)(puVar35 + 0x40) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[0];
    *(undefined8 *)(puVar35 + 0x48) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[1] + 2);
    *(undefined8 *)(puVar35 + 0x50) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[1];
    *(undefined8 *)(puVar35 + 0x58) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[2] + 2);
    *(undefined8 *)(puVar35 + 0x60) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[2];
    *(undefined8 *)(puVar35 + 0x68) = uVar14;
    uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[3] + 2);
    *(undefined8 *)(puVar35 + 0x70) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[3];
    *(undefined8 *)(puVar35 + 0x78) = uVar14;
    lVar34 = lVar34 + -1;
    puVar35 = puVar35 + 0x80;
    pFVar41 = (FNiagaraOwnerParameters *)&pFVar41->EngineLocalToWorldTransposed;
  } while (lVar34 != 0);
  if (bVar44 != 0) {
    uVar25 = param_1->ParametersValid ^ param_1->CurrentFrameIndex;
    puVar35 = this->GlobalParamData;
    uVar14 = *(undefined8 *)&param_1->GlobalParameters[uVar25].EngineInvDeltaTime;
    *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)(param_1->GlobalParameters + uVar25);
    *(undefined8 *)(puVar35 + 0x28) = uVar14;
    pfVar7 = &param_1->GlobalParameters[uVar25].EngineRealTime;
    uVar14 = *(undefined8 *)(pfVar7 + 2);
    *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)pfVar7;
    *(undefined8 *)(puVar35 + 0x38) = uVar14;
    uVar25 = param_1->ParametersValid ^ param_1->CurrentFrameIndex;
    puVar35 = this->SystemParamData;
    uVar14 = *(undefined8 *)&param_1->SystemParameters[uVar25].EngineLodDistanceFraction;
    *(undefined8 *)(puVar35 + 0x40) = *(undefined8 *)(param_1->SystemParameters + uVar25);
    *(undefined8 *)(puVar35 + 0x48) = uVar14;
    puVar8 = &param_1->SystemParameters[uVar25].EngineExecutionState;
    uVar14 = *(undefined8 *)(puVar8 + 2);
    *(undefined8 *)(puVar35 + 0x50) = *(undefined8 *)puVar8;
    *(undefined8 *)(puVar35 + 0x58) = uVar14;
    piVar37 = &param_1->SystemParameters[uVar25].SignificanceIndex;
    uVar14 = *(undefined8 *)(piVar37 + 2);
    *(undefined8 *)(puVar35 + 0x60) = *(undefined8 *)piVar37;
    *(undefined8 *)(puVar35 + 0x68) = uVar14;
    pfVar7 = &param_1->SystemParameters[uVar25].TimeStepFraction;
    uVar14 = *(undefined8 *)(pfVar7 + 2);
    lVar34 = 4;
    *(undefined8 *)(puVar35 + 0x70) = *(undefined8 *)pfVar7;
    *(undefined8 *)(puVar35 + 0x78) = uVar14;
    puVar35 = this->OwnerParamData + 0x200;
    pFVar41 = param_1->OwnerParameters + (param_1->ParametersValid ^ param_1->CurrentFrameIndex);
    do {
      uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[0] + 2);
      *(undefined8 *)puVar35 = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[0];
      *(undefined8 *)(puVar35 + 8) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[1] + 2);
      *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[1];
      *(undefined8 *)(puVar35 + 0x18) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[2] + 2);
      *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[2];
      *(undefined8 *)(puVar35 + 0x28) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineLocalToWorld).M[3] + 2);
      *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)(pFVar41->EngineLocalToWorld).M[3];
      *(undefined8 *)(puVar35 + 0x38) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[0] + 2);
      *(undefined8 *)(puVar35 + 0x40) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[0];
      *(undefined8 *)(puVar35 + 0x48) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[1] + 2);
      *(undefined8 *)(puVar35 + 0x50) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[1];
      *(undefined8 *)(puVar35 + 0x58) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[2] + 2);
      *(undefined8 *)(puVar35 + 0x60) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[2];
      *(undefined8 *)(puVar35 + 0x68) = uVar14;
      uVar14 = *(undefined8 *)((pFVar41->EngineWorldToLocal).M[3] + 2);
      *(undefined8 *)(puVar35 + 0x70) = *(undefined8 *)(pFVar41->EngineWorldToLocal).M[3];
      *(undefined8 *)(puVar35 + 0x78) = uVar14;
      lVar34 = lVar34 + -1;
      puVar35 = puVar35 + 0x80;
      pFVar41 = (FNiagaraOwnerParameters *)&pFVar41->EngineLocalToWorldTransposed;
    } while (lVar34 != 0);
  }
  local_1a0 = this->OwnerParamData + lVar36 * 0x200;
  bVar44 = 0;
  local_1e0 = 0;
  FNiagaraSystemInstance::GetEmitterExecutionOrder(param_1,&local_158);
  local_188 = (FWeakObjectPtr *)local_158.DataPtr;
  local_138 = local_158.DataPtr + local_158.ArrayNum;
  uVar25 = 0;
  if (local_158.DataPtr != local_138) {
    do {
      pFVar9 = (param_1->Emitters).AllocatorInstance.Data;
      bVar44 = bVar44 | (local_158.DataPtr)->bStartNewOverlapGroup;
      iVar26 = (param_1->Emitters).ArrayNum;
      uVar25 = (local_158.DataPtr)->EmitterIndex;
      local_188 = (FWeakObjectPtr *)local_158.DataPtr;
      if ((iVar26 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((iVar26 <= (int)uVar25) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      piVar37 = *(int **)(pFVar9 + (ulonglong)uVar25 * 0x10);
      local_1a8 = piVar37;
      if (((((piVar37 != (int *)0x0) && (piVar37[0x35] != 3)) && (piVar37[0x35] != 4)) &&
          ((lVar36 = (**(code **)(*(longlong *)piVar37 + 0x68))(piVar37), lVar36 != 0 &&
           (pFVar10 = *(FNiagaraComputeExecutionContext **)(piVar37 + 6), local_178 = pFVar10,
           *(longlong *)(piVar37 + 10) != 0)))) &&
         ((pFVar10 != (FNiagaraComputeExecutionContext *)0x0 &&
          (*(char *)((longlong)piVar37 + 0xd1) == '\x01')))) {
        if (*(int *)(lVar36 + 0x854) < 1) {
          if (((piVar37[0x35] != 1) && (piVar37[0x35] != 2)) &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<101103177960521877>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                  ,0x95,
                                  "(EmitterInstance->GetExecutionState() == ENiagaraExecutionState::Inactive) || (EmitterInstance->GetExecutionState() == ENiagaraExecutionState::InactiveClear)"
                                 ), bVar22)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        else {
          uVar42 = (ulonglong)local_1e0;
          local_1e0 = local_1e0 + 1;
          pFVar48 = (FNiagaraComputeInstanceData *)(local_130.Value + uVar42 * 0x4a);
          (pFVar48->SpawnInfo).EventSpawnTotal = 0;
          (pFVar48->SpawnInfo).SpawnRateInstances = 0;
          (pFVar48->SpawnInfo).MaxParticleCount = 0;
          pFVar48->EmitterParamData = (uchar *)0x0;
          pFVar48->ExternalParamData = (uchar *)0x0;
          pFVar48->ExternalParamDataSize = 0;
          (pFVar48->DataInterfaceProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar48->DataInterfaceProxies).ArrayNum = 0;
          (pFVar48->DataInterfaceProxies).ArrayMax = 0;
          (pFVar48->IterationDataInterfaceProxies).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar48->IterationDataInterfaceProxies).ArrayNum = 0;
          (pFVar48->IterationDataInterfaceProxies).ArrayMax = 0;
          (pFVar48->PerStageInfo).AllocatorInstance.SecondaryData =
               (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>)0x0;
          (pFVar48->PerStageInfo).ArrayNum = 0;
          (pFVar48->PerStageInfo).ArrayMax = 1;
          pFVar48->bResetData = 0;
          pFVar48->bHasMultipleStages = 0;
          pFVar48->bStartNewOverlapGroup = 0;
          pFVar48->ParticleCountFence = 0xffffffff;
          pFVar48->TotalDispatches = 0;
          pFVar48->Context = pFVar10;
          local_1d8 = pFVar48;
          if ((pFVar10->MainDataSet == (FNiagaraDataSet *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GPUContext->MainDataSet",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                  ,0x9d,L""), bVar22)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          cVar40 = '\x01';
          if (pFVar10->HasInterpolationParameters != false) {
            cVar40 = (char)local_160;
          }
          if (cVar40 == '\0') {
            local_1e8[0] = cVar40;
            `FNiagaraGPUSystemTick::Init'::__l36::<lambda_1>::operator()(local_1e8);
          }
          uVar51 = (pFVar10->GpuSpawnInfo_GT).SpawnRateInstances;
          uVar45 = (pFVar10->GpuSpawnInfo_GT).MaxParticleCount;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoStartOffsets[0];
          (pFVar48->SpawnInfo).EventSpawnTotal = (pFVar10->GpuSpawnInfo_GT).EventSpawnTotal;
          (pFVar48->SpawnInfo).SpawnRateInstances = uVar51;
          (pFVar48->SpawnInfo).MaxParticleCount = uVar45;
          (pFVar48->SpawnInfo).SpawnInfoStartOffsets[0] = iVar26;
          uVar14 = *(undefined8 *)((pFVar10->GpuSpawnInfo_GT).SpawnInfoStartOffsets + 3);
          *(undefined8 *)((pFVar48->SpawnInfo).SpawnInfoStartOffsets + 1) =
               *(undefined8 *)((pFVar10->GpuSpawnInfo_GT).SpawnInfoStartOffsets + 1);
          *(undefined8 *)((pFVar48->SpawnInfo).SpawnInfoStartOffsets + 3) = uVar14;
          uVar14 = *(undefined8 *)((pFVar10->GpuSpawnInfo_GT).SpawnInfoStartOffsets + 7);
          *(undefined8 *)((pFVar48->SpawnInfo).SpawnInfoStartOffsets + 5) =
               *(undefined8 *)((pFVar10->GpuSpawnInfo_GT).SpawnInfoStartOffsets + 5);
          *(undefined8 *)((pFVar48->SpawnInfo).SpawnInfoStartOffsets + 7) = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[0].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[0].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[0].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[0].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[0].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[0].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[1].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[1].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[1].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[1].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[1].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[1].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[2].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[2].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[2].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[2].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[2].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[2].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[3].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[3].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[3].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[3].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[3].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[3].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[4].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[4].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[4].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[4].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[4].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[4].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[5].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[5].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[5].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[5].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[5].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[5].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[6].SpawnGroup;
          uVar14 = *(undefined8 *)
                    &(pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[6].GroupSpawnStartIndex;
          (pFVar48->SpawnInfo).SpawnInfoParams[6].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[6].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[6].SpawnGroup = iVar26;
          *(undefined8 *)&(pFVar48->SpawnInfo).SpawnInfoParams[6].GroupSpawnStartIndex = uVar14;
          iVar26 = (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[7].SpawnGroup;
          (pFVar48->SpawnInfo).SpawnInfoParams[7].InterpStartDt =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[7].InterpStartDt;
          (pFVar48->SpawnInfo).SpawnInfoParams[7].SpawnGroup = iVar26;
          (pFVar48->SpawnInfo).SpawnInfoParams[7].GroupSpawnStartIndex =
               (pFVar10->GpuSpawnInfo_GT).SpawnInfoParams[7].GroupSpawnStartIndex;
          if (pFVar10->bResetPending_GT != false) {
            *(uint *)&pFVar48->field_0x120 =
                 ((uint)pFVar10->bResetPending_GT ^ ZPULL(*(undefined4 *)&pFVar48->field_0x120,0,1))
                 & 1 ^ *(undefined4 *)&pFVar48->field_0x120;
            pFVar10->ParticleCountReadFence = pFVar10->ParticleCountReadFence + 1;
            pFVar10->bResetPending_GT = false;
          }
          pFVar48->ParticleCountFence = pFVar10->ParticleCountReadFence;
          pFVar48->EmitterParamData = local_1a0;
          local_1a0 = local_1a0 + local_148;
          uVar45 = param_1->CurrentFrameIndex + uVar25 * 2;
          uVar51 = 0;
          if ((int)uVar45 < (param_1->EmitterParameters).ArrayNum) {
            uVar51 = ~uVar45 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar46 = (param_1->EmitterParameters).AllocatorInstance.Data;
          puVar35 = pFVar48->EmitterParamData;
          pFVar9 = pFVar46 + (longlong)(int)uVar45 * 0x20;
          uVar14 = *(undefined8 *)(pFVar9 + 8);
          *(undefined8 *)puVar35 = *(undefined8 *)pFVar9;
          *(undefined8 *)(puVar35 + 8) = uVar14;
          pFVar46 = pFVar46 + (longlong)(int)uVar45 * 0x20 + 0x10;
          uVar14 = *(undefined8 *)(pFVar46 + 8);
          *(undefined8 *)(puVar35 + 0x10) = *(undefined8 *)pFVar46;
          *(undefined8 *)(puVar35 + 0x18) = uVar14;
          if ((char)local_160 != '\0') {
            uVar51 = (param_1->ParametersValid ^ param_1->CurrentFrameIndex) + uVar25 * 2;
            uVar25 = 0;
            if ((int)uVar51 < (param_1->EmitterParameters).ArrayNum) {
              uVar25 = ~uVar51 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar46 = (param_1->EmitterParameters).AllocatorInstance.Data;
            puVar35 = pFVar48->EmitterParamData;
            pFVar9 = pFVar46 + (longlong)(int)uVar51 * 0x20;
            uVar14 = *(undefined8 *)(pFVar9 + 8);
            *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)pFVar9;
            *(undefined8 *)(puVar35 + 0x28) = uVar14;
            pFVar46 = pFVar46 + (longlong)(int)uVar51 * 0x20 + 0x10;
            uVar14 = *(undefined8 *)(pFVar46 + 8);
            *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)pFVar46;
            *(undefined8 *)(puVar35 + 0x38) = uVar14;
          }
          local_1a0 = FNiagaraComputeExecutionContext::WriteConstantBufferInstanceData
                                (pFVar10,local_1a0,pFVar48);
          this->bHasInterpolatedParameters =
               (bool)(this->bHasInterpolatedParameters | pFVar10->HasInterpolationParameters);
          FNiagaraComputeExecutionContext::PostTick(pFVar10);
          *(uint *)&pFVar48->field_0x120 =
               ((uint)bVar44 * 2 ^ *(uint *)&pFVar48->field_0x120) & 2 ^
               *(uint *)&pFVar48->field_0x120;
          bVar44 = 0;
          uVar25 = (uint)(pFVar10->CombinedParamStore)._padding_;
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          if ((pFVar48->DataInterfaceProxies).ArrayMax < (int)uVar25) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar25,&(pFVar48->DataInterfaceProxies).AllocatorInstance,
                       (pFVar48->DataInterfaceProxies).ArrayNum,
                       &(pFVar48->DataInterfaceProxies).ArrayMax);
          }
          uVar25 = (uint)(pFVar10->CombinedParamStore)._padding_;
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          if ((pFVar48->IterationDataInterfaceProxies).ArrayMax < (int)uVar25) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar25,&(pFVar48->IterationDataInterfaceProxies).AllocatorInstance,
                       (pFVar48->IterationDataInterfaceProxies).ArrayNum,
                       &(pFVar48->IterationDataInterfaceProxies).ArrayMax);
          }
          pFVar19 = local_178;
          pFVar48 = local_1d8;
          plVar49 = (longlong *)(pFVar10->CombinedParamStore)._padding_;
          iVar26 = (int)(pFVar10->CombinedParamStore)._padding_;
          pTVar2 = &local_1d8->DataInterfaceProxies;
          plVar5 = plVar49 + iVar26;
          pTVar3 = &local_1d8->IterationDataInterfaceProxies;
          while( true ) {
            if ((int)(pFVar19->CombinedParamStore)._padding_ != iVar26) {
              local_1e8[1] = 0;
              `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1e8 + 1);
            }
            piVar37 = local_1a8;
            pFVar55 = local_1d8;
            if (plVar49 == plVar5) break;
            local_1c0 = *(longlong **)(*plVar49 + 0x28);
            if ((local_1c0 == (longlong *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DIProxy",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                                    ,0xca,L""), bVar22)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar9 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_1c0) &&
                ((FScriptContainerElement *)&local_1c0 <
                 pFVar9 + (longlong)(pFVar48->DataInterfaceProxies).ArrayMax * 8)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar24 = (pFVar48->DataInterfaceProxies).ArrayNum;
            if (iVar24 == (pFVar48->DataInterfaceProxies).ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,
                                  &(pFVar48->DataInterfaceProxies).ArrayMax);
            }
            (pFVar48->DataInterfaceProxies).ArrayNum = iVar24 + 1;
            *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 8) = local_1c0;
            local_198 = (**(code **)(*local_1c0 + 0x58))();
            if (local_198 != 0) {
              pFVar9 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar9 <= (FScriptContainerElement *)&local_198) &&
                  ((FScriptContainerElement *)&local_198 <
                   pFVar9 + (longlong)(pFVar48->IterationDataInterfaceProxies).ArrayMax * 8)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar24 = (pFVar48->IterationDataInterfaceProxies).ArrayNum;
              if (iVar24 == (pFVar48->IterationDataInterfaceProxies).ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar3->AllocatorInstance,
                                    &(pFVar48->IterationDataInterfaceProxies).ArrayMax);
              }
              (pFVar48->IterationDataInterfaceProxies).ArrayNum = iVar24 + 1;
              *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar24 * 8) = local_198;
            }
            plVar49 = plVar49 + 1;
          }
          local_1d8->bHasMultipleStages = 0;
          if (((pFVar19->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar25 = (((pFVar19->SimStageExecData).Object)->SimStageMetaData).ArrayNum;
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          piVar4 = &(pFVar55->PerStageInfo).ArrayMax;
          if (*piVar4 < (int)uVar25) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>_>
                      (0x14,4,uVar25,&(pFVar55->PerStageInfo).AllocatorInstance,
                       (pFVar55->PerStageInfo).ArrayNum,piVar4);
          }
          pFVar54 = (FNiagaraParameterStore *)(piVar37 + 0x10);
          local_170 = pFVar54;
          if (((pFVar19->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_1d0 = (ForElementType<FNiagaraSimStageExecutionLoopData>)
                      (pFVar19->SimStageExecData).Object;
          local_1c4 = *(int *)((longlong)local_1d0 + 0x20);
          local_1a8 = (int *)((longlong)local_1d0 + 0x20);
          if (*(ForElementType<FNiagaraSimStageExecutionLoopData> *)((longlong)local_1d0 + 0x18) !=
              (ForElementType<FNiagaraSimStageExecutionLoopData>)0x0) {
            local_1d0 = *(ForElementType<FNiagaraSimStageExecutionLoopData> *)
                         ((longlong)local_1d0 + 0x18);
          }
          this_01 = (FNiagaraParameterStore *)(piVar37 + 0x10);
          local_140 = (ForElementType<FNiagaraSimStageExecutionLoopData>)
                      ((longlong)local_1d0 + (longlong)local_1c4 * 0x14);
          local_190 = this_01;
          while( true ) {
            FVar20 = local_140;
            FVar53 = local_1d0;
            if (*local_1a8 != local_1c4) {
              local_1e8[2] = 0;
              `TCheckedPointerIterator<FNiagaraSimStageExecutionLoopData,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1e8 + 2);
            }
            if (FVar53 == FVar20) break;
            lVar36 = *(longlong *)FVar53;
            bVar22 = bVar21;
            if (lVar36 == 0) {
LAB_1492f4234:
              bVar21 = bVar22;
              iVar26 = *(int *)((longlong)FVar53 + 8);
            }
            else {
              bVar21 = true;
              local_120 = lVar36;
              if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
                local_118 = -1;
              }
              else {
                pFVar38 = FNiagaraTypeRegistry::Get();
                local_118 = FNiagaraTypeRegistry::RegisterTypeInternal
                                      (pFVar38,&FNiagaraTypeDefinition::IntDef);
              }
              local_110 = (void *)0x0;
              local_108 = 0;
              pFVar38 = FNiagaraTypeRegistry::Get();
              pFVar39 = FNiagaraTypeRegistry::GetRegisteredType(pFVar38,local_118);
              iVar26 = FNiagaraTypeDefinition::GetSize(pFVar39);
              if ((iVar26 != 4) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Parameter.GetSizeInBytes() == sizeof(T)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                      ,0x1ae,L""), bVar22)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              piVar37 = (int *)(**(code **)(pFVar54->_padding_ + 0x58))(pFVar54,&local_120,0);
              bVar22 = true;
              if ((piVar37 == (int *)0x0) || (*piVar37 == -1)) goto LAB_1492f4234;
              iVar26 = FNiagaraParameterStore::GetParameterValueFromOffset<int>(pFVar54,*piVar37);
            }
            if ((bVar21) && (bVar21 = false, local_110 != (void *)0x0)) {
              FMemory::Free(local_110);
            }
            local_1e4 = 0;
            iVar24 = 0xffff;
            if (iVar26 < 0xffff) {
              iVar24 = iVar26;
            }
            local_1c8 = 0;
            if (0 < iVar24) {
              local_1c8 = iVar24;
            }
            iVar26 = local_1c8;
            if (0 < local_1c8) {
              do {
                uVar25 = *(uint *)((longlong)FVar53 + 0xc);
                iVar24 = local_1e4;
                if ((int)uVar25 <= *(int *)((longlong)local_1d0 + 0x10)) {
                  do {
                    pFVar10 = local_178;
                    if (((local_178->SimStageExecData).Object ==
                         (FNiagaraSimStageExecutionData *)0x0) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar22)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar11 = (pFVar10->SimStageExecData).Object;
                    uVar51 = 0;
                    if ((int)uVar25 < (pFVar11->SimStageMetaData).ArrayNum) {
                      uVar51 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar51 == 0) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar22)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar9 = (pFVar11->SimStageMetaData).AllocatorInstance.Data;
                    if ((pFVar9[(longlong)(int)uVar25 * 0xa8 + 0x48] == (FScriptContainerElement)0x0
                        ) || (iVar24 = local_1e4,
                             (pFVar9[(longlong)(int)uVar25 * 0xa8 + 0x48] ==
                             (FScriptContainerElement)0x1) == pFVar55->bResetData)) {
                      lVar36 = *(longlong *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 8);
                      if (lVar36 != 0) {
                        local_80 = lVar36;
                        if (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 ==
                            (UObject *)0x0) {
                          local_78 = -1;
                        }
                        else {
                          pFVar38 = FNiagaraTypeRegistry::Get();
                          local_78 = FNiagaraTypeRegistry::RegisterTypeInternal
                                               (pFVar38,&FNiagaraTypeDefinition::BoolDef);
                        }
                        pFVar46 = (FScriptContainerElement *)0x0;
                        local_70 = (void *)0x0;
                        local_68 = 0;
                        piVar37 = (int *)(**(code **)(pFVar54->_padding_ + 0x58))
                                                   (pFVar54,&local_80,0);
                        if ((piVar37 != (int *)0x0) && (*piVar37 != -1)) {
                          pFVar46 = (pFVar54->ParameterData).AllocatorInstance.Data + *piVar37;
                        }
                        if (local_70 != (void *)0x0) {
                          FMemory::Free(local_70);
                        }
                        if ((pFVar46 != (FScriptContainerElement *)0x0) &&
                           (iVar24 = local_1e4, *(int *)pFVar46 == 0)) goto LAB_1492f4a06;
                      }
                      lVar36 = *(longlong *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x8c);
                      bVar22 = bVar15;
                      if (lVar36 == 0) {
LAB_1492f44ae:
                        bVar15 = bVar22;
                        iVar26 = *(int *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x88);
                      }
                      else {
                        bVar15 = true;
                        local_100 = lVar36;
                        if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 ==
                            (UObject *)0x0) {
                          local_f8 = -1;
                        }
                        else {
                          pFVar38 = FNiagaraTypeRegistry::Get();
                          local_f8 = FNiagaraTypeRegistry::RegisterTypeInternal
                                               (pFVar38,&FNiagaraTypeDefinition::IntDef);
                        }
                        local_f0 = (void *)0x0;
                        local_e8 = 0;
                        pFVar38 = FNiagaraTypeRegistry::Get();
                        pFVar39 = FNiagaraTypeRegistry::GetRegisteredType(pFVar38,local_f8);
                        iVar26 = FNiagaraTypeDefinition::GetSize(pFVar39);
                        if ((iVar26 != 4) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Parameter.GetSizeInBytes() == sizeof(T)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                                ,0x1ae,L""), bVar22)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        piVar37 = (int *)(**(code **)(pFVar54->_padding_ + 0x58))(pFVar54);
                        bVar22 = true;
                        if ((piVar37 == (int *)0x0) || (*piVar37 == -1)) goto LAB_1492f44ae;
                        iVar26 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                                           (pFVar54,*piVar37);
                      }
                      if ((bVar15) && (bVar15 = false, local_f0 != (void *)0x0)) {
                        FMemory::Free(local_f0);
                      }
                      iVar24 = 0xffff;
                      if (iVar26 < 0xffff) {
                        iVar24 = iVar26;
                      }
                      iVar26 = 0;
                      if (0 < iVar24) {
                        iVar26 = iVar24;
                      }
                      pFVar55 = local_1d8;
                      iVar24 = local_1e4;
                      if (0 < iVar26) {
                        iVar29 = 1;
                        local_1b8 = 1;
                        iStack_1b4 = 1;
                        if (pFVar9[(longlong)(int)uVar25 * 0xa8 + 0x34] ==
                            (FScriptContainerElement)0x2) {
                          lVar36 = *(longlong *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x1c);
                          iVar24 = 1;
                          iStack_1b4 = 1;
                          if (lVar36 == 0) {
                            iVar27 = *(int *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x10);
                          }
                          else {
                            bVar16 = true;
                            local_e0 = lVar36;
                            if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 ==
                                (UObject *)0x0) {
                              local_d8 = -1;
                            }
                            else {
                              pFVar38 = FNiagaraTypeRegistry::Get();
                              local_d8 = FNiagaraTypeRegistry::RegisterTypeInternal
                                                   (pFVar38,&FNiagaraTypeDefinition::IntDef);
                            }
                            local_d0 = (void *)0x0;
                            local_c8 = 0;
                            pFVar38 = FNiagaraTypeRegistry::Get();
                            pFVar39 = FNiagaraTypeRegistry::GetRegisteredType(pFVar38,local_d8);
                            iVar29 = FNiagaraTypeDefinition::GetSize(pFVar39);
                            if ((iVar29 != 4) &&
                               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("Parameter.GetSizeInBytes() == sizeof(T)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                                  ,0x1ae,L""), bVar22)) {
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            piVar37 = (int *)(**(code **)(this_01->_padding_ + 0x58))(this_01);
                            if ((piVar37 == (int *)0x0) || (*piVar37 == -1)) {
                              iVar27 = 0;
                            }
                            else {
                              iVar27 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                                                 (this_01,*piVar37);
                            }
                          }
                          local_1b8 = iVar27;
                          if ((bVar16) && (bVar16 = false, local_d0 != (void *)0x0)) {
                            FMemory::Free(local_d0);
                          }
                          if (pFVar9[(longlong)(int)uVar25 * 0xa8 + 0x94] !=
                              (FScriptContainerElement)0x0) {
                            lVar36 = *(longlong *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x24);
                            if (lVar36 == 0) {
                              iVar24 = *(int *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x14);
                            }
                            else {
                              bVar17 = true;
                              local_c0 = lVar36;
                              if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 ==
                                  (UObject *)0x0) {
                                local_b8 = -1;
                              }
                              else {
                                pFVar38 = FNiagaraTypeRegistry::Get();
                                local_b8 = FNiagaraTypeRegistry::RegisterTypeInternal
                                                     (pFVar38,&FNiagaraTypeDefinition::IntDef);
                              }
                              local_b0 = (void *)0x0;
                              local_a8 = 0;
                              pFVar38 = FNiagaraTypeRegistry::Get();
                              pFVar39 = FNiagaraTypeRegistry::GetRegisteredType(pFVar38,local_b8);
                              iVar24 = FNiagaraTypeDefinition::GetSize(pFVar39);
                              if ((iVar24 != 4) &&
                                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("Parameter.GetSizeInBytes() == sizeof(T)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                                  ,0x1ae,L""), bVar22)) {
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              pFVar54 = local_190;
                              piVar37 = (int *)(**(code **)(local_190->_padding_ + 0x58))(local_190)
                              ;
                              if ((piVar37 == (int *)0x0) || (*piVar37 == -1)) {
                                iVar24 = 0;
                              }
                              else {
                                iVar24 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                                                   (pFVar54,*piVar37);
                              }
                            }
                            iStack_1b4 = iVar24;
                            if ((bVar17) && (bVar17 = false, local_b0 != (void *)0x0)) {
                              FMemory::Free(local_b0);
                            }
                          }
                          iVar29 = 1;
                          if (1 < (byte)pFVar9[(longlong)(int)uVar25 * 0xa8 + 0x94]) {
                            lVar36 = *(longlong *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x2c);
                            if (lVar36 == 0) {
                              iVar29 = *(int *)(pFVar9 + (longlong)(int)uVar25 * 0xa8 + 0x18);
                            }
                            else {
                              local_a0 = lVar36;
                              if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 ==
                                  (UObject *)0x0) {
                                local_98 = -1;
                              }
                              else {
                                pFVar38 = FNiagaraTypeRegistry::Get();
                                local_98 = FNiagaraTypeRegistry::RegisterTypeInternal
                                                     (pFVar38,&FNiagaraTypeDefinition::IntDef);
                              }
                              iVar29 = 0;
                              local_90 = (void *)0x0;
                              local_88 = 0;
                              pFVar38 = FNiagaraTypeRegistry::Get();
                              pFVar39 = FNiagaraTypeRegistry::GetRegisteredType(pFVar38,local_98);
                              iVar28 = FNiagaraTypeDefinition::GetSize(pFVar39);
                              if ((iVar28 != 4) &&
                                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("Parameter.GetSizeInBytes() == sizeof(T)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                                  ,0x1ae,L""), bVar23)) {
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              pFVar54 = local_190;
                              piVar37 = (int *)(**(code **)(local_190->_padding_ + 0x58))(local_190)
                              ;
                              bVar23 = true;
                              if ((piVar37 != (int *)0x0) && (bVar23 = true, *piVar37 != -1)) {
                                iVar29 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                                                   (pFVar54,*piVar37);
                              }
                            }
                            if ((bVar23) && (bVar23 = false, local_90 != (void *)0x0)) {
                              FMemory::Free(local_90);
                            }
                          }
                          if (iVar27 < iVar24) {
                            iVar24 = iVar27;
                          }
                          iVar27 = iVar29;
                          if (iVar24 < iVar29) {
                            iVar27 = iVar24;
                          }
                          pFVar54 = local_170;
                          pFVar55 = local_1d8;
                          iVar24 = local_1e4;
                          if (iVar27 < 1) goto LAB_1492f4a06;
                        }
                        pFVar48 = local_1d8;
                        FVar43 = (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>)
                                 &local_1d8->PerStageInfo;
                        iVar24 = (local_1d8->PerStageInfo).ArrayNum;
                        if (iVar24 == (local_1d8->PerStageInfo).ArrayMax) {
                          iVar24 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>_>
                                             (0x414,(
                                                  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>
                                                  *)FVar43,&(local_1d8->PerStageInfo).ArrayMax);
                        }
                        (pFVar48->PerStageInfo).ArrayNum = iVar24 + 1;
                        FVar12 = (pFVar48->PerStageInfo).AllocatorInstance.SecondaryData;
                        if (FVar12 != (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>)
                                      0x0) {
                          FVar43 = FVar12;
                        }
                        psVar6 = (short *)((longlong)FVar43 + (longlong)iVar24 * 0x14);
                        DefaultConstructItems<FNiagaraComputeInstanceData::FPerStageInfo,int>
                                  (psVar6,1);
                        if ((uVar25 != (int)(short)uVar25) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IntFitsIn<OutType>(In)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                                ,0xaa,
                                                L"Loss of data caused by narrowing conversion, In = %lld"
                                               ), bVar22)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        *psVar6 = (short)uVar25;
                        if ((iVar26 != (short)iVar26) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IntFitsIn<OutType>(In)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                                ,0xaa,
                                                L"Loss of data caused by narrowing conversion, In = %lld"
                                               ), bVar22)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        iVar24 = local_1e4;
                        sVar47 = (short)local_1e4;
                        psVar6[1] = (short)iVar26;
                        if ((local_1e4 != sVar47) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IntFitsIn<OutType>(In)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                                ,0xaa,
                                                L"Loss of data caused by narrowing conversion, In = %lld"
                                               ), bVar22)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        sVar50 = (short)local_1c8;
                        psVar6[2] = sVar47;
                        if ((local_1c8 != sVar50) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IntFitsIn<OutType>(In)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                                ,0xaa,
                                                L"Loss of data caused by narrowing conversion, In = %lld"
                                               ), bVar22)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        *(ulonglong *)(psVar6 + 4) = CONCAT44(iStack_1b4,local_1b8);
                        *(int *)(psVar6 + 8) = iVar29;
                        psVar6[3] = sVar50;
                        local_1d8->bHasMultipleStages = 1;
                        local_1d8->TotalDispatches = local_1d8->TotalDispatches + iVar26;
                        pFVar54 = local_170;
                        pFVar55 = local_1d8;
                      }
                    }
LAB_1492f4a06:
                    uVar25 = uVar25 + 1;
                    this_01 = local_190;
                    iVar26 = local_1c8;
                  } while ((int)uVar25 <= *(int *)((longlong)local_1d0 + 0x10));
                }
                local_1e4 = iVar24 + 1;
                FVar53 = local_1d0;
              } while (local_1e4 < iVar26);
            }
            local_1d0 = (ForElementType<FNiagaraSimStageExecutionLoopData>)((longlong)FVar53 + 0x14)
            ;
          }
          this->TotalDispatches = this->TotalDispatches + pFVar55->TotalDispatches;
        }
      }
      local_158.DataPtr = (FNiagaraEmitterExecutionIndex *)((longlong)local_188 + 4);
      uVar25 = local_1e0;
      local_188 = (FWeakObjectPtr *)local_158.DataPtr;
    } while (local_158.DataPtr != local_138);
  }
  if ((param_1->ActiveGPUEmitterCount != uVar25) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSystemInstance->ActiveGPUEmitterCount == InstanceIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUSystemTick.cpp"
                          ,299,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar48 = (FNiagaraComputeInstanceData *)this->InstanceData_ParamData_Packed;
  this->InstanceCount = uVar25;
  if (((int)uVar25 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  (this->InstanceDataDebuggingOnly).DataPtr = pFVar48;
  *(ulonglong *)&(this->InstanceDataDebuggingOnly).ArrayNum = CONCAT44(local_158._12_4_,uVar25);
  return;
}

// FNiagaraGPUSystemTick @ 1493cc350

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

FNiagaraGPUSystemTick * __thiscall
FNiagaraGPUSystemTick::FNiagaraGPUSystemTick
          (FNiagaraGPUSystemTick *this,FNiagaraGPUSystemTick *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  
  (this->ExternalUnformBuffers_RT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExternalUnformBuffers_RT).ArrayMax;
  iVar2 = (param_1->ExternalUnformBuffers_RT).ArrayNum;
  pFVar3 = (param_1->ExternalUnformBuffers_RT).AllocatorInstance.Data;
  (this->ExternalUnformBuffers_RT).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TRefCountPtr<FRHIUniformBuffer>,TRefCountPtr<FRHIUniformBuffer>,int>
              ((this->ExternalUnformBuffers_RT).AllocatorInstance.Data,
               (TRefCountPtr<FRHIUniformBuffer> *)pFVar3,iVar2);
  }
  this->SystemInstanceID = param_1->SystemInstanceID;
  this->SystemGpuComputeProxy = param_1->SystemGpuComputeProxy;
  this->DIInstanceData = param_1->DIInstanceData;
  this->InstanceData_ParamData_Packed = param_1->InstanceData_ParamData_Packed;
  this->GlobalParamData = param_1->GlobalParamData;
  this->SystemParamData = param_1->SystemParamData;
  this->OwnerParamData = param_1->OwnerParamData;
  this->InstanceCount = param_1->InstanceCount;
  this->TotalDispatches = param_1->TotalDispatches;
  this->bIsFinalTick = param_1->bIsFinalTick;
  this->bHasInterpolatedParameters = param_1->bHasInterpolatedParameters;
  iVar2 = (param_1->InstanceDataDebuggingOnly).ArrayNum;
  uVar4 = *(undefined4 *)&(param_1->InstanceDataDebuggingOnly).field_0xc;
  (this->InstanceDataDebuggingOnly).DataPtr = (param_1->InstanceDataDebuggingOnly).DataPtr;
  (this->InstanceDataDebuggingOnly).ArrayNum = iVar2;
  *(undefined4 *)&(this->InstanceDataDebuggingOnly).field_0xc = uVar4;
  return this;
}

// operator() @ 150540440

bool __thiscall `FNiagaraGPUSystemTick::Init'::__l36::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<101103177960521888>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<101103177960521888>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

