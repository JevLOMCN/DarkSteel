// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// StaticClass @ 1492c2660

UClass * __cdecl UNiagaraParameterCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterCollection,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton;
}

// UNiagaraParameterCollection @ 1492d3180

UNiagaraParameterCollection * __thiscall
UNiagaraParameterCollection::UNiagaraParameterCollection
          (UNiagaraParameterCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraParameterCollection__6B_;
  (this->Namespace).ComparisonIndex = 0;
  (this->Namespace).Number = 0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  (this->SourceMaterialCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->DefaultInstance).field0_0x0.DebugPtr = (UNiagaraParameterCollectionInstance *)0x0;
  (this->CompileId).A = 0;
  (this->CompileId).B = 0;
  (this->CompileId).C = 0;
  (this->CompileId).D = 0;
  (this->FullNamespace).ComparisonIndex = 0;
  (this->FullNamespace).Number = 0;
  return this;
}

// UNiagaraParameterCollection @ 1492d31d0

UNiagaraParameterCollection * __thiscall
UNiagaraParameterCollection::UNiagaraParameterCollection
          (UNiagaraParameterCollection *this,FObjectInitializer *param_1)

{
  FName FVar1;
  undefined4 uVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UNiagaraParameterCollectionInstance *this_00;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraParameterCollection__6B_;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  (this->SourceMaterialCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->DefaultInstance).field0_0x0.DebugPtr = (UNiagaraParameterCollectionInstance *)0x0;
  (this->CompileId).A = 0;
  (this->CompileId).B = 0;
  (this->CompileId).C = 0;
  (this->CompileId).D = 0;
  (this->FullNamespace).ComparisonIndex = 0;
  (this->FullNamespace).Number = 0;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (this->Namespace).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (this->Namespace).Number = uVar2;
  BuildFullNamespace(this);
  pFVar3 = ::FName::FName(&local_res8,L"Default Instance");
  FVar1 = *pFVar3;
  pUVar4 = UNiagaraParameterCollectionInstance::StaticClass();
  this_00 = (UNiagaraParameterCollectionInstance *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UNiagaraParameterCollectionInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->DefaultInstance).field0_0x0.DebugPtr = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (this_00->Collection).field0_0x0.DebugPtr = this;
  UNiagaraParameterCollectionInstance::SyncWithCollection(this_00);
  return this;
}

// ~UNiagaraParameterCollection @ 1492d4c20

void __thiscall
UNiagaraParameterCollection::~UNiagaraParameterCollection(UNiagaraParameterCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraParameterCollection__6B_;
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddParameter @ 1492dae30

int __thiscall
UNiagaraParameterCollection::AddParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNiagaraVariable *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeRegistry *pFVar7;
  FNiagaraTypeDefinition *pFVar8;
  FNiagaraTypeDefinition *pFVar9;
  FNiagaraParameterStore *pFVar10;
  FScriptContainerElement *pFVar11;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar12;
  
  pFVar2 = (this->Parameters).AllocatorInstance.Data;
  iVar6 = (this->Parameters).ArrayNum;
  pFVar11 = pFVar2;
  do {
    if (pFVar11 == pFVar2 + (longlong)iVar6 * 0x20) {
LAB_1492daeca:
      pTVar12 = &this->Parameters;
      pFVar3 = (FNiagaraVariable *)(pTVar12->AllocatorInstance).Data;
      if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Parameters).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = (this->Parameters).ArrayNum;
      piVar1 = &(this->Parameters).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar12->AllocatorInstance,piVar1);
        (this->Parameters).ArrayNum = iVar6;
      }
      pFVar2 = (pTVar12->AllocatorInstance).Data;
      (this->Parameters).ArrayNum = iVar6 + 1;
      FNiagaraVariable::FNiagaraVariable
                ((FNiagaraVariable *)(pFVar2 + (longlong)iVar6 * 0x20),param_1);
      pFVar10 = &((this->DefaultInstance).field0_0x0.DebugPtr)->ParameterStorage;
      (**(code **)(pFVar10->_padding_ + 0x10))(pFVar10,param_1,1,1,0);
      return iVar6;
    }
    if (param_1->_padding_ == *(longlong *)pFVar11) {
      if ((int)param_1->_padding_ != *(int *)(pFVar11 + 8)) {
        pFVar7 = FNiagaraTypeRegistry::Get();
        pFVar8 = FNiagaraTypeRegistry::GetRegisteredType(pFVar7,*(int *)(pFVar11 + 8));
        pFVar7 = FNiagaraTypeRegistry::Get();
        pFVar9 = FNiagaraTypeRegistry::GetRegisteredType(pFVar7,(int)param_1->_padding_);
        bVar5 = FNiagaraTypeDefinition::TypesAreAssignable(pFVar9,pFVar8,false);
        if (!bVar5) goto LAB_1492daebd;
      }
      iVar6 = (int)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
      if (iVar6 != -1) {
        return iVar6;
      }
      goto LAB_1492daeca;
    }
