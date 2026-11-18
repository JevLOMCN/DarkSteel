// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// CanExecuteOnTarget @ 148e5cf80

bool __thiscall
UNiagaraDataInterfaceArray::CanExecuteOnTarget
          (UNiagaraDataInterfaceArray *this,ENiagaraSimTarget param_1)

{
  return true;
}

// DestroyPerInstanceData @ 148e62e30

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
UNiagaraDataInterfaceArray::DestroyPerInstanceData
          (UNiagaraDataInterfaceArray *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e62e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1,param_2);
  return;
}

// DrawDebugHud @ 148e639e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceArray::DrawDebugHud
          (UNiagaraDataInterfaceArray *this,FNDIDrawDebugHudContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e63a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))(plVar1,param_1);
  return;
}

// GetVMExternalFunction @ 148e6ffc0

void __thiscall
UNiagaraDataInterfaceArray::GetVMExternalFunction
          (UNiagaraDataInterfaceArray *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e7002f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2,param_3);
  return;
}

// InitPerInstanceData @ 148e74400

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
UNiagaraDataInterfaceArray::InitPerInstanceData
          (UNiagaraDataInterfaceArray *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e7446f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,this,param_1,param_2);
  return (bool)uVar4;
}

// PerInstanceDataSize @ 148e75a20

int __thiscall UNiagaraDataInterfaceArray::PerInstanceDataSize(UNiagaraDataInterfaceArray *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e75a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1);
  return iVar4;
}

// ProvidePerInstanceDataForRenderThread @ 148e78e50

void __thiscall
UNiagaraDataInterfaceArray::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceArray *this,void *param_1,void *param_2,ulong64 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e78ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1,param_1,param_2,param_3);
  return;
}

// StaticClass @ 148e81550

UClass * __cdecl UNiagaraDataInterfaceArray::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArray",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArray,0x50,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArray>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArray>,aFStackX_8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton;
}

// UNiagaraDataInterfaceArray @ 1490b32a0

UNiagaraDataInterfaceArray * __thiscall
UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray
          (UNiagaraDataInterfaceArray *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->ArrayRWGuard).Mutex.Mutex.Ptr = (void *)0x0;
  this->GpuSyncMode = SyncCpuToGpu;
  return this;
}

// UNiagaraDataInterfaceArray @ 1490b32e0

UNiagaraDataInterfaceArray * __thiscall
UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray
          (UNiagaraDataInterfaceArray *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->ArrayRWGuard).Mutex.Mutex.Ptr = (void *)0x0;
  this->GpuSyncMode = SyncCpuToGpu;
  return this;
}

// ~UNiagaraDataInterfaceArray @ 1490b8c20

void __thiscall
UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray(UNiagaraDataInterfaceArray *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ArrayRWGuard);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ArrayRWGuard);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 1490bd6c0

