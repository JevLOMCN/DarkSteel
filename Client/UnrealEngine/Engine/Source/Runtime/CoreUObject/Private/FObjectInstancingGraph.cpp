// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// FObjectInstancingGraph @ 141fbe040

FObjectInstancingGraph * __thiscall
FObjectInstancingGraph::FObjectInstancingGraph
          (FObjectInstancingGraph *this,UObject *param_1,EObjectInstancingGraphOptions param_2)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  FObjectInstancingGraph *pFVar4;
  UObject *pUVar5;
  UPackage *pUVar6;
  FObjectInstancingGraph *local_38;
  UObject **local_30;
  UObject **local_28;
  FObjectInstancingGraph *local_20;
  
  this->InstancingOptions = param_2;
  this->SourceRoot = (UObject *)0x0;
  ppUVar1 = &this->DestinationRoot;
  this->bCreatingArchetype = false;
  this->bLoadingObject = false;
  *(undefined8 *)&this->SourceToDestinationMap = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x34 = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x48 = 0;
  *(undefined8 *)&this->DestinationToSourceMap = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x8 = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x20 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x28 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x34 = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x40 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x48 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x34 = 0;
  (this->SubobjectInstantiationExclusionList).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SubobjectInstantiationExclusionList).HashSize = 0;
  *ppUVar1 = param_1;
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FObjectInstancingGraph *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar5 = UObject::GetArchetype(*ppUVar1);
  this->SourceRoot = pUVar5;
  if (pUVar5 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                       ,0x9a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FObjectInstancingGraph *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_38 = this;
  local_30 = ppUVar1;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              *)&this->SourceToDestinationMap,
             (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000018,
             (bool *)&local_38);
  local_28 = ppUVar1;
  local_20 = this;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              *)&this->DestinationToSourceMap,
             (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  this->bCreatingArchetype = (bool)((byte)(*(uint *)&param_1->field_0x8 >> 5) & 1);
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (((uint)pUVar6->PackageFlagsPrivate >> 9 & 1) != 0) {
    this->bCreatingArchetype = false;
  }
  return this;
}

// FObjectInstancingGraph @ 141fbe1f0

FObjectInstancingGraph * __thiscall
FObjectInstancingGraph::FObjectInstancingGraph
          (FObjectInstancingGraph *this,EObjectInstancingGraphOptions param_1)

{
  this->InstancingOptions = param_1;
  this->SourceRoot = (UObject *)0x0;
  this->DestinationRoot = (UObject *)0x0;
  this->bCreatingArchetype = false;
  this->bLoadingObject = false;
  *(undefined8 *)&this->SourceToDestinationMap = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x34 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x48 = 0;
  *(undefined8 *)&this->DestinationToSourceMap = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x8 = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x20 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x28 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x34 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x40 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x48 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x30 = 0xffffffff;
  (this->SubobjectInstantiationExclusionList).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SubobjectInstantiationExclusionList).HashSize = 0;
  return this;
}

// FObjectInstancingGraph @ 141fbe2b0

FObjectInstancingGraph * __thiscall
FObjectInstancingGraph::FObjectInstancingGraph(FObjectInstancingGraph *this,bool param_1)

{
  this->InstancingOptions = (uint)param_1;
  this->SourceRoot = (UObject *)0x0;
  this->DestinationRoot = (UObject *)0x0;
  this->bCreatingArchetype = false;
  this->bLoadingObject = false;
  *(undefined8 *)&this->SourceToDestinationMap = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x34 = 0;
  *(undefined8 *)&(this->SourceToDestinationMap).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x48 = 0;
  *(undefined8 *)&this->DestinationToSourceMap = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x8 = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x20 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x28 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x34 = 0;
  *(undefined8 *)&(this->DestinationToSourceMap).field_0x40 = 0;
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x48 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectInstantiationExclusionList).Elements.field_0x34 = 0;
  (this->SubobjectInstantiationExclusionList).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SubobjectInstantiationExclusionList).HashSize = 0;
  return this;
}

