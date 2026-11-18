// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 14

// StaticStruct @ 14a203870

UScriptStruct * __cdecl FRigModuleReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleReference.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigModuleReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleReference,(UObject *)pUVar1,
                         L"RigModuleReference");
  }
  return Z_Registration_Info_UScriptStruct_FRigModuleReference.OuterSingleton;
}

// FRigModuleReference @ 14a2209e0

FRigModuleReference * __thiscall
FRigModuleReference::FRigModuleReference(FRigModuleReference *this,FRigModuleReference *param_1)

{
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *pTVar1;
  TMap<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *pTVar3;
  bool bVar4;
  undefined8 uVar5;
  
  this->Name = param_1->Name;
  (this->ShortName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName_DEPRECATED).Data.AllocatorInstance.Data =
       (param_1->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
  (param_1->ShortName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName_DEPRECATED).Data.ArrayNum = (param_1->ShortName_DEPRECATED).Data.ArrayNum;
  (this->ShortName_DEPRECATED).Data.ArrayMax = (param_1->ShortName_DEPRECATED).Data.ArrayMax;
  (param_1->ShortName_DEPRECATED).Data.ArrayNum = 0;
  (param_1->ShortName_DEPRECATED).Data.ArrayMax = 0;
  bVar4 = param_1->bShortNameBasedOnPath_DEPRECATED;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bShortNameBasedOnPath_DEPRECATED = bVar4;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
       (param_1->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
  (param_1->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPath_DEPRECATED).Data.ArrayNum = (param_1->ParentPath_DEPRECATED).Data.ArrayNum;
  (this->ParentPath_DEPRECATED).Data.ArrayMax = (param_1->ParentPath_DEPRECATED).Data.ArrayMax;
  (param_1->ParentPath_DEPRECATED).Data.ArrayNum = 0;
  (param_1->ParentPath_DEPRECATED).Data.ArrayMax = 0;
  this->ParentModuleName = param_1->ParentModuleName;
  *(undefined8 *)&(this->Class).SoftObjectPtr = *(undefined8 *)&(param_1->Class).SoftObjectPtr;
  uVar5 = *(undefined8 *)&(param_1->Class).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->Class).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x10 = uVar5;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->Class).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->Class).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->Class).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->Class).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->Class).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->Class).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->Class).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x0 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x48 = 0;
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
              *)&this->Connections_DEPRECATED,
             (TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
              *)&param_1->Connections_DEPRECATED);
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x0 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->ConfigValues_DEPRECATED,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->ConfigValues_DEPRECATED);
  (this->ConfigOverrides).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &(this->ConfigOverrides).HashIndexLookup;
  (this->ConfigOverrides).Values.AllocatorInstance.Data =
       (param_1->ConfigOverrides).Values.AllocatorInstance.Data;
  (param_1->ConfigOverrides).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigOverrides).Values.ArrayNum = (param_1->ConfigOverrides).Values.ArrayNum;
  (this->ConfigOverrides).Values.ArrayMax = (param_1->ConfigOverrides).Values.ArrayMax;
  (param_1->ConfigOverrides).Values.ArrayNum = 0;
  (param_1->ConfigOverrides).Values.ArrayMax = 0;
  (this->ConfigOverrides).bUsesKeyForSubject = (param_1->ConfigOverrides).bUsesKeyForSubject;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->ConfigOverrides).HashIndexLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ConfigOverrides).HashIndexLookup.field_0x20 = 0;
  *(undefined4 *)&(this->ConfigOverrides).HashIndexLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ConfigOverrides).HashIndexLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigOverrides).HashIndexLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigOverrides).HashIndexLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ConfigOverrides).HashIndexLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ConfigOverrides).HashIndexLookup.field_0x48 = 0;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)pTVar1,
             (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)&(param_1->ConfigOverrides).HashIndexLookup);
  pTVar2 = &(this->ConfigOverrides).SubjectIndexLookup;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x20 = 0;
  *(undefined4 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ConfigOverrides).SubjectIndexLookup.field_0x48 = 0;
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar2,
             (TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&(param_1->ConfigOverrides).SubjectIndexLookup);
  pTVar3 = &(this->ConfigOverrides).ContainsParentPathCache;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x8 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x20 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x28 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x34 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x40 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsParentPathCache.field_0x48 = 0;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)pTVar3,
             (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)&(param_1->ConfigOverrides).ContainsParentPathCache);
  pTVar3 = &(this->ConfigOverrides).ContainsChildPathCache;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x8 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x20 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x28 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x34 = 0;
  *(undefined8 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x40 = 0;
  *(undefined4 *)&(this->ConfigOverrides).ContainsChildPathCache.field_0x48 = 0;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)pTVar3,
             (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)&(param_1->ConfigOverrides).ContainsChildPathCache);
  *(undefined8 *)&(this->Bindings).field_0x0 = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->Bindings,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->Bindings);
  this->PreviousName = param_1->PreviousName;
  this->PreviousParentName = param_1->PreviousParentName;
  (this->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).AllocatorInstance.Data = (param_1->CachedChildren).AllocatorInstance.Data;
  (param_1->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).ArrayNum = (param_1->CachedChildren).ArrayNum;
  (this->CachedChildren).ArrayMax = (param_1->CachedChildren).ArrayMax;
  (param_1->CachedChildren).ArrayNum = 0;
  (param_1->CachedChildren).ArrayMax = 0;
  this->Model = param_1->Model;
  return this;
}