bool __thiscall
`UNiagaraDataInterfaceArray::SimCacheCompareFrame'::__l2::<lambda_1>::operator()
          (void *this,FNDIArraySimCacheDataFrame *param_1,FNDIArraySimCacheDataFrame *param_2,
          wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FScriptContainerElement *local_38 [2];
  
  if (param_1->NumElements == param_2->NumElements) {
    iVar9 = 0;
    iVar1 = param_1->DataOffset;
    iVar2 = param_2->DataOffset;
    lVar5 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
    lVar6 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
    if (0 < param_1->NumElements) {
      do {
        cVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x18) + 0x98))
                          ((longlong *)**(undefined8 **)((longlong)this + 0x18),iVar1 + lVar5,
                           iVar2 + lVar6,iVar9,**(undefined4 **)((longlong)this + 0x20));
        if (cVar7 == '\0') {
          (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x18) + 0xa0))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x18),local_38,
                     **(undefined8 **)((longlong)this + 8),param_1,iVar9);
          (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x18) + 0xa0))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x18),local_48,
                     **(undefined8 **)((longlong)this + 0x10),param_2,iVar9);
          ::FString::PrintfImpl(&local_58,L"Element %d Mismatch (%s -> %s) for %s data");
          pFVar3 = *(FString **)this;
          if (pFVar3 != &local_58) {
            pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (pFVar3->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar3->Data).ArrayNum = local_58.Data.ArrayNum;
            (pFVar3->Data).ArrayMax = local_58.Data.ArrayMax;
            local_58.Data.ArrayNum = 0;
            local_58.Data.ArrayMax = 0;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
          goto LAB_1490bd8a5;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1->NumElements);
    }
    bVar8 = true;
  }
  else {
    ::FString::PrintfImpl(&local_68,L"Element Count Mismatch (%d -> %d) for %s data");
    pFVar3 = *(FString **)this;
    local_38[0] = local_68.Data.AllocatorInstance.Data;
    if (pFVar3 != &local_68) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = local_68.Data.ArrayNum;
      (pFVar3->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_38[0] = local_68.Data.AllocatorInstance.Data;
    }
LAB_1490bd8a5:
    if (local_38[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0]);
    }
    bVar8 = false;
  }
  return bVar8;
}

// BuildShaderParameters @ 1490d0ac0

void __thiscall
UNiagaraDataInterfaceArray::BuildShaderParameters
          (UNiagaraDataInterfaceArray *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<INDIArrayProxyBase::FShaderParameters>::GetStructMetadata
                     ();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CopyToInternal @ 1490d8cd0

bool __thiscall
UNiagaraDataInterfaceArray::CopyToInternal
          (UNiagaraDataInterfaceArray *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  longlong *plVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar6 = StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar6->_padding_)) {
    *(int *)((longlong)&param_1[1]._padding_ + 4) = this->MaxElements;
    *(ENiagaraGpuSyncMode *)&param_1[1]._padding_ = this->GpuSyncMode;
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 == (longlong *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L"");
      if (bVar4) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        uVar5 = (*UNRECOVERED_JUMPTABLE)();
        return (bool)uVar5;
      }
    }
    pFVar3 = (param_1->Proxy).Ptr;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0xa8);
    if (pFVar3 == (FNiagaraDataInterfaceProxy *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar4) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        uVar5 = (*UNRECOVERED_JUMPTABLE)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001490d8dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar2,pFVar3);
    return (bool)uVar5;
  }
  pFVar7 = GetTypeName<UNiagaraDataInterfaceArray>(&local_28);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar8);
}

// Equals @ 1490f2330

bool __thiscall
UNiagaraDataInterfaceArray::Equals(UNiagaraDataInterfaceArray *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  UClass *pUVar3;
  INDIArrayProxyBase *pIVar4;
  INDIArrayProxyBase *pIVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UNiagaraDataInterface *)0x0) && (param_1->_padding_ == this->_padding_)) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar6 = GetTypeName<UNiagaraDataInterfaceArray>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    if ((*(int *)((longlong)&param_1[1]._padding_ + 4) == this->MaxElements) &&
       ((ENiagaraGpuSyncMode)param_1[1]._padding_ == this->GpuSyncMode)) {
      pIVar4 = UNiagaraDataInterface::GetProxyAs<INDIArrayProxyBase>((UNiagaraDataInterface *)this);
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pIVar4 + 0xb0);
      pIVar5 = UNiagaraDataInterface::GetProxyAs<INDIArrayProxyBase>(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001490f23bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(pIVar4,pIVar5);
      return (bool)uVar2;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149108be0

UClass * __cdecl UNiagaraDataInterfaceArray::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArray",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArray,0x50,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArray>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArray>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.InnerSingleton;
}

// PostInitProperties @ 14911f7f0

void __thiscall UNiagaraDataInterfaceArray::PostInitProperties(UNiagaraDataInterfaceArray *this)

{
  TObjectPtr<UObject>_u_0 TVar1;
  UClass *pUVar2;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    TVar1 = (TObjectPtr<UObject>_u_0)this->_padding_;
    pUVar2 = StaticClass();
    if ((UClass *)TVar1.DebugPtr != pUVar2) {
      local_28 = TVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)TVar1.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(TVar1.DebugPtr);
      }
      local_1e = 0;
      local_20 = 1;
      local_1c = 0xffffffffffffffff;
      local_14 = 0xffffffff;
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      FNiagaraTypeRegistry::Register
                ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
    }
  }
  if (((this->_padding_ & 0x10) == 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PostLoad @ 149120c00

void __thiscall UNiagaraDataInterfaceArray::PostLoad(UNiagaraDataInterfaceArray *this)

{
  UObject::PostLoad((UObject *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// SetShaderParameters @ 149132880

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
UNiagaraDataInterfaceArray::SetShaderParameters
          (UNiagaraDataInterfaceArray *this,FNiagaraDataInterfaceSetShaderParametersContext *param_1
          )

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar5 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<INDIArrayProxyBase::FShaderParameters>::GetStructMetadata
                     ();
  param_1->ParametersOffset = pFVar4->Size + uVar5;
                    /* WARNING: Could not recover jumptable at 0x0001491328fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0xd8))
            (pFVar1,param_1->BaseParameters + uVar5,param_1->SystemTick->SystemInstanceID);
  return;
}

// SimCacheBeginWrite @ 149133320

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceArray::SimCacheBeginWrite
          (UNiagaraDataInterfaceArray *this,UObject *param_1,FNiagaraSystemInstance *param_2,
          void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_3 == (void *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = UNDIArraySimCacheData::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = param_1;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return pUVar2;
}

// SimCacheCompareFrame @ 1491337d0

bool __thiscall
UNiagaraDataInterfaceArray::SimCacheCompareFrame
          (UNiagaraDataInterfaceArray *this,UObject *param_1,UObject *param_2,int param_3,
          TOptional<float> param_4,FString *param_5)

{
  SRWLOCK SVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UNDIArraySimCacheData *pUVar6;
  UNDIArraySimCacheData *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 local_res20 [2];
  UNDIArraySimCacheData *local_68;
  UNDIArraySimCacheData *local_60;
  FWindowsSharedMutex local_58;
  FString *local_50;
  UNDIArraySimCacheData **local_48;
  UNDIArraySimCacheData **local_40;
  FWindowsSharedMutex *local_38;
  undefined4 *local_30;
  
  lVar13 = (longlong)param_3;
  local_68 = CastChecked<UNDIArraySimCacheData_const_,UObject_const_>(param_1);
  local_60 = CastChecked<UNDIArraySimCacheData_const_,UObject_const_>(param_2);
  if ((param_3 < 0) ||
     (((local_68->CpuFrameData).ArrayNum <= param_3 &&
      ((param_3 < 0 || ((local_60->CpuFrameData).ArrayNum <= param_3)))))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((param_3 < 0) ||
     (((local_68->GpuFrameData).ArrayNum <= param_3 &&
      ((param_3 < 0 || ((local_60->GpuFrameData).ArrayNum <= param_3)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((param_3 < 0) || ((local_68->CpuFrameData).ArrayNum <= param_3)) ||
     ((local_60->CpuFrameData).ArrayNum <= param_3)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((bVar4) &&
     (((param_3 < 0 || ((local_68->GpuFrameData).ArrayNum <= param_3)) ||
      ((local_60->GpuFrameData).ArrayNum <= param_3)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar8) || (!bVar5)) {
    ::FString::operator=(param_5,L"FrameIndex was not valid");
    return false;
  }
  SVar1.Ptr = this[-1].ArrayRWGuard.Mutex.Mutex.Ptr;
  if ((SVar1.Ptr == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  pUVar7 = local_60;
  local_res20[0] = __real_322bcc77;
  if (*(char *)((longlong)param_4 + 4) != '\0') {
    local_res20[0] = *(undefined4 *)param_4;
  }
  local_50 = param_5;
  local_48 = &local_68;
  uVar12 = (uint)~param_3 >> 0x1f;
  local_40 = &local_60;
  local_38 = &local_58;
  local_30 = local_res20;
  local_58.Mutex.Ptr = (SRWLOCK)(SRWLOCK)SVar1.Ptr;
  if (bVar10) {
    uVar11 = 0;
    if (param_3 < (local_60->CpuFrameData).ArrayNum) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pUVar6 = local_68;
    pFVar2 = (pUVar7->CpuFrameData).AllocatorInstance.Data;
    uVar11 = 0;
    if (param_3 < (local_68->CpuFrameData).ArrayNum) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    bVar10 = `UNiagaraDataInterfaceArray::SimCacheCompareFrame'::__l2::<lambda_1>::operator()
                       (&local_50,
                        (FNDIArraySimCacheDataFrame *)
                        ((pUVar6->CpuFrameData).AllocatorInstance.Data + lVar13 * 8),
                        (FNDIArraySimCacheDataFrame *)(pFVar2 + lVar13 * 8),L"CPU");
    if (bVar10) goto LAB_1491339ee;
