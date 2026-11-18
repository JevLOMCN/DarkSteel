// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 1493c4140

UClass * __cdecl UNiagaraSystemCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystemCollection",
               &Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraSystemCollection,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSystemCollection>,
               InternalVTableHelperCtorCaller<UNiagaraSystemCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton;
}

// UNiagaraSystemCollection @ 1493d07f0

UNiagaraSystemCollection * __thiscall
UNiagaraSystemCollection::UNiagaraSystemCollection
          (UNiagaraSystemCollection *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bLoadImmediately = true;
  this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
  (this->SystemCollection).Systems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemCollection).Systems.ArrayNum = 0;
  (this->SystemCollection).Systems.ArrayMax = 0;
  (this->SystemCollection).SystemsInternal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemCollection).SystemsInternal.ArrayNum = 0;
  (this->SystemCollection).SystemsInternal.ArrayMax = 0;
  (this->SystemCollection).AsyncLoadHandle.Object = (FStreamableHandle *)0x0;
  (this->SystemCollection).AsyncLoadHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNiagaraSystemCollection @ 1493d0840

UNiagaraSystemCollection * __thiscall
UNiagaraSystemCollection::UNiagaraSystemCollection
          (UNiagaraSystemCollection *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bLoadImmediately = true;
  this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
  (this->SystemCollection).Systems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemCollection).Systems.ArrayNum = 0;
  (this->SystemCollection).Systems.ArrayMax = 0;
  (this->SystemCollection).SystemsInternal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemCollection).SystemsInternal.ArrayNum = 0;
  (this->SystemCollection).SystemsInternal.ArrayMax = 0;
  (this->SystemCollection).AsyncLoadHandle.Object = (FStreamableHandle *)0x0;
  (this->SystemCollection).AsyncLoadHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNiagaraSystemCollection @ 1493d2050

void __thiscall UNiagaraSystemCollection::~UNiagaraSystemCollection(UNiagaraSystemCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemCollection).AsyncLoadHandle.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SystemCollection).SystemsInternal.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UNiagaraSystem>,int>
            ((TSoftObjectPtr<UNiagaraSystem> *)
             (this->SystemCollection).Systems.AllocatorInstance.Data,
             (this->SystemCollection).Systems.ArrayNum);
  pFVar1 = (this->SystemCollection).Systems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 1493e89a0

UClass * __cdecl UNiagaraSystemCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystemCollection",
               &Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraSystemCollection,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSystemCollection>,
               InternalVTableHelperCtorCaller<UNiagaraSystemCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton;
}

// PostLoad @ 1493f1c90

void __thiscall UNiagaraSystemCollection::PostLoad(UNiagaraSystemCollection *this)

{
  UObject::PostLoad((UObject *)this);
  if (this->bLoadImmediately != false) {
    FNiagaraSystemCollectionData::LoadAsync(&this->SystemCollection);
    return;
  }
  return;
}

// StaticRegisterNativesUNiagaraSystemCollection @ 1493fe930

void __cdecl UNiagaraSystemCollection::StaticRegisterNativesUNiagaraSystemCollection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraSystemCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSystems @ 14940a0c0

void __cdecl
UNiagaraSystemCollection::execGetSystems(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemCollection.cpp"
                         ,0xd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(FStreamableHandle **)(param_1 + 2) == (FStreamableHandle *)0x0) {
    if (*(int *)&param_1[1].field_0x10 != *(int *)&param_1[1].field_0x20) {
      FNiagaraSystemCollectionData::LoadSynchronous
                ((FNiagaraSystemCollectionData *)&param_1[1].field_0x8);
    }
  }
  else {
    FStreamableHandle::WaitUntilComplete(*(FStreamableHandle **)(param_1 + 2),0.0,true);
    FNiagaraSystemCollectionData::PostLoadSystems
              ((FNiagaraSystemCollectionData *)&param_1[1].field_0x8);
  }
  if (param_3 != &param_1[1].field_0x18) {
    iVar2 = *(int *)&param_1[1].field_0x20;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = *(void **)&param_1[1].field_0x18;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar2 << 3);
    }
  }
  return;
}

// execLoadAsync @ 14940a1d0

void __cdecl UNiagaraSystemCollection::execLoadAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNiagaraSystemCollectionData::LoadAsync((FNiagaraSystemCollectionData *)&param_1[1].field_0x8);
  return;
}

// execLoadSynchronous @ 14940a200

void __cdecl
UNiagaraSystemCollection::execLoadSynchronous(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FNiagaraSystemCollectionData::LoadSynchronous
            ((FNiagaraSystemCollectionData *)&param_1[1].field_0x8);
  return;
}

// execNum @ 14940a230

void __cdecl UNiagaraSystemCollection::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// execRelease @ 14940a260

void __cdecl UNiagaraSystemCollection::execRelease(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_18 [8];
  FSharedReferencer<1> FStack_10;
  
  pUVar1 = param_1 + 2;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)pUVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FStreamableHandle::CancelHandle(*(FStreamableHandle **)pUVar1);
  local_18 = (undefined1  [8])0x0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pUVar1 != (UObject *)local_18) {
    *(longlong *)pUVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1[2].field_0x8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  *(undefined4 *)&param_1[1].field_0x20 = 0;
  if (*(int *)&param_1[1].field_0x24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&param_1[1].field_0x18,0,(int *)&param_1[1].field_0x24);
  }
  return;
}