// FRigModuleReference @ 14a220cd0

FRigModuleReference * __thiscall
FRigModuleReference::FRigModuleReference(FRigModuleReference *this,FRigModuleReference *param_1)

{
  int *piVar1;
  TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->Name = param_1->Name;
  ::FString::FString(&this->ShortName_DEPRECATED,&param_1->ShortName_DEPRECATED);
  this->bShortNameBasedOnPath_DEPRECATED = param_1->bShortNameBasedOnPath_DEPRECATED;
  ::FString::FString(&this->ParentPath_DEPRECATED,&param_1->ParentPath_DEPRECATED);
  this->ParentModuleName = param_1->ParentModuleName;
  *(undefined8 *)&(this->Class).SoftObjectPtr = *(undefined8 *)&(param_1->Class).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->Class).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->Class).SoftObjectPtr.field_0x8);
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x0 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x48 = 0;
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
               *)&this->Connections_DEPRECATED,
              (TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
               *)&param_1->Connections_DEPRECATED);
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x0 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->ConfigValues_DEPRECATED,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->ConfigValues_DEPRECATED);
  FControlRigOverrideContainer::FControlRigOverrideContainer
            (&this->ConfigOverrides,&param_1->ConfigOverrides);
  *(undefined8 *)&(this->Bindings).field_0x0 = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->Bindings,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->Bindings);
  pTVar2 = &this->CachedChildren;
  this->PreviousName = param_1->PreviousName;
  this->PreviousParentName = param_1->PreviousParentName;
  piVar1 = &(this->CachedChildren).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->CachedChildren).ArrayNum;
  _Src = (param_1->CachedChildren).AllocatorInstance.Data;
  (this->CachedChildren).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->Model = param_1->Model;
  return this;
}

// FRigModuleReference @ 14a220ea0

FRigModuleReference * __thiscall
FRigModuleReference::FRigModuleReference
          (FRigModuleReference *this,FName *param_1,TSubclassOf<UControlRig> param_2,FName *param_3,
          FModularRigModel *param_4)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *local_res8;
  
  pUVar5 = (UObject *)0x0;
  this->Name = *param_1;
  (this->ShortName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName_DEPRECATED).Data.ArrayNum = 0;
  (this->ShortName_DEPRECATED).Data.ArrayMax = 0;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPath_DEPRECATED).Data.ArrayNum = 0;
  (this->ParentPath_DEPRECATED).Data.ArrayMax = 0;
  this->bShortNameBasedOnPath_DEPRECATED = true;
  this->ParentModuleName = *param_3;
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = UControlRig::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = *(UObject **)param_2.Class.field0_0x0;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this_00 = &(this->Class).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Class).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FSoftObjectPtr::operator=(&(this->Class).SoftObjectPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->Connections_DEPRECATED = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x48 = 0;
  *(undefined8 *)&this->ConfigValues_DEPRECATED = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x48 = 0;
  FControlRigOverrideContainer::FControlRigOverrideContainer(&this->ConfigOverrides);
  *(undefined8 *)&this->Bindings = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  (this->PreviousName).ComparisonIndex = 0;
  (this->PreviousName).Number = 0;
  (this->PreviousParentName).ComparisonIndex = 0;
  (this->PreviousParentName).Number = 0;
  (this->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).ArrayNum = 0;
  (this->CachedChildren).ArrayMax = 0;
  this->Model = param_4;
  (this->ConfigOverrides).bUsesKeyForSubject = false;
  FControlRigOverrideContainer::RebuildLookup(&this->ConfigOverrides);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&(this->ConfigOverrides).ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&(this->ConfigOverrides).ContainsChildPathCache);
  return this;
}

// FRigModuleReference @ 14a2210c0

FRigModuleReference * __thiscall FRigModuleReference::FRigModuleReference(FRigModuleReference *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->ShortName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName_DEPRECATED).Data.ArrayNum = 0;
  (this->ShortName_DEPRECATED).Data.ArrayMax = 0;
  this->bShortNameBasedOnPath_DEPRECATED = true;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPath_DEPRECATED).Data.ArrayNum = 0;
  (this->ParentPath_DEPRECATED).Data.ArrayMax = 0;
  (this->ParentModuleName).ComparisonIndex = 0;
  (this->ParentModuleName).Number = 0;
  this_00 = &(this->Class).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Class).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Class).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Class).SoftObjectPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->Connections_DEPRECATED = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->Connections_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x48 = 0;
  *(undefined8 *)&this->ConfigValues_DEPRECATED = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigValues_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x48 = 0;
  FControlRigOverrideContainer::FControlRigOverrideContainer(&this->ConfigOverrides);
  *(undefined8 *)&this->Bindings = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  (this->PreviousName).ComparisonIndex = 0;
  (this->PreviousName).Number = 0;
  (this->PreviousParentName).ComparisonIndex = 0;
  (this->PreviousParentName).Number = 0;
  (this->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).ArrayNum = 0;
  (this->CachedChildren).ArrayMax = 0;
  this->Model = (FModularRigModel *)0x0;
  (this->ConfigOverrides).bUsesKeyForSubject = false;
  FControlRigOverrideContainer::RebuildLookup(&this->ConfigOverrides);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&(this->ConfigOverrides).ContainsParentPathCache);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&(this->ConfigOverrides).ContainsChildPathCache);
  return this;
}