LAB_1492daebd:
    pFVar11 = pFVar11 + 0x20;
  } while( true );
}

// AddParameter @ 1492dafd0

int __thiscall
UNiagaraParameterCollection::AddParameter
          (UNiagaraParameterCollection *this,FName param_1,FNiagaraTypeDefinition *param_2)

{
  int iVar1;
  FNiagaraTypeRegistry *this_00;
  FNiagaraVariable local_28;
  
  local_28._padding_ = (longlong)param_1;
  if ((param_2->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    local_28._padding_._0_4_ = -1;
  }
  else {
    this_00 = FNiagaraTypeRegistry::Get();
    local_28._padding_._0_4_ = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,param_2);
  }
  local_28.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.VarData.ArrayNum = 0;
  local_28.VarData.ArrayMax = 0;
  iVar1 = AddParameter(this,&local_28);
  if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.VarData.AllocatorInstance.Data);
  }
  return iVar1;
}

// BuildFullNamespace @ 1492dc420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNiagaraParameterCollection::BuildFullNamespace(UNiagaraParameterCollection *this)

{
  void *pvVar1;
  FName *pFVar2;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  pvVar1 = FGenericPlatformString::Memcpy(local_838,L"NPC.",8);
  local_858.CurPos = (wchar_t *)((longlong)pvVar1 + 8);
  ::FName::AppendString(&this->Namespace,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_858.CurPos,L".",2);
  local_858.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
  pFVar2 = ::FName::FName(local_868,
                          (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                          local_858.Base,FNAME_Add);
  this->FullNamespace = *pFVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// CollectionParameterFromFriendlyParameter @ 1492de200

FNiagaraVariable * __thiscall
UNiagaraParameterCollection::CollectionParameterFromFriendlyParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *__return_storage_ptr__,
          FNiagaraVariable *param_1)

{
  int iVar1;
  FName FVar2;
  FNiagaraTypeRegistry *pFVar3;
  FNiagaraTypeDefinition *pFVar4;
  undefined1 local_res10 [8];
  
  FVar2 = ConditionalAddFullNamespace(this,(FName)local_res10);
  pFVar3 = FNiagaraTypeRegistry::Get();
  pFVar4 = FNiagaraTypeRegistry::GetRegisteredType(pFVar3,(int)param_1->_padding_);
  __return_storage_ptr__->_padding_ = *(longlong *)FVar2;
  if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    iVar1 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,pFVar4);
  }
  *(int *)&__return_storage_ptr__->_padding_ = iVar1;
  (__return_storage_ptr__->VarData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->VarData).ArrayNum = 0;
  (__return_storage_ptr__->VarData).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ConditionalAddFullNamespace @ 1492de2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
