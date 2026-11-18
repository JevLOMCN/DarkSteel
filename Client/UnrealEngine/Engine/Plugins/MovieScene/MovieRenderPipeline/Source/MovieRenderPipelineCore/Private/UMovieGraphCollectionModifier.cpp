// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc9bad0

UClass * __cdecl UMovieGraphCollectionModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollectionModifier",
               &Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollectionModifier,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphCollectionModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphCollectionModifier>,local_res8,
               UMovieGraphModifierBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton;
}

// UMovieGraphCollectionModifier @ 14dcaf090

UMovieGraphCollectionModifier * __thiscall
UMovieGraphCollectionModifier::UMovieGraphCollectionModifier
          (UMovieGraphCollectionModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  (this->Collections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collections).ArrayNum = 0;
  (this->Collections).ArrayMax = 0;
  return this;
}

// UMovieGraphCollectionModifier @ 14dcaf0d0

UMovieGraphCollectionModifier * __thiscall
UMovieGraphCollectionModifier::UMovieGraphCollectionModifier
          (UMovieGraphCollectionModifier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  (this->Collections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collections).ArrayNum = 0;
  (this->Collections).ArrayMax = 0;
  return this;
}

// ~UMovieGraphCollectionModifier @ 14dcb2790

void __thiscall
UMovieGraphCollectionModifier::~UMovieGraphCollectionModifier(UMovieGraphCollectionModifier *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  pFVar1 = (this->Collections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddCollection @ 14dcb8bf0

void __thiscall
UMovieGraphCollectionModifier::AddCollection
          (UMovieGraphCollectionModifier *this,UMovieGraphCollection *param_1)

{
  TArray<TObjectPtr<UMovieGraphCollection>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  UMovieGraphCollection *local_28 [2];
  
  pFVar8 = (this->Collections).AllocatorInstance.Data;
  pTVar1 = &this->Collections;
  iVar7 = (this->Collections).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar7 * 8;
  do {
    if ((this->Collections).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar4) {
      local_28[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UMovieGraphCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Collections).ArrayMax * 8
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->Collections).ArrayNum;
      piVar2 = &(this->Collections).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Collections).ArrayNum = iVar7 + 1;
      *(UMovieGraphCollection **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_28[0] != (UMovieGraphCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_28[0]);
      }
      return;
    }
    lVar3 = *(longlong *)pFVar8;
    if ((param_1 != (UMovieGraphCollection *)0x0) && (lVar3 != 0)) {
      iVar6 = (param_1->CollectionName).Data.ArrayNum;
      if (iVar6 == *(int *)(lVar3 + 0x30)) {
        if (iVar6 < 2) {
          return;
        }
        iVar6 = wcscmp((wchar_t *)(param_1->CollectionName).Data.AllocatorInstance.Data,
                       *(wchar_t **)(lVar3 + 0x28));
        bVar9 = iVar6 == 0;
      }
      else {
        bVar9 = iVar6 + *(int *)(lVar3 + 0x30) == 1;
      }
      if (bVar9) {
        return;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetCollections @ 14dccbd40

TArray<UMovieGraphCollection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphCollectionModifier::GetCollections
          (UMovieGraphCollectionModifier *this,
          TArray<UMovieGraphCollection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Collections).ArrayNum;
  _Src = (this->Collections).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetModifierName @ 14dcce900

FText * __thiscall
UMovieGraphCollectionModifier::GetModifierName
          (UMovieGraphCollectionModifier *this,FText *__return_storage_ptr__)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&ModifierName,L"MovieGraph",L"CollectionModifierName",
                 L"Unknown Collection Modifier");
      atexit(`UMovieGraphCollectionModifier::GetModifierName'::__l2::
             _dynamic_atexit_destructor_for__ModifierName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = ModifierName.TextData;
  (__return_storage_ptr__->TextData).Reference = ModifierName.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = ModifierName.Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd1960

UClass * __cdecl UMovieGraphCollectionModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollectionModifier",
               &Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollectionModifier,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphCollectionModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphCollectionModifier>,local_res8,
               UMovieGraphModifierBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton;
}

// SetCollections @ 14dce2f30

void __thiscall
UMovieGraphCollectionModifier::SetCollections
          (UMovieGraphCollectionModifier *this,
          TArray<UMovieGraphCollection_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  piVar1 = &(this->Collections).ArrayMax;
  (this->Collections).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,&(this->Collections).AllocatorInstance,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int>
              ((this->Collections).AllocatorInstance.Data,(UMovieGraphCollection **)pFVar3,iVar2);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// StaticRegisterNativesUMovieGraphCollectionModifier @ 14dce6370

void __cdecl UMovieGraphCollectionModifier::StaticRegisterNativesUMovieGraphCollectionModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphCollectionModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddCollection @ 14dceeca0

void __cdecl
UMovieGraphCollectionModifier::execAddCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphCollection *local_res10;
  
  local_res10 = (UMovieGraphCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddCollection((UMovieGraphCollectionModifier *)param_1,local_res10);
  return;
}

// execGetCollections @ 14dcf07f0

void __cdecl
UMovieGraphCollectionModifier::execGetCollections(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x8;
  _Src = *(void **)(param_1 + 1);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSetCollections @ 14dcf3520

void __cdecl
UMovieGraphCollectionModifier::execSetCollections(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_10,0,&local_28,(int)local_10,&local_1c);
    memcpy(local_28.Data,_Src,lVar4 << 3);
  }
  iVar3 = local_20;
  FVar2.Data = local_28.Data;
  *(int *)&param_1[1].field_0x8 = local_20;
  if ((local_20 == 0) && (*(int *)&param_1[1].field_0xc == 0)) {
    *(undefined4 *)&param_1[1].field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,*(int *)&param_1[1].field_0xc,(ForAnyElementType *)(param_1 + 1),
               local_20,(int *)&param_1[1].field_0xc);
    ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int>
              (*(void **)(param_1 + 1),(UMovieGraphCollection **)FVar2.Data,iVar3);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