// ~FRigModuleReference @ 14a225f70

void __thiscall FRigModuleReference::~FRigModuleReference(FRigModuleReference *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CachedChildren).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Bindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Bindings);
  FControlRigOverrideContainer::~FControlRigOverrideContainer(&this->ConfigOverrides);
  *(undefined4 *)&(this->ConfigValues_DEPRECATED).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConfigValues_DEPRECATED).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConfigValues_DEPRECATED);
  *(undefined4 *)&(this->Connections_DEPRECATED).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Connections_DEPRECATED).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Connections_DEPRECATED);
  pvVar2 = *(void **)&(this->Class).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14a229e20

FRigModuleReference * __thiscall
FRigModuleReference::operator=(FRigModuleReference *this,FRigModuleReference *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *pTVar3;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *pTVar4;
  TMap<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  FControlRigOverrideContainer *pFVar7;
  FControlRigOverrideContainer *pFVar8;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *pTVar9;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *pTVar10;
  TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  
  pFVar1 = &param_1->ShortName_DEPRECATED;
  pFVar2 = &this->ShortName_DEPRECATED;
  this->Name = param_1->Name;
  if (pFVar2 != pFVar1) {
    pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShortName_DEPRECATED).Data.ArrayNum = (param_1->ShortName_DEPRECATED).Data.ArrayNum;
    (this->ShortName_DEPRECATED).Data.ArrayMax = (param_1->ShortName_DEPRECATED).Data.ArrayMax;
    (param_1->ShortName_DEPRECATED).Data.ArrayNum = 0;
    (param_1->ShortName_DEPRECATED).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ParentPath_DEPRECATED;
  pFVar2 = &this->ParentPath_DEPRECATED;
  this->bShortNameBasedOnPath_DEPRECATED = param_1->bShortNameBasedOnPath_DEPRECATED;
  if (pFVar2 != pFVar1) {
    pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ParentPath_DEPRECATED).Data.ArrayNum = (param_1->ParentPath_DEPRECATED).Data.ArrayNum;
    (this->ParentPath_DEPRECATED).Data.ArrayMax = (param_1->ParentPath_DEPRECATED).Data.ArrayMax;
    (param_1->ParentPath_DEPRECATED).Data.ArrayNum = 0;
    (param_1->ParentPath_DEPRECATED).Data.ArrayMax = 0;
  }
  this->ParentModuleName = param_1->ParentModuleName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Class,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->Class);
  if (&this->Connections_DEPRECATED != &param_1->Connections_DEPRECATED) {
    TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                *)&this->Connections_DEPRECATED,
               (TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                *)&param_1->Connections_DEPRECATED);
  }
  if (&this->ConfigValues_DEPRECATED != &param_1->ConfigValues_DEPRECATED) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)&this->ConfigValues_DEPRECATED,
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)&param_1->ConfigValues_DEPRECATED);
  }
  pFVar7 = &param_1->ConfigOverrides;
  pFVar8 = &this->ConfigOverrides;
  if (pFVar8 != pFVar7) {
    DestructItems<FControlRigOverrideValue,int>
              ((FControlRigOverrideValue *)(pFVar8->Values).AllocatorInstance.Data,
               (this->ConfigOverrides).Values.ArrayNum);
    pFVar13 = (pFVar8->Values).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar8->Values).AllocatorInstance.Data = (pFVar7->Values).AllocatorInstance.Data;
    (pFVar7->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ConfigOverrides).Values.ArrayNum = (param_1->ConfigOverrides).Values.ArrayNum;
    (this->ConfigOverrides).Values.ArrayMax = (param_1->ConfigOverrides).Values.ArrayMax;
    (param_1->ConfigOverrides).Values.ArrayNum = 0;
    (param_1->ConfigOverrides).Values.ArrayMax = 0;
  }
  pTVar3 = &(param_1->ConfigOverrides).HashIndexLookup;
  pTVar4 = &(this->ConfigOverrides).HashIndexLookup;
  (this->ConfigOverrides).bUsesKeyForSubject = (param_1->ConfigOverrides).bUsesKeyForSubject;
  if (pTVar4 != pTVar3) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)pTVar4,
               (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)pTVar3);
  }
  pTVar5 = &(param_1->ConfigOverrides).SubjectIndexLookup;
  pTVar6 = &(this->ConfigOverrides).SubjectIndexLookup;
  if (pTVar6 != pTVar5) {
    TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)pTVar6,
               (TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)pTVar5);
  }
  pTVar9 = &(param_1->ConfigOverrides).ContainsParentPathCache;
  pTVar10 = &(this->ConfigOverrides).ContainsParentPathCache;
  if (pTVar10 != pTVar9) {
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)pTVar10,
               (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)pTVar9);
  }
  pTVar9 = &(param_1->ConfigOverrides).ContainsChildPathCache;
  pTVar10 = &(this->ConfigOverrides).ContainsChildPathCache;
  if (pTVar10 != pTVar9) {
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)pTVar10,
               (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                *)pTVar9);
  }
  if (&this->Bindings != &param_1->Bindings) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)&this->Bindings,
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)&param_1->Bindings);
  }
  pTVar11 = &param_1->CachedChildren;
  this->PreviousName = param_1->PreviousName;
  pTVar12 = &this->CachedChildren;
  this->PreviousParentName = param_1->PreviousParentName;
  if (pTVar12 != pTVar11) {
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedChildren).ArrayNum = (param_1->CachedChildren).ArrayNum;
    (this->CachedChildren).ArrayMax = (param_1->CachedChildren).ArrayMax;
    (param_1->CachedChildren).ArrayNum = 0;
    (param_1->CachedChildren).ArrayMax = 0;
  }
  this->Model = param_1->Model;
  return this;
}

