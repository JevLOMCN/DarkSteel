// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// StaticClass @ 149473730

UClass * __cdecl UNiagaraStatelessEmitterTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterTemplate",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitterTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessEmitterTemplate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton;
}

// UNiagaraStatelessEmitterTemplate @ 149476bf0

UNiagaraStatelessEmitterTemplate * __thiscall
UNiagaraStatelessEmitterTemplate::UNiagaraStatelessEmitterTemplate
          (UNiagaraStatelessEmitterTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitterTemplate__6B_;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->ShaderParametersMetadata).Object = (FShaderParametersMetadata *)0x0;
  (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNiagaraStatelessEmitterTemplate @ 149476c30

UNiagaraStatelessEmitterTemplate * __thiscall
UNiagaraStatelessEmitterTemplate::UNiagaraStatelessEmitterTemplate
          (UNiagaraStatelessEmitterTemplate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitterTemplate__6B_;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->ShaderParametersMetadata).Object = (FShaderParametersMetadata *)0x0;
  (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNiagaraStatelessEmitterTemplate @ 149477420

void __thiscall
UNiagaraStatelessEmitterTemplate::~UNiagaraStatelessEmitterTemplate
          (UNiagaraStatelessEmitterTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitterTemplate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BuildShaderParameters @ 1494785f0

void __thiscall
UNiagaraStatelessEmitterTemplate::BuildShaderParameters(UNiagaraStatelessEmitterTemplate *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FShaderParametersMetadata *pFVar5;
  UClass *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  FShaderParametersMetadata *local_78;
  FSharedReferencer<1> local_70;
  FShaderParametersMetadataBuilder *local_68;
  uint local_60;
  FString local_58;
  FString local_48;
  FShaderParametersMetadataBuilder local_38;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_68 = &local_38;
  local_38.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Members.ArrayNum = 0;
  local_38.Members.ArrayMax = 0;
  local_38.NextMemberOffset = 0;
  pFVar5 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
  FShaderParametersMetadataBuilder::AddIncludedStruct(&local_38,pFVar5,Float);
  pFVar5 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
  pFVar11 = (this->Modules).AllocatorInstance.Data;
  iVar2 = (this->Modules).ArrayNum;
  local_60 = pFVar5->Size;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UClass>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) {
      pFVar5 = FShaderParametersMetadataBuilder::Build
                         (&local_38,ShaderParameterStruct,L"NiagaraStatelessEmitterTemplate");
      local_78 = pFVar5;
      pTVar7 = ::operator_new(0x18);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFShaderParametersMetadata__U__DefaultDeleter_VFShaderParametersMetadata___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7[1]._padding_ = (longlong)pFVar5;
        pTVar8 = pTVar7;
      }
      local_70.ReferenceController = pTVar8;
      if (&this->ShaderParametersMetadata != (TSharedPtr<FShaderParametersMetadata,1> *)&local_78) {
        (this->ShaderParametersMetadata).Object = pFVar5;
        local_78 = (FShaderParametersMetadata *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ShaderParametersMetadata).SharedReferenceCount,&local_70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      if (local_38.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Members.AllocatorInstance.Data);
      }
      return;
    }
    pUVar6 = *(UClass **)pFVar11;
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar4 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar4 == (UObject *)0x0) break;
    pUVar6 = UNiagaraStatelessModule::StaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar6->_padding_)) {
      pFVar9 = GetTypeName<UNiagaraStatelessModule>(&local_58);
      pwVar12 = L"";
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<UObject>(&local_48,pUVar4);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar10);
    }
    (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4);
    pFVar11 = pFVar11 + 8;
  }
  pFVar9 = GetTypeName<UNiagaraStatelessModule>(&local_48);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// BuildVariables @ 149478800

void __thiscall
UNiagaraStatelessEmitterTemplate::BuildVariables(UNiagaraStatelessEmitterTemplate *this)

{
  return;
}

// GetAssetRegistryTags @ 14947ad80

void __thiscall
UNiagaraStatelessEmitterTemplate::GetAssetRegistryTags
          (UNiagaraStatelessEmitterTemplate *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetPrivateStaticClass @ 14947afc0

UClass * __cdecl UNiagaraStatelessEmitterTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitterTemplate",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessEmitterTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessEmitterTemplate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitterTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.InnerSingleton;
}

// GetShaderParametersMetadata @ 14947b550

