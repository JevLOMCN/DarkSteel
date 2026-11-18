// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 18

// StaticClass @ 14e3226d0

UClass * __cdecl UInterchangeSourceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeSourceData",
               &Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton,
               StaticRegisterNativesUInterchangeSourceData,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeSourceData>,
               InternalVTableHelperCtorCaller<UInterchangeSourceData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton;
}

// UInterchangeSourceData @ 14e401b80

UInterchangeSourceData * __thiscall
UInterchangeSourceData::UInterchangeSourceData(UInterchangeSourceData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSourceData__6B_;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->FileContentHashCache).bIsSet = false;
  *(undefined8 *)&this->ContextObjectsByTag = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x8 = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x20 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x28 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x34 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x40 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x48 = 0;
  return this;
}

// UInterchangeSourceData @ 14e401bf0

UInterchangeSourceData * __thiscall
UInterchangeSourceData::UInterchangeSourceData(UInterchangeSourceData *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInterchangeSourceData__6B_;
  pFVar1 = &this->Filename;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->FileContentHashCache).bIsSet = false;
  *(undefined8 *)&this->ContextObjectsByTag = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x8 = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x20 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x28 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x34 = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x40 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x48 = 0;
  pFVar3 = FPaths::ConvertRelativePathToFull(&local_18,param_1);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Filename).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->Filename).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((this->FileContentHashCache).bIsSet != false) {
    (this->FileContentHashCache).bIsSet = false;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// UInterchangeSourceData @ 14e401cf0

UInterchangeSourceData * __thiscall
UInterchangeSourceData::UInterchangeSourceData(UInterchangeSourceData *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInterchangeSourceData__6B_;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->FileContentHashCache).bIsSet = false;
  *(undefined8 *)&this->ContextObjectsByTag = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x8 = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x20 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x28 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x34 = 0;
  *(undefined8 *)&(this->ContextObjectsByTag).field_0x40 = 0;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x48 = 0;
  ::FString::operator=(&this->Filename,L"");
  if ((this->FileContentHashCache).bIsSet != false) {
    (this->FileContentHashCache).bIsSet = false;
  }
  return this;
}

// ~UInterchangeSourceData @ 14e404fb0

void __thiscall UInterchangeSourceData::~UInterchangeSourceData(UInterchangeSourceData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeSourceData__6B_;
  *(undefined4 *)&(this->ContextObjectsByTag).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContextObjectsByTag).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContextObjectsByTag);
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ComputeFileContentHashCache @ 14e418350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UInterchangeSourceData::ComputeFileContentHashCache(UInterchangeSourceData *this)

{
  undefined8 uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  FMD5Hash *pFVar9;
  TOptional<FMD5Hash> *pTVar10;
  undefined1 auStack_48 [32];
  FMD5Hash local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((this->FileContentHashCache).bIsSet != false) {
    (this->FileContentHashCache).bIsSet = false;
  }
  if (1 < (this->Filename).Data.ArrayNum) {
    pFVar9 = FMD5Hash::HashFile(&local_28,(wchar_t *)(this->Filename).Data.AllocatorInstance.Data,
                                (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0);
    pTVar10 = &this->FileContentHashCache;
    if ((TOptional<FMD5Hash> *)pFVar9 != pTVar10) {
      uVar2 = pFVar9->Bytes[0];
      uVar3 = pFVar9->Bytes[1];
      uVar4 = pFVar9->Bytes[2];
      uVar5 = pFVar9->Bytes[3];
      uVar6 = pFVar9->Bytes[4];
      uVar7 = pFVar9->Bytes[5];
      uVar8 = pFVar9->Bytes[6];
      uVar1 = *(undefined8 *)(pFVar9->Bytes + 7);
      (pTVar10->TypedValue).bIsValid = pFVar9->bIsValid;
      (pTVar10->TypedValue).Bytes[0] = uVar2;
      (pTVar10->TypedValue).Bytes[1] = uVar3;
      (pTVar10->TypedValue).Bytes[2] = uVar4;
      (pTVar10->TypedValue).Bytes[3] = uVar5;
      (pTVar10->TypedValue).Bytes[4] = uVar6;
      (pTVar10->TypedValue).Bytes[5] = uVar7;
      (pTVar10->TypedValue).Bytes[6] = uVar8;
      *(undefined8 *)((this->FileContentHashCache).TypedValue.Bytes + 7) = uVar1;
      (this->FileContentHashCache).TypedValue.Bytes[0xf] = pFVar9->Bytes[0xf];
      (this->FileContentHashCache).bIsSet = true;
    }
  }
  return;
}

// GetAllContextObjectTags @ 14e438630

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeSourceData::GetAllContextObjectTags
          (UInterchangeSourceData *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
              *)&this->ContextObjectsByTag,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContextObjectByTag @ 14e43a280

UObject * __thiscall
UInterchangeSourceData::GetContextObjectByTag(UInterchangeSourceData *this,FString *param_1)

{
  int iVar1;
  UObject *pUVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                      *)&this->ContextObjectsByTag,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->ContextObjectsByTag).field_0x0,
     lVar5 != 0)) {
    pUVar2 = *(UObject **)(lVar5 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    return pUVar2;
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14e442150

UClass * __cdecl UInterchangeSourceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeSourceData",
               &Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton,
               StaticRegisterNativesUInterchangeSourceData,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeSourceData>,
               InternalVTableHelperCtorCaller<UInterchangeSourceData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSourceData.InnerSingleton;
}

// RemoveAllContextObjects @ 14e451c30

void __thiscall UInterchangeSourceData::RemoveAllContextObjects(UInterchangeSourceData *this)

{
  TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *)&this->ContextObjectsByTag);
  return;
}