// FindConnectors @ 14a25ad90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FRigModuleReference::FindConnectors
          (FRigModuleReference *this,
          TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          URigHierarchy *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [8];
  FName local_res18;
  longlong local_58 [2];
  undefined8 local_48;
  undefined4 local_40;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (URigHierarchy *)0x0) {
    FVar2 = this->Name;
    URigHierarchy::GetElementsOfType<FRigConnectorElement>(param_1,&local_38,false);
    iVar8 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar9.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar9.Data == pFVar1) break;
      local_58[0] = *(longlong *)FVar9.Data;
      local_48 = *(undefined8 *)(local_58[0] + 0x10);
      local_40 = *(undefined4 *)(local_58[0] + 0x18);
      URigHierarchy::GetModuleFName(param_1,(FRigElementKey *)&local_res18);
      if ((local_res18 != (FName)0x0) && (local_res18 == FVar2)) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_58) &&
           ((FScriptContainerElement *)local_58 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
            ;
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_58[0];
      }
      FVar9.Data = FVar9.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindPrimaryConnector @ 14a25c530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigConnectorElement * __thiscall
FRigModuleReference::FindPrimaryConnector(FRigModuleReference *this,URigHierarchy *param_1)

{
  FScriptContainerElement *pFVar1;
  FRigConnectorElement *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (param_1 != (URigHierarchy *)0x0) {
    URigHierarchy::GetElementsOfType<FRigConnectorElement>(param_1,&local_38,false);
    iVar3 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar4.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar4.Data == pFVar1) break;
      pFVar2 = *(FRigConnectorElement **)FVar4.Data;
      if ((pFVar2->Settings).Type == Primary) {
        URigHierarchy::GetModuleFName(param_1,(FRigElementKey *)&local_res18);
        if (this->Name == local_res18) {
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          return pFVar2;
        }
      }
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return (FRigConnectorElement *)0x0;
}

// GetElementPrefix @ 14a263400

