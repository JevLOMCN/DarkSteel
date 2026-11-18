// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149378ca0

UClass * __cdecl UNiagaraSimCacheDebugData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheDebugData",
               &Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheDebugData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSimCacheDebugData>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheDebugData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton;
}

// UNiagaraSimCacheDebugData @ 149389950

UNiagaraSimCacheDebugData * __thiscall
UNiagaraSimCacheDebugData::UNiagaraSimCacheDebugData
          (UNiagaraSimCacheDebugData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraSimCacheDebugData__6B_;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  return this;
}

// UNiagaraSimCacheDebugData @ 149389990

UNiagaraSimCacheDebugData * __thiscall
UNiagaraSimCacheDebugData::UNiagaraSimCacheDebugData
          (UNiagaraSimCacheDebugData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNiagaraSimCacheDebugData__6B_;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  return this;
}

// ~UNiagaraSimCacheDebugData @ 14938ac30

void __thiscall
UNiagaraSimCacheDebugData::~UNiagaraSimCacheDebugData(UNiagaraSimCacheDebugData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSimCacheDebugData__6B_;
  DestructItems<FNiagaraSimCacheDebugDataFrame,int>
            ((FNiagaraSimCacheDebugDataFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CaptureFrame @ 149396b20

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
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSimCacheDebugData::CaptureFrame
          (UNiagaraSimCacheDebugData *this,FNiagaraSimCacheHelper *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FNiagaraUserRedirectionParameterStore *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemSimulation *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FNiagaraEmitterHandle *this_00;
  FName this_01;
  FString *pFVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  piVar1 = &(this->Frames).ArrayNum;
  iVar2 = *piVar1;
  uVar11 = param_2 + 1;
  if (iVar2 < (int)uVar11) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,uVar11 - iVar2,&(this->Frames).AllocatorInstance,piVar1,
                       &(this->Frames).ArrayMax);
    DefaultConstructItems<FNiagaraSimCacheDebugDataFrame,int>
              ((this->Frames).AllocatorInstance.Data + (longlong)iVar8 * 0x50,uVar11 - iVar2);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar2) {
      uVar13 = iVar2 - uVar11;
      if (((int)(uVar13 | uVar11) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar13 != 0) {
        TArray<FNiagaraSimCacheDebugDataFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Frames,uVar11,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&(this->Frames).AllocatorInstance,*piVar1,&(this->Frames).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  if (param_2 < *piVar1) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = (this->Frames).AllocatorInstance.Data + (longlong)param_2 * 0x50;
  pFVar3 = param_1->SystemInstance->OverrideParameters;
  if (pFVar3 != (FNiagaraUserRedirectionParameterStore *)0x0) {
    NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
              ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,L"OverrideParameters",
               (FNiagaraParameterStore *)pFVar3);
  }
  NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
            ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,L"InstanceParameters",
             &param_1->SystemInstance->InstanceParameters);
  pTVar4 = (param_1->SystemInstance->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->SystemInstance->SystemSimulation).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar5 != (FNiagaraSystemSimulation *)0x0) {
    NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
              ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,L"System Spawn",
               (pFVar5->SpawnExecContext).Ptr);
    NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
              ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,L"System Update",
               (pFVar5->UpdateExecContext).Ptr);
  }
  iVar2 = (param_1->SystemInstance->Emitters).ArrayNum;
  pFVar14 = (param_1->SystemInstance->Emitters).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = pFVar14 + (longlong)iVar2 * 0x10;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 0x10) {
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar14);
    this_01 = FNiagaraEmitterHandle::GetName(this_00);
    ::FName::ToString((FName *)this_01,&local_88);
    lVar10 = *(longlong *)pFVar14;
    ::FString::PrintfImpl(&local_68,L"%s RendererBindings");
    NSCDebugDataPrivate::AddParameterStore<FString>
              ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,&local_68,
               (FNiagaraParameterStore *)(lVar10 + 0x40));
    lVar10 = *(longlong *)(*(longlong *)pFVar14 + 0x18);
    ::FString::PrintfImpl(&local_78,L"%s GPUContext");
    if (lVar10 != 0) {
      pFVar9 = ::FString::FString(&local_38,&local_78);
      NSCDebugDataPrivate::AddParameterStore<FString>
                ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,pFVar9,
                 (FNiagaraParameterStore *)(lVar10 + 0x80));
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    lVar10 = (**(code **)(**(longlong **)pFVar14 + 0x68))();
    if (lVar10 != 0) {
      ::FString::PrintfImpl(&local_58,L"%s Spawn");
      NSCDebugDataPrivate::AddParameterStore<FString>
                ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,&local_58,
                 (FNiagaraScriptExecutionContextBase *)(lVar10 + 0x1a0));
      ::FString::PrintfImpl(&local_48,L"%s Update");
      NSCDebugDataPrivate::AddParameterStore<FString>
                ((UObject *)this,(FNiagaraSimCacheDebugDataFrame *)pFVar12,&local_48,
                 (FNiagaraScriptExecutionContextBase *)(lVar10 + 0x450));
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1493a7750

UClass * __cdecl UNiagaraSimCacheDebugData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheDebugData",
               &Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheDebugData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSimCacheDebugData>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheDebugData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSimCacheDebugData @ 1493b7670

void __cdecl UNiagaraSimCacheDebugData::StaticRegisterNativesUNiagaraSimCacheDebugData(void)

{
  return;
}

