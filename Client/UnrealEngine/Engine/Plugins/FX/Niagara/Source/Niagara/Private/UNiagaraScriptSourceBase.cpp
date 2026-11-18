// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 148e42fe0

UClass * __cdecl UNiagaraScriptSourceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScriptSourceBase",
               &Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton,
               StaticRegisterNativesUNiagaraScriptSourceBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraScriptSourceBase>,
               InternalVTableHelperCtorCaller<UNiagaraScriptSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton;
}

// UNiagaraScriptSourceBase @ 148e55640

UNiagaraScriptSourceBase * __thiscall
UNiagaraScriptSourceBase::UNiagaraScriptSourceBase
          (UNiagaraScriptSourceBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraScriptSourceBase__6B_;
  (this->ExposedVectorConstants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedVectorConstants).ArrayNum = 0;
  (this->ExposedVectorConstants).ArrayMax = 0;
  (this->ExposedVectorCurveConstants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedVectorCurveConstants).ArrayNum = 0;
  (this->ExposedVectorCurveConstants).ArrayMax = 0;
  return this;
}

// ~UNiagaraScriptSourceBase @ 148e56a70

void __thiscall UNiagaraScriptSourceBase::~UNiagaraScriptSourceBase(UNiagaraScriptSourceBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraScriptSourceBase__6B_;
  DestructItems<TSharedPtr<EditorExposedVectorCurveConstant,1>,int>
            ((TSharedPtr<EditorExposedVectorCurveConstant,1> *)
             (this->ExposedVectorCurveConstants).AllocatorInstance.Data,
             (this->ExposedVectorCurveConstants).ArrayNum);
  pFVar1 = (this->ExposedVectorCurveConstants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<EditorExposedVectorConstant,1>,int>
            ((TSharedPtr<EditorExposedVectorConstant,1> *)
             (this->ExposedVectorConstants).AllocatorInstance.Data,
             (this->ExposedVectorConstants).ArrayNum);
  pFVar1 = (this->ExposedVectorConstants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddModuleIfMissing @ 148e5b1e0

bool __thiscall
UNiagaraScriptSourceBase::AddModuleIfMissing
          (UNiagaraScriptSourceBase *this,FString *param_1,ENiagaraScriptUsage param_2,bool *param_3
          )

{
  FScriptContainerElement *pFVar1;
  
  *param_3 = false;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// ComputeObjectNameMap @ 148e5dea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TMap<FName,UNiagaraDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UNiagaraDataInterface_*,0>_>
* __thiscall
UNiagaraScriptSourceBase::ComputeObjectNameMap
          (UNiagaraScriptSourceBase *this,
          TMap<FName,UNiagaraDataInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UNiagaraDataInterface_*,0>_>
          *__return_storage_ptr__,UNiagaraSystem *param_1,ENiagaraScriptUsage param_2,FGuid *param_3
          ,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// ComputeVMCompilationId @ 148e5df00

void __thiscall
UNiagaraScriptSourceBase::ComputeVMCompilationId
          (UNiagaraScriptSourceBase *this,FNiagaraVMExecutableDataId *param_1,
          FNiagaraScriptHashCollector *param_2,ENiagaraScriptUsage param_3,FGuid *param_4)

{
  return;
}

// GetChangeID @ 148e68b40

FGuid * __thiscall
UNiagaraScriptSourceBase::GetChangeID(UNiagaraScriptSourceBase *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetCompileBaseId @ 148e68c20

FGuid * __thiscall
UNiagaraScriptSourceBase::GetCompileBaseId
          (UNiagaraScriptSourceBase *this,FGuid *__return_storage_ptr__,ENiagaraScriptUsage param_1,
          FGuid *param_2)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetCompileHash @ 148e68c40

FNiagaraCompileHash * __thiscall
UNiagaraScriptSourceBase::GetCompileHash
          (UNiagaraScriptSourceBase *this,FNiagaraCompileHash *__return_storage_ptr__,
          ENiagaraScriptUsage param_1,FGuid *param_2)

{
  (__return_storage_ptr__->DataHash).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DataHash).ArrayNum = 0;
  (__return_storage_ptr__->DataHash).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148e6e880

UClass * __cdecl UNiagaraScriptSourceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScriptSourceBase",
               &Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton,
               StaticRegisterNativesUNiagaraScriptSourceBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraScriptSourceBase>,
               InternalVTableHelperCtorCaller<UNiagaraScriptSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton;
}

// IsEditorOnly @ 148e75110

bool __thiscall UNiagaraScriptSourceBase::IsEditorOnly(UNiagaraScriptSourceBase *this)

{
  return true;
}

// IsSynchronized @ 148e75650

bool __thiscall
UNiagaraScriptSourceBase::IsSynchronized(UNiagaraScriptSourceBase *this,FGuid *param_1)

{
  return true;
}

// MarkNotSynchronized @ 148e75660

void __thiscall
UNiagaraScriptSourceBase::MarkNotSynchronized(UNiagaraScriptSourceBase *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// MigrateParameterDataToHierarchyRoot @ 148e75680

void __thiscall
UNiagaraScriptSourceBase::MigrateParameterDataToHierarchyRoot
          (UNiagaraScriptSourceBase *this,FVersionedNiagaraScriptData *param_1)

{
  return;
}

// PostLoadFromEmitter @ 148e76e30

void __thiscall
UNiagaraScriptSourceBase::PostLoadFromEmitter
          (UNiagaraScriptSourceBase *this,FVersionedNiagaraEmitter *param_1)

{
  return;
}

// PreCompile @ 148e785b0

TSharedPtr<FNiagaraCompileRequestDataBase,1> * __thiscall
UNiagaraScriptSourceBase::PreCompile
          (UNiagaraScriptSourceBase *this,
          TSharedPtr<FNiagaraCompileRequestDataBase,1> *__return_storage_ptr__,
          UNiagaraEmitter *param_1,TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FNiagaraCompileRequestDataBase,1>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  __return_storage_ptr__->Object = (FNiagaraCompileRequestDataBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// RegisterVMCompilationIdDependencies @ 148e7a610

void __thiscall
UNiagaraScriptSourceBase::RegisterVMCompilationIdDependencies
          (UNiagaraScriptSourceBase *this,FNiagaraScriptHashCollector *param_1,
          ENiagaraScriptUsage param_2,FGuid *param_3)

{
  return;
}

// StaticRegisterNativesUNiagaraScriptSourceBase @ 148e816b0

void __cdecl UNiagaraScriptSourceBase::StaticRegisterNativesUNiagaraScriptSourceBase(void)

{
  return;
}

// UNiagaraScriptSourceBase @ 149389160

UNiagaraScriptSourceBase * __thiscall
UNiagaraScriptSourceBase::UNiagaraScriptSourceBase
          (UNiagaraScriptSourceBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraScriptSourceBase__6B_;
  (this->ExposedVectorConstants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedVectorConstants).ArrayNum = 0;
  (this->ExposedVectorConstants).ArrayMax = 0;
  (this->ExposedVectorCurveConstants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExposedVectorCurveConstants).ArrayNum = 0;
  (this->ExposedVectorCurveConstants).ArrayMax = 0;
  return this;
}

