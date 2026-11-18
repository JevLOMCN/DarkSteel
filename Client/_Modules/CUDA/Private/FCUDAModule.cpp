// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CUDA
// Functions: 12

// StartupModule @ 148cfb930

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCUDAModule::StartupModule(FCUDAModule *this)

{
  _func___cdecl_cudaError_enum_int_ptr *p_Var1;
  cudaError_enum cVar2;
  void *pvVar3;
  int local_res8 [2];
  
  if (this->DriverLibrary != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
    this->DriverLibrary = (void *)0x0;
  }
  memset(&this->DriverApiPtrs,0,0xa40);
  pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"nvcuda.dll");
  this->DriverLibrary = pvVar3;
  if (pvVar3 != (void *)0x0) {
    LoadCudaDriverFunctions(pvVar3,&this->DriverApiPtrs);
    p_Var1 = (this->DriverApiPtrs).cuDriverGetVersion;
    local_res8[0] = -1;
    if (((p_Var1 != (_func___cdecl_cudaError_enum_int_ptr *)0x0) &&
        (cVar2 = (*p_Var1)(local_res8), cVar2 == CUDA_SUCCESS)) && (10999 < local_res8[0])) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FCUDAModule>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                           *)&FCoreDelegates::OnPostEngineInit,(FCUDAModule *)local_res8,
                          (pmf_67ed89b3)this);
      if ((byte)LogCUDA._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      return;
    }
    if (this->DriverLibrary != (HMODULE)0x0) {
      FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
      this->DriverLibrary = (void *)0x0;
    }
    memset(&this->DriverApiPtrs,0,0xa40);
  }
  return;
}

// ShutdownModule @ 148cfba30

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

void __thiscall FCUDAModule::ShutdownModule(FCUDAModule *this)

{
  if (this->DriverLibrary != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
    this->DriverLibrary = (void *)0x0;
  }
  memset(&this->DriverApiPtrs,0,0xa40);
  return;
}

// DriverAPI @ 148cfc1e0

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

CUDA_DRIVER_API_FUNCTION_LIST * __thiscall FCUDAModule::DriverAPI(FCUDAModule *this)

{
  return &this->DriverApiPtrs;
}

// GetCudaContext @ 148cfc320

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

CUctx_st * __thiscall FCUDAModule::GetCudaContext(FCUDAModule *this)