FString * __thiscall
FRigModuleReference::GetElementPrefix(FRigModuleReference *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FRigHierarchyModulePath::ModuleNameSuffix;
  ::FName::ToString(&this->Name,&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,pwVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetModulePath @ 14a265ba0

FRigHierarchyModulePath * __thiscall
FRigModuleReference::GetModulePath
          (FRigModuleReference *this,FRigHierarchyModulePath *__return_storage_ptr__)

{
  FString *pFVar1;
  FRigModuleReference *this_00;
  FRigHierarchyModulePath *pFVar2;
  FString local_68;
  FString local_58;
  FRigHierarchyModulePath local_48;
  
  if (this->ParentModuleName == (FName)0x0) {
    if (1 < (this->ParentPath_DEPRECATED).Data.ArrayNum) {
      pFVar1 = ::FName::ToString(&this->Name,&local_58);
      pFVar1 = URigHierarchy::JoinNameSpace_Deprecated
                         (&local_68,&this->ParentPath_DEPRECATED,pFVar1);
      ::FString::FString(&__return_storage_ptr__->ModulePath,pFVar1);
      (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) =
           0;
      (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance
      .Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) =
           0;
      (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc)
           = 0xffffffff;
      *(undefined8 *)
       &(__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
           0xffffffffffffffff;
      (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
           0xffffffff;
LAB_14a265c20:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_14a265cef;
    }
  }
  else if ((this->Model != (FModularRigModel *)0x0) &&
          (this_00 = GetParentModule(this), this_00 != (FRigModuleReference *)0x0)) {
    pFVar1 = ::FName::ToString(&this->Name,&local_58);
    pFVar2 = GetModulePath(this_00,&local_48);
    FRigHierarchyModulePath::FRigHierarchyModulePath<FRigHierarchyModulePath,FString>
              (__return_storage_ptr__,pFVar2,pFVar1);
    if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_48.ModulePath.Data.AllocatorInstance.Data;
    if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_48.ModulePath.Data.AllocatorInstance.Data;
    }
    goto LAB_14a265c20;
  }
  pFVar1 = ::FName::ToString(&this->Name,&local_58);
  ::FString::FString(&__return_storage_ptr__->ModulePath,pFVar1);
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 0xc) =
       0xffffffff;
  (__return_storage_ptr__->CachedModuleNameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedModuleNameString).field0_0x0 + 8) = 0;
  (__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CachedElementNameString).field0_0x0 + 8) = 0;
  (__return_storage_ptr__->CachedModuleFName).field0_0x0.TypedValue.Number = 0;
  (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.Number = 0;
  *(undefined8 *)
   &(__return_storage_ptr__->CachedElementNameString).field0_0x0.TypedValue.Data.ArrayMax =
       0xffffffffffffffff;
  (__return_storage_ptr__->CachedElementFName).field0_0x0.TypedValue.ComparisonIndex.Value =
       0xffffffff;
LAB_14a265cef:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetParentModule @ 14a266c30

FRigModuleReference * __thiscall FRigModuleReference::GetParentModule(FRigModuleReference *this)

{
  FModularRigModel *this_00;
  FRigModuleReference *pFVar1;
  FString local_28;
  FString local_18;
  
  if (this->ParentModuleName == (FName)0x0) {
    if (1 < (this->ParentPath_DEPRECATED).Data.ArrayNum) {
      this_00 = this->Model;
      ::FString::FString(&local_28,&this->ParentPath_DEPRECATED);
      ::FString::FString(&local_18,&local_28);
      pFVar1 = TArray<FRigModuleReference,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FModularRigModel::FindModuleByPath_::__l2::<lambda_1>_>
                         (&this_00->Modules,(<lambda_1> *)&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return pFVar1;
    }
  }
  else if (this->Model != (FModularRigModel *)0x0) {
    pFVar1 = FModularRigModel::GetParentModule(this->Model,this);
    return pFVar1;
  }
  return (FRigModuleReference *)0x0;
}

// GetRootModule @ 14a269f90

FRigModuleReference * __thiscall FRigModuleReference::GetRootModule(FRigModuleReference *this)

{
  FRigModuleReference *pFVar1;
  
  if (this->ParentModuleName == (FName)0x0) {
    return this;
  }
  if (this->Model != (FModularRigModel *)0x0) {
    pFVar1 = FModularRigModel::GetParentModule(this->Model,this);
    if (pFVar1 != (FRigModuleReference *)0x0) {
      pFVar1 = GetRootModule(pFVar1);
      return pFVar1;
    }
  }
  return (FRigModuleReference *)0x0;
}

// PatchModelsOnLoad @ 14a279de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRigModuleReference::PatchModelsOnLoad(FRigModuleReference *this)

{
  int *piVar1;
  ulonglong uVar2;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar3;
  FControlRigOverrideContainer *this_00;
  uint uVar4;
  undefined1 *puVar5;
  TOptional<FString>_u_0 *pTVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TOptional<FName>_u_0 TVar10;
  TFieldPath<FProperty> *this_01;
  UClass *pUVar11;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  int iVar14;
  FString *pFVar15;
  UObject *pUVar16;
  FFieldClass *pFVar17;
  FProperty *this_02;
  FProperty *pFVar18;
  FString *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  byte bVar21;
  longlong lVar22;
  FControlRigOverrideValue *this_03;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar23;
  uint uVar24;
  FName *pFVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  undefined1 *puVar30;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8 [4];
  uint local_1e4;
  int local_1e0 [2];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TOptional<FString>_u_0 local_1c8;
  void *local_1b8;
  undefined4 local_1b0;
  int local_1ac;
  TOptional<FName>_u_0 local_1a8;
  undefined4 local_1a0;
  FPropertyInfo *local_198;
  undefined8 local_190;
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> local_188;
  uint local_178 [2];
  uint local_170 [2];
  int local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_148;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  TPairInitializer<unsigned_int_const_&,int_const_&> local_108;
  UClass *local_f8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  uint *local_c0;
  int *local_b8;
  FString local_b0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_a0;
  undefined8 uStack_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined8 uStack_88;
  int iStack_84;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_78;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_68 [2];
  TBitArray<FDefaultBitArrayAllocator> *apTStack_58 [3];
  TBitArray<FDefaultBitArrayAllocator> **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_108.Value = (int *)this;
  local_f8 = TSoftClassPtr<UControlRig>::Get(&this->Class);
  if ((local_f8 != (UClass *)0x0) &&
     (pTVar3 = &this->ConfigValues_DEPRECATED,
     *(int *)&(this->ConfigValues_DEPRECATED).field_0x8 !=
     *(int *)&(this->ConfigValues_DEPRECATED).field_0x34)) {
    this_00 = &this->ConfigOverrides;
    local_148 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)pTVar3;
    FControlRigOverrideContainer::Reset(this_00);
    (this->ConfigOverrides).bUsesKeyForSubject = false;
    FControlRigOverrideContainer::RebuildLookup(this_00);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&(this->ConfigOverrides).ContainsParentPathCache);
    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
             *)&(this->ConfigOverrides).ContainsChildPathCache);
    uVar24 = *(int *)&(this->ConfigValues_DEPRECATED).field_0x8 -
             *(int *)&(this->ConfigValues_DEPRECATED).field_0x34;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    piVar1 = &(this->ConfigOverrides).Values.ArrayMax;
    if (*piVar1 < (int)uVar24) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar24,(ForAnyElementType *)this_00,(this->ConfigOverrides).Values.ArrayNum,
                 piVar1);
    }
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&(this->ConfigOverrides).HashIndexLookup,uVar24);
    puVar30 = &(this->ConfigValues_DEPRECATED).field_0x10;
    iStack_138 = 0;
    iVar14 = *(int *)&(this->ConfigValues_DEPRECATED).field_0x28;
    local_120 = 0;
    iStack_124 = 0;
    uStack_134 = 1;
    if (iVar14 != 0) {
      puVar28 = *(uint **)&(this->ConfigValues_DEPRECATED).field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)puVar30;
      }
      uStack_134 = *puVar28;
      while (uStack_134 == 0) {
        lVar22 = (longlong)iStack_138;
        local_120 = local_120 + 0x20;
        iStack_138 = iStack_138 + 1;
        iStack_124 = iVar14;
        uStack_134 = 1;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
        goto LAB_14a279f6e;
        uStack_134 = puVar28[lVar22 + 1];
      }
      uStack_134 = ~(uStack_134 - 1) & uStack_134;
      uVar2 = (ulonglong)uStack_134 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_110 = (int)lVar22;
      iStack_124 = local_120 + -1 + local_110;
      if (iVar14 < iStack_124) {
        iStack_124 = iVar14;
      }
    }
