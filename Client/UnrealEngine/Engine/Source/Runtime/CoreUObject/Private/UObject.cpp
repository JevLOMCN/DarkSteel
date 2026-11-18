// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 252

// StaticClass @ 141e4e8d0

UClass * __cdecl UObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Object",&Z_Registration_Info_UClass_UObject.InnerSingleton,
               StaticRegisterNativesUObject,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UObject>,InternalVTableHelperCtorCaller<UObject>,
               local_res8,StaticClass,StaticClass);
  }
  return Z_Registration_Info_UClass_UObject.InnerSingleton;
}

// ~UObject @ 141e57a30

void __thiscall UObject::~UObject(UObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// AreNativePropertiesIdenticalTo @ 141e59d60

bool __thiscall UObject::AreNativePropertiesIdenticalTo(UObject *this,UObject *param_1)

{
  return true;
}

// CallRemoteFunction @ 141e5a710

bool __thiscall
UObject::CallRemoteFunction
          (UObject *this,UFunction *param_1,void *param_2,FOutParmRec *param_3,FFrame *param_4)

{
  return false;
}

// ExecuteUbergraph @ 141e5afd0

void __thiscall UObject::ExecuteUbergraph(UObject *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = FindFunctionChecked(this,NAME_UObject_ExecuteUbergraph);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// ExportCustomProperties @ 141e5b010

void __thiscall UObject::ExportCustomProperties(UObject *this,FOutputDevice *param_1,uint param_2)

{
  return;
}

// GetConfigOverridePlatform @ 141e5b460

wchar_t * __thiscall UObject::GetConfigOverridePlatform(UObject *this)

{
  return (wchar_t *)0x0;
}

// GetDesc @ 141e5b470

FString * __thiscall UObject::GetDesc(UObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetDetailedInfoInternal @ 141e5b4a0

FString * __thiscall UObject::GetDetailedInfoInternal(UObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"No_Detailed_Info_Specified");
  return __return_storage_ptr__;
}

// GetExporterName @ 141e5b4d0

FName __thiscall UObject::GetExporterName(UObject *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"");
  return in_RDX;
}

// GetFunctionCallspace @ 141e5b500

int __thiscall UObject::GetFunctionCallspace(UObject *this,UFunction *param_1,FFrame *param_2)

{
  return 2;
}

// GetNativePropertyValues @ 141e5b510

bool __thiscall
UObject::GetNativePropertyValues
          (UObject *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,uint param_2)

{
  return false;
}

// GetNetPushIdDynamic @ 141e5b520

ulong64 __thiscall UObject::GetNetPushIdDynamic(UObject *this)

{
  return 0xffffffffffffffff;
}

// GetPrestreamPackages @ 141e5b530

void __thiscall
UObject::GetPrestreamPackages(UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetPrivateStaticClass @ 141e5c890

UClass * __cdecl UObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Object",&Z_Registration_Info_UClass_UObject.InnerSingleton,
               StaticRegisterNativesUObject,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UObject>,InternalVTableHelperCtorCaller<UObject>,
               local_res8,StaticClass,StaticClass);
  }
  return Z_Registration_Info_UClass_UObject.InnerSingleton;
}

// GetRestoreForUObjectOverwrite @ 141e5dab0

FRestoreForUObjectOverwrite * __thiscall UObject::GetRestoreForUObjectOverwrite(UObject *this)

{
  return (FRestoreForUObjectOverwrite *)0x0;
}

// GetSubobjectsWithStableNamesForNetworking @ 141e5dac0

void __thiscall
UObject::GetSubobjectsWithStableNamesForNetworking
          (UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// HasNonEditorOnlyReferences @ 141e5e210

bool __thiscall UObject::HasNonEditorOnlyReferences(UObject *this)

{
  return false;
}

// ImportCustomProperties @ 141e5e220

void __thiscall
UObject::ImportCustomProperties(UObject *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  return;
}

// IsEditorOnly @ 141e5eec0

bool __thiscall UObject::IsEditorOnly(UObject *this)

{
  return false;
}

// IsPostLoadThreadSafe @ 141e5eed0

bool __thiscall UObject::IsPostLoadThreadSafe(UObject *this)

{
  return false;
}

// IsReadyForAsyncPostLoad @ 141e5eee0

bool __thiscall UObject::IsReadyForAsyncPostLoad(UObject *this)

{
  return true;
}

// IsReadyForFinishDestroy @ 141e5eef0

bool __thiscall UObject::IsReadyForFinishDestroy(UObject *this)

{
  return true;
}

// MarkAsEditorOnlySubobject @ 141e5f0d0

void __thiscall UObject::MarkAsEditorOnlySubobject(UObject *this)

{
  return;
}

// NeedsLoadForEditorGame @ 141e5f0e0

bool __thiscall UObject::NeedsLoadForEditorGame(UObject *this)

{
  return false;
}

// OverrideConfigSection @ 141e5f100

void __thiscall UObject::OverrideConfigSection(UObject *this,FString *param_1)

{
  return;
}

// OverridePerObjectConfigSection @ 141e5f110

void __thiscall UObject::OverridePerObjectConfigSection(UObject *this,FString *param_1)

{
  return;
}

// PostCDOContruct @ 141e5f120

void __thiscall UObject::PostCDOContruct(UObject *this)

{
  return;
}

// PostDuplicate @ 141e5f130

void __thiscall UObject::PostDuplicate(UObject *this,Type param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141e5f139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xf8))(this,param_1 == PIE);
  return;
}

// PostDuplicate @ 141e5f150

void __thiscall UObject::PostDuplicate(UObject *this,bool param_1)

{
  return;
}

// PostEditImport @ 141e5f160

void __thiscall UObject::PostEditImport(UObject *this)

{
  return;
}

// PostInterpChange @ 141e5f170

void __thiscall UObject::PostInterpChange(UObject *this,FProperty *param_1)

{
  return;
}

// PostReloadConfig @ 141e5f180

void __thiscall UObject::PostReloadConfig(UObject *this,FProperty *param_1)

{
  return;
}

// PostRepNotifies @ 141e5f190

void __thiscall UObject::PostRepNotifies(UObject *this)

{
  return;
}

// PreDuplicate @ 141e5f1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObject::PreDuplicate(UObject *this,FObjectDuplicationParameters *param_1)

{
  return;
}

// ProcessConsoleExec @ 141e5f1b0

bool __thiscall
UObject::ProcessConsoleExec(UObject *this,wchar_t *param_1,FOutputDevice *param_2,UObject *param_3)

{
  bool bVar1;
  
  bVar1 = CallFunctionByNameWithArguments(this,param_1,param_2,param_3,false);
  return bVar1;
}

// RegenerateClass @ 141e5f1d0

UClass * __thiscall UObject::RegenerateClass(UObject *this,UClass *param_1,UObject *param_2)

{
  return (UClass *)0x0;
}

// ResolveSubobject @ 141e5f810

bool __thiscall
UObject::ResolveSubobject(UObject *this,wchar_t *param_1,UObject **param_2,bool param_3)

{
  return false;
}

// SetNetPushIdDynamic @ 141e60420

void __thiscall UObject::SetNetPushIdDynamic(UObject *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                     ,0x718,
                     L"REPLICATED_BASE_CLASS macro is not implemented in %s. Something went very wrong."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ShutdownAfterError @ 141e604a0

void __thiscall UObject::ShutdownAfterError(UObject *this)

{
  return;
}

// StaticRegisterNativesUObject @ 141e60790

void __cdecl UObject::StaticRegisterNativesUObject(void)

{
  return;
}

// ValidateGeneratedRepEnums @ 141e61ed0

void __thiscall
UObject::ValidateGeneratedRepEnums
          (UObject *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// DestroyNonNativeProperties @ 141e96580

void __thiscall UObject::DestroyNonNativeProperties(UObject *this)

{
  FField *this_00;
  bool bVar1;
  FUObjectItem *pFVar2;
  UClass *pUVar3;
  code *pcVar4;
  
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x31) & 1) == 0) {
    (**(code **)(**(longlong **)&this->field_0x10 + 0x3b0))(*(longlong **)&this->field_0x10,this,0);
    for (this_00 = *(FField **)(*(longlong *)&this->field_0x10 + 0x80); this_00 != (FField *)0x0;
        this_00 = *(FField **)&this_00[1].FlagsPrivate) {
      pUVar3 = FField::GetOwnerClass(this_00);
      if ((pUVar3->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) == CLASS_None) {
        if (((ulonglong)this_00[1].ClassPrivate >> 0x24 & 1) == 0) {
          pcVar4 = *(code **)(this_00->_padding_ + 0x138);
LAB_141e9662f:
          if (((int)this_00[1]._padding_ < 1) &&
             (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar1)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(this_00,&this->field_0x0 + *(int *)((longlong)&this_00[1].Owner.Container + 4));
        }
      }
      else if (((ulonglong)this_00[1].ClassPrivate & 0x1040000000) == 0) {
        pcVar4 = *(code **)(this_00->_padding_ + 0x148);
        goto LAB_141e9662f;
      }
    }
  }
  return;
}

// IsInBlueprint @ 141ea9670

bool __thiscall UObject::IsInBlueprint(UObject *this)

{
  int iVar1;
  UClass *pUVar2;
  
  while( true ) {
    if (this == (UObject *)0x0) {
      return false;
    }
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_)) && (this != (UObject *)0x0)) &&
        ((*(uint *)&this[5].field_0xc >> 0x12 & 1) != 0)) ||
       ((((*(uint *)&this->field_0x8 >> 4 & 1) != 0 && (*(longlong *)&this->field_0x10 != 0)) &&
        ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) >> 0x12 & 1) != 0)))) break;
    this = *(UObject **)&this->field_0x20;
  }
  return true;
}

// AddReferencedObjects @ 142018070

void __cdecl UObject::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  return;
}

// CallAddReferencedObjects @ 142023750

void __thiscall UObject::CallAddReferencedObjects(UObject *this,FReferenceCollector *param_1)

{
  UClass::CallAddReferencedObjects(*(UClass **)&this->field_0x10,this,param_1);
  return;
}

// IsDestructionThreadSafe @ 142063270

bool __thiscall UObject::IsDestructionThreadSafe(UObject *this)

{
  return false;
}

// UObject @ 1420ead60

UObject * __thiscall UObject::UObject(UObject *this,FVTableHelper *param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
  return this;
}

// UObject @ 1420ead90

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UObject::UObject(UObject *this,EStaticConstructor param_1,EObjectFlags param_2)

{
  UObjectBase::UObjectBase((UObjectBase *)this,param_2 | (RF_MarkAsRootSet|RF_MarkAsNative));
  *(undefined ***)this = &___7UObject__6B_;
  if (GIsRetrievingVTablePtr != false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  return this;
}

// operator() @ 1420eece0

void __thiscall
`UObject::BuildSubobjectMapping'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// operator() @ 1420eed90

void __thiscall
`UObject::GetDefaultSubobjects'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar4 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)param_1);
  if (bVar4) {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// operator() @ 1420ef100

void __thiscall
`UObject::GetArchetypeInstances'::__l8::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  if (param_1 != *(UObject **)this) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    local_res10[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// operator() @ 1420ef360

void __thiscall
`UObject::GetArchetypeInstances'::__l10::<lambda_2>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *this_00;
  UObject *local_res10 [3];
  
  pUVar2 = *(UObject **)this;
  if (param_1 != pUVar2) {
    local_res10[0] = param_1;
    this_00 = UObject::GetArchetype(param_1);
    if (this_00 != (UObject *)0x0) {
      while (pUVar2 != this_00) {
        this_00 = UObject::GetArchetype(this_00);
        if (this_00 == (UObject *)0x0) {
          return;
        }
      }
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if ((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
         ((FScriptContainerElement *)local_res10 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(UObject **)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator() @ 1420ef460

bool __thiscall
`UObject::LoadConfig'::__l2::<lambda_3>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,FString *param_4)

{
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  *this_00;
  bool bVar1;
  FConfigSection *this_01;
  FString local_18;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    ::FString::FString(&local_18,param_3);
    bVar1 = FConfigCacheIni::GetString(GConfig,param_1,param_2,param_4,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  this_00 = (TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             *)**(undefined8 **)this;
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  this_01 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find(this_00,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_01 != (FConfigSection *)0x0) {
    bVar1 = FConfigSection::GetString(this_01,param_2,param_4);
    return bVar1;
  }
  return false;
}

// operator() @ 1420ef560

FConfigSection * __thiscall
`UObject::LoadConfig'::__l2::<lambda_4>::operator()(void *this,wchar_t *param_1,wchar_t *param_2)

{
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  *this_00;
  FConfigSection *pFVar1;
  FString local_18;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    ::FString::FString(&local_18,param_2);
    pFVar1 = FConfigCacheIni::GetSection(GConfig,param_1,false,&local_18);
  }
  else {
    this_00 = (TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
               *)**(undefined8 **)this;
    ::FString::FString(&local_18,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    pFVar1 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             ::Find(this_00,&local_18);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// AbortInsideMemberFunction @ 1420f0b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::AbortInsideMemberFunction(UObject *this)

{
  FOutputDeviceRedirector *pFVar1;
  FString local_18;
  
  if (2 < (byte)LogObj._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = GetGlobalLogSingleton();
  if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
    pFVar1 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(pFVar1);
  }
  *GUObjectAbortNullPointer = this;
  return;
}

// BeginDestroy @ 1420f2350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::BeginDestroy(UObject *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName local_res8 [4];
  FString local_18;
  
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    local_res8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  SetLinker(this,(FLinkerLoad *)0x0,-1,true,false);
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
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
    while (*(UObject **)FVar3 != this) {
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

// BuildSubobjectMapping @ 1420f24c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::BuildSubobjectMapping
          (UObject *this,UObject *param_1,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_2)

{
  ulonglong *puVar1;
  UClass *pUVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  ulonglong *puVar10;
  ulonglong **local_res20;
  TPairInitializer<UObject_*_&,UObject_*_&> local_88;
  FName local_78;
  undefined1 local_70 [16];
  ulonglong *local_60;
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong ***local_40;
  UObject ***local_38;
  
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_res20 = &local_60;
  local_60 = (ulonglong *)0x0;
  local_58 = 0;
  local_50._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UObject::BuildSubobjectMapping'::__l2::<lambda_1>,void,UObject_*>::Call;
  local_50._8_8_ = &local_res20;
  local_70._8_8_ = local_50;
  local_70._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
  ForEachObjectWithOuterBreakable
            ((UObjectBase *)this,(TFunctionRef<bool___cdecl(UObject_*)> *)local_70,false,RF_NoFlags,
             Garbage);
  iVar3 = (int)local_58;
  uVar7 = (ulonglong)(int)local_58;
  puVar1 = local_60 + uVar7;
  puVar10 = local_60;
  while( true ) {
    if ((int)uVar7 != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (puVar10 == puVar1) break;
    local_res20 = (ulonglong **)*puVar10;
    uVar6 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res20 >> 4))
            * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar8 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_2->field_0x40;
      }
      iVar4 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&param_2->field_0x48 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong ***)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) == local_res20)
          goto LAB_1420f26a5;
          iVar4 = *(int *)(*(longlong *)param_2 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    local_78 = *(FName *)(local_res20 + 3);
    ::FName::ToString(&local_78,(FString *)local_50);
    pwVar9 = L"";
    if (local_50._8_4_ != 0) {
      pwVar9 = (wchar_t *)local_50._0_8_;
    }
    pUVar2 = (UClass *)local_res20[2];
    pFVar5 = ::FName::FName((FName *)local_70,pwVar9);
    local_88.Value =
         (UObject **)StaticFindObjectFast(pUVar2,param_1,*pFVar5,None,RF_NoFlags,Borrowed);
    local_40 = &local_res20;
    local_38 = &local_88.Value;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_&,UObject_*_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)param_2,&local_88,(bool *)&local_40);
    if ((UObject *)local_88.Value != (UObject *)0x0) {
      (*(code *)(*local_res20)[0x48])(local_res20,local_88.Value,param_2);
    }
    if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50._0_8_);
    }
    uVar7 = local_58 & 0xffffffff;
    puVar10 = puVar10 + 1;
  }
LAB_1420f26a5:
  if (local_60 != (ulonglong *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// CanCheckDefaultSubObjects @ 1420f3030

bool __thiscall UObject::CanCheckDefaultSubObjects(UObject *this,bool param_1,bool *param_2)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  
  *param_2 = true;
  bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
  if (!bVar1) {
    *param_2 = false;
    return false;
  }
  if (((((*(uint *)&this->field_0x8 & 0x3400) == 0) &&
       ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
      (pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
      ((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
     (bVar1 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing)
     , !bVar1)) {
    if (!param_1) {
      return false;
    }
    return true;
  }
  *param_2 = true;
  return false;
}

// CanCreateInCurrentContext @ 1420f30e0

bool __cdecl UObject::CanCreateInCurrentContext(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Template",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                       ,0x3f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x100))(param_1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x108))(param_1);
    if (cVar4 == '\0') {
      return false;
    }
  }
  return true;
}

// CheckDefaultSubobjects @ 1420f3150

bool __thiscall UObject::CheckDefaultSubobjects(UObject *this,bool param_1)

{
  bool bVar1;
  undefined1 uVar2;
  FUObjectItem *pFVar3;
  
  bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
  if (!bVar1) {
    return false;
  }
  if (((*(uint *)&this->field_0x8 & 0x3400) == 0) && ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0))
  {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
    if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      bVar1 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing)
      ;
      if ((!bVar1) && (param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001420f31cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(longlong *)this + 0x290))(this);
        return (bool)uVar2;
      }
    }
  }
  return true;
}

// CheckDefaultSubobjectsInternal @ 1420f31f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObject::CheckDefaultSubobjectsInternal(UObject *this)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  TUniquePtr<FReferenceCollectorArchive,TDefaultDelete<FReferenceCollectorArchive>_> TVar5;
  UObject *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar13;
  FString *pFVar14;
  FName FVar15;
  uint uVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  longlong local_240;
  void *local_238;
  undefined8 local_230;
  UClass *local_228;
  FReferenceCollector local_220;
  void **local_210;
  UObject *local_208;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FStructuredArchiveFromArchive local_1c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_268;
  pUVar12 = *(UClass **)&this->field_0x10;
  bVar9 = true;
  local_228 = pUVar12;
  pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
  if (pUVar12 == pUVar11) goto LAB_1420f3522;
  local_220._padding_ = (longlong)&___7FSubobjectReferenceFinder__6B_;
  local_210 = &local_238;
  local_238 = (void *)0x0;
  local_230 = 0;
  local_220.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  lVar18 = *(longlong *)&this->field_0x10;
  local_208 = this;
  pUVar12 = Z_Construct_UClass_UClass_NoRegister();
  pUVar6 = local_208;
  bVar7 = true;
  if (pUVar12 == (UClass *)0x0) {
LAB_1420f32ba:
    if (local_220.DefaultReferenceCollectorArchive.Ptr == (FReferenceCollectorArchive *)0x0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_220);
    }
    TVar5.Ptr = local_220.DefaultReferenceCollectorArchive.Ptr;
    pUVar2 = (local_220.DefaultReferenceCollectorArchive.Ptr)->SerializingObject;
    lVar18 = (local_220.DefaultReferenceCollectorArchive.Ptr)->_padding_;
    pUVar3 = (local_220.DefaultReferenceCollectorArchive.Ptr)->SerializedDataContainer;
    (local_220.DefaultReferenceCollectorArchive.Ptr)->SerializingObject = pUVar6;
    (**(code **)((local_220.DefaultReferenceCollectorArchive.Ptr)->_padding_ + 0xa0))
              (local_220.DefaultReferenceCollectorArchive.Ptr,0);
    pUVar6 = local_208;
    (TVar5.Ptr)->SerializedDataContainer = (UObject *)0x0;
    this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1c0,(FArchive *)TVar5.Ptr);
    FVar13 = FStructuredArchiveFromArchive::GetSlot(this_01);
    SerializeScriptProperties(pUVar6,*(FStructuredArchiveSlot *)FVar13);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1c0);
    (TVar5.Ptr)->SerializingObject = pUVar2;
    (**(code **)((TVar5.Ptr)->_padding_ + 0xa0))(TVar5.Ptr,lVar18);
    (TVar5.Ptr)->SerializedDataContainer = pUVar3;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar18 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar7 = false;
    }
    if (!bVar7) goto LAB_1420f32ba;
  }
  CallAddReferencedObjects(local_208,&local_220);
  uVar16 = 0;
  if (0 < (int)local_230) {
    lVar18 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < (int)local_230) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_248 = (FScriptContainerElement *)(longlong)(int)uVar16;
        local_240 = (longlong)(int)local_230;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      this_00 = *(UObjectBaseUtility **)((longlong)local_238 + lVar18);
      if (1 < (byte)LogObj._0_1_) {
        pFVar14 = UObjectBaseUtility::GetFullName
                            (*(UObjectBaseUtility **)&this_00->field_0x20,&local_1d0,(UObject *)0x0,
                             None);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        UObjectBaseUtility::GetFullName(this_00,&local_1e0,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_1f0,(UObject *)0x0,None);
        local_248 = (FScriptContainerElement *)pwVar17;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar16 < (int)local_230);
  }
  if ((int)local_230 != 0) {
    bVar9 = false;
    bVar7 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if (1 < (byte)LogObj._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
  }
  FReferenceCollector::~FReferenceCollector(&local_220);
  pUVar12 = local_228;
  if (local_238 != (void *)0x0) {
    FMemory::Free(local_238);
    pUVar12 = local_228;
  }
LAB_1420f3522:
  if (((*(uint *)&this->field_0x8 & 0x10) != 0) &&
     (FVar15 = UClass::GetDefaultObjectName(pUVar12),
     *(longlong *)&this->field_0x18 != *(longlong *)FVar15)) {
    bVar9 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if (1 < (byte)LogObj._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    bVar9 = false;
  }
  return bVar9;
}

// CollectDefaultSubobjects @ 1420f4670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::CollectDefaultSubobjects
          (UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  GetObjectsWithOuter((UObjectBase *)this,param_1,param_2,RF_NoFlags,Borrowed);
  iVar5 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar5) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = UObjectBaseUtility::IsDefaultSubobject
                        (*(UObjectBaseUtility **)((param_1->AllocatorInstance).Data + lVar8));
      uVar6 = uVar7;
      if (!bVar3) {
        uVar6 = uVar7 - 1;
        lVar8 = lVar8 + -8;
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar5 = ~uVar7 + param_1->ArrayNum;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar7 * 8,
                  pFVar1 + (longlong)(param_1->ArrayNum - iVar5) * 8,(longlong)iVar5 << 3);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      iVar5 = param_1->ArrayNum;
      uVar7 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// CollectSaveOverrides @ 1420f4820

void __thiscall
UObject::CollectSaveOverrides(UObject *this,FObjectCollectSaveOverridesContext param_1)

{
  return;
}

// ConditionalBeginDestroy @ 1420f4830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObject::ConditionalBeginDestroy(UObject *this)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  FBoolAnnotation FVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined7 extraout_var;
  FScriptContainerElement *pFVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar10;
  UObject *local_38;
  FString local_30;
  FString local_20;
  
  if ((0 < (int)(DebugSpikeMarkAnnotation._32_4_ - DebugSpikeMarkAnnotation._76_4_)) &&
     (FVar3 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                        ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&DebugSpikeMarkAnnotation,
                         (UObjectBase *)&stack0x00000008),
     *(char *)CONCAT71(extraout_var,FVar3.Mark) == '\0')) {
    pFVar6 = (FScriptContainerElement *)
             UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this,&local_30,(UObject *)0x0,None);
    if ((DebugSpikeMarkNames.AllocatorInstance.Data <= pFVar6) &&
       ((pFVar6 < DebugSpikeMarkNames.AllocatorInstance.Data +
                  (longlong)DebugSpikeMarkNames.ArrayMax * 0x10 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (DebugSpikeMarkNames.ArrayNum == DebugSpikeMarkNames.ArrayMax) {
      DebugSpikeMarkNames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&DebugSpikeMarkNames.AllocatorInstance,&DebugSpikeMarkNames.ArrayMax);
    }
    pFVar8 = DebugSpikeMarkNames.AllocatorInstance.Data +
             (longlong)DebugSpikeMarkNames.ArrayNum * 0x10;
    DebugSpikeMarkNames.ArrayNum = DebugSpikeMarkNames.ArrayNum + 1;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar6 + 8);
    *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar6 + 0xc);
    *(undefined8 *)(pFVar6 + 8) = 0;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x4e1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_BeginDestroyed);
    pTVar10 = &DebugBeginDestroyed;
    pTVar7 = &DebugBeginDestroyed;
    if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               DebugBeginDestroyed.AllocatorInstance.SecondaryData;
    }
    local_38 = this;
    if (pTVar7 <= &local_38) {
      pTVar7 = &DebugBeginDestroyed;
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      if ((&local_38 < (UObject **)((longlong)pTVar7 + (longlong)DebugBeginDestroyed.ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if (DebugBeginDestroyed.ArrayNum == DebugBeginDestroyed.ArrayMax) {
      DebugBeginDestroyed.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                     (0x808,&DebugBeginDestroyed.AllocatorInstance,&DebugBeginDestroyed.ArrayMax);
    }
    pTVar7 = &DebugBeginDestroyed;
    lVar9 = (longlong)DebugBeginDestroyed.ArrayNum;
    if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               DebugBeginDestroyed.AllocatorInstance.SecondaryData;
    }
    DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + 1;
    *(UObject **)((longlong)pTVar7 + lVar9 * 8) = local_38;
    (**(code **)(*(longlong *)this + 0xa8))(this);
    if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      pTVar10 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                DebugBeginDestroyed.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UObject_*>)
            ((longlong)pTVar10 + (longlong)DebugBeginDestroyed.ArrayNum * 8);
    if ((ForElementType<UObject_*>)pTVar10 == FVar1) {
LAB_1420f4b43:
      bVar4 = true;
    }
    else {
      do {
        if (*(UObject **)pTVar10 == this) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_20,(UObject *)0x0,None);
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20.Data.AllocatorInstance.Data);
          }
          goto LAB_1420f4b43;
        }
        pTVar10 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                  ((longlong)pTVar10 + 8);
      } while ((ForElementType<UObject_*>)pTVar10 != FVar1);
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ConditionalFinishDestroy @ 1420f4b70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObject::ConditionalFinishDestroy(UObject *this)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  longlong lVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  UObject *local_28;
  FString local_20;
  
  bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x51f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(uint *)&this->field_0x8 >> 0x10 & 1) != 0) {
    return false;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_FinishDestroyed);
  pTVar7 = &DebugFinishDestroyed;
  pTVar5 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  local_28 = this;
  if (pTVar5 <= &local_28) {
    pTVar5 = &DebugFinishDestroyed;
    if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               DebugFinishDestroyed.AllocatorInstance.SecondaryData;
    }
    if ((&local_28 < (UObject **)((longlong)pTVar5 + (longlong)DebugFinishDestroyed.ArrayMax * 8))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (DebugFinishDestroyed.ArrayNum == DebugFinishDestroyed.ArrayMax) {
    DebugFinishDestroyed.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                   (0x808,&DebugFinishDestroyed.AllocatorInstance,&DebugFinishDestroyed.ArrayMax);
  }
  pTVar5 = &DebugFinishDestroyed;
  lVar6 = (longlong)DebugFinishDestroyed.ArrayNum;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + 1;
  *(UObject **)((longlong)pTVar5 + lVar6 * 8) = local_28;
  (**(code **)(*(longlong *)this + 0xb8))(this);
  FUObjectArray::ResetSerialNumber(&GUObjectArray,(UObjectBase *)this);
  FUObjectArray::RemoveObjectFromDeleteListeners(&GUObjectArray,(UObjectBase *)this);
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UObject **)pTVar7 != this) {
      pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)pTVar7 + 8);
      if ((ForElementType<UObject_*>)pTVar7 == FVar1) {
        return true;
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_20,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ConditionalPostLoad @ 1420f4da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::ConditionalPostLoad(UObject *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  ELoaderType EVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  FTlsAutoCleanup FVar13;
  UObject *pUVar14;
  FExclusiveLoadPackageTimeTracker *pFVar15;
  UPackage *pUVar16;
  TEventRef<unsigned_int> TVar17;
  FWriteBuffer *pFVar18;
  FTlsAutoCleanup FVar19;
  FTlsAutoCleanup FVar20;
  FName FVar21;
  undefined1 auStackY_138 [32];
  FPostLoadObjectScope local_e8;
  undefined1 local_e7 [3];
  FLLMScope local_e4;
  FLLMScope local_e0 [2];
  UObject *local_d8;
  FName local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  UObject *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  FMemScope local_90;
  FMemScope local_88;
  code *local_80;
  undefined1 *local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  undefined4 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FLLMScope::FLLMScope(local_e0,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_88,UObject,true);
  FLLMScope::FLLMScope
            (&local_e4,LLMTagDeclaration_UObject_UObjectInternals.UniqueName,false,None,Default,true
            );
  local_d0 = LLMTagDeclaration_UObject_UObjectInternals.UniqueName;
  FMemScope::FMemScope(&local_90,&local_d0,true);
  EVar6 = (*GetLoaderType)();
  if ((EVar6 == ZenLoader) && ((*(uint *)&this->field_0x8 >> 10 & 1) != 0)) {
    local_b0 = this;
    `UObject::ConditionalPostLoad'::__l2::<lambda_1>::operator()(&local_b0);
  }
  if ((*(uint *)&this->field_0x8 >> 0xc & 1) != 0) {
    bVar7 = IsInGameThread();
    if (((!bVar7) && ((*(uint *)&this->field_0x8 & 0x30) == 0)) &&
       (cVar8 = (**(code **)(*(longlong *)this + 0x130))(this), cVar8 == '\0')) {
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if (((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar9) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
           &pUVar10->_padding_)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || HasAnyFlags(RF_ClassDefaultObject|RF_ArchetypeObject) || IsPostLoadThreadSafe() || IsA(UClass::StaticClass())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                             ,0x546,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_78 = local_e7;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar11);
    FVar19 = pFVar12[0x2d];
    FVar20 = (FTlsAutoCleanup)(pFVar12 + 0x1d);
    FVar13 = FVar19;
    if (FVar19 == (FTlsAutoCleanup)0x0) {
      FVar13 = FVar20;
    }
    local_d8 = this;
    if ((ulonglong)FVar13 <= &local_d8) {
      FVar13 = FVar20;
      if (FVar19 != (FTlsAutoCleanup)0x0) {
        FVar13 = FVar19;
      }
      if ((&local_d8 <
           (UObject **)((longlong)FVar13 + (longlong)*(int *)&pFVar12[0x2e].field_0x4 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar21 = (FName)(pFVar12 + 0x2e);
    iVar9 = *(int *)FVar21;
    local_d0 = FVar21;
    if (iVar9 == *(int *)&pFVar12[0x2e].field_0x4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                        (0x808,(ForElementType<UObject_*> *)FVar20,(int *)&pFVar12[0x2e].field_0x4);
    }
    *(int *)FVar21 = iVar9 + 1;
    FVar19 = FVar20;
    if (pFVar12[0x2d] != (FTlsAutoCleanup)0x0) {
      FVar19 = pFVar12[0x2d];
    }
    *(UObject **)((longlong)FVar19 + (longlong)iVar9 * 8) = local_d8;
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_NeedPostLoad);
    pUVar14 = GetArchetype(this);
    if (pUVar14 != (UObject *)0x0) {
      ConditionalPostLoad(pUVar14);
    }
    ConditionalPostLoadSubobjects(this,(FObjectInstancingGraph *)0x0);
    if ((this == (UObject *)0x0) ||
       (cVar8 = (**(code **)(*(longlong *)this + 0x1c0))(this), cVar8 == '\0')) {
      pUVar14 = (UObject *)0x0;
    }
    else {
      pFVar15 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
      if (FExclusiveLoadPackageTimeTracker::TrackerInstance ==
          (FExclusiveLoadPackageTimeTracker *)0x0) {
        pFVar15 = FExclusiveLoadPackageTimeTracker::Construct();
      }
      pUVar16 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(pFVar15,(FName)pUVar16->_padding_);
      pUVar14 = this;
    }
    if ((*(uint *)&this->field_0x8 >> 4 & 1) == 0) {
      pUVar16 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        TVar17 = (TEventRef<unsigned_int>)&local_c8;
        local_c8 = 0;
      }
      else {
        local_a8 = *(undefined8 *)&this->field_0x18;
        TVar17 = FStringTrace::GetNameRef(&local_70);
      }
      uVar1 = *(undefined8 *)TVar17;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_c0 = 0;
        TVar17 = (TEventRef<unsigned_int>)&local_c0;
      }
      else {
        local_a0 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
        TVar17 = FStringTrace::GetNameRef(&local_68);
      }
      uVar2 = *(undefined8 *)TVar17;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_b8 = 0;
        TVar17 = (TEventRef<unsigned_int>)&local_b8;
      }
      else {
        local_98 = pUVar16->_padding_;
        TVar17 = FStringTrace::GetNameRef(&local_60);
      }
      uVar3 = *(undefined8 *)TVar17;
      bVar7 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_48);
        bVar7 = true;
        *local_48 = (int)uVar1;
        local_48[1] = (int)uVar2;
        local_48[2] = (int)uVar3;
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
      FLoadTimeProfilerTracePrivate::FPostLoadObjectScope::FPostLoadObjectScope(&local_e8,this);
      (**(code **)(*(longlong *)this + 0x98))(this);
      FLoadTimeProfilerTracePrivate::FPostLoadObjectScope::~FPostLoadObjectScope(&local_e8);
      FVar21 = local_d0;
      if (bVar7) {
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar18 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
          pFVar18 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar18->Cursor = '\n';
        pFVar18->Cursor = pFVar18->Cursor + 1;
        pFVar18->Committed = pFVar18->Cursor;
        FVar21 = local_d0;
      }
    }
    else {
      (**(code **)(**(longlong **)&this->field_0x10 + 0x3c8))();
    }
    if (pUVar14 != (UObject *)0x0) {
      pFVar15 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
      if (FExclusiveLoadPackageTimeTracker::TrackerInstance ==
          (FExclusiveLoadPackageTimeTracker *)0x0) {
        pFVar15 = FExclusiveLoadPackageTimeTracker::Construct();
      }
      FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage(pFVar15,(UPackage *)0x0,pUVar14);
    }
    if (pFVar12[0x2d] != (FTlsAutoCleanup)0x0) {
      FVar20 = pFVar12[0x2d];
    }
    FVar19 = (FTlsAutoCleanup)((longlong)FVar20 + (longlong)*(int *)FVar21 * 8);
    for (; FVar20 != FVar19; FVar20 = (FTlsAutoCleanup)((longlong)FVar20 + 8)) {
      if (*(UObject **)FVar20 == this) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        break;
      }
    }
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(&local_e4);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_e0);
  return;
}

// ConditionalPostLoadSubobjects @ 1420f5350

void __thiscall
UObject::ConditionalPostLoadSubobjects(UObject *this,FObjectInstancingGraph *param_1)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  
  if ((*(uint *)&this->field_0x8 >> 0xd & 1) != 0) {
    (**(code **)(*(longlong *)this + 0xa0))();
  }
  bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
  if (((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
     ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      return;
    }
  }
  return;
}

// ConditionalPreload @ 1420f53d0

void __thiscall UObject::ConditionalPreload(UObject *this)

{
  FUObjectItem *pFVar1;
  FLinkerLoad *pFVar2;
  
  if (((*(uint *)&this->field_0x8 >> 10 & 1) == 0) &&
     (pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
     ((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x36) & 1) == 0)) {
    return;
  }
  pFVar2 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if (pFVar2 == (FLinkerLoad *)0x0) {
    return;
  }
  FLinkerLoad::Preload((FLinkerLoad *)&pFVar2->_padding_,this);
  return;
}

// CreateDefaultSubobject @ 1420f5810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UObject::CreateDefaultSubobject
          (UObject *this,FName param_1,UClass *param_2,UClass *param_3,bool param_4,bool param_5)

{
  uint *puVar1;
  FUObjectThreadContext *this_00;
  FObjectInitializer *this_01;
  UObject *pUVar2;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *local_20;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FUObjectThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar1);
  this_01 = FUObjectThreadContext::TopInitializer(this_00);
  if (this_01 == (FObjectInitializer *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  if (this_01->Obj != this) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  pUVar2 = FObjectInitializer::CreateDefaultSubobject
                     (this_01,this,param_1,param_2,param_3,param_4,param_5);
  return pUVar2;
}

// CreateEditorOnlyDefaultSubobjectImpl @ 1420f58e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UObject::CreateEditorOnlyDefaultSubobjectImpl
          (UObject *this,FName param_1,UClass *param_2,bool param_3)

{
  uint *puVar1;
  FUObjectThreadContext *this_00;
  FObjectInitializer *this_01;
  UObject *pUVar2;
  undefined1 local_28 [8];
  code *local_20;
  undefined1 *local_18;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_18 = local_28;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FUObjectThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar1);
  this_01 = FUObjectThreadContext::TopInitializer(this_00);
  pUVar2 = FObjectInitializer::CreateEditorOnlyDefaultSubobject
                     (this_01,this,param_1,param_2,param_3);
  return pUVar2;
}

// EnsureNotRetrievingVTablePtr @ 1420f6b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::EnsureNotRetrievingVTablePtr(UObject *this)

{
  if (GIsRetrievingVTablePtr) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    return;
  }
  return;
}

// FinishDestroy @ 1420f7770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::FinishDestroy(UObject *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName local_res8 [4];
  FString local_18;
  
  if ((*(uint *)&this->field_0x8 >> 0x10 & 1) == 0) {
    local_res8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DestroyNonNativeProperties(this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UObject **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetArchetypeInstances @ 1420f8570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::GetArchetypeInstances(UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *local_48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_40;
  code *local_38;
  UObject **local_30;
  UObject *local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  UObject **local_10;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    if ((*(uint *)&this->field_0x8 & 0x20) == 0) {
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UObject::GetArchetypeInstances'::__l8::<lambda_1>,void,UObject_*>
                 ::Call;
      local_48 = this;
      local_40 = param_1;
      ForEachObjectOfClass
                (*(UClass **)&this->field_0x10,(TFunctionRef<void___cdecl(UObject_*)> *)&local_38,
                 true,RF_NoFlags,Garbage);
      return;
    }
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UObject::GetArchetypeInstances'::__l10::<lambda_2>,void,UObject_*>
               ::Call;
    local_28 = this;
    local_20 = param_1;
    ForEachObjectOfClass
              (*(UClass **)&this->field_0x10,(TFunctionRef<void___cdecl(UObject_*)> *)&local_18,true
               ,RF_NoFlags,Garbage);
  }
  return;
}

// GetAssetRegistryTags @ 1420f8d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::GetAssetRegistryTags(UObject *this,FAssetData *param_1)

{
  FAssetRegistryTagsContext FVar1;
  undefined1 auStack_c8 [32];
  FAssetRegistryTagsContext local_a8 [2];
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)local_98,this,Uncategorized);
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         (local_a8,(FAssetRegistryTagsContextData *)local_98);
  GetAssetRegistryTags(this,FVar1,param_1);
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetAssetRegistryTags @ 1420f8db0

void __thiscall
UObject::GetAssetRegistryTags(UObject *this,FAssetRegistryTagsContext param_1,FAssetData *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  FAssetBundleEntry *pFVar6;
  bool bVar7;
  FAssetRegistryTagsContext *pFVar8;
  FAssetDataTagMapSharedView FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FAssetDataTagMapSharedView local_res8;
  FAssetRegistryTagsContext local_res10;
  longlong local_38 [2];
  
  lVar3 = *(longlong *)&(param_1.Data)->Tags;
  *(undefined1 *)(lVar3 + 0x75) = 1;
  pcVar4 = *(code **)(*(longlong *)this + 0x1b8);
  pFVar8 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&local_res10,(FAssetRegistryTagsContext *)param_1.Data);
  (*pcVar4)(this,pFVar8);
  FVar9 = MakeSharedTagMap((TMap<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                            *)&local_res8);
  FAssetDataTagMapSharedView::operator=
            (&param_2->TagsAndValues,(FAssetDataTagMapSharedView *)FVar9.field0_0x0);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_res8);
  puVar5 = *(undefined8 **)(lVar3 + 0x60);
  if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 1) == 0)) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10 = ::operator_new(0x20);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11 = pTVar10 + 1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFAssetBundleData___00_SharedPointerInternals__6B_;
      pTVar11->_padding_ = 0;
      aVar2 = *(atomic<int> *)(puVar5 + 1);
      pFVar6 = (FAssetBundleEntry *)*puVar5;
      pTVar10[1].SharedReferenceCount = aVar2;
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)aVar2,0,(ForAnyElementType *)pTVar11,(int)aVar2,
                   (int *)&pTVar10[1].WeakReferenceCount);
        ConstructItems<FAssetBundleEntry,FAssetBundleEntry,int>
                  ((FScriptContainerElement *)pTVar11->_padding_,pFVar6,(int)aVar2);
      }
      pTVar11 = pTVar10 + 1;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  if (&param_2->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)local_38) {
    (param_2->TaggedAssetBundles).Object = (FAssetBundleData *)pTVar11;
    pTVar11 = (param_2->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
    if (pTVar10 != pTVar11) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      (param_2->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar10;
      pTVar10 = pTVar12;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar11->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar11->_padding_)(pTVar11);
          LOCK();
          paVar1 = &pTVar11->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// GetAssetRegistryTags @ 1420f8f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UObject::GetAssetRegistryTags
          (UObject *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [8];
  UObject *local_180;
  int local_178;
  int local_174;
  ForElementType<UObject_const_*> local_170;
  longlong *local_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext local_108;
  FString local_100 [2];
  undefined4 local_d4;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  int local_94;
  void *local_88;
  undefined4 local_80;
  FAssetBundleData *local_68;
  bool local_53;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UObject **)pFVar11->InlineData == this) {
      return;
    }
  }
  local_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)local_c8,this,Uncategorized);
  local_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  local_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&local_180) &&
      (&local_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UObject **)(pFVar11->InlineData + (longlong)iVar8 * 8) = local_180;
  pcVar5 = *(code **)(*(longlong *)this + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&local_108,(FAssetRegistryTagsContextData *)local_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UObject **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (local_c8._8_4_ - local_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = local_a0;
  iStack_160 = 0;
  local_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (local_a0 != 0) {
    puVar17 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar17 = local_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_178 = (int)lVar13;
    uStack_14c = local_178 + -1 + local_148;
    if ((int)local_a0 < (int)uStack_14c) {
      uStack_14c = local_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = local_c8._8_4_ - local_94;
  local_168 = (longlong *)local_c8;
  local_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = local_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = local_d4;
  iVar8 = (int)local_a0 >> 5;
  TStack_130._28_4_ = local_d4;
  TStack_130.BaseBitIndex = local_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)local_a0;
  local_138 = local_168;
  TStack_130.Array = local_158;
  if (((int)local_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != local_a0) {
    puVar17 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar17 = local_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_174 = (int)lVar13;
    uVar16 = local_174 + -1 + uVar18;
    if ((int)local_a0 < (int)uVar16) {
      uVar16 = local_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      local_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (plVar4 == (longlong *)local_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_170,local_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (local_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         local_68;
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// GetAssetRegistryTags @ 1420f95d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UObject::GetAssetRegistryTags(UObject *this,FAssetRegistryTagsContext param_1)

{
  longlong lVar1;
  code *pcVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<UObject_const_*> *pFVar9;
  ForElementType<UObject_const_*> *pFVar10;
  FString *pFVar11;
  FAssetRegistryTagsContext *pFVar12;
  FAssetRegistryTagsContext FVar13;
  UScriptStruct *pUVar14;
  void *pvVar15;
  ForElementType<UObject_const_*> *pFVar16;
  int *piVar17;
  longlong lVar18;
  FProperty *pFVar19;
  longlong *plVar20;
  longlong lVar21;
  FAssetRegistryTag *pFVar22;
  bool local_res8;
  uint7 uStackX_9;
  undefined1 local_res10 [8];
  FPlayInEditorLoadingScope local_res18 [2];
  FAssetBundleData *local_res20;
  undefined1 local_148 [8];
  FAssetRegistryTag *local_140;
  ForElementType<UObject_const_*> local_138;
  FString local_130;
  TFieldIterator<FProperty> local_120;
  TFieldIterator<FProperty> local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  FName local_d8;
  FAssetRegistryTag local_d0;
  FAssetRegistryTag local_b0;
  FAssetRegistryTag local_90;
  FAssetRegistryTagsContext local_70;
  FAssetRegistryTagsContext local_68;
  FAssetRegistryTagsContext local_60;
  FString local_58;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar16 = (ForElementType<UObject_const_*> *)(lVar1 + 0xcb8);
  pFVar10 = *(ForElementType<UObject_const_*> **)(lVar1 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar1 + 0xcc8) == (ForElementType<UObject_const_*> *)0x0
     ) {
    pFVar10 = pFVar16;
  }
  puVar4 = pFVar10->InlineData;
  for (; pFVar10 !=
         (ForElementType<UObject_const_*> *)(puVar4 + (longlong)*(int *)(lVar1 + 0xcd0) * 8);
      pFVar10 = (ForElementType<UObject_const_*> *)(pFVar10->InlineData + 8)) {
    if (*(UObject **)pFVar10->InlineData == this) goto LAB_1420f9917;
  }
  local_res20 = (FAssetBundleData *)0x0;
  bVar6 = FAssetRegistryTagsContext::WantsBundleResult((FAssetRegistryTagsContext *)param_1.Data);
  if (!bVar6) {
    plVar20 = (longlong *)((ulonglong)uStackX_9 << 8);
    lVar21 = (ulonglong)uStackX_9 << 8;
  }
  else {
    plVar20 = (longlong *)(lVar1 + 0xcb0);
    lVar21 = *plVar20;
    *plVar20 = (longlong)&local_res20;
  }
  local_res8 = bVar6;
  pFVar10 = *(ForElementType<UObject_const_*> **)(lVar1 + 0xcc8);
  pFVar9 = pFVar10;
  if (pFVar10 == (ForElementType<UObject_const_*> *)0x0) {
    pFVar9 = pFVar16;
  }
  local_148 = (undefined1  [8])this;
  if (pFVar9 <= (ForElementType<UObject_const_*> *)local_148) {
    if (pFVar10 == (ForElementType<UObject_const_*> *)0x0) {
      pFVar10 = pFVar16;
    }
    if ((local_148 < pFVar10->InlineData + (longlong)*(int *)(lVar1 + 0xcd4) * 8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar7 = *(int *)(lVar1 + 0xcd0);
  if (iVar7 == *(int *)(lVar1 + 0xcd4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar16,(int *)(lVar1 + 0xcd4));
  }
  local_140 = (FAssetRegistryTag *)0x0;
  *(int *)(lVar1 + 0xcd0) = iVar7 + 1;
  local_138 = (ForElementType<UObject_const_*>)0x0;
  pFVar10 = *(ForElementType<UObject_const_*> **)(lVar1 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar1 + 0xcc8) == (ForElementType<UObject_const_*> *)0x0
     ) {
    pFVar10 = pFVar16;
  }
  *(undefined1 (*) [8])(pFVar10->InlineData + (longlong)iVar7 * 8) = local_148;
  (**(code **)(*(longlong *)this + 0x1b0))(this,&local_140);
  uVar5 = local_138._0_4_;
  pFVar22 = local_140 + (int)local_138._0_4_;
  piVar17 = &(local_140->Value).Data.ArrayMax;
  while( true ) {
    if (local_138._0_4_ != uVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UObject::FAssetRegistryTag,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FAssetRegistryTag *)(piVar17 + -5) == pFVar22) break;
    local_d0.Name = ((FAssetRegistryTag *)(piVar17 + -5))->Name;
    local_d0.Value.Data.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar17 + -3))->AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar17 + -3))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    local_d0.Value.Data.ArrayNum = piVar17[-1];
    local_d0.Value.Data.ArrayMax = *piVar17;
    *(undefined8 *)(piVar17 + -1) = 0;
    local_d0.Type = piVar17[1];
    local_d0.DisplayFlags = piVar17[2];
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_d0);
    piVar17 = piVar17 + 8;
  }
  DestructItems<UObject::FAssetRegistryTag,int>(local_140,local_138._0_4_);
  if (local_140 != (FAssetRegistryTag *)0x0) {
    FMemory::Free(local_140);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar1 + 0xcd0);
  if (iVar7 != 0) {
    uVar8 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar8 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar18 = lVar1 + 0xcb8;
    if (*(longlong *)(lVar1 + 0xcc8) != 0) {
      lVar18 = *(longlong *)(lVar1 + 0xcc8);
    }
    if (*(UObject **)(lVar18 + -8 + (longlong)*(int *)(lVar1 + 0xcd0) * 8) == this)
    goto LAB_1420f98b8;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x991,L"");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1420f98b8:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  bVar6 = FAssetRegistryTagsContext::WantsBundleResult((FAssetRegistryTagsContext *)param_1.Data);
  if ((bVar6) && (local_res20 != (FAssetBundleData *)0x0)) {
    FAssetRegistryTagsContext::SetBundleResult
              ((FAssetRegistryTagsContext *)param_1.Data,local_res20);
  }
  if (local_res8) {
    *plVar20 = lVar21;
  }
LAB_1420f9917:
  UE::Core::Private::FPlayInEditorLoadingScope::FPlayInEditorLoadingScope(local_res18,-1);
  (**(code **)(*(longlong *)this + 0x1c8))(this,&local_e0);
  local_f0 = 0;
  if ((local_e0 != (FName)0x0) && (local_e8 = 0, local_d8 != (FName)0x0)) {
    ::FName::ToString(&local_e0,&local_130);
    local_b0.Name = FPrimaryAssetId::PrimaryAssetTypeTag;
    local_b0.Value.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    local_b0.Value.Data.ArrayNum = local_130.Data.ArrayNum;
    local_b0.Value.Data.ArrayMax = local_130.Data.ArrayMax;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Type = TT_Alphabetical;
    local_b0.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_b0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    pFVar11 = ::FName::ToString(&local_d8,&local_58);
    local_90.Name = FPrimaryAssetId::PrimaryAssetNameTag;
    local_90.Value.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Value.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_90.Value.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    local_90.Type = TT_Alphabetical;
    local_90.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_90);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                      (&local_70,(FAssetRegistryTagsContext *)param_1.Data);
  local_120.Struct = *(UStruct **)&this->field_0x10;
  if (local_120.Struct == (UStruct *)0x0) {
    local_120.Field = (FField *)0x0;
  }
  else {
    local_120.Field = (local_120.Struct)->ChildProperties;
  }
  local_120.InterfaceIndex = -1;
  local_120.bIncludeSuper = true;
  local_120.bIncludeDeprecated = true;
  local_120.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_120);
  pFVar3 = (FProperty *)local_120.Field;
  while (local_120.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
    FVar13.Data = (FAssetRegistryTagsContextData *)
                  FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_68,pFVar12);
    if ((pFVar3 == (FProperty *)0x0) ||
       (pFVar19 = pFVar3, (*(uint *)(pFVar3->_padding_ + 0x18) >> 0xf & 1) == 0)) {
      pFVar19 = (FProperty *)0x0;
    }
    UE::Object::Private::GetAssetRegistryTagFromProperty(this,this,pFVar19,FVar13);
    local_120.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_120);
    pFVar3 = (FProperty *)local_120.Field;
  }
  pUVar14 = UClass::GetSparseClassDataStruct(*(UClass **)&this->field_0x10);
  if (pUVar14 != (UScriptStruct *)0x0) {
    pvVar15 = UClass::GetSparseClassData(*(UClass **)&this->field_0x10,ArchetypeIfNull);
    local_108.Field = (FField *)pUVar14->_padding_;
    local_108.InterfaceIndex = -1;
    local_108.bIncludeSuper = true;
    local_108.bIncludeDeprecated = true;
    local_108.bIncludeInterface = false;
    local_108.Struct = (UStruct *)pUVar14;
    TFieldIterator<FProperty>::IterateToNext(&local_108);
    pFVar3 = (FProperty *)local_108.Field;
    while (local_108.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
      FVar13.Data = (FAssetRegistryTagsContextData *)
                    FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_60,pFVar12);
      if ((pFVar3 == (FProperty *)0x0) ||
         (pFVar19 = pFVar3, (*(uint *)(pFVar3->_padding_ + 0x18) >> 0xf & 1) == 0)) {
        pFVar19 = (FProperty *)0x0;
      }
      UE::Object::Private::GetAssetRegistryTagFromProperty(pvVar15,this,pFVar19,FVar13);
      local_108.Field = (FField *)pFVar3->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_108);
      pFVar3 = (FProperty *)local_108.Field;
    }
  }
  UE::Core::Private::FPlayInEditorLoadingScope::~FPlayInEditorLoadingScope(local_res18);
  return;
}

// GetDefaultConfigFilename @ 1420f9fd0

/* WARNING: Enum "EPathConversion": Some values do not have unique names */

FString * __thiscall
UObject::GetDefaultConfigFilename(UObject *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  
  GetFinalOverridePlatform(&local_88,this);
  iVar3 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_68);
    FPaths::SourceConfigDir((FString *)&local_48);
    ::FString::PrintfImpl(&local_58,L"%sDefault%s.ini");
    FConfigCacheIni::NormalizeConfigIniPath(__return_storage_ptr__,&local_58);
    FVar5.Data = (FScriptContainerElement *)local_48.DataPtr;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      FVar5.Data = (FScriptContainerElement *)local_48.DataPtr;
    }
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar4 = FPaths::EngineDir(&local_78);
    FPaths::ConvertPath(&local_58,pFVar4,Engine_PlatformExtension,(wchar_t *)FVar5.Data,
                        (wchar_t *)0x0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    bVar1 = FPaths::DirectoryExists(&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FPaths::SourceConfigDir(&local_58);
    ::FString::PrintfImpl(&local_68,L"%s%s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar3 = local_68.Data.ArrayNum;
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
    local_90 = local_68.Data.ArrayNum;
    local_98.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_8c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,&local_98,local_68.Data.ArrayNum,&local_8c);
      memcpy(local_98.Data,FVar5.Data,(longlong)iVar3 * 2);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,(wchar_t *)FVar5.Data);
    bVar2 = FPaths::DirectoryExists(&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (!bVar2)) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar5.Data = local_88.Data.AllocatorInstance.Data;
      }
      pFVar4 = FPaths::ProjectDir((FString *)&local_48);
      FPaths::ConvertPath(&local_58,pFVar4,Project_First,(wchar_t *)FVar5.Data,(wchar_t *)0x0);
      if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      local_30 = 6;
      local_48.Size = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        local_48.Size = 0;
      }
      local_38 = L"Config";
      FPaths::CombineInternal(&local_78,&local_48,2);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      local_98.Data = local_78.Data.AllocatorInstance.Data;
      local_90 = local_78.Data.ArrayNum;
      local_8c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),(FString *)&local_48);
    ::FString::PrintfImpl(&local_58,L"%s/%s%s.ini");
    FConfigCacheIni::NormalizeConfigIniPath(__return_storage_ptr__,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar5.Data = local_98.Data;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
      FVar5.Data = local_98.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultSubobjectByName @ 1420fa390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall UObject::GetDefaultSubobjectByName(UObject *this,FName param_1)

{
  longlong *plVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *this_00;
  UObject *pUVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong **local_res18 [2];
  longlong *local_48;
  ulonglong local_40;
  code *local_38;
  longlong ***local_30;
  code *local_28;
  code **local_20;
  
  bVar4 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar4) || (GIsGarbageCollecting != false)) {
    local_res18[0] = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UObject::GetDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*>
               ::Call;
    local_30 = local_res18;
    local_48 = (longlong *)0x0;
    local_20 = &local_38;
    local_40 = 0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)this,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_28,false,
               RF_NoFlags,Borrowed);
    iVar3 = (int)local_40;
    uVar7 = (ulonglong)(int)local_40;
    plVar1 = local_48 + uVar7;
    plVar8 = local_48;
    while( true ) {
      if ((int)uVar7 != iVar3) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        uVar7 = local_40 & 0xffffffff;
      }
      pUVar6 = (UObject *)0x0;
      if ((plVar8 == plVar1) ||
         (pUVar6 = (UObject *)*plVar8, FVar2.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18,
         FVar2.Number = *(uint *)&pUVar6->field_0x1c, FVar2 == param_1)) break;
      plVar8 = plVar8 + 1;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    this_00 = StaticFindObjectFast(pUVar5,this,param_1,None,RF_NoFlags,Borrowed);
    pUVar6 = (UObject *)0x0;
    if ((this_00 != (UObject *)0x0) &&
       (bVar4 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)this_00),
       pUVar6 = (UObject *)0x0, bVar4)) {
      return this_00;
    }
  }
  return pUVar6;
}

// GetDefaultSubobjects @ 1420fa4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::GetDefaultSubobjects(UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> **local_20;
  code *local_18;
  code **local_10;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UObject::GetDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*>::
             Call;
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
  local_res10[0] = param_1;
  ForEachObjectWithOuterBreakable
            ((UObjectBase *)this,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,false,RF_NoFlags
             ,Borrowed);
  return;
}

// GetDetailedInfo @ 1420fa580

FString * __thiscall UObject::GetDetailedInfo(UObject *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar2 = IsThisNotNull(this,"UObject::GetDetailedInfo");
  if (bVar2) {
    pFVar3 = (FString *)(**(code **)(*(longlong *)this + 0x48))(this,local_18);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FString::operator=(__return_storage_ptr__,L"None");
  }
  return __return_storage_ptr__;
}

// GetGlobalUserConfigFilename @ 1420fa910

FString * __thiscall
UObject::GetGlobalUserConfigFilename(UObject *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_18);
  FWindowsPlatformProcess::UserSettingsDir();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%sUnreal Engine/Engine/Config/User%s.ini");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1420faad0

void __thiscall
UObject::GetLifetimeReplicatedProps
          (UObject *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetPreloadDependencies @ 1420fc720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObject::GetPreloadDependencies
          (UObject *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  UObjectBaseUtility *this_00;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FFieldClass *pFVar11;
  TTuple<FProperty_const_*,void_const_*> *pTVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  uint uVar14;
  undefined1 auStackY_7b8 [32];
  UStruct *local_768;
  FScriptContainerElement *local_760;
  FString local_758;
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  pUVar1 = *(UStruct **)&this->field_0x10;
  if ((pUVar1[1]._padding_ & 0x1000000000000000) == 0) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_768 = pUVar1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_768) &&
        ((FScriptContainerElement *)&local_768 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    *(UStruct **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_768;
    if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
      pFVar2 = pUVar1[1].Script.AllocatorInstance.Data;
      if ((pFVar2 != (FScriptContainerElement *)0x0) && (0 < pUVar1->PropertiesSize)) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_760 = pFVar2;
        if ((pFVar3 <= (FScriptContainerElement *)&local_760) &&
           (((FScriptContainerElement *)&local_760 < pFVar3 + (longlong)param_1->ArrayMax * 8 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(FScriptContainerElement **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             local_760;
      }
    }
    else {
      (**(code **)(pUVar1->_padding_ + 0x3f8))(pUVar1,param_1);
    }
  }
  pFVar11 = FStructProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_748,pFVar11,pUVar1,this,FullRecursion,IncludeDeprecated);
  do {
    if (local_748.PropertyIteratorStack.ArrayNum < 1) {
      FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar13 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar13,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pTVar12 = FPropertyValueIterator::operator->(&local_748);
    this_00 = *(UObjectBaseUtility **)(*(longlong *)pTVar12 + 0x70);
    if (this_00[4].field_0x14 == '\0') {
      UObjectBaseUtility::GetPathName(this_00,&local_758,(UObject *)0x0);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar4 = *(undefined8 **)&this_00[4].field_0x18;
    if (puVar4 != (undefined8 *)0x0) {
      pTVar12 = FPropertyValueIterator::operator->(&local_748);
      puVar5 = (uint *)*puVar4;
      uVar6 = *(undefined8 *)&pTVar12->field_0x8;
      if ((*(byte *)((longlong)puVar5 + 0x17) & 4) != 0) {
        if (((*puVar5 & 0x200) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = 0;
        for (uVar10 = *puVar5 & 0x1ff; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
          uVar14 = uVar14 + 1;
        }
        (**(code **)(puVar5 + (ulonglong)uVar14 * 2 + 6))(uVar6,param_1);
      }
    }
    FPropertyValueIterator::IterateToNext(&local_748);
  } while( true );
}

// GetPrimaryAssetId @ 1420fca90

FPrimaryAssetId * __thiscall
UObject::GetPrimaryAssetId(UObject *this,FPrimaryAssetId *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreUObjectDelegates::GetPrimaryAssetIdForObject,&local_28);
  if ((FCoreUObjectDelegates::GetPrimaryAssetIdForObject._16_4_ != 0) &&
     (FCoreUObjectDelegates::GetPrimaryAssetIdForObject._8_8_ != 0)) {
    cVar1 = (**(code **)(*(longlong *)FCoreUObjectDelegates::GetPrimaryAssetIdForObject._8_8_ + 0x38
                        ))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      cVar1 = (**(code **)(*(longlong *)this + 0x1c0))();
      if ((cVar1 != '\0') ||
         (((*(uint *)&this->field_0x8 & 0x10) != 0 &&
          ((*(byte *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x80) == 0)))) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreUObjectDelegates::GetPrimaryAssetIdForObject,&local_28);
        plVar2 = (longlong *)0x0;
        if (FCoreUObjectDelegates::GetPrimaryAssetIdForObject._16_4_ != 0) {
          plVar2 = (longlong *)FCoreUObjectDelegates::GetPrimaryAssetIdForObject._8_8_;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,this);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        return __return_storage_ptr__;
      }
      goto LAB_1420fcb51;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1420fcb51:
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  return __return_storage_ptr__;
}

// GetProjectUserConfigFilename @ 1420fcf00

FString * __thiscall
UObject::GetProjectUserConfigFilename(UObject *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_18);
  FPaths::ProjectConfigDir(&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%sUser%s.ini");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetReplicatedCustomConditionState @ 1420fd030

void __thiscall
UObject::GetReplicatedCustomConditionState(UObject *this,FCustomPropertyConditionState *param_1)

{
  return;
}

// GetResourceSizeBytes @ 1420fd040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall UObject::GetResourceSizeBytes(UObject *this,Type param_1)

{
  ulong64 uVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [72];
  void *local_d0;
  undefined4 local_c8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_118,param_1);
  (**(code **)(*(longlong *)this + 400))(this,local_118);
  uVar1 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_118);
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_70);
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c0);
  local_c8 = 0;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_118 + 8));
  return uVar1;
}

// GetResourceSizeEx @ 1420fd120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObject::GetResourceSizeEx(UObject *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  Type TVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res18 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b8;
  FArchiveState local_a8;
  undefined8 local_18;
  ulong64 local_10;
  
  TVar3 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if (TVar3 == EstimatedTotal) {
    FArchiveState::FArchiveState(&local_a8);
    local_a8.ArIsFilterEditorOnly = '\x01';
    local_a8.ArIsCountingMemory = '\x01';
    local_a8._padding_ = (longlong)&___7FArchiveCountMem__6B_;
    local_18 = 0;
    local_10 = 0;
    if (this != (UObject *)0x0) {
      (**(code **)(*(longlong *)this + 200))(this,&local_a8);
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,local_10);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)this,&local_b8,false,RF_NoFlags,Borrowed);
    iVar2 = local_b8.ArrayNum;
    uVar4 = (ulonglong)local_b8.ArrayNum;
    pFVar1 = local_b8.AllocatorInstance.Data + uVar4 * 8;
    FVar5.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar5.Data == pFVar1) break;
      (**(code **)(**(longlong **)FVar5.Data + 400))(*(longlong **)FVar5.Data,param_1);
      uVar4 = local_b8._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_a8);
  }
  return;
}

// GetSparseClassDataStruct @ 1420fd700

UScriptStruct * __thiscall UObject::GetSparseClassDataStruct(UObject *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (UScriptStruct *)0x0;
  }
  return *(UScriptStruct **)(*(longlong *)&this->field_0x10 + 0x120);
}

// GetWorld @ 1420fdae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UObject::GetWorld(UObject *this)

{
  UWorld *pUVar1;
  
  if (*(longlong **)&this->field_0x20 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420fdaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x20 + 0x180))();
    return pUVar1;
  }
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc99) = 0;
  return (UWorld *)0x0;
}

// GetWorldChecked @ 1420fdb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UObject::GetWorldChecked(UObject *this,bool *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  UWorld *pUVar4;
  FString *pFVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  FName local_res18;
  FName local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  ulonglong *local_68;
  FString *local_60;
  FString local_58;
  
  local_res8[0] = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar9 = (char *)(lVar1 + 0xc99);
  *pcVar9 = '\x01';
  pUVar4 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
  if (*pcVar9 == '\0') {
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UObject::GetWorldChecked'::__l5::_dynamic_atexit_destructor_for__ReportedClassesLock__
            );
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      atexit(`UObject::GetWorldChecked'::__l5::_dynamic_atexit_destructor_for__ReportedClasses__);
      _Init_thread_footer(&::_TSS1);
    }
    local_res10 = *(ulonglong *)&this->field_0x10;
    AcquireSRWLockExclusive((PSRWLOCK)&ReportedClassesLock);
    uVar6 = ((uint)(local_res10 >> 0x14) & 0xffff ^ (uint)(local_res10 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (ReportedClasses.Elements._8_4_ != ReportedClasses.Elements._52_4_) {
      FVar7 = (ForElementType<FSetElementId>)0x154b8eee8;
      if (ReportedClasses.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar7 = ReportedClasses.Hash.SecondaryData;
      }
      for (iVar8 = *(int *)((longlong)FVar7 +
                           (ulonglong)(ReportedClasses.HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4)
          ; iVar8 != -1;
          iVar8 = *(int *)(ReportedClasses.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
        if (*(ulonglong *)(ReportedClasses.Elements._0_8_ + (longlong)iVar8 * 0x10) == local_res10)
        goto LAB_1420fdda4;
      }
    }
    lVar1 = *(longlong *)(local_res10 + 0x40);
    bVar10 = lVar1 == 0;
    if (bVar10) {
      pFVar5 = ::FString::FString(&local_58,L"");
    }
    else {
      local_res18 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res18,&local_78);
      pFVar5 = &local_78;
    }
    local_a8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_a8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar10) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((!bVar10) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    lVar2 = *(longlong *)(lVar1 + 0x40);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x40);
      local_res20 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res20,&local_88);
      ::FString::PrintfImpl(&local_98,L", %s");
      iVar8 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      lVar2 = *(longlong *)(lVar1 + 0x40);
    }
    local_68 = &local_res10;
    local_60 = &local_a8;
    `UObject::GetWorldChecked'::__l8::<lambda_1>::operator()(&local_68);
    TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_const_&>
              (&ReportedClasses,(UClass **)local_res8,(bool *)&local_res10);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
LAB_1420fdda4:
    ReleaseSRWLockExclusive((PSRWLOCK)&ReportedClassesLock);
  }
  bVar10 = (bool)*pcVar9;
  *param_1 = bVar10;
  if (((pUVar4 == (UWorld *)0x0) || (bVar10 == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("World && bSupported",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                          ,0x4a7,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pUVar4 = (UWorld *)(*pcVar3)();
    return pUVar4;
  }
  return pUVar4;
}

// InstanceSubobjectTemplates @ 1420ff060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::InstanceSubobjectTemplates(UObject *this,FObjectInstancingGraph *param_1)

{
  UStruct *this_00;
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UStruct *pUVar4;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [88];
  void *local_e0;
  undefined4 local_d8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_80;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = *(UStruct **)&this->field_0x10;
  if ((this_00[1]._padding_ & 0x80000000000000) != 0) {
    pUVar2 = GetArchetype(this);
    if (param_1 == (FObjectInstancingGraph *)0x0) {
      FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,this,None);
      pUVar4 = (UStruct *)0x0;
      if (pUVar2 != (UObject *)0x0) {
        pUVar4 = *(UStruct **)&pUVar2->field_0x10;
      }
      UStruct::InstanceSubobjectTemplates
                (this_00,(TNotNull<void_*>)this,pUVar2,pUVar4,(TNotNull<UObject_*>)this,
                 (FObjectInstancingGraph *)local_138);
      local_38 = 0;
      if (local_40 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_40);
      }
      TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_80);
      local_88 = 0;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d0);
      local_d8 = 0;
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_138 + 0x18));
    }
    else {
      if (pUVar2 == (UObject *)0x0) {
        pUVar4 = (UStruct *)0x0;
      }
      else {
        pUVar4 = *(UStruct **)&pUVar2->field_0x10;
      }
      UStruct::InstanceSubobjectTemplates
                (this_00,(TNotNull<void_*>)this,pUVar2,pUVar4,(TNotNull<UObject_*>)this,param_1);
    }
  }
  bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
  if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
      ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
     ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
    FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
  }
  return;
}

// IsAsset @ 1420ff3f0

bool __thiscall UObject::IsAsset(UObject *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  
  if ((*(uint *)&this->field_0x8 & 0x50) != 0) {
    return false;
  }
  if ((*(uint *)&this->field_0x8 & 1) == 0) {
    return false;
  }
  if ((this == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) != 0) {
    return false;
  }
  if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) >> 4 & 1) != 0) {
    return false;
  }
  pUVar6 = *(UPackage **)&this->field_0x20;
  if (pUVar6 != (UPackage *)0x0) {
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_1420ff496;
  }
  pUVar6 = UObjectBase::GetExternalPackage((UObjectBase *)this);
  if (pUVar6 == (UPackage *)0x0) {
    return false;
  }
LAB_1420ff496:
  if (((pUVar6 != GObjTransientPkg) && (((uint)pUVar6->_padding_ >> 6 & 1) == 0)) &&
     (((uint)pUVar6->PackageFlagsPrivate >> 0x14 & 1) == 0)) {
    return true;
  }
  return false;
}

// IsFullNameStableForNetworking @ 1420ff870

bool __thiscall UObject::IsFullNameStableForNetworking(UObject *this)

{
  char cVar1;
  bool bVar2;
  
  if ((*(longlong **)&this->field_0x20 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)&this->field_0x20 + 0x208))(), cVar1 == '\0')) {
    return false;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar2) && (cVar1 = (**(code **)(*(longlong *)this + 0x200))(this), cVar1 == '\0')) {
    return false;
  }
  return true;
}

// IsLocalizedResource @ 1420ff900

bool __thiscall UObject::IsLocalizedResource(UObject *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UPackage *this_00;
  FString *pFVar4;
  bool bVar5;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  bVar5 = false;
  this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if (this_00 != (UPackage *)0x0) {
    pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
    local_28.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    local_28.Size = iVar3;
    bVar5 = true;
    bVar2 = FPackageName::IsLocalizedPackage(&local_28);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1420ff96d;
    }
  }
  bVar2 = false;
  if (!bVar5) {
    return false;
  }
LAB_1420ff96d:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsNameStableForNetworking @ 1420ff990

bool __thiscall UObject::IsNameStableForNetworking(UObject *this)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  
  if ((*(uint *)&this->field_0x8 & 0xc0010) == 0) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
      bVar1 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)this);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// IsSafeForRootSet @ 1420ffa80

bool __thiscall UObject::IsSafeForRootSet(UObject *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInBlueprint(this);
  if (bVar2) {
    return false;
  }
  if (this == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(~(byte)((uint)*(undefined4 *)&this->field_0x8 >> 0x1e) & 1);
}

// IsSelected @ 1420ffb00

bool __thiscall UObject::IsSelected(UObject *this)

{
  return false;
}

// IsSupportedForNetworking @ 1420ffb10

bool __thiscall UObject::IsSupportedForNetworking(UObject *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420ffb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x208))();
  return (bool)uVar1;
}

// LoadConfig @ 1420ffb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::LoadConfig(UObject *this,UClass *param_1,wchar_t *param_2,uint param_3,FProperty *param_4,
                   TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                   *param_5)

{
  EArrayPropertyFlags EVar1;
  UStruct *pUVar2;
  FConfigFile *pFVar3;
  longlong *plVar4;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FFeedbackContext *pFVar10;
  FScriptSetHelper *pFVar11;
  FField *pFVar12;
  bool bVar13;
  bool bVar14;
  EInternalObjectFlags EVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_LoadConfig> FVar20;
  UClass *pUVar21;
  UObject *pUVar22;
  FUObjectItem *pFVar23;
  FString *pFVar24;
  wchar_t *pwVar25;
  UPackage *pUVar26;
  TObjectPtr<UClass>_u_0 this_00;
  FConfigSection *pFVar27;
  FScriptArrayHelper_u_8 FVar28;
  FConfigValue *this_01;
  FProperty *pFVar29;
  void *_Dst;
  FScriptContainerElement *pFVar30;
  ForAnyElementType FVar31;
  UObject *pUVar32;
  ulonglong uVar33;
  uint uVar34;
  TObjectPtr<UClass>_u_0 this_02;
  ForElementType<unsigned_int> FVar35;
  wchar_t *pwVar36;
  UObject *pUVar37;
  ulonglong uVar38;
  FName FVar39;
  ForAnyElementType FVar40;
  char cVar41;
  FName this_03;
  longlong lVar42;
  FProperty *pFVar43;
  undefined1 auStackY_7c8 [32];
  char local_767;
  undefined1 local_766;
  char local_765;
  FProperty *local_760;
  FString local_758;
  UObject *local_748;
  FConfigSection *local_740;
  FString local_738;
  FName local_728;
  byte local_720;
  int local_718;
  uint local_714;
  FProperty *local_710;
  FProperty *local_708;
  FScriptContainerElement *local_700;
  undefined8 local_6f8;
  TObjectPtr<UClass>_u_0 local_6f0;
  FName local_6e8;
  TArray<FConfigValue,TSizedDefaultAllocator<32>_> local_6e0;
  FColor_u_0 local_6d0 [2];
  TArray<FConfigValue,TSizedDefaultAllocator<32>_> local_6c8;
  FString local_6b8;
  FString local_6a8;
  FScriptArrayHelper local_698;
  FScriptContainerElement *local_678;
  TScriptContainerIterator<FScriptSetHelper> local_668;
  TObjectIterator<UClass> local_658;
  TObjectIterator<UClass> local_640;
  FString local_628;
  FString local_618;
  FConfigFile *local_608;
  FString *local_600;
  TFieldIterator<FProperty> local_5f8;
  TObjectPtr<UClass>_u_0 local_5e0;
  FField *local_5d8;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined1 local_5ca;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FName local_598;
  wchar_t *local_590;
  FName local_588;
  undefined8 local_580;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FConfigFile **local_538;
  char *local_530;
  FString local_528;
  FString local_518;
  FConfigFile **local_508;
  char *local_500;
  FString local_4f8;
  FString local_4e8;
  FName local_4d8;
  FString *local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  TObjectIteratorBase<1> local_3b0;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FName local_338;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  TObjectIteratorBase<1> local_2f0;
  FScriptSetHelper local_2c8;
  FScriptSetHelper local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  FConfigFile local_158;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  local_6d0[0].Bits = 0;
  local_760 = param_4;
  FVar20 = StatPtr_STAT_LoadConfig;
  local_748 = this;
  local_714 = param_3;
  local_6f0.DebugPtr = param_1;
  local_590 = param_2;
  if (StatPtr_STAT_LoadConfig == (FThreadSafeStaticStat<FStat_STAT_LoadConfig>)0x0) {
    pFVar19 = ::FName::FName(&local_338,"STAT_LoadConfig");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_LoadConfig>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LoadConfig,*pFVar19,L"LoadConfig"
                        ,"STATGROUP_Object","STATCAT_Advanced",L"Object",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  local_728.ComparisonIndex.Value = 0;
  local_728.Number = 0;
  local_720 = 0;
  FVar39 = *(FName *)FVar20;
  if ((FVar39.ComparisonIndex.Value.Value != 0) || (FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6d0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6d0[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      local_720 = local_720 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_598.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_598.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_598,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                   ,0xb32);
        local_720 = local_720 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_728 = FVar39;
      local_6e8 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      local_720 = local_720 | 4;
    }
  }
  if (param_1 == (UClass *)0x0) {
    param_1 = *(UClass **)&this->field_0x10;
    ((TObjectPtr<UClass>_u_0 *)
    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcd8))->
    DebugPtr = param_1;
    local_6f0.DebugPtr = param_1;
  }
  if ((param_1->ClassFlags >> 2 & 1) == 0) goto LAB_142101411;
  bVar14 = UStruct::DebugIsPropertyChainReady((UStruct *)param_1);
  if (!bVar14) {
    local_4d8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_4d8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_4d8,&local_4a0);
    ::FString::PrintfImpl
              (&local_628,
               L"Attempting to load config data for %s before the Class has been constructed/registered/linked (likely during module loading or early startup). This will result in the load silently failing and should be fixed."
              );
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
    }
    if (GPrematureConfigLoadErrorLevel == 0) {
      if (3 < (byte)LogObj._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
    }
    else if (GPrematureConfigLoadErrorLevel == 1) {
      if (2 < (byte)LogObj._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
    }
    else if (GPrematureConfigLoadErrorLevel == 2) {
      bVar14 = UStruct::DebugIsPropertyChainReady((UStruct *)param_1);
      if (!bVar14) {
        local_4d0 = &local_628;
        `UObject::LoadConfig'::__l58::<lambda_1>::operator()(&local_4d0);
      }
    }
    else {
      bVar14 = UStruct::DebugIsPropertyChainReady((UStruct *)param_1);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ConfigClass->DebugIsPropertyChainReady()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                              ,0xb58,L"%s"), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  if (param_5 !=
      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_> *)0x0)
  goto LAB_142101411;
  if (param_1->_padding_ == 0) {
    pUVar2 = (UStruct *)param_1->_padding_;
    if (pUVar2 != (UStruct *)0x0) {
      local_5d8 = (FField *)param_1->_padding_;
      local_5d0 = 0xffffffff;
      local_5cc = 0x101;
      local_5ca = 0;
      local_5e0.DebugPtr = param_1;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_5e0.ObjectPtr);
      local_5f8.Field = pUVar2->ChildProperties;
      local_5f8.InterfaceIndex = -1;
      local_5f8.bIncludeSuper = true;
      local_5f8.bIncludeDeprecated = true;
      local_5f8.bIncludeInterface = false;
      local_5f8.Struct = pUVar2;
      TFieldIterator<FProperty>::IterateToNext(&local_5f8);
      bVar14 = local_5d8 == (FField *)0x0;
      if (bVar14 == (local_5f8.Field == (FField *)0x0)) {
        do {
          pFVar12 = local_5f8.Field;
          if (bVar14) goto LAB_1420fffcd;
          if (local_5d8 != local_5f8.Field) break;
          local_5d8 = local_5d8->Next;
          TFieldIterator<FProperty>::IterateToNext
                    ((TFieldIterator<FProperty> *)&local_5e0.ObjectPtr);
          local_5f8.Field = pFVar12->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_5f8);
          bVar14 = local_5d8 == (FField *)0x0;
        } while (bVar14 == (local_5f8.Field == (FField *)0x0));
      }
    }
    if (((int)param_1->_padding_ != 0) && (GIsRequestingExit == false)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_358,(UObject *)0x0);
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConfigClass->PropertyLink != nullptr || (ConfigClass->GetSuperStruct() && HaveSameProperties(ConfigClass, ConfigClass->GetSuperStruct())) || (0 ? !ConfigClass->HasAnyClassFlags(CLASS_Constructed) : ConfigClass->PropertiesSize == 0) || IsEngineExitRequested()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                          ,0xb87,L"class %s has uninitialized properties. Accessed too early?");
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
LAB_1420fffcd:
  uVar17 = local_714;
  pUVar21 = (UClass *)param_1->_padding_;
  if (pUVar21 == (UClass *)0x0) {
LAB_14210059a:
    pwVar36 = local_590;
    bVar14 = local_590 == (wchar_t *)0x0;
    if (bVar14) {
      UClass::GetConfigName(*(UClass **)&((UObjectBaseUtility *)this)->field_0x10,&local_3f0);
      pFVar24 = &local_3f0;
    }
    else {
      pFVar24 = ::FString::FString(&local_330,local_590);
    }
    FVar31.Data = (pFVar24->Data).AllocatorInstance.Data;
    (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e8.Data.ArrayNum = (pFVar24->Data).ArrayNum;
    local_4e8.Data.ArrayMax = (pFVar24->Data).ArrayMax;
    (pFVar24->Data).ArrayNum = 0;
    (pFVar24->Data).ArrayMax = 0;
    local_4e8.Data.AllocatorInstance.Data = FVar31.Data;
    if ((bVar14) && (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    if ((!bVar14) && (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    bVar14 = false;
    if (((*(uint *)(*(longlong *)&((UObjectBaseUtility *)this)->field_0x10 + 0xd4) >> 10 & 1) == 0)
       || (bVar9 = true, (*(uint *)&((UObjectBaseUtility *)this)->field_0x8 >> 4 & 1) != 0)) {
      bVar9 = false;
    }
    local_767 = '\0';
    local_608 = (FConfigFile *)0x0;
    FConfigFile::FConfigFile(&local_158);
    pwVar25 = (wchar_t *)(**(code **)(*(longlong *)this + 0x248))(this);
    if ((pwVar36 == (wchar_t *)0x0) && (pwVar25 != (wchar_t *)0x0)) {
      local_278._padding_ = 0;
      bVar14 = true;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,"Windows",7,Yes);
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar25,local_278.Ptr);
      if (iVar16 == 0) goto LAB_1421006d4;
      bVar13 = true;
LAB_1421006dd:
      bVar8 = bVar13;
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    else {
LAB_1421006d4:
      bVar8 = false;
      bVar13 = false;
      if (bVar14) goto LAB_1421006dd;
    }
    if (bVar8) {
      pFVar24 = ::FName::ToString((FName *)(*(longlong *)&((UObjectBaseUtility *)this)->field_0x10 +
                                           0xe8),&local_320);
      if ((pFVar24->Data).ArrayNum == 0) {
        pwVar36 = L"";
      }
      else {
        pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
      local_608 = FConfigCacheIni::FindOrLoadPlatformConfig(&local_158,pwVar36,pwVar25);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      local_767 = '\x01';
    }
    local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_758.Data.ArrayNum = 0;
    local_758.Data.ArrayMax = 0;
    local_678 = (FScriptContainerElement *)0x0;
    local_718 = 0;
    if (bVar9) {
      local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6b8.Data.ArrayNum = 0;
      local_6b8.Data.ArrayMax = 0;
      pUVar26 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      if (pUVar26 == GObjTransientPkg) {
        local_4a8.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)this)->field_0x18;
        local_4a8.Number = *(uint *)&((UObjectBaseUtility *)this)->field_0x1c;
        ::FName::ToString(&local_4a8,&local_5a8);
        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
        }
        local_6b8.Data.AllocatorInstance.Data = local_5a8.Data.AllocatorInstance.Data;
        local_6b8.Data.ArrayNum = local_5a8.Data.ArrayNum;
        local_6b8.Data.ArrayMax = local_5a8.Data.ArrayMax;
        local_5a8.Data.ArrayNum = 0;
        local_5a8.Data.ArrayMax = 0;
        local_5a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(UObject *)pUVar26,&local_6b8);
      }
      local_4c8 = *(FName *)(*(longlong *)&((UObjectBaseUtility *)this)->field_0x10 + 0x18);
      ::FName::ToString(&local_4c8,&local_3d0);
      ::FString::ConcatFC(&local_3e0,&local_6b8,L" ");
      ::FString::ConcatFF(&local_5c8,&local_3e0,&local_3d0);
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      local_758.Data.AllocatorInstance.Data = local_5c8.Data.AllocatorInstance.Data;
      local_758.Data.ArrayNum = local_5c8.Data.ArrayNum;
      local_758.Data.ArrayMax = local_5c8.Data.ArrayMax;
      local_5c8.Data.ArrayNum = 0;
      local_5c8.Data.ArrayMax = 0;
      local_5c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      local_700 = (FScriptContainerElement *)0x0;
      local_6f8 = 0;
      (**(code **)(*(longlong *)this + 600))(this,&local_700);
      if (((int)local_6f8 == 0) || ((int)local_6f8 == 1)) {
LAB_14210092a:
        pFVar24 = UObjectBaseUtility::GetPathName
                            (*(UObjectBaseUtility **)&((UObjectBaseUtility *)this)->field_0x10,
                             &local_310,(UObject *)0x0);
        ::FString::ConcatFC(&local_3c0,&local_6b8,L" ");
        ::FString::ConcatFF(&local_568,&local_3c0,pFVar24);
        local_678 = local_568.Data.AllocatorInstance.Data;
        local_718 = local_568.Data.ArrayNum;
        local_568.Data.ArrayNum = 0;
        local_568.Data.ArrayMax = 0;
        local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((int)local_6f8 == local_758.Data.ArrayNum) {
          if ((int)local_6f8 < 2) goto LAB_14210092a;
          iVar16 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_700,(wchar_t *)local_758.Data.AllocatorInstance.Data)
          ;
          bVar14 = iVar16 == 0;
        }
        else {
          bVar14 = local_758.Data.ArrayNum + (int)local_6f8 == 1;
        }
        if (bVar14) goto LAB_14210092a;
        iVar16 = (int)local_6f8;
        if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_758.Data.AllocatorInstance.Data);
          iVar16 = (int)local_6f8;
        }
        local_758.Data.AllocatorInstance.Data = local_700;
        uVar38 = (ulonglong)local_6f8 >> 0x20;
        local_6f8 = 0;
        local_700 = (FScriptContainerElement *)0x0;
        local_758.Data.ArrayMax = (int)uVar38;
        local_758.Data.ArrayNum = iVar16;
      }
      if (local_700 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700);
      }
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
    }
    if (local_760 == (FProperty *)0x0) {
      if (6 < (byte)LogConfig._0_1_) {
        local_4c0.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)this)->field_0x18;
        local_4c0.Number = *(uint *)&((UObjectBaseUtility *)this)->field_0x1c;
        ::FName::ToString(&local_4c0,&local_480);
        local_4b8 = (FName)(local_6f0.DebugPtr)->_padding_;
        ::FName::ToString(&local_4b8,&local_490);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        local_548.Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
          local_548.Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
        }
LAB_142100bc0:
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (6 < (byte)LogConfig._0_1_) {
      bVar14 = IsThisNotNull(local_760,"FField::GetName");
      if (bVar14) {
        ::FName::ToString((FName *)&local_760->_padding_,&local_548);
      }
      else {
        ::FString::FString(&local_548,L"None");
      }
      local_4b0.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)this)->field_0x18;
      local_4b0.Number = *(uint *)&((UObjectBaseUtility *)this)->field_0x1c;
      ::FName::ToString(&local_4b0,&local_460);
      local_450 = (FName)(local_6f0.DebugPtr)->_padding_;
      ::FName::ToString(&local_450,&local_470);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      goto LAB_142100bc0;
    }
    local_508 = &local_608;
    local_500 = &local_767;
    local_538 = &local_608;
    local_530 = &local_767;
    pFVar43 = (FProperty *)(local_6f0.DebugPtr)->_padding_;
    this_02 = local_6f0;
    local_710 = pFVar43;
    if (pFVar43 != (FProperty *)0x0) {
      do {
        if (((pFVar43->PropertyFlags >> 0xe & 1) != 0) &&
           ((local_760 == (FProperty *)0x0 || (local_760 == pFVar43)))) {
          uVar38 = pFVar43->PropertyFlags >> 0x12;
          local_710 = pFVar43;
          this_00.DebugPtr = FField::GetOwnerClass((FField *)pFVar43);
          if ((uVar38 & 1) != 0) {
            this_02.DebugPtr = this_00.DebugPtr;
          }
          if (!bVar9) {
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this_02.DebugPtr,&local_388,(UObject *)0x0);
            if (&local_758 != pFVar24) {
              if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_758.Data.AllocatorInstance.Data);
              }
              local_758.Data.AllocatorInstance.Data = (pFVar24->Data).AllocatorInstance.Data;
              (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_758.Data.ArrayNum = (pFVar24->Data).ArrayNum;
              local_758.Data.ArrayMax = (pFVar24->Data).ArrayMax;
              (pFVar24->Data).ArrayNum = 0;
              (pFVar24->Data).ArrayMax = 0;
            }
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_02.DebugPtr);
            (**(code **)(*(longlong *)this + 0x250))(this,&local_758);
          }
          pFVar24 = &local_4e8;
          local_558.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_558.Data.ArrayNum = 0;
          local_558.Data.ArrayMax = 0;
          if (((uVar38 & 1) != 0) && (local_590 == (wchar_t *)0x0)) {
            local_600 = pFVar24;
            pFVar24 = UClass::GetConfigName(this_00.DebugPtr,&local_378);
            iVar18 = (pFVar24->Data).ArrayNum;
            iVar16 = iVar18 + -1;
            if (iVar18 == 0) {
              iVar16 = 0;
            }
            ::FString::AssignRange
                      (&local_558,(wchar_t *)(pFVar24->Data).AllocatorInstance.Data,iVar16);
            if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Data.AllocatorInstance.Data);
            }
            pFVar24 = &local_558;
          }
          local_600 = pFVar24;
          bVar14 = IsThisNotNull(pFVar43,"FField::GetName");
          if (bVar14) {
            ::FName::ToString((FName *)&pFVar43->_padding_,&local_738);
          }
          else {
            ::FString::FString(&local_738,L"None");
          }
          if (6 < (byte)LogConfig._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          }
          uVar38 = *(ulonglong *)(pFVar43->_padding_ + 0x18);
          pFVar29 = (FProperty *)0x0;
          if ((uVar38 >> 0x15 & 1) != 0) {
            pFVar29 = pFVar43;
          }
          pFVar43 = (FProperty *)0x0;
          if ((uVar38 >> 0x2f & 1) != 0) {
            pFVar43 = local_710;
          }
          local_708 = pFVar29;
          if ((pFVar29 == (FProperty *)0x0) && (pFVar43 == (FProperty *)0x0)) goto LAB_142101a3e;
          if ((pFVar24->Data).ArrayNum == 0) {
            pwVar36 = L"";
          }
          else {
            pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
          }
          FVar31.Data = (FScriptContainerElement *)L"";
          if (local_758.Data.ArrayNum != 0) {
            FVar31.Data = local_758.Data.AllocatorInstance.Data;
          }
          if (*local_530 == '\0') {
            ::FString::FString(&local_420,pwVar36);
            pFVar27 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar31.Data,false,&local_420);
            FVar31.Data = local_420.Data.AllocatorInstance.Data;
            local_740 = pFVar27;
          }
          else {
            pFVar3 = *local_538;
            ::FString::FString(&local_430,(wchar_t *)FVar31.Data);
            AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
            pFVar27 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                      ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                              *)pFVar3,&local_430);
            local_740 = pFVar27;
            ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
            FVar31.Data = local_430.Data.AllocatorInstance.Data;
          }
          if (FVar31.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar31.Data);
          }
          if ((((pFVar27 == (FConfigSection *)0x0) && (bVar9)) && (local_718 != 0)) &&
             (local_718 != 1)) {
            if ((pFVar24->Data).ArrayNum == 0) {
              pwVar36 = L"";
            }
            else {
              pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
            }
            pFVar27 = `UObject::LoadConfig'::__l2::<lambda_4>::operator()
                                (&local_538,(wchar_t *)local_678,pwVar36);
            local_740 = pFVar27;
          }
          if (pFVar29 == (FProperty *)0x0) {
            if (pFVar43 != (FProperty *)0x0) {
              if ((pFVar43->ArrayDim < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar22 = local_748;
              local_2c8.ElementProp = (FProperty *)pFVar43[1]._padding_;
              local_2c8.Set =
                   (TScriptSparseSet<FDefaultSetAllocator> *)
                   ((longlong)&local_748->field_0x0 + (longlong)pFVar43->Offset_Internal);
              local_2c8.SetLayout.SparseArrayLayout.Size = (int)pFVar43[1]._padding_;
              local_2c8.SetLayout._0_8_ = pFVar43[1]._padding_;
              local_2c8.SetLayout._8_8_ = pFVar43[1]._padding_;
              if (((FProperty *)pFVar43[1]._padding_ == (FProperty *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ElementProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1653,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (pFVar27 != (FConfigSection *)0x0) {
                local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FVar31.Data = (FScriptContainerElement *)L"";
                if (local_738.Data.ArrayNum != 0) {
                  FVar31.Data = local_738.Data.AllocatorInstance.Data;
                }
                local_6e0.ArrayNum = 0;
                local_6e0.ArrayMax = 0;
                ::FName::FName(&local_448,(wchar_t *)FVar31.Data,FNAME_Find);
                TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::MultiFind<TSizedDefaultAllocator<32>_>
                          ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                            *)pFVar27,local_448,&local_6e0,false);
                bVar14 = false;
                iVar16 = local_6e0.ArrayNum;
                cVar41 = '\0';
                if (local_6e0.ArrayNum == 1) {
                  FConfigValue::GetValue
                            ((FConfigValue *)local_6e0.AllocatorInstance.Data,&local_578);
                  if (((local_578.Data.ArrayNum != 0) && (1 < local_578.Data.ArrayNum + -1)) &&
                     (pwVar36 = ::FString::operator[](&local_578,0), *pwVar36 == L'(')) {
                    if (local_578.Data.ArrayNum == 0) {
                      iVar16 = 0;
                    }
                    else {
                      iVar16 = local_578.Data.ArrayNum + -1;
                    }
                    pwVar36 = ::FString::operator[](&local_578,iVar16 + -1);
                    bVar14 = false;
                    if (*pwVar36 == L')') {
                      bVar14 = true;
                    }
                  }
                  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_578.Data.AllocatorInstance.Data);
                  }
                  iVar16 = local_6e0.ArrayNum;
                  iVar18 = local_6e0.ArrayNum;
                  if (!bVar14) goto LAB_142101608;
                }
                else {
LAB_142101608:
                  iVar18 = 0;
                  if (iVar16 != 0) {
                    local_765 = '\x01';
                    iVar18 = ((local_2c8.Set)->Elements).Data.ArrayNum -
                             ((local_2c8.Set)->Elements).NumFreeIndices;
                    if (iVar18 != 0) {
                      FScriptSetHelper::DestructItems(&local_2c8,0,iVar18);
                    }
                    TScriptSparseSet<FDefaultSetAllocator>::Empty
                              (local_2c8.Set,iVar16,&local_2c8.SetLayout);
                    uVar17 = (**(code **)(pFVar43->_padding_ + 0x168))(pFVar43);
                    pFVar29 = FMemory::Malloc((longlong)(pFVar43->ArrayDim * pFVar43->ElementSize),
                                              uVar17);
                    local_708 = pFVar29;
                    if (((uint)(int)pFVar43->PropertyFlags >> 9 & 1) == 0) {
                      (**(code **)(pFVar43->_padding_ + 0x150))(pFVar43,pFVar29);
                    }
                    else {
                      memset(pFVar29,0,(longlong)pFVar43->ArrayDim * (longlong)pFVar43->ElementSize)
                      ;
                    }
                    uVar17 = (**(code **)(*(longlong *)pFVar43[1]._padding_ + 0x168))();
                    _Dst = FMemory::Malloc((longlong)
                                           (*(int *)(pFVar43[1]._padding_ + 0x34) *
                                           *(int *)(pFVar43[1]._padding_ + 0x30)),uVar17);
                    plVar4 = (longlong *)pFVar43[1]._padding_;
                    if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
                      (**(code **)(*plVar4 + 0x150))(plVar4,_Dst);
                    }
                    else {
                      memset(_Dst,0,(longlong)*(int *)((longlong)plVar4 + 0x34) *
                                    (longlong)(int)plVar4[6]);
                    }
                    uVar33 = (ulonglong)local_6e0.ArrayNum;
                    local_740 = (FConfigSection *)CONCAT44(local_740._4_4_,local_6e0.ArrayNum);
                    FVar39 = (FName)((longlong)local_6e0.AllocatorInstance.Data + uVar33 * 0x18);
                    uVar38 = uVar33;
                    this_03 = (FName)local_6e0.AllocatorInstance;
                    local_6e8 = FVar39;
                    while( true ) {
                      if ((int)uVar33 != (int)uVar38) {
                        local_766 = 0;
                        `TCheckedPointerIterator<FConfigValue,int,0>::operator!='::__l2::<lambda_1>
                        ::operator()(&local_766);
                      }
                      if (this_03 == FVar39) break;
                      FConfigValue::GetValue((FConfigValue *)this_03,&local_618);
                      FVar31.Data = (FScriptContainerElement *)L"";
                      if (local_618.Data.ArrayNum != 0) {
                        FVar31.Data = local_618.Data.AllocatorInstance.Data;
                      }
                      pFVar30 = (FScriptContainerElement *)
                                FProperty::ImportText_Direct
                                          (pFVar43,FVar31.Data,pFVar29,pUVar22,0x20,
                                           (FOutputDevice *)GWarn);
                      if (pFVar30 == (FScriptContainerElement *)0x0) {
LAB_142101952:
                        FVar31.Data = (FScriptContainerElement *)L"";
                        if (local_618.Data.ArrayNum != 0) {
                          FVar31.Data = local_618.Data.AllocatorInstance.Data;
                        }
                        pFVar30 = (FScriptContainerElement *)
                                  FProperty::ImportText_Direct
                                            ((FProperty *)pFVar43[1]._padding_,FVar31.Data,_Dst,
                                             pUVar22,0x20,(FOutputDevice *)GWarn);
                        if (pFVar30 != (FScriptContainerElement *)0x0) {
                          FVar31.Data = (FScriptContainerElement *)L"";
                          if (local_618.Data.ArrayNum != 0) {
                            FVar31.Data = local_618.Data.AllocatorInstance.Data;
                          }
                          if (pFVar30 != FVar31.Data) {
                            FScriptSetHelper::AddElement(&local_2c8,_Dst);
                          }
                        }
                      }
                      else {
                        FVar31.Data = (FScriptContainerElement *)L"";
                        if (local_618.Data.ArrayNum != 0) {
                          FVar31.Data = local_618.Data.AllocatorInstance.Data;
                        }
                        if (pFVar30 == FVar31.Data) goto LAB_142101952;
                        local_2a0.ElementProp = (FProperty *)pFVar43[1]._padding_;
                        local_2a0.SetLayout.SparseArrayLayout.Size = (int)pFVar43[1]._padding_;
                        local_2a0.SetLayout._0_8_ = pFVar43[1]._padding_;
                        local_2a0.SetLayout._8_8_ = pFVar43[1]._padding_;
                        local_2a0.Set = (TScriptSparseSet<FDefaultSetAllocator> *)pFVar29;
                        if ((local_2a0.ElementProp == (FProperty *)0x0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ElementProp",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                                ,0x1653,L""), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        local_668.Container = &local_2a0;
                        local_668.InternalIndex = -1;
                        local_668.LogicalIndex = -1;
                        while( true ) {
                          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_668);
                          pFVar11 = local_668.Container;
                          uVar17 = local_668.InternalIndex;
                          pTVar5 = (local_668.Container)->Set;
                          pFVar29 = local_708;
                          FVar39 = local_6e8;
                          pUVar22 = local_748;
                          if ((local_668.InternalIndex < 0) ||
                             ((pTVar5->Elements).AllocationFlags.NumBits <= local_668.InternalIndex)
                             ) break;
                          if (((pTVar5->Elements).AllocationFlags.NumBits <= local_668.InternalIndex
                              ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("IsValidIndex(Index)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x8c4,L""), bVar14)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          FVar6 = (pTVar5->Elements).AllocationFlags.AllocatorInstance.SecondaryData
                          ;
                          FVar35 = (ForElementType<unsigned_int>)&(pTVar5->Elements).AllocationFlags
                          ;
                          if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                            FVar35 = FVar6;
                          }
                          uVar34 = uVar17;
                          if ((int)uVar17 < 0) {
                            uVar34 = uVar17 + 0x1f;
                          }
                          pFVar29 = local_708;
                          FVar39 = local_6e8;
                          pUVar22 = local_748;
                          if ((*(uint *)((longlong)FVar35 + (longlong)((int)uVar34 >> 5) * 4) >>
                               (uVar17 & 0x1f) & 1) == 0) break;
                          iVar16 = local_668.InternalIndex;
                          pTVar5 = pFVar11->Set;
                          if (((int)uVar17 < 0) ||
                             ((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar17)) {
LAB_1421018fc:
                            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Iterator",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                                ,0x16bb,
                                                L"Invalid Iterator. Test Iterator before calling this method."
                                               );
                            if (bVar14) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                          }
                          else {
                            if (((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar17) &&
                               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValidIndex(Index)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x8c4,L""), bVar14)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            FVar6 = (pTVar5->Elements).AllocationFlags.AllocatorInstance.
                                    SecondaryData;
                            FVar35 = (ForElementType<unsigned_int>)
                                     &(pTVar5->Elements).AllocationFlags;
                            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                              FVar35 = FVar6;
                            }
                            uVar34 = uVar17 & 0x1f;
                            if ((int)uVar17 < 0) {
                              uVar17 = uVar17 + 0x1f;
                            }
                            if ((*(uint *)((longlong)FVar35 + (longlong)((int)uVar17 >> 5) * 4) >>
                                 uVar34 & 1) == 0) goto LAB_1421018fc;
                          }
                          FScriptSetHelper::AddElement
                                    (&local_2c8,
                                     (void *)((longlong)
                                              (local_2a0.SetLayout.SparseArrayLayout.Size * iVar16)
                                             + *(longlong *)&(local_2a0.Set)->Elements));
                        }
                      }
                      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_618.Data.AllocatorInstance.Data);
                      }
                      uVar33 = local_6e0._8_8_ & 0xffffffff;
                      this_03 = (FName)((longlong)this_03 + 0x18);
                      uVar38 = (ulonglong)local_740 & 0xffffffff;
                    }
                    FProperty::DestroyAndFreeValue(pFVar43,pFVar29);
                    FProperty::DestroyAndFreeValue((FProperty *)pFVar43[1]._padding_,_Dst);
                    FScriptSetHelper::Rehash(&local_2c8);
                    pFVar24 = local_600;
                    cVar41 = local_765;
                    iVar18 = local_6e0.ArrayNum;
                  }
                }
                DestructItems<FConfigValue,int>
                          ((FConfigValue *)local_6e0.AllocatorInstance.Data,iVar18);
                if ((FName)local_6e0.AllocatorInstance.Data != (FName)0x0) {
                  FMemory::Free(local_6e0.AllocatorInstance.Data);
                }
                pFVar43 = local_710;
                if (cVar41 != '\0') goto LAB_14210136e;
              }
            }
LAB_142101a3e:
            pFVar43 = local_710;
            iVar18 = 0;
            iVar16 = local_710->ArrayDim;
            if (0 < iVar16) {
              do {
                if (iVar16 != 1) {
                  bVar14 = IsThisNotNull(pFVar43,"FField::GetName");
                  if (bVar14) {
                    ::FName::ToString((FName *)&pFVar43->_padding_,&local_518);
                  }
                  else {
                    ::FString::FString(&local_518,L"None");
                  }
                  ::FString::PrintfImpl(&local_5b8,L"%s[%i]");
                  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_738.Data.AllocatorInstance.Data);
                  }
                  local_738.Data.AllocatorInstance.Data = local_5b8.Data.AllocatorInstance.Data;
                  local_738.Data.ArrayNum = local_5b8.Data.ArrayNum;
                  local_738.Data.ArrayMax = local_5b8.Data.ArrayMax;
                  local_5b8.Data.ArrayNum = 0;
                  local_5b8.Data.ArrayMax = 0;
                  local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_518.Data.AllocatorInstance.Data);
                  }
                }
                local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_6a8.Data.ArrayNum = 0;
                local_6a8.Data.ArrayMax = 0;
                if ((pFVar24->Data).ArrayNum == 0) {
                  pwVar36 = L"";
                }
                else {
                  pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                }
                FVar31.Data = (FScriptContainerElement *)L"";
                if (local_738.Data.ArrayNum != 0) {
                  FVar31.Data = local_738.Data.AllocatorInstance.Data;
                }
                FVar40.Data = (FScriptContainerElement *)L"";
                if (local_758.Data.ArrayNum != 0) {
                  FVar40.Data = local_758.Data.AllocatorInstance.Data;
                }
                if (*local_500 == '\0') {
                  ::FString::FString(&local_400,pwVar36);
                  bVar14 = FConfigCacheIni::GetString
                                     (GConfig,(wchar_t *)FVar40.Data,(wchar_t *)FVar31.Data,
                                      &local_6a8,&local_400);
                  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  pFVar3 = *local_508;
                  ::FString::FString(&local_410,(wchar_t *)FVar40.Data);
                  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
                  pFVar27 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                                    *)pFVar3,&local_410);
                  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
                  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_410.Data.AllocatorInstance.Data);
                  }
                  bVar14 = false;
                  if (pFVar27 != (FConfigSection *)0x0) {
                    bVar14 = FConfigSection::GetString(pFVar27,(wchar_t *)FVar31.Data,&local_6a8);
                  }
                }
                if (bVar14 == false) {
                  if (((bVar9) && (local_718 != 0)) && (local_718 != 1)) {
                    if ((pFVar24->Data).ArrayNum == 0) {
                      pwVar36 = L"";
                    }
                    else {
                      pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                    }
                    FVar31.Data = (FScriptContainerElement *)L"";
                    if (local_738.Data.ArrayNum != 0) {
                      FVar31.Data = local_738.Data.AllocatorInstance.Data;
                    }
                    bVar14 = `UObject::LoadConfig'::__l2::<lambda_3>::operator()
                                       (&local_508,(wchar_t *)local_678,(wchar_t *)FVar31.Data,
                                        pwVar36,&local_6a8);
                    if (bVar14) goto LAB_142101c72;
                  }
                }
                else {
LAB_142101c72:
                  pUVar22 = local_748;
                  pFVar10 = GWarn;
                  FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar43,local_748,iVar18);
                  FVar31.Data = (FScriptContainerElement *)L"";
                  if (local_6a8.Data.ArrayNum != 0) {
                    FVar31.Data = local_6a8.Data.AllocatorInstance.Data;
                  }
                  bVar14 = FProperty::ValidateImportFlags(pFVar43,0x20,(FOutputDevice *)pFVar10);
                  if ((((!bVar14) || (FVar31.Data == (FScriptContainerElement *)0x0)) ||
                      (lVar42 = (**(code **)(pFVar43->_padding_ + 0xe8))(pFVar43,FVar31.Data),
                      lVar42 == 0)) && (1 < (byte)LogObj._0_1_)) {
                    bVar14 = IsThisNotNull(pFVar43,"FField::GetName");
                    if (bVar14) {
                      ::FName::ToString((FName *)&pFVar43->_padding_,&local_4f8);
                    }
                    else {
                      ::FString::FString(&local_4f8,L"None");
                    }
                    UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar22,&local_348,(UObject *)0x0);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
                    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_348.Data.AllocatorInstance.Data);
                    }
                    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
                    }
                  }
                }
                if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
                }
                iVar16 = pFVar43->ArrayDim;
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar16);
            }
          }
          else {
            FVar28.HeapArray = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar29,local_748,0)
            ;
            EVar1 = (EArrayPropertyFlags)pFVar29[1]._padding_;
            local_698.ElementAlignment =
                 (**(code **)(*(longlong *)pFVar29[1]._padding_ + 0x168))
                           ((longlong *)pFVar29[1]._padding_);
            local_698.InnerProperty = (FProperty *)pFVar29[1]._padding_;
            local_698.ElementSize = (local_698.InnerProperty)->ElementSize;
            local_698.field1_0x8.HeapArray = FVar28.HeapArray;
            local_698.ArrayFlags = EVar1;
            if ((local_698.ElementSize < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ElementSize > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1177,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((local_698.InnerProperty == (FProperty *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InnerProperty",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1178,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar43 = local_710;
            if (pFVar27 != (FConfigSection *)0x0) {
              iVar16 = 0;
              local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar31.Data = (FScriptContainerElement *)L"";
              if (local_738.Data.ArrayNum != 0) {
                FVar31.Data = local_738.Data.AllocatorInstance.Data;
              }
              local_6c8.ArrayNum = 0;
              local_6c8.ArrayMax = 0;
              ::FName::FName(&local_588,(wchar_t *)FVar31.Data,FNAME_Find);
              TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::MultiFind<TSizedDefaultAllocator<32>_>
                        ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                          *)pFVar27,local_588,&local_6c8,false);
              FVar39 = local_588;
              if (local_6c8.ArrayNum == 0) {
                local_438 = local_588;
                uVar17 = ::GetTypeHash(local_588.ComparisonIndex.Value);
                iVar18 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                         FindIndexByHash<FName>
                                   (&pFVar27->EmptyInitializedKeys,FVar39.Number + uVar17,&local_438
                                   );
                if (iVar18 != -1) {
                  goto LAB_142101206;
                }
                local_580 = 0;
                do {
                  ::FString::PrintfImpl(&local_528,L"%s[%i]");
                  FVar31.Data = (FScriptContainerElement *)L"";
                  if (local_528.Data.ArrayNum != 0) {
                    FVar31.Data = local_528.Data.AllocatorInstance.Data;
                  }
                  ::FName::FName(&local_440,(wchar_t *)FVar31.Data,FNAME_Find);
                  if (local_440 == (FName)0x0) {
                    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_528.Data.AllocatorInstance.Data);
                    }
                    break;
                  }
                  this_01 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                    *)pFVar27,local_440);
                  if (this_01 != (FConfigValue *)0x0) {
                    if ((iVar16 < 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index>=0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x10be,L""), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if ((local_698.field1_0x8.FreezableArray)->ArrayNum <= iVar16) {
                      FScriptArrayHelper::AddValues
                                (&local_698,
                                 (iVar16 - (local_698.field1_0x8.FreezableArray)->ArrayNum) + 1);
                    }
                    pFVar10 = GWarn;
                    pFVar43 = (FProperty *)pFVar29[1]._padding_;
                    pFVar24 = FConfigValue::GetValue(this_01,&local_368);
                    if ((pFVar24->Data).ArrayNum == 0) {
                      pwVar36 = L"";
                    }
                    else {
                      pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                    }
                    bVar14 = FProperty::ValidateImportFlags(pFVar43,0x20,(FOutputDevice *)pFVar10);
                    if ((bVar14) &&
                       ((FScriptContainerElement *)pwVar36 != (FScriptContainerElement *)0x0)) {
                      (**(code **)(pFVar43->_padding_ + 0xe8))(pFVar43,pwVar36);
                    }
                    pFVar27 = local_740;
                    pFVar29 = local_708;
                    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_368.Data.AllocatorInstance.Data);
                      pFVar27 = local_740;
                      pFVar29 = local_708;
                    }
                  }
                  iVar16 = iVar16 + 1;
                  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_528.Data.AllocatorInstance.Data);
                  }
                } while ((this_01 != (FConfigValue *)0x0) ||
                        (iVar16 < (local_698.field1_0x8.FreezableArray)->ArrayNum));
              }
              else {
LAB_142101206:
                FScriptArrayHelper::EmptyAndAddValues(&local_698,local_6c8.ArrayNum);
                iVar16 = local_6c8.ArrayNum + -1;
                local_740 = (FConfigSection *)((ulonglong)local_740 & 0xffffffff00000000);
                if (-1 < iVar16) {
                  lVar42 = (longlong)iVar16 * 0x18;
                  do {
                    pFVar10 = GWarn;
                    pFVar43 = (FProperty *)pFVar29[1]._padding_;
                    if ((local_6c8.ArrayNum <= iVar16) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar24 = FConfigValue::GetValue
                                        ((FConfigValue *)(local_6c8.AllocatorInstance.Data + lVar42)
                                         ,&local_300);
                    if ((pFVar24->Data).ArrayNum == 0) {
                      pwVar36 = L"";
                    }
                    else {
                      pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                    }
                    bVar14 = FProperty::ValidateImportFlags(pFVar43,0x20,(FOutputDevice *)pFVar10);
                    if ((bVar14) &&
                       ((FScriptContainerElement *)pwVar36 != (FScriptContainerElement *)0x0)) {
                      (**(code **)(pFVar43->_padding_ + 0xe8))(pFVar43,pwVar36);
                    }
                    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_300.Data.AllocatorInstance.Data);
                    }
                    lVar42 = lVar42 + -0x18;
                    local_740 = (FConfigSection *)CONCAT44(local_740._4_4_,(int)local_740 + 1);
                    iVar16 = iVar16 + -1;
                    pFVar29 = local_708;
                  } while (-1 < iVar16);
                }
              }
              DestructItems<FConfigValue,int>
                        ((FConfigValue *)local_6c8.AllocatorInstance.Data,local_6c8.ArrayNum);
              pFVar43 = local_710;
              if ((FConfigValue *)local_6c8.AllocatorInstance.Data != (FConfigValue *)0x0) {
                FMemory::Free(local_6c8.AllocatorInstance.Data);
                pFVar43 = local_710;
              }
            }
          }
LAB_14210136e:
          if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_738.Data.AllocatorInstance.Data);
          }
          this_02 = local_6f0;
          this = local_748;
          if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.Data.AllocatorInstance.Data);
            this_02 = local_6f0;
            this = local_748;
          }
        }
        pFVar43 = pFVar43->PropertyLinkNext;
      } while (pFVar43 != (FProperty *)0x0);
      local_710 = (FProperty *)0x0;
      FVar31.Data = local_4e8.Data.AllocatorInstance.Data;
    }
    if ((local_714 & 8) != 0) {
      (**(code **)(*(longlong *)this + 0x168))(this,local_760);
    }
    if (local_678 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678);
    }
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
    FConfigFile::~FConfigFile(&local_158);
    local_640.ObjectArray.AllocatorInstance.Data = FVar31.Data;
  }
  else {
    if ((pUVar21->ClassFlags >> 2 & 1) != 0) {
      if ((local_714 & 1) == 0) {
        if ((local_714 & 2) != 0) {
          TObjectIterator<UClass>::TObjectIterator<UClass>
                    (&local_640,RF_ClassDefaultObject,true,Borrowed);
          pFVar43 = local_760;
          while ((lVar42 = (longlong)local_640.Index, -1 < local_640.Index &&
                 (local_640.Index < local_640.ObjectArray.ArrayNum))) {
            uVar34 = 0;
            if (local_640.Index < local_640.ObjectArray.ArrayNum) {
              uVar34 = (uint)~local_640.Index >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar16 = (int)param_1->_padding_;
            if ((iVar16 <= *(int *)(*(longlong *)
                                     (local_640.ObjectArray.AllocatorInstance.Data + lVar42 * 8) +
                                   0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)
                   (*(longlong *)(local_640.ObjectArray.AllocatorInstance.Data + lVar42 * 8) + 0x30)
                 + (longlong)iVar16 * 8) == &param_1->_padding_)) {
              lVar42 = (longlong)local_640.Index;
              uVar34 = 0;
              if (local_640.Index < local_640.ObjectArray.ArrayNum) {
                uVar34 = (uint)~local_640.Index >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar21 = *(UClass **)(local_640.ObjectArray.AllocatorInstance.Data + lVar42 * 8);
              if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar21);
              }
              pUVar22 = (pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
              lVar42 = (longlong)local_640.Index;
              uVar34 = 0;
              if (local_640.Index < local_640.ObjectArray.ArrayNum) {
                uVar34 = (uint)~local_640.Index >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              LoadConfig(pUVar22,*(UClass **)
                                  (local_640.ObjectArray.AllocatorInstance.Data + lVar42 * 8),
                         (wchar_t *)0x0,uVar17 & 0xc,pFVar43,
                         (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                          *)0x0);
            }
            TObjectIterator<UClass>::Advance(&local_640);
          }
          goto joined_r0x0001421001ec;
        }
        if ((local_714 & 4) != 0) {
          EVar15 = GetObjectIteratorDefaultInternalExclusionFlags(Borrowed);
          pUVar21 = Z_Construct_UClass_UObject_NoRegister();
          TObjectIteratorBase<1>::TObjectIteratorBase<1>
                    (&local_2f0,pUVar21,false,RF_ClassDefaultObject,EVar15);
          pFVar43 = local_760;
          if (local_2f0._padding_ != 0) {
            pUVar37 = (UObject *)0x0;
            pUVar22 = pUVar37;
            if (local_2f0._padding_ == 0) goto LAB_142100255;
            do {
              pUVar22 = *(UObject **)(local_2f0._padding_ + 8);
LAB_142100255:
              iVar16 = (int)param_1->_padding_;
              if ((iVar16 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar16 * 8)
                  == &param_1->_padding_)) {
                pUVar32 = pUVar37;
                pUVar22 = pUVar37;
                if (local_2f0._padding_ != 0) {
                  pUVar32 = *(UObject **)(local_2f0._padding_ + 8);
                  pUVar22 = *(UObject **)(local_2f0._padding_ + 8);
                }
                LoadConfig(pUVar22,*(UClass **)&pUVar32->field_0x10,(wchar_t *)0x0,uVar17 & 8,
                           pFVar43,(TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                                    *)0x0);
              }
              TObjectIterator<UObject>::operator++((TObjectIterator<UObject> *)&local_2f0);
              this = local_748;
            } while (local_2f0._padding_ != 0);
          }
          goto LAB_142100590;
        }
      }
      else {
        LoadConfig(this,pUVar21,(wchar_t *)0x0,local_714,local_760,
                   (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                    *)0x0);
        if ((uVar17 & 6) != 0) goto LAB_142101411;
      }
      goto LAB_14210059a;
    }
    if ((local_714 & 2) == 0) {
      if ((local_714 & 4) != 0) {
        EVar15 = GetObjectIteratorDefaultInternalExclusionFlags(Borrowed);
        pUVar21 = Z_Construct_UClass_UObject_NoRegister();
        TObjectIteratorBase<1>::TObjectIteratorBase<1>
                  (&local_3b0,pUVar21,false,RF_ClassDefaultObject,EVar15);
        pFVar43 = local_760;
        local_2f0._padding_ = local_3b0._padding_;
        lVar42 = local_3b0._padding_;
joined_r0x0001421004ca:
        if (lVar42 != 0) {
          pUVar37 = (UObject *)0x0;
          pUVar22 = pUVar37;
          if (lVar42 != 0) {
            pUVar22 = *(UObject **)(lVar42 + 8);
          }
          local_3b0._padding_ = local_2f0._padding_;
          if (*(UClass **)&pUVar22->field_0x10 == param_1) {
            pUVar32 = pUVar37;
            pUVar22 = pUVar37;
            if (lVar42 != 0) {
              pUVar32 = *(UObject **)(lVar42 + 8);
              pUVar22 = *(UObject **)(lVar42 + 8);
            }
            LoadConfig(pUVar22,*(UClass **)&pUVar32->field_0x10,(wchar_t *)0x0,uVar17 & 8,pFVar43,
                       (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                        *)0x0);
          }
          do {
            do {
              bVar14 = FUObjectArray::TIterator::Advance((TIterator *)&local_3b0);
              lVar42 = local_3b0._padding_;
              local_2f0._padding_ = local_3b0._padding_;
              if (!bVar14) goto joined_r0x0001421004ca;
              pUVar22 = pUVar37;
              if (local_3b0._padding_ != 0) {
                pUVar22 = *(UObject **)(local_3b0._padding_ + 8);
              }
            } while ((local_3b0.ExclusionFlags & *(EObjectFlags *)&pUVar22->field_0x8) != RF_NoFlags
                    );
            pUVar22 = pUVar37;
            if (local_3b0._padding_ != 0) {
              pUVar22 = *(UObject **)(local_3b0._padding_ + 8);
            }
            pFVar23 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar22->field_0xc);
            local_2f0._padding_ = local_3b0._padding_;
          } while ((local_3b0.InternalExclusionFlags &
                   (EInternalObjectFlags)((ulonglong)(pFVar23->field0_0x0).FlagsAndRefCount >> 0x20)
                   ) != Borrowed);
          goto joined_r0x0001421004ca;
        }
LAB_142100590:
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_2f0._padding_ + 0x30));
      }
      goto LAB_14210059a;
    }
    TObjectIterator<UClass>::TObjectIterator<UClass>(&local_658,RF_ClassDefaultObject,true,Borrowed)
    ;
    pFVar43 = local_760;
    while ((lVar42 = (longlong)local_658.Index,
           local_640.ObjectArray.AllocatorInstance.Data =
                local_658.ObjectArray.AllocatorInstance.Data, -1 < local_658.Index &&
           (local_658.Index < local_658.ObjectArray.ArrayNum))) {
      uVar34 = 0;
      if (local_658.Index < local_658.ObjectArray.ArrayNum) {
        uVar34 = (uint)~local_658.Index >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (int)param_1->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)
                               (local_658.ObjectArray.AllocatorInstance.Data + lVar42 * 8) + 0x38))
         && ((longlong *)
             *(undefined1 **)
              (*(longlong *)
                (*(longlong *)(local_658.ObjectArray.AllocatorInstance.Data + lVar42 * 8) + 0x30) +
              (longlong)iVar16 * 8) == &param_1->_padding_)) {
        lVar42 = (longlong)local_658.Index;
        uVar34 = 0;
        if (local_658.Index < local_658.ObjectArray.ArrayNum) {
          uVar34 = (uint)~local_658.Index >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar21 = *(UClass **)(local_658.ObjectArray.AllocatorInstance.Data + lVar42 * 8);
        if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar21);
        }
        pUVar22 = (pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
        lVar42 = (longlong)local_658.Index;
        uVar34 = 0;
        if (local_658.Index < local_658.ObjectArray.ArrayNum) {
          uVar34 = (uint)~local_658.Index >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LoadConfig(pUVar22,*(UClass **)(local_658.ObjectArray.AllocatorInstance.Data + lVar42 * 8),
                   (wchar_t *)0x0,uVar17 & 0xc,pFVar43,
                   (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                    *)0x0);
      }
      TObjectIterator<UClass>::Advance(&local_658);
    }
  }
joined_r0x0001421001ec:
  if (local_640.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.ObjectArray.AllocatorInstance.Data);
  }
LAB_142101411:
  if ((local_720 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_720 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_720 & 4) != 0) {
    FThreadStats::AddMessage(local_728,CycleScopeEnd);
  }
  return;
}

// NeedsLoadForClient @ 142102a20

bool __thiscall UObject::NeedsLoadForClient(UObject *this)

{
  bool bVar1;
  
  bVar1 = FClassExclusionData::IsExcluded
                    (&GDedicatedClientExclusionList,*(UClass **)&this->field_0x10);
  return !bVar1;
}

// NeedsLoadForServer @ 142102a70

bool __thiscall UObject::NeedsLoadForServer(UObject *this)

{
  bool bVar1;
  
  bVar1 = FClassExclusionData::IsExcluded
                    (&GDedicatedServerExclusionList,*(UClass **)&this->field_0x10);
  return !bVar1;
}

// NeedsLoadForTargetPlatform @ 142102aa0

bool __thiscall UObject::NeedsLoadForTargetPlatform(UObject *this,ITargetPlatform *param_1)

{
  return true;
}

// OutputReferencers @ 142104bc0

void __thiscall
UObject::OutputReferencers(UObject *this,FOutputDevice *param_1,FReferencerInformationList *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FReferencerInformationList *this_00;
  FUObjectItem *pFVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  UGCObjectReferencer *this_01;
  longlong lVar16;
  FReferencerInformationList *local_res18;
  uint local_f8;
  TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  FString local_c0;
  int *local_b0;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar2 = false;
  local_res18 = param_2;
  if (param_2 == (FReferencerInformationList *)0x0) {
    bVar2 = true;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    RetrieveReferencers(this,&local_e0,&local_f0);
    this_00 = ::operator_new(0x20);
    if (this_00 == (FReferencerInformationList *)0x0) {
      local_res18 = (FReferencerInformationList *)0x0;
    }
    else {
      local_res18 = FReferencerInformationList::FReferencerInformationList
                              (this_00,&local_e0,&local_f0);
    }
    DestructItems<FReferencerInformation,int>
              ((FReferencerInformation *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((FReferencerInformation *)local_f0.AllocatorInstance.Data != (FReferencerInformation *)0x0)
    {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    DestructItems<FReferencerInformation,int>
              ((FReferencerInformation *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    if ((FReferencerInformation *)local_e0.AllocatorInstance.Data != (FReferencerInformation *)0x0)
    {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  FOutputDevice::Log(param_1,L"\r\n");
  piVar12 = &(local_res18->ExternalReferences).ArrayNum;
  local_b0 = piVar12;
  if (((local_res18->InternalReferences).ArrayNum < 1) && (*piVar12 < 1)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_a0,(UObject *)0x0,None);
    FOutputDevice::LogfImpl(param_1,L"%s is not referenced");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = *piVar12;
    if (0 < iVar4) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_90,(UObject *)0x0,None);
      FOutputDevice::LogfImpl(param_1,L"External referencers of %s:\r\n");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      iVar4 = *piVar12;
      local_f8 = 0;
      if (0 < iVar4) {
        local_a8 = 0;
        do {
          lVar16 = local_a8;
          uVar15 = 0;
          if ((int)local_f8 < (local_res18->ExternalReferences).ArrayNum) {
            uVar15 = ~local_f8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar14 = (local_res18->ExternalReferences).AllocatorInstance.Data + lVar16;
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)pFVar14,&local_c0,(UObject *)0x0,None);
          pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar14 + 0xc))
          ;
          if (((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) {
            ::FString::AppendChars(&local_c0,L" (root)",7);
          }
          pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar14 + 0xc))
          ;
          if (((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
            ::FString::AppendChars(&local_c0,L" (native)",9);
          }
          if ((*(uint *)(*(longlong *)pFVar14 + 8) >> 1 & 1) != 0) {
            ::FString::AppendChars(&local_c0,L" (standalone)",0xd);
          }
          this_01 = *(UGCObjectReferencer **)pFVar14;
          if (this_01 == (UGCObjectReferencer *)0x0) {
LAB_142104ea5:
            this_01 = (UGCObjectReferencer *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UGCObjectReferencer_NoRegister();
            iVar4 = (int)pUVar7->_padding_;
            if ((*(int *)(this_01->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar7->_padding_)) goto LAB_142104ea5;
          }
          FOutputDevice::LogfImpl(param_1,L"   %s (%i)\r\n");
          uVar8 = 0;
          uVar11 = uVar8;
          if (0 < *(int *)(pFVar14 + 8)) {
            do {
              uVar15 = (uint)uVar8;
              if ((int)uVar15 < *(int *)(pFVar14 + 0x18)) {
                uVar10 = 0;
                if ((int)uVar15 < *(int *)(pFVar14 + 0x18)) {
                  uVar10 = ~uVar15 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                FField::GetFullName(*(FField **)(uVar11 + *(longlong *)(pFVar14 + 0x10)),&local_80);
                FOutputDevice::LogfImpl(param_1,L"      %i) %s\r\n");
                FVar9.Data = local_80.Data.AllocatorInstance.Data;
              }
              else {
                local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_d0.Data.ArrayNum = 0;
                local_d0.Data.ArrayMax = 0;
                if ((this_01 == (UGCObjectReferencer *)0x0) ||
                   (bVar3 = UGCObjectReferencer::GetReferencerName(this_01,this,&local_d0,false),
                   !bVar3)) {
                  FOutputDevice::LogfImpl(param_1,L"      %i) [[native reference]]\r\n");
                  FVar9.Data = local_d0.Data.AllocatorInstance.Data;
                }
                else {
                  FOutputDevice::LogfImpl(param_1,L"      %i) [[FGCObject %s]]\r\n");
                  FVar9.Data = local_d0.Data.AllocatorInstance.Data;
                }
              }
              if (FVar9.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar9.Data);
              }
              uVar8 = (ulonglong)(uVar15 + 1);
              piVar12 = local_b0;
              uVar11 = uVar11 + 8;
            } while ((int)(uVar15 + 1) < *(int *)(pFVar14 + 8));
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          local_f8 = local_f8 + 1;
          iVar4 = *piVar12;
          local_a8 = local_a8 + 0x20;
        } while ((int)local_f8 < iVar4);
      }
    }
    if (0 < (local_res18->InternalReferences).ArrayNum) {
      if (0 < iVar4) {
        FOutputDevice::Log(param_1,L"\r\n");
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
      FOutputDevice::LogfImpl(param_1,L"Internal referencers of %s:\r\n");
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      iVar4 = (local_res18->InternalReferences).ArrayNum;
      uVar15 = 0;
      if (0 < iVar4) {
        lVar16 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar15 < iVar4) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar14 = (local_res18->InternalReferences).AllocatorInstance.Data + lVar16;
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)pFVar14,&local_60,(UObject *)0x0,None);
          FOutputDevice::LogfImpl(param_1,L"   %s (%i)\r\n");
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          uVar10 = 0;
          if (0 < *(int *)(pFVar14 + 8)) {
            lVar13 = 0;
            do {
              if ((int)uVar10 < *(int *)(pFVar14 + 0x18)) {
                uVar5 = 0;
                if ((int)uVar10 < *(int *)(pFVar14 + 0x18)) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                FField::GetFullName(*(FField **)(lVar13 + *(longlong *)(pFVar14 + 0x10)),&local_50);
                FOutputDevice::LogfImpl(param_1,L"      %i) %s\r\n");
                if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_50.Data.AllocatorInstance.Data);
                }
              }
              else {
                FOutputDevice::LogfImpl(param_1,L"      %i) [[native reference]]\r\n");
              }
              uVar10 = uVar10 + 1;
              lVar13 = lVar13 + 8;
            } while ((int)uVar10 < *(int *)(pFVar14 + 8));
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x20;
          iVar4 = (local_res18->InternalReferences).ArrayNum;
        } while ((int)uVar15 < iVar4);
      }
    }
  }
  FOutputDevice::Log(param_1,L"\r\n");
  if (bVar2) {
    DestructItems<FReferencerInformation,int>
              ((FReferencerInformation *)(local_res18->ExternalReferences).AllocatorInstance.Data,
               (local_res18->ExternalReferences).ArrayNum);
    pFVar14 = (local_res18->ExternalReferences).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    DestructItems<FReferencerInformation,int>
              ((FReferencerInformation *)(local_res18->InternalReferences).AllocatorInstance.Data,
               (local_res18->InternalReferences).ArrayNum);
    pFVar14 = (local_res18->InternalReferences).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    ::operator_delete(local_res18,0x20);
  }
  return;
}

// ParseParms @ 1421055e0

void __thiscall UObject::ParseParms(UObject *this,wchar_t *param_1)

{
  FProperty *this_00;
  FFeedbackContext *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  if (param_1 != (wchar_t *)0x0) {
    local_38.Struct = *(UStruct **)&this->field_0x10;
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    this_00 = (FProperty *)local_38.Field;
    while (this_00 != (FProperty *)0x0) {
      local_38.Field = (FField *)this_00;
      pUVar3 = Z_Construct_UClass_UObject_NoRegister();
      bVar2 = FFieldVariant::IsA((FFieldVariant *)&this_00->_padding_,pUVar3);
      pUVar3 = (UClass *)0x0;
      if (bVar2) {
        pUVar3 = (UClass *)(this_00->_padding_ & 0xfffffffffffffffe);
      }
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar3 != pUVar4) {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        bVar2 = IsThisNotNull(this_00,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&this_00->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar6.Data = local_68.Data.AllocatorInstance.Data;
        }
        pFVar5 = ::FString::FString(&local_48,(wchar_t *)FVar6.Data);
        ::FString::ConcatFC(&local_58,pFVar5,L"=");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar6.Data = local_58.Data.AllocatorInstance.Data;
        }
        bVar2 = FParse::Value(param_1,(wchar_t *)FVar6.Data,&local_78,true,(wchar_t **)0x0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pFVar1 = GWarn;
        if (bVar2) {
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar6.Data = local_78.Data.AllocatorInstance.Data;
          }
          bVar2 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)GWarn);
          if ((bVar2) && (FVar6.Data != (FScriptContainerElement *)0x0)) {
            (**(code **)(this_00->_padding_ + 0xe8))
                      (this_00,FVar6.Data,this,1,this,0x8000000,pFVar1);
          }
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      local_38.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      this_00 = (FProperty *)local_38.Field;
    }
  }
  return;
}

// PostLoad @ 142105e50

void __thiscall UObject::PostLoad(UObject *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) != 0) {
        LoadConfig(this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                   (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                    *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UObject **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PostLoadSubobjects @ 142105f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObject::PostLoadSubobjects(UObject *this,FObjectInstancingGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBoolAnnotation FVar3;
  uint uVar4;
  undefined7 extraout_var;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  UStruct *pUVar7;
  uint uVar8;
  UStruct *pUVar10;
  undefined1 auStackY_2c8 [32];
  undefined1 local_298 [8];
  void *local_290;
  TObjectPtr<UClass>_u_0 local_288;
  FName local_280;
  code *local_278;
  FName *local_270;
  code *local_268;
  code **local_260;
  undefined1 local_258 [88];
  void *local_200;
  undefined4 local_1f8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1f0;
  void *local_1b0;
  undefined4 local_1a8;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1a0;
  ForElementType<FSetElementId> local_160;
  int local_158;
  undefined1 local_148 [88];
  void *local_f0;
  undefined4 local_e8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e0;
  void *local_a0;
  undefined4 local_98;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  UStruct *pUVar9;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (((GEventDrivenLoaderEnabled) && ((*(uint *)&this->field_0x8 >> 10 & 1) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GEventDrivenLoaderEnabled || !HasAnyFlags(RF_NeedLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x59a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x800000) == 0) {
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_NeedPostLoadSubobjects);
  }
  else {
    pUVar5 = *(UObject **)&this->field_0x20;
    if ((pUVar5 != (UObject *)0x0) && ((*(uint *)&pUVar5->field_0x8 >> 0xd & 1) != 0)) {
      if ((GEventDrivenLoaderEnabled != false) &&
         (((*(uint *)&pUVar5->field_0x8 >> 10 & 1) != 0 &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!GEventDrivenLoaderEnabled || !ObjOuter->HasAnyFlags(RF_NeedLoad)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                              ,0x5a2,L""), bVar2)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(uint *)&pUVar5->field_0x8 >> 0xc & 1) == 0) {
        ConditionalPostLoadSubobjects(pUVar5,(FObjectInstancingGraph *)0x0);
      }
      else {
        ConditionalPostLoad(pUVar5);
      }
      if ((*(uint *)&this->field_0x8 >> 0xd & 1) == 0) {
        return;
      }
    }
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_NeedPostLoadSubobjects);
    if ((FOverridableManager::OverridableManager == (FOverridableManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OverridableManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                           ,0x43,L"Expected the overridable manager to be created."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar3 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                      ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)
                       FOverridableManager::OverridableManager,(UObjectBase *)local_298);
    if (*(char *)CONCAT71(extraout_var,FVar3.Mark) != '\0') {
      FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_258,false);
      if (param_1 == (FObjectInstancingGraph *)0x0) {
        FObjectInstancingGraph::SetDestinationRoot
                  ((FObjectInstancingGraph *)local_258,this,(UObject *)0x0);
        local_258[0x15] = true;
        param_1 = (FObjectInstancingGraph *)local_258;
      }
      pUVar10 = (UStruct *)0x0;
      local_280 = (FName)&local_290;
      local_290 = (void *)0x0;
      local_278 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UObject::GetDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*>
                  ::Call;
      local_270 = &local_280;
      local_288.DebugPtr = (UClass *)0x0;
      local_260 = &local_278;
      local_268 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::
                  Call;
      ForEachObjectWithOuterBreakable
                ((UObjectBase *)this,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_268,false,
                 RF_NoFlags,Borrowed);
      pUVar7 = pUVar10;
      pUVar9 = pUVar10;
      if (0 < (int)local_288._0_4_) {
        do {
          uVar8 = (uint)pUVar9;
          uVar4 = 0;
          if ((int)uVar8 < (int)local_288._0_4_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FObjectInstancingGraph::AddNewInstance
                    (param_1,*(UObject **)((longlong)&pUVar7->_padding_ + (longlong)local_290),
                     (UObject *)0x0);
          pUVar7 = (UStruct *)&pUVar7->_padding_;
          pUVar9 = (UStruct *)(ulonglong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < (int)local_288._0_4_);
      }
      pUVar7 = *(UStruct **)&this->field_0x10;
      if ((pUVar7[1]._padding_ & 0x80000000000000) != 0) {
        pUVar5 = GetArchetype(this);
        if (param_1 == (FObjectInstancingGraph *)0x0) {
          FObjectInstancingGraph::FObjectInstancingGraph
                    ((FObjectInstancingGraph *)local_148,this,None);
          if (pUVar5 != (UObject *)0x0) {
            pUVar10 = *(UStruct **)&pUVar5->field_0x10;
          }
          UStruct::InstanceSubobjectTemplates
                    (pUVar7,(TNotNull<void_*>)this,pUVar5,pUVar10,(TNotNull<UObject_*>)this,
                     (FObjectInstancingGraph *)local_148);
          local_48 = 0;
          if (local_50 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_50);
          }
          TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_90);
          local_98 = 0;
          if (local_a0 != (void *)0x0) {
            FMemory::Free(local_a0);
          }
          TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e0);
          local_e8 = 0;
          if (local_f0 != (void *)0x0) {
            FMemory::Free(local_f0);
          }
          TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_148 + 0x18));
        }
        else {
          if (pUVar5 != (UObject *)0x0) {
            pUVar10 = *(UStruct **)&pUVar5->field_0x10;
          }
          UStruct::InstanceSubobjectTemplates
                    (pUVar7,(TNotNull<void_*>)this,pUVar5,pUVar10,(TNotNull<UObject_*>)this,param_1)
          ;
        }
      }
      bVar2 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar2) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      if (local_290 != (void *)0x0) {
        FMemory::Free(local_290);
      }
      local_158 = 0;
      if (local_160 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_160);
      }
      TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1a0);
      local_1a8 = 0;
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f0);
      local_1f8 = 0;
      if (local_200 != (void *)0x0) {
        FMemory::Free(local_200);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_258 + 0x18));
    }
  }
  return;
}

// PostNetReceive @ 1421063d0

void __thiscall UObject::PostNetReceive(UObject *this)

{
  return;
}

// PostRename @ 1421063f0

void __thiscall UObject::PostRename(UObject *this,UObject *param_1,FName param_2)

{
  return;
}

// PostSaveRoot @ 142106400

void __thiscall UObject::PostSaveRoot(UObject *this,FObjectPostSaveRootContext param_1)

{
  return;
}

// PreDestroyFromReplication @ 142106410

void __thiscall UObject::PreDestroyFromReplication(UObject *this)

{
  return;
}

// PreNetReceive @ 142106420

void __thiscall UObject::PreNetReceive(UObject *this)

{
  return;
}

// PreSave @ 142106440

void __thiscall UObject::PreSave(UObject *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res8 [4];
  
  ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data[0xa0] = (FScriptContainerElement)0x1;
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  (**(code **)(*(longlong *)this + 0x80))(this,local_res8);
  return;
}

// PreSaveRoot @ 142106500

void __thiscall UObject::PreSaveRoot(UObject *this,FObjectPreSaveRootContext param_1)

{
  return;
}

// RegisterReplicationFragments @ 1421080b0

void __thiscall
UObject::RegisterReplicationFragments
          (UObject *this,FFragmentRegistrationContext *param_1,EFragmentRegistrationFlags param_2)

{
  return;
}

// ReinitializeProperties @ 142108ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::ReinitializeProperties(UObject *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FUObjectItem *pFVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UObject *)0x0) {
    param_1 = GetArchetype(this);
  }
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar2 = *(UClass **)&this->field_0x10;
  if (pUVar2 != pUVar5) {
    if (param_1 != (UObject *)0x0) {
      iVar1 = *(int *)(*(longlong *)&param_1->field_0x10 + 0x38);
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         (*(longlong *)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          *(longlong *)&param_1->field_0x10 + 0x30)) goto LAB_142108b6a;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetClass() == UObject::StaticClass() || (SourceObject && IsA(SourceObject->GetClass()))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                       ,0xfa3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_142108b6a:
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,*(UClass **)&this->field_0x10);
  local_a8._8_8_ = *(undefined8 *)&this->field_0x20;
  local_a8._16_4_ = *(uint *)&this->field_0x18;
  local_a8._20_4_ = *(uint *)&this->field_0x1c;
  local_a8._24_4_ = *(undefined4 *)&this->field_0x8;
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  local_a8[0x20] = (bool)(~(byte)(*(uint *)&this->field_0x8 >> 4) & 1);
  local_a8._28_4_ = (undefined4)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x20);
  local_a8._40_8_ = param_1;
  local_a8._48_8_ = param_2;
  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// ReloadConfig @ 142108c10

void __thiscall
UObject::ReloadConfig
          (UObject *this,UClass *param_1,wchar_t *param_2,uint param_3,FProperty *param_4)

{
  LoadConfig(this,param_1,param_2,param_3 | 9,param_4,
             (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_> *)0x0)
  ;
  return;
}

// Rename @ 1421096e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UObject::Rename(UObject *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  UPackage *pUVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  UPackage *pUVar7;
  size_t sVar8;
  UObjectBaseUtility *this_00;
  UObject *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_80 [8];
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"UObject::Rename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pUVar7 = GObjTransientPkg;
  if ((param_2 != (UObject *)0x0) && (param_2 != *(UObject **)&this->field_0x20)) {
    if (((*(uint *)&this->field_0x8 & 0x30) == 0) &&
       (pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2), pUVar4 != pUVar7)) {
      pUVar9 = *(UObject **)(*(longlong *)&this->field_0x10 + 0xe0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar9[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) != &pUVar9[1].field_0x8)) {
        if ((param_3 & 2) != 0) {
          bVar13 = false;
          goto LAB_142109c5c;
        }
        local_80 = *(undefined1 (*) [8])
                    (*(longlong *)(*(longlong *)&this->field_0x10 + 0xe0) + 0x18);
        ::FName::ToString((FName *)local_80,&local_78);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&local_68,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_68.DataPtr);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if (((param_3 >> 9 & 1) == 0) && (pFVar5 != pFVar6)) {
      if (pFVar6 == (FLinkerLoad *)0x0) {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
        pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        if (pUVar4 == pUVar7) goto LAB_1421099f4;
      }
      if ((pFVar5 != (FLinkerLoad *)0x0) && ((*(uint *)&this->field_0x8 & 0x1400) != 0)) {
        if (1 < (byte)LogObj._0_1_) {
          local_80 = (undefined1  [8])0x150852300;
          if ((*(uint *)&this->field_0x8 >> 10 & 1) != 0) {
            local_80 = (undefined1  [8])0x1508522e8;
          }
          pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&local_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this,(FString *)&local_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (local_68.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(local_68.DataPtr);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      SetLinker(this,(FLinkerLoad *)0x0,-1,true,true);
    }
  }
LAB_1421099f4:
  if (param_1 == (wchar_t *)0x0) {
LAB_142109af3:
    if ((param_3 & 2) == 0) {
LAB_142109afd:
      FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      FVar1.Number = *(uint *)&this->field_0x1c;
      if ((param_2 != (UObject *)0x0) && ((param_3 & 4) == 0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
      }
      LockUObjectHashTables();
      if (param_1 == (wchar_t *)0x0) {
        if ((param_2 == (UObject *)0x0) ||
           (pUVar9 = StaticFindObjectFastInternal
                               ((UClass *)0x0,param_2,FVar1,None,RF_NoFlags,Borrowed),
           FVar10 = FVar1, pUVar9 != (UObject *)0x0)) {
          pUVar11 = (UClass *)param_2;
          if (param_2 == (UObject *)0x0) {
            pUVar11 = *(UClass **)&this->field_0x20;
          }
          FVar10.ComparisonIndex.Value = *(uint *)&this->field_0x10;
          FVar10.Number = *(uint *)&this->field_0x14;
          FVar10 = MakeUniqueObjectName((UObject *)local_80,pUVar11,FVar10,None);
          goto LAB_142109c21;
        }
      }
      else {
        FVar10 = (FName)::FName::FName((FName *)local_80,param_1);
LAB_142109c21:
        FVar10 = *(FName *)FVar10;
      }
      uVar2 = *(undefined8 *)&this->field_0x20;
      if ((*(uint *)&this->field_0x8 & 1) != 0) {
        Z_Construct_UClass_UPackage_NoRegister();
      }
      UObjectBase::LowLevelRename((UObjectBase *)this,FVar10,param_2);
      UnlockUObjectHashTables();
      (**(code **)(*(longlong *)this + 0xe0))(this,uVar2,FVar1);
    }
  }
  else {
    sVar8 = wcslen(param_1);
    local_78.Data.ArrayNum = (int)sVar8;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    local_68.DataPtr = param_1;
    if ((param_3 >> 6 & 1) == 0) {
      local_78.Data.ArrayMax = local_68._12_4_;
      pUVar9 = param_2;
      if (param_2 == (UObject *)0x0) {
        pUVar9 = *(UObject **)&this->field_0x20;
      }
      local_68.Size = local_78.Data.ArrayNum;
      this_00 = (UObjectBaseUtility *)StaticFindObject((UClass *)0x0,pUVar9,&local_68,ExactClass);
    }
    else {
      local_68._12_4_ = local_78.Data.ArrayMax;
      local_68.Size = local_78.Data.ArrayNum;
      this_00 = (UObjectBaseUtility *)
                StaticFindFirstObject((UClass *)0x0,&local_68,ExactClass,NoLogging,(wchar_t *)0x0);
    }
    if (this_00 != (UObjectBaseUtility *)this) {
      if (this_00 == (UObjectBaseUtility *)0x0) goto LAB_142109af3;
      if ((param_3 & 2) != 0) {
        bVar13 = false;
        goto LAB_142109c5c;
      }
      UObjectBaseUtility::GetFullName(this_00,&local_58,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&local_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (local_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_68.DataPtr);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_142109afd;
    }
    local_80._0_4_ = *(uint *)&this_00->field_0x18;
    local_80._4_4_ = *(uint *)&this_00->field_0x1c;
    ::FName::ToString((FName *)local_80,&local_78);
    ::FString::FString(&local_58,param_1);
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == local_58.Data.ArrayNum) {
      if (local_78.Data.ArrayNum < 2) {
        bVar13 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)local_78.Data.AllocatorInstance.Data,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
      }
    }
    else {
      bVar13 = local_78.Data.ArrayNum + local_58.Data.ArrayNum == 1;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      FVar12.Data = local_78.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (!bVar13) goto LAB_142109af3;
  }
  bVar13 = true;
LAB_142109c5c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// RetrieveReferencers @ 14210c220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObject::RetrieveReferencers
          (UObject *this,TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FUObjectItem *pFVar7;
  FReferencerInformation *this_01;
  longlong lVar8;
  longlong lVar9;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_108;
  TObjectIteratorBase<1> local_f8;
  FArchiveFindCulprit local_c8;
  
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_f8,pUVar6,false,RF_NoFlags,Borrowed);
  lVar8 = local_f8._padding_;
joined_r0x00014210c272:
  do {
    if (lVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014210c4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_f8._padding_ + 0x30));
      return;
    }
    this_00 = *(UObjectBaseUtility **)(lVar8 + 8);
    if (this_00 != (UObjectBaseUtility *)this) {
      FArchiveFindCulprit::FArchiveFindCulprit(&local_c8,this,(UObject *)this_00,false);
      _Src.Data = local_c8.Referencers.AllocatorInstance.Data;
      lVar8 = (longlong)local_c8.Referencers.ArrayNum;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayMax = 0;
      local_108.ArrayNum = local_c8.Referencers.ArrayNum;
      if (local_c8.Referencers.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_c8.Referencers.ArrayNum,0,&local_108.AllocatorInstance,
                   local_c8.Referencers.ArrayNum,&local_108.ArrayMax);
        memcpy(local_108.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
      }
      iVar3 = local_c8.Count;
      if (0 < local_c8.Count) {
        bVar4 = UObjectBaseUtility::IsIn(this_00,this);
        if (bVar4) {
          if (param_1 != (TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *)0x0) {
            uVar1 = param_1->ArrayNum + 1;
            if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
            }
            piVar2 = &param_1->ArrayMax;
            if (param_1->ArrayMax < (int)uVar1) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,piVar2);
            }
            iVar5 = param_1->ArrayNum;
            if (iVar5 == *piVar2) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&param_1->AllocatorInstance,piVar2);
            }
            param_1->ArrayNum = iVar5 + 1;
            this_01 = (FReferencerInformation *)
                      ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
LAB_14210c3ee:
            FReferencerInformation::FReferencerInformation
                      (this_01,(UObject *)this_00,iVar3,&local_108);
          }
        }
        else if (param_2 != (TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *)0x0) {
          uVar1 = param_2->ArrayNum + 1;
          if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
          }
          piVar2 = &param_2->ArrayMax;
          if (param_2->ArrayMax < (int)uVar1) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar1,&param_2->AllocatorInstance,param_2->ArrayNum,piVar2);
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar2) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,piVar2);
          }
          param_2->ArrayNum = iVar5 + 1;
          this_01 = (FReferencerInformation *)
                    ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
          goto LAB_14210c3ee;
        }
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      if (local_c8.Referencers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Referencers.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_c8);
    }
LAB_14210c430:
    do {
      do {
        bVar4 = FUObjectArray::TIterator::Advance((TIterator *)&local_f8);
        lVar8 = local_f8._padding_;
        if (!bVar4) goto joined_r0x00014210c272;
        lVar9 = 0;
        if (local_f8._padding_ != 0) {
          lVar9 = *(longlong *)(local_f8._padding_ + 8);
        }
      } while ((local_f8.ExclusionFlags & *(EObjectFlags *)(lVar9 + 8)) != RF_NoFlags);
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      if (local_f8.Class != pUVar6) {
        iVar3 = (int)(local_f8.Class)->_padding_;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
            &(local_f8.Class)->_padding_)) goto LAB_14210c430;
      }
      pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar9 + 0xc));
    } while ((local_f8.InternalExclusionFlags &
             (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// SaveConfig @ 14210c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::SaveConfig(UObject *this,FSaveConfigContext *param_1)

{
  TObjectPtr<UObject> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  EPropertyFlags EVar6;
  longlong *plVar7;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FScriptArrayHelper_u_8 FVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FConfigBranch *pFVar22;
  FString *pFVar23;
  UPackage *pUVar24;
  UClass *pUVar25;
  UClass *pUVar26;
  void *pvVar27;
  FConfigSection *pFVar28;
  uchar *puVar29;
  void *_Dst;
  ForAnyElementType FVar30;
  int iVar31;
  uint uVar32;
  ForElementType<FSetElementId> FVar33;
  wchar_t *pwVar34;
  ForAnyElementType FVar35;
  uint uVar36;
  longlong lVar37;
  undefined1 *puVar38;
  UObject *pUVar39;
  EArrayPropertyFlags EVar40;
  ForElementType<unsigned_int> FVar41;
  ForAnyElementType FVar42;
  FProperty *this_00;
  FProperty *this_01;
  FConfigCacheIni *pFVar43;
  uint uVar44;
  FProperty *this_02;
  undefined1 auStackY_c38 [32];
  bool local_bf5;
  FString local_bf0;
  uint local_be0;
  FConfigCacheIni *local_bd8;
  FString local_bd0;
  FString local_bc0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_bb0;
  UObject *local_ba0;
  FString local_b98;
  TScriptContainerIterator<FScriptSetHelper> local_b88;
  FSaveConfigContext *local_b78;
  FProperty *local_b70;
  FString local_b68;
  ForAnyElementType local_b58;
  int local_b50;
  int local_b4c;
  FString local_b48;
  UObject *local_b38;
  FString local_b30;
  TScriptContainerIterator<FScriptSetHelper> local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  wchar_t *local_ad8;
  undefined8 local_ad0;
  wchar_t *local_ac8;
  undefined8 local_ac0;
  ulonglong local_ab8;
  FString local_ab0;
  FString local_aa0;
  FName local_a90;
  FName local_a88;
  FProperty *local_a80;
  UObject *local_a78;
  FString local_a70;
  FString local_a60;
  FScriptArrayHelper local_a50;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FString local_9f0;
  FString local_9e0;
  FString local_9d0;
  FName local_9c0;
  FName local_9b8;
  FName local_9b0;
  FName local_9a8;
  FName local_9a0;
  FName local_998;
  FName local_990;
  FName local_988;
  FName local_980;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  TScriptContainerIterator<FScriptSetHelper> local_918;
  TScriptContainerIterator<FScriptSetHelper> local_908;
  FString local_8f8;
  FString local_8e8;
  FName local_8d8;
  FScriptArrayHelper local_8d0;
  FScriptSetHelper local_8b0;
  FScriptSetHelper local_888;
  wchar_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c38;
  local_be0 = 0;
  if (((*(UClass **)&this->field_0x10)->ClassFlags & CLASS_Config) == CLASS_None) {
    return;
  }
  iVar31 = (param_1->Filename).Data.ArrayNum;
  iVar20 = iVar31 + -1;
  if (iVar31 == 0) {
    iVar20 = 0;
  }
  local_ba0 = this;
  local_b78 = param_1;
  if (iVar20 < 1) {
    UClass::GetConfigName(*(UClass **)&this->field_0x10,&local_aa0);
    uVar44 = 2;
    FVar30.Data = local_aa0.Data.AllocatorInstance.Data;
    iVar31 = local_aa0.Data.ArrayNum;
  }
  else {
    pFVar3 = (param_1->Filename).Data.AllocatorInstance.Data;
    local_b58.Data = (FScriptContainerElement *)0x0;
    local_b50 = iVar31;
    if (iVar31 == 0) {
      local_b4c = 0;
      uVar44 = 1;
      FVar30.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar31,0,&local_b58,iVar31,&local_b4c);
      memcpy(local_b58.Data,pFVar3,(longlong)iVar31 * 2);
      uVar44 = 1;
      FVar30.Data = local_b58.Data;
      iVar31 = local_b50;
    }
  }
  local_bd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bd0.Data.ArrayNum = iVar31;
  if (iVar31 == 0) {
    local_bd0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar31,0,(ForAnyElementType *)&local_bd0,iVar31,&local_bd0.Data.ArrayMax);
    memcpy(local_bd0.Data.AllocatorInstance.Data,FVar30.Data,(longlong)iVar31 * 2);
  }
  if (((uVar44 & 2) != 0) &&
     (uVar44 = uVar44 & 0xfffffffd,
     local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
  }
  if (((uVar44 & 1) != 0) &&
     (uVar44 = uVar44 & 0xfffffffe, local_b58.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b58.Data);
  }
  pFVar43 = param_1->ConfigSystem;
  FVar30.Data = (FScriptContainerElement *)L"";
  if (local_bd0.Data.ArrayNum != 0) {
    FVar30.Data = local_bd0.Data.AllocatorInstance.Data;
  }
  local_bd8 = pFVar43;
  pFVar21 = ::FName::FName(&local_8d8,(wchar_t *)FVar30.Data);
  pFVar22 = FConfigCacheIni::FindBranch(pFVar43,*pFVar21,&local_bd0);
  if ((pFVar22 != (FConfigBranch *)0x0) ||
     (bVar16 = FConfigCacheIni::AreFileOperationsDisabled(pFVar43), bVar16)) {
    local_bf5 = false;
  }
  else {
    local_bf5 = true;
    FConfigCacheIni::AddNewBranch(pFVar43,&local_bd0);
  }
  pFVar23 = GetDefaultConfigFilename(this,&local_968);
  iVar31 = (pFVar23->Data).ArrayNum;
  if (local_bd0.Data.ArrayNum == iVar31) {
    if (1 < local_bd0.Data.ArrayNum) {
      iVar31 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_bd0.Data.AllocatorInstance.Data,
                          (wchar_t *)(pFVar23->Data).AllocatorInstance.Data);
      bVar16 = iVar31 == 0;
      goto LAB_14210c7ba;
    }
  }
  else {
    bVar16 = local_bd0.Data.ArrayNum + iVar31 == 1;
LAB_14210c7ba:
    if (!bVar16) {
      uVar44 = uVar44 | 8;
      ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_978);
      FWindowsPlatformProcess::UserSettingsDir();
      ::FString::PrintfImpl(&local_a70,L"%sUnreal Engine/Engine/Config/User%s.ini");
      if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Data.AllocatorInstance.Data);
      }
      if (local_bd0.Data.ArrayNum == local_a70.Data.ArrayNum) {
        if (local_bd0.Data.ArrayNum < 2) goto LAB_14210c85f;
        iVar31 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_bd0.Data.AllocatorInstance.Data,
                            (wchar_t *)local_a70.Data.AllocatorInstance.Data);
        bVar16 = iVar31 == 0;
      }
      else {
        bVar16 = local_a70.Data.ArrayNum + local_bd0.Data.ArrayNum == 1;
      }
      if ((!bVar16) && (bVar16 = false, param_1->bSaveToLayer == false)) goto LAB_14210c864;
    }
  }
LAB_14210c85f:
  bVar16 = true;
LAB_14210c864:
  if (((uVar44 & 8) != 0) &&
     (uVar44 = uVar44 & 0xfffffff7,
     local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a70.Data.AllocatorInstance.Data);
  }
  local_be0 = uVar44;
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  if (((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) == 0) ||
     ((*(uint *)&this->field_0x8 & 0x10) != 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  local_bf0.Data.ArrayNum = (param_1->OverrideConfigSectionName).Data.ArrayNum;
  lVar37 = (longlong)local_bf0.Data.ArrayNum;
  pFVar3 = (param_1->OverrideConfigSectionName).Data.AllocatorInstance.Data;
  local_bf0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_bf0.Data.ArrayNum == 0) {
    local_bf0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_bf0.Data.ArrayNum,0,(ForAnyElementType *)&local_bf0,local_bf0.Data.ArrayNum
               ,&local_bf0.Data.ArrayMax);
    memcpy(local_bf0.Data.AllocatorInstance.Data,pFVar3,lVar37 * 2);
  }
  if (bVar11) {
    local_b68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b68.Data.ArrayNum = 0;
    local_b68.Data.ArrayMax = 0;
    pUVar24 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if (pUVar24 == GObjTransientPkg) {
      local_a90.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_a90.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_a90,&local_af8);
      if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b68.Data.AllocatorInstance.Data);
      }
      local_b68.Data.ArrayNum = local_af8.Data.ArrayNum;
      local_b68.Data.ArrayMax = local_af8.Data.ArrayMax;
      local_af8.Data.ArrayNum = 0;
      local_af8.Data.ArrayMax = 0;
      local_b68.Data.AllocatorInstance.Data = local_af8.Data.AllocatorInstance.Data;
      local_af8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(UObject *)pUVar24,&local_b68);
    }
    if ((param_1->OverrideConfigSectionName).Data.ArrayNum < 2) {
      local_a88 = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
      ::FName::ToString(&local_a88,&local_a20);
      ::FString::ConcatFC(&local_a30,&local_b68,L" ");
      ::FString::ConcatFF(&local_ae8,&local_a30,&local_a20);
      if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
      }
      local_bf0.Data.AllocatorInstance.Data = local_ae8.Data.AllocatorInstance.Data;
      local_bf0.Data.ArrayNum = local_ae8.Data.ArrayNum;
      local_bf0.Data.ArrayMax = local_ae8.Data.ArrayMax;
      local_ae8.Data.ArrayNum = 0;
      local_ae8.Data.ArrayMax = 0;
      local_ae8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a30.Data.AllocatorInstance.Data);
      }
      if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a20.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)this + 600))(this,&local_bf0);
    }
    if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.Data.AllocatorInstance.Data);
    }
  }
  pUVar25 = *(UClass **)&this->field_0x10;
  pTVar1 = &pUVar25->ClassDefaultObject;
  if ((pTVar1->field0_0x0).DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar25);
    pUVar25 = *(UClass **)&this->field_0x10;
  }
  local_a78 = (pTVar1->field0_0x0).DebugPtr;
  if (((param_1->bAllowCopyToDefaultObject == false) || (this == local_a78)) ||
     (bVar12 = true, param_1->ConfigSystem != GConfig)) {
    bVar12 = false;
  }
  this_02 = (FProperty *)pUVar25->_padding_;
  local_b70 = this_02;
  if (this_02 != (FProperty *)0x0) {
    do {
      local_b70 = this_02;
      if (*(int *)&(param_1->PropertyNames).Elements.field_0x8 ==
          *(int *)&(param_1->PropertyNames).Elements.field_0x34) {
LAB_14210cb79:
        EVar6 = this_02->PropertyFlags;
        if (((EVar6 >> 0xe & 1) != 0) &&
           ((param_1->RequiredPropertyFlags & EVar6) == param_1->RequiredPropertyFlags)) {
          pUVar25 = *(UClass **)&this->field_0x10;
          if ((EVar6 >> 0x12 & 1) != 0) {
            pUVar25 = FField::GetOwnerClass((FField *)this_02);
          }
          bVar17 = IsThisNotNull(this_02,"FField::GetName");
          if (bVar17) {
            ::FName::ToString((FName *)&this_02->_padding_,&local_bc0);
          }
          else {
            ::FString::FString(&local_bc0,L"None");
          }
          if ((!bVar11) && ((param_1->OverrideConfigSectionName).Data.ArrayNum < 2)) {
            pFVar23 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar25,&local_958,(UObject *)0x0);
            if (&local_bf0 != pFVar23) {
              if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
              }
              local_bf0.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
              (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_bf0.Data.ArrayNum = (pFVar23->Data).ArrayNum;
              local_bf0.Data.ArrayMax = (pFVar23->Data).ArrayMax;
              (pFVar23->Data).ArrayNum = 0;
              (pFVar23->Data).ArrayMax = 0;
            }
            if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_958.Data.AllocatorInstance.Data);
            }
            (**(code **)(*(longlong *)this + 0x250))(this);
          }
          FVar30.Data = local_bd0.Data.AllocatorInstance.Data;
          if (((uint)(int)this_02->PropertyFlags >> 0x12 & 1) == 0) {
LAB_14210ccaf:
            lVar37 = (longlong)local_bd0.Data.ArrayNum;
            uVar44 = local_be0 | 0x20;
            local_b30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b30.Data.ArrayNum = local_bd0.Data.ArrayNum;
            local_be0 = uVar44;
            if (local_bd0.Data.ArrayNum == 0) {
              local_b30.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_bd0.Data.ArrayNum,0,(ForAnyElementType *)&local_b30,
                         local_bd0.Data.ArrayNum,&local_b30.Data.ArrayMax);
              memcpy(local_b30.Data.AllocatorInstance.Data,FVar30.Data,lVar37 * 2);
            }
            pFVar23 = &local_b30;
          }
          else {
            iVar20 = (param_1->Filename).Data.ArrayNum;
            iVar31 = iVar20 + -1;
            if (iVar20 == 0) {
              iVar31 = 0;
            }
            if (iVar31 != 0) goto LAB_14210ccaf;
            pUVar25 = FField::GetOwnerClass((FField *)this_02);
            uVar44 = local_be0 | 0x10;
            local_be0 = uVar44;
            pFVar23 = UClass::GetConfigName(pUVar25,&local_948);
          }
          local_b98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b98.Data.ArrayNum = (pFVar23->Data).ArrayNum;
          lVar37 = (longlong)local_b98.Data.ArrayNum;
          pFVar3 = (pFVar23->Data).AllocatorInstance.Data;
          if (local_b98.Data.ArrayNum == 0) {
            local_b98.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_b98.Data.ArrayNum,0,(ForAnyElementType *)&local_b98,
                       local_b98.Data.ArrayNum,&local_b98.Data.ArrayMax);
            memcpy(local_b98.Data.AllocatorInstance.Data,pFVar3,lVar37 * 2);
          }
          if (((uVar44 & 0x20) != 0) &&
             (uVar44 = uVar44 & 0xffffffdf, local_be0 = uVar44,
             local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_b30.Data.AllocatorInstance.Data);
          }
          if (((uVar44 & 0x10) != 0) &&
             (local_be0 = uVar44 & 0xffffffef,
             local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_948.Data.AllocatorInstance.Data);
          }
          local_ab8 = (ulonglong)(uint)((int)this_02->PropertyFlags & CPF_Deprecated);
          pUVar26 = FField::GetOwnerClass((FField *)this_02);
          pUVar25 = *(UClass **)&this->field_0x10;
          if ((((pUVar25->ClassFlags & CLASS_ConfigDoNotCheckDefaults) != CLASS_None) || (bVar11))
             || (bVar17 = true, pUVar26 == pUVar25)) {
            bVar17 = false;
          }
          pUVar25 = (UClass *)pUVar25->_padding_;
          if ((pUVar25->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar25);
          }
          bVar18 = false;
          local_b38 = (pUVar25->ClassDefaultObject).field0_0x0.DebugPtr;
          this_00 = (FProperty *)0x0;
          if ((*(ulonglong *)(this_02->_padding_ + 0x18) & 0x200000) != 0) {
            this_00 = this_02;
          }
          this_01 = (FProperty *)0x0;
          if ((*(ulonglong *)(this_02->_padding_ + 0x18) >> 0x2f & 1) != 0) {
            this_01 = this_02;
          }
          local_a80 = this_00;
          if ((this_00 == (FProperty *)0x0) && (this_01 == (FProperty *)0x0)) {
LAB_14210d9d2:
            pUVar39 = local_b38;
            memset(local_858,0,0x800);
            iVar31 = this_02->ArrayDim;
            iVar20 = 0;
            if (0 < iVar31) {
              do {
                if (iVar31 != 1) {
                  bVar18 = IsThisNotNull(this_02,"FField::GetName");
                  if (bVar18) {
                    ::FName::ToString((FName *)&this_02->_padding_,&local_ab0);
                  }
                  else {
                    ::FString::FString(&local_ab0,L"None");
                  }
                  TCString<wchar_t>::SprintfImpl(local_858,L"%s[%i]");
                  if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
                  }
                  ::FString::operator=(&local_bc0,local_858);
                }
                if ((local_ab8 != 0) ||
                   ((bVar17 &&
                    (bVar18 = FProperty::Identical_InContainer(this_02,this,pUVar39,iVar20,0),
                    bVar18)))) {
                  if (local_b78->bSaveToLayer == false) {
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bc0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bc0.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_980,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::ResetKeyInSection
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_b98);
                  }
                  else {
                    pUVar25 = FField::GetOwnerClass((FField *)this_02);
                    pFVar23 = UClass::GetConfigName(pUVar25,&local_8e8);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bc0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bc0.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_988,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::ResetKeyInSectionOfStaticLayer
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,pFVar23,&local_bd0,true);
                    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  local_b48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_b48.Data.ArrayNum = 0;
                  local_b48.Data.ArrayMax = 0;
                  if (((iVar20 < 0) || (this_02->ArrayDim <= iVar20)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2dd,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar18)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar31 = this_02->ElementSize;
                  iVar2 = this_02->Offset_Internal;
                  if (((iVar20 < 0) || (this_02->ArrayDim <= iVar20)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2dd,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar18)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FProperty::ExportText_Direct
                            (this_02,&local_b48,
                             &this->field_0x0 +
                             (longlong)this_02->Offset_Internal +
                             (longlong)this_02->ElementSize * (longlong)iVar20,
                             &this->field_0x0 +
                             (longlong)iVar2 + (longlong)iVar31 * (longlong)iVar20,this,0x20,
                             (UObject *)0x0);
                  if (local_b78->bSaveToLayer == false) {
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_b48.Data.ArrayNum != 0) {
                      FVar30.Data = local_b48.Data.AllocatorInstance.Data;
                    }
                    FVar42.Data = (FScriptContainerElement *)L"";
                    if (local_bc0.Data.ArrayNum != 0) {
                      FVar42.Data = local_bc0.Data.AllocatorInstance.Data;
                    }
                    FVar35.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar35.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::SetString
                              (local_bd8,(wchar_t *)FVar35.Data,(wchar_t *)FVar42.Data,
                               (wchar_t *)FVar30.Data,&local_b98);
                  }
                  else {
                    pUVar25 = FField::GetOwnerClass((FField *)this_02);
                    pFVar23 = UClass::GetConfigName(pUVar25,&local_8f8);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_b48.Data.ArrayNum != 0) {
                      FVar30.Data = local_b48.Data.AllocatorInstance.Data;
                    }
                    ::FString::FString(&local_9e0,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bc0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bc0.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_990,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::SetInSectionOfStaticLayer
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_9e0,pFVar23,
                               &local_bd0,true);
                    if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
                    }
                    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
                    }
                  }
                  if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b48.Data.AllocatorInstance.Data);
                  }
                }
                iVar31 = this_02->ArrayDim;
                iVar20 = iVar20 + 1;
                pUVar39 = local_b38;
              } while (iVar20 < iVar31);
            }
          }
          else {
            if (local_b78->bSaveToLayer == false) {
              FVar30.Data = (FScriptContainerElement *)L"";
              if (local_bf0.Data.ArrayNum != 0) {
                FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
              }
              pFVar28 = FConfigCacheIni::GetSection
                                  (local_bd8,(wchar_t *)FVar30.Data,true,&local_b98);
              ::FString::PrintfImpl(&local_b08,L"%s%s");
              if (pFVar28 != (FConfigSection *)0x0) {
                FVar30.Data = (FScriptContainerElement *)L"";
                if (local_b08.Data.ArrayNum != 0) {
                  FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                }
                pFVar21 = ::FName::FName(&local_9b0,(wchar_t *)FVar30.Data);
                FVar30.Data = (FScriptContainerElement *)L"";
                if (local_bf0.Data.ArrayNum != 0) {
                  FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                }
                FConfigCacheIni::ResetKeyInSection
                          (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_b98);
              }
              FVar30.Data = local_b08.Data.AllocatorInstance.Data;
              if ((local_ab8 == 0) &&
                 ((!bVar17 ||
                  (bVar19 = FProperty::Identical_InContainer(this_02,this,local_b38,0,0),
                  FVar30.Data = local_b08.Data.AllocatorInstance.Data, !bVar19)))) {
                if (this_00 == (FProperty *)0x0) {
                  FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                  if (this_01 != (FProperty *)0x0) {
                    local_888.Set = FProperty::ContainerVoidPtrToValuePtrInternal(this_01,this,0);
                    local_888.ElementProp = (FProperty *)this_01[1]._padding_;
                    local_888.SetLayout.SparseArrayLayout.Size = (int)this_01[1]._padding_;
                    local_888.SetLayout._0_8_ = this_01[1]._padding_;
                    local_888.SetLayout._8_8_ = this_01[1]._padding_;
                    if ((local_888.ElementProp == (FProperty *)0x0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ElementProp",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x1653,L""), bVar19)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                    if (1 < ((local_888.Set)->Elements).Data.ArrayNum -
                            ((local_888.Set)->Elements).NumFreeIndices) {
                      local_b18.Container = &local_888;
                      local_b18.InternalIndex = -1;
                      local_b18.LogicalIndex = -1;
                      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_b18);
                      pFVar43 = local_bd8;
                      while( true ) {
                        uVar44 = local_b18.InternalIndex;
                        pTVar8 = (local_b18.Container)->Set;
                        this_02 = local_b70;
                        if ((local_b18.InternalIndex < 0) ||
                           ((pTVar8->Elements).AllocationFlags.NumBits <= local_b18.InternalIndex))
                        break;
                        if (((pTVar8->Elements).AllocationFlags.NumBits <= local_b18.InternalIndex)
                           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValidIndex(Index)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x8c4,L""), bVar18)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        FVar9 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                        FVar41 = (ForElementType<unsigned_int>)&(pTVar8->Elements).AllocationFlags;
                        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
                          FVar41 = FVar9;
                        }
                        uVar36 = uVar44 & 0x1f;
                        if ((int)uVar44 < 0) {
                          uVar44 = uVar44 + 0x1f;
                        }
                        this_02 = local_b70;
                        if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar44 >> 5) * 4) >>
                             uVar36 & 1) == 0) break;
                        uVar13 = local_b18.Container._0_4_;
                        uVar14 = local_b18.Container._4_4_;
                        iVar31 = local_b18.InternalIndex;
                        iVar20 = local_b18.LogicalIndex;
                        plVar7 = (longlong *)this_01[1]._padding_;
                        local_918.Container._0_4_ = local_b18.Container._0_4_;
                        local_918.Container._4_4_ = local_b18.Container._4_4_;
                        local_918.InternalIndex = local_b18.InternalIndex;
                        local_918.LogicalIndex = local_b18.LogicalIndex;
                        local_ac8 = (wchar_t *)0x0;
                        local_ac0 = 0;
                        FScriptSetHelper::GetElementPtr(&local_888,&local_918);
                        local_908.Container._0_4_ = uVar13;
                        local_908.Container._4_4_ = uVar14;
                        local_908.InternalIndex = iVar31;
                        local_908.LogicalIndex = iVar20;
                        puVar29 = FScriptSetHelper::GetElementPtr(&local_888,&local_908);
                        (**(code **)(*plVar7 + 0xe0))(plVar7,&local_ac8,puVar29,0);
                        pwVar34 = L"";
                        if ((int)local_ac0 != 0) {
                          pwVar34 = local_ac8;
                        }
                        ::FString::FString(&local_9f0,pwVar34);
                        FVar30.Data = (FScriptContainerElement *)L"";
                        if (local_b08.Data.ArrayNum != 0) {
                          FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                        }
                        pFVar21 = ::FName::FName(&local_998,(wchar_t *)FVar30.Data);
                        FVar30.Data = (FScriptContainerElement *)L"";
                        if (local_bf0.Data.ArrayNum != 0) {
                          FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                        }
                        FConfigCacheIni::AddToSection
                                  (pFVar43,(wchar_t *)FVar30.Data,*pFVar21,&local_9f0,&local_b98);
                        if (local_9f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_9f0.Data.AllocatorInstance.Data);
                        }
                        if (local_ac8 != (wchar_t *)0x0) {
                          FMemory::Free(local_ac8);
                        }
                        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_b18);
                      }
                      goto LAB_14210d9b4;
                    }
                  }
                }
                else {
                  pvVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,this,0);
                  lVar37 = this_00[1]._padding_;
                  uVar44 = (**(code **)(*(longlong *)this_00[1]._padding_ + 0x168))();
                  FScriptArrayHelper::FScriptArrayHelper
                            (&local_8d0,Internal,(FProperty *)this_00[1]._padding_,pvVar27,
                             ((FProperty *)this_00[1]._padding_)->ElementSize,uVar44,
                             (EArrayPropertyFlags)lVar37);
                  FVar15 = local_8d0.field1_0x8;
                  lVar37 = (longlong)local_8d0.ElementSize;
                  EVar40 = local_8d0.ArrayFlags & UsesMemoryImageAllocator;
                  for (iVar31 = 0; this_02 = local_b70, puVar38 = (undefined1 *)0x0,
                      iVar31 < (FVar15.FreezableArray)->ArrayNum; iVar31 = iVar31 + 1) {
                    local_ad8 = (wchar_t *)0x0;
                    local_ad0 = 0;
                    if ((FVar15.FreezableArray)->ArrayNum != 0) {
                      puVar38 = (undefined1 *)(FVar15.FreezableArray)->_padding_;
                      if ((EVar40 != None) && (((ulonglong)puVar38 & 1) != 0)) {
                        puVar38 = &(FVar15.HeapArray)->field_0x0 + ((longlong)puVar38 >> 0x18);
                      }
                      puVar38 = puVar38 + iVar31 * lVar37;
                    }
                    (**(code **)(*(longlong *)this_00[1]._padding_ + 0xe0))
                              ((longlong *)this_00[1]._padding_,&local_ad8,puVar38,0);
                    pwVar34 = L"";
                    if ((int)local_ad0 != 0) {
                      pwVar34 = local_ad8;
                    }
                    ::FString::FString(&local_a10,pwVar34);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_b08.Data.ArrayNum != 0) {
                      FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_9a8,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::AddToSection
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_a10,&local_b98);
                    if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a10.Data.AllocatorInstance.Data);
                    }
                    if (local_ad8 != (wchar_t *)0x0) {
                      FMemory::Free(local_ad8);
                    }
                  }
                  this = local_ba0;
                  if (((FVar15.FreezableArray)->ArrayNum == 0) && (bVar16)) {
                    ::FString::PrintfImpl(&local_a60,L"!%s");
                    ::FString::FString(&local_a00,L"__ClearArray__");
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_a60.Data.ArrayNum != 0) {
                      FVar30.Data = local_a60.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_9a0,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::AddToSection
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_a00,&local_b98);
                    if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a00.Data.AllocatorInstance.Data);
                    }
                    this = local_ba0;
                    if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a60.Data.AllocatorInstance.Data);
                      this = local_ba0;
                    }
                  }
LAB_14210d9b4:
                  bVar18 = true;
                  FVar30.Data = local_b08.Data.AllocatorInstance.Data;
                }
              }
            }
            else {
              local_bb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_bb0.ArrayNum = 0;
              local_bb0.ArrayMax = 0;
              if (this_00 == (FProperty *)0x0) {
                if (this_01 != (FProperty *)0x0) {
                  local_8b0.Set = FProperty::ContainerVoidPtrToValuePtrInternal(this_01,this,0);
                  local_8b0.ElementProp = (FProperty *)this_01[1]._padding_;
                  local_8b0.SetLayout.SparseArrayLayout.Size = (int)this_01[1]._padding_;
                  local_8b0.SetLayout._0_8_ = this_01[1]._padding_;
                  local_8b0.SetLayout._8_8_ = this_01[1]._padding_;
                  if ((local_8b0.ElementProp == (FProperty *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ElementProp",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x1653,L""), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar31 = ((local_8b0.Set)->Elements).Data.ArrayNum -
                           ((local_8b0.Set)->Elements).NumFreeIndices;
                  if (1 < iVar31) {
                    TArray<FString,TSizedDefaultAllocator<32>_>::AddDefaulted(&local_bb0,iVar31);
                    local_b88.Container = &local_8b0;
                    local_b88.InternalIndex = -1;
                    local_b88.LogicalIndex = -1;
                    uVar44 = 0;
                    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_b88);
                    while( true ) {
                      uVar36 = local_b88.InternalIndex;
                      pTVar8 = (local_b88.Container)->Set;
                      if ((local_b88.InternalIndex < 0) ||
                         ((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex))
                      break;
                      if (((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                              ,0x8c4,L""), bVar18)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      FVar9 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                      FVar41 = (ForElementType<unsigned_int>)&(pTVar8->Elements).AllocationFlags;
                      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
                        FVar41 = FVar9;
                      }
                      uVar32 = uVar36 & 0x1f;
                      if ((int)uVar36 < 0) {
                        uVar36 = uVar36 + 0x1f;
                      }
                      if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar36 >> 5) * 4) >> uVar32
                          & 1) == 0) break;
                      uVar36 = local_b88.InternalIndex;
                      plVar7 = (longlong *)this_01[1]._padding_;
                      pTVar8 = (local_b88.Container)->Set;
                      if ((local_b88.InternalIndex < 0) ||
                         ((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex)) {
LAB_14210d23c:
                        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Iterator",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x16bb,
                                            L"Invalid Iterator. Test Iterator before calling this method."
                                           );
                        if (bVar18) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                      }
                      else {
                        if (((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex)
                           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValidIndex(Index)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x8c4,L""), bVar18)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        FVar9 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                        FVar41 = (ForElementType<unsigned_int>)&(pTVar8->Elements).AllocationFlags;
                        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
                          FVar41 = FVar9;
                        }
                        uVar32 = uVar36 & 0x1f;
                        if ((int)uVar36 < 0) {
                          uVar36 = uVar36 + 0x1f;
                        }
                        if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar36 >> 5) * 4) >>
                             uVar32 & 1) == 0) goto LAB_14210d23c;
                      }
                      iVar31 = local_b88.InternalIndex;
                      pTVar8 = (local_b88.Container)->Set;
                      if ((local_b88.InternalIndex < 0) ||
                         ((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex)) {
LAB_14210d2ee:
                        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Iterator",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x16bb,
                                            L"Invalid Iterator. Test Iterator before calling this method."
                                           );
                        if (bVar18) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                      }
                      else {
                        if (((pTVar8->Elements).AllocationFlags.NumBits <= local_b88.InternalIndex)
                           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValidIndex(Index)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x8c4,L""), bVar18)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        FVar9 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                        FVar41 = (ForElementType<unsigned_int>)&(pTVar8->Elements).AllocationFlags;
                        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
                          FVar41 = FVar9;
                        }
                        uVar36 = iVar31;
                        if (iVar31 < 0) {
                          uVar36 = iVar31 + 0x1f;
                        }
                        if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar36 >> 5) * 4) >>
                             (iVar31 & 0x1fU) & 1) == 0) goto LAB_14210d2ee;
                      }
                      iVar31 = local_8b0.SetLayout.SparseArrayLayout.Size * iVar31;
                      lVar37 = ((local_8b0.Set)->Elements).Data._padding_;
                      uVar36 = 0;
                      if ((int)uVar44 < local_bb0.ArrayNum) {
                        uVar36 = ~uVar44 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      (**(code **)(*plVar7 + 0xe0))
                                (plVar7,local_bb0.AllocatorInstance.Data +
                                        (longlong)(int)uVar44 * 0x10,iVar31 + lVar37,0);
                      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_b88);
                      uVar44 = uVar44 + 1;
                    }
                    this_02 = local_b70;
                    pUVar25 = FField::GetOwnerClass((FField *)local_b70);
                    pFVar23 = UClass::GetConfigName(pUVar25,&local_928);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bc0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bc0.Data.AllocatorInstance.Data;
                    }
                    pFVar21 = ::FName::FName(&local_9b8,(wchar_t *)FVar30.Data);
                    FVar30.Data = (FScriptContainerElement *)L"";
                    if (local_bf0.Data.ArrayNum != 0) {
                      FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::SetArrayInSectionOfStaticLayer
                              (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_bb0,false,pFVar23,
                               &local_bd0,true);
                    FVar30.Data = local_928.Data.AllocatorInstance.Data;
                    goto LAB_14210d446;
                  }
                }
              }
              else {
                pvVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,this,0);
                lVar37 = this_00[1]._padding_;
                uVar44 = (**(code **)(*(longlong *)this_00[1]._padding_ + 0x168))();
                FScriptArrayHelper::FScriptArrayHelper
                          (&local_a50,Internal,(FProperty *)this_00[1]._padding_,pvVar27,
                           ((FProperty *)this_00[1]._padding_)->ElementSize,uVar44,
                           (EArrayPropertyFlags)lVar37);
                EVar40 = local_a50.ArrayFlags;
                FVar15 = local_a50.field1_0x8;
                iVar31 = (local_a50.field1_0x8.FreezableArray)->ArrayNum;
                iVar20 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,iVar31,&local_bb0.AllocatorInstance,&local_bb0.ArrayNum,
                                    &local_bb0.ArrayMax);
                memset(local_bb0.AllocatorInstance.Data + (longlong)iVar20 * 0x10,0,
                       (longlong)iVar31 << 4);
                iVar31 = local_a50.ElementSize;
                for (uVar44 = 0; this_02 = local_b70,
                    (int)uVar44 < (FVar15.FreezableArray)->ArrayNum; uVar44 = uVar44 + 1) {
                  plVar7 = (longlong *)this_00[1]._padding_;
                  puVar38 = (undefined1 *)0x0;
                  if ((FVar15.FreezableArray)->ArrayNum != 0) {
                    puVar38 = (undefined1 *)(FVar15.FreezableArray)->_padding_;
                    if (((EVar40 & UsesMemoryImageAllocator) != None) &&
                       (((ulonglong)puVar38 & 1) != 0)) {
                      puVar38 = &(FVar15.HeapArray)->field_0x0 + ((longlong)puVar38 >> 0x18);
                    }
                    puVar38 = puVar38 + (longlong)iVar31 * (longlong)(int)uVar44;
                  }
                  uVar36 = 0;
                  if ((int)uVar44 < local_bb0.ArrayNum) {
                    uVar36 = ~uVar44 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  (**(code **)(*plVar7 + 0xe0))
                            (plVar7,local_bb0.AllocatorInstance.Data + (longlong)(int)uVar44 * 0x10,
                             puVar38,0);
                  this_00 = local_a80;
                }
                pUVar25 = FField::GetOwnerClass((FField *)local_b70);
                pFVar23 = UClass::GetConfigName(pUVar25,&local_938);
                FVar30.Data = (FScriptContainerElement *)L"";
                if (local_bc0.Data.ArrayNum != 0) {
                  FVar30.Data = local_bc0.Data.AllocatorInstance.Data;
                }
                pFVar21 = ::FName::FName(&local_9c0,(wchar_t *)FVar30.Data);
                FVar30.Data = (FScriptContainerElement *)L"";
                if (local_bf0.Data.ArrayNum != 0) {
                  FVar30.Data = local_bf0.Data.AllocatorInstance.Data;
                }
                FConfigCacheIni::SetArrayInSectionOfStaticLayer
                          (local_bd8,(wchar_t *)FVar30.Data,*pFVar21,&local_bb0,false,pFVar23,
                           &local_bd0,true);
                FVar30.Data = local_938.Data.AllocatorInstance.Data;
LAB_14210d446:
                if (FVar30.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar30.Data);
                }
                bVar18 = true;
                this = local_ba0;
              }
              DestructItems<FString,int>
                        ((FString *)local_bb0.AllocatorInstance.Data,local_bb0.ArrayNum);
              FVar30.Data = local_bb0.AllocatorInstance.Data;
            }
            if (FVar30.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar30.Data);
            }
            if (!bVar18) goto LAB_14210d9d2;
          }
          if (bVar12) {
            pvVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_02,this,0);
            _Dst = FProperty::ContainerUObjectPtrToValuePtrInternal(this_02,local_a78,0);
            if (_Dst != pvVar27) {
              if (((uint)(int)this_02->PropertyFlags >> 0x1e & 1) == 0) {
                (**(code **)(this_02->_padding_ + 0xf0))(this_02,_Dst);
              }
              else {
                memcpy(_Dst,pvVar27,(longlong)this_02->ElementSize * (longlong)this_02->ArrayDim);
              }
            }
          }
          if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b98.Data.AllocatorInstance.Data);
          }
          param_1 = local_b78;
          if (local_bc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bc0.Data.AllocatorInstance.Data);
            param_1 = local_b78;
          }
        }
      }
      else {
        bVar17 = IsThisNotNull(this_02,"FField::GetFName");
        if (bVar17) {
          lVar37 = this_02->_padding_;
        }
        else {
          lVar37 = 0;
        }
        uVar44 = ::GetTypeHash((FNameEntryId)(uint)lVar37);
        if (*(int *)&(param_1->PropertyNames).Elements.field_0x8 !=
            *(int *)&(param_1->PropertyNames).Elements.field_0x34) {
          FVar4 = (param_1->PropertyNames).Hash.SecondaryData;
          FVar33 = (ForElementType<FSetElementId>)&(param_1->PropertyNames).Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar33 = FVar4;
          }
          iVar31 = *(int *)((longlong)FVar33 +
                           (ulonglong)
                           ((param_1->PropertyNames).HashSize - 1U &
                           (int)((ulonglong)lVar37 >> 0x20) + uVar44) * 4);
          if (iVar31 != -1) {
            lVar5 = *(longlong *)&(param_1->PropertyNames).Elements;
            do {
              if (*(longlong *)(lVar5 + (longlong)iVar31 * 0x10) == lVar37) goto LAB_14210cb79;
              iVar31 = *(int *)(lVar5 + 8 + (longlong)iVar31 * 0x10);
            } while (iVar31 != -1);
          }
        }
      }
      this_02 = this_02->PropertyLinkNext;
    } while (this_02 != (FProperty *)0x0);
    local_b70 = (FProperty *)0x0;
    pFVar43 = local_bd8;
  }
  if ((param_1->ConfigSystem == GConfig) || (local_bf5 != false)) {
    FVar30.Data = (FScriptContainerElement *)L"";
    if (local_bd0.Data.ArrayNum != 0) {
      FVar30.Data = local_bd0.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_9d0,(wchar_t *)FVar30.Data);
    FConfigCacheIni::Flush(pFVar43,local_bf5,&local_9d0);
    if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
  }
  if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveConfig @ 14210ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UObject::SaveConfig(UObject *this,ulong64 param_1,wchar_t *param_2,FConfigCacheIni *param_3,
                   bool param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [40];
  ForAnyElementType local_a0;
  undefined8 uStack_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 local_70;
  ForElementType<FSetElementId> FStack_68;
  ulonglong uStack_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c8._8_8_ = (FScriptContainerElement *)0x0;
  FStack_68.InlineData[0] = '\0';
  FStack_68.InlineData[1] = '\0';
  FStack_68.InlineData[2] = '\0';
  FStack_68.InlineData[3] = '\0';
  FStack_68._padding_ = 0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_90.AllocatorInstance.InlineData[0] = '\0';
  local_90.AllocatorInstance.InlineData[1] = '\0';
  local_90.AllocatorInstance.InlineData[2] = '\0';
  local_90.AllocatorInstance.InlineData[3] = '\0';
  local_90.AllocatorInstance.InlineData[4] = '\0';
  local_90.AllocatorInstance.InlineData[5] = '\0';
  local_90.AllocatorInstance.InlineData[6] = '\0';
  local_90.AllocatorInstance.InlineData[7] = '\0';
  local_90.AllocatorInstance.InlineData[8] = '\0';
  local_90.AllocatorInstance.InlineData[9] = '\0';
  local_90.AllocatorInstance.InlineData[10] = '\0';
  local_90.AllocatorInstance.InlineData[0xb] = '\0';
  local_90.AllocatorInstance.InlineData[0xc] = '\0';
  local_90.AllocatorInstance.InlineData[0xd] = '\0';
  local_90.AllocatorInstance.InlineData[0xe] = '\0';
  local_90.AllocatorInstance.InlineData[0xf] = '\0';
  local_c8._24_8_ = GConfig;
  local_90._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_70 = _UNK_150631d98;
  local_c8[0x20] = true;
  local_c8[0x21] = false;
  local_a0.Data = (FScriptContainerElement *)0x0;
  uStack_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FStack_68.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_58 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_c8._0_8_ = param_1;
  ::FString::operator=((FString *)(local_c8 + 8),param_2);
  local_c8[0x20] = param_4;
  local_c8._24_8_ = param_3;
  SaveConfig(this,(FSaveConfigContext *)local_c8);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  uStack_58 = uStack_58 & 0xffffffff00000000;
  if (FStack_68.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_68.SecondaryData);
  }
  uVar1 = uStack_98 >> 0x20;
  uStack_98 = uStack_98 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_a0,0,(int *)((longlong)&uStack_98 + 4));
  }
  iVar2 = local_90.MaxBits;
  local_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  return;
}

// Serialize @ 14210f270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::Serialize(UObject *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 14210f2e0

void __thiscall UObject::Serialize(UObject *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FArchive *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UClass *local_res8;
  FSlotBase local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1648,"UObject_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0x670);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1648);
  }
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  local_res20 = *(undefined8 *)&this->field_0x20;
  local_res8 = *(UClass **)&this->field_0x10;
  local_res18 = *(undefined8 *)&this->field_0x18;
  if (((uint)local_res8->_padding_ >> 10 & 1) != 0) {
    (**(code **)(*(longlong *)pFVar5 + 0x1b0))(pFVar5,local_res8);
    if ((((*(uint *)&this->field_0x8 & 0x10) == 0) &&
        ((local_res8->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0)) &&
       (0 < (int)local_res8->_padding_)) {
      (**(code **)(*(longlong *)pFVar5 + 0x1b0))
                (pFVar5,(local_res8->ClassDefaultObject).field0_0x0.DebugPtr);
    }
  }
  if (((pFVar5->field_0x28 & 5) == 0) && ((pFVar5->field_0x2b & 1) == 0)) {
    pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&local_res18);
    if ((pFVar5->field_0x2a & 0x10) == 0) {
      pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar1 + 0x168))(pFVar1,&local_res20);
    }
    if ((pFVar5->field_0x2a & 0x40) == 0) {
      pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar1 + 0x168))(pFVar1,&local_res8);
    }
  }
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  if (local_res8 != pUVar6) {
    if (((*(longlong *)&pFVar5->field_0x68 == 0) ||
        (*(longlong *)(*(longlong *)&pFVar5->field_0x68 + 0x10) == 0)) &&
       (((pFVar5->field_0x28 & 2) == 0 &&
        (((pFVar5->field_0x28 & 0x40) != 0 &&
         (FOverridableManager::OverridableManager == (FOverridableManager *)0x0)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverridableManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                         ,0x43,L"Expected the overridable manager to be created.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SerializeScriptProperties(this,(FStructuredArchiveSlot)local_res10.StructuredArchive);
  }
  FLazyObjectPtr::PossiblySerializeObjectGuid
            (this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  iVar8 = (int)*(short *)(*(longlong *)&this->field_0x10 + 0x5c);
  lVar7 = (longlong)(*(int *)(*(longlong *)&this->field_0x10 + 0x58) + -1 + iVar8 & -iVar8);
  (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,lVar7,lVar7);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SerializeScriptProperties @ 14210ffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::SerializeScriptProperties(UObject *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  SerializeScriptProperties(this,*(FStructuredArchiveSlot *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// SerializeScriptProperties @ 142110020

void __thiscall UObject::SerializeScriptProperties(UObject *this,FStructuredArchiveSlot param_1)

{
  UStruct *this_00;
  uint *puVar1;
  FArchive *pFVar2;
  UObject *pUVar3;
  UStruct *pUVar4;
  undefined1 local_res8 [8];
  FSlotBase local_res10;
  code *local_18;
  undefined1 *local_10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(*(longlong *)pFVar2 + 0x218))(pFVar2,this);
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    *(int *)&pFVar2->field_0x30 = *(int *)&pFVar2->field_0x30 + 1;
  }
  this_00 = *(UStruct **)&this->field_0x10;
  if (((pFVar2->field_0x28 & 5) == 0) || ((pFVar2->field_0x28 & 0x20) != 0)) {
    if ((*(int *)&pFVar2->field_0x34 == 0) || ((pFVar2->field_0x2c & 1) != 0)) {
      (**(code **)(this_00->_padding_ + 0x2d0))(this_00,local_res10.StructuredArchive,this);
    }
    else {
      pUVar3 = (UObject *)(**(code **)(*(longlong *)pFVar2 + 0x40))(pFVar2,this);
      if ((pUVar3 == (UObject *)0x0) && (pUVar3 = GetArchetype(this), pUVar3 == (UObject *)0x0)) {
        pUVar4 = (UStruct *)0x0;
      }
      else {
        pUVar4 = *(UStruct **)&pUVar3->field_0x10;
      }
      UStruct::SerializeBinEx
                (this_00,(FStructuredArchiveSlot)local_res10.StructuredArchive,this,pUVar3,pUVar4);
    }
  }
  else {
    pUVar3 = (UObject *)(**(code **)(*(longlong *)pFVar2 + 0x40))(pFVar2,this);
    if (pUVar3 == (UObject *)0x0) {
      pUVar3 = GetArchetype(this);
    }
    pUVar4 = this_00;
    if (((*(uint *)&this->field_0x8 & 0x10) != 0) &&
       ((*(uint *)&pFVar2->field_0x34 & 0x100000) == 0)) {
      pUVar4 = (this_00->SuperStruct).field0_0x0.DebugPtr;
    }
    (**(code **)(this_00->_padding_ + 0x2e0))
              (this_00,local_res10.StructuredArchive,this,pUVar4,pUVar3,0);
  }
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    *(int *)&pFVar2->field_0x30 = *(int *)&pFVar2->field_0x30 + -1;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x220))(pFVar2,this);
  return;
}

// SourceFileTagName @ 142110d70

FName * __cdecl UObject::SourceFileTagName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SourceFilePathName,"AssetImportData");
      _Init_thread_footer(&::_TSS0);
      return &SourceFilePathName;
    }
  }
  return &SourceFilePathName;
}

// TagSubobjects @ 142116a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::TagSubobjects(UObject *this,EObjectFlags param_1)

{
  UObjectBase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  undefined1 auStackY_e8 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  FReferenceFinder local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_98,&local_a8,this,false,true,true,true);
  FReferenceFinder::FindReferences(&local_98,this,(UObject *)0x0,(FProperty *)0x0);
  for (uVar5 = 0; -1 < (int)uVar5; uVar5 = uVar5 + 1) {
    if (local_a8.ArrayNum <= (int)uVar5) break;
    uVar3 = 0;
    if ((int)uVar5 < local_a8.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = *(UObjectBase **)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    if (this_00 != (UObjectBase *)0x0) {
      pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
        if (((param_1 & RF_MirroredGarbage) != RF_NoFlags) &&
           ((this_00->ObjectFlags & param_1 & RF_MirroredGarbage) != (param_1 & RF_MirroredGarbage))
           ) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x4b,
                             L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        UObjectBase::AtomicallySetFlags(this_00,param_1);
        (**(code **)(this_00->_padding_ + 0x1e0))(this_00,param_1);
      }
    }
  }
  FReferenceFinder::~FReferenceFinder(&local_98);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// TryUpdateDefaultConfigFile @ 1421175a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObject::TryUpdateDefaultConfigFile(UObject *this,FString *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (param_1->Data).ArrayNum;
  bVar3 = 1 < iVar1;
  if (bVar3) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    pFVar5 = &local_38;
  }
  else {
    pFVar5 = GetDefaultConfigFilename(this,&local_28);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar8 = (longlong)local_48.Data.ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar2,lVar8 * 2);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = FPaths::FileExists(&local_48);
  if (bVar3) {
    pIVar6 = IFileManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x30))(pIVar6,FVar7.Data);
    if (cVar4 != '\0') {
      if ((param_2) && (2 < (byte)LogObj._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      bVar3 = false;
      goto LAB_142117735;
    }
  }
  UpdateSingleSectionOfConfigFile(this,&local_48);
  bVar3 = true;
LAB_142117735:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// UpdateClassesExcludedFromDedicatedClient @ 1421181b0

void __cdecl
UObject::UpdateClassesExcludedFromDedicatedClient
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FClassExclusionData::UpdateExclusionList(&GDedicatedClientExclusionList,param_1,param_2);
  return;
}

// UpdateClassesExcludedFromDedicatedServer @ 1421181d0

void __cdecl
UObject::UpdateClassesExcludedFromDedicatedServer
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FClassExclusionData::UpdateExclusionList(&GDedicatedServerExclusionList,param_1,param_2);
  return;
}

// UpdateDefaultConfigFile @ 1421181f0

void __thiscall UObject::UpdateDefaultConfigFile(UObject *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 < 2) {
    pFVar2 = GetDefaultConfigFilename(this,&local_18);
    UpdateSingleSectionOfConfigFile(this,pFVar2);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_28.Data.ArrayNum = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    UpdateSingleSectionOfConfigFile(this,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateGlobalUserConfigFile @ 142118520

void __thiscall UObject::UpdateGlobalUserConfigFile(UObject *this)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_18);
  FWindowsPlatformProcess::UserSettingsDir();
  ::FString::PrintfImpl(&local_28,L"%sUnreal Engine/Engine/Config/User%s.ini");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UpdateSingleSectionOfConfigFile(this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateProjectUserConfigFile @ 1421185b0

void __thiscall UObject::UpdateProjectUserConfigFile(UObject *this)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_18);
  FPaths::ProjectConfigDir(&local_28);
  ::FString::PrintfImpl(&local_38,L"%sUser%s.ini");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UpdateSingleSectionOfConfigFile(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateSinglePropertyInConfigFile @ 142118670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObject::UpdateSinglePropertyInConfigFile(UObject *this,FProperty *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FFieldClass *pFVar3;
  void *_Src_00;
  code *pcVar4;
  bool bVar5;
  FFieldClass *pFVar6;
  FConfigFile *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  FName FVar14;
  undefined1 auStackY_4358 [32];
  FName local_4318;
  FName local_4310;
  int local_4308;
  int local_4304;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4300;
  FName local_42f0;
  undefined8 local_42e8;
  FString local_42e0;
  FConfigFile *local_42d0;
  FString local_42c8;
  initializer_list<FName> local_42b8;
  FString local_42a8;
  FString local_4298;
  FString local_4288;
  FString local_4278;
  undefined1 local_4268 [40];
  undefined1 local_4240 [24];
  undefined8 uStack_4228;
  void *local_4220;
  undefined8 uStack_4218;
  undefined8 local_4210;
  ForElementType<FSetElementId> FStack_4208;
  ulonglong uStack_41f8;
  ForAnyElementType local_41f0;
  undefined8 local_41e8;
  FConfigContext local_41d8;
  FConfigFile local_3fe8;
  FConfigCacheIni local_3ef8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14211868d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4358;
  if (GUseNewPropertySaving < 1) {
    pFVar6 = FArrayProperty::StaticClass();
    pwVar10 = L"";
    if ((pFVar6 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (FFieldClass *)param_1->_padding_;
    if (pFVar6->Id == CASTCLASS_None) {
      for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
        if (pFVar3 == pFVar6) {
          bVar5 = true;
          goto LAB_1421188d2;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar3->CastFlags & pFVar6->Id) != CASTCLASS_None;
    }
LAB_1421188d2:
    if (bVar5) {
      if (2 < (byte)LogObj._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
    }
    else {
      local_42e8 = 0;
      FConfigCacheIni::FConfigCacheIni(&local_3ef8,Temporary,(FName)0x0,false);
      pFVar7 = FConfigFile::FConfigFile(&local_3fe8);
      pFVar7 = FConfigCacheIni::Add(&local_3ef8,param_2,pFVar7);
      local_42d0 = pFVar7;
      FConfigFile::~FConfigFile(&local_3fe8);
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      SaveConfig(this,0x4000,pwVar9,&local_3ef8,true);
      local_4300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4300.ArrayNum = 0;
      local_4300.ArrayMax = 0;
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                  *)pFVar7,&local_4300);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if ((local_4300.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_4310.ComparisonIndex.Value = 0;
      local_4310.Number = 0;
      local_4308 = *(int *)(local_4300.AllocatorInstance.Data + 8);
      lVar12 = (longlong)local_4308;
      _Src_00 = *(void **)local_4300.AllocatorInstance.Data;
      if (local_4308 == 0) {
        local_4304 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_4308,0,(ForAnyElementType *)&local_4310,local_4308,&local_4304);
        memcpy((void *)local_4310,_Src_00,lVar12 * 2);
      }
      bVar5 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar5) {
        local_42f0 = (FName)param_1->_padding_;
      }
      else {
        local_42f0.ComparisonIndex.Value = 0;
        local_42f0.Number = 0;
      }
      ::FName::ToString(&local_42f0,&local_42c8);
      pFVar8 = GetFinalOverridePlatform(&local_4298,this);
      iVar2 = (pFVar8->Data).ArrayNum;
      iVar11 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar11 = 0;
      }
      if (local_4298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4298.Data.AllocatorInstance.Data);
      }
      if (iVar11 == 0) {
        pFVar8 = ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_4288);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_42a8,pwVar9);
        FConfigCacheIni::Flush(GConfig,false,&local_42a8);
        if (local_42a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_42a8.Data.AllocatorInstance.Data);
        }
        if (local_4288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4288.Data.AllocatorInstance.Data);
        }
      }
      FVar14 = (FName)L"";
      if (local_4308 != 0) {
        FVar14 = local_4310;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_42c8.Data.ArrayNum != 0) {
        FVar13.Data = local_42c8.Data.AllocatorInstance.Data;
      }
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      FConfigFile::UpdateSinglePropertyInSection
                (local_42d0,pwVar9,(wchar_t *)FVar13.Data,(wchar_t *)FVar14);
      if (iVar11 == 0) {
        local_42e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_42e0.Data.ArrayNum = 0;
        local_42e0.Data.ArrayMax = 0;
        FConfigContext::FConfigContext(&local_41d8,GConfig,true,&local_42e0,(FConfigFile *)0x0);
        if (local_42e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_42e0.Data.AllocatorInstance.Data);
        }
        local_41d8.bForceReload = true;
        local_41d8.bWriteDestIni = false;
        pFVar8 = ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_4278);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        FConfigContext::Load(&local_41d8,pwVar10);
        if (local_4278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4278.Data.AllocatorInstance.Data);
        }
        FConfigContext::~FConfigContext(&local_41d8);
      }
      if (local_42c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_42c8.Data.AllocatorInstance.Data);
      }
      if (local_4310 != (FName)0x0) {
        FMemory::Free((void *)local_4310);
      }
      DestructItems<FString,int>((FString *)local_4300.AllocatorInstance.Data,local_4300.ArrayNum);
      if (local_4300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4300.AllocatorInstance.Data);
      }
      FConfigCacheIni::~FConfigCacheIni(&local_3ef8);
    }
  }
  else {
    local_4268._24_8_ = GConfig;
    local_4268._0_8_ = CPF_Config;
    local_4268._8_8_ = (FScriptContainerElement *)0x0;
    local_4268._16_8_ = 0;
    local_4268[0x20] = true;
    local_4268[0x21] = false;
    local_4240._0_8_ = (FScriptContainerElement *)0x0;
    local_4240._8_8_ = 0;
    local_41f0.Data = (FScriptContainerElement *)0x0;
    local_41e8._0_4_ = 0;
    local_41e8._4_4_ = 0;
    local_4220 = (void *)0x0;
    FStack_4208.SecondaryData = (ForElementType<FSetElementId>)0x0;
    uStack_41f8 = 0;
    FStack_4208.InlineData[0] = '\0';
    FStack_4208.InlineData[1] = '\0';
    FStack_4208.InlineData[2] = '\0';
    FStack_4208.InlineData[3] = '\0';
    FStack_4208._padding_ = 0;
    local_4240._16_8_ = 0;
    uStack_4228 = 0;
    uStack_4218 = ___xmm_00000000ffffffff0000008000000000;
    local_4210 = _UNK_150631d98;
    if ((FString *)(local_4268 + 8) != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_4268._20_4_ = 0;
      local_4268._16_4_ = uVar1;
      if (uVar1 == 0) {
        local_4268._16_8_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)(local_4268 + 8),uVar1,
                   (int *)(local_4268 + 0x14));
        if (uVar1 != 0) {
          memcpy((void *)local_4268._8_8_,_Src,(longlong)(int)uVar1 * 2);
        }
      }
    }
    local_4268[0x21] = true;
    bVar5 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar5) {
      local_4318 = (FName)param_1->_padding_;
    }
    else {
      local_4318.ComparisonIndex.Value = 0;
      local_4318.Number = 0;
    }
    local_42b8._First = &local_4318;
    local_42b8._Last = &local_4310;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_4240,&local_42b8);
    SaveConfig(this,(FSaveConfigContext *)local_4268);
    if (local_41f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_41f0.Data);
    }
    uStack_41f8 = uStack_41f8 & 0xffffffff00000000;
    if (FStack_4208.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_4208.SecondaryData);
    }
    iVar2 = SUB84(local_4240._8_8_,4);
    local_4240._8_8_ = local_4240._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_4240,0,(int *)(local_4240 + 0xc));
    }
    uVar1 = uStack_4218._4_4_;
    local_4210 = 0xffffffff;
    uStack_4218 = (ulonglong)uStack_4218._4_4_ << 0x20;
    if (0x80 < uVar1) {
      uStack_4218 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_4240 + 0x10),0);
    }
    if (local_4220 != (void *)0x0) {
      FMemory::Free(local_4220);
    }
    if ((FScriptContainerElement *)local_4240._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4240._0_8_);
    }
    if ((FScriptContainerElement *)local_4268._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4268._8_8_);
    }
  }
  return;
}

// UpdateSingleSectionOfConfigFile @ 142118c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObject::UpdateSingleSectionOfConfigFile(UObject *this,FString *param_1)

{
  int iVar1;
  FConfigFile *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStackY_4148 [32];
  FString local_4118;
  FString local_4108;
  FString local_40f8;
  FConfigContext local_40e8;
  FConfigCacheIni local_3ef8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142118c62;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4148;
  local_4118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FConfigCacheIni::FConfigCacheIni(&local_3ef8,Temporary,(FName)0x0,false);
  pFVar2 = FConfigFile::FConfigFile((FConfigFile *)&local_40e8);
  pFVar2 = FConfigCacheIni::Add(&local_3ef8,param_1,pFVar2);
  FConfigFile::~FConfigFile((FConfigFile *)&local_40e8);
  pwVar5 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  SaveConfig(this,0x4000,pwVar7,&local_3ef8,true);
  GetFinalOverridePlatform(&local_4118,this);
  iVar8 = local_4118.Data.ArrayNum + -1;
  if (local_4118.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    pFVar3 = ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_40f8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_4108,pwVar7);
    FConfigCacheIni::Flush(GConfig,false,&local_4108);
    if (local_4108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4108.Data.AllocatorInstance.Data);
    }
    if (local_40f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40f8.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = local_4118.Data.ArrayNum + -1;
  if (local_4118.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  FVar6.Data = (FScriptContainerElement *)0x0;
  if ((iVar1 != 0) && (FVar6.Data = (FScriptContainerElement *)L"", local_4118.Data.ArrayNum != 0))
  {
    FVar6.Data = local_4118.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_40f8);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FConfigFile::UpdateSections(pFVar2,pwVar4,pwVar7,(wchar_t *)FVar6.Data);
  if (local_40f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40f8.Data.AllocatorInstance.Data);
  }
  if (iVar8 == 0) {
    local_4108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4108.Data.ArrayNum = 0;
    local_4108.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_40e8,GConfig,true,&local_4108,(FConfigFile *)0x0);
    if (local_4108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4108.Data.AllocatorInstance.Data);
    }
    local_40e8.bForceReload = true;
    local_40e8.bWriteDestIni = false;
    pFVar3 = ::FName::ToString((FName *)(*(longlong *)&this->field_0x10 + 0xe8),&local_40f8);
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    FConfigContext::Load(&local_40e8,pwVar5);
    if (local_40f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40f8.Data.AllocatorInstance.Data);
    }
    FConfigContext::~FConfigContext(&local_40e8);
  }
  if (local_4118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4118.Data.AllocatorInstance.Data);
  }
  FConfigCacheIni::~FConfigCacheIni(&local_3ef8);
  return;
}

// execUndefined @ 1421f3d00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execUndefined(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  uchar *puVar9;
  FString local_78;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pUVar1 = param_2->Node;
  local_68.Object = (FCulture *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pUVar1 == (UFunction *)0x0) {
    puVar9 = (uchar *)0x0;
  }
  else {
    if ((int)pUVar1->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar9 = param_2->Code + (-1 - pUVar1->_padding_);
  }
  pFVar4 = FText::AsNumber(&local_38,(ulong64)puVar9,(FNumberFormattingOptions *)0x0,&local_68);
  ::FString::PrintfImpl(&local_78,L"0x%02X");
  pFVar5 = FText::FromString(&local_28,&local_78);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ScriptCore",L"UndefinedOpcode",
                      L"Encountered an undefined opcode ({0}) at byte offset {1}. The compiler may have generated an instruction sequence that was unexpected or incomplete."
                     );
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
  FText::Format<FText,FText>(&local_58,pFVar7,pFVar5,pFVar4);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pFVar8 = FText::ToString(&local_58);
  FOutputDevice::Log((FOutputDevice *)param_2,Error,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// CallFunction @ 142204a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObject::CallFunction(UObject *this,FFrame *param_1,void *param_2,UFunction *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var8;
  FOutParmRec *pFVar9;
  longlong lVar10;
  code *pcVar11;
  FField *pFVar12;
  void *pvVar13;
  bool bVar14;
  uint uVar15;
  TEventRef<unsigned_int> TVar16;
  UPackage *pUVar17;
  ulonglong uVar18;
  UFunction *pUVar19;
  FWriteBuffer *pFVar20;
  ulonglong uVar21;
  UFunction *pUVar22;
  ulonglong uVar23;
  UObject *pUVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uchar *puVar27;
  UFunction *pUVar28;
  char cVar29;
  undefined1 auStackY_168 [32];
  char acStack_139 [5];
  uint local_134;
  undefined1 local_130 [8];
  UObject *local_128;
  TFieldIterator<FProperty> local_120;
  void *local_108;
  FName local_100;
  byte local_f8;
  FName local_f0;
  byte local_e8;
  FName local_e0;
  byte local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  UFunction *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  UFunction *local_98;
  FMemScope local_90;
  FMemScope local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  undefined4 *local_68;
  longlong local_60;
  ulonglong local_58;
  
  puVar25 = auStackY_168;
  puVar26 = auStackY_168;
  local_58 = __security_cookie.value ^ (ulonglong)(acStack_139 + 1);
  pUVar28 = (UFunction *)0x0;
  pUVar22 = pUVar28;
  if ((int)(uint)param_1->DepthCounter <= GMaxFunctionStatDepth) {
    pUVar22 = param_3;
  }
  local_128 = this;
  local_108 = param_2;
  local_b8 = param_3;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_e0,(UObjectBaseUtility *)pUVar22);
  pUVar22 = pUVar28;
  if (GVerboseScriptStats != 0) {
    pUVar22 = (UFunction *)this;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_f0,(UObjectBaseUtility *)pUVar22);
  FLLMScope::FLLMScope((FLLMScope *)(local_130 + 4),UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_88,UObject,true);
  uVar23 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1102,L"UObject/UObjectInternals");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)local_130,LLMScope_Name1102,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name1102,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_d0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_d0;
  }
  else {
    local_b0 = *(undefined8 *)&this->field_0x18;
    TVar16 = FStringTrace::GetNameRef(&local_80);
  }
  uVar5 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_c8 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_c8;
  }
  else {
    local_a8 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
    TVar16 = FStringTrace::GetNameRef(&local_78);
  }
  uVar6 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_c0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_c0;
  }
  else {
    pUVar17 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    local_a0 = pUVar17->_padding_;
    TVar16 = FStringTrace::GetNameRef(&local_70);
  }
  uVar7 = *(undefined8 *)TVar16;
  cVar29 = '\0';
  acStack_139[2] = '\0';
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_68);
    cVar29 = '\x01';
    acStack_139[2] = '\x01';
    *local_68 = (int)uVar5;
    local_68[1] = (int)uVar6;
    local_68[2] = (int)uVar7;
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
  }
  pUVar22 = local_b8;
  pUVar24 = local_128;
  if ((local_b8->FunctionFlags >> 10 & 1) == 0) {
    ProcessScriptFunction<void_(__cdecl*)(UObject_*,FFrame_&,void_*)>
              (local_128,local_b8,param_1,local_108,ProcessInternal);
  }
  else {
    puVar26 = auStackY_168;
    if ((local_b8->FunctionFlags &
        (FUNC_NetClient|FUNC_NetServer|FUNC_NetMulticast|FUNC_NetResponse|FUNC_NetRequest|
         FUNC_NetReliable|FUNC_Net|FUNC_BlueprintCosmetic|FUNC_BlueprintAuthorityOnly)) != FUNC_None
       ) {
      uVar15 = (**(code **)(*(longlong *)local_128 + 0x268))(local_128,local_b8,param_1);
      pUVar19 = pUVar28;
      puVar26 = auStackY_168;
      if ((uVar15 & 1) != 0) {
        uVar2 = pUVar22->ParmsSize;
        uVar23 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          sVar3 = *(short *)((longlong)&pUVar22->_padding_ + 4);
          if (sVar3 < 0x11) {
            uVar21 = uVar23 + 0x1e;
            if (uVar21 <= uVar23 + 0xf) {
              uVar21 = 0xffffffffffffff0;
            }
            puVar25 = auStackY_168 + -(uVar21 & 0xfffffffffffffff0);
            pUVar19 = (UFunction *)(local_130 + -(uVar21 & 0xfffffffffffffff0));
          }
          else {
            uVar18 = (ulonglong)(int)((uVar2 - 1) + (int)sVar3);
            uVar21 = uVar18 + 0xf;
            if (uVar21 <= uVar18) {
              uVar21 = 0xffffffffffffff0;
            }
            puVar25 = auStackY_168 + -(uVar21 & 0xfffffffffffffff0);
            pUVar19 = (UFunction *)
                      ((ulonglong)(acStack_139 + (longlong)sVar3 + -(uVar21 & 0xfffffffffffffff0)) &
                      (longlong)(int)~((int)sVar3 - 1U));
          }
        }
        local_98 = (UFunction *)param_1->Code;
        *(undefined8 *)(puVar25 + -8) = 0x142204d81;
        memset(pUVar19,0,uVar23);
        local_120.Field = (FField *)pUVar22->_padding_;
        local_120.Struct = (UStruct *)pUVar22;
        local_120.InterfaceIndex = -1;
        local_120.bIncludeSuper = true;
        local_120.bIncludeDeprecated = true;
        local_120.bIncludeInterface = false;
        *(undefined8 *)(puVar25 + -8) = 0x142204da7;
        TFieldIterator<FProperty>::IterateToNext(&local_120);
        local_134 = uVar15;
        pUVar24 = local_128;
        pFVar12 = local_120.Field;
        while ((local_128 = pUVar24, local_120.Field = pFVar12, pFVar12 != (FField *)0x0 &&
               (pUVar22 = local_b8, cVar29 = acStack_139[2],
               ((ulonglong)pFVar12[1].ClassPrivate & 0x480) == 0x80))) {
          iVar4 = (int)pFVar12[1]._padding_;
          if (iVar4 < 1) {
            *(int *)(puVar25 + 0x28) = iVar4;
            *(undefined4 *)(puVar25 + 0x20) = 0;
            *(undefined8 *)(puVar25 + -8) = 0x142204e08;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar14) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (pUVar19 == (UFunction *)0x0) {
            *(undefined8 *)(puVar25 + -8) = 0x142204e37;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar14) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          puVar27 = (uchar *)((longlong)&pUVar19->_padding_ +
                             (longlong)*(int *)((longlong)&pFVar12[1].Owner.Container + 4));
          if (((pFVar12 == (FField *)0x0) ||
              (((uint)(int)pFVar12->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) ||
             ((int)pFVar12[1]._padding_ != 1)) {
            bVar1 = *param_1->Code;
            param_1->Code = param_1->Code + 1;
            p_Var8 = GNatives.Elements[bVar1];
            pUVar24 = param_1->Object;
            *(undefined8 *)(puVar25 + -8) = 0x142204f00;
            (*p_Var8)(pUVar24,param_1,puVar27);
          }
          else {
            acStack_139[1] = '\0';
            bVar1 = *param_1->Code;
            param_1->Code = param_1->Code + 1;
            p_Var8 = GNatives.Elements[bVar1];
            pUVar24 = param_1->Object;
            *(undefined8 *)(puVar25 + -8) = 0x142204e93;
            (*p_Var8)(pUVar24,param_1,acStack_139 + 1);
            if (acStack_139[1] != '\0') {
              if (*(char *)&pFVar12[2].Owner.Container == '\0') {
                *(undefined8 *)(puVar25 + -8) = 0x142204ec2;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FieldSize != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0xa61,L"");
                if (bVar14) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              bVar1 = *(byte *)((longlong)&pFVar12[2].Owner.Container + 1);
              puVar27[bVar1] =
                   ~*(byte *)((longlong)&pFVar12[2].Owner.Container + 3) & puVar27[bVar1] |
                   *(byte *)((longlong)&pFVar12[2].Owner.Container + 2);
            }
          }
          local_120.Field = pFVar12->Next;
          *(undefined8 *)(puVar25 + -8) = 0x142204f11;
          TFieldIterator<FProperty>::IterateToNext(&local_120);
          cVar29 = acStack_139[2];
          pUVar24 = local_128;
          pFVar12 = local_120.Field;
          pUVar22 = local_b8;
        }
        pFVar9 = param_1->OutParms;
        *(FFrame **)(puVar25 + 0x20) = param_1;
        pcVar11 = *(code **)(*(longlong *)pUVar24 + 0x270);
        *(undefined8 *)(puVar25 + -8) = 0x142204f4c;
        (*pcVar11)(pUVar24,pUVar22,pUVar19,pFVar9);
        uVar23 = (ulonglong)_tls_index;
        pUVar19 = local_98;
        puVar26 = puVar25;
        uVar15 = local_134;
      }
      pvVar13 = local_108;
      if ((uVar15 & 2) == 0) {
        *(undefined8 *)(puVar26 + -8) = 0x142204fdf;
        SkipFunction(pUVar24,param_1,pvVar13,pUVar22);
        goto LAB_142205000;
      }
      if (pUVar19 != (UFunction *)0x0) {
        param_1->Code = (uchar *)pUVar19;
      }
    }
    if (GVerboseScriptStats != 0) {
      pUVar28 = (UFunction *)param_1->Object;
    }
    *(undefined8 *)(puVar26 + -8) = 0x142204f84;
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_100,(UObjectBaseUtility *)pUVar28);
    pvVar13 = local_108;
    pUVar24 = local_128;
    *(undefined8 *)(puVar26 + -8) = 0x142204f97;
    UFunction::Invoke(pUVar22,pUVar24,param_1,pvVar13);
    if ((local_f8 & 1) != 0) {
      *(undefined8 *)(puVar26 + -8) = 0x142204fa4;
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_f8 & 2) != 0) {
      *(undefined8 *)(puVar26 + -8) = 0x142204fb1;
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_f8 & 4) != 0) {
      *(undefined8 *)(puVar26 + -8) = 0x142204fc7;
      FThreadStats::AddMessage(local_100,CycleScopeEnd);
    }
    local_f8 = 0;
  }
LAB_142205000:
  if (cVar29 != '\0') {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8);
    if (*(char *)(lVar10 + 0x9d48) == '\0') {
      *(undefined8 *)(puVar26 + -8) = 0x142205025;
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar10 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      *(undefined8 *)(puVar26 + -8) = 0x14220503d;
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  *(undefined8 *)(puVar26 + -8) = 0x142205060;
  FMemScope::~FMemScope(&local_90);
  *(undefined8 *)(puVar26 + -8) = 0x142205069;
  FLLMScope::~FLLMScope((FLLMScope *)local_130);
  *(undefined8 *)(puVar26 + -8) = 0x142205075;
  FMemScope::~FMemScope(&local_88);
  *(undefined8 *)(puVar26 + -8) = 0x14220507e;
  FLLMScope::~FLLMScope((FLLMScope *)(local_130 + 4));
  if ((local_e8 & 1) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x14220508b;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_e8 & 2) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x142205098;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_e8 & 4) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x1422050ae;
    FThreadStats::AddMessage(local_f0,CycleScopeEnd);
  }
  local_e8 = 0;
  if ((local_d8 & 1) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x1422050bf;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_d8 & 2) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x1422050cc;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_d8 & 4) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x1422050e2;
    FThreadStats::AddMessage(local_e0,CycleScopeEnd);
  }
  *(undefined8 *)(puVar26 + -8) = 0x1422050f1;
  return;
}

// CallFunctionByNameWithArguments @ 142205150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UObject::CallFunctionByNameWithArguments
          (UObject *this,wchar_t *param_1,FOutputDevice *param_2,UObject *param_3,bool param_4)

{
  ushort uVar1;
  short sVar2;
  UClass *pUVar3;
  code *pcVar4;
  FProperty *this_00;
  FField *pFVar5;
  FObjectPropertyBase *pFVar6;
  FObjectPropertyBase *pFVar7;
  FFeedbackContext *pFVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  FOutputDevice *this_01;
  UObject *pUVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UFunction *pUVar15;
  ulonglong uVar16;
  FString *pFVar17;
  longlong lVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  FStaticBasicLogRecord *pFVar21;
  ulonglong uVar22;
  ForAnyElementType FVar23;
  ulonglong _Size;
  FScriptContainerElement *pFVar24;
  undefined1 *puVar25;
  FObjectPropertyBase *pFVar26;
  FObjectPropertyBase *_Dst;
  wchar_t *local_res10;
  undefined1 auStack_248 [63];
  undefined1 uStack_209;
  undefined1 local_208 [16];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  TFieldIterator<FProperty> local_1e8;
  TFieldIterator<FProperty> local_1d0;
  FName local_1b8;
  TFieldIterator<FProperty> local_1b0;
  TFieldIterator<FProperty> local_198;
  FString local_180;
  undefined8 local_170;
  UObject *local_168;
  FName local_160;
  FName local_158;
  FOutputDevice *local_150;
  UObject *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FFormatArgumentValue local_110;
  FFormatArgumentValue local_f0;
  FFormatArgumentValue local_d0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  ulonglong local_30;
  
  puVar25 = auStack_248;
  local_30 = __security_cookie.value ^ (ulonglong)local_208;
  pFVar26 = (FObjectPropertyBase *)0x0;
  local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Data.ArrayNum = 0;
  local_180.Data.ArrayMax = 0;
  local_res10 = param_1;
  local_168 = param_3;
  local_150 = param_2;
  local_148 = this;
  bVar12 = FParse::Token(&local_res10,&local_180,true,L'\0');
  if (bVar12) {
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_180.Data.ArrayNum != 0) {
      FVar23.Data = local_180.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar23.Data,FNAME_Find);
    local_170 = 0;
    if (local_160 == (FName)0x0) {
      if (5 < (byte)LogScriptCore._0_1_) {
        pFVar21 = &::LOG_Static;
        goto LAB_142205288;
      }
    }
    else {
      pUVar15 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,local_160,IncludeSuper);
      if (pUVar15 == (UFunction *)0x0) {
        if (5 < (byte)LogScriptCore._0_1_) {
          pFVar21 = &::LOG_Static;
          goto LAB_142205288;
        }
      }
      else {
        if (((pUVar15->FunctionFlags & FUNC_Exec) != FUNC_None) || (param_4)) {
          local_1b0.Field = (FField *)pUVar15->_padding_;
          local_1b0.InterfaceIndex = -1;
          local_1b0.bIncludeSuper = true;
          local_1b0.bIncludeDeprecated = true;
          local_1b0.bIncludeInterface = false;
          local_1b0.Struct = (UStruct *)pUVar15;
          TFieldIterator<FProperty>::IterateToNext(&local_1b0);
          pFVar6 = pFVar26;
          pFVar7 = (FObjectPropertyBase *)local_1b0.Field;
          while ((pFVar7 != (FObjectPropertyBase *)0x0 && ((pFVar7->_padding_ & 0x480) == 0x80))) {
            local_1b0.Field = (FField *)pFVar7->_padding_;
            TFieldIterator<FProperty>::IterateToNext(&local_1b0);
            pFVar6 = pFVar7;
            pFVar7 = (FObjectPropertyBase *)local_1b0.Field;
          }
          uVar1 = pUVar15->ParmsSize;
          _Size = (ulonglong)uVar1;
          puVar25 = auStack_248;
          _Dst = pFVar26;
          if (uVar1 != 0) {
            sVar2 = *(short *)((longlong)&pUVar15->_padding_ + 4);
            if (sVar2 < 0x11) {
              uVar22 = _Size + 0x1e;
              if (uVar22 <= _Size + 0xf) {
                uVar22 = 0xffffffffffffff0;
              }
              puVar25 = auStack_248 + -(uVar22 & 0xfffffffffffffff0);
              _Dst = (FObjectPropertyBase *)(local_208 + -(uVar22 & 0xfffffffffffffff0) + 8);
            }
            else {
              uVar16 = (ulonglong)(int)((uVar1 - 1) + (int)sVar2);
              uVar22 = uVar16 + 0xf;
              if (uVar22 <= uVar16) {
                uVar22 = 0xffffffffffffff0;
              }
              puVar25 = auStack_248 + -(uVar22 & 0xfffffffffffffff0);
              _Dst = (FObjectPropertyBase *)
                     ((ulonglong)(&uStack_209 + (longlong)sVar2 + -(uVar22 & 0xfffffffffffffff0)) &
                     (longlong)(int)~((int)sVar2 - 1U));
            }
          }
          local_1b0.Field = (FField *)pFVar7;
          *(undefined8 *)(puVar25 + -8) = 0x1422053b3;
          memset(_Dst,0,_Size);
          local_198.Field = (FField *)pUVar15->_padding_;
          local_198.InterfaceIndex = -1;
          local_198.bIncludeSuper = true;
          local_198.bIncludeDeprecated = true;
          local_198.bIncludeInterface = false;
          local_198.Struct = (UStruct *)pUVar15;
          *(undefined8 *)(puVar25 + -8) = 0x1422053e3;
          TFieldIterator<FProperty>::IterateToNext(&local_198);
          this_00 = (FProperty *)local_198.Field;
          while ((local_198.Field = (FField *)this_00, this_00 != (FProperty *)0x0 &&
                 ((char)this_00->PropertyFlags < '\0'))) {
            if ((this_00->PropertyFlags >> 9 & 1) == 0) {
              *(undefined8 *)(puVar25 + -8) = 0x14220540a;
              FProperty::InitializeValue_InContainer(this_00,_Dst);
            }
            local_198.Field = (FField *)this_00->_padding_;
            *(undefined8 *)(puVar25 + -8) = 0x14220541b;
            TFieldIterator<FProperty>::IterateToNext(&local_198);
            this_00 = (FProperty *)local_198.Field;
          }
          local_1e8.Field = (FField *)pUVar15->_padding_;
          local_1e8.InterfaceIndex = -1;
          local_1e8.bIncludeSuper = true;
          local_1e8.bIncludeDeprecated = true;
          local_1e8.bIncludeInterface = false;
          local_1e8.Struct = (UStruct *)pUVar15;
          *(undefined8 *)(puVar25 + -8) = 0x14220544e;
          TFieldIterator<FProperty>::IterateToNext(&local_1e8);
          if ((FObjectPropertyBase *)local_1e8.Field != (FObjectPropertyBase *)0x0) {
            while (pFVar5 = local_1e8.Field,
                  (*(longlong *)((longlong)local_1e8.Field + 0x38) & 0x480) == 0x80) {
              if (((((int)pFVar26 != 0) || (param_3 == (UObject *)0x0)) ||
                  ((*(uint *)((longlong)(local_1e8.Field)->ClassPrivate + 0x18) >> 0x1a & 1) == 0))
                 || ((FObjectPropertyBase *)local_1e8.Field == (FObjectPropertyBase *)0x0)) {
LAB_142205566:
                pwVar9 = local_res10;
                local_208._0_8_ = (FScriptContainerElement *)0x0;
                local_208._8_4_ = 0;
                local_208._12_4_ = 0;
                *(undefined8 *)(puVar25 + -8) = 0x14220558d;
                FParse::Token(&local_res10,(FString *)local_208,true,L'\0');
                if (((FObjectPropertyBase *)pFVar5 == pFVar6) &&
                   ((*(uint *)((longlong)pFVar5->ClassPrivate + 0x18) >> 0xe & 1) != 0)) {
                  *(undefined8 *)(puVar25 + -8) = 0x1422055bd;
                  iVar14 = wcscmp(local_res10,L"");
                  if (iVar14 != 0) {
                    *(undefined8 *)(puVar25 + -8) = 0x1422055d0;
                    pFVar17 = ::FString::FString(&local_a0,pwVar9);
                    *(undefined8 *)(puVar25 + -8) = 0x1422055df;
                    pFVar17 = ::FString::TrimStart(pFVar17,&local_b0);
                    uVar10 = local_208._0_8_;
                    if ((FString *)local_208 != pFVar17) {
                      if ((FScriptContainerElement *)local_208._0_8_ !=
                          (FScriptContainerElement *)0x0) {
                        *(undefined8 *)(puVar25 + -8) = 0x1422055f9;
                        FMemory::Free((void *)uVar10);
                      }
                      local_208._0_8_ = (pFVar17->Data).AllocatorInstance.Data;
                      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_208._8_4_ = (pFVar17->Data).ArrayNum;
                      local_208._12_4_ = (pFVar17->Data).ArrayMax;
                      (pFVar17->Data).ArrayNum = 0;
                      (pFVar17->Data).ArrayMax = 0;
                    }
                    FVar23.Data = local_b0.Data.AllocatorInstance.Data;
                    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      *(undefined8 *)(puVar25 + -8) = 0x142205624;
                      FMemory::Free(FVar23.Data);
                    }
                    FVar23.Data = local_a0.Data.AllocatorInstance.Data;
                    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      *(undefined8 *)(puVar25 + -8) = 0x142205635;
                      FMemory::Free(FVar23.Data);
                    }
                  }
                }
                pFVar8 = GWarn;
                pFVar24 = (FScriptContainerElement *)L"";
                if (local_208._8_4_ != 0) {
                  pFVar24 = (FScriptContainerElement *)local_208._0_8_;
                }
                *(undefined8 *)(puVar25 + -8) = 0x142205659;
                bVar12 = FProperty::ValidateImportFlags
                                   ((FProperty *)pFVar5,0,(FOutputDevice *)GWarn);
                if ((bVar12) && (pFVar24 != (FScriptContainerElement *)0x0)) {
                  lVar18 = pFVar5->_padding_;
                  *(FFeedbackContext **)(puVar25 + 0x30) = pFVar8;
                  *(undefined4 *)(puVar25 + 0x28) = 0x8000000;
                  *(undefined8 *)(puVar25 + 0x20) = 0;
                  pcVar4 = *(code **)(lVar18 + 0xe8);
                  *(undefined8 *)(puVar25 + -8) = 0x142205698;
                  lVar18 = (*pcVar4)(pFVar5,pFVar24,_Dst);
                  uVar10 = local_208._0_8_;
                  if (lVar18 != 0) {
                    param_3 = local_168;
                    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0
                       ) {
                      *(undefined8 *)(puVar25 + -8) = 0x1422056af;
                      FMemory::Free((void *)uVar10);
                      param_3 = local_168;
                    }
                    goto LAB_1422056b6;
                  }
                }
                local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1f8.Pairs.ArrayNum = 0;
                local_1f8.Pairs.ArrayMax = 0;
                *(undefined8 *)(puVar25 + -8) = 0x142205847;
                pFVar19 = FText::FromName(&local_90,&local_160);
                local_110.Type = Text;
                *(undefined8 *)(puVar25 + -8) = 0x142205860;
                FText::FText((FText *)&local_110.TextValue,pFVar19);
                if (local_110.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0
                   ) {
                  *(undefined8 *)(puVar25 + -8) = 0x142205889;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     );
                  if (bVar12) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                }
                *(undefined8 *)(puVar25 + -8) = 0x1422058a6;
                ::FString::FString(&local_140,L"Message");
                *(undefined8 *)(puVar25 + -8) = 0x1422058bd;
                TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_140,&local_110);
                if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x1422058ce;
                  FMemory::Free(local_140.Data.AllocatorInstance.Data);
                }
                if (local_110.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  pcVar4 = *(code **)((longlong)
                                      *(ITextData *)
                                       local_110.TextValue.field0_0x0.TypedValue.TextData.Reference
                                     + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x1422058e0;
                  (*pcVar4)();
                }
                if (local_90.TextData.Reference != (ITextData *)0x0) {
                  pcVar4 = *(code **)((longlong)*local_90.TextData.Reference + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x1422058f2;
                  (*pcVar4)();
                }
                *(undefined8 *)(puVar25 + -8) = 0x142205901;
                bVar12 = IsThisNotNull(pFVar5,"FField::GetFName");
                if (bVar12) {
                  local_1b8 = pFVar5->NamePrivate;
                }
                else {
                  local_1b8.ComparisonIndex.Value = 0;
                  local_1b8.Number = 0;
                }
                *(undefined8 *)(puVar25 + -8) = 0x142205923;
                pFVar19 = FText::FromName(&local_80,&local_1b8);
                local_f0.Type = Text;
                *(undefined8 *)(puVar25 + -8) = 0x14220593c;
                FText::FText((FText *)&local_f0.TextValue,pFVar19);
                if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                {
                  *(undefined8 *)(puVar25 + -8) = 0x142205965;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     );
                  if (bVar12) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                }
                *(undefined8 *)(puVar25 + -8) = 0x14220597e;
                ::FString::FString(&local_130,L"PropertyName");
                *(undefined8 *)(puVar25 + -8) = 0x142205995;
                TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_130,&local_f0);
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x1422059a6;
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
                if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
                {
                  pcVar4 = *(code **)((longlong)
                                      *(ITextData *)
                                       local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                     0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x1422059b8;
                  (*pcVar4)();
                }
                if (local_80.TextData.Reference != (ITextData *)0x0) {
                  pcVar4 = *(code **)((longlong)*local_80.TextData.Reference + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x1422059ca;
                  (*pcVar4)();
                }
                local_158 = (FName)pUVar15->_padding_;
                *(undefined8 *)(puVar25 + -8) = 0x1422059e9;
                pFVar19 = FText::FromName(&local_70,&local_158);
                local_d0.Type = Text;
                *(undefined8 *)(puVar25 + -8) = 0x142205a02;
                FText::FText((FText *)&local_d0.TextValue,pFVar19);
                if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                {
                  *(undefined8 *)(puVar25 + -8) = 0x142205a2b;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     );
                  if (bVar12) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                }
                *(undefined8 *)(puVar25 + -8) = 0x142205a44;
                ::FString::FString(&local_120,L"FunctionName");
                *(undefined8 *)(puVar25 + -8) = 0x142205a5b;
                TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_120,&local_d0);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x142205a6c;
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
                {
                  pcVar4 = *(code **)((longlong)
                                      *(ITextData *)
                                       local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                     0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x142205a7e;
                  (*pcVar4)();
                }
                if (local_70.TextData.Reference != (ITextData *)0x0) {
                  pcVar4 = *(code **)((longlong)*local_70.TextData.Reference + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x142205a90;
                  (*pcVar4)();
                }
                *(undefined8 *)(puVar25 + -8) = 0x142205ab1;
                pFVar19 = FText::AsLocalizable_Advanced_LocText
                                    (&local_50,L"Core",L"BadProperty",
                                     L"\'{Message}\': Bad or missing property \'{PropertyName}\' when trying to call {FunctionName}"
                                    );
                *(undefined8 *)(puVar25 + -8) = 0x142205ac3;
                pFVar20 = FTextFormat::FTextFormat(&local_40,pFVar19,Default);
                *(undefined8 *)(puVar25 + -8) = 0x142205ad6;
                pFVar19 = FText::Format(&local_60,pFVar20,&local_1f8);
                *(undefined8 *)(puVar25 + -8) = 0x142205ade;
                FText::ToString(pFVar19);
                this_01 = local_150;
                *(undefined8 *)(puVar25 + -8) = 0x142205b03;
                FOutputDevice::LogfImpl(this_01,L"%s");
                if (local_60.TextData.Reference != (ITextData *)0x0) {
                  pcVar4 = *(code **)((longlong)*local_60.TextData.Reference + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x142205b15;
                  (*pcVar4)();
                }
                if (local_50.TextData.Reference != (ITextData *)0x0) {
                  pcVar4 = *(code **)((longlong)*local_50.TextData.Reference + 0x10);
                  *(undefined8 *)(puVar25 + -8) = 0x142205b27;
                  (*pcVar4)();
                }
                FVar23.Data = local_1f8.Pairs.AllocatorInstance.Data;
                iVar14 = local_1f8.Pairs.ArrayNum;
                *(undefined8 *)(puVar25 + -8) = 0x142205b33;
                DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                          ((TTuple<FString,FFormatArgumentValue> *)FVar23.Data,iVar14);
                FVar23.Data = local_1f8.Pairs.AllocatorInstance.Data;
                if ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data
                    != (TTuple<FString,FFormatArgumentValue> *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x142205b41;
                  FMemory::Free(FVar23.Data);
                }
                uVar10 = local_208._0_8_;
                if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x142205b53;
                  FMemory::Free((void *)uVar10);
                }
                goto LAB_1422056f0;
              }
              pUVar3 = (((TObjectPtr<UClass> *)((longlong)local_1e8.Field + 0x70))->field0_0x0).
                       DebugPtr;
              if ((UE::GC::GIsIncrementalReachabilityPending != (bool)(char)pFVar26) &&
                 (pUVar3 != (UClass *)0x0)) {
                *(undefined8 *)(puVar25 + -8) = 0x1422054bd;
                UE::GC::MarkAsReachable((UObject *)pUVar3);
              }
              iVar14 = (int)pUVar3->_padding_;
              if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar14) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar14 * 8)
                  != &pUVar3->_padding_)) goto LAB_142205566;
              iVar14 = (int)*(longlong *)((longlong)pFVar5 + 0x30);
              if (iVar14 < 1) {
                *(int *)(puVar25 + 0x28) = iVar14;
                *(undefined4 *)(puVar25 + 0x20) = 0;
                *(undefined8 *)(puVar25 + -8) = 0x142205516;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   );
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
              }
              if (_Dst == (FObjectPropertyBase *)0x0) {
                *(undefined8 *)(puVar25 + -8) = 0x142205545;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L"");
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
              }
              iVar14 = *(int *)((longlong)((longlong)pFVar5 + 0x40) + 4);
              *(undefined8 *)(puVar25 + -8) = 0x142205561;
              FObjectPropertyBase::SetObjectPropertyValue
                        ((FObjectPropertyBase *)pFVar5,
                         (undefined1 *)((longlong)&_Dst->_padding_ + (longlong)iVar14),param_3);
LAB_1422056b6:
              local_1e8.Field = pFVar5->Next;
              *(undefined8 *)(puVar25 + -8) = 0x1422056c7;
              TFieldIterator<FProperty>::IterateToNext(&local_1e8);
              pFVar26 = (FObjectPropertyBase *)(ulonglong)((int)pFVar26 + 1);
              if ((FObjectPropertyBase *)local_1e8.Field == (FObjectPropertyBase *)0x0) break;
            }
          }
          pUVar11 = local_148;
          pcVar4 = *(code **)(*(longlong *)local_148 + 0x260);
          *(undefined8 *)(puVar25 + -8) = 0x1422056ed;
          (*pcVar4)(pUVar11,pUVar15,_Dst);
LAB_1422056f0:
          local_1d0.Field = (FField *)pUVar15->_padding_;
          local_1d0.InterfaceIndex = -1;
          local_1d0.bIncludeSuper = true;
          local_1d0.bIncludeDeprecated = true;
          local_1d0.bIncludeInterface = false;
          local_1d0.Struct = (UStruct *)pUVar15;
          *(undefined8 *)(puVar25 + -8) = 0x142205717;
          TFieldIterator<FProperty>::IterateToNext(&local_1d0);
          pFVar5 = local_1d0.Field;
          while ((local_1d0.Field = pFVar5, pFVar5 != (FField *)0x0 &&
                 ((char)pFVar5[1].ClassPrivate < '\0'))) {
            if ((~(byte)((ulonglong)pFVar5[1].ClassPrivate >> 0x24) & 1) != 0) {
              pcVar4 = *(code **)(pFVar5->_padding_ + 0x138);
              iVar14 = (int)pFVar5[1]._padding_;
              if (iVar14 < 1) {
                *(int *)(puVar25 + 0x28) = iVar14;
                *(undefined4 *)(puVar25 + 0x20) = 0;
                *(undefined8 *)(puVar25 + -8) = 0x14220577b;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   );
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
              }
              if (_Dst == (FObjectPropertyBase *)0x0) {
                *(undefined8 *)(puVar25 + -8) = 0x1422057aa;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L"");
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
              }
              iVar14 = *(int *)((longlong)&pFVar5[1].Owner.Container + 4);
              *(undefined8 *)(puVar25 + -8) = 0x1422057c0;
              (*pcVar4)(pFVar5,(undefined1 *)((longlong)&_Dst->_padding_ + (longlong)iVar14));
            }
            local_1d0.Field = pFVar5->Next;
            *(undefined8 *)(puVar25 + -8) = 0x1422057d1;
            TFieldIterator<FProperty>::IterateToNext(&local_1d0);
            pFVar5 = local_1d0.Field;
          }
          bVar12 = true;
          goto LAB_1422057e0;
        }
        if (5 < (byte)LogScriptCore._0_1_) {
          pFVar21 = &::LOG_Static;
          goto LAB_142205288;
        }
      }
    }
  }
  else if (5 < (byte)LogScriptCore._0_1_) {
    pFVar21 = &::LOG_Static;
LAB_142205288:
    UE::Logging::Private::BasicLog<6>(pFVar21,(FLogCategoryBase *)&LogScriptCore);
  }
  bVar12 = false;
LAB_1422057e0:
  FVar23.Data = local_180.Data.AllocatorInstance.Data;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar25 + -8) = 0x1422057f1;
    FMemory::Free(FVar23.Data);
  }
  *(undefined8 *)(puVar25 + -8) = 0x142205803;
  return bVar12;
}

// FindFunction @ 14220c060

UFunction * __thiscall UObject::FindFunction(UObject *this,FName param_1)

{
  UFunction *pUVar1;
  
  pUVar1 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,param_1,IncludeSuper);
  return pUVar1;
}

// FindFunctionChecked @ 14220c080

/* WARNING: Enum "Type": Some values do not have unique names */

UFunction * __thiscall UObject::FindFunctionChecked(UObject *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pUVar1 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,param_1,IncludeSuper);
  if (pUVar1 == (UFunction *)0x0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pUVar1;
}

// ProcessContextOpcode @ 142215d90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UObject::ProcessContextOpcode(UObject *this,FFrame *param_1,void *param_2,bool param_3)

{
  longlong *this_00;
  byte bVar1;
  uint uVar2;
  uchar *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  UClass *pUVar18;
  FText *pFVar19;
  undefined8 uVar20;
  wchar_t *pwVar21;
  EPropertyFlags *pEVar22;
  char *pcVar23;
  FProperty *pFVar24;
  undefined4 local_res10 [2];
  UObject *local_1f8;
  FString local_1f0;
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FBlueprintExceptionInfo local_198;
  FBlueprintExceptionInfo local_180;
  FBlueprintExceptionInfo local_168;
  FString local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FTextFormat local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  local_res10[0] = 0;
  param_1->MostRecentProperty = (FProperty *)0x0;
  local_1f8 = (UObject *)0x0;
  bVar1 = *param_1->Code;
  param_1->Code = param_1->Code + 1;
  (*GNatives.Elements[bVar1])(this,param_1,&local_1f8);
  puVar3 = param_1->Code;
  if ((local_1f8 != (UObject *)0x0) && ((*(uint *)&local_1f8->field_0x8 >> 0x1e & 1) == 0)) {
    param_1->Code = param_1->Code + 0xc;
    bVar1 = *param_1->Code;
    param_1->Code = param_1->Code + 1;
    (*GNatives.Elements[bVar1])(local_1f8,param_1,param_2);
    if (param_1->bArrayContextFailed == false) {
      return;
    }
  }
  if (param_1->bArrayContextFailed != false) {
    param_1->bArrayContextFailed = false;
    param_1->Code = puVar3;
  }
  if (param_3) goto LAB_1422163b6;
  if ((local_1f8 == (UObject *)0x0) || ((*(uint *)&local_1f8->field_0x8 >> 0x1e & 1) == 0)) {
    if (param_1->MostRecentProperty == (FProperty *)0x0) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_e0,L"ScriptCore",L"AccessNoneNoContext",L"Accessed None");
      local_168.EventType = AccessViolation;
      local_168.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar14->TextData).Reference;
      if (local_168.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_168.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_168.Description.field0_0x0.TypedValue.TextData.Reference,local_1dc);
      }
      local_168.Description.field0_0x0.TypedValue.Flags = pFVar14->Flags;
      if ((local_168.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      FBlueprintCoreDelegates::ThrowScriptException(this,param_1,&local_168);
      uVar20 = local_168.Description.field0_0x0.TypedValue.TextData.Reference;
    }
    else {
      this_00 = &param_1->MostRecentProperty->_padding_;
      pUVar18 = Z_Construct_UClass_UClass_NoRegister();
      bVar12 = FFieldVariant::IsA((FFieldVariant *)this_00,pUVar18);
      pEVar22 = &param_1->MostRecentProperty->PropertyFlags;
      if ((bVar12) && ((*this_00 & 0xfffffffffffffffeU) != 0)) {
        pcVar23 = "(real)";
        if (((uint)(int)*pEVar22 >> 0x1a & 1) != 0) {
          pcVar23 = "(virtual)";
        }
        pFVar14 = FText::FromString(&local_a0,pcVar23);
        pUVar18 = FField::GetOwner<UClass>((FField *)param_1->MostRecentProperty);
        local_1d0 = (FName)pUVar18->_padding_;
        ::FName::ToString(&local_1d0,&local_150);
        pFVar15 = FText::FromString(&local_90,&local_150);
        pFVar24 = param_1->MostRecentProperty;
        bVar12 = IsThisNotNull(pFVar24,"FField::GetName");
        if (bVar12) {
          ::FName::ToString((FName *)&pFVar24->_padding_,&local_1a8);
        }
        else {
          ::FString::FString(&local_1a8,L"None");
        }
        pFVar16 = FText::FromString(&local_80,&local_1a8);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_f0,L"ScriptCore",L"AccessNoneUClassContext",
                             L"Accessed None trying to read {2} property {0} in {1}");
        pFVar17 = FTextFormat::FTextFormat(&local_70,pFVar19,Default);
        pFVar14 = FText::Format<FText,FText,FText>(&local_100,pFVar17,pFVar16,pFVar15,pFVar14);
        bVar11 = true;
        bVar10 = true;
        bVar9 = true;
        bVar8 = true;
        bVar7 = false;
        bVar6 = false;
        bVar12 = false;
      }
      else {
        pcVar23 = "(real)";
        if (((uint)(int)*pEVar22 >> 0x1a & 1) != 0) {
          pcVar23 = "(virtual)";
        }
        pFVar14 = FText::FromString(&local_60,pcVar23);
        pFVar24 = param_1->MostRecentProperty;
        bVar12 = IsThisNotNull(pFVar24,"FField::GetName");
        if (bVar12) {
          ::FName::ToString((FName *)&pFVar24->_padding_,&local_1b8);
        }
        else {
          ::FString::FString(&local_1b8,L"None");
        }
        pFVar15 = FText::FromString(&local_50,&local_1b8);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_110,L"ScriptCore",L"AccessNoneContext",
                             L"Accessed None trying to read {1} property {0} in not an UClass");
        pFVar17 = FTextFormat::FTextFormat(&local_40,pFVar16,Default);
        pFVar14 = FText::Format<FText,FText>(&local_120,pFVar17,pFVar15,pFVar14);
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar12 = true;
      }
      local_180.EventType = AccessViolation;
      local_180.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar14->TextData).Reference;
      if (local_180.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_180.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_180.Description.field0_0x0.TypedValue.TextData.Reference,local_1e0);
      }
      local_180.Description.field0_0x0.TypedValue.Flags = pFVar14->Flags;
      if ((local_180.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((bVar12) && (local_120.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if ((bVar6) && (local_110.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((bVar7) && (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if ((bVar8) && (local_100.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      if ((bVar9) && (local_f0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      if ((bVar10) && (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if ((bVar11) && (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      FBlueprintCoreDelegates::ThrowScriptException(this,param_1,&local_180);
      uVar20 = local_180.Description.field0_0x0.TypedValue.TextData.Reference;
    }
  }
  else {
    pFVar24 = param_1->MostRecentProperty;
    if (pFVar24 == (FProperty *)0x0) {
      pwVar21 = L"none";
LAB_142215ec0:
      ::FString::FString(&local_1f0,pwVar21);
    }
    else {
      bVar12 = IsThisNotNull(pFVar24,"FField::GetName");
      if (!bVar12) {
        pwVar21 = L"None";
        goto LAB_142215ec0;
      }
      ::FName::ToString((FName *)&pFVar24->_padding_,&local_1f0);
    }
    pFVar14 = FText::FromString(&local_d0,&local_1f0);
    if (local_1f8 == (UObject *)0x0) {
      ::FString::FString(&local_1c8,L"None");
    }
    else {
      local_1d8.ComparisonIndex.Value = *(uint *)&local_1f8->field_0x18;
      local_1d8.Number = *(uint *)&local_1f8->field_0x1c;
      ::FName::ToString(&local_1d8,&local_1c8);
    }
    pFVar15 = FText::FromString(&local_c0,&local_1c8);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_130,L"ScriptCore",L"AccessPendingKill",
                         L"Attempted to access {0} via property {1}, but {0} is not valid (pending kill or garbage)"
                        );
    pFVar17 = FTextFormat::FTextFormat(&local_b0,pFVar16,Default);
    pFVar14 = FText::Format<FText,FText>(&local_140,pFVar17,pFVar15,pFVar14);
    local_198.EventType = AccessViolation;
    local_198.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar14->TextData).Reference;
    if (local_198.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_198.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_198.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_198.Description.field0_0x0.TypedValue.Flags = pFVar14->Flags;
    if ((local_198.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    if (local_130.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    FBlueprintCoreDelegates::ThrowScriptException(this,param_1,&local_198);
    uVar20 = local_198.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  if ((ITextData *)uVar20 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar20 + 0x10))();
  }
LAB_1422163b6:
  puVar4 = (uint *)param_1->Code;
  uVar2 = *puVar4;
  param_1->Code = (uchar *)(puVar4 + 1);
  pFVar24 = *(FProperty **)(puVar4 + 1);
  param_1->Code = (uchar *)(puVar4 + 3);
  param_1->MostRecentProperty = pFVar24;
  if ((pFVar24 == (FProperty *)0x0) || ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    pFVar24 = (FProperty *)0x0;
  }
  param_1->MostRecentPropertyAddress = (uchar *)0x0;
  param_1->Code = (uchar *)((ulonglong)uVar2 + (longlong)(puVar4 + 3));
  param_1->MostRecentPropertyContainer = (uchar *)0x0;
  param_1->MostRecentProperty = (FProperty *)0x0;
  if ((param_2 != (void *)0x0) && (pFVar24 != (FProperty *)0x0)) {
    if ((pFVar24->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
        (CPF_NoDestructor|CPF_ZeroConstructor)) {
      memset(param_2,0,(longlong)pFVar24->ElementSize);
    }
    else {
      (**(code **)(pFVar24->_padding_ + 0x130))(pFVar24,param_2);
    }
  }
  return;
}

// ProcessEvent @ 142216470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObject::ProcessEvent(UObject *this,UFunction *param_1,void *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FName FVar8;
  FProperty *pFVar9;
  code *pcVar10;
  uchar *puVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  FUObjectItem *pFVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  TEventRef<unsigned_int> TVar21;
  UPackage *pUVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_BlueprintTime> FVar24;
  FName FVar25;
  ulonglong uVar26;
  FWriteBuffer *pFVar27;
  ulonglong uVar28;
  int iVar29;
  UObjectBaseUtility *pUVar30;
  FName FVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  byte bVar35;
  FOutParmRec *pFVar36;
  UFunction *pUVar37;
  longlong lVar38;
  void *pvVar39;
  int iVar40;
  byte bVar41;
  FOutParmRec **ppFVar42;
  longlong lVar43;
  undefined1 local_2d8 [32];
  byte abStack_279 [9];
  UFunction *local_270;
  undefined1 local_268;
  undefined1 local_267 [7];
  int *local_260;
  FTlsAutoCleanup *local_258;
  FLLMScope local_250;
  FLLMScope local_24c;
  FName local_248;
  FColor_u_0 local_240;
  int local_23c;
  FName local_238;
  byte local_230;
  FName local_228;
  byte local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  FName local_200;
  FName local_1f8;
  void *local_1e8;
  FMemScope local_1e0;
  FMemScope local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FFrame local_108;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  puVar32 = local_2d8;
  local_48 = __security_cookie.value ^ (ulonglong)(abStack_279 + 1);
  local_270 = param_1;
  local_260 = param_2;
  pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((uint)((ulonglong)(pFVar18->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    IsInGameThread();
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_138,(UObject *)0x0,None);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_148,(UObject *)0x0);
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsUnreachable()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                        ,0x7e4,
                        L"Function \'%s\' called on Object \'%s\' that was marked unreachable. Object is possibly about to be garbage collected due to not being referenced. %s"
                       );
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  puVar19 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_1b0 = &local_268;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1b8,puVar19);
  if (*(char *)(pFVar20 + 4) != '\0') {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_118,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_128,(UObject *)0x0,None);
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!FUObjectThreadContext::Get().IsRoutingPostLoad",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                        ,0x7e5,L"Cannot call UnrealScript (%s - %s) while PostLoading objects");
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  puVar34 = local_2d8;
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) {
    if ((param_1->FunctionFlags & FUNC_Native) == FUNC_None) {
      uVar16 = (uint)param_1->_padding_;
    }
    else {
      uVar16 = (**(code **)(*(longlong *)this + 0x268))(this,param_1);
      if ((uVar16 & 1) != 0) {
        (**(code **)(*(longlong *)this + 0x270))(this,param_1);
      }
      uVar16 = uVar16 & 2;
    }
    puVar34 = local_2d8;
    if (uVar16 != 0) {
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_228,(UObjectBaseUtility *)param_1);
      pUVar30 = (UObjectBaseUtility *)0x0;
      if (GVerboseScriptStats != 0) {
        pUVar30 = (UObjectBaseUtility *)this;
      }
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_238,pUVar30);
      FLLMScope::FLLMScope(&local_24c,UObject,false,None,Default,true);
      FMemScope::FMemScope(&local_1d8,UObject,true);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name2072,L"UObject/UObjectInternals");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(&local_250,LLMScope_Name2072,false,None,Default,true);
      FMemScope::FMemScope(&local_1e0,&LLMScope_Name2072,true);
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_218 = 0;
        TVar21 = (TEventRef<unsigned_int>)&local_218;
      }
      else {
        local_1d0 = *(undefined8 *)&this->field_0x18;
        TVar21 = FStringTrace::GetNameRef(&local_160);
      }
      uVar4 = *(undefined8 *)TVar21;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_210 = 0;
        TVar21 = (TEventRef<unsigned_int>)&local_210;
      }
      else {
        local_1c8 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
        TVar21 = FStringTrace::GetNameRef(&local_158);
      }
      uVar5 = *(undefined8 *)TVar21;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_208 = 0;
        TVar21 = (TEventRef<unsigned_int>)&local_208;
      }
      else {
        pUVar22 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        local_1c0 = pUVar22->_padding_;
        TVar21 = FStringTrace::GetNameRef(&local_150);
      }
      uVar6 = *(undefined8 *)TVar21;
      bVar41 = '\0';
      abStack_279[2] = '\0';
      if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
        bVar41 = '\x01';
        abStack_279[2] = '\x01';
        *local_58 = (int)uVar4;
        local_58[1] = (int)uVar5;
        local_58[2] = (int)uVar6;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      local_1a0 = local_267;
      local_1a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar20 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1a8,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      *(int *)&pFVar20[3].field_0x4 = *(int *)&pFVar20[3].field_0x4 + 1;
      local_258 = pFVar20;
      bVar13 = IsInGameThread();
      if (bVar13) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FBlueprintContextTracker::OnEnterScriptContext,(FWriteAccessScope *)&local_198);
        pFVar20 = local_258;
        pUVar37 = local_270;
        bVar13 = false;
        FBlueprintContextTracker::OnEnterScriptContext._28_4_ =
             FBlueprintContextTracker::OnEnterScriptContext._28_4_ + 1;
        uVar16 = FBlueprintContextTracker::OnEnterScriptContext._16_4_ - 1;
        if (-1 < (int)uVar16) {
          lVar38 = (longlong)(int)uVar16 << 4;
          bVar13 = false;
          do {
            uVar17 = 0;
            if ((int)uVar16 < (int)FBlueprintContextTracker::OnEnterScriptContext._16_4_) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((*(int *)(lVar38 + 8 + FBlueprintContextTracker::OnEnterScriptContext._8_8_) == 0)
                || (plVar7 = *(longlong **)
                              (lVar38 + FBlueprintContextTracker::OnEnterScriptContext._8_8_),
                   plVar7 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar7 + 0x68))(plVar7,pFVar20,this,pUVar37), cVar15 == '\0')
               ) {
              bVar13 = true;
            }
            lVar38 = lVar38 + -0x10;
            uVar16 = uVar16 - 1;
            bVar41 = abStack_279[2];
          } while (-1 < (int)uVar16);
        }
        FBlueprintContextTracker::OnEnterScriptContext._28_4_ =
             FBlueprintContextTracker::OnEnterScriptContext._28_4_ + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBlueprintContextTracker::OnEnterScriptContext,false);
        }
        pFVar20 = local_258;
        param_1 = local_270;
        if (local_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
          pFVar20 = local_258;
          param_1 = local_270;
        }
      }
      FVar25 = (FName)0x0;
      bVar13 = IsInGameThread();
      if ((bVar13) && (*(int *)&pFVar20[3].field_0x4 == 1)) {
        FVar24 = StatPtr_STAT_BlueprintTime;
        if (StatPtr_STAT_BlueprintTime == (FThreadSafeStaticStat<FStat_STAT_BlueprintTime>)0x0) {
          pFVar23 = ::FName::FName(&local_168,"STAT_BlueprintTime");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_BlueprintTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintTime,*pFVar23,
                              L"Blueprint Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                              true,ST_int64,true,false,MCR_Invalid);
        }
      }
      else {
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_BlueprintTime>)&TStatId::TStatId_NAME_None;
      }
      FVar8 = *(FName *)FVar24;
      bVar35 = 0;
      local_1f8.ComparisonIndex.Value = 0;
      local_1f8.Number = 0;
      abStack_279[1] = 0;
      if ((FVar8.ComparisonIndex.Value.Value != 0) || (FVar31 = local_1f8, FVar8.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_240.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
          bVar35 = 1;
          abStack_279[1] = 1;
          if (-1 < CpuChannel->Enabled) {
            local_200.ComparisonIndex.Value = FVar8.ComparisonIndex.Value.Value;
            local_200.Number = FVar8.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_200,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                       ,0x828);
            bVar35 = 3;
            abStack_279[1] = 3;
          }
        }
        FVar31 = local_1f8;
        if (FThreadStats::bPrimaryEnable != false) {
          local_248 = FVar8;
          FThreadStats::AddMessage(FVar8,CycleScopeStart);
          abStack_279[1] = bVar35 | 4;
          FVar31 = FVar8;
        }
      }
      pUVar37 = param_1->EventGraphFunction;
      if (pUVar37 != (UFunction *)0x0) {
        local_260 = &local_23c;
        local_23c = param_1->EventGraphCallOffset;
        local_270 = pUVar37;
        param_1 = pUVar37;
      }
      piVar12 = local_260;
      if ((param_1->FunctionFlags & FUNC_UbergraphFunction) != FUNC_None) {
        FVar25 = (FName)(**(code **)(*(longlong *)param_1->_padding_ + 0x3a0))
                                  ((longlong *)param_1->_padding_,this,param_1);
      }
      local_248 = FVar25;
      local_1e8 = (void *)FVar25;
      lVar38 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(uint *)(lVar38 + 0xd30) & 1) == 0) {
        *(uint *)(lVar38 + 0xd30) = *(uint *)(lVar38 + 0xd30) | 1;
        FVirtualStackAllocator::FVirtualStackAllocator
                  ((FVirtualStackAllocator *)(lVar38 + 0xcf0),0,AllOnDestruction);
        if ((2 < (uint)BlueprintContextVirtualStackAllocatorDecommitMode) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7634585018982989628>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                                ,0xc4,
                                "BlueprintContextVirtualStackAllocatorDecommitMode >= 0 && BlueprintContextVirtualStackAllocatorDecommitMode < (int)EVirtualStackAllocatorDecommitMode::NumModes"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        __tlregdtor(`FBlueprintContextGetThreadSingletonImpl'::__l2::
                    _dynamic_atexit_destructor_for__ThreadLocalContext__);
      }
      puVar34 = local_2d8;
      pvVar39 = (void *)FVar25;
      if (FVar25 == (FName)0x0) {
        iVar29 = (int)param_1->_padding_;
        if (iVar29 != 0) {
          sVar1 = *(short *)((longlong)&param_1->_padding_ + 4);
          if (sVar1 < 0x11) {
            uVar26 = (longlong)(iVar29 + 0xf) + 0xf;
            if (uVar26 <= (ulonglong)(longlong)(iVar29 + 0xf)) {
              uVar26 = 0xffffffffffffff0;
            }
            puVar32 = local_2d8 + -(uVar26 & 0xfffffffffffffff0);
            pvVar39 = (void *)((longlong)&local_270 + -(uVar26 & 0xfffffffffffffff0));
          }
          else {
            uVar28 = (ulonglong)(int)(((int)sVar1 - 1U) + iVar29);
            uVar26 = uVar28 + 0xf;
            if (uVar26 <= uVar28) {
              uVar26 = 0xffffffffffffff0;
            }
            puVar32 = local_2d8 + -(uVar26 & 0xfffffffffffffff0);
            pvVar39 = (void *)((ulonglong)
                               (abStack_279 + (longlong)sVar1 + -(uVar26 & 0xfffffffffffffff0)) &
                              (longlong)(int)~((int)sVar1 - 1U));
          }
        }
        uVar2 = param_1->ParmsSize;
        iVar29 = iVar29 - (uint)uVar2;
        puVar34 = puVar32;
        if (iVar29 != 0) {
          *(undefined8 *)(puVar32 + -8) = 0x142216d01;
          memset((void *)((longlong)pvVar39 + (ulonglong)uVar2),0,(longlong)iVar29);
        }
      }
      uVar2 = param_1->ParmsSize;
      if (uVar2 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x142216d1c;
        memcpy(pvVar39,piVar12,(ulonglong)uVar2);
      }
      *(longlong *)(puVar34 + 0x28) = param_1->_padding_;
      *(undefined8 *)(puVar34 + 0x20) = 0;
      *(undefined8 *)(puVar34 + -8) = 0x142216d43;
      FFrame::FFrame(&local_108,this,param_1,pvVar39,*(FFrame **)(puVar34 + 0x20),
                     *(FField **)(puVar34 + 0x28));
      piVar12 = local_260;
      if ((param_1->FunctionFlags & FUNC_HasOutParms) != FUNC_None) {
        ppFVar42 = &local_108.OutParms;
        param_1 = local_270;
        for (pFVar9 = (FProperty *)local_270->_padding_;
            (local_270 = param_1, pFVar9 != (FProperty *)0x0 &&
            (FVar25 = local_248, (char)pFVar9->PropertyFlags < '\0'));
            pFVar9 = (FProperty *)pFVar9->_padding_) {
          puVar33 = puVar34;
          if ((pFVar9->PropertyFlags >> 8 & 1) != 0) {
            puVar33 = puVar34 + -0x30;
            pFVar36 = (FOutParmRec *)((ulonglong)(puVar34 + 0x3f) & 0xfffffffffffffff0);
            if (pFVar9->ArrayDim < 1) {
              *(int *)(puVar34 + -8) = pFVar9->ArrayDim;
              *(undefined4 *)(puVar34 + -0x10) = 0;
              *(undefined8 *)(puVar34 + -0x38) = 0x142216dd0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (piVar12 == (int *)0x0) {
              *(undefined8 *)(puVar34 + -0x38) = 0x142216dfb;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            iVar29 = pFVar9->Offset_Internal;
            pFVar36->Property = pFVar9;
            pFVar36->PropAddr = (uchar *)((longlong)iVar29 + (longlong)piVar12);
            if (*ppFVar42 == (FOutParmRec *)0x0) {
              *ppFVar42 = pFVar36;
            }
            else {
              (*ppFVar42)->NextOutParm = pFVar36;
              ppFVar42 = &(*ppFVar42)->NextOutParm;
              puVar33 = puVar34 + -0x30;
            }
          }
          puVar34 = puVar33;
          FVar25 = local_248;
          param_1 = local_270;
        }
        if (*ppFVar42 != (FOutParmRec *)0x0) {
          (*ppFVar42)->NextOutParm = (FOutParmRec *)0x0;
        }
      }
      if (FVar25 == (FName)0x0) {
        puVar11 = local_108.Locals;
        for (pFVar9 = param_1->FirstPropertyToInit; local_108.Locals = puVar11,
            pFVar9 != (FProperty *)0x0; pFVar9 = pFVar9->PostConstructLinkNext) {
          if (((uint)(int)pFVar9->PropertyFlags >> 9 & 1) == 0) {
            pcVar10 = *(code **)(pFVar9->_padding_ + 0x150);
            if (pFVar9->ArrayDim < 1) {
              *(int *)(puVar34 + 0x28) = pFVar9->ArrayDim;
              *(undefined4 *)(puVar34 + 0x20) = 0;
              *(undefined8 *)(puVar34 + -8) = 0x142216f36;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (puVar11 == (uchar *)0x0) {
              *(undefined8 *)(puVar34 + -8) = 0x142216f61;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            iVar29 = pFVar9->Offset_Internal;
            *(undefined8 *)(puVar34 + -8) = 0x142216f74;
            (*pcVar10)(pFVar9,puVar11 + iVar29);
          }
          else {
            iVar29 = pFVar9->ArrayDim;
            iVar40 = pFVar9->ElementSize;
            if (iVar29 < 1) {
              *(int *)(puVar34 + 0x28) = iVar29;
              *(undefined4 *)(puVar34 + 0x20) = 0;
              *(undefined8 *)(puVar34 + -8) = 0x142216eb9;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (puVar11 == (uchar *)0x0) {
              *(undefined8 *)(puVar34 + -8) = 0x142216ee4;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            iVar3 = pFVar9->Offset_Internal;
            *(undefined8 *)(puVar34 + -8) = 0x142216efb;
            memset(puVar11 + iVar3,0,(longlong)iVar40 * (longlong)iVar29);
          }
          puVar11 = local_108.Locals;
        }
      }
      pUVar37 = local_270;
      if (local_270->ReturnValueOffset == 0xffff) {
        pvVar39 = (void *)0x0;
      }
      else {
        pvVar39 = (void *)((ulonglong)local_270->ReturnValueOffset + (longlong)local_260);
      }
      *(undefined8 *)(puVar34 + -8) = 0x142216fb9;
      UFunction::Invoke(pUVar37,this,&local_108,pvVar39);
      if (local_1e8 == (void *)0x0) {
        puVar11 = local_108.Locals;
        for (plVar7 = (longlong *)pUVar37->_padding_; plVar7 != (longlong *)0x0;
            plVar7 = (longlong *)plVar7[0xb]) {
          iVar29 = (int)plVar7[6];
          iVar40 = iVar29 * *(int *)((longlong)plVar7 + 0x34);
          local_108.Locals = puVar11;
          if ((int)(uint)pUVar37->ParmsSize < *(int *)((longlong)plVar7 + 0x44) + iVar40) {
            pUVar37 = local_270;
            if ((plVar7[7] & 0x1000000000U) == 0) {
              pcVar10 = *(code **)(*plVar7 + 0x138);
              if (iVar29 < 1) {
                *(int *)(puVar34 + 0x28) = iVar29;
                *(undefined4 *)(puVar34 + 0x20) = 0;
                *(undefined8 *)(puVar34 + -8) = 0x14221704c;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   );
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              if (puVar11 == (uchar *)0x0) {
                *(undefined8 *)(puVar34 + -8) = 0x142217077;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L"");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              iVar29 = *(int *)((longlong)plVar7 + 0x44);
              *(undefined8 *)(puVar34 + -8) = 0x14221708a;
              (*pcVar10)(plVar7,puVar11 + iVar29);
              pUVar37 = local_270;
            }
          }
          else if ((*(uint *)(plVar7 + 7) >> 8 & 1) == 0) {
            if (iVar29 < 1) {
              *(int *)(puVar34 + 0x28) = iVar29;
              *(undefined4 *)(puVar34 + 0x20) = 0;
              *(undefined8 *)(puVar34 + -8) = 0x1422170d4;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (puVar11 == (uchar *)0x0) {
              *(undefined8 *)(puVar34 + -8) = 0x1422170ff;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            iVar29 = *(int *)((longlong)plVar7 + 0x44);
            if ((int)plVar7[6] < 1) {
              *(int *)(puVar34 + 0x28) = (int)plVar7[6];
              *(undefined4 *)(puVar34 + 0x20) = 0;
              *(undefined8 *)(puVar34 + -8) = 0x14221713f;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            piVar12 = local_260;
            if (local_260 == (int *)0x0) {
              *(undefined8 *)(puVar34 + -8) = 0x14221716e;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar7 + 0x44);
            *(undefined8 *)(puVar34 + -8) = 0x142217186;
            memcpy((void *)((longlong)iVar3 + (longlong)piVar12),puVar11 + iVar29,(longlong)iVar40);
            pUVar37 = local_270;
          }
          puVar11 = local_108.Locals;
        }
      }
      *(undefined8 *)(puVar34 + -8) = 0x1422171a3;
      FFrame::~FFrame(&local_108);
      *(undefined8 *)(puVar34 + -8) = 0x1422171a8;
      bVar13 = IsInGameThread();
      if (bVar13) {
        *(undefined8 *)(puVar34 + -8) = 0x1422171c3;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FBlueprintContextTracker::OnExitScriptContext,(FWriteAccessScope *)&local_180);
        bVar13 = false;
        FBlueprintContextTracker::OnExitScriptContext._28_4_ =
             FBlueprintContextTracker::OnExitScriptContext._28_4_ + 1;
        uVar16 = FBlueprintContextTracker::OnExitScriptContext._16_4_ - 1;
        if (-1 < (int)uVar16) {
          lVar43 = (longlong)(int)uVar16;
          lVar38 = lVar43 << 4;
          bVar13 = false;
          do {
            uVar17 = 0;
            if ((int)uVar16 < (int)FBlueprintContextTracker::OnExitScriptContext._16_4_) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if (uVar17 == 0) {
              *(longlong *)(puVar34 + 0x28) =
                   (longlong)(int)FBlueprintContextTracker::OnExitScriptContext._16_4_;
              *(longlong *)(puVar34 + 0x20) = lVar43;
              *(undefined8 *)(puVar34 + -8) = 0x142217243;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar14) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if ((*(int *)(lVar38 + 8 + FBlueprintContextTracker::OnExitScriptContext._8_8_) == 0) ||
               (*(longlong **)(lVar38 + FBlueprintContextTracker::OnExitScriptContext._8_8_) ==
                (longlong *)0x0)) {
LAB_14221726d:
              bVar13 = true;
            }
            else {
              pcVar10 = *(code **)(**(longlong **)
                                     (lVar38 + FBlueprintContextTracker::OnExitScriptContext._8_8_)
                                  + 0x68);
              *(undefined8 *)(puVar34 + -8) = 0x142217269;
              cVar15 = (*pcVar10)();
              if (cVar15 == '\0') goto LAB_14221726d;
            }
            lVar43 = lVar43 + -1;
            lVar38 = lVar38 + -0x10;
            uVar16 = uVar16 - 1;
            bVar41 = abStack_279[2];
          } while (-1 < (int)uVar16);
        }
        FBlueprintContextTracker::OnExitScriptContext._28_4_ =
             FBlueprintContextTracker::OnExitScriptContext._28_4_ + -1;
        if (bVar13) {
          *(undefined8 *)(puVar34 + -8) = 0x1422172a2;
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBlueprintContextTracker::OnExitScriptContext,false);
        }
        if (local_180.bDestroyed == false) {
          *(undefined8 *)(puVar34 + -8) = 0x1422172be;
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
      }
      puVar33 = &local_258[3].field_0x4;
      *(int *)puVar33 = *(int *)puVar33 + -1;
      if (*(int *)puVar33 < 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422172e8;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptEntryTag >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                            ,0x14c,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      bVar35 = abStack_279[1];
      if ((abStack_279[1] & 1) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422172fd;
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((bVar35 & 2) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x142217308;
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((bVar35 & 4) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x14221731b;
        FThreadStats::AddMessage(FVar31,CycleScopeEnd);
      }
      if (bVar41 != '\0') {
        lVar38 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar38 + 0x9d48) == '\0') {
          *(undefined8 *)(puVar34 + -8) = 0x142217343;
          __dyn_tls_on_demand_init();
        }
        pFVar27 = *(FWriteBuffer **)(lVar38 + 0x20);
        if ((int)pFVar27 - *(int *)&pFVar27->Cursor < 1) {
          *(undefined8 *)(puVar34 + -8) = 0x14221735b;
          pFVar27 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar27->Cursor = '\n';
        pFVar27->Cursor = pFVar27->Cursor + 1;
        pFVar27->Committed = pFVar27->Cursor;
      }
      *(undefined8 *)(puVar34 + -8) = 0x14221737e;
      FMemScope::~FMemScope(&local_1e0);
      *(undefined8 *)(puVar34 + -8) = 0x142217387;
      FLLMScope::~FLLMScope(&local_250);
      *(undefined8 *)(puVar34 + -8) = 0x142217393;
      FMemScope::~FMemScope(&local_1d8);
      *(undefined8 *)(puVar34 + -8) = 0x14221739c;
      FLLMScope::~FLLMScope(&local_24c);
      if ((local_230 & 1) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422173a9;
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_230 & 2) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422173b6;
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_230 & 4) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422173cc;
        FThreadStats::AddMessage(local_238,CycleScopeEnd);
      }
      local_230 = 0;
      if ((local_220 & 1) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422173dd;
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_220 & 2) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1422173ea;
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_220 & 4) != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x142217400;
        FThreadStats::AddMessage(local_228,CycleScopeEnd);
      }
    }
  }
  *(undefined8 *)(puVar34 + -8) = 0x14221740f;
  return;
}

// ProcessInternal @ 142217fd0

void __cdecl UObject::ProcessInternal(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *this;
  uint uVar1;
  FProperty *pFVar2;
  UObject *local_res8;
  UObject **local_res20;
  
  local_res8 = param_1;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0xd4) < 0) {
    if ((GIsReinstancing == (atomic<bool>)0x0) &&
       (*(int *)(*(longlong *)&param_1->field_0x10 + 0xd4) < 0)) {
      local_res20 = &local_res8;
      `UObject::ProcessInternal'::__l8::<lambda_1>::operator()(&local_res20);
      return;
    }
  }
  else {
    this = param_2->Node;
    uVar1 = (**(code **)(*(longlong *)param_1 + 0x268))(param_1,this,0);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*(longlong *)local_res8 + 0x270))
                (local_res8,this,param_2->Locals,param_2->OutParms,0);
    }
    if ((uVar1 & 2) != 0) {
      ProcessLocalScriptFunction(local_res8,param_2,param_3);
      return;
    }
    pFVar2 = UFunction::GetReturnProperty(this);
    ClearReturnValue(pFVar2,param_3);
  }
  return;
}

// SkipFunction @ 14222c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
UObject::SkipFunction(UObject *this,FFrame *param_1,void *param_2,UFunction *param_3)

{
  uchar uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  longlong lVar7;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var8;
  UObject *pUVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  ulonglong uVar13;
  FProperty *pFVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *_Dst;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 auStack_68 [47];
  undefined1 uStack_39;
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar16 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  iVar4 = (int)param_3->_padding_;
  _Dst = (undefined1 *)0x0;
  if (iVar4 != 0) {
    sVar3 = *(short *)((longlong)&param_3->_padding_ + 4);
    if (sVar3 < 0x11) {
      uVar13 = (longlong)(iVar4 + 0xf) + 0xf;
      if (uVar13 <= (ulonglong)(longlong)(iVar4 + 0xf)) {
        uVar13 = 0xffffffffffffff0;
      }
      puVar16 = auStack_68 + -(uVar13 & 0xfffffffffffffff0);
      _Dst = auStack_30 + -(uVar13 & 0xfffffffffffffff0);
    }
    else {
      uVar17 = (int)sVar3 - 1;
      uVar15 = (ulonglong)(int)(uVar17 + iVar4);
      uVar13 = uVar15 + 0xf;
      if (uVar13 <= uVar15) {
        uVar13 = 0xffffffffffffff0;
      }
      puVar16 = auStack_68 + -(uVar13 & 0xfffffffffffffff0);
      _Dst = (undefined1 *)
             ((ulonglong)(&uStack_39 + (longlong)sVar3 + -(uVar13 & 0xfffffffffffffff0)) &
             (longlong)(int)~uVar17);
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x14222c24e;
  memset(_Dst,0,(longlong)iVar4);
  puVar6 = param_1->Code;
  lVar7 = param_3->_padding_;
  uVar1 = *puVar6;
  while (uVar1 != '\x16') {
    param_1->MostRecentPropertyAddress = (uchar *)0x0;
    param_1->MostRecentPropertyContainer = (uchar *)0x0;
    puVar18 = (undefined1 *)0x0;
    if ((*(uint *)(lVar7 + 0x38) >> 8 & 1) == 0) {
      if (*(int *)(lVar7 + 0x30) < 1) {
        *(int *)(puVar16 + 0x28) = *(int *)(lVar7 + 0x30);
        *(undefined4 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x14222c2b7;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (_Dst == (undefined1 *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x14222c2e2;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      puVar18 = _Dst + *(int *)(lVar7 + 0x44);
    }
    bVar2 = *param_1->Code;
    param_1->Code = param_1->Code + 1;
    p_Var8 = GNatives.Elements[bVar2];
    pUVar9 = param_1->Object;
    *(undefined8 *)(puVar16 + -8) = 0x14222c30c;
    (*p_Var8)(pUVar9,param_1,puVar18);
    puVar6 = param_1->Code;
    lVar7 = *(longlong *)(lVar7 + 0x18);
    uVar1 = *puVar6;
  }
  param_1->Code = puVar6 + 1;
  plVar10 = (longlong *)param_3->_padding_;
  do {
    if (plVar10 == (longlong *)0x0) {
      *(undefined8 *)(puVar16 + -8) = 0x14222c3dc;
      pFVar14 = UFunction::GetReturnProperty(param_3);
      if (pFVar14 != (FProperty *)0x0) {
        if ((pFVar14->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          pcVar11 = *(code **)(pFVar14->_padding_ + 0x138);
          *(undefined8 *)(puVar16 + -8) = 0x14222c3fd;
          (*pcVar11)(pFVar14);
        }
        iVar4 = pFVar14->ElementSize;
        iVar5 = pFVar14->ArrayDim;
        *(undefined8 *)(puVar16 + -8) = 0x14222c411;
        memset(param_2,0,(longlong)(iVar4 * iVar5));
      }
      *(undefined8 *)(puVar16 + -8) = 0x14222c41d;
      return;
    }
    if ((((ulonglong)plVar10[7] >> 8 & 1) == 0) && ((plVar10[7] & 0x1000000000U) == 0)) {
      pcVar11 = *(code **)(*plVar10 + 0x138);
      if ((int)plVar10[6] < 1) {
        *(int *)(puVar16 + 0x28) = (int)plVar10[6];
        *(undefined4 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x14222c38a;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (_Dst == (undefined1 *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x14222c3b5;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      *(undefined8 *)(puVar16 + -8) = 0x14222c3c7;
      (*pcVar11)(plVar10);
    }
    plVar10 = (longlong *)plVar10[0xb];
  } while( true );
}

// execAddMulticastDelegate @ 1422368d0

void __cdecl UObject::execAddMulticastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar4 = param_2->MostRecentProperty;
  if ((((pFVar4 == (FProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x19 & 1) == 0)) &&
      (bVar5 = pFVar4 != (FProperty *)0x0, pFVar4 = (FProperty *)0x0, bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult || !Src",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x48c,L"CastFieldCheckedNullAllowed failed with 0x%016llx"),
     pFVar4 = (FProperty *)0x0, bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_58);
  if ((pFVar4 != (FProperty *)0x0) && (puVar2 != (uchar *)0x0)) {
    local_40 = 0;
    pcVar3 = *(code **)(pFVar4->_padding_ + 0x1e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
    local_38 = local_50;
    local_30 = local_48;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    (*pcVar3)(pFVar4,&local_40,0,puVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execArrayConst @ 142236a30

void __cdecl UObject::execArrayConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FProperty *pFVar9;
  ulonglong uVar10;
  FProperty *pFVar11;
  int iVar12;
  uint uVar13;
  FProperty *pFVar15;
  size_t _Size;
  FProperty *pFVar14;
  
  pFVar15 = (FProperty *)0x0;
  pFVar11 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar11;
  if (((pFVar11 == (FProperty *)0x0) || ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar11 = pFVar15, bVar7
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  if ((param_3 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Z_Param__Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xec8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = (**(code **)(pFVar11->_padding_ + 0x168))(pFVar11);
  iVar4 = pFVar11->ElementSize;
  _Size = (size_t)iVar4;
  if ((iVar4 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar11 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)((longlong)param_3 + 8);
  uVar13 = 0;
  if (uVar5 == 0) {
    if (uVar3 == 0) goto LAB_142236bdc;
  }
  else if (((pFVar11->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) &&
          (0 < (int)uVar5)) {
    uVar10 = (ulonglong)uVar5;
    do {
      if ((pFVar11->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar11->_padding_ + 0x138))(pFVar11);
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  *(undefined4 *)((longlong)param_3 + 8) = 0;
  if (uVar3 != *(uint *)((longlong)param_3 + 0xc)) {
    TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo(param_3,uVar3,iVar4,uVar8);
  }
LAB_142236bdc:
  uVar1 = *param_2->Code;
  pFVar14 = pFVar15;
  while (uVar1 != 'f') {
    iVar12 = *(int *)((longlong)param_3 + 8);
    *(int *)((longlong)param_3 + 8) = iVar12 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow(param_3,iVar12,iVar4,uVar8);
    }
    pFVar9 = pFVar15;
    if (*(int *)((longlong)param_3 + 8) != 0) {
      pFVar9 = (FProperty *)((longlong)iVar12 * _Size + *(longlong *)param_3);
    }
    if (((uint)(int)pFVar11->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)(pFVar11->_padding_ + 0x150))(pFVar11,pFVar9);
    }
    else {
      memset(pFVar9,0,_Size);
    }
    iVar12 = (int)pFVar14;
    uVar13 = iVar12 + 1;
    pFVar14 = (FProperty *)(ulonglong)uVar13;
    pFVar9 = pFVar15;
    if (*(int *)((longlong)param_3 + 8) != 0) {
      pFVar9 = (FProperty *)((longlong)iVar12 * _Size + *(longlong *)param_3);
    }
    bVar2 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar2])(param_2->Object,param_2,pFVar9);
    uVar1 = *param_2->Code;
  }
  if ((uVar13 != uVar3) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7634585018982986030>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xed2,"i == Num"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execArrayGetByRef @ 142236d10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execArrayGetByRef(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  FFieldClass *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FFieldClass *pFVar8;
  ulonglong uVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FProperty *pFVar15;
  ForAnyElementType FVar16;
  byte bVar17;
  FProperty *pFVar18;
  FProperty *pFVar19;
  int local_res10 [2];
  void *local_res18;
  undefined1 local_res20 [8];
  FString local_108;
  undefined1 local_f8 [8];
  FBlueprintExceptionInfo local_f0;
  TSharedPtr<FCulture,1> local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  pFVar18 = (FProperty *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  bVar17 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  local_res18 = param_3;
  (*GNatives.Elements[bVar17])(param_2->Object,param_2,(void *)0x0);
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"ScriptCore",L"ArrayGetRefException",
                           L"Attempt to assign variable through None");
      ExceptionInfo.EventType = AccessViolation;
      ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar10->TextData).Reference;
      if (ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)
                      ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                  (ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
      }
      ExceptionInfo.Description.field0_0x0.TypedValue.Flags = pFVar10->Flags;
      if ((ExceptionInfo.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      atexit(`UObject::execArrayGetByRef'::__l5::_dynamic_atexit_destructor_for__ExceptionInfo__);
      _Init_thread_footer(&::_TSS0);
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&ExceptionInfo);
  }
  pFVar19 = param_2->MostRecentProperty;
  puVar2 = (ulonglong *)param_2->MostRecentPropertyAddress;
  if ((pFVar19 == (FProperty *)0x0) ||
     (pFVar3 = (FFieldClass *)pFVar19->_padding_, pFVar8 = FArrayProperty::StaticClass(),
     pFVar3 != pFVar8)) {
    pFVar19 = pFVar18;
  }
  bVar17 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar17])(param_2->Object,param_2,local_res10);
  if (pFVar19 == (FProperty *)0x0) {
    param_2->bArrayContextFailed = true;
  }
  else {
    lVar6 = pFVar19[1]._padding_;
    (**(code **)(*(longlong *)pFVar19[1]._padding_ + 0x168))();
    lVar4 = pFVar19[1]._padding_;
    iVar1 = *(int *)(lVar4 + 0x34);
    if ((iVar1 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_2->MostRecentProperty = (FProperty *)pFVar19[1]._padding_;
    if ((local_res10[0] < 0) || ((int)puVar2[1] <= local_res10[0])) {
      param_2->MostRecentPropertyAddress = (uchar *)0x0;
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      param_2->MostRecentPropertyContainer = (uchar *)0x0;
      param_2->MostRecentProperty = (FProperty *)0x0;
      pFVar10 = FText::AsNumber(&local_88,(int)puVar2[1],(FNumberFormattingOptions *)0x0,&local_c8);
      bVar7 = IsThisNotNull(pFVar19,"FField::GetName");
      if (bVar7) {
        ::FName::ToString((FName *)&pFVar19->_padding_,&local_108);
      }
      else {
        ::FString::FString(&local_108,L"None");
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar16.Data = local_108.Data.AllocatorInstance.Data;
      }
      pFVar11 = FText::FromString(&local_78,(wchar_t *)FVar16.Data);
      local_d8.Object = (FCulture *)0x0;
      local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = FText::AsNumber(&local_68,local_res10[0],(FNumberFormattingOptions *)0x0,&local_d8);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"ScriptCore",L"ArrayGetOutofBounds",
                           L"Attempted to access index {0} from array {1} of length {2}!");
      pFVar14 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
      pFVar10 = FText::Format<FText,FText,FText>(&local_a8,pFVar14,pFVar12,pFVar11,pFVar10);
      local_f0.EventType = AccessViolation;
      local_f0.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar10->TextData).Reference;
      if (local_f0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_f0.Description.field0_0x0.TypedValue.TextData.Reference + 8
                    ))(local_f0.Description.field0_0x0.TypedValue.TextData.Reference,local_f8);
      }
      local_f0.Description.field0_0x0.TypedValue.Flags = pFVar10->Flags;
      if ((local_f0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_f0);
      if (local_f0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_f0.Description.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
    }
    else {
      bVar17 = (byte)lVar6 & 1;
      pFVar15 = pFVar18;
      if ((int)puVar2[1] != 0) {
        uVar9 = *puVar2;
        if ((bVar17 != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar2;
        }
        pFVar15 = (FProperty *)((longlong)local_res10[0] * (longlong)iVar1 + uVar9);
      }
      param_2->MostRecentPropertyAddress = (uchar *)pFVar15;
      param_2->MostRecentPropertyContainer = (uchar *)0x0;
      if (local_res18 != (void *)0x0) {
        if ((int)puVar2[1] != 0) {
          uVar9 = *puVar2;
          if ((bVar17 != 0) && ((uVar9 & 1) != 0)) {
            uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar2;
          }
          pFVar18 = (FProperty *)((longlong)local_res10[0] * (longlong)iVar1 + uVar9);
        }
        (**(code **)(*(longlong *)pFVar19[1]._padding_ + 0x108))
                  ((longlong *)pFVar19[1]._padding_,local_res18,pFVar18);
      }
    }
  }
  return;
}

// execAssert @ 1422371b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execAssert(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  int local_res10 [2];
  FString local_18;
  
  puVar3 = param_2->Code;
  param_2->Code = puVar3 + 2;
  uVar1 = puVar3[2];
  param_2->Code = puVar3 + 3;
  local_res10[0] = 0;
  bVar2 = puVar3[3];
  param_2->Code = puVar3 + 4;
  (*GNatives.Elements[bVar2])(param_2->Object,param_2,local_res10);
  if (local_res10[0] == 0) {
    FFrame::GetStackTrace(param_2,&local_18);
    FOutputDevice::LogfImpl((FOutputDevice *)param_2,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (uVar1 != '\0') {
      FOutputDevice::LogfImpl((FOutputDevice *)param_2,Error,L"Assertion failed, line %i");
      return;
    }
    if (2 < (byte)LogScript._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                ((FLogScopedCategoryAndVerbosityOverride *)&local_18,(FName)LogScript._4_8_,Warning)
      ;
      FOutputDevice::LogfImpl((FOutputDevice *)param_2,L"Assertion failed, line %i");
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogScript,Warning);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                ((FLogScopedCategoryAndVerbosityOverride *)&local_18);
    }
  }
  return;
}

// execAutoRtfmAbortIfNot @ 1422372e0

void __cdecl UObject::execAutoRtfmAbortIfNot(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res10);
  return;
}

// execAutoRtfmStopTransact @ 142237320

void __cdecl UObject::execAutoRtfmStopTransact(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + 5;
  return;
}

// execAutoRtfmTransact @ 142237330

void __cdecl UObject::execAutoRtfmTransact(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 local_res10 [8];
  void *local_res18;
  undefined4 local_res20 [2];
  FFrame *local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  void **local_10;
  
  puVar2 = param_2->Code;
  local_res20[0] = *(undefined4 *)puVar2;
  param_2->Code = puVar2 + 4;
  uVar1 = *(uint *)(puVar2 + 4);
  param_2->Code = puVar2 + 8;
  uVar5 = 0;
  if ((int)uVar1 < (int)param_2->Node->_padding_) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  local_res18 = param_3;
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_20 = local_res20;
  local_res10[0] = 0;
  local_18 = local_res10;
  local_10 = &local_res18;
  local_28 = param_2;
  AutoRTFM::AutoRTFMFunctorInvoker<_UObject::execAutoRtfmTransact_::__l2::<lambda_1>_>(&local_28);
  return;
}

// execBindDelegate @ 1422373f0

void __cdecl UObject::execBindDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  atomic<unsigned___int64> aVar3;
  UObject *pUVar4;
  UObject *local_res10 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  UObject *local_48 [2];
  FDestructionSentinel local_38;
  
  puVar2 = param_2->Code;
  uStackX_24 = *(undefined4 *)(puVar2 + 8);
  local_48[0] = *(UObject **)puVar2;
  param_2->Code = puVar2 + 0xc;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = puVar2[0xc];
  local_res20 = local_48[0]._0_4_;
  param_2->Code = puVar2 + 0xd;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
         param_2->MostRecentPropertyAddress;
  local_res10[0] = (UObject *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res10);
  pUVar4 = local_res10[0];
  if (this != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_38);
    local_48[0] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)local_48);
    aVar3._4_4_ = uStackX_24;
    aVar3._0_4_ = local_res20;
    this[2].AccessDetector.State = aVar3;
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// execBitFieldConst @ 142237500

void __cdecl UObject::execBitFieldConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FBoolProperty *this;
  
  this = *(FBoolProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = (FProperty *)this;
  if ((this == (FBoolProperty *)0x0) || ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
    this = (FBoolProperty *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  FBoolProperty::SetPropertyValue(this,param_3,uVar1 != '\0');
  return;
}

// execBreakpoint @ 1422375b0

void __cdecl UObject::execBreakpoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FBlueprintExceptionInfo local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBlueprintCoreDelegates::OnScriptException);
  if (bVar1) {
    local_28.EventType = Breakpoint;
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_28.Description.field0_0x0.TypedValue.Flags = 0;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  return;
}

// execByteConst @ 142237610

void __cdecl UObject::execByteConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  
  uVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  *(uchar *)param_3 = uVar1;
  return;
}

// execCallMathFunction @ 142237630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execCallMathFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBaseUtility *pUVar1;
  undefined8 uVar2;
  UObjectBaseUtility *pUVar3;
  FName local_18;
  byte local_10;
  
  pUVar1 = *(UObjectBaseUtility **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  uVar2 = *(undefined8 *)(*(longlong *)&pUVar1->field_0x20 + 0x110);
  pUVar3 = (UObjectBaseUtility *)0x0;
  if ((int)(uint)param_2->DepthCounter <= GMaxFunctionStatDepth) {
    pUVar3 = pUVar1;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_18,pUVar3);
  (**(code **)&pUVar1[5].field_0x18)(uVar2,param_2,param_3);
  if ((local_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_10 & 4) != 0) {
    FThreadStats::AddMessage(local_18,CycleScopeEnd);
  }
  return;
}

// execCallMulticastDelegate @ 1422376f0

void __cdecl UObject::execCallMulticastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FCallDelegateHelper::CallMulticastDelegate(param_2);
  return;
}

// execCast @ 142237700

/* WARNING: Switch with 1 destination removed at 0x00014223771d : 255 cases all go to same
   destination */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execCast(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  uchar *puVar9;
  FString FStack_78;
  TSharedPtr<FCulture,1> TStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  FTextFormat FStack_18;
  
  param_2->Code = param_2->Code + 1;
  pUVar1 = param_2->Node;
  TStack_68.Object = (FCulture *)0x0;
  TStack_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  if (pUVar1 == (UFunction *)0x0) {
    puVar9 = (uchar *)0x0;
  }
  else {
    if (((int)pUVar1->_padding_ < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar9 = param_2->Code + (-1 - pUVar1->_padding_);
  }
  pFVar4 = FText::AsNumber(&FStack_38,(ulong64)puVar9,(FNumberFormattingOptions *)0x0,&TStack_68);
  ::FString::PrintfImpl(&FStack_78,L"0x%02X");
  pFVar5 = FText::FromString(&FStack_28,&FStack_78);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"ScriptCore",L"UndefinedOpcode",
                      L"Encountered an undefined opcode ({0}) at byte offset {1}. The compiler may have generated an instruction sequence that was unexpected or incomplete."
                     );
  pFVar7 = FTextFormat::FTextFormat(&FStack_18,pFVar6,Default);
  FText::Format<FText,FText>(&FStack_58,pFVar7,pFVar5,pFVar4);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  pFVar8 = FText::ToString(&FStack_58);
  FOutputDevice::Log((FOutputDevice *)param_2,Error,pFVar8);
  if (FStack_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_58.TextData.Reference + 0x10))();
  }
  return;
}

// execClassContext @ 142237730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execClassContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  UObject *pUVar3;
  uint *puVar4;
  code *pcVar5;
  UClass *pUVar6;
  bool bVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  undefined8 uVar11;
  FProperty *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  UClass *local_c8;
  FString local_c0;
  FBlueprintExceptionInfo local_b0;
  FBlueprintExceptionInfo local_98;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  local_c8 = (UClass *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_1,param_2,&local_c8);
  pUVar6 = local_c8;
  if ((local_c8 == (UClass *)0x0) || (((uint)local_c8->_padding_ >> 0x1e & 1) != 0)) {
    pFVar12 = param_2->MostRecentProperty;
    if (pFVar12 == (FProperty *)0x0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_60,L"ScriptCore",L"AccessedNoneClassUnknownProperty",
                          L"Accessed None reading a Class");
      local_98.EventType = AccessViolation;
      local_98.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
      if (local_98.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.Description.field0_0x0.TypedValue.TextData.Reference + 8
                    ))(local_98.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
      }
      local_98.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
      if (local_98.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_60.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_98);
      uVar11 = local_98.Description.field0_0x0.TypedValue.TextData.Reference;
    }
    else {
      bVar7 = IsThisNotNull(pFVar12,"FField::GetName");
      if (bVar7) {
        ::FName::ToString((FName *)&pFVar12->_padding_,&local_c0);
      }
      else {
        ::FString::FString(&local_c0,L"None");
      }
      pFVar8 = FText::FromString(&local_50,&local_c0);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_70,L"ScriptCore",L"AccessedNoneClass",
                          L"Accessed None trying to read Class from property {0}");
      pFVar10 = FTextFormat::FTextFormat(&local_40,pFVar9,Default);
      pFVar8 = FText::Format<FText>(&local_80,pFVar10,pFVar8);
      local_b0.EventType = AccessViolation;
      local_b0.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
      if (local_b0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b0.Description.field0_0x0.TypedValue.TextData.Reference + 8
                    ))(local_b0.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
      }
      local_b0.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
      if (local_b0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_b0);
      uVar11 = local_b0.Description.field0_0x0.TypedValue.TextData.Reference;
    }
    if ((ITextData *)uVar11 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)uVar11 + 0x10))();
    }
    puVar4 = (uint *)param_2->Code;
    uVar2 = *puVar4;
    param_2->Code = (uchar *)(puVar4 + 1);
    pFVar12 = *(FProperty **)(puVar4 + 1);
    param_2->Code = (uchar *)(puVar4 + 3);
    param_2->MostRecentProperty = pFVar12;
    if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0xf & 1) == 0)) {
      pFVar12 = (FProperty *)0x0;
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->Code = (uchar *)((ulonglong)uVar2 + (longlong)(puVar4 + 3));
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    param_2->MostRecentProperty = (FProperty *)0x0;
    if ((param_3 != (void *)0x0) && (pFVar12 != (FProperty *)0x0)) {
      if ((pFVar12->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
          (CPF_NoDestructor|CPF_ZeroConstructor)) {
        memset(param_3,0,(longlong)pFVar12->ElementSize);
      }
      else {
        (**(code **)(pFVar12->_padding_ + 0x130))(pFVar12,param_3);
      }
    }
  }
  else {
    if ((local_c8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(local_c8);
    }
    pUVar3 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultObject != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0x962,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    param_2->Code = param_2->Code + 0xc;
    bVar1 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar1])(pUVar3,param_2,param_3);
  }
  return;
}

// execClassSparseDataVariable @ 142237a80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execClassSparseDataVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  wchar_t *pwVar14;
  undefined1 local_res10 [16];
  FName local_res20;
  FString local_d8;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FBlueprintExceptionInfo local_a0;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pFVar2 = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = pFVar2;
  if (pFVar2 == (FProperty *)0x0) {
LAB_142237bad:
    ::FString::FString(&local_b0,L"None");
  }
  else {
    pUVar5 = GetSparseClassDataStruct(param_1);
    if (pUVar5 != (UScriptStruct *)0x0) {
      puVar6 = UClass::GetSparseClassData(*(UClass **)&param_1->field_0x10,ArchetypeIfNull);
      if ((pFVar2->ArrayDim < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((puVar6 == (uchar *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pFVar2->Offset_Internal;
      param_2->MostRecentPropertyContainer = puVar6;
      param_2->MostRecentPropertyAddress = puVar6 + iVar1;
      if (param_3 == (void *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000142237b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar2->_padding_ + 0x110))(pFVar2,param_3,puVar6);
      return;
    }
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    bVar4 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pUVar7);
    if (bVar4) {
      uVar8 = pFVar2->_padding_ & 0xfffffffffffffffe;
    }
    else {
      uVar8 = 0;
    }
    if (uVar8 == 0) goto LAB_142237bad;
    local_res20 = *(FName *)(uVar8 + 0x18);
    ::FName::ToString(&local_res20,&local_b0);
  }
  pFVar9 = FText::FromString(&local_68,&local_b0);
  pUVar5 = GetSparseClassDataStruct(param_1);
  if (pUVar5 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_c0,L"None");
  }
  else {
    local_c8 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_c8,&local_c0);
  }
  pFVar10 = FText::FromString(&local_58,&local_c0);
  if (pFVar2 == (FProperty *)0x0) {
    pwVar14 = L"none";
  }
  else {
    bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&local_d8);
      goto LAB_142237c59;
    }
    pwVar14 = L"None";
  }
  ::FString::FString(&local_d8,pwVar14);
LAB_142237c59:
  pFVar11 = FText::FromString(&local_48,&local_d8);
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"ScriptCore",L"MissingSparseProperty",
                       L"Attempted to access missing sparse property \'{0}\' {1}, {2}. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                      );
  pFVar13 = FTextFormat::FTextFormat(&local_38,pFVar12,Default);
  pFVar9 = FText::Format<FText,FText,FText>(&local_88,pFVar13,pFVar11,pFVar10,pFVar9);
  local_a0.EventType = AccessViolation;
  local_a0.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar9->TextData).Reference;
  if (local_a0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_a0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_a0.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_a0.Description.field0_0x0.TypedValue.Flags = pFVar9->Flags;
  if ((local_a0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_a0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (local_a0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_a0.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  return;
}

// execClearMulticastDelegate @ 142237da0

void __cdecl UObject::execClearMulticastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar2 = param_2->MostRecentProperty;
  if (pFVar2 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x19 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult || !Src",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x48c,L"CastFieldCheckedNullAllowed failed with 0x%016llx");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142237e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar2->_padding_ + 0x1f0))(pFVar2,0);
      return;
    }
  }
  return;
}

// execComputedJump @ 142237e50

void __cdecl UObject::execComputedJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  UFunction *pUVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FBlueprintContextTracker *this;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  code *local_28;
  undefined1 *local_20;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FBlueprintContextTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  this->Runaway = this->Runaway + 1;
  if ((char)this->Runaway == '\0') {
    FBlueprintContextTracker::EnforceScriptTimeLimit(this);
  }
  local_res20[0] = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res20);
  if ((((int)param_2->Node->_padding_ <= (int)local_res20[0]) || ((int)local_res20[0] < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ComputedOffset < Stack.Node->Script.Num()) && (ComputedOffset >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xa0f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = local_res20[0];
  pUVar2 = param_2->Node;
  uVar6 = 0;
  if ((int)local_res20[0] < (int)pUVar2->_padding_) {
    uVar6 = ~local_res20[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->Code = (uchar *)((longlong)(int)uVar4 + pUVar2->_padding_);
  return;
}

// execContext @ 142237f70

void __cdecl UObject::execContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  ProcessContextOpcode(param_1,param_2,param_3,false);
  return;
}

// execContext_FailSilent @ 142237f80

void __cdecl UObject::execContext_FailSilent(UObject *param_1,FFrame *param_2,void *param_3)

{
  ProcessContextOpcode(param_1,param_2,param_3,true);
  return;
}

// execDefaultVariable @ 142237f90

void __cdecl UObject::execDefaultVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *this;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  FText *pFVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  FBlueprintExceptionInfo local_48;
  FBlueprintExceptionInfo local_30;
  
  this = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = this;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pUVar7 = param_1;
  if ((*(uint *)&param_1->field_0x8 >> 4 & 1) == 0) {
    pUVar7 = (UObject *)0x0;
  }
  if (this != (FProperty *)0x0) {
    if (pUVar7 == (UObject *)0x0) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"ScriptCore",L"AccessNoneDefaultObject",
                          L"Accessed None attempting to read a default property");
      local_48.EventType = AccessViolation;
      local_48.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
      if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference + 8
                    ))(local_48.Description.field0_0x0.TypedValue.TextData.Reference,local_res8);
      }
      local_48.Description.field0_0x0.TypedValue.Flags = pFVar5->Flags;
      if ((local_48.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_48);
      uVar6 = local_48.Description.field0_0x0.TypedValue.TextData.Reference;
      goto LAB_142238198;
    }
    uVar8 = this->_padding_ & 0xfffffffffffffffe;
    iVar1 = *(int *)(uVar8 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        == uVar8 + 0x30)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,pUVar7,0);
      param_2->MostRecentPropertyAddress = puVar4;
      param_2->MostRecentPropertyContainer = (uchar *)pUVar7;
      if (param_3 == (void *)0x0) {
        return;
      }
      (**(code **)(this->_padding_ + 0x110))(this,param_3,pUVar7);
      return;
    }
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ScriptCore",L"MissingPropertyDefaultObject",
                      L"Attempted to access a missing property on a CDO. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                     );
  local_30.EventType = AccessViolation;
  local_30.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
  if (local_30.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_30.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_30.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_30.Description.field0_0x0.TypedValue.Flags = pFVar5->Flags;
  if ((local_30.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_30);
  uVar6 = local_30.Description.field0_0x0.TypedValue.TextData.Reference;
LAB_142238198:
  if ((ITextData *)uVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar6 + 0x10))();
  }
  return;
}

// execDoubleConst @ 1422381c0

void __cdecl UObject::execDoubleConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2->Code;
  param_2->Code = param_2->Code + 8;
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execDoubleToFloatCast @ 1422381e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execDoubleToFloatCast(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  if ((param_2->MostRecentProperty != (FProperty *)0x0) &&
     ((double *)param_2->MostRecentPropertyAddress != (double *)0x0)) {
    *(float *)param_3 = (float)*(double *)param_2->MostRecentPropertyAddress;
    return;
  }
  if (5 < (byte)LogScript._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
  }
  return;
}

// execDynamicCast @ 142238270

void __cdecl UObject::execDynamicCast(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  uchar *puVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  UObject *local_res10;
  
  puVar3 = param_2->Code;
  pUVar4 = *(UClass **)puVar3;
  param_2->Code = puVar3 + 8;
  local_res10 = (UObject *)0x0;
  bVar1 = puVar3[8];
  param_2->Code = puVar3 + 9;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_res10);
  *(undefined8 *)param_3 = 0;
  if (pUVar4 != (UClass *)0x0) {
    uVar7 = pUVar4->ClassFlags >> 0xe;
    if (local_res10 == (UObject *)0x0) {
      if ((uVar7 & 1) != 0) {
        *(undefined8 *)((longlong)param_3 + 8) = 0;
      }
      *(undefined8 *)param_3 = 0;
      return;
    }
    if ((uVar7 & 1) == 0) {
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&local_res10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&local_res10->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        *(UObject **)param_3 = local_res10;
      }
    }
    else {
      bVar6 = UClass::ImplementsInterface(*(UClass **)&local_res10->field_0x10,pUVar4);
      pUVar5 = local_res10;
      if (bVar6) {
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_res10 == (UObject *)0x0))
        {
          *(UObject **)param_3 = local_res10;
          if (local_res10 == (UObject *)0x0) {
            *(undefined8 *)((longlong)param_3 + 8) = 0;
          }
        }
        else {
          UE::GC::MarkAsReachable(local_res10);
          *(UObject **)param_3 = pUVar5;
        }
        pvVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)local_res10,pUVar4);
        *(void **)((longlong)param_3 + 8) = pvVar8;
        return;
      }
    }
  }
  return;
}

// execEndFunctionParms @ 1422383a0

void __cdecl UObject::execEndFunctionParms(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + -1;
  return;
}

// execEndOfScript @ 1422383b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execEndOfScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_28;
  FString local_18;
  
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_2->Object,&local_18,(UObject *)0x0,None);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2->Node,&local_28,(UObject *)0x0,None)
  ;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFalse @ 142238460

void __cdecl UObject::execFalse(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined1 *)param_3 = 0;
  return;
}

// execFieldPathConst @ 142238470

void __cdecl UObject::execFieldPathConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  byte bVar3;
  ForAnyElementType _Src;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *local_38;
  undefined8 local_30;
  FFieldPath local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  bVar3 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_38);
  local_28.ResolvedField = (FField *)0x0;
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  local_28.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_28.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Path.ArrayNum = 0;
  local_28.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_28,pwVar5);
  _Src.Data = local_28.Path.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x10);
  *(FField **)param_3 = local_28.ResolvedField;
  *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_28.ResolvedOwner.WeakPtr;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar1 != &local_28.Path) {
    iVar4 = local_28.Path.ArrayNum;
    lVar6 = (longlong)local_28.Path.ArrayNum;
    piVar2 = (int *)((longlong)param_3 + 0x1c);
    *(int *)((longlong)param_3 + 0x18) = local_28.Path.ArrayNum;
    if ((local_28.Path.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_28.Path.ArrayNum,*piVar2,pFVar1,local_28.Path.ArrayNum,piVar2);
      if (iVar4 != 0) {
        memcpy(pFVar1->Data,_Src.Data,lVar6 << 3);
      }
    }
  }
  if (local_28.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Path.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execFinalFunction @ 1422385b0

void __cdecl UObject::execFinalFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *pUVar1;
  
  pUVar1 = *(UFunction **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  CallFunction(param_1,param_2,param_3,pUVar1);
  return;
}

// execFloatConst @ 1422385d0

void __cdecl UObject::execFloatConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_2->Code;
  param_2->Code = param_2->Code + 4;
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execFloatToDoubleCast @ 1422385f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execFloatToDoubleCast(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  if ((param_2->MostRecentProperty != (FProperty *)0x0) &&
     ((float *)param_2->MostRecentPropertyAddress != (float *)0x0)) {
    *(double *)param_3 = (double)*(float *)param_2->MostRecentPropertyAddress;
    return;
  }
  if (5 < (byte)LogScript._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
  }
  return;
}

// execInstanceDelegate @ 142238680

void __cdecl UObject::execInstanceDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  uchar *puVar2;
  EAccessType EVar3;
  UObject *local_res10;
  FDestructionSentinel local_28;
  
  puVar2 = param_2->Code;
  iVar1 = *(int *)(puVar2 + 8);
  local_28._0_8_ = *(undefined8 *)puVar2;
  param_2->Code = puVar2 + 0xc;
  EVar3 = local_28.AccessType;
  if (iVar1 == 0 && local_28.AccessType == Reader) {
    param_1 = (UObject *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_3,(FWriteAccessScope *)&local_28);
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_3 + 8),(FObjectPtr)&local_res10);
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(iVar1,EVar3);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// execInstanceVariable @ 142238730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execInstanceVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *this;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  undefined1 local_res10 [8];
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FBlueprintExceptionInfo local_28;
  
  this = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = this;
  if (this == (FProperty *)0x0) {
LAB_1422387f9:
    pwVar8 = L"none";
  }
  else {
    uVar9 = this->_padding_ & 0xfffffffffffffffe;
    iVar1 = *(int *)(uVar9 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        == uVar9 + 0x30)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      param_2->MostRecentPropertyAddress = puVar4;
      param_2->MostRecentPropertyContainer = (uchar *)param_1;
      if (param_3 == (void *)0x0) {
        return;
      }
      (**(code **)(this->_padding_ + 0x110))(this,param_3,param_1);
      return;
    }
    if (this == (FProperty *)0x0) goto LAB_1422387f9;
    bVar3 = IsThisNotNull(this,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&this->_padding_,&local_78);
      goto LAB_14223880a;
    }
    pwVar8 = L"None";
  }
  ::FString::FString(&local_78,pwVar8);
LAB_14223880a:
  pFVar5 = FText::FromString(&local_48,&local_78);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ScriptCore",L"MissingProperty",
                      L"Attempted to access missing property \'{0}\'. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                     );
  pFVar7 = FTextFormat::FTextFormat(&local_38,pFVar6,Default);
  pFVar5 = FText::Format<FText>(&local_68,pFVar7,pFVar5);
  local_28.EventType = AccessViolation;
  local_28.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_28.Description.field0_0x0.TypedValue.Flags = pFVar5->Flags;
  if ((local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  return;
}

// execInstrumentation @ 142238940

void __cdecl UObject::execInstrumentation(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte *pbVar1;
  FNameEntryId local_48;
  FScriptInstrumentationSignal local_38;
  
  pbVar1 = param_2->Code;
  local_38.EventType = (Type)*pbVar1;
  local_38.ContextObject = param_1;
  local_38.StackFramePtr = param_2;
  if (local_38.EventType == InlineEvent) {
    local_38.EventType = (Type)*pbVar1;
    local_38.Function = param_2->Node;
    local_48.Value = (uint)*(undefined8 *)(pbVar1 + 1);
    local_38.EventName.Number = *(uint *)(pbVar1 + 9);
    local_38.EventName.ComparisonIndex.Value = local_48.Value;
    local_38.LatentLinkId = -1;
    FBlueprintCoreDelegates::InstrumentScriptEvent(&local_38);
    param_2->Code = param_2->Code + 0xd;
    return;
  }
  local_38.Function = param_2->Node;
  local_38.EventName.ComparisonIndex.Value = 0;
  local_38.EventName.Number = 0;
  local_38.LatentLinkId = -1;
  FBlueprintCoreDelegates::InstrumentScriptEvent(&local_38);
  param_2->Code = param_2->Code + 1;
  return;
}

// execInt64Const @ 1422389f0

void __cdecl UObject::execInt64Const(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2->Code;
  param_2->Code = param_2->Code + 8;
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIntConst @ 142238a10

void __cdecl UObject::execIntConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_2->Code;
  param_2->Code = param_2->Code + 4;
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIntConstByte @ 142238a30

void __cdecl UObject::execIntConstByte(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  *(uint *)param_3 = (uint)bVar1;
  return;
}

// execIntOne @ 142238a50

void __cdecl UObject::execIntOne(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined4 *)param_3 = 1;
  return;
}

// execIntZero @ 142238a60

void __cdecl UObject::execIntZero(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined4 *)param_3 = 0;
  return;
}

// execInterfaceCast @ 142238a70

void __cdecl UObject::execInterfaceCast(UObject *param_1,FFrame *param_2,void *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000142238a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*GCasts.Elements[0])(param_2->Object,param_2,param_3);
  return;
}

// execInterfaceContext @ 142238a90

void __cdecl UObject::execInterfaceContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_1,param_2,&local_18);
  if (param_3 != (void *)0x0) {
    *(undefined8 *)param_3 = local_18;
  }
  return;
}

// execInterfaceToBool @ 142238ae0

void __cdecl UObject::execInterfaceToBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_18);
  *(bool *)param_3 = local_18[0] != 0;
  return;
}

// execInterfaceToInterface @ 142238b30

void __cdecl UObject::execInterfaceToInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  UObject *this;
  bool bVar4;
  UClass *pUVar5;
  void *pvVar6;
  UClass *pUVar7;
  UObject *local_18;
  undefined8 uStack_10;
  
  pUVar7 = *(UClass **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  if (pUVar7 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) goto LAB_142238b8f;
  }
  pUVar7 = (UClass *)0x0;
LAB_142238b8f:
  pbVar3 = param_2->Code;
  local_18 = (UObject *)0x0;
  uStack_10 = 0;
  bVar1 = *pbVar3;
  param_2->Code = pbVar3 + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_18);
  this = local_18;
  if ((local_18 != (UObject *)0x0) &&
     (bVar4 = UClass::ImplementsInterface(*(UClass **)&local_18->field_0x10,pUVar7), bVar4)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    *(UObject **)param_3 = this;
    pvVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
    *(void **)((longlong)param_3 + 8) = pvVar6;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execInterfaceToObject @ 142238c30

void __cdecl UObject::execInterfaceToObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  lVar5 = *(longlong *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) goto LAB_142238c8f;
  }
  lVar5 = 0;
LAB_142238c8f:
  pbVar3 = param_2->Code;
  local_18[0] = 0;
  local_18[1] = 0;
  bVar1 = *pbVar3;
  param_2->Code = pbVar3 + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_18);
  if (local_18[0] != 0) {
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(local_18[0] + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_18[0] + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
      *(longlong *)param_3 = local_18[0];
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execJump @ 142238d10

void __cdecl UObject::execJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  UFunction *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBlueprintContextTracker *this;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FBlueprintContextTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  this->Runaway = this->Runaway + 1;
  if ((char)this->Runaway == '\0') {
    FBlueprintContextTracker::EnforceScriptTimeLimit(this);
  }
  pUVar2 = param_2->Node;
  uVar1 = *(uint *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  uVar5 = 0;
  if ((int)uVar1 < (int)pUVar2->_padding_) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_2->Code = (uchar *)((longlong)(int)uVar1 + pUVar2->_padding_);
  return;
}

// execJumpIfNot @ 142238de0

void __cdecl UObject::execJumpIfNot(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  uint *puVar2;
  UFunction *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FBlueprintContextTracker *this;
  char local_res10 [8];
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FBlueprintContextTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  this->Runaway = this->Runaway + 1;
  if ((char)this->Runaway == '\0') {
    FBlueprintContextTracker::EnforceScriptTimeLimit(this);
  }
  puVar2 = (uint *)param_2->Code;
  uVar1 = *puVar2;
  param_2->Code = (uchar *)(puVar2 + 1);
  local_res10[0] = '\0';
  uVar6 = puVar2[1];
  param_2->Code = (uchar *)((longlong)puVar2 + 5);
  (*GNatives.Elements[(byte)uVar6])(param_2->Object,param_2,local_res10);
  if (local_res10[0] == '\0') {
    pUVar3 = param_2->Node;
    uVar6 = 0;
    if ((int)uVar1 < (int)pUVar3->_padding_) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    param_2->Code = (uchar *)((longlong)(int)uVar1 + pUVar3->_padding_);
  }
  return;
}

// execLet @ 142238ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UObject::execLet(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  FProperty *this;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var3;
  UObject *pUVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 *puVar15;
  uchar *puVar16;
  uchar *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  undefined1 auStack_498 [40];
  uchar local_470 [992];
  undefined8 uStack_90;
  undefined1 local_88 [31];
  undefined1 auStack_69 [9];
  FBlueprintExceptionInfo local_60;
  FText local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)(auStack_69 + 1);
  puVar2 = param_2->Code;
  puVar17 = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  this = *(FProperty **)puVar2;
  param_2->Code = puVar2 + 8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  bVar1 = puVar2[8];
  param_2->Code = puVar2 + 9;
  uStack_90 = 0x142238f55;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  puVar18 = (uchar *)0x0;
  puVar2 = param_2->MostRecentPropertyContainer;
  puVar16 = puVar17;
  puVar19 = puVar18;
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    uStack_90 = 0x142238f84;
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"ScriptCore",L"LetAccessNone",L"Attempted to assign to None");
    local_60.EventType = AccessViolation;
    local_60.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
    if (local_60.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      uStack_90 = 0x142238fa8;
      (**(code **)((longlong)
                   *(ITextData *)local_60.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_60.Description.field0_0x0.TypedValue.TextData.Reference,auStack_69 + 1);
    }
    local_60.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
    if (local_60.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      uStack_90 = 0x142238fd7;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      uStack_90 = 0x142238fec;
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    uStack_90 = 0x142238ffb;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_60);
    if (this == (FProperty *)0x0) {
      puVar15 = auStack_498;
      param_2->MostRecentPropertyAddress = local_470;
      local_470[0] = '\0';
      local_470[1] = '\0';
      local_470[2] = '\0';
      local_470[3] = '\0';
      local_470[4] = '\0';
      local_470[5] = '\0';
      local_470[6] = '\0';
      local_470[7] = '\0';
      local_470[8] = '\0';
      local_470[9] = '\0';
      local_470[10] = '\0';
      local_470[0xb] = '\0';
      local_470[0xc] = '\0';
      local_470[0xd] = '\0';
      local_470[0xe] = '\0';
      local_470[0xf] = '\0';
    }
    else {
      puVar15 = local_88;
      if (this->ArrayDim * this->ElementSize != 0) {
        uStack_90 = 0x14223901f;
        iVar9 = (**(code **)(this->_padding_ + 0x168))(this);
        iVar14 = this->ArrayDim * this->ElementSize;
        if (iVar9 < 0x11) {
          puVar15 = local_88;
          if (iVar14 != 0) {
            uVar13 = (longlong)(iVar14 + 0xf) + 0xf;
            if (uVar13 <= (ulonglong)(longlong)(iVar14 + 0xf)) {
              uVar13 = 0xffffffffffffff0;
            }
            uStack_90 = 0x142239058;
            puVar15 = local_88 + -(uVar13 & 0xfffffffffffffff0);
            puVar16 = (uchar *)((longlong)&local_60 + -(uVar13 & 0xfffffffffffffff0));
          }
        }
        else {
          uStack_90 = 0x142239076;
          iVar9 = (**(code **)(this->_padding_ + 0x168))(this);
          uStack_90 = 0x142239088;
          iVar10 = (**(code **)(this->_padding_ + 0x168))(this);
          uVar12 = (ulonglong)(iVar10 + -1 + iVar14);
          uVar13 = uVar12 + 0xf;
          if (uVar13 <= uVar12) {
            uVar13 = 0xffffffffffffff0;
          }
          uStack_90 = 0x1422390ad;
          lVar6 = -(uVar13 & 0xfffffffffffffff0);
          puVar15 = local_88 + lVar6;
          pcVar5 = *(code **)(this->_padding_ + 0x168);
          *(undefined8 *)(local_88 + lVar6 + -8) = 0x1422390c1;
          iVar14 = (*pcVar5)(this);
          puVar16 = (uchar *)((longlong)-iVar14 & (ulonglong)(auStack_69 + iVar9 + lVar6));
        }
      }
      if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
        pcVar5 = *(code **)(this->_padding_ + 0x150);
        *(undefined8 *)(puVar15 + -8) = 0x142239102;
        (*pcVar5)(this,puVar16);
        param_2->MostRecentPropertyAddress = puVar16;
      }
      else {
        iVar9 = this->ArrayDim;
        iVar14 = this->ElementSize;
        *(undefined8 *)(puVar15 + -8) = 0x1422390ed;
        memset(puVar16,0,(longlong)iVar9 * (longlong)iVar14);
        param_2->MostRecentPropertyAddress = puVar16;
      }
    }
    puVar19 = puVar17;
    if (local_60.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      pcVar5 = *(code **)((longlong)
                          *(ITextData *)
                           local_60.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
      *(undefined8 *)(puVar15 + -8) = 0x14223913f;
      (*pcVar5)();
      puVar19 = puVar18;
    }
  }
  else {
    puVar15 = local_88;
    if (this != (FProperty *)0x0) {
      uStack_90 = 0x142239156;
      cVar8 = (**(code **)(this->_padding_ + 0x70))(this);
      puVar15 = local_88;
      if (cVar8 != '\0') {
        puVar15 = local_88;
        if (this->ArrayDim * this->ElementSize != 0) {
          uStack_90 = 0x142239179;
          iVar9 = (**(code **)(this->_padding_ + 0x168))(this);
          iVar14 = this->ArrayDim * this->ElementSize;
          if (iVar9 < 0x11) {
            puVar15 = local_88;
            if (iVar14 != 0) {
              uVar13 = (longlong)(iVar14 + 0xf) + 0xf;
              if (uVar13 <= (ulonglong)(longlong)(iVar14 + 0xf)) {
                uVar13 = 0xffffffffffffff0;
              }
              uStack_90 = 0x1422391b2;
              puVar15 = local_88 + -(uVar13 & 0xfffffffffffffff0);
              puVar17 = (uchar *)((longlong)&local_60 + -(uVar13 & 0xfffffffffffffff0));
            }
          }
          else {
            uStack_90 = 0x1422391d0;
            iVar9 = (**(code **)(this->_padding_ + 0x168))(this);
            uStack_90 = 0x1422391e2;
            iVar10 = (**(code **)(this->_padding_ + 0x168))(this);
            uVar12 = (ulonglong)(iVar10 + -1 + iVar14);
            uVar13 = uVar12 + 0xf;
            if (uVar13 <= uVar12) {
              uVar13 = 0xffffffffffffff0;
            }
            uStack_90 = 0x142239207;
            lVar6 = -(uVar13 & 0xfffffffffffffff0);
            puVar15 = local_88 + lVar6;
            pcVar5 = *(code **)(this->_padding_ + 0x168);
            *(undefined8 *)(local_88 + lVar6 + -8) = 0x14223921b;
            iVar14 = (*pcVar5)(this);
            puVar17 = (uchar *)((longlong)-iVar14 & (ulonglong)(auStack_69 + iVar9 + lVar6));
          }
        }
        if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
          pcVar5 = *(code **)(this->_padding_ + 0x150);
          *(undefined8 *)(puVar15 + -8) = 0x142239258;
          (*pcVar5)(this,puVar17);
        }
        else {
          iVar9 = this->ArrayDim;
          iVar14 = this->ElementSize;
          *(undefined8 *)(puVar15 + -8) = 0x142239247;
          memset(puVar17,0,(longlong)iVar9 * (longlong)iVar14);
        }
        puVar19 = param_2->MostRecentPropertyAddress;
        param_2->MostRecentPropertyAddress = puVar17;
        puVar16 = puVar17;
      }
    }
  }
  puVar17 = param_2->MostRecentPropertyAddress;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  p_Var3 = GNatives.Elements[bVar1];
  pUVar4 = param_2->Object;
  *(undefined8 *)(puVar15 + -8) = 0x142239287;
  (*p_Var3)(pUVar4,param_2,puVar17);
  if (this != (FProperty *)0x0) {
    pcVar5 = *(code **)(this->_padding_ + 0x70);
    *(undefined8 *)(puVar15 + -8) = 0x142239295;
    cVar8 = (*pcVar5)(this);
    if ((cVar8 != '\0') && (puVar2 != (uchar *)0x0)) {
      *(undefined8 *)(puVar15 + -8) = 0x1422392ac;
      FProperty::SetValue_InContainer(this,puVar2,puVar16);
      param_2->MostRecentPropertyAddress = puVar19;
    }
    if ((puVar16 != (uchar *)0x0) && ((this->PropertyFlags & CPF_NoDestructor) == CPF_None)) {
      pcVar5 = *(code **)(this->_padding_ + 0x138);
      *(undefined8 *)(puVar15 + -8) = 0x1422392d4;
      (*pcVar5)(this,puVar16);
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x1422392e0;
  return;
}

// execLetBool @ 142239310

void __cdecl UObject::execLetBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  FFieldClass *pFVar4;
  FProperty *pFVar5;
  byte *pbVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  FFieldClass *pFVar10;
  FBoolProperty *this;
  char local_res10 [16];
  bool local_res20 [8];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  this = (FBoolProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  puVar3 = param_2->MostRecentPropertyContainer;
  if ((this == (FBoolProperty *)0x0) ||
     (pFVar4 = (FFieldClass *)this->_padding_, pFVar10 = FBoolProperty::StaticClass(),
     pFVar4 != pFVar10)) {
    pFVar5 = param_2->MostRecentProperty;
    this = (FBoolProperty *)0x0;
    if (((pFVar5 != (FProperty *)0x0) &&
        (pFVar4 = (FFieldClass *)pFVar5->_padding_, pFVar10 = FArrayProperty::StaticClass(),
        this = (FBoolProperty *)0x0, pFVar4 == pFVar10)) &&
       ((this = (FBoolProperty *)pFVar5[1]._padding_, this == (FBoolProperty *)0x0 ||
        (pFVar4 = (FFieldClass *)this->_padding_, pFVar10 = FBoolProperty::StaticClass(),
        pFVar4 != pFVar10)))) {
      this = (FBoolProperty *)0x0;
    }
  }
  pbVar6 = param_2->Code;
  local_res10[0] = '\0';
  bVar1 = *pbVar6;
  param_2->Code = pbVar6 + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res10);
  if (puVar2 != (uchar *)0x0) {
    local_res20[0] = local_res10[0] != '\0';
    cVar8 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar8 != '\0') {
      if ((puVar3 == (uchar *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PropertyContainer != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                             ,0xbde,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FProperty::SetValue_InContainer((FProperty *)this,puVar3,local_res20);
      return;
    }
    FBoolProperty::SetPropertyValue(this,puVar2,local_res20[0]);
  }
  return;
}

// execLetDelegate @ 1422394a0

void __cdecl UObject::execLetDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  atomic<unsigned___int64> aVar2;
  UObject *pUVar3;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FWeakObjectPtr local_60;
  atomic<unsigned___int64> local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
         param_2->MostRecentPropertyAddress;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_58 = (atomic<unsigned___int64>)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_68);
  if (this != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_38);
    aVar2 = local_58;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    pUVar3 = FWeakObjectPtr::Get(&local_60);
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_38);
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    this[2].AccessDetector.State = aVar2;
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execLetMulticastDelegate @ 1422395e0

void __cdecl UObject::execLetMulticastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FProperty *pFVar7;
  bool bVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  FReadAccessScope local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar7 = param_2->MostRecentProperty;
  if ((((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x19 & 1) == 0)) &&
      (bVar8 = pFVar7 != (FProperty *)0x0, pFVar7 = (FProperty *)0x0, bVar8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult || !Src",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x48c,L"CastFieldCheckedNullAllowed failed with 0x%016llx"),
     pFVar7 = (FProperty *)0x0, bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_68);
  if ((pFVar7 != (FProperty *)0x0) && (puVar2 != (uchar *)0x0)) {
    local_50 = 0;
    pcVar3 = *(code **)(pFVar7->_padding_ + 0x1d8);
    local_48 = (void *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_38);
    pvVar4 = local_60;
    uVar5 = (undefined4)local_58;
    uVar6 = local_58._4_4_;
    local_60 = (void *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    local_48 = pvVar4;
    local_40 = uVar5;
    local_3c = uVar6;
    (*pcVar3)(pFVar7,puVar2,&local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execLetObj @ 1422397b0

void __cdecl UObject::execLetObj(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  FFieldClass *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FText *pFVar8;
  FFieldClass *pFVar9;
  FObjectPropertyBase *this;
  undefined1 local_res10 [16];
  UObject *local_res20;
  FText local_58;
  FBlueprintExceptionInfo local_48;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"ScriptCore",L"LetObjAccessNone",
                        L"Accessed None attempting to assign variable on an object");
    local_48.EventType = AccessViolation;
    local_48.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_48.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_48.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_48);
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  this = (FObjectPropertyBase *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  puVar3 = param_2->MostRecentPropertyContainer;
  if (this != (FObjectPropertyBase *)0x0) {
    pFVar4 = (FFieldClass *)this->_padding_;
    if (((uint)(int)pFVar4->CastFlags >> 0x1a & 1) != 0) goto LAB_142239902;
    if (this != (FObjectPropertyBase *)0x0) {
      pFVar9 = FArrayProperty::StaticClass();
      if (((pFVar4 == pFVar9) &&
          (this = (FObjectPropertyBase *)this[1]._padding_, this != (FObjectPropertyBase *)0x0)) &&
         ((*(uint *)(this->_padding_ + 0x18) >> 0x1a & 1) != 0)) goto LAB_142239902;
    }
  }
  this = (FObjectPropertyBase *)0x0;
LAB_142239902:
  local_res20 = (UObject *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_res20);
  if (puVar2 != (uchar *)0x0) {
    cVar7 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar7 == '\0') {
      FObjectPropertyBase::SetObjectPropertyValue(this,puVar2,local_res20);
    }
    else {
      if (puVar3 == (uchar *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyContainer != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                           ,0xb73,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FProperty::SetValue_InContainer((FProperty *)this,puVar3,&local_res20);
    }
  }
  return;
}

// execLetValueOnPersistentFrame @ 1422399c0

/* WARNING: Switch with 1 destination removed at 0x000142239b21 : 255 cases all go to same
   destination */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execLetValueOnPersistentFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  FProperty *this;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  FString *pFVar12;
  uchar *puVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  TSharedPtr<FCulture,1> TStack_68;
  FText FStack_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FString local_18;
  
  pwVar14 = L"";
  param_2->MostRecentProperty = (FProperty *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = this;
  if (this == (FProperty *)0x0) {
    uStack_70._0_4_ = 0x42239a27;
    uStack_70._4_4_ = 1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                       ,0x189,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_70._0_4_ = 0x42239a35;
  uStack_70._4_4_ = 1;
  pUVar9 = FField::GetOwnerStruct((FField *)this);
  if (pUVar9 == (UStruct *)0x0) {
    uStack_70._0_4_ = 0x42239b2e;
    uStack_70._4_4_ = 1;
    pFVar12 = GetTypeName<UFunction>((FString *)&local_38);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    uStack_70 = &UNK_142239b46;
    CastLogError(L"nullptr",pwVar14);
  }
  uStack_70._0_4_ = 0x42239a46;
  uStack_70._4_4_ = 1;
  pUVar10 = Z_Construct_UClass_UFunction_NoRegister();
  iVar1 = (int)pUVar10->_padding_;
  if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar10->_padding_)) {
    uStack_70._0_4_ = 0x42239b51;
    uStack_70._4_4_ = 1;
    pFVar12 = GetTypeName<UFunction>((FString *)&local_28);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    uStack_70._0_4_ = 0x42239b6c;
    uStack_70._4_4_ = 1;
    pFVar12 = GetFullNameForCastLogError<UStruct>(&local_18,pUVar9);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    uStack_70 = &UNK_142239b80;
    CastLogError(pwVar14,pwVar15);
  }
  uStack_70._0_4_ = 0x42239a80;
  uStack_70._4_4_ = 1;
  lVar11 = (**(code **)(*(longlong *)pUVar9->_padding_ + 0x3a0))
                     ((longlong *)pUVar9->_padding_,param_2->Object,pUVar9);
  if (this->ArrayDim < 1) {
    local_48.TextData.Reference._0_4_ = 0;
    uStack_70._0_4_ = 0x42239ab3;
    uStack_70._4_4_ = 1;
    local_48.Flags = this->ArrayDim;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (lVar11 == 0) {
    uStack_70._0_4_ = 0x42239ada;
    uStack_70._4_4_ = 1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_2->Code = param_2->Code + 1;
  pUVar2 = param_2->Node;
  TStack_68.Object = (FCulture *)0x0;
  TStack_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  if (pUVar2 == (UFunction *)0x0) {
    puVar13 = (uchar *)0x0;
  }
  else {
    if (((int)pUVar2->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar13 = param_2->Code + (-1 - pUVar2->_padding_);
  }
  pFVar5 = FText::AsNumber(&local_38,(ulong64)puVar13,(FNumberFormattingOptions *)0x0,&TStack_68);
  ::FString::PrintfImpl((FString *)auStack_78,L"0x%02X");
  pFVar6 = FText::FromString(&local_28,(FString *)auStack_78);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ScriptCore",L"UndefinedOpcode",
                      L"Encountered an undefined opcode ({0}) at byte offset {1}. The compiler may have generated an instruction sequence that was unexpected or incomplete."
                     );
  pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar7,Default);
  FText::Format<FText,FText>(&FStack_58,pFVar8,pFVar6,pFVar5);
  if ((longlong *)CONCAT44(local_48.TextData.Reference._4_4_,local_48.TextData.Reference._0_4_) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_48.TextData.Reference._4_4_,local_48.TextData.Reference._0_4_) +
                0x10))();
  }
  if (auStack_78 != (undefined1  [8])0x0) {
    FMemory::Free((void *)auStack_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  pFVar12 = FText::ToString(&FStack_58);
  FOutputDevice::Log((FOutputDevice *)param_2,Error,pFVar12);
  if (FStack_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_58.TextData.Reference + 0x10))();
  }
  return;
}

// execLetWeakObjPtr @ 142239b90

void __cdecl UObject::execLetWeakObjPtr(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  FFieldClass *pFVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  char cVar8;
  FText *pFVar9;
  FFieldClass *pFVar10;
  FObjectPropertyBase *this;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res20;
  UObject *local_68;
  UObject *local_60;
  FText local_58;
  FBlueprintExceptionInfo local_48;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"ScriptCore",L"LetWeakObjAccessNone",
                        L"Accessed None attempting to assign variable on a weakly referenced object"
                       );
    local_48.EventType = AccessViolation;
    local_48.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar9->TextData).Reference;
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_48.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_48.Description.field0_0x0.TypedValue.Flags = pFVar9->Flags;
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_48);
    if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  this = (FObjectPropertyBase *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  puVar3 = param_2->MostRecentPropertyContainer;
  if (this != (FObjectPropertyBase *)0x0) {
    pFVar4 = (FFieldClass *)this->_padding_;
    if (((uint)(int)pFVar4->CastFlags >> 0x1a & 1) != 0) goto LAB_142239ce3;
    if (this != (FObjectPropertyBase *)0x0) {
      pFVar10 = FArrayProperty::StaticClass();
      if (((pFVar4 == pFVar10) &&
          (this = (FObjectPropertyBase *)this[1]._padding_, this != (FObjectPropertyBase *)0x0)) &&
         ((*(uint *)(this->_padding_ + 0x18) >> 0x1a & 1) != 0)) goto LAB_142239ce3;
    }
  }
  this = (FObjectPropertyBase *)0x0;
LAB_142239ce3:
  local_68 = (UObject *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_68);
  if (puVar2 != (uchar *)0x0) {
    cVar8 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar8 == '\0') {
      FObjectPropertyBase::SetObjectPropertyValue(this,puVar2,local_68);
    }
    else {
      if (puVar3 == (uchar *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyContainer != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                           ,0xba2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pUVar6 = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_60 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_60);
      FProperty::SetValue_InContainer((FProperty *)this,puVar3,&local_res20);
    }
  }
  return;
}

// execLocalFinalFunction @ 142239df0

void __cdecl UObject::execLocalFinalFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *pUVar1;
  
  pUVar1 = *(UFunction **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  ProcessLocalFunction(param_1,pUVar1,param_2,param_3);
  return;
}

// execLocalOutVariable @ 142239e20

void __cdecl UObject::execLocalOutVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FOutParmRec *pFVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  
  pFVar1 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar1;
  if ((pFVar1 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                         ,0x189,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->OutParms;
  pFVar3 = pFVar2->Property;
  while (pFVar3 != pFVar1) {
    pFVar2 = pFVar2->NextOutParm;
    pFVar3 = pFVar2->Property;
  }
  puVar4 = pFVar2->PropAddr;
  param_2->MostRecentPropertyAddress = puVar4;
  if ((param_3 != (void *)0x0) && (param_3 != puVar4)) {
    (**(code **)(pFVar1->_padding_ + 0x108))(pFVar1,param_3);
  }
  return;
}

// execLocalVariable @ 142239ec0

void __cdecl UObject::execLocalVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res10 [8];
  FText local_38;
  FBlueprintExceptionInfo local_28;
  
  pFVar1 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar1;
  if (pFVar1 == (FProperty *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                       ,0x189,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"ScriptCore",L"MissingLocalVariable",
                        L"Attempted to access missing local variable. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                       );
    local_28.EventType = AccessViolation;
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_28.Description.field0_0x0.TypedValue.Flags = pFVar5->Flags;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  else {
    puVar2 = param_2->Locals;
    if (pFVar1->ArrayDim < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar2 == (uchar *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->MostRecentPropertyAddress = puVar2 + pFVar1->Offset_Internal;
    param_2->MostRecentPropertyContainer = param_2->Locals;
    if (param_3 != (void *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x110))(pFVar1,param_3);
    }
  }
  return;
}

// execLocalVirtualFunction @ 14223a090

void __cdecl UObject::execLocalVirtualFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uchar *puVar3;
  FName FVar4;
  UFunction *pUVar5;
  FNameEntryId local_18;
  
  puVar3 = param_2->Code;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(uint *)(puVar3 + 8);
  param_2->Code = puVar3 + 0xc;
  local_18.Value = (uint)uVar1;
  FVar4.Number = uVar2;
  FVar4.ComparisonIndex.Value = local_18.Value;
  pUVar5 = FindFunctionChecked(param_1,FVar4);
  ProcessLocalFunction(param_1,pUVar5,param_2,param_3);
  return;
}

// execMapConst @ 14223a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UObject::execMapConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptSparseArrayLayout *pFVar1;
  uchar uVar2;
  byte bVar3;
  int iVar4;
  TScriptBitArray<TMemoryImageAllocator<0>,void> *pTVar5;
  code *pcVar6;
  TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
  *pTVar7;
  FScriptMapHelper_u_16 FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uchar *puVar15;
  int iVar16;
  int iVar17;
  FProperty *pFVar18;
  TScriptBitArray<TMemoryImageAllocator<0>,void> *pTVar19;
  FProperty *pFVar20;
  undefined1 auStack_b8 [32];
  FProperty *local_98;
  FProperty *local_88;
  uint local_80 [2];
  <lambda_1> local_78;
  FScriptMapHelper local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar20 = (FProperty *)0x0;
  pFVar18 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar18;
  if ((pFVar18 == (FProperty *)0x0) ||
     (local_88 = pFVar18, (*(uint *)(pFVar18->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    local_88 = (FProperty *)0x0;
    local_98 = pFVar18;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar18 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar18;
  if (((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (local_98 = pFVar18,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar20, bVar9)
     ) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = *(int *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  if ((param_3 == (void *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Z_Param__Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xef1,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (**(code **)(pFVar18->_padding_ + 0x168))(pFVar18);
  iVar17 = pFVar18->ElementSize;
  iVar16 = pFVar18->ArrayDim;
  iVar11 = (**(code **)(local_88->_padding_ + 0x168))(local_88);
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  local_68.MapFlags = None;
  local_68.MapLayout.ValueOffset =
       local_88->ElementSize * local_88->ArrayDim + -1 + iVar10 & -iVar10;
  if (iVar10 < iVar11) {
    iVar10 = iVar11;
  }
  iVar11 = iVar10;
  if (iVar10 < 0) {
    iVar11 = 0;
  }
  local_68.MapLayout.SetLayout.HashNextIdOffset =
       (iVar10 + -1 + local_68.MapLayout.ValueOffset + iVar17 * iVar16 & ~(iVar10 - 1U)) + 3 &
       0xfffffffc;
  iVar17 = 4;
  if (4 < iVar11) {
    iVar17 = iVar11;
  }
  local_68.MapLayout.SetLayout.HashIndexOffset = local_68.MapLayout.SetLayout.HashNextIdOffset + 4;
  iVar16 = 4;
  if (4 < iVar17) {
    iVar16 = iVar17;
  }
  local_68.MapLayout.SetLayout.Size =
       ~(iVar16 - 1U) & local_68.MapLayout.SetLayout.HashNextIdOffset + 7U + iVar16;
  local_68.KeyProp = local_88;
  uVar12 = 8;
  if (8 < local_68.MapLayout.SetLayout.Size) {
    uVar12 = local_68.MapLayout.SetLayout.Size;
  }
  iVar17 = 4;
  if (4 < iVar16) {
    iVar17 = iVar16;
  }
  local_68.MapLayout.SetLayout.SparseArrayLayout.Size = uVar12;
  local_68.MapLayout.SetLayout.SparseArrayLayout.Alignment = iVar17;
  iVar17 = *(int *)((longlong)param_3 + 8) - *(int *)((longlong)param_3 + 0x34);
  local_68.ValueProp = pFVar18;
  local_68.field2_0x10 = (FScriptMapHelper_u_16)param_3;
  if (iVar17 == 0) {
    if (iVar4 == 0) goto LAB_14223a341;
  }
  else {
    FScriptMapHelper::DestructItems(&local_68,0,iVar17);
  }
  local_78.__this = &local_68;
  local_78.Slack = iVar4;
  FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
            (&local_68,&local_78);
LAB_14223a341:
  uVar2 = *param_2->Code;
  do {
    if (uVar2 == '@') {
      FScriptMapHelper::Rehash(&local_68);
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      return;
    }
    pFVar1 = &local_68.MapLayout.SetLayout.SparseArrayLayout;
    if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
      uVar12 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                   *)local_68.field2_0x10.HeapMap,pFVar1);
    }
    else {
      uVar12 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                   *)local_68.field2_0x10.HeapMap,pFVar1);
    }
    FScriptMapHelper::ConstructItem(&local_68,uVar12);
    FVar8 = local_68.field2_0x10;
    iVar4 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
      if (iVar4 == *(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).field_0x34)
      goto LAB_14223a458;
      if (((int)uVar12 < 0) ||
         (*(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).Hash <= (int)uVar12)) {
LAB_14223a4ed:
        bVar9 = false;
      }
      else {
        pTVar7 = &(local_68.field2_0x10.FreezableMap)->Pairs;
        if ((*(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).Hash <= (int)uVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = *(TScriptBitArray<TMemoryImageAllocator<0>,void> **)
                  &((FVar8.FreezableMap)->Pairs).Elements.FirstFreeIndex;
        pTVar19 = &(pTVar7->Elements).AllocationFlags;
        if (pTVar5 != (TScriptBitArray<TMemoryImageAllocator<0>,void> *)0x0) {
          pTVar19 = pTVar5;
        }
        uVar13 = uVar12;
        if ((int)uVar12 < 0) {
          uVar13 = uVar12 + 0x1f;
        }
        if ((*(uint *)(&(pTVar19->AllocatorInstance).field_0x0 + (longlong)((int)uVar13 >> 5) * 4)
             >> (uVar12 & 0x1f) & 1) == 0) goto LAB_14223a4ed;
        bVar9 = true;
      }
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12dd,
                             L"Invalid internal index. Use IsValidIndex before calling this method."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar18 = (FProperty *)
                ((longlong)(int)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * uVar12) +
                ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_);
    }
    else if (iVar4 == ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_14223a458:
      pFVar18 = pFVar20;
      if ((uVar12 != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternalIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12d9,
                             L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (((int)uVar12 < 0) ||
         (((local_68.field2_0x10.FreezableMap)->Pairs).Elements.AllocationFlags.NumBits <=
          (int)uVar12)) {
LAB_14223a407:
        bVar9 = false;
      }
      else {
        if ((((local_68.field2_0x10.FreezableMap)->Pairs).Elements.AllocationFlags.NumBits <=
             (int)uVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar15 = *(uchar **)
                   &((FVar8.FreezableMap)->Pairs).Elements.AllocationFlags.AllocatorInstance.
                    field_0x0;
        if (((ulonglong)puVar15 & 1) != 0) {
          puVar15 = (((TScriptBitArray<FDefaultBitArrayAllocator,void> *)
                     &(FVar8.HeapMap)->field_0x10)->AllocatorInstance).InlineData +
                    ((longlong)puVar15 >> 0x18);
        }
        uVar13 = uVar12;
        if ((int)uVar12 < 0) {
          uVar13 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar15 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
        goto LAB_14223a407;
        bVar9 = true;
      }
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12dd,
                             L"Invalid internal index. Use IsValidIndex before calling this method."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)
                 &((TScriptArray<TSizedDefaultAllocator<32>_> *)&(FVar8.HeapMap)->field_0x0)->
                  _padding_ + ((longlong)uVar14 >> 0x18);
      }
      pFVar18 = (FProperty *)
                ((longlong)(int)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * uVar12) +
                uVar14);
    }
    bVar3 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,pFVar18);
    FVar8 = local_68.field2_0x10;
    iVar4 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
      if (iVar4 == *(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).field_0x34)
      goto LAB_14223a619;
      local_80[0] = uVar12;
      bVar9 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_68,(<lambda_1> *)local_80);
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12f3,
                             L"Invalid internal index. Use IsValidIndex before calling this method."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar18 = (FProperty *)
                ((longlong)(int)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * uVar12) +
                 (longlong)local_68.MapLayout.ValueOffset +
                ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_);
    }
    else if (iVar4 == ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_14223a619:
      pFVar18 = pFVar20;
      if ((uVar12 != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternalIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12ef,
                             L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (((int)uVar12 < 0) ||
         (((local_68.field2_0x10.FreezableMap)->Pairs).Elements.AllocationFlags.NumBits <=
          (int)uVar12)) {
LAB_14223a5c2:
        bVar9 = false;
      }
      else {
        if ((((local_68.field2_0x10.FreezableMap)->Pairs).Elements.AllocationFlags.NumBits <=
             (int)uVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar15 = *(uchar **)
                   &((FVar8.FreezableMap)->Pairs).Elements.AllocationFlags.AllocatorInstance.
                    field_0x0;
        if (((ulonglong)puVar15 & 1) != 0) {
          puVar15 = (((TScriptBitArray<FDefaultBitArrayAllocator,void> *)
                     &(FVar8.HeapMap)->field_0x10)->AllocatorInstance).InlineData +
                    ((longlong)puVar15 >> 0x18);
        }
        uVar13 = uVar12;
        if ((int)uVar12 < 0) {
          uVar13 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar15 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
        goto LAB_14223a5c2;
        bVar9 = true;
      }
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x12f3,
                             L"Invalid internal index. Use IsValidIndex before calling this method."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)
                 &((TScriptArray<TSizedDefaultAllocator<32>_> *)&(FVar8.HeapMap)->field_0x0)->
                  _padding_ + ((longlong)uVar14 >> 0x18);
      }
      pFVar18 = (FProperty *)
                ((longlong)local_68.MapLayout.ValueOffset +
                (longlong)(int)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * uVar12) +
                uVar14);
    }
    bVar3 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,pFVar18);
    uVar2 = *param_2->Code;
  } while( true );
}

// execMetaCast @ 14223a720

void __cdecl UObject::execMetaCast(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  UClass *pUVar7;
  longlong local_res10;
  
  plVar3 = (longlong *)param_2->Code;
  lVar4 = *plVar3;
  param_2->Code = (uchar *)(plVar3 + 1);
  local_res10 = 0;
  bVar1 = *(byte *)(plVar3 + 1);
  param_2->Code = (uchar *)((longlong)plVar3 + 9);
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_res10);
  lVar6 = local_res10;
  if (local_res10 != 0) {
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         == &pUVar7->_padding_)) && (lVar4 != 0)) {
      if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        *(longlong *)param_3 = local_res10;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execNameConst @ 14223a800

void __cdecl UObject::execNameConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uchar *puVar3;
  undefined4 local_18;
  
  puVar3 = param_2->Code;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(undefined4 *)(puVar3 + 8);
  param_2->Code = puVar3 + 0xc;
  local_18 = (undefined4)uVar1;
  *(ulonglong *)param_3 = CONCAT44(uVar2,local_18);
  return;
}

// execNoObject @ 14223a840

void __cdecl UObject::execNoObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  return;
}

// execNothing @ 14223a850

void __cdecl UObject::execNothing(UObject *param_1,FFrame *param_2,void *param_3)

{
  return;
}

// execNothingInt32 @ 14223a860

void __cdecl UObject::execNothingInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + 4;
  return;
}

// execNothingOp4a @ 14223a870

void __cdecl UObject::execNothingOp4a(UObject *param_1,FFrame *param_2,void *param_3)

{
  return;
}

// execNullInterface @ 14223a880

void __cdecl UObject::execNullInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execObjectConst @ 14223a890

void __cdecl UObject::execObjectConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2->Code;
  param_2->Code = param_2->Code + 8;
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execObjectToBool @ 14223a8b0

void __cdecl UObject::execObjectToBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res10);
  *(bool *)param_3 = local_res10[0] != 0;
  return;
}

// execObjectToInterface @ 14223a900

void __cdecl UObject::execObjectToInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  void *pvVar7;
  UClass *pUVar8;
  UObject *local_res10;
  
  pUVar8 = *(UClass **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  if (pUVar8 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) goto LAB_14223a961;
  }
  pUVar8 = (UClass *)0x0;
LAB_14223a961:
  pbVar3 = param_2->Code;
  local_res10 = (UObject *)0x0;
  bVar1 = *pbVar3;
  param_2->Code = pbVar3 + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_res10);
  if ((local_res10 == (UObject *)0x0) ||
     (bVar5 = UClass::ImplementsInterface(*(UClass **)&local_res10->field_0x10,pUVar8),
     pUVar4 = local_res10, !bVar5)) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
    *(UObject **)param_3 = pUVar4;
    pvVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)local_res10,pUVar8);
    *(void **)((longlong)param_3 + 8) = pvVar7;
    return;
  }
  *(UObject **)param_3 = local_res10;
  if (local_res10 == (UObject *)0x0) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  pvVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)local_res10,pUVar8);
  *(void **)((longlong)param_3 + 8) = pvVar7;
  return;
}

// execPopExecutionFlow @ 14223aa20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execPopExecutionFlow(UObject *param_1,FFrame *param_2,void *param_3)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBlueprintContextTracker *this;
  uint uVar5;
  undefined1 local_res10 [8];
  code *local_28;
  undefined1 *local_20;
  FString local_18;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FBlueprintContextTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  this->Runaway = this->Runaway + 1;
  if ((char)this->Runaway == '\0') {
    FBlueprintContextTracker::EnforceScriptTimeLimit(this);
  }
  if ((param_2->FlowStack).ArrayNum == 0) {
    if (4 < (byte)LogScriptCore._0_1_) {
      FFrame::GetStackTrace(param_2,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FOutputDevice::LogfImpl((FOutputDevice *)param_2,Error,L"Tried to pop from an empty flow stack")
    ;
    return;
  }
  uVar4 = TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Pop
                    (&param_2->FlowStack,No);
  pUVar1 = param_2->Node;
  uVar5 = 0;
  if ((int)uVar4 < (int)pUVar1->_padding_) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_2->Code = (uchar *)((longlong)(int)uVar4 + pUVar1->_padding_);
  return;
}

// execPopExecutionFlowIfNot @ 14223ab50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UObject::execPopExecutionFlowIfNot(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  UFunction *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBlueprintContextTracker *this;
  uint uVar6;
  char local_res10 [8];
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  FString local_18;
  
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FBlueprintContextTracker *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                    &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                     ::__l2::TlsSlot);
  this->Runaway = this->Runaway + 1;
  if ((char)this->Runaway == '\0') {
    FBlueprintContextTracker::EnforceScriptTimeLimit(this);
  }
  local_res10[0] = '\0';
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_res10);
  if (local_res10[0] == '\0') {
    if ((param_2->FlowStack).ArrayNum != 0) {
      uVar5 = TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Pop
                        (&param_2->FlowStack,No);
      pUVar2 = param_2->Node;
      uVar6 = 0;
      if ((int)uVar5 < (int)pUVar2->_padding_) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2->Code = (uchar *)((longlong)(int)uVar5 + pUVar2->_padding_);
      return;
    }
    if (4 < (byte)LogScriptCore._0_1_) {
      FFrame::GetStackTrace(param_2,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FOutputDevice::LogfImpl((FOutputDevice *)param_2,Error,L"Tried to pop from an empty flow stack")
    ;
  }
  return;
}

// execPropertyConst @ 14223acc0

void __cdecl UObject::execPropertyConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  
  pFVar1 = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = pFVar1;
  *(FProperty **)param_3 = pFVar1;
  return;
}

// execPushExecutionFlow @ 14223ace0

void __cdecl UObject::execPushExecutionFlow(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  undefined4 local_18 [4];
  
  pTVar1 = &param_2->FlowStack;
  local_18[0] = *(undefined4 *)param_2->Code;
  param_2->Code = param_2->Code + 4;
  FVar6 = (param_2->FlowStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  if (((ulonglong)FVar6 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar6 + (longlong)(param_2->FlowStack).ArrayMax * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->FlowStack).ArrayNum;
  piVar2 = &(param_2->FlowStack).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->FlowStack).ArrayNum = iVar5 + 1;
  FVar6 = (param_2->FlowStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(undefined4 *)((longlong)FVar6 + (longlong)iVar5 * 4) = local_18[0];
  return;
}

// execRemoveMulticastDelegate @ 14223adb0

void __cdecl UObject::execRemoveMulticastDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  uchar *puVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  FMRSWRecursiveAccessDetector local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar4 = param_2->MostRecentProperty;
  if ((((pFVar4 == (FProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x19 & 1) == 0)) &&
      (bVar5 = pFVar4 != (FProperty *)0x0, pFVar4 = (FProperty *)0x0, bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult || !Src",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x48c,L"CastFieldCheckedNullAllowed failed with 0x%016llx"),
     pFVar4 = (FProperty *)0x0, bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_28.State = (atomic<unsigned___int64>)0x0;
  local_20 = 0;
  local_18 = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_28);
  if ((pFVar4 != (FProperty *)0x0) && (puVar2 != (uchar *)0x0)) {
    (**(code **)(pFVar4->_padding_ + 0x1e8))(pFVar4,&local_28,0,puVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28);
  return;
}

// execRotationConst @ 14223aed0

void __cdecl UObject::execRotationConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  uchar *puVar2;
  
  puVar2 = param_2->Code;
  uVar1 = *(undefined8 *)puVar2;
  param_2->Code = puVar2 + 8;
  *(undefined8 *)param_3 = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 8);
  param_2->Code = puVar2 + 0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x10);
  param_2->Code = puVar2 + 0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execSelf @ 14223af10

void __cdecl UObject::execSelf(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  undefined1 local_res18 [16];
  FText local_38;
  FBlueprintExceptionInfo local_28;
  
  if (param_3 != (void *)0x0) {
    *(UObject **)param_3 = param_1;
    return;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"ScriptCore",L"AccessSelfAddress",
                      L"Attempted to reference \'self\' as an addressable property.");
  local_28.EventType = AccessViolation;
  local_28.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar3->TextData).Reference;
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res18);
  }
  local_28.Description.field0_0x0.TypedValue.Flags = pFVar3->Flags;
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  return;
}

// execSetArray @ 14223b000

void __cdecl UObject::execSetArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  EArrayPropertyFlags EVar2;
  uchar uVar3;
  int iVar4;
  FScriptArrayHelper_u_8 FVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  FProperty *pFVar10;
  int iVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  FScriptArrayHelper local_38;
  
  pFVar10 = (FProperty *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar12 = param_2->MostRecentProperty;
  if (((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar10,
        bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar5 = (FScriptArrayHelper_u_8)param_2->MostRecentPropertyAddress;
  EVar2 = (EArrayPropertyFlags)pFVar12[1]._padding_;
  local_38.ElementAlignment = (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
  local_38.InnerProperty = (FProperty *)pFVar12[1]._padding_;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = FVar5;
  local_38.ArrayFlags = EVar2;
  if ((local_38.ElementSize < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FScriptArrayHelper::EmptyValues(&local_38,0);
  puVar6 = param_2->Code;
  uVar3 = *puVar6;
  pFVar12 = pFVar10;
  while (uVar3 != '2') {
    iVar4 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
    iVar11 = iVar4 + 1;
    (local_38.field1_0x8.FreezableArray)->ArrayNum = iVar11;
    if ((local_38.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if ((local_38.field1_0x8.FreezableArray)->ArrayMax < iVar11) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_38.field1_0x8.HeapArray,
                   iVar4,local_38.ElementSize,local_38.ElementAlignment);
      }
    }
    else if ((local_38.field1_0x8.FreezableArray)->ArrayMax < iVar11) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                (local_38.field1_0x8.FreezableArray,iVar4,local_38.ElementSize,
                 local_38.ElementAlignment);
    }
    pFVar13 = pFVar10;
    if ((local_38.field1_0x8.FreezableArray)->ArrayNum != 0) {
      uVar9 = (local_38.field1_0x8.FreezableArray)->_padding_;
      if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
        uVar9 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar9 >> 0x18);
      }
      pFVar13 = (FProperty *)(uVar9 + (longlong)local_38.ElementSize * (longlong)iVar4);
    }
    if (((uint)(int)(local_38.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)((local_38.InnerProperty)->_padding_ + 0x150))(local_38.InnerProperty,pFVar13);
    }
    else {
      memset(pFVar13,0,(longlong)local_38.ElementSize);
    }
    iVar11 = (int)pFVar12;
    pFVar12 = (FProperty *)(ulonglong)(iVar11 + 1);
    pFVar13 = pFVar10;
    if ((local_38.field1_0x8.FreezableArray)->ArrayNum != 0) {
      uVar9 = (local_38.field1_0x8.FreezableArray)->_padding_;
      if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
        uVar9 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar9 >> 0x18);
      }
      pFVar13 = (FProperty *)(uVar9 + (longlong)local_38.ElementSize * (longlong)iVar11);
    }
    bVar1 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar1])(param_2->Object,param_2,pFVar13);
    puVar6 = param_2->Code;
    uVar3 = *puVar6;
  }
  param_2->Code = puVar6 + (puVar6 != (uchar *)0x0);
  return;
}

// execSetConst @ 14223b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UObject::execSetConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar7;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  void *_Dst;
  FProperty *pFVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  FProperty *pFVar16;
  undefined1 auStack_78 [32];
  FProperty *local_58;
  FScriptSetHelper local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar16 = (FProperty *)0x0;
  pFVar13 = *(FProperty **)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 8);
  param_2->MostRecentProperty = pFVar13;
  if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0xf & 1) == 0)) &&
     (local_58 = pFVar13,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar16, bVar9)
     ) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = *(int *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  if ((param_3 == (void *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Z_Param__Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xedc,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar13 == (FProperty *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1825,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = pFVar13->ElementSize;
  iVar4 = pFVar13->ArrayDim;
  local_48.ElementProp = pFVar13;
  local_48.Set = param_3;
  iVar10 = (**(code **)(pFVar13->_padding_ + 0x168))(pFVar13);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  local_48.SetLayout.HashNextIdOffset = iVar15 * iVar4 + 3U & 0xfffffffc;
  iVar15 = 4;
  if (4 < iVar10) {
    iVar15 = iVar10;
  }
  local_48.SetLayout.HashIndexOffset = local_48.SetLayout.HashNextIdOffset + 4;
  iVar4 = 4;
  if (4 < iVar15) {
    iVar4 = iVar15;
  }
  local_48.SetLayout.Size = local_48.SetLayout.HashNextIdOffset + 7U + iVar4 & ~(iVar4 - 1U);
  uVar11 = 8;
  if (8 < local_48.SetLayout.Size) {
    uVar11 = local_48.SetLayout.Size;
  }
  iVar15 = 4;
  if (4 < iVar4) {
    iVar15 = iVar4;
  }
  local_48.SetLayout.SparseArrayLayout.Size = uVar11;
  local_48.SetLayout.SparseArrayLayout.Alignment = iVar15;
  iVar15 = ((local_48.Set)->Elements).Data.ArrayNum - ((local_48.Set)->Elements).NumFreeIndices;
  if (iVar15 == 0) {
    if (iVar3 == 0) goto LAB_14223b41e;
  }
  else {
    FScriptSetHelper::DestructItems(&local_48,0,iVar15);
  }
  TScriptSparseSet<FDefaultSetAllocator>::Empty(local_48.Set,iVar3,&local_48.SetLayout);
LAB_14223b41e:
  uVar1 = *param_2->Code;
  do {
    if (uVar1 == '>') {
      FScriptSetHelper::Rehash(&local_48);
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      return;
    }
    uVar11 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             ::AddUninitialized(&(local_48.Set)->Elements,&local_48.SetLayout.SparseArrayLayout);
    pTVar8 = local_48.Set;
    if (((int)uVar11 < 0) || (((local_48.Set)->Elements).AllocationFlags.NumBits <= (int)uVar11)) {
LAB_14223b49f:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1841,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      pTVar7 = &(local_48.Set)->Elements;
      if ((((local_48.Set)->Elements).AllocationFlags.NumBits <= (int)uVar11) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&pTVar7->AllocationFlags;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar5;
      }
      uVar12 = uVar11;
      if ((int)uVar11 < 0) {
        uVar12 = uVar11 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1) ==
          0) goto LAB_14223b49f;
    }
    _Dst = (void *)((longlong)(int)(local_48.SetLayout.SparseArrayLayout.Size * uVar11) +
                   ((local_48.Set)->Elements).Data._padding_);
    if (((uint)(int)(local_48.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
      FProperty::InitializeValue_InContainer(local_48.ElementProp,_Dst);
    }
    else {
      memset(_Dst,0,(longlong)local_48.SetLayout.Size);
    }
    pTVar8 = local_48.Set;
    if (((local_48.Set)->Elements).Data.ArrayNum == ((local_48.Set)->Elements).NumFreeIndices) {
      pFVar13 = pFVar16;
      if ((uVar11 != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternalIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x169e,
                             L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (((int)uVar11 < 0) || (((local_48.Set)->Elements).AllocationFlags.NumBits <= (int)uVar11))
      {
LAB_14223b59f:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16a2,
                           L"Invalid internal index. Use IsValidIndex before calling this method.");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pTVar7 = &(local_48.Set)->Elements;
        if ((((local_48.Set)->Elements).AllocationFlags.NumBits <= (int)uVar11) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&pTVar7->AllocationFlags;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar5;
        }
        uVar12 = uVar11;
        if ((int)uVar11 < 0) {
          uVar12 = uVar11 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
            == 0) goto LAB_14223b59f;
      }
      pFVar13 = (FProperty *)
                ((longlong)(int)(local_48.SetLayout.SparseArrayLayout.Size * uVar11) +
                ((local_48.Set)->Elements).Data._padding_);
    }
    bVar2 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar2])(param_2->Object,param_2,pFVar13);
    uVar1 = *param_2->Code;
  } while( true );
}

// execSetMap @ 14223b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UObject::execSetMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  FScriptMapHelper_u_16 FVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  int iVar8;
  undefined1 auStackY_2b8 [32];
  FProperty *local_278;
  FProperty *local_270;
  FProperty *local_268;
  FProperty *local_260;
  FProperty *local_258;
  FProperty *local_250;
  FProperty *local_248;
  FProperty *local_240;
  <lambda_1> local_238;
  FProperty *local_228;
  void *local_220;
  FProperty *local_218;
  void *local_210;
  code *local_208;
  code **local_200;
  code *local_1f8;
  code **local_1f0;
  code *local_1e8;
  FProperty **local_1e0;
  code *local_1d8;
  FProperty **local_1d0;
  FProperty *local_1c8;
  void *local_1c0;
  FProperty *local_1b8;
  void *local_1b0;
  code *local_1a8;
  code **local_1a0;
  code *local_198;
  code **local_190;
  code *local_188;
  FProperty **local_180;
  code *local_178;
  FProperty **local_170;
  FDefaultConstructedPropertyElement local_168;
  FDefaultConstructedPropertyElement local_158;
  FScriptMapHelper local_148;
  code *local_110;
  FProperty **local_108;
  code *local_100;
  FProperty **local_f8;
  longlong local_f0;
  longlong lStack_e8;
  FScriptSparseArrayLayout local_e0;
  code *local_d8;
  FProperty **local_d0;
  code *local_c8;
  FProperty **local_c0;
  longlong local_b8;
  longlong lStack_b0;
  FScriptSparseArrayLayout local_a8;
  code *local_a0;
  FProperty **local_98;
  code *local_90;
  FProperty **local_88;
  longlong local_80;
  longlong lStack_78;
  FScriptSparseArrayLayout local_70;
  code *local_68;
  FProperty **local_60;
  code *local_58;
  FProperty **local_50;
  longlong local_48;
  longlong lStack_40;
  FScriptSparseArrayLayout local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  pFVar7 = param_2->MostRecentProperty;
  iVar2 = *(int *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  if (((pFVar7 == (FProperty *)0x0) ||
      ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x400000000000) == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar7 = (FProperty *)0x0, bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_148.KeyProp = (FProperty *)pFVar7[1]._padding_;
  local_148.ValueProp = (FProperty *)pFVar7[1]._padding_;
  local_148.MapFlags = (EMapPropertyFlags)pFVar7[1]._padding_;
  FVar3 = (FScriptMapHelper_u_16)param_2->MostRecentPropertyAddress;
  local_148.MapLayout._0_8_ = pFVar7[1]._padding_;
  local_148.MapLayout.SetLayout._4_8_ = pFVar7[1]._padding_;
  local_148.MapLayout.SetLayout.SparseArrayLayout = (FScriptSparseArrayLayout)pFVar7[1]._padding_;
  if (((local_148.KeyProp == (FProperty *)0x0) || (local_148.ValueProp == (FProperty *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InKeyProp && InValueProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1558,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_148.field2_0x10 = FVar3;
  if (((local_148.KeyProp == (FProperty *)0x0) || (local_148.ValueProp == (FProperty *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyProp && ValueProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1564,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_148.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar8 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_148.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
  }
  else {
    iVar8 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_148.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                     AllocatorInstance.SecondaryData.field_0x4;
  }
  iVar8 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             *)&(local_148.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar8;
  if (iVar8 == 0) {
    if (iVar2 != 0) goto LAB_14223b7f7;
  }
  else {
    FScriptMapHelper::DestructItems(&local_148,0,iVar8);
LAB_14223b7f7:
    local_238.__this = &local_148;
    local_238.Slack = iVar2;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_148,&local_238);
    if (0 < iVar2) {
      FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement
                (&local_158,(FProperty *)pFVar7[1]._padding_);
      FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement
                (&local_168,(FProperty *)pFVar7[1]._padding_);
      pbVar4 = param_2->Code;
      bVar1 = *pbVar4;
      while (bVar1 != 0x3c) {
        param_2->Code = pbVar4 + 1;
        (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_158.Obj.Object);
        bVar1 = *param_2->Code;
        param_2->Code = param_2->Code + 1;
        (*GNatives.Elements[bVar1])(param_2->Object,param_2,local_168.Obj.Object);
        if ((local_148.MapFlags & UsesMemoryImageAllocator) == None) {
          local_250 = local_148.ValueProp;
          local_1b8 = local_148.ValueProp;
          local_258 = local_148.KeyProp;
          local_a0 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
                     ::Call;
          local_98 = &local_258;
          local_1c8 = local_148.KeyProp;
          local_90 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
                     ::Call;
          local_88 = &local_250;
          local_1a0 = &local_a0;
          local_1a8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
                      ::Call;
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
                     ::Call;
          local_60 = &local_1c8;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
                     ::Call;
          local_190 = &local_68;
          local_198 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
                      ::Call;
          local_188 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                      ::Call;
          local_180 = &local_248;
          local_178 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                      ::Call;
          local_170 = &local_240;
          local_248 = local_148.KeyProp;
          local_240 = local_148.KeyProp;
          local_1b0 = local_168.Obj.Object;
          local_1c0 = local_158.Obj.Object;
          local_80._0_4_ = local_148.MapLayout.ValueOffset;
          local_80._4_4_ = local_148.MapLayout.SetLayout.HashNextIdOffset;
          lStack_78._0_4_ = local_148.MapLayout.SetLayout.HashIndexOffset;
          lStack_78._4_4_ = local_148.MapLayout.SetLayout.Size;
          local_70 = local_148.MapLayout.SetLayout.SparseArrayLayout;
          local_48._0_4_ = local_148.MapLayout.ValueOffset;
          local_48._4_4_ = local_148.MapLayout.SetLayout.HashNextIdOffset;
          lStack_40._0_4_ = local_148.MapLayout.SetLayout.HashIndexOffset;
          lStack_40._4_4_ = local_148.MapLayout.SetLayout.Size;
          local_38 = local_148.MapLayout.SetLayout.SparseArrayLayout;
          local_50 = &local_1b8;
          TScriptSparseSet<FDefaultSetAllocator>::Add
                    ((TScriptSparseSet<FDefaultSetAllocator> *)local_148.field2_0x10.HeapMap,
                     local_158.Obj.Object,&local_148.MapLayout.SetLayout,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_178,
                     (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_188,
                     (TFunctionRef<void___cdecl(void_*)> *)&local_198,
                     (TFunctionRef<void___cdecl(void_*)> *)&local_1a8);
        }
        else {
          local_270 = local_148.ValueProp;
          local_218 = local_148.ValueProp;
          local_108 = &local_278;
          local_278 = local_148.KeyProp;
          local_f8 = &local_270;
          local_228 = local_148.KeyProp;
          local_200 = &local_110;
          local_d8 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
                     ::Call;
          local_d0 = &local_228;
          local_c8 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
                     ::Call;
          local_c0 = &local_218;
          local_1f0 = &local_d8;
          local_1f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
                      ::Call;
          local_1e8 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                      ::Call;
          local_1e0 = &local_268;
          local_1d8 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                      ::Call;
          local_1d0 = &local_260;
          local_268 = local_148.KeyProp;
          local_260 = local_148.KeyProp;
          local_210 = local_168.Obj.Object;
          local_220 = local_158.Obj.Object;
          local_110 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
                      ::Call;
          local_100 = UE::Core::Private::Function::
                      TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
                      ::Call;
          local_f0._0_4_ = local_148.MapLayout.ValueOffset;
          local_f0._4_4_ = local_148.MapLayout.SetLayout.HashNextIdOffset;
          lStack_e8._0_4_ = local_148.MapLayout.SetLayout.HashIndexOffset;
          lStack_e8._4_4_ = local_148.MapLayout.SetLayout.Size;
          local_208 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
                      ::Call;
          local_e0 = local_148.MapLayout.SetLayout.SparseArrayLayout;
          local_b8._0_4_ = local_148.MapLayout.ValueOffset;
          local_b8._4_4_ = local_148.MapLayout.SetLayout.HashNextIdOffset;
          lStack_b0._0_4_ = local_148.MapLayout.SetLayout.HashIndexOffset;
          lStack_b0._4_4_ = local_148.MapLayout.SetLayout.Size;
          local_a8 = local_148.MapLayout.SetLayout.SparseArrayLayout;
          TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
          ::Add((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                 *)local_148.field2_0x10.HeapMap,local_158.Obj.Object,&local_148.MapLayout.SetLayout
                ,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_1d8,
                (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_1e8,
                (TFunctionRef<void___cdecl(void_*)> *)&local_1f8,
                (TFunctionRef<void___cdecl(void_*)> *)&local_208);
        }
        pbVar4 = param_2->Code;
        bVar1 = *pbVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.Obj.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.Obj.SharedReferenceCount.ReferenceController);
      goto LAB_14223bb7e;
    }
  }
  if ((*param_2->Code != '<') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Stack.Code == EX_EndMap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xebd,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14223bb7e:
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetSet @ 14223bbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UObject::execSetSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  FProperty *pFVar8;
  undefined1 auStackY_128 [32];
  FScriptSetHelper local_e8;
  FProperty *local_c0;
  FProperty *local_b8;
  FProperty *local_b0;
  code *local_a8;
  FProperty **local_a0;
  code *local_98;
  FProperty **local_90;
  code *local_88;
  FProperty **local_80;
  code *local_78;
  FProperty **local_70;
  FDefaultConstructedPropertyElement local_68;
  FProperty *local_58;
  void *local_50;
  longlong local_48;
  longlong lStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  bVar6 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar6])(param_2->Object,param_2,(void *)0x0);
  pFVar8 = param_2->MostRecentProperty;
  iVar1 = *(int *)param_2->Code;
  param_2->Code = (uchar *)((longlong)param_2->Code + 4);
  if (((pFVar8 == (FProperty *)0x0) ||
      ((*(ulonglong *)(pFVar8->_padding_ + 0x18) & 0x800000000000) == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar8 = (FProperty *)0x0, bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e8.ElementProp = (FProperty *)pFVar8[1]._padding_;
  pTVar2 = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  local_e8.SetLayout.SparseArrayLayout.Size = (int)pFVar8[1]._padding_;
  local_e8.SetLayout._0_8_ = pFVar8[1]._padding_;
  local_e8.SetLayout._8_8_ = pFVar8[1]._padding_;
  local_e8.Set = pTVar2;
  if ((local_e8.ElementProp == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (pTVar2->Elements).Data.ArrayNum - (pTVar2->Elements).NumFreeIndices;
  if (iVar7 == 0) {
    if (iVar1 != 0) goto LAB_14223bd06;
  }
  else {
    FScriptSetHelper::DestructItems(&local_e8,0,iVar7);
LAB_14223bd06:
    TScriptSparseSet<FDefaultSetAllocator>::Empty(pTVar2,iVar1,&local_e8.SetLayout);
    if (0 < iVar1) {
      FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement
                (&local_68,(FProperty *)pFVar8[1]._padding_);
      iVar1 = local_e8.SetLayout.SparseArrayLayout.Size;
      pTVar2 = local_e8.Set;
      pFVar8 = local_e8.ElementProp;
      pbVar5 = param_2->Code;
      bVar6 = *pbVar5;
      if (bVar6 != 0x3a) {
        local_a0 = &local_c0;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_90 = &local_58;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_80 = &local_b8;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                   ::Call;
        local_70 = &local_b0;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_1>,unsigned_int,void_const_*>
                   ::Call;
        do {
          param_2->Code = pbVar5 + 1;
          (*GNatives.Elements[bVar6])(param_2->Object,param_2,local_68.Obj.Object);
          local_c0 = pFVar8;
          local_58 = pFVar8;
          local_50 = local_68.Obj.Object;
          local_38 = iVar1;
          local_48._0_4_ = local_e8.SetLayout.HashNextIdOffset;
          local_48._4_4_ = local_e8.SetLayout.HashIndexOffset;
          lStack_40._0_4_ = local_e8.SetLayout.Size;
          lStack_40._4_4_ = local_e8.SetLayout.SparseArrayLayout.Alignment;
          local_b8 = pFVar8;
          local_b0 = pFVar8;
          TScriptSparseSet<FDefaultSetAllocator>::Add
                    (pTVar2,local_68.Obj.Object,&local_e8.SetLayout,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_78,
                     (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_88,
                     (TFunctionRef<void___cdecl(void_*)> *)&local_98,
                     (TFunctionRef<void___cdecl(void_*)> *)&local_a8);
          pbVar5 = param_2->Code;
          bVar6 = *pbVar5;
        } while (bVar6 != 0x3a);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.Obj.SharedReferenceCount.ReferenceController);
      goto LAB_14223be68;
    }
  }
  if ((*param_2->Code != ':') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Stack.Code == EX_EndSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xe9a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14223be68:
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSkipOffsetConst @ 14223beb0

void __cdecl UObject::execSkipOffsetConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_2->Code;
  param_2->Code = param_2->Code + 4;
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execSoftObjectConst @ 14223bed0

void __cdecl UObject::execSoftObjectConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  wchar_t *local_48;
  undefined8 local_40;
  TStringView<wchar_t> local_38;
  FSoftObjectPath local_28;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,&local_48);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Size = (int)local_40 + -1;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if ((int)local_40 == 0) {
    local_38.Size = 0;
  }
  local_38.DataPtr = local_48;
  FSoftObjectPath::SetPath(&local_28,&local_38);
  *(undefined8 *)param_3 = 0;
  FSoftObjectPath::operator=((FSoftObjectPath *)((longlong)param_3 + 8),&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execStringConst @ 14223bfa0

void __cdecl UObject::execStringConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  uchar *puVar2;
  FString local_18;
  
  ::FString::FString(&local_18,(char *)param_2->Code);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  puVar2 = param_2->Code;
  uVar1 = *puVar2;
  while (uVar1 != '\0') {
    puVar2 = puVar2 + 1;
    param_2->Code = puVar2;
    uVar1 = *puVar2;
  }
  param_2->Code = puVar2 + 1;
  return;
}

// execStructConst @ 14223c040

void __cdecl UObject::execStructConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObjectBaseUtility *this;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this = *(UObjectBaseUtility **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  if (this == (UObjectBaseUtility *)0x0) {
    pFVar9 = GetTypeName<UScriptStruct>(&local_58);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar7 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar7) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar7 * 8)
      != &pUVar8->_padding_)) {
    pFVar9 = GetTypeName<UScriptStruct>(&local_48);
    pwVar15 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)this);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar14);
  }
  param_2->Code = param_2->Code + 4;
  uVar11 = 0;
  for (lVar2 = *(longlong *)&this[2].field_0x20; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x48)) {
    if ((((*(ulonglong *)(lVar2 + 0x38) >> 0xd & 1) == 0) &&
        ((*(ulonglong *)(lVar2 + 0x38) & 0x800000000) == 0)) &&
       (iVar7 = *(int *)(lVar2 + 0x30), uVar13 = uVar11, 0 < iVar7)) {
      do {
        iVar12 = (int)uVar13;
        if (((iVar12 < 0) || (iVar7 <= iVar12)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((param_3 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = *(int *)(lVar2 + 0x34);
        iVar1 = *(int *)(lVar2 + 0x44);
        bVar10 = *param_2->Code;
        param_2->Code = param_2->Code + 1;
        (*GNatives.Elements[bVar10])
                  (param_2->Object,param_2,
                   (void *)((longlong)param_3 + (longlong)iVar1 + (longlong)iVar12 * (longlong)iVar7
                           ));
        iVar7 = *(int *)(lVar2 + 0x30);
        uVar13 = (ulonglong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < iVar7);
    }
  }
  if ((*(uint *)&this[4].field_0x10 & 0x200000) != 0) {
    if (this[4].field_0x14 == '\0') {
      UObjectBaseUtility::GetPathName(this,&local_68,(UObject *)0x0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar3 = *(undefined8 **)&this[4].field_0x18;
    if ((puVar3 == (undefined8 *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                           ,0xe5f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar4 = (byte *)*puVar3;
    if (((~(byte)((uint)*(undefined4 *)pbVar4 >> 8) & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    for (bVar10 = *pbVar4; bVar10 != 0; bVar10 = bVar10 & bVar10 - 1) {
      uVar11 = (ulonglong)((int)uVar11 + 1);
    }
    (**(code **)(pbVar4 + uVar11 * 8 + 0x18))(param_3);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execStructMemberContext @ 14223c360

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execStructMemberContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  undefined1 local_res10 [8];
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FBlueprintExceptionInfo local_38;
  
  pFVar3 = *(FProperty **)param_2->Code;
  param_2->Code = param_2->Code + 8;
  param_2->MostRecentProperty = pFVar3;
  if (pFVar3 == (FProperty *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                       ,0x189,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  param_2->MostRecentProperty = (FProperty *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  bVar1 = *param_2->Code;
  param_2->Code = param_2->Code + 1;
  (*GNatives.Elements[bVar1])(param_2->Object,param_2,(void *)0x0);
  if (param_2->MostRecentProperty == (FProperty *)0x0) {
    bVar6 = IsThisNotNull(pFVar3,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&pFVar3->_padding_,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    pFVar7 = FText::FromString(&local_58,&local_88);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"ScriptCore",L"AccessNoneStructure",
                        L"Accessed None reading structure {0}");
    pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_78,pFVar9,pFVar7);
    local_38.EventType = AccessViolation;
    local_38.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar7->TextData).Reference;
    if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_38.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_38.Description.field0_0x0.TypedValue.Flags = pFVar7->Flags;
    if (local_38.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_38);
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    param_2->MostRecentProperty = (FProperty *)0x0;
    if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  else {
    puVar4 = param_2->MostRecentPropertyAddress;
    param_2->MostRecentPropertyContainer = puVar4;
    if (pFVar3->ArrayDim < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (puVar4 == (uchar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar2 = pFVar3->Offset_Internal;
    param_2->MostRecentProperty = pFVar3;
    param_2->MostRecentPropertyAddress = puVar4 + iVar2;
    if (param_3 != (void *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x110))(pFVar3,param_3,param_2->MostRecentPropertyContainer);
    }
  }
  return;
}

// execSwitchValue @ 14223c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UObject::execSwitchValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  FProperty *pFVar4;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var5;
  UObject *pUVar6;
  UFunction *pUVar7;
  TRefCountPtr<ITextData> TVar8;
  code *pcVar9;
  longlong lVar10;
  uchar *puVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  undefined1 *_Dst;
  uint uVar25;
  void *pvVar26;
  undefined8 uStackY_160;
  undefined1 auStackY_158 [32];
  undefined1 uStack_129;
  uint local_128;
  uint local_124;
  void *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  uchar *local_110;
  UObject *local_108;
  FString local_100;
  FString local_f0;
  FBlueprintExceptionInfo local_e0;
  FBlueprintExceptionInfo local_c8;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60;
  FText local_50;
  FTextFormat local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_128;
  puVar3 = (ushort *)param_2->Code;
  puVar23 = (undefined1 *)0x0;
  uVar2 = *puVar3;
  param_2->Code = (uchar *)(puVar3 + 1);
  uVar24 = *(uint *)(puVar3 + 1);
  param_2->Code = (uchar *)(puVar3 + 3);
  local_128 = (uint)uVar2;
  param_2->MostRecentProperty = (FProperty *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  uVar2 = puVar3[3];
  param_2->Code = (uchar *)((longlong)puVar3 + 7);
  uStackY_160 = 0x14223c6ad;
  local_124 = uVar24;
  local_120 = param_3;
  local_108 = param_1;
  (*GNatives.Elements[(byte)uVar2])(param_2->Object,param_2,(void *)0x0);
  local_110 = param_2->MostRecentPropertyAddress;
  pFVar4 = param_2->MostRecentProperty;
  if (local_110 == (uchar *)0x0) {
    uStackY_160 = 0x14223c6e9;
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7634585018982987110>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                        ,0xa9a,"IndexAdress");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStackY_160 = 0x14223c6fe;
    bVar12 = IsThisNotNull(pFVar4,"FField::GetName");
    if (bVar12) {
      uStackY_160 = 0x14223c70f;
      ::FName::ToString((FName *)&pFVar4->_padding_,&local_100);
    }
    else {
      uStackY_160 = 0x14223c721;
      ::FString::FString(&local_100,L"None");
    }
    uStackY_160 = 0x14223c731;
    pFVar16 = FText::FromString(&local_70,&local_100);
    uStackY_160 = 0x14223c755;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_a0,L"ScriptCore",L"SwitchValueIndex",
                         L"Switch statement failed to read property for index value for index property {0}"
                        );
    uStackY_160 = 0x14223c767;
    pFVar18 = FTextFormat::FTextFormat(&local_60,pFVar17,Default);
    uStackY_160 = 0x14223c776;
    pFVar16 = FText::Format<FText>(&local_b0,pFVar18,pFVar16);
    local_e0.EventType = NonFatalError;
    local_e0.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar16->TextData).Reference;
    if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      uStackY_160 = 0x14223c79a;
      (**(code **)((longlong)
                   *(ITextData *)local_e0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_e0.Description.field0_0x0.TypedValue.TextData.Reference,local_118);
    }
    local_e0.Description.field0_0x0.TypedValue.Flags = pFVar16->Flags;
    if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      uStackY_160 = 0x14223c7c9;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      uStackY_160 = 0x14223c7de;
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      uStackY_160 = 0x14223c7f0;
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      uStackY_160 = 0x14223c7fe;
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    uStackY_160 = 0x14223c80d;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_e0);
    if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      uStackY_160 = 0x14223c81c;
      (**(code **)((longlong)
                   *(ITextData *)local_e0.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  puVar22 = auStackY_158;
  _Dst = puVar23;
  if (pFVar4->ArrayDim * pFVar4->ElementSize != 0) {
    uStackY_160 = 0x14223c83b;
    iVar14 = (**(code **)(pFVar4->_padding_ + 0x168))(pFVar4);
    iVar21 = pFVar4->ArrayDim * pFVar4->ElementSize;
    if (iVar14 < 0x11) {
      puVar22 = auStackY_158;
      if (iVar21 != 0) {
        uVar20 = (longlong)(iVar21 + 0xf) + 0xf;
        if (uVar20 <= (ulonglong)(longlong)(iVar21 + 0xf)) {
          uVar20 = 0xffffffffffffff0;
        }
        uStackY_160 = 0x14223c878;
        puVar22 = auStackY_158 + -(uVar20 & 0xfffffffffffffff0);
        _Dst = local_118 + -(uVar20 & 0xfffffffffffffff0) + -8;
      }
    }
    else {
      uStackY_160 = 0x14223c896;
      iVar14 = (**(code **)(pFVar4->_padding_ + 0x168))(pFVar4);
      uStackY_160 = 0x14223c8a8;
      iVar15 = (**(code **)(pFVar4->_padding_ + 0x168))(pFVar4);
      uVar19 = (ulonglong)(iVar15 + -1 + iVar21);
      uVar20 = uVar19 + 0xf;
      if (uVar20 <= uVar19) {
        uVar20 = 0xffffffffffffff0;
      }
      uStackY_160 = 0x14223c8cd;
      lVar10 = -(uVar20 & 0xfffffffffffffff0);
      pcVar9 = *(code **)(pFVar4->_padding_ + 0x168);
      *(undefined8 *)(auStackY_158 + lVar10 + -8) = 0x14223c8e1;
      iVar21 = (*pcVar9)(pFVar4);
      puVar22 = auStackY_158 + lVar10;
      _Dst = (undefined1 *)((longlong)-iVar21 & (ulonglong)(&uStack_129 + iVar14 + lVar10));
    }
  }
  if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(pFVar4->_padding_ + 0x150);
    *(undefined8 *)(puVar22 + -8) = 0x14223c91e;
    (*pcVar9)(pFVar4,_Dst);
  }
  else {
    iVar14 = pFVar4->ArrayDim;
    iVar21 = pFVar4->ElementSize;
    *(undefined8 *)(puVar22 + -8) = 0x14223c90d;
    memset(_Dst,0,(longlong)iVar14 * (longlong)iVar21);
  }
  if (local_128 != 0) {
    do {
      bVar1 = *param_2->Code;
      param_2->Code = param_2->Code + 1;
      p_Var5 = GNatives.Elements[bVar1];
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar22 + -8) = 0x14223c957;
      (*p_Var5)(pUVar6,param_2,_Dst);
      puVar11 = local_110;
      uVar24 = *(uint *)param_2->Code;
      param_2->Code = (uchar *)((longlong)param_2->Code + 4);
      if (local_110 != (uchar *)0x0) {
        pcVar9 = *(code **)(pFVar4->_padding_ + 0xb8);
        *(undefined8 *)(puVar22 + -8) = 0x14223c984;
        cVar13 = (*pcVar9)(pFVar4,puVar11,_Dst,0);
        pvVar26 = local_120;
        if (cVar13 != '\0') {
          bVar1 = *param_2->Code;
          param_2->Code = param_2->Code + 1;
          p_Var5 = GNatives.Elements[bVar1];
          pUVar6 = param_2->Object;
          *(undefined8 *)(puVar22 + -8) = 0x14223caa6;
          (*p_Var5)(pUVar6,param_2,pvVar26);
          bVar12 = true;
          uVar24 = local_124;
          goto LAB_14223c9f9;
        }
      }
      pUVar7 = param_2->Node;
      iVar14 = (int)pUVar7->_padding_;
      uVar25 = 0;
      if ((int)uVar24 < iVar14) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if (uVar25 == 0) {
        *(longlong *)(puVar22 + 0x28) = (longlong)iVar14;
        *(longlong *)(puVar22 + 0x20) = (longlong)(int)uVar24;
        *(undefined8 *)(puVar22 + -8) = 0x14223c9d1;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar25 = (int)puVar23 + 1;
      puVar23 = (undefined1 *)(ulonglong)uVar25;
      param_2->Code = (uchar *)((longlong)(int)uVar24 + pUVar7->_padding_);
      uVar24 = local_124;
    } while ((int)uVar25 < (int)local_128);
  }
  bVar12 = false;
  pvVar26 = local_120;
LAB_14223c9f9:
  if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar9 = *(code **)(pFVar4->_padding_ + 0x138);
    *(undefined8 *)(puVar22 + -8) = 0x14223ca18;
    (*pcVar9)(pFVar4,_Dst);
  }
  if (bVar12) {
    pUVar7 = param_2->Node;
    iVar14 = (int)pUVar7->_padding_;
    uVar25 = 0;
    if ((int)uVar24 < iVar14) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if (uVar25 == 0) {
      *(longlong *)(puVar22 + 0x28) = (longlong)iVar14;
      *(longlong *)(puVar22 + 0x20) = (longlong)(int)uVar24;
      *(undefined8 *)(puVar22 + -8) = 0x14223ca6c;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    param_2->Code = (uchar *)((longlong)(int)uVar24 + pUVar7->_padding_);
  }
  else {
    *(undefined8 *)(puVar22 + -8) = 0x14223cac0;
    bVar12 = IsThisNotNull(pFVar4,"FField::GetName");
    if (bVar12) {
      *(undefined8 *)(puVar22 + -8) = 0x14223cad1;
      ::FName::ToString((FName *)&pFVar4->_padding_,&local_f0);
    }
    else {
      *(undefined8 *)(puVar22 + -8) = 0x14223cae3;
      ::FString::FString(&local_f0,L"None");
    }
    *(undefined8 *)(puVar22 + -8) = 0x14223caf3;
    pFVar16 = FText::FromString(&local_50,&local_f0);
    *(undefined8 *)(puVar22 + -8) = 0x14223cb17;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_80,L"ScriptCore",L"SwitchValueOutOfBounds",
                         L"Switch statement failed to match case for index property {0}");
    *(undefined8 *)(puVar22 + -8) = 0x14223cb29;
    pFVar18 = FTextFormat::FTextFormat(&local_40,pFVar17,Default);
    *(undefined8 *)(puVar22 + -8) = 0x14223cb3b;
    pFVar16 = FText::Format<FText>(&local_90,pFVar18,pFVar16);
    local_c8.EventType = NonFatalError;
    TVar8.Reference = (pFVar16->TextData).Reference;
    local_c8.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)TVar8.Reference;
    if (TVar8.Reference != (ITextData *)0x0) {
      pcVar9 = *(code **)((longlong)*TVar8.Reference + 8);
      *(undefined8 *)(puVar22 + -8) = 0x14223cb5c;
      (*pcVar9)(TVar8.Reference,local_114);
    }
    local_c8.Description.field0_0x0.TypedValue.Flags = pFVar16->Flags;
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      *(undefined8 *)(puVar22 + -8) = 0x14223cb8b;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      pcVar9 = *(code **)((longlong)*local_90.TextData.Reference + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x14223cba3;
      (*pcVar9)();
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      pcVar9 = *(code **)((longlong)*local_80.TextData.Reference + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x14223cbb5;
      (*pcVar9)();
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(puVar22 + -8) = 0x14223cbc3;
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    pUVar6 = local_108;
    *(undefined8 *)(puVar22 + -8) = 0x14223cbd3;
    FBlueprintCoreDelegates::ThrowScriptException(pUVar6,param_2,&local_c8);
    bVar1 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    p_Var5 = GNatives.Elements[bVar1];
    pUVar6 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x14223cbf9;
    (*p_Var5)(pUVar6,param_2,pvVar26);
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      pcVar9 = *(code **)((longlong)
                          *(ITextData *)
                           local_c8.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x14223cc08;
      (*pcVar9)();
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x14223cc17;
  return;
}

// execTextConst @ 14223cc50

void __cdecl UObject::execTextConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte *pbVar1;
  uchar uVar2;
  byte bVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FText *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FTextKey local_res10 [2];
  FTextKey local_res20 [2];
  FTextKey local_d8 [2];
  FScriptContainerElement *local_d0;
  undefined8 local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FName local_60;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  puVar4 = param_2->Code;
  uVar2 = *puVar4;
  pbVar1 = puVar4 + 1;
  param_2->Code = pbVar1;
  if (uVar2 == '\0') {
    pFVar8 = FText::GetEmpty();
    FText::operator=(param_3,pFVar8);
    return;
  }
  if (uVar2 == '\x01') {
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    bVar3 = *pbVar1;
    param_2->Code = puVar4 + 2;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_70);
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    bVar3 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_80);
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    bVar3 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_90);
    FTextKey::FTextKey(local_res20,&local_80);
    FTextKey::FTextKey(local_d8,&local_90);
    pFVar8 = FText::AsLocalizable_Advanced(&local_28,local_d8,local_res20,&local_70);
    FText::operator=(param_3,pFVar8);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FVar9.Data = local_70.Data.AllocatorInstance.Data;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
      FVar9.Data = local_70.Data.AllocatorInstance.Data;
    }
  }
  else if (uVar2 == '\x02') {
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    bVar3 = *pbVar1;
    param_2->Code = puVar4 + 2;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_a0);
    pFVar8 = FText::AsCultureInvariant(&local_38,&local_a0);
    FText::operator=(param_3,pFVar8);
    FVar9.Data = local_a0.Data.AllocatorInstance.Data;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      FVar9.Data = local_a0.Data.AllocatorInstance.Data;
    }
  }
  else if (uVar2 == '\x03') {
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    bVar3 = *pbVar1;
    param_2->Code = puVar4 + 2;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_b0);
    pFVar8 = FText::FromString(&local_48,&local_b0);
    FText::operator=(param_3,pFVar8);
    FVar9.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      FVar9.Data = local_b0.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (uVar2 != '\x04') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xdc8,
                         L"Unknown EBlueprintTextLiteralType! Please update UObject::execTextConst to handle this type of text."
                        );
      if (!bVar6) {
        return;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_2->Code = puVar4 + 9;
    local_d0 = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    bVar3 = puVar4[9];
    param_2->Code = puVar4 + 10;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_d0);
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    bVar3 = *param_2->Code;
    param_2->Code = param_2->Code + 1;
    (*GNatives.Elements[bVar3])(param_2->Object,param_2,&local_c0);
    FTextKey::FTextKey(local_res10,&local_c0);
    pFVar10 = (FScriptContainerElement *)L"";
    if ((int)local_c8 != 0) {
      pFVar10 = local_d0;
    }
    pFVar7 = ::FName::FName(&local_60,(wchar_t *)pFVar10);
    pFVar8 = FText::FromStringTable(&local_58,*pFVar7,local_res10,FindOrLoad);
    FText::operator=(param_3,pFVar8);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    FVar9.Data = local_d0;
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      FVar9.Data = local_d0;
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// execTracepoint @ 14223cf90

void __cdecl UObject::execTracepoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FBlueprintExceptionInfo local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBlueprintCoreDelegates::OnScriptException);
  if (bVar1) {
    local_28.EventType = Tracepoint;
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_28.Description.field0_0x0.TypedValue.Flags = 0;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  return;
}

// execTransformConst @ 14223d000

void __cdecl UObject::execTransformConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uchar *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar9 = param_2->Code;
  uVar1 = *(undefined8 *)puVar9;
  param_2->Code = puVar9 + 8;
  uVar2 = *(undefined8 *)(puVar9 + 8);
  param_2->Code = puVar9 + 0x10;
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  param_2->Code = puVar9 + 0x18;
  uVar4 = *(undefined8 *)(puVar9 + 0x18);
  param_2->Code = puVar9 + 0x20;
  uVar10 = *(undefined4 *)(puVar9 + 0x20);
  uVar11 = *(undefined4 *)(puVar9 + 0x24);
  param_2->Code = puVar9 + 0x28;
  uVar5 = *(undefined8 *)(puVar9 + 0x28);
  param_2->Code = puVar9 + 0x30;
  uVar6 = *(undefined8 *)(puVar9 + 0x30);
  param_2->Code = puVar9 + 0x38;
  uVar12 = *(undefined4 *)(puVar9 + 0x38);
  uVar13 = *(undefined4 *)(puVar9 + 0x3c);
  param_2->Code = puVar9 + 0x40;
  uVar7 = *(undefined8 *)(puVar9 + 0x40);
  param_2->Code = puVar9 + 0x48;
  uVar8 = *(undefined8 *)(puVar9 + 0x48);
  param_2->Code = puVar9 + 0x50;
  *(undefined8 *)param_3 = uVar1;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar11;
  *(int *)((longlong)param_3 + 0x28) = (int)uVar5;
  *(int *)((longlong)param_3 + 0x2c) = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = 0;
  *(undefined4 *)((longlong)param_3 + 0x40) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar13;
  *(int *)((longlong)param_3 + 0x48) = (int)uVar7;
  *(int *)((longlong)param_3 + 0x4c) = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x58) = 0;
  return;
}

// execTrue @ 14223d100

void __cdecl UObject::execTrue(UObject *param_1,FFrame *param_2,void *param_3)

{
  *(undefined1 *)param_3 = 1;
  return;
}

// execUInt64Const @ 14223d110

void __cdecl UObject::execUInt64Const(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2->Code;
  param_2->Code = param_2->Code + 8;
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execUnicodeStringConst @ 14223d130

void __cdecl UObject::execUnicodeStringConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  short sVar1;
  FString *pFVar2;
  short *psVar3;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,(ushort *)param_2->Code);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  StringConv::InlineCombineSurrogates(param_3);
  psVar3 = (short *)param_2->Code;
  sVar1 = *psVar3;
  while (sVar1 != 0) {
    psVar3 = psVar3 + 1;
    param_2->Code = (uchar *)psVar3;
    sVar1 = *psVar3;
  }
  param_2->Code = (uchar *)(psVar3 + 1);
  return;
}

// execVector3fConst @ 14223d1e0

void __cdecl UObject::execVector3fConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  uchar *puVar2;
  
  puVar2 = param_2->Code;
  uVar1 = *(undefined4 *)puVar2;
  param_2->Code = puVar2 + 4;
  *(undefined4 *)param_3 = uVar1;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  param_2->Code = puVar2 + 8;
  *(undefined4 *)((longlong)param_3 + 4) = uVar1;
  uVar1 = *(undefined4 *)(puVar2 + 8);
  param_2->Code = puVar2 + 0xc;
  *(undefined4 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execVectorConst @ 14223d220

void __cdecl UObject::execVectorConst(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  uchar *puVar2;
  
  puVar2 = param_2->Code;
  uVar1 = *(undefined8 *)puVar2;
  param_2->Code = puVar2 + 8;
  *(undefined8 *)param_3 = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 8);
  param_2->Code = puVar2 + 0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x10);
  param_2->Code = puVar2 + 0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execVirtualFunction @ 14223d260

void __cdecl UObject::execVirtualFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uchar *puVar3;
  FName FVar4;
  UFunction *pUVar5;
  FNameEntryId local_18;
  
  puVar3 = param_2->Code;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(uint *)(puVar3 + 8);
  param_2->Code = puVar3 + 0xc;
  local_18.Value = (uint)uVar1;
  FVar4.Number = uVar2;
  FVar4.ComparisonIndex.Value = local_18.Value;
  pUVar5 = FindFunctionChecked(param_1,FVar4);
  CallFunction(param_1,param_2,param_3,pUVar5);
  return;
}

// execWireTracepoint @ 14223d2d0

void __cdecl UObject::execWireTracepoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FBlueprintExceptionInfo local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBlueprintCoreDelegates::OnScriptException);
  if (bVar1) {
    local_28.EventType = WireTracepoint;
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_28.Description.field0_0x0.TypedValue.Flags = 0;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  return;
}

// UObject @ 142258b30

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UObject::UObject(UObject *this,FObjectInitializer *param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  EnsureNotRetrievingVTablePtr(this);
  if ((param_1->Obj != (UObject *)0x0) && (param_1->Obj != this)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  param_1->Obj = this;
  param_1->bSubobjectClassInitializationAllowed = false;
  return this;
}

// UObject @ 142258b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UObject::UObject(UObject *this)

{
  uint *puVar1;
  FUObjectThreadContext *this_00;
  FObjectInitializer *pFVar2;
  FName local_res8;
  undefined1 local_18 [16];
  
  *(undefined ***)this = &___7UObject__6B_;
  EnsureNotRetrievingVTablePtr(this);
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  this_00 = (FUObjectThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_18,puVar1);
  pFVar2 = FUObjectThreadContext::TopInitializer(this_00);
  if (pFVar2 == (FObjectInitializer *)0x0) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,(FString *)local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
  }
  if ((pFVar2->Obj != (UObject *)0x0) && (pFVar2->Obj != this)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  pFVar2->Obj = this;
  pFVar2->bSubobjectClassInitializationAllowed = false;
  return this;
}

// GetArchetype @ 14226ea30

UObject * __thiscall UObject::GetArchetype(UObject *this)

{
  UObject *pUVar1;
  
  pUVar1 = GetArchetypeImpl(this,(IObjectArchetypePolicy *)0x0);
  return pUVar1;
}

// GetArchetypeFromRequiredInfo @ 14226ea40

UObject * __cdecl
UObject::GetArchetypeFromRequiredInfo
          (UClass *param_1,UObject *param_2,FName param_3,EObjectFlags param_4)

{
  UObject *pUVar1;
  
  pUVar1 = FindArchetypeFromRequiredInfoImpl<0,1>
                     (param_1,param_2,param_3,param_4,false,(IObjectArchetypePolicy *)0x0);
  return pUVar1;
}

// PostInitProperties @ 14227b450

void __thiscall UObject::PostInitProperties(UObject *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  UObject *local_28;
  code *local_20;
  undefined1 *local_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_18 = local_res8;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  local_28 = this;
  if (((ulonglong)FVar7 <= &local_28) &&
     (&local_28 < (UObject **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UObject **)((longlong)FVar7 + (longlong)iVar4 * 8) = local_28;
  (**(code **)(**(longlong **)&this->field_0x10 + 0x3a8))
            (*(longlong **)&this->field_0x10,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostReinitProperties @ 14227b5a0

void __thiscall UObject::PostReinitProperties(UObject *this)

{
  return;
}

// SetLinker @ 1422a6a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObject::SetLinker(UObject *this,FLinkerLoad *param_1,int param_2,bool param_3,bool param_4)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLinkerIndexPair *pFVar6;
  FObjectExport *this_00;
  FLLMScope local_res10 [2];
  uint local_res18;
  char local_res20;
  FLinkerIndexPair local_168;
  uint local_158;
  FString local_150;
  FString local_140;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FMemScope local_110;
  FName local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_158 = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((this == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x3ce,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::GetAnnotation
            (&LinkerAnnotation,&local_168,*(int *)&this->field_0xc);
  if (((local_168.LinkerIndex == 0xffffffffU) != (local_168.Linker == (FLinkerLoad *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                         ,0x39,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_168.Linker != param_1) || (local_168.LinkerIndex != param_2)) {
    if ((local_168.Linker != (FLinkerLoad *)0x0) && (local_res20 != '\0')) {
      if ((*(uint *)&this->field_0x8 & 0x1400) != 0) {
        if ((1 < (byte)LogUObjectLinker._0_1_) && (!param_4)) {
          if (param_1 != (FLinkerLoad *)0x0) {
            FPackagePath::GetDebugName(&param_1->PackagePath,&local_f8);
            local_158 = 1;
          }
          ::LexToString(&local_98,*(EObjectFlags *)&this->field_0x8);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_a8,(UObject *)0x0,None);
          FLinkerLoad::GetArchiveName((FLinkerLoad *)&(local_168.Linker)->_padding_,&local_b8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectLinker);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (((local_158 & 1) != 0) &&
             (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      uVar5 = 0;
      if (local_168.LinkerIndex < (int)(local_168.Linker)->_padding_) {
        uVar5 = (uint)~local_168.LinkerIndex >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FObjectExport *)
                ((longlong)local_168.LinkerIndex * 0x68 + (local_168.Linker)->_padding_);
      if (this_00->Object == (UObject *)0x0) {
        local_130.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_130.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_130,&local_88);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExportObject.Object != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                           ,0x82,L"Expected ExportMap[%d].Object to not be null for this (\'%s\')");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (this_00->Object != this) {
        local_128.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_128.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_128,&local_68);
        local_120.ComparisonIndex.Value = *(uint *)&this_00->Object->field_0x18;
        local_120.Number = *(uint *)&this_00->Object->field_0x1c;
        ::FName::ToString(&local_120,&local_78);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExportObject.Object == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                           ,0x83,L"Expected ExportMap[%d].Object (\'%s\') to equal this (\'%s\')");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar1 = this_00->field_0x4c;
      FObjectExport::ResetObject(this_00);
      this_00->field_0x4c = (bVar1 ^ this_00->field_0x4c) & 0x7f ^ bVar1;
    }
    if (local_168.Linker == param_1) {
      local_res20 = '\0';
    }
    else {
      if (((local_168.LinkerIndex == 0xffffffffU) != (local_168.Linker == (FLinkerLoad *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                             ,0x39,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_168.Linker != (FLinkerLoad *)0x0) && (param_1 != (FLinkerLoad *)0x0)) {
        iVar2 = *(int *)&this->field_0xc;
        AcquireSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
        FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::FreeAnnotation(&LinkerAnnotation,iVar2)
        ;
        ReleaseSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
      }
    }
    uVar5 = local_res18;
    if ((local_168.Linker != param_1) || (local_168.LinkerIndex != local_res18)) {
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UObject_Linker.UniqueName,false,None,Default,true);
      local_118 = LLMTagDeclaration_UObject_Linker.UniqueName;
      FMemScope::FMemScope(&local_110,&local_118,true);
      uStack_c0 = uVar5;
      local_c8 = param_1;
      if (((uVar5 == 0xffffffff) != (param_1 == (FLinkerLoad *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                             ,0x39,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = *(int *)&this->field_0xc;
      AcquireSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x334,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((uVar5 == 0xffffffff) != (param_1 == (FLinkerLoad *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                             ,0x39,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_1 == (FLinkerLoad *)0x0) {
        FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::FreeAnnotation(&LinkerAnnotation,iVar2)
        ;
      }
      else {
        if ((LinkerAnnotation.NumAnnotations == 0) && (LinkerAnnotation.Chunks.ArrayNum == 0)) {
          FUObjectArray::AddUObjectDeleteListener
                    (&GUObjectArray,(FUObjectDeleteListener *)&LinkerAnnotation);
        }
        pFVar6 = FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::AllocateAnnotation
                           (&LinkerAnnotation,iVar2);
        *(undefined4 *)&pFVar6->Linker = (undefined4)local_c8;
        *(undefined4 *)((longlong)&pFVar6->Linker + 4) = local_c8._4_4_;
        pFVar6->LinkerIndex = uStack_c0;
        *(undefined4 *)&pFVar6->field_0xc = uStack_bc;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
      FMemScope::~FMemScope(&local_110);
      FLLMScope::~FLLMScope(local_res10);
    }
    if (((local_res20 != '\0') && (local_168.Linker != (FLinkerLoad *)0x0)) &&
       (param_1 != (FLinkerLoad *)0x0)) {
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_140,L"None");
      }
      else {
        local_108 = *(FName *)(param_1->_padding_ + 0x18);
        ::FName::ToString(&local_108,&local_140);
      }
      FPackagePath::GetDebugName(&param_1->PackagePath,&local_d8);
      if ((local_168.Linker)->_padding_ == 0) {
        ::FString::FString(&local_150,L"None");
      }
      else {
        local_100 = *(FName *)((local_168.Linker)->_padding_ + 0x18);
        ::FName::ToString(&local_100,&local_150);
      }
      FPackagePath::GetDebugName(&(local_168.Linker)->PackagePath,&local_e8);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectLinker);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1504857f0

bool __thiscall `UObject::ConditionalPostLoad'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7654003781603949246>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7654003781603949246>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048585d;
    }
  }
  bVar2 = false;
LAB_15048585d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150485950

bool __thiscall `UObject::GetWorldChecked'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7654003781603949408>);
  if (bVar2) {
    local_res10 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7654003781603949408>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504859f2;
    }
  }
  bVar2 = false;
LAB_1504859f2:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150485a30

bool __thiscall `UObject::LoadConfig'::__l58::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7654003781603947692>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7654003781603947692>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488c90

bool __thiscall `UObject::ProcessInternal'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7634585018982988492>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7634585018982988492>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150488d00;
    }
  }
  bVar2 = false;
LAB_150488d00:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