LAB_149133aa1:
    bVar10 = false;
  }
  else {
LAB_1491339ee:
    pUVar7 = local_60;
    if (bVar4) {
      uVar11 = 0;
      if (param_3 < (local_60->GpuFrameData).ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pUVar6 = local_68;
      pFVar2 = (pUVar7->GpuFrameData).AllocatorInstance.Data;
      uVar11 = 0;
      if (param_3 < (local_68->GpuFrameData).ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      bVar10 = `UNiagaraDataInterfaceArray::SimCacheCompareFrame'::__l2::<lambda_1>::operator()
                         (&local_50,
                          (FNDIArraySimCacheDataFrame *)
                          ((pUVar6->GpuFrameData).AllocatorInstance.Data + lVar13 * 8),
                          (FNDIArraySimCacheDataFrame *)(pFVar2 + lVar13 * 8),L"GPU");
      if (!bVar10) goto LAB_149133aa1;
    }
    bVar10 = true;
  }
  return bVar10;
}

// SimCacheReadFrame @ 1491364f0

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
UNiagaraDataInterfaceArray::SimCacheReadFrame
          (UNiagaraDataInterfaceArray *this,FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  int iVar1;
  longlong *plVar2;
  FNiagaraSystemInstance *pFVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 uVar5;
  UNDIArraySimCacheData *pUVar6;
  
  plVar2 = this[-1].ArrayRWGuard.Mutex.Mutex.Ptr;
  if (plVar2 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar4) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar5 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar5;
    }
  }
  pFVar3 = param_1->SystemInstance;
  iVar1 = param_1->FrameIndexA;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x90);
  pUVar6 = CastChecked<UNDIArraySimCacheData,UObject>(param_1->StorageObject);
                    /* WARNING: Could not recover jumptable at 0x00014913657f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar2,pUVar6,iVar1,pFVar3);
  return (bool)uVar5;
}

// SimCacheVisualizerRead @ 149136b20

FString * __thiscall
UNiagaraDataInterfaceArray::SimCacheVisualizerRead
          (UNiagaraDataInterfaceArray *this,FString *__return_storage_ptr__,
          UNDIArraySimCacheData *param_1,FNDIArraySimCacheDataFrame *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  (**(code **)(*plVar1 + 0xa0))(plVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// SimCacheWriteFrame @ 149139b90

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
UNiagaraDataInterfaceArray::SimCacheWriteFrame
          (UNiagaraDataInterfaceArray *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UNDIArraySimCacheData *pUVar5;
  
  if ((param_4 == (void *)0x0) || (param_1 == (UObject *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData && StorageObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceArray.cpp"
                       ,0x6b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar5 = CastChecked<UNDIArraySimCacheData,UObject>(param_1);
  plVar1 = this[-1].ArrayRWGuard.Mutex.Mutex.Ptr;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149139c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x88))(plVar1,pUVar5,param_2,param_3);
  return (bool)uVar4;
}

// StaticRegisterNativesUNiagaraDataInterfaceArray @ 149139e40

void __cdecl UNiagaraDataInterfaceArray::StaticRegisterNativesUNiagaraDataInterfaceArray(void)

{
  return;
}

// _getUObject @ 14914e5c0

UObject * __thiscall UNiagaraDataInterfaceArray::_getUObject(UNiagaraDataInterfaceArray *this)

{
  return (UObject *)&this[-1]._padding_;
}