// AddNewInstance @ 141fc4330

void __thiscall
FObjectInstancingGraph::AddNewInstance
          (FObjectInstancingGraph *this,UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<UObject_*_const_&,UObject_*_const_&> local_res8;
  UObject *local_38;
  UObject **local_30;
  UObject ***local_28;
  UObject ***local_20;
  UObject **local_18;
  
  local_res8.Value = (UObject **)param_1;
  if ((this->SourceRoot == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0x1eb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->DestinationRoot == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0x1ec,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((UObject *)local_res8.Value != (UObject *)0x0) {
    local_38 = param_2;
    if (((param_2 == (UObject *)0x0) &&
        (local_38 = UObject::GetArchetype((UObject *)local_res8.Value), local_38 == (UObject *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("SourceObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                              ,0x1f1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_30 = &local_38;
    local_28 = &local_res8.Value;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->SourceToDestinationMap,&local_res8,(bool *)&local_30);
    local_20 = &local_res8.Value;
    local_18 = &local_38;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->DestinationToSourceMap,
               (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000020,
               (bool *)&local_20);
  }
  return;
}

// AddNewObject @ 141fc4460

void __thiscall
FObjectInstancingGraph::AddNewObject(FObjectInstancingGraph *this,UObject *param_1,UObject *param_2)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UPackage *pUVar5;
  undefined1 local_78 [8];
  UObject *local_70;
  UObject *local_68;
  UObject **local_60;
  UObject **local_58;
  UObject **local_50;
  UObject **local_48;
  FObjectInstancingGraph *local_40;
  UObject **local_38;
  UObject **local_30;
  FObjectInstancingGraph *local_28;
  
  if ((((GEventDrivenLoaderEnabled) && (param_2 != (UObject *)0x0)) &&
      ((*(uint *)&param_2->field_0x8 >> 10 & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GEventDrivenLoaderEnabled || !InArchetype || !InArchetype->HasAnyFlags(RF_NeedLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0x1dd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppUVar1 = &this->DestinationRoot;
  if (this->DestinationRoot == (UObject *)0x0) {
    *ppUVar1 = param_1;
    if ((param_1 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestinationRoot",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 == (UObject *)0x0) {
      pUVar4 = UObject::GetArchetype(*ppUVar1);
      this->SourceRoot = pUVar4;
      if ((pUVar4 == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceRoot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                             ,0x9a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this->SourceRoot = param_2;
    }
    local_40 = this;
    local_38 = ppUVar1;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->SourceToDestinationMap,
               (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)local_78,(bool *)&local_40);
    local_30 = ppUVar1;
    local_28 = this;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->DestinationToSourceMap,
               (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)(local_78 + 4),
               (bool *)&local_30);
    this->bCreatingArchetype = (bool)((byte)(*(uint *)&param_1->field_0x8 >> 5) & 1);
    pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if (((uint)pUVar5->PackageFlagsPrivate >> 9 & 1) != 0) {
      this->bCreatingArchetype = false;
    }
  }
  else {
    local_70 = param_1;
    if ((this->SourceRoot == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceRoot",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                           ,0x1eb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*ppUVar1 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestinationRoot",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                           ,0x1ec,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_70 != (UObject *)0x0) {
      local_68 = param_2;
      if (((param_2 == (UObject *)0x0) &&
          (local_68 = UObject::GetArchetype(local_70), local_68 == (UObject *)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                             ,0x1f1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_60 = &local_68;
      local_58 = &local_70;
      TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
                ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                  *)&this->SourceToDestinationMap,
                 (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000008,
                 (bool *)&local_60);
      local_50 = &local_70;
      local_48 = &local_68;
      TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
                ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                  *)&this->DestinationToSourceMap,
                 (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&stack0x00000020,
                 (bool *)&local_50);
    }
  }
  return;
}

// GetDestinationObject @ 141fcf030

UObject * __thiscall
FObjectInstancingGraph::GetDestinationObject(FObjectInstancingGraph *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TTuple<UObject_*,UObject_*> *pTVar4;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  pTVar4 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                   *)&this->SourceToDestinationMap,param_1);
  if (pTVar4 != (TTuple<UObject_*,UObject_*> *)0x0) {
    return *(UObject **)&pTVar4->field_0x8;
  }
  return (UObject *)0x0;
}

// GetInstancedSubobject @ 141fd0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FObjectInstancingGraph::GetInstancedSubobject
          (FObjectInstancingGraph *this,UObject *param_1,UObject *param_2,UObject *param_3,
          EInstancePropertyValueFlags param_4)

{
  FName FVar1;
  longlong lVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  FOverridableManager *pFVar11;
  TTuple<UObject_*,UObject_*> *pTVar12;
  TNotNull<UObject_const_*> TVar13;
  FString *pFVar14;
  longlong *plVar15;
  UObjectBaseUtility *pUVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_148 [32];
  undefined1 local_110 [8];
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (param_1 == (UObject *)0x0) {
    return (UObject *)0xffffffffffffffff;
  }
  if (param_2 == (UObject *)0x0) {
    return (UObject *)0xffffffffffffffff;
  }
  bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_2,param_3);
  if (bVar6) {
    return (UObject *)0xffffffffffffffff;
  }
  pwVar17 = L"";
  if ((((param_4 >> 1 & 1) == 0) || (param_1 != this->SourceRoot)) &&
     (bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,this->SourceRoot), !bVar6)) {
    pUVar10 = *(UObject **)&param_2->field_0x20;
    pUVar9 = UObject::GetArchetype(param_3);
    if (pUVar10 != pUVar9) {
      return (UObject *)0xffffffffffffffff;
    }
    if ((param_1 != param_2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceSubobject == CurrentValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                           ,0xd6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UObject *)(*pcVar5)();
      return pUVar10;
    }
  }
  pFVar11 = FOverridableManager::Get();
  bVar6 = FOverridableManager::NeedSubObjectTemplateInstantiation
                    (pFVar11,(TNotNull<UObject_const_*>)param_1);
  if (((bVar6) && (param_1 != param_2)) &&
     (bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_2,this->SourceRoot), bVar6)) {
    param_1 = param_2;
  }
  pTVar12 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                    *)&this->SourceToDestinationMap,param_1);
  if ((pTVar12 != (TTuple<UObject_*,UObject_*> *)0x0) &&
     (pUVar10 = *(UObject **)&pTVar12->field_0x8, pUVar10 != (UObject *)0x0)) {
    if (this->bLoadingObject == false) {
      return pUVar10;
    }
    if ((*(uint *)(*(longlong *)&pUVar10->field_0x10 + 0xd4) >> 0x17 & 1) != 0) {
      UObject::ConditionalPostLoadSubobjects(pUVar10,this);
      return pUVar10;
    }
    return pUVar10;
  }
  pUVar10 = (UObject *)0x0;
  if ((param_4 >> 2 & 1) != 0) {
    return (UObject *)0xffffffffffffffff;
  }
  if ((param_2 != param_1) && (*(UObject **)&param_2->field_0x20 == param_3)) {
    return param_2;
  }
  cVar7 = (**(code **)(*(longlong *)param_1 + 0x100))(param_1);
  cVar8 = (**(code **)(*(longlong *)param_1 + 0x108))(param_1);
  if (GIsClient == false) {
    if (GIsServer != false) {
LAB_141fd0cdb:
      if (GIsServer == false) {
        return (UObject *)0x0;
      }
      if (cVar8 == '\0') {
        return (UObject *)0x0;
      }
    }
  }
  else if (cVar7 == '\0') goto LAB_141fd0cdb;
  pUVar9 = *(UObject **)&((UObjectBaseUtility *)param_1)->field_0x20;
  if ((pUVar9 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0xbc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UObject *)(*pcVar5)();
    return pUVar10;
  }
  pTVar12 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                    *)&this->SourceToDestinationMap,pUVar9);
  if (((pTVar12 == (TTuple<UObject_*,UObject_*> *)0x0) ||
      (TVar13.Val = *(UObject **)&pTVar12->field_0x8, TVar13.Val == (UObject *)0x0)) &&
     (TVar13.Val = GetInstancedSubobject
                             (this,*(UObject **)&((UObjectBaseUtility *)param_1)->field_0x20,
                              *(UObject **)&((UObjectBaseUtility *)param_1)->field_0x20,param_3,
                              param_4),
     ((ulonglong)&(TVar13.Val)->field_0x1 & 0xfffffffffffffffe) == 0)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_f8,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)&((UObjectBaseUtility *)param_1)->field_0x20,&local_108,
               (UObject *)0x0,None);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubobjectOuter && SubobjectOuter != (UObject*)-1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                       ,0x10f,
                       L"No corresponding destination object found for \'%s\' while attempting to instance subobject \'%s\'"
                      );
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UObject *)(*pcVar5)();
      return pUVar10;
    }
  }
  FVar1.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)param_1)->field_0x18;
  FVar1.Number = *(uint *)&((UObjectBaseUtility *)param_1)->field_0x1c;
  pUVar16 = (UObjectBaseUtility *)param_1;
  if ((this->bLoadingObject != false) && (param_2 == param_1)) {
    pFVar11 = FOverridableManager::Get();
    if (TVar13.Val == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    bVar6 = FOverridableManager::IsEnabled(pFVar11,TVar13);
    if (((bVar6) && ((*(uint *)(*(longlong *)&(TVar13.Val)->field_0x10 + 0xd4) >> 0x12 & 1) != 0))
       && (pUVar9 = StaticFindObjectFast((UClass *)0x0,TVar13.Val,FVar1,None,RF_NoFlags,Borrowed),
          pUVar9 != (UObject *)0x0)) {
      if ((*(uint *)&pUVar9->field_0x8 >> 10 & 1) == 0) {
        lVar2 = *(longlong *)&pUVar9->field_0x10;
        lVar3 = *(longlong *)&((UObjectBaseUtility *)param_1)->field_0x10;
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          pUVar16 = (UObjectBaseUtility *)pUVar9;
          if (lVar3 == lVar2) {
            pUVar10 = pUVar9;
            pUVar16 = (UObjectBaseUtility *)param_1;
          }
          goto LAB_141fd0f0c;
        }
      }
      FVar4.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x10;
      FVar4.Number = *(uint *)&pUVar9->field_0x14;
      MakeUniqueObjectName
                ((UObject *)local_110,(UClass *)TVar13.Val,FVar4,FVar1.ComparisonIndex.Value);
      pcVar5 = *(code **)(*(longlong *)pUVar9 + 0x170);
      pFVar14 = ::FName::ToString((FName *)local_110,&local_e8);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      (*pcVar5)(pUVar9,pwVar17,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141fd0f0c:
  if ((*(uint *)(*(longlong *)&(TVar13.Val)->field_0x10 + 0xd4) >> 0x12 & 1) == 0) {
    pUVar10 = StaticFindObjectFast((UClass *)0x0,TVar13.Val,FVar1,None,RF_NoFlags,Borrowed);
  }
  if ((pUVar10 == (UObject *)0x0) ||
     (((this->bCreatingArchetype != false && (this->bLoadingObject == false)) &&
      ((*(uint *)&pUVar10->field_0x8 >> 0x15 & 1) == 0)))) {
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,
               *(UClass **)&((UObject *)pUVar16)->field_0x10);
    local_d8._24_4_ =
         *(EObjectFlags *)&(TVar13.Val)->field_0x8 &
         (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public);
    local_d8[0x20] = true;
    local_d8._8_8_ = TVar13.Val;
    local_d8._16_8_ = FVar1;
    local_d8._40_8_ = pUVar16;
    local_d8._48_8_ = this;
    pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar15 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return pUVar10;
}

// InstancePropertyValue @ 141fd55a0

UObject * __thiscall
FObjectInstancingGraph::InstancePropertyValue
          (FObjectInstancingGraph *this,UObject *param_1,TNotNull<UObject_*> param_2,
          TNotNull<UObject_*> param_3,EInstancePropertyValueFlags param_4)

{
  UObjectBaseUtility *this_00;
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  TTuple<UObject_*,UObject_*> *pTVar4;
  UObject *this_01;
  UObject *pUVar5;
  uint uVar6;
  undefined1 *puVar7;
  TNotNull<UObject_*> TVar8;
  byte bVar9;
  undefined8 *puVar10;
  UObject *pUVar11;
  bool bVar12;
  
  bVar9 = (byte)param_4 & 1;
  bVar12 = (param_4 & AllowSelfReference) != None;
  pUVar5 = this->SourceRoot;
  if ((*(uint *)(*(longlong *)&(param_2.Val)->field_0x10 + 0xd4) & 0x200000) == 0) {
    if ((((param_4 & CausesInstancing) == None) && ((param_4 & AllowSelfReference) == None)) &&
       (*(char *)(*(longlong *)&(param_3.Val)->field_0x10 + 0x128) != '\0')) {
      if (param_3.Val != this->DestinationRoot) {
        pTVar4 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                         *)&this->DestinationToSourceMap,param_3.Val);
        puVar10 = (undefined8 *)&pTVar4->field_0x8;
        if (pTVar4 == (TTuple<UObject_*,UObject_*> *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        if (puVar10 != (undefined8 *)0x0) {
          this_00 = (UObjectBaseUtility *)*puVar10;
          bVar2 = UObjectBaseUtility::IsIn(this_00,pUVar5);
          if (!bVar2) {
            while (pUVar11 = (UObject *)this_00,
                  uVar6 = ((uint)((ulonglong)pUVar11 >> 0x14) & 0xffff ^
                          (uint)((ulonglong)pUVar11 >> 4)) * -0x7a143595,
                  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb,
                  *(int *)&(this->SourceToDestinationMap).field_0x8 !=
                  *(int *)&(this->SourceToDestinationMap).field_0x34) {
              puVar1 = *(undefined1 **)&(this->SourceToDestinationMap).field_0x40;
              puVar7 = &(this->SourceToDestinationMap).field_0x38;
              if (puVar1 != (undefined1 *)0x0) {
                puVar7 = puVar1;
              }
              iVar3 = *(int *)(puVar7 + (ulonglong)
                                        (*(int *)&(this->SourceToDestinationMap).field_0x48 - 1U &
                                        (uVar6 >> 0x10 ^ uVar6)) * 4);
              if (iVar3 == -1) break;
              while (*(UObject **)
                      (*(longlong *)&this->SourceToDestinationMap + (longlong)iVar3 * 0x18) !=
                     pUVar11) {
                iVar3 = *(int *)(*(longlong *)&this->SourceToDestinationMap + 0x10 +
                                (longlong)iVar3 * 0x18);
                if (iVar3 == -1) goto LAB_141fd56fb;
              }
              this_00 = (UObjectBaseUtility *)*(UObject **)&pUVar11->field_0x20;
              pUVar5 = pUVar11;
            }
          }
        }
      }
LAB_141fd56fb:
      if (param_2.Val == pUVar5) {
        bVar12 = true;
        param_4 = param_4 | AllowSelfReference;
      }
      else {
        bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_2.Val,pUVar5);
        if (bVar2) {
          bVar9 = 1;
        }
      }
    }
  }
  else {
    bVar9 = 1;
  }
  if ((((this->InstancingOptions & DisableInstancing) == None) && ((bVar9 != 0 || (bVar12)))) &&
     (((this->InstancingOptions & InstanceTemplatesOnly) == None ||
      (bVar12 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)param_2.Val,
                           RF_ArchetypeObject|RF_ClassDefaultObject), bVar12)))) {
    if ((param_1 == (UObject *)0x0) &&
       (pUVar11 = *(UObject **)&(param_2.Val)->field_0x20, pUVar11 != param_3.Val)) {
      for (this_01 = UObject::GetArchetype(param_3.Val); this_01 != (UObject *)0x0;
          this_01 = UObject::GetArchetype(this_01)) {
        if (pUVar11 == this_01) {
          return (UObject *)0x0;
        }
      }
    }
    pUVar11 = this->SourceRoot;
    this->SourceRoot = pUVar5;
    TVar8.Val = param_2.Val;
    if (param_1 != (UObject *)0x0) {
      TVar8.Val = param_1;
    }
    pUVar5 = GetInstancedSubobject(this,TVar8.Val,param_2.Val,param_3.Val,param_4);
    this->SourceRoot = pUVar11;
    if (pUVar5 != (UObject *)0xffffffffffffffff) {
      param_2.Val = pUVar5;
    }
  }
  return param_2.Val;
}