LAB_14a279f6e:
    iStack_118 = *(int *)&(this->ConfigValues_DEPRECATED).field_0x8 -
                 *(int *)&(this->ConfigValues_DEPRECATED).field_0x34;
    uVar24 = *(uint *)&(this->ConfigValues_DEPRECATED).field_0x28;
    bVar21 = (byte)uVar24 & 0x1f;
    uStack_164 = 1 << bVar21;
    iVar29 = (int)uVar24 >> 5;
    uVar27 = uVar24 & 0xffffffe0;
    uVar26 = -1 << bVar21;
    uStack_128 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uStack_134,iStack_138);
    TStack_e8.CurrentBitIndex = iStack_124;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    TStack_e8._28_4_ = iStack_124;
    TStack_e8.BaseBitIndex = local_120;
    uStack_c8 = CONCAT44(uStack_114,iStack_118);
    local_168 = iVar29;
    pTStack_160 = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
    local_158 = uVar26;
    uStack_154 = uVar24;
    uStack_150 = uVar27;
    local_140 = pTVar3;
    local_130 = puVar30;
    iStack_11c = iStack_124;
    local_f0 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)pTVar3;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar30;
    if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar11 = local_f8;
    piVar1 = local_108.Value;
    uVar4 = *(uint *)&(this->ConfigValues_DEPRECATED).field_0x28;
    if (uVar24 != uVar4) {
      puVar5 = *(undefined1 **)&(this->ConfigValues_DEPRECATED).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar30 = puVar5;
      }
      uVar26 = uVar26 & *(uint *)(puVar30 + (longlong)iVar29 * 4);
      while (uVar26 == 0) {
        uStack_150 = uVar27 + 0x20;
        local_168 = iVar29 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_168)
        goto LAB_14a27a0a9;
        uVar26 = *(uint *)(puVar30 + (longlong)iVar29 * 4 + 4);
        local_158 = 0xffffffff;
        iVar29 = local_168;
        uVar27 = uStack_150;
      }
      uStack_164 = ~(uVar26 - 1) & uVar26;
      uVar2 = (ulonglong)uStack_164 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_10c = (int)lVar22;
      uStack_154 = local_10c + -1 + uVar27;
      if ((int)uVar4 < (int)uStack_154) {
LAB_14a27a0a9:
        uStack_154 = uVar4;
      }
    }
    uStack_98._4_4_ = uStack_164;
    uStack_98._0_4_ = local_168;
    iStack_84 = uStack_154;
    uStack_88._0_4_ = local_158;
    local_80._4_4_ = uStack_14c;
    local_80._0_4_ = uStack_150;
    local_68[0] = local_148;
    apTStack_58[0] = pTStack_160;
    local_40 = (TBitArray<FDefaultBitArrayAllocator> **)
               CONCAT44(local_40._4_4_,
                        *(int *)&((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                   *)((longlong)local_108.Value + 0xb0))->field_0x8 -
                        *(int *)&((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                   *)((longlong)local_108.Value + 0xb0))->field_0x34);
    local_a0 = local_148;
    local_90 = pTStack_160;
    ppTStack_78 = local_40;
    local_68[1] = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)uStack_98;
    apTStack_58[1] = (TBitArray<FDefaultBitArrayAllocator> *)uStack_88;
    apTStack_58[2] = (TBitArray<FDefaultBitArrayAllocator> *)local_80;
    while( true ) {
      pTVar12 = local_f0;
      if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
          (int)uStack_c8) {
        local_1e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      if (((TStack_e8.CurrentBitIndex == iStack_84) && (TStack_e8.Array == local_90)) &&
         (pTVar12 == local_a0)) break;
      pFVar25 = (FName *)(*(longlong *)&pTVar12->Elements +
                         (longlong)TStack_e8.CurrentBitIndex * 0x20);
      local_68[0] = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)0x0;
      local_40 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
      pFVar15 = ::FName::ToString(pFVar25,&local_b0);
      local_1a8 = *(TOptional<FName>_u_0 *)(FName *)piVar1;
      local_1c8.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_1c8.TypedValue.Data.ArrayNum = 0;
      local_1c8.TypedValue.Data.ArrayMax = -1;
      local_1b8 = (void *)0x0;
      local_1b0 = 0;
      local_1ac = -1;
      if ((local_1a8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_1a0 = 0;
      local_198 = (FPropertyInfo *)0x0;
      local_190 = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      local_178[0] = 0;
      bVar13 = FControlRigOverrideValue::SetPropertiesFromPath
                         ((FControlRigOverrideValue *)&local_1c8.TypedValue,pFVar15,
                          (UStruct *)pUVar11);
      if (bVar13) {
        FControlRigOverrideValue::SetFromString
                  ((FControlRigOverrideValue *)&local_1c8.TypedValue,(FString *)(pFVar25 + 1),
                   (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *)local_68);
      }
      if ((((local_1c8.TypedValue.Data.ArrayMax != -1) && (local_1ac != -1)) &&
          (local_188.ArrayNum != 0)) &&
         ((local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0 &&
          ((int)local_190 != 0)))) {
        uVar24 = 0;
        if ((int)((int)local_190 - 1U) < (int)local_190) {
          uVar24 = ~((int)local_190 - 1U) >> 0x1f;
        }
        if (uVar24 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        this_01 = &local_198[(longlong)(int)local_190 + -1].Property.Field;
        pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_198 + (longlong)(int)local_190 + -1))
        ;
        if (pUVar16 == (UObject *)0x0) {
          *(undefined8 *)&this_01->field_0x0 = 0;
        }
        else {
          pFVar17 = FProperty::StaticClass();
          this_02 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)this_01,pFVar17,(UStruct *)0x0);
          if (this_02 != (FProperty *)0x0) {
            uVar24 = 0;
            if ((int)((int)local_190 - 1U) < (int)local_190) {
              uVar24 = ~((int)local_190 - 1U) >> 0x1f;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (local_198[(longlong)(int)local_190 + -1].ArrayIndex == -1) {
              pFVar18 = FProperty::GetOwnerProperty(this_02);
              if ((pFVar18 != (FProperty *)0x0) &&
                 ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
                this_02 = pFVar18;
              }
            }
            else if ((*(uint *)(this_02->_padding_ + 0x18) >> 0x15 & 1) != 0) {
              this_02 = (FProperty *)this_02[1]._padding_;
            }
            if ((this_02 != (FProperty *)0x0) &&
               (bVar13 = FControlRigOverrideValue::IsDataValid
                                   ((FControlRigOverrideValue *)&local_1c8.TypedValue,&local_188,
                                    local_178), bVar13)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FControlRigOverrideValue::GetPath'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPath__);
                _Init_thread_footer(&::_TSS0);
              }
              pFVar15 = (FString *)&local_1c8;
              if (local_1c8.TypedValue.Data.ArrayMax == -1) {
                pFVar15 = &EmptyPath;
              }
              if (1 < (pFVar15->Data).ArrayNum) {
                pFVar25 = (FName *)&local_1a8;
                if (local_1a8.TypedValue.ComparisonIndex.Value == 0xffffffff) {
                  pFVar25 = &InvalidName;
                }
                iVar14 = FControlRigOverrideContainer::GetIndex(this_00,pFVar15,pFVar25);
                if ((iVar14 < 0) || ((this->ConfigOverrides).Values.ArrayNum <= iVar14)) {
                  pFVar25 = (FName *)&local_1a8;
                  if (local_1a8.TypedValue.ComparisonIndex.Value == 0xffffffff) {
                    pFVar25 = &InvalidName;
                  }
                  bVar13 = FControlRigOverrideContainer::ContainsParentPathOf
                                     (this_00,pFVar15,pFVar25);
                  if (!bVar13) {
                    pFVar25 = (FName *)&local_1a8;
                    if (local_1a8.TypedValue.ComparisonIndex.Value == 0xffffffff) {
                      pFVar25 = &InvalidName;
                    }
                    bVar13 = FControlRigOverrideContainer::ContainsChildPathOf
                                       (this_00,pFVar15,pFVar25);
                    if (bVar13) {
                      iVar14 = (this->ConfigOverrides).Values.ArrayNum;
                      local_1d8.Data = (FScriptContainerElement *)0x0;
                      local_1d0 = 0;
                      local_1e4 = 0;
                      if (0 < iVar14) {
                        do {
                          uVar24 = local_1e4;
                          uVar26 = 0;
                          if ((int)local_1e4 < iVar14) {
                            uVar26 = ~local_1e4 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          pFVar19 = FControlRigOverrideValue::GetPath
                                              ((FControlRigOverrideValue *)
                                               ((this_00->Values).AllocatorInstance.Data +
                                               (longlong)(int)uVar24 * 0x58));
                          bVar13 = FControlRigOverrideContainer::IsChildPathOf(pFVar19,pFVar15);
                          if (bVar13) {
                            if (((local_1d8.Data <= (FScriptContainerElement *)&local_1e4) &&
                                ((FScriptContainerElement *)&local_1e4 <
                                 local_1d8.Data + (longlong)local_1d0._4_4_ * 4)) &&
                               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar13)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            iVar14 = (int)local_1d0;
                            if ((int)local_1d0 == local_1d0._4_4_) {
                              iVar14 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x404,&local_1d8,(int *)((longlong)&local_1d0 + 4)
                                                 );
                            }
                            local_1d0 = CONCAT44(local_1d0._4_4_,iVar14 + 1);
                            *(uint *)(local_1d8.Data + (longlong)iVar14 * 4) = local_1e4;
                          }
                          iVar14 = (this->ConfigOverrides).Values.ArrayNum;
                          local_1e4 = local_1e4 + 1;
                        } while ((int)local_1e4 < iVar14);
                        if ((int)local_1d0 != 0) {
                          uVar24 = (int)local_1d0 - 1;
                          if (-1 < (int)uVar24) {
                            lVar22 = (longlong)(int)uVar24 * 4;
                            while( true ) {
                              uVar26 = 0;
                              if ((int)uVar24 < (int)local_1d0) {
                                uVar26 = ~uVar24 >> 0x1f;
                              }
                              if ((uVar26 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                                        (&this_00->Values,*(int *)(local_1d8.Data + lVar22),Default)
                              ;
                              lVar22 = lVar22 + -4;
                              uVar24 = uVar24 - 1;
                              if ((int)uVar24 < 0) break;
                            }
                          }
                          FControlRigOverrideContainer::RebuildLookup(this_00);
                        }
                      }
                      if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1d8.Data);
                      }
                    }
                    pTVar6 = (TOptional<FString>_u_0 *)(this_00->Values).AllocatorInstance.Data;
                    if (((pTVar6 <= &local_1c8) &&
                        (&local_1c8 <
                         (TOptional<FString>_u_0 *)
                         ((longlong)pTVar6 +
                         (longlong)(this->ConfigOverrides).Values.ArrayMax * 0x58))) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar14 = (this->ConfigOverrides).Values.ArrayNum;
                    if (iVar14 == (this->ConfigOverrides).Values.ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x858,(ForAnyElementType *)this_00,
                                          &(this->ConfigOverrides).Values.ArrayMax);
                    }
                    (this->ConfigOverrides).Values.ArrayNum = iVar14 + 1;
                    this_03 = (FControlRigOverrideValue *)
                              ((this_00->Values).AllocatorInstance.Data + (longlong)iVar14 * 0x58);
                    (this_03->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    *(undefined4 *)((longlong)&(this_03->Path).field0_0x0 + 8) = 0;
                    *(undefined4 *)((longlong)&(this_03->Path).field0_0x0 + 0xc) = 0xffffffff;
                    (this_03->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    *(undefined4 *)((longlong)&(this_03->CachedStringValue).field0_0x0 + 8) = 0;
                    *(undefined8 *)&(this_03->CachedStringValue).field0_0x0.TypedValue.Data.ArrayMax
                         = 0xffffffffffffffff;
                    (this_03->SubjectKey).field0_0x0.TypedValue.Number = 0;
                    (this_03->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (this_03->Properties).ArrayNum = 0;
                    (this_03->Properties).ArrayMax = 0;
                    (this_03->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (this_03->DataArray).ArrayNum = 0;
                    (this_03->DataArray).ArrayMax = 0;
                    FControlRigOverrideValue::operator=
                              (this_03,(FControlRigOverrideValue *)&local_1c8.TypedValue);
                    pFVar25 = (FName *)&local_1a8;
                    if (local_1a8.TypedValue.ComparisonIndex.Value == 0xffffffff) {
                      pFVar25 = &InvalidName;
                    }
                    local_1e0[0] = iVar14;
                    uVar24 = CityHash32((char *)(pFVar15->Data).AllocatorInstance.Data,
                                        (pFVar15->Data).ArrayNum * 2);
                    FVar7 = *pFVar25;
                    local_170[0] = ::GetTypeHash(FVar7.ComparisonIndex.Value);
                    local_170[0] = local_170[0] + FVar7.Number;
                    local_c0 = local_170;
                    local_170[0] = (local_170[0] >> 2) + local_170[0] * 0x40 + uVar24 + 0x9e3779b9 ^
                                   local_170[0];
                    local_b8 = local_1e0;
                    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                                *)&(this->ConfigOverrides).HashIndexLookup,&local_108,
                               (bool *)&local_c0);
                    pFVar25 = (FName *)&local_1a8;
                    TVar10 = local_1a8;
                    if (local_1a8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) {
                      pFVar25 = &InvalidName;
                      TVar10.TypedValue = InvalidName;
                    }
                    uVar24 = ::GetTypeHash(TVar10.TypedValue.ComparisonIndex.Value);
                    pTVar20 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              ::FindOrAddImpl<FName_const_&>
                                        ((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                          *)&(this->ConfigOverrides).SubjectIndexLookup,
                                         uVar24 + TVar10.TypedValue.Number,pFVar25);
                    pFVar8 = (pTVar20->AllocatorInstance).Data;
                    if (((pFVar8 <= (FScriptContainerElement *)local_1e0) &&
                        ((FScriptContainerElement *)local_1e0 <
                         pFVar8 + (longlong)pTVar20->ArrayMax * 4)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar14 = pTVar20->ArrayNum;
                    if (iVar14 == pTVar20->ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
                    }
                    pTVar20->ArrayNum = iVar14 + 1;
                    *(int *)((pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 4) =
                         local_1e0[0];
                    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                             *)&(this->ConfigOverrides).ContainsParentPathCache);
                    TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                    ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                             *)&(this->ConfigOverrides).ContainsChildPathCache);
                  }
                }
              }
            }
          }
        }
      }
      FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_1c8.TypedValue);
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_198,(int)local_190);
      if (local_198 != (FPropertyInfo *)0x0) {
        FMemory::Free(local_198);
      }
      if ((local_1ac != -1) && (local_1b8 != (void *)0x0)) {
        FMemory::Free(local_1b8);
      }
      if ((local_1c8.TypedValue.Data.ArrayMax != -1) &&
         (local_1c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_1c8.TypedValue.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_68[0] !=
          (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *)0x0) {
        ppTVar23 = apTStack_58;
        if (local_40 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
          ppTVar23 = local_40;
        }
        (*(code *)((*ppTVar23)->AllocatorInstance).SecondaryData)();
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Reset(local_148);
  }
  return;
}