{
  CUctx_st **ppCVar1;
  
  if (this->DriverLibrary == (void *)0x0) {
    if (1 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      return (CUctx_st *)0x0;
    }
  }
  else {
    if (this->rhiDeviceIndex != 0xffffffff) {
      ppCVar1 = TMapBase<unsigned_int,CUctx_st_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>_>
                ::FindChecked((TMapBase<unsigned_int,CUctx_st_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>_>
                               *)&this->contextMap,this->rhiDeviceIndex);
      return *ppCVar1;
    }
    if (1 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
  }
  return (CUctx_st *)0x0;
}

// GetCudaContextForDevice @ 148cfc3a0

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

CUctx_st * __thiscall FCUDAModule::GetCudaContextForDevice(FCUDAModule *this,int param_1)

{
  TMap<unsigned_int,CUctx_st_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>_>
  *this_00;
  int iVar1;
  cudaError_enum cVar2;
  CUctx_st **ppCVar3;
  undefined1 *puVar4;
  TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&> local_res8;
  CUctx_st *local_res18 [2];
  CUctx_st ***local_28;
  CUctx_st **local_20;
  
  if (this->DriverLibrary == (void *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
  }
  this_00 = &this->contextMap;
  if (*(int *)&(this->contextMap).field_0x8 != *(int *)&(this->contextMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->contextMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->contextMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->contextMap).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_148cfc480;
        iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res18[0] = (CUctx_st *)0x0;
  cVar2 = (*(this->DriverApiPtrs).cuCtxCreate)(local_res18,0,param_1);
  if (cVar2 != CUDA_SUCCESS) {
    if (1 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
    return local_res18[0];
  }
  if (3 < (byte)LogCUDA._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  local_res8.Value._0_4_ = param_1;
  TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&>_>
            ((TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_28);
LAB_148cfc480:
  ppCVar3 = TMapBase<unsigned_int,CUctx_st_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,CUctx_st_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>_>
                           *)this_00,param_1);
  return *ppCVar3;
}

// GetCudaDeviceIndex @ 148cfc4d0

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

uint __thiscall FCUDAModule::GetCudaDeviceIndex(FCUDAModule *this)

{
  return this->rhiDeviceIndex;
}

// InitCuda @ 148cfc510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCUDAModule::InitCuda(FCUDAModule *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  cudaError_enum cVar9;
  uint uVar10;
  size_t sVar11;
  FString *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2c0;
  int local_2b8;
  int local_2b4;
  uint local_2b0;
  undefined1 local_2ac [12];
  uint *local_2a0;
  undefined1 *local_298;
  FDestructionSentinel local_290;
  FString local_278;
  FString local_268;
  FScriptContainerElement local_258 [256];
  ForAnyElementType local_158;
  FScriptContainerElement *local_150;
  int local_148;
  uchar local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  bVar6 = IsRHIDeviceNVIDIA();
  if (bVar6) {
    this->rhiDeviceIndex = 0xffffffff;
    if (3 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
    cVar9 = (*(this->DriverApiPtrs).cuInit)(0);
    if (cVar9 == CUDA_SUCCESS) {
      if (3 < (byte)LogCUDA._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      }
      pFVar17 = (FScriptContainerElement *)0x0;
      local_2b8 = 0;
      cVar9 = (*(this->DriverApiPtrs).cuDeviceGetCount)(&local_2b8);
      if (cVar9 == CUDA_SUCCESS) {
        if (3 < (byte)LogCUDA._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
        }
      }
      else if (1 < (byte)LogCUDA._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      }
      if (local_2b8 == 0) {
        if (1 < (byte)LogCUDA._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_There_are_no_av_151cbe4a0,
                     (FLogCategoryBase *)&LogCUDA);
        }
      }
      else {
        pFVar14 = pFVar17;
        if (0 < local_2b8) {
          do {
            uVar13 = (uint)pFVar14;
            cVar9 = (*(this->DriverApiPtrs).cuDeviceGet)(&local_2b4,uVar13);
            if (cVar9 == CUDA_SUCCESS) {
              cVar9 = (*(this->DriverApiPtrs).cuDeviceGetName)((char *)local_138,0x100,local_2b4);
              pFVar14 = pFVar17;
              if (cVar9 == CUDA_SUCCESS) {
                local_158.Data = (FScriptContainerElement *)0x0;
                sVar11 = strlen((char *)local_138);
                local_148 = UE::Core::Private::GetConvertedLength
                                      ((wchar_t *)0x0,local_138,(int)sVar11);
                uVar10 = local_148 + 1;
                uVar16 = uVar10;
                if (uVar10 < 0x81) {
                  if (local_158.Data != (FScriptContainerElement *)0x0) {
                    uVar16 = 0;
                    goto LAB_148cfc74c;
                  }
                }
                else {
LAB_148cfc74c:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_158,0,uVar16,2);
                }
                local_150 = local_258;
                if (local_158.Data != (FScriptContainerElement *)0x0) {
                  local_150 = local_158.Data;
                }
                UE::Core::Private::Convert((wchar_t *)local_150,uVar10,local_138,(int)sVar11 + 1);
                pFVar12 = ::FString::FString(&local_278,(wchar_t *)local_150);
                if (&local_268 != pFVar12) {
                  pFVar14 = (pFVar12->Data).AllocatorInstance.Data;
                  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  (pFVar12->Data).ArrayNum = 0;
                  (pFVar12->Data).ArrayMax = 0;
                }
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
                if (local_158.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data);
                }
                if (3 < (byte)LogCUDA._0_1_) {
                  UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
                }
              }
              else if (2 < (byte)LogCUDA._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
              }
              bVar6 = IsRHISelectedDevice(this,local_2b4);
              if (bVar6) {
                if (3 < (byte)LogCUDA._0_1_) {
                  UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
                }
                cVar9 = (*(this->DriverApiPtrs).cuCtxCreate)((CUctx_st **)(local_2ac + 4),0,uVar13);
                if (cVar9 != CUDA_SUCCESS) {
                  if (1 < (byte)LogCUDA._0_1_) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
                  }
                  if (pFVar14 == (FScriptContainerElement *)0x0) {
                    return;
                  }
                  FMemory::Free(pFVar14);
                  return;
                }
                if (3 < (byte)LogCUDA._0_1_) {
                  UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
                }
                local_2a0 = &local_2b0;
                local_298 = local_2ac + 4;
                local_2b0 = uVar13;
                TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&>_>
                          ((TSet<TTuple<unsigned_int,CUctx_st_*>,TDefaultMapHashableKeyFuncs<unsigned_int,CUctx_st_*,0>,FDefaultSetAllocator>
                            *)&this->contextMap,
                           (TPairInitializer<unsigned_int_&&,CUctx_st_*_const_&> *)local_2ac,
                           (bool *)&local_2a0);
                this->rhiDeviceIndex = uVar13;
                if (pFVar14 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar14);
                }
                break;
              }
              if (5 < (byte)LogCUDA._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
              }
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar14);
              }
            }
            else if (2 < (byte)LogCUDA._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
            }
            pFVar14 = (FScriptContainerElement *)(ulonglong)(uVar13 + 1);
          } while ((int)(uVar13 + 1) < local_2b8);
        }
        if (this->rhiDeviceIndex == 0xffffffff) {
          if (1 < (byte)LogCUDA._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
          }
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostCUDAInit
                     ,(FWriteAccessScope *)&local_290);
          puVar1 = &(this->OnPostCUDAInit).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar6 = false;
          uVar13 = *(int *)&(this->OnPostCUDAInit).field_0x10 - 1;
          if (-1 < (int)uVar13) {
            lVar18 = (longlong)(int)uVar13;
            lVar15 = lVar18 << 4;
            bVar6 = false;
            do {
              iVar2 = *(int *)&(this->OnPostCUDAInit).field_0x10;
              uVar10 = 0;
              if ((int)uVar13 < iVar2) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (local_2c8 = lVar18, local_2c0 = (longlong)iVar2,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar3 = *(longlong *)&(this->OnPostCUDAInit).field_0x8;
              if (((*(int *)(lVar3 + 8 + lVar15) == 0) ||
                  (plVar4 = *(longlong **)(lVar3 + lVar15), plVar4 == (longlong *)0x0)) ||
                 (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
                bVar6 = true;
              }
              lVar18 = lVar18 + -1;
              lVar15 = lVar15 + -0x10;
              uVar13 = uVar13 - 1;
            } while (-1 < (int)uVar13);
          }
          puVar1 = &(this->OnPostCUDAInit).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar6) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPostCUDAInit,
                       false);
          }
          if (local_290.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
          }
        }
      }
    }
    else {
      if (1 < (byte)LogCUDA._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      }
      if (this->DriverLibrary != (HMODULE)0x0) {
        FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
        this->DriverLibrary = (void *)0x0;
      }
      memset(&this->DriverApiPtrs,0,0xa40);
    }
  }
  else {
    if (3 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
    if (this->DriverLibrary != (HMODULE)0x0) {
      FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
      this->DriverLibrary = (void *)0x0;
    }
    memset(&this->DriverApiPtrs,0,0xa40);
  }
  return;
}

