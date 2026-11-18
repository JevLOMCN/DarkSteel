// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Process @ 1492b1340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall FNiagaraSimCacheCaptureInfo::Process(FNiagaraSimCacheCaptureInfo *this)

{
  uint uVar1;
  uint uVar2;
  UNiagaraSimCache *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UNiagaraComponent *pUVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UObjectBase *this_00;
  UObjectBase *pUVar11;
  FNiagaraSimCacheCreateParameters *pFVar12;
  longlong *plVar13;
  undefined1 auStack_198 [32];
  UObject *local_178;
  FReadAccessScope local_170;
  FNiagaraSimCacheCreateParameters local_158;
  FNiagaraSimCacheCreateParameters local_f8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pUVar8 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  if (pUVar8 == (UNiagaraComponent *)0x0) {
LAB_1492b1544:
    pUVar3 = (UNiagaraSimCache *)(this->SimCache).Object;
    if (pUVar3 != (UNiagaraSimCache *)0x0) {
      UNiagaraSimCache::EndWrite(pUVar3,false);
      pUVar4 = (this->SimCache).Object;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCapture,
                 &local_170);
      if ((*(int *)&(this->OnCapture).field_0x10 == 0) ||
         (plVar13 = *(longlong **)&(this->OnCapture).field_0x8, plVar13 == (longlong *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_170);
      }
      else {
        pcVar5 = *(code **)(*plVar13 + 0x68);
        local_178 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        (*pcVar5)(plVar13,&this->Request,&local_178);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_170);
      }
    }
    return true;
  }
  uVar1 = (this->Request).CaptureDelayFrames;
  uVar2 = this->ProcessedFrames;
  if ((this->Request).CaptureFrames + uVar1 <= uVar2) goto LAB_1492b1544;
  if (uVar2 < uVar1) goto LAB_1492b1520;
  if (uVar2 == uVar1) {
    FNiagaraSimCacheCreateParameters::CreateForDebugging(&local_158);
    local_158.bAllowSerializeLargeCache = 0;
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar10);
    local_98._8_8_ = pUVar9;
    this_00 = (UObjectBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar13 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pUVar11 = (UObjectBase *)(this->SimCache).Object;
    if (this_00 == (UObjectBase *)0x0) {
      if (pUVar11 == (UObjectBase *)0x0) goto LAB_1492b144a;
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar11);
      (this->SimCache).Object = (UObject *)0x0;
LAB_1492b144f:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    else {
      if (pUVar11 != this_00) {
        if (pUVar11 != (UObjectBase *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar11);
        }
        UObjectBase::AddRef(this_00);
        (this->SimCache).Object = (UObject *)this_00;
        pUVar11 = this_00;
      }
LAB_1492b144a:
      if (pUVar11 == (UObjectBase *)0x0) goto LAB_1492b144f;
    }
    pUVar3 = (UNiagaraSimCache *)(this->SimCache).Object;
    pFVar12 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
                        (&local_f8,&local_158);
    UNiagaraSimCache::BeginWrite(pUVar3,pFVar12,pUVar8);
    if (local_158.ExplicitCaptureAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_158.ExplicitCaptureAttributes.AllocatorInstance.Data);
    }
    if (local_158.InterpolationExcludeAttributes.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.InterpolationExcludeAttributes.AllocatorInstance.Data);
    }
    if (local_158.InterpolationIncludeAttributes.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.InterpolationIncludeAttributes.AllocatorInstance.Data);
    }
    if (local_158.RebaseExcludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_158.RebaseExcludeAttributes.AllocatorInstance.Data);
    }
    if (local_158.RebaseIncludeAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_158.RebaseIncludeAttributes.AllocatorInstance.Data);
    }
  }
  if (((this->SimCache).Object == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  UNiagaraSimCache::WriteFrame((UNiagaraSimCache *)(this->SimCache).Object,pUVar8);
LAB_1492b1520:
  this->ProcessedFrames = this->ProcessedFrames + 1;
  return false;
}