FShaderParametersMetadata * __thiscall
UNiagaraStatelessEmitterTemplate::GetShaderParametersMetadata
          (UNiagaraStatelessEmitterTemplate *this)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  
  if ((this->ShaderParametersMetadata).Object != (FShaderParametersMetadata *)0x0) {
    return (this->ShaderParametersMetadata).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ShaderParametersMetadata.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterTemplate.h"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar3;
  }
  return (this->ShaderParametersMetadata).Object;
}

// GetSimulationShader @ 14947b690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> * __thiscall
UNiagaraStatelessEmitterTemplate::GetSimulationShader
          (UNiagaraStatelessEmitterTemplate *this,
          TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->ShaderContent = (FSimulationShader *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  return __return_storage_ptr__;
}

// InitCDOPropertiesAfterModuleStartup @ 14947bda0

void __cdecl UNiagaraStatelessEmitterTemplate::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  ForAnyElementType this;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  
  iVar3 = NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum;
  uVar6 = (ulonglong)NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)
           (NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.AllocatorInstance.Data +
           uVar6 * 8);
  this.Data = NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.AllocatorInstance.Data;
  do {
    if ((int)uVar6 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraStatelessEmitterTemplate,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this.Data == pFVar1) {
      NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum = 0;
      if (NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.
                          AllocatorInstance,0,
                   &NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayMax);
      }
      return;
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    if ((pUVar5 != (UObject *)0x0) &&
       ((**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5), *(int *)&pUVar5[1].field_0x8 == 0)) {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_res10.Number = *(uint *)&pUVar5->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EmitterObject->Modules.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterTemplate.cpp"
                         ,0x66,L"StatelessTemplate(%s) has no modules, this is likely a code error")
      ;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (ulonglong)(uint)NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum;
    this.Data = this.Data + 8;
  } while( true );
}

// InitModulesAndAttributes @ 14947c640

void __thiscall
UNiagaraStatelessEmitterTemplate::InitModulesAndAttributes(UNiagaraStatelessEmitterTemplate *this)

{
  <lambda_1> local_res8 [32];
  
  TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UNiagaraStatelessEmitterTemplate::InitModulesAndAttributes_::__l2::<lambda_1>_>
            (&this->Modules,local_res8);
  BuildShaderParameters(this);
  return;
}

// PostInitProperties @ 14947d710

void __thiscall
UNiagaraStatelessEmitterTemplate::PostInitProperties(UNiagaraStatelessEmitterTemplate *this)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  longlong lVar6;
  UNiagaraStatelessEmitterTemplate *local_res8;
  FName local_res10;
  FName local_res18;
  FWeakObjectPtr local_28;
  FString local_20;
  
  UObject::PostInitProperties((UObject *)this);
  pUVar1 = (UClass *)this->_padding_;
  pUVar4 = StaticClass();
  if (pUVar1 != pUVar4) {
    this_00 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_res18,"Niagara");
    bVar3 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
    if (!bVar3) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_28.ObjectIndex = 0;
      local_28.ObjectSerialNumber = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
      if (((NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.AllocatorInstance.Data <=
            &local_28) &&
          (&local_28 <
           (FWeakObjectPtr *)
           (NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.AllocatorInstance.Data +
           (longlong)NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayMax * 8)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum ==
          NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayMax) {
        NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.
                               AllocatorInstance,
                        &NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayMax);
      }
      lVar6 = (longlong)NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum;
      NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum =
           NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.ArrayNum + 1;
      *(FWeakObjectPtr *)
       (NiagaraStatelessEmitterTemplatePrivate::ObjectsToDeferredInit.AllocatorInstance.Data +
       lVar6 * 8) = local_28;
      return;
    }
    (**(code **)(this->_padding_ + 0x2b0))(this);
    if ((this->Modules).ArrayNum == 0) {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_20);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Modules.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterTemplate.cpp"
                         ,0x4a,L"StatelessTemplate(%s) has no modules, this is likely a code error")
      ;
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// PostLoad @ 14947d910

void __thiscall UNiagaraStatelessEmitterTemplate::PostLoad(UNiagaraStatelessEmitterTemplate *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x00014947d929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// SetShaderParameters @ 14947e7d0

void __thiscall
UNiagaraStatelessEmitterTemplate::SetShaderParameters
          (UNiagaraStatelessEmitterTemplate *this,uchar *param_1,TArrayView<int_const_,int> *param_2
          )

{
  return;
}

// StaticRegisterNativesUNiagaraStatelessEmitterTemplate @ 14947f3a0

void __cdecl
UNiagaraStatelessEmitterTemplate::StaticRegisterNativesUNiagaraStatelessEmitterTemplate(void)

{
  return;
}