UNiagaraParameterCollection::ConditionalAddFullNamespace
          (UNiagaraParameterCollection *this,FName param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  void *pvVar3;
  FName *pFVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  undefined8 in_R8;
  undefined1 auStack_1928 [32];
  FName local_1908 [2];
  TStringBuilderBase<wchar_t> local_18f8;
  wchar_t local_18d8 [1035];
  wchar_t local_10c2 [5];
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1492de30e;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1928;
  local_10b8.Base = local_1098;
  local_10b8.bIsDynamic = false;
  local_10b8.bIsExternal = false;
  local_10b8.CurPos = local_1098;
  local_10b8.End = local_882;
  ::FName::AppendString(local_1908,&local_10b8);
  local_1908[0] = this->FullNamespace;
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(local_1908,&local_878);
  iVar2 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
  iVar7 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
  if (iVar7 < iVar2) {
    iVar2 = iVar7;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  if (iVar7 == iVar6) {
    if ((iVar7 != 0) && (iVar6 != 0)) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(local_878.Base,local_10b8.Base,(longlong)iVar6);
      if (iVar2 != 0) goto LAB_1492de41b;
    }
    if (iVar7 == iVar6) {
      *(undefined8 *)param_1 = in_R8;
      goto LAB_1492de4cf;
    }
  }
LAB_1492de41b:
  local_18f8.Base = local_18d8;
  local_18f8.bIsDynamic = false;
  local_18f8.bIsExternal = false;
  local_18f8.CurPos = local_18d8;
  local_18f8.End = local_10c2;
  ::FName::AppendString(&this->FullNamespace,&local_18f8);
  pwVar1 = local_10b8.Base;
  iVar2 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
  uVar5 = (ulong64)iVar2;
  if (local_18f8.End < local_18f8.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_18f8,uVar5);
  }
  if (iVar2 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_18f8.CurPos,pwVar1,uVar5 * 2);
    local_18f8.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  pFVar4 = ::FName::FName(local_1908,
                          (int)((longlong)local_18f8.CurPos - (longlong)local_18f8.Base >> 1),
                          local_18f8.Base,FNAME_Add);
  *(FName *)param_1 = *pFVar4;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_18f8);
LAB_1492de4cf:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
  return param_1;
}

// FriendlyNameFromParameterName @ 1492ec0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
UNiagaraParameterCollection::FriendlyNameFromParameterName
          (UNiagaraParameterCollection *this,FName param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  undefined8 in_R8;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_10e8 [32];
  FName local_10c8 [2];
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1492ec0e4;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_10e8;
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(local_10c8,&local_878);
  pwVar1 = local_878.Base;
  local_10c8[0] = this->FullNamespace;
  lVar7 = (longlong)local_878.CurPos - (longlong)local_878.Base;
  local_10b8.Base = local_1098;
  local_10b8.CurPos = local_1098;
  local_10b8.End = local_882;
  local_10b8.bIsDynamic = false;
  local_10b8.bIsExternal = false;
  ::FName::AppendString(local_10c8,&local_10b8);
  iVar6 = (int)(lVar7 >> 1);
  iVar5 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
  iVar2 = iVar6;
  if (iVar5 < iVar6) {
    iVar2 = iVar5;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  if (((iVar5 == iVar4) &&
      (((iVar5 == 0 || (iVar4 == 0)) ||
       (iVar2 = FGenericPlatformStricmp::Strnicmp(local_10b8.Base,pwVar1,(longlong)iVar4),
       iVar2 == 0)))) && (iVar5 == iVar4)) {
    iVar2 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
    pFVar3 = ::FName::FName(local_10c8,iVar6 - iVar2,pwVar1 + iVar2,FNAME_Add);
    *(FName *)param_1 = *pFVar3;
  }
  else {
    *(undefined8 *)param_1 = in_R8;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return param_1;
}

// FriendlyNameFromParameterName @ 1492ec270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UNiagaraParameterCollection::FriendlyNameFromParameterName
          (UNiagaraParameterCollection *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  FName this_00;
  wchar_t *pwVar3;
  undefined1 auStack_898 [32];
  FName local_878;
  FName local_870;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_870,pwVar3);
  local_878 = *pFVar2;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  ::FName::AppendString(&local_878,&local_868);
  ::FName::FName(&local_870,(int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1),
                 local_868.Base,FNAME_Add);
  this_00 = FriendlyNameFromParameterName(this,(FName)&local_878);
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// FriendlyParameterFromCollectionParameter @ 1492ec370

FNiagaraVariable * __thiscall
UNiagaraParameterCollection::FriendlyParameterFromCollectionParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *__return_storage_ptr__,
          FNiagaraVariable *param_1)

{
  int iVar1;
  FName FVar2;
  FNiagaraTypeRegistry *pFVar3;
  FNiagaraTypeDefinition *pFVar4;
  undefined1 local_res10 [8];
  
  FVar2 = ConditionalAddFullNamespace(this,(FName)local_res10);
  pFVar3 = FNiagaraTypeRegistry::Get();
  pFVar4 = FNiagaraTypeRegistry::GetRegisteredType(pFVar3,(int)param_1->_padding_);
  __return_storage_ptr__->_padding_ = *(longlong *)FVar2;
  if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    iVar1 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,pFVar4);
  }
  *(int *)&__return_storage_ptr__->_padding_ = iVar1;
  (__return_storage_ptr__->VarData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->VarData).ArrayNum = 0;
  (__return_storage_ptr__->VarData).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCompileHash @ 1492edb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNiagaraCompileHash * __thiscall