// IsAvailable @ 148cfcbc0

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

bool __thiscall FCUDAModule::IsAvailable(FCUDAModule *this)

{
  return this->DriverLibrary != (void *)0x0;
}

// IsDeviceIndexRHISelected @ 148cfcbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCUDAModule::IsDeviceIndexRHISelected(FCUDAModule *this,int param_1)

{
  bool bVar1;
  cudaError_enum cVar2;
  undefined1 auStack_168 [32];
  int local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((this->DriverLibrary == (void *)0x0) || (this == (FCUDAModule *)0xffffffffffffffd0)) {
    if (2 < (byte)LogCUDA._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CUDA\\Source\\Private\\CudaModule.cpp"
                 ,0x52,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    cVar2 = (*(this->DriverApiPtrs).cuDeviceGet)(local_148,param_1);
    if (cVar2 == CUDA_SUCCESS) {
      bVar1 = IsRHISelectedDevice(this,local_148[0]);
      return bVar1;
    }
    if (2 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
  }
  return false;
}

// IsRHISelectedDevice @ 148cfcce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCUDAModule::IsRHISelectedDevice(FCUDAModule *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  cudaError_enum cVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  FStaticBasicLogRecord *pFVar11;
  undefined1 auStack_2f8 [32];
  int local_2d8;
  longlong *local_2c8;
  longlong *local_2c0;
  int local_2b8;
  int local_2b4;
  uint local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  CUuuid_st local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  undefined1 local_158 [296];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar5 == 4) {
    if ((GDynamicRHI == (FDynamicRHI *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GDynamicRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\IVulkanDynamicRHI.h"
                           ,0x6b,L"Tried to fetch RHI too early"), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if ((iVar5 != 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::Vulkan",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\IVulkanDynamicRHI.h"
                           ,0x6c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    plVar7 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    puVar8 = (undefined4 *)(**(code **)(*plVar7 + 0x4e0))(plVar7);
    local_2a0 = *puVar8;
    uStack_29c = puVar8[1];
    uStack_298 = puVar8[2];
    uStack_294 = puVar8[3];
    cVar6 = (*(this->DriverApiPtrs).cuDeviceGetUuid)(&local_290,param_1);
    if (cVar6 == CUDA_SUCCESS) {
      iVar5 = memcmp(&local_290,&local_2a0,0x10);
      return iVar5 == 0;
    }
    if (2 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
  }
  else if (iVar5 == 2) {
    piVar9 = operator_new__(0x40);
    cVar6 = (*(this->DriverApiPtrs).cuDeviceGetLuid)((char *)piVar9,&local_2b0,param_1);
    if (cVar6 == CUDA_SUCCESS) {
      puVar10 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
      local_2c0 = (longlong *)0x0;
      iVar5 = (**(code **)*puVar10)(puVar10,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_2c0);
      if (iVar5 < 0) {
        if (1 < (byte)LogCUDA._0_1_) {
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CUDA\\Source\\Private\\CudaModule.cpp"
                     ,0x52,Yes);
          local_2d8 = iVar5;
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
        bVar3 = false;
      }
      else {
        local_2c8 = (longlong *)0x0;
        (**(code **)(*local_2c0 + 0x38))(local_2c0,&local_2c8);
        (**(code **)(*local_2c8 + 0x40))(local_2c8,local_158);
        local_2a8 = local_30;
        uVar2 = local_2a8;
        if (((int)local_30 == *piVar9) &&
           (local_2a8._4_4_ = (int)((ulonglong)local_30 >> 0x20), local_2a8._4_4_ == piVar9[1])) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        local_2a8 = uVar2;
        if (local_2c8 != (longlong *)0x0) {
          (**(code **)(*local_2c8 + 0x10))();
        }
      }
      if (local_2c0 != (longlong *)0x0) {
        (**(code **)(*local_2c0 + 0x10))();
        return bVar3;
      }
      return bVar3;
    }
    if (2 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
  }
  else if (iVar5 == 3) {
    piVar9 = operator_new__(0x40);
    cVar6 = (*(this->DriverApiPtrs).cuDeviceGetLuid)((char *)piVar9,&local_2ac,param_1);
    if (cVar6 == CUDA_SUCCESS) {
      plVar7 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
      (**(code **)(*plVar7 + 0x158))(plVar7,&local_2b8);
      if ((local_2b8 == *piVar9) && (local_2b4 == piVar9[1])) {
        return true;
      }
    }
    else if (2 < (byte)LogCUDA._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCUDA);
    }
  }
  else {
    if (iVar5 == 7) {
      if ((byte)LogCUDA._0_1_ < 3) {
        return false;
      }
      pFVar11 = &::LOG_Static;
    }
    else {
      if ((byte)LogCUDA._0_1_ < 3) {
        return false;
      }
      pFVar11 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogCUDA);
  }
  return false;
}

// LoadCuda @ 148cfd060

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

bool __thiscall FCUDAModule::LoadCuda(FCUDAModule *this)

{
  _func___cdecl_cudaError_enum_int_ptr *p_Var1;
  cudaError_enum cVar2;
  void *pvVar3;
  int local_res8 [2];
  
  if (this->DriverLibrary != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
    this->DriverLibrary = (void *)0x0;
  }
  memset(&this->DriverApiPtrs,0,0xa40);
  pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"nvcuda.dll");
  this->DriverLibrary = pvVar3;
  if (pvVar3 != (void *)0x0) {
    LoadCudaDriverFunctions(pvVar3,&this->DriverApiPtrs);
    p_Var1 = (this->DriverApiPtrs).cuDriverGetVersion;
    local_res8[0] = -1;
    if (p_Var1 != (_func___cdecl_cudaError_enum_int_ptr *)0x0) {
      cVar2 = (*p_Var1)(local_res8);
      if ((cVar2 == CUDA_SUCCESS) && (10999 < local_res8[0])) {
        return true;
      }
    }
    if (this->DriverLibrary != (HMODULE)0x0) {
      FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
      this->DriverLibrary = (void *)0x0;
    }
    memset(&this->DriverApiPtrs,0,0xa40);
  }
  return false;
}

// UnloadCuda @ 148cfd560

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

void __thiscall FCUDAModule::UnloadCuda(FCUDAModule *this)

{
  if (this->DriverLibrary != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DriverLibrary);
    this->DriverLibrary = (void *)0x0;
  }
  memset(&this->DriverApiPtrs,0,0xa40);
  return;
}