// SetContextObjectByTag @ 14e45b080

void __thiscall
UInterchangeSourceData::SetContextObjectByTag
          (UInterchangeSourceData *this,FString *param_1,UObject *param_2)

{
  TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&> local_res8;
  FString *local_18;
  TObjectPtr<UObject> **local_10;
  
  local_res8.Value = (TObjectPtr<UObject> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_10 = &local_res8.Value;
  local_18 = param_1;
  TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&>_>
            ((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)&this->ContextObjectsByTag,&local_res8,(bool *)&local_18);
  return;
}

// StaticRegisterNativesUInterchangeSourceData @ 14e460040

void __cdecl UInterchangeSourceData::StaticRegisterNativesUInterchangeSourceData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSourceData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllContextObjectTags @ 14e46a830

void __cdecl
UInterchangeSourceData::execGetAllContextObjectTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
              *)(param_1 + 2),&local_18);
  if (param_3 == &local_18) {
    iVar1 = local_18.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,iVar1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetContextObjectByTag @ 14e46ac10

void __cdecl
UInterchangeSourceData::execGetContextObjectByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  UObject *pUVar6;
  FString local_18;
  
  pUVar6 = (UObject *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                      *)(param_1 + 2),uVar3,&local_18);
  if ((((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 2), lVar5 != 0))
      && (pUVar6 = *(UObject **)(lVar5 + 0x10), UE::GC::GIsIncrementalReachabilityPending != false))
     && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)param_3 = pUVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetFilename @ 14e46cae0

void __cdecl UInterchangeSourceData::execGetFilename(UObject *param_1,FFrame *param_2,void *param_3)

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
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
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

// execRemoveAllContextObjects @ 14e46fe60

void __cdecl
UInterchangeSourceData::execRemoveAllContextObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *)(param_1 + 2));
  return;
}

// execSetContextObjectByTag @ 14e471420

void __cdecl
UInterchangeSourceData::execSetContextObjectByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&> local_res8;
  UObject *local_res20;
  void *local_38;
  undefined8 local_30;
  void **local_28;
  UObject **local_20;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8.Value = (TObjectPtr<UObject> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  local_res20 = (UObject *)local_res8.Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_res8.Value != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_28 = &local_38;
  local_20 = &local_res20;
  TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&>_>
            ((TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)(param_1 + 2),&local_res8,(bool *)&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetFilename @ 14e473920

void __cdecl UInterchangeSourceData::execSetFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = (UObject *)FPaths::ConvertRelativePathToFull(&local_18,&local_28);
  pUVar1 = param_1 + 1;
  if (pUVar1 != pUVar3) {
    if (*(void **)pUVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pUVar1);
    }
    *(undefined8 *)pUVar1 = *(undefined8 *)pUVar3;
    *(undefined8 *)pUVar3 = 0;
    *(int *)&param_1[1].field_0x8 = *(int *)&pUVar3->field_0x8;
    *(int *)&param_1[1].field_0xc = *(int *)&pUVar3->field_0xc;
    *(undefined8 *)&pUVar3->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_1[1].field_0x21 != '\0') {
    param_1[1].field_0x21 = 0;
  }
  *(undefined1 *)param_3 = 1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