// RetrieveObjectInstances @ 141fe3190

void __thiscall
FObjectInstancingGraph::RetrieveObjectInstances
          (FObjectInstancingGraph *this,UObject *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  UObject *local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pUVar1 = this->DestinationRoot;
  if (((pUVar1 != (UObject *)0x0) && (param_1 != (UObject *)0x0)) &&
     ((param_1 == pUVar1 ||
      (bVar3 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,pUVar1), bVar3)))) {
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->SourceToDestinationMap);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)&this->SourceToDestinationMap;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        local_res8 = *(UObject **)(*local_48 + 8 + (longlong)(int)uVar5 * 0x18);
        if (*(UObject **)&local_res8->field_0x20 == param_1) {
          TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
                    (param_2,&local_res8);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar6 < 4) {
          iVar4 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// SetDestinationRoot @ 141fe8dd0

void __thiscall
FObjectInstancingGraph::SetDestinationRoot
          (FObjectInstancingGraph *this,UObject *param_1,UObject *param_2)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UPackage *pUVar5;
  TPairInitializer<UObject_*_const_&,UObject_*_const_&> local_res8;
  FObjectInstancingGraph *local_38;
  UObject **local_30;
  UObject **local_28;
  FObjectInstancingGraph *local_20;
  
  this->DestinationRoot = param_1;
  ppUVar1 = &this->DestinationRoot;
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (UObject *)0x0) {
    pUVar4 = UObject::GetArchetype(*ppUVar1);
    this->SourceRoot = pUVar4;
    if (pUVar4 == (UObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0x9a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    this->SourceRoot = param_2;
  }
  local_38 = this;
  local_30 = ppUVar1;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              *)&this->SourceToDestinationMap,&local_res8,(bool *)&local_38);
  local_28 = ppUVar1;
  local_20 = this;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              *)&this->DestinationToSourceMap,
             (TPairInitializer<UObject_*_const_&,UObject_*_const_&> *)&local_res8.Value,
             (bool *)&local_28);
  this->bCreatingArchetype = (bool)((byte)(*(uint *)&param_1->field_0x8 >> 5) & 1);
  pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (((uint)pUVar5->PackageFlagsPrivate >> 9 & 1) != 0) {
    this->bCreatingArchetype = false;
  }
  return;
}

// ~FObjectInstancingGraph @ 1422d12a0

void __thiscall FObjectInstancingGraph::~FObjectInstancingGraph(FObjectInstancingGraph *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->SubobjectInstantiationExclusionList).HashSize = 0;
  FVar1 = (this->SubobjectInstantiationExclusionList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SubobjectInstantiationExclusionList).Elements);
  *(undefined4 *)&(this->DestinationToSourceMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DestinationToSourceMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DestinationToSourceMap);
  *(undefined4 *)&(this->SourceToDestinationMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceToDestinationMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceToDestinationMap);
  return;
}