UNiagaraParameterCollection::GetCompileHash
          (UNiagaraParameterCollection *this,FNiagaraCompileHash *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraCompileHash *pFVar4;
  int iVar5;
  undefined1 auStackY_108 [32];
  FNiagaraCompileHash local_c8;
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FSHA1::FSHA1(&local_b8);
  FSHA1::Update(&local_b8,(uchar *)&this->CompileId,0x10);
  FSHA1::Final(&local_b8);
  local_c8.DataHash.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.DataHash.ArrayNum = 0;
  local_c8.DataHash.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x14,(ForAnyElementType *)&local_c8,&local_c8.DataHash.ArrayNum,
             &local_c8.DataHash.ArrayMax);
  FSHA1::GetHash(&local_b8,(uchar *)local_c8.DataHash.AllocatorInstance.Data);
  piVar1 = &(__return_storage_ptr__->DataHash).ArrayMax;
  *piVar1 = 0;
  (__return_storage_ptr__->DataHash).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DataHash).ArrayNum = 0;
  iVar5 = local_c8.DataHash.ArrayNum;
  if (local_c8.DataHash.ArrayNum != 0x14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDataHash.Num() == HashSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraCore\\Public\\NiagaraCompileHash.h"
                       ,0x13,L"Invalid hash data.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraCompileHash *)(*pcVar2)();
      return pFVar4;
    }
    iVar5 = local_c8.DataHash.ArrayNum;
  }
  _Src.Data = local_c8.DataHash.AllocatorInstance.Data;
  if (__return_storage_ptr__ != &local_c8) {
    (__return_storage_ptr__->DataHash).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((__return_storage_ptr__->DataHash).AllocatorInstance.Data,_Src.Data,(longlong)iVar5);
      }
    }
  }
  if (local_c8.DataHash.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.DataHash.AllocatorInstance.Data);
  }
  FSHA1::~FSHA1(&local_b8);
  return __return_storage_ptr__;
}

// GetFullNamespace @ 1492eea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UNiagaraParameterCollection::GetFullNamespace
          (UNiagaraParameterCollection *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868[0] = this->FullNamespace;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::AppendString(local_868,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1492f1300

UClass * __cdecl UNiagaraParameterCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterCollection,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterCollection.InnerSingleton;
}

// IndexOfParameter @ 1492f3280

int __thiscall
UNiagaraParameterCollection::IndexOfParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FNiagaraTypeRegistry *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraTypeDefinition *pFVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->Parameters).AllocatorInstance.Data;
  iVar1 = (this->Parameters).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x20) {
      return -1;
    }
    if (param_1->_padding_ == *(longlong *)pFVar7) {
      if ((int)param_1->_padding_ == *(int *)(pFVar7 + 8)) {
LAB_1492f3322:
        return (int)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
      }
      pFVar4 = FNiagaraTypeRegistry::Get();
      pFVar5 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,*(int *)(pFVar7 + 8));
      pFVar4 = FNiagaraTypeRegistry::Get();
      pFVar6 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,(int)param_1->_padding_);
      bVar3 = FNiagaraTypeDefinition::TypesAreAssignable(pFVar6,pFVar5,false);
      if (bVar3) goto LAB_1492f3322;
    }
    pFVar7 = pFVar7 + 0x20;
  } while( true );
}

// ParameterNameFromFriendlyName @ 1492fa270

