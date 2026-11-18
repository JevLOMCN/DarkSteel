// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// ~INiagaraSimCacheCustomStorageInterface @ 148e566a0

void __thiscall
INiagaraSimCacheCustomStorageInterface::~INiagaraSimCacheCustomStorageInterface
          (INiagaraSimCacheCustomStorageInterface *this)

{
  *this = (INiagaraSimCacheCustomStorageInterface)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  return;
}

// GetSimCacheRendererAttributes @ 148e6eb30

TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> * __thiscall
INiagaraSimCacheCustomStorageInterface::GetSimCacheRendererAttributes
          (INiagaraSimCacheCustomStorageInterface *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// SimCacheBeginWrite @ 148e7e140

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

UObject * __thiscall
INiagaraSimCacheCustomStorageInterface::SimCacheBeginWrite
          (INiagaraSimCacheCustomStorageInterface *this,UObject *param_1,
          FNiagaraSystemInstance *param_2,void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  return (UObject *)0x0;
}

// SimCacheCompareFrame @ 148e7e3b0

bool __thiscall
INiagaraSimCacheCustomStorageInterface::SimCacheCompareFrame
          (INiagaraSimCacheCustomStorageInterface *this,UObject *param_1,UObject *param_2,
          int param_3,TOptional<float> param_4,FString *param_5)

{
  ::FString::operator=(param_5,L"Compare not implemented");
  return false;
}

// SimCacheEndWrite @ 148e7eb90

bool __thiscall
INiagaraSimCacheCustomStorageInterface::SimCacheEndWrite
          (INiagaraSimCacheCustomStorageInterface *this,UObject *param_1)

{
  return true;
}

// SimCachePostReadFrame @ 148e7eda0

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
INiagaraSimCacheCustomStorageInterface::SimCachePostReadFrame
          (INiagaraSimCacheCustomStorageInterface *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  return;
}

// SimCacheReadFrame @ 148e7ef80

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
INiagaraSimCacheCustomStorageInterface::SimCacheReadFrame
          (INiagaraSimCacheCustomStorageInterface *this,
          FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pwVar5 = L"";
  pcVar1 = *(code **)((longlong)*this + 0x28);
  if (param_1->OptionalPerInstanceData == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_1->StorageObject != (UObject *)0x0) {
    uVar3 = (*pcVar1)(this,param_1->StorageObject,param_1->FrameIndexA,param_1->FrameIndexB,
                      param_1->FrameInterp,param_1->SystemInstance,param_1->OptionalPerInstanceData)
    ;
    return (bool)uVar3;
  }
  pFVar4 = GetTypeName<UObject>(&local_18);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// SimCacheReadFrame @ 148e7f050

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
INiagaraSimCacheCustomStorageInterface::SimCacheReadFrame
          (INiagaraSimCacheCustomStorageInterface *this,UObject *param_1,int param_2,int param_3,
          float param_4,FNiagaraSystemInstance *param_5,void *param_6)

{
  return true;
}

// SimCacheToJson @ 148e7fc20

TSharedPtr<FJsonObject,1> * __thiscall
INiagaraSimCacheCustomStorageInterface::SimCacheToJson
          (INiagaraSimCacheCustomStorageInterface *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__,UObject *param_1,int param_2,
          TOptional<FString> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// SimCacheWriteFrame @ 148e7fee0

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
INiagaraSimCacheCustomStorageInterface::SimCacheWriteFrame
          (INiagaraSimCacheCustomStorageInterface *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  return true;
}

// _getUObject @ 148e867a0

UObject * __thiscall
INiagaraSimCacheCustomStorageInterface::_getUObject(INiagaraSimCacheCustomStorageInterface *this)

{
  return (UObject *)0x0;
}