FString * __thiscall
UNiagaraParameterCollection::ParameterNameFromFriendlyName
          (UNiagaraParameterCollection *this,FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t *pwVar1;
  FName local_res10;
  FName local_res18 [2];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar1);
  ConditionalAddFullNamespace(this,(FName)local_res18);
  ::FName::ToString(local_res18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ParameterNameFromFriendlyString @ 1492fa2d0

FName __thiscall
UNiagaraParameterCollection::ParameterNameFromFriendlyString
          (UNiagaraParameterCollection *this,FString *param_1)

{
  wchar_t *pwVar1;
  undefined8 *in_R8;
  FName local_res10 [3];
  
  if (*(int *)(in_R8 + 1) == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)*in_R8;
  }
  ::FName::FName(local_res10,pwVar1);
  ConditionalAddFullNamespace(this,(FName)param_1);
  return (FName)param_1;
}

// PostLoad @ 1492fb0b0

void __thiscall UNiagaraParameterCollection::PostLoad(UNiagaraParameterCollection *this)

{
  UMaterialParameterCollection *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  BuildFullNamespace(this);
  UObject::ConditionalPostLoad((UObject *)(this->DefaultInstance).field0_0x0.DebugPtr);
  if ((((this->CompileId).D == 0 && (this->CompileId).C == 0) && (this->CompileId).B == 0) &&
      (this->CompileId).A == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->CompileId).A = pFVar4->A;
    (this->CompileId).B = uVar1;
    (this->CompileId).C = uVar2;
    (this->CompileId).D = uVar3;
  }
  this_00 = (this->SourceMaterialCollection).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialParameterCollection *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    return;
  }
  return;
}

// RefreshCompileId @ 149302020

void __thiscall UNiagaraParameterCollection::RefreshCompileId(UNiagaraParameterCollection *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->CompileId).A = pFVar4->A;
  (this->CompileId).B = uVar1;
  (this->CompileId).C = uVar2;
  (this->CompileId).D = uVar3;
  return;
}

// RemoveParameter @ 149303a30

void __thiscall
UNiagaraParameterCollection::RemoveParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FNiagaraParameterStore *pFVar5;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  pFVar5 = &((this->DefaultInstance).field0_0x0.DebugPtr)->ParameterStorage;
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->CompileId).A = pFVar4->A;
  (this->CompileId).B = uVar1;
  (this->CompileId).C = uVar2;
  (this->CompileId).D = uVar3;
  (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,param_1);
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Remove(&this->Parameters,param_1);
  return;
}

// RenameParameter @ 149303d00

void __thiscall
UNiagaraParameterCollection::RenameParameter
          (UNiagaraParameterCollection *this,FNiagaraVariable *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FGuid *pFVar6;
  FNiagaraParameterStore *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FGuid local_18;
  
  pFVar6 = FGuid::NewGuid(&local_18);
  uVar8 = pFVar6->B;
  uVar5 = pFVar6->C;
  uVar3 = pFVar6->D;
  (this->CompileId).A = pFVar6->A;
  (this->CompileId).B = uVar8;
  (this->CompileId).C = uVar5;
  (this->CompileId).D = uVar3;
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Parameters).ArrayNum * 0x20) {
    pFVar9 = pFVar1;
    do {
      if ((*(longlong *)pFVar9 == param_1->_padding_) &&
         (*(int *)(pFVar9 + 8) == (int)param_1->_padding_)) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar1 >> 5);
        if (uVar8 != 0xffffffff) goto LAB_149303d9a;
        goto LAB_149303d63;
      }
      pFVar9 = pFVar9 + 0x20;
    } while (pFVar9 != pFVar1 + (longlong)(this->Parameters).ArrayNum * 0x20);
  }
  uVar8 = 0xffffffff;
LAB_149303d63:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParamIdx != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterCollection.cpp"
                     ,0x2fa,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149303d9a:
  uVar5 = 0;
  if ((int)uVar8 < (this->Parameters).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FName *)((this->Parameters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20) = param_2;
  pFVar7 = &((this->DefaultInstance).field0_0x0.DebugPtr)->ParameterStorage;
                    /* WARNING: Could not recover jumptable at 0x000149303e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,param_1,param_2);
  return;
}

// StaticRegisterNativesUNiagaraParameterCollection @ 149309e30

void __cdecl UNiagaraParameterCollection::StaticRegisterNativesUNiagaraParameterCollection(void)

{
  return;
}

