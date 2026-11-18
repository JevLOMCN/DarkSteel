// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 19

// StaticClass @ 1436e34c0

UClass * __cdecl UNNEModelData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEModelData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNEModelData",
               &Z_Registration_Info_UClass_UNNEModelData.InnerSingleton,
               StaticRegisterNativesUNNEModelData,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNEModelData>,InternalVTableHelperCtorCaller<UNNEModelData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEModelData.InnerSingleton;
}

// UNNEModelData @ 1436e7520

UNNEModelData * __thiscall UNNEModelData::UNNEModelData(UNNEModelData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNNEModelData__6B_;
  (this->TargetRuntimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetRuntimes).ArrayNum = 0;
  (this->TargetRuntimes).ArrayMax = 0;
  (this->FileType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileType).Data.ArrayNum = 0;
  (this->FileType).Data.ArrayMax = 0;
  (this->FileData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileData).ArrayNum = 0;
  (this->FileData).ArrayMax = 0;
  *(undefined8 *)&this->AdditionalFileData = 0;
  *(undefined8 *)&(this->AdditionalFileData).field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalFileData).field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalFileData).field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalFileData).field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 0;
  (this->FileId).A = 0;
  (this->FileId).B = 0;
  (this->FileId).C = 0;
  (this->FileId).D = 0;
  *(undefined8 *)&this->ModelData = 0;
  *(undefined8 *)&(this->ModelData).field_0x8 = 0;
  *(undefined8 *)&(this->ModelData).field_0x20 = 0;
  *(undefined4 *)&(this->ModelData).field_0x28 = 0;
  *(undefined4 *)&(this->ModelData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelData).field_0x34 = 0;
  *(undefined4 *)&(this->ModelData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelData).field_0x40 = 0;
  *(undefined4 *)&(this->ModelData).field_0x48 = 0;
  return this;
}

// UNNEModelData @ 1436e7600

UNNEModelData * __thiscall
UNNEModelData::UNNEModelData(UNNEModelData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNNEModelData__6B_;
  (this->TargetRuntimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetRuntimes).ArrayNum = 0;
  (this->TargetRuntimes).ArrayMax = 0;
  (this->FileType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileType).Data.ArrayNum = 0;
  (this->FileType).Data.ArrayMax = 0;
  (this->FileData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileData).ArrayNum = 0;
  (this->FileData).ArrayMax = 0;
  *(undefined8 *)&this->AdditionalFileData = 0;
  *(undefined8 *)&(this->AdditionalFileData).field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalFileData).field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalFileData).field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalFileData).field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 0;
  (this->FileId).A = 0;
  (this->FileId).B = 0;
  (this->FileId).C = 0;
  (this->FileId).D = 0;
  *(undefined8 *)&this->ModelData = 0;
  *(undefined8 *)&(this->ModelData).field_0x8 = 0;
  *(undefined8 *)&(this->ModelData).field_0x20 = 0;
  *(undefined4 *)&(this->ModelData).field_0x28 = 0;
  *(undefined4 *)&(this->ModelData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelData).field_0x34 = 0;
  *(undefined4 *)&(this->ModelData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelData).field_0x40 = 0;
  *(undefined4 *)&(this->ModelData).field_0x48 = 0;
  return this;
}

// ~UNNEModelData @ 1436e7aa0

void __thiscall UNNEModelData::~UNNEModelData(UNNEModelData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNNEModelData__6B_;
  *(undefined4 *)&(this->ModelData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModelData);
  *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalFileData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalFileData);
  pFVar2 = (this->FileData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FileType).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->TargetRuntimes).AllocatorInstance.Data,
             (this->TargetRuntimes).ArrayNum);
  pFVar2 = (this->TargetRuntimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ClearFileDataAndFileType @ 1436e82c0

void __thiscall UNNEModelData::ClearFileDataAndFileType(UNNEModelData *this)

{
  FString *pFVar1;
  long64 *plVar2;
  TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
  *this_00;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  FString local_18;
  
  ::FString::FString(&local_18,"");
  pFVar1 = &this->FileType;
  if (pFVar1 != &local_18) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->FileType).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->FileType).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  plVar2 = &(this->FileData).ArrayMax;
  (this->FileData).ArrayNum = 0;
  if (*plVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->FileData).AllocatorInstance,0,plVar2);
  }
  this_00 = &this->AdditionalFileData;
  bVar6 = 1 < *(int *)&(this->AdditionalFileData).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AdditionalFileData).field_0x8);
  puVar3 = &(this->AdditionalFileData).field_0xc;
  *(undefined4 *)&(this->AdditionalFileData).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->AdditionalFileData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalFileData).field_0x34 = 0;
  iVar4 = *(int *)&(this->AdditionalFileData).field_0x2c;
  *(undefined4 *)&(this->AdditionalFileData).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AdditionalFileData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AdditionalFileData).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 1;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearModelData @ 1436e8410

void __thiscall UNNEModelData::ClearModelData(UNNEModelData *this)

{
  undefined1 *puVar1;
  TMap<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ModelData;
  bVar3 = 1 < *(int *)&(this->ModelData).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ModelData).field_0x8);
  puVar1 = &(this->ModelData).field_0xc;
  *(undefined4 *)&(this->ModelData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ModelData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModelData).field_0x34 = 0;
  iVar2 = *(int *)&(this->ModelData).field_0x2c;
  *(undefined4 *)&(this->ModelData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ModelData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModelData).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ModelData).field_0x48 = 1;
    TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetAdditionalFileData @ 1436e8f10

TArrayView<unsigned_char_const_,__int64> * __thiscall
UNNEModelData::GetAdditionalFileData
          (UNNEModelData *this,TArrayView<unsigned_char_const_,__int64> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *pTVar5;
  TArrayView<unsigned_char_const_,__int64> *pTVar6;
  int iVar7;
  wchar_t *pwVar8;
  uchar *puVar9;
  longlong lVar10;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  puVar9 = (uchar *)0x0;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  iVar4 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                      *)&this->AdditionalFileData,uVar3,param_1);
  if (iVar4 == -1) {
    lVar10 = 0;
  }
  else {
    pTVar5 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                     *)&this->AdditionalFileData,param_1);
    if (pTVar5 == (TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,__int64> *)(*pcVar1)();
        return pTVar6;
      }
    }
    puVar9 = *(uchar **)&pTVar5->field_0x10;
    lVar10 = *(longlong *)&pTVar5->field_0x18;
    if ((lVar10 < 0) || (0x7fffffff < lVar10)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0 && InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xe7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,__int64> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  __return_storage_ptr__->ArrayNum = (longlong)(int)lVar10;
  __return_storage_ptr__->DataPtr = puVar9;
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 1436e92b0

void __thiscall
UNNEModelData::GetAssetRegistryTags(UNNEModelData *this,FAssetRegistryTagsContext param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FAssetRegistryTagsContext FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FName local_res8;
  FAssetRegistryTagsContext local_res18 [2];
  FString local_68;
  FString local_58;
  FAssetRegistryTag local_48;
  
  iVar7 = (this->TargetRuntimes).ArrayNum;
  pFVar5 = (this->TargetRuntimes).AllocatorInstance.Data;
  if (iVar7 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (iVar7 == 0) {
    ::FString::FString(&local_68,L"All");
    goto LAB_1436e9378;
  }
  pFVar6 = pFVar5 + (longlong)iVar7 * 0x10;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.ArrayNum = 0;
  bVar2 = true;
  local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  for (; local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data,
      pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x10) {
    if (!bVar2) {
      ::FString::AppendChars(&local_58,L", ",2);
    }
    iVar7 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_58,*(wchar_t **)pFVar5,iVar7);
    bVar2 = false;
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_68.Data.ArrayMax = local_58.Data.ArrayMax;
  local_68.Data.ArrayNum = local_58.Data.ArrayNum;
LAB_1436e9378:
  pFVar3 = ::FName::FName(&local_res8,"TargetRuntimes");
  local_48.Name = *pFVar3;
  local_48.Value.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_68.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Alphabetical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar4.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar4);
  return;
}

// GetFileData @ 1436e9420

TArrayView<unsigned_char_const_,__int64> * __thiscall
UNNEModelData::GetFileData
          (UNNEModelData *this,TArrayView<unsigned_char_const_,__int64> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,__int64> *pTVar4;
  
  lVar1 = (this->FileData).ArrayNum;
  __return_storage_ptr__->DataPtr = (uchar *)(this->FileData).AllocatorInstance.Data;
  if (-1 < lVar1) {
    __return_storage_ptr__->ArrayNum = lVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned_char_const_,__int64> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = lVar1;
  return __return_storage_ptr__;
}

// GetFileId @ 1436e9490

FGuid * __thiscall UNNEModelData::GetFileId(UNNEModelData *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->FileId).B;
  uVar2 = (this->FileId).C;
  uVar3 = (this->FileId).D;
  __return_storage_ptr__->A = (this->FileId).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetFileType @ 1436e94b0

FString * __thiscall UNNEModelData::GetFileType(UNNEModelData *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->FileType);
  return __return_storage_ptr__;
}

// GetModelData @ 1436e9560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::FSharedModelData,1> * __thiscall
UNNEModelData::GetModelData
          (UNNEModelData *this,TSharedPtr<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,
          FString *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar9;
  TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *pTVar10;
  TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *pTVar11;
  TArrayView<unsigned_char_const_,__int64> *pTVar12;
  byte bVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8 [8];
  TSharedPtr<UE::NNE::FSharedModelData,1> local_1e0;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8 [8];
  TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
  *local_1c0;
  UNNEModelData *local_1b8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_1b0;
  TSharedPtr<UE::NNE::FSharedModelData,1> *local_1a8;
  TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
  *local_1a0;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FString *local_138;
  undefined1 *local_130;
  FString *local_128;
  TSharedPtr<UE::NNE::FSharedModelData,1> *local_120;
  TArrayView<unsigned_char_const_,__int64> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar18 = (this->TargetRuntimes).ArrayNum;
  pFVar16 = (this->TargetRuntimes).AllocatorInstance.Data;
  local_1b8 = this;
  local_1a8 = __return_storage_ptr__;
  if ((iVar18 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (iVar18 != 0) {
    pFVar19 = pFVar16;
    do {
      if (pFVar19 == pFVar16 + (longlong)iVar18 * 0x10) {
        if (1 < (byte)LogNNE._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
        }
        pFVar19 = pFVar16 + (longlong)iVar18 * 0x10;
        for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 0x10) {
          if (1 < (byte)LogNNE._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
          }
        }
        __return_storage_ptr__->Object = (FSharedModelData *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      iVar8 = *(int *)(pFVar19 + 8);
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar8 == iVar3) {
        if (iVar8 < 2) break;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar19,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
      }
      else {
        bVar7 = iVar8 + iVar3 == 1;
      }
      if (bVar7) break;
      pFVar19 = pFVar19 + 0x10;
    } while( true );
  }
  local_1a0 = (TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
               *)&this->ModelData;
  pTVar10 = TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
            ::Find(local_1a0,param_1);
  puVar17 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)&pTVar10->field_0x10;
  if (pTVar10 == (TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *)0x0) {
    puVar14 = puVar17;
  }
  if (puVar14 != (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FSharedModelData *)*puVar14;
    pTVar4 = (TReferenceControllerBase<1> *)puVar14[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  local_1b0 = &this->FileData;
  if ((this->FileData).ArrayNum < 1) {
    if (1 < (byte)LogNNE._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
    }
    __return_storage_ptr__->Object = (FSharedModelData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_1c0 = (TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
               *)&this->AdditionalFileData;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  uVar20 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
  ::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
              *)local_1c0,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8)
  ;
  uVar22 = local_c0;
  uStack_18c = 1;
  uStack_17c = uVar20;
  local_178 = uVar20;
  if (local_c0 != 0) {
    puVar21 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar21 = local_c8;
    }
    uVar23 = *puVar21;
    puVar14 = puVar17;
    local_178 = 0;
    uVar20 = 0;
    while (uVar23 == 0) {
      iVar18 = (int)puVar17;
      local_178 = (int)puVar14 + 0x20;
      puVar14 = (undefined8 *)(ulonglong)local_178;
      uVar20 = iVar18 + 1;
      puVar17 = (undefined8 *)(ulonglong)uVar20;
      uStack_17c = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_1436e9851;
      uVar23 = puVar21[(longlong)iVar18 + 1];
    }
    uStack_18c = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_18c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1d0 = (int)lVar15;
    uStack_17c = (local_178 - 1) + local_1d0;
    if ((int)local_c0 < (int)uStack_17c) {
      uStack_17c = local_c0;
    }
  }
LAB_1436e9851:
  local_198 = (longlong *)local_e8;
  uStack_174 = local_ec;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar23 = local_c0 & 0xffffffe0;
  iStack_170 = local_e8._8_4_ - local_b4;
  uStack_180 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_18c,uVar20);
  iVar18 = (int)local_c0 >> 5;
  TStack_160._28_4_ = local_ec;
  TStack_160.BaseBitIndex = local_178;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  bVar13 = (byte)local_c0;
  uStack_190 = uVar20;
  local_168 = local_198;
  TStack_160.Array = local_188;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar5)();
    return pTVar9;
  }
  this_00 = local_1c0;
  if (uVar22 != local_c0) {
    puVar21 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar21 = local_c8;
    }
    uVar20 = -1 << (bVar13 & 0x1f) & puVar21[iVar18];
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar22 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1436e9952;
      uVar20 = puVar21[lVar15 + 1];
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1cc = (int)lVar15;
    uVar22 = local_1cc + -1 + uVar23;
    if ((int)local_c0 < (int)uVar22) {
      uVar22 = local_c0;
    }
  }
LAB_1436e9952:
  while( true ) {
    plVar6 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_1e8[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    if (((TStack_160.CurrentBitIndex == uVar22) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar6 == (longlong *)local_e8)) break;
    pFVar1 = (FString *)(*plVar6 + (longlong)TStack_160.CurrentBitIndex * 0x18);
    pTVar11 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
              ::Find(this_00,pFVar1);
    if ((pTVar11 == (TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar5)();
      return pTVar9;
    }
    local_130 = &pTVar11->field_0x10;
    local_138 = pFVar1;
    TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&>_>
              (&local_98,
               (TPairInitializer<FString_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&> *)
               local_1c8,(bool *)&local_138);
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  UE::NNE::ModelData::CreateModelData
            (&local_1e0,param_1,&local_1b8->FileType,local_1b0,
             (TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
              *)&local_98,&local_1b8->FileId,(ITargetPlatform *)0x0);
  pTVar9 = local_1a8;
  if (local_1e0.Object != (FSharedModelData *)0x0) {
    if ((local_1e0.Object == (FSharedModelData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar5)();
      return pTVar9;
    }
    pTVar12 = UE::NNE::FSharedModelData::GetView(local_1e0.Object,local_118);
    if (0 < pTVar12->ArrayNum) {
      local_120 = &local_1e0;
      local_128 = param_1;
      TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_const_&>_>
                (local_1a0,
                 (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_const_&>
                  *)(local_1c8 + 4),(bool *)&local_128);
      pTVar9->Object = local_1e0.Object;
      (pTVar9->SharedReferenceCount).ReferenceController =
           local_1e0.SharedReferenceCount.ReferenceController;
      local_1e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1e0.Object = (FSharedModelData *)0x0;
      goto LAB_1436e9b03;
    }
  }
  pTVar9->Object = (FSharedModelData *)0x0;
  (pTVar9->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1436e9b03:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return pTVar9;
}

// GetPrivateStaticClass @ 1436e9b80

UClass * __cdecl UNNEModelData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEModelData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNEModelData",
               &Z_Registration_Info_UClass_UNNEModelData.InnerSingleton,
               StaticRegisterNativesUNNEModelData,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNEModelData>,InternalVTableHelperCtorCaller<UNNEModelData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEModelData.InnerSingleton;
}

// GetTargetRuntimes @ 1436ea1f0

TArrayView<FString_const_,int> * __thiscall
UNNEModelData::GetTargetRuntimes
          (UNNEModelData *this,TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FString_const_,int> *pTVar4;
  
  iVar1 = (this->TargetRuntimes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FString *)(this->TargetRuntimes).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FString_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Init @ 1436ea3c0

void __thiscall
UNNEModelData::Init(UNNEModelData *this,FString *param_1,
                   TArrayView<unsigned_char_const_,__int64> *param_2,
                   TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
                   *param_3)

{
  int *piVar1;
  long64 *plVar2;
  TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
  *this_00;
  undefined1 *puVar3;
  undefined1 *puVar4;
  FString *pFVar5;
  size_t _Size;
  code *pcVar6;
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  *pTVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  TTuple<FString,TArrayView<unsigned_char_const_,__int64>_> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  undefined1 *puVar16;
  TMap<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
  *this_02;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  *local_res20;
  int local_d8 [2];
  TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TPairInitializer<FString_const_&,TArrayView<unsigned_char_const_,__int64>_const_&> local_60;
  FSparseArrayAllocationInfo local_50;
  
  local_res20 = (TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
                 *)param_3;
  DestructItems<FString,int>
            ((FString *)(this->TargetRuntimes).AllocatorInstance.Data,
             (this->TargetRuntimes).ArrayNum);
  piVar1 = &(this->TargetRuntimes).ArrayMax;
  iVar19 = 0;
  (this->TargetRuntimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->TargetRuntimes).AllocatorInstance,0,piVar1);
  }
  ::FString::operator=(&this->FileType,param_1);
  _Size = param_2->ArrayNum;
  lVar12 = (this->FileData).ArrayMax;
  plVar2 = &(this->FileData).ArrayMax;
  (this->FileData).ArrayNum = _Size;
  if ((_Size == 0) && (lVar12 == 0)) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,lVar12,&(this->FileData).AllocatorInstance,_Size,plVar2);
    if (_Size != 0) {
      memcpy((this->FileData).AllocatorInstance.Data,param_2->DataPtr,_Size);
    }
  }
  this_00 = &this->AdditionalFileData;
  bVar9 = 1 < *(int *)&(this->AdditionalFileData).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar3 = &(this->AdditionalFileData).field_0x8;
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AdditionalFileData).field_0x8);
  puVar4 = &(this->AdditionalFileData).field_0xc;
  *(undefined4 *)puVar3 = 0;
  if (*(int *)puVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
  }
  *(undefined4 *)&(this->AdditionalFileData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalFileData).field_0x34 = 0;
  iVar10 = *(int *)&(this->AdditionalFileData).field_0x2c;
  *(undefined4 *)&(this->AdditionalFileData).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->AdditionalFileData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AdditionalFileData).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 1;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  iVar10 = *(int *)&param_3->field_0x28;
  puVar4 = &param_3->field_0x10;
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar10 != 0) {
    puVar21 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)puVar4;
    }
    uVar17 = *puVar21;
    iVar19 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar19;
      local_b0 = local_b0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1436ea5ae;
      uVar17 = puVar21[lVar12 + 1];
    }
    uStack_c4 = -uVar17 & uVar17;
    uVar13 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    iStack_b4 = local_a0 + -1 + local_b0;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_1436ea5ae:
  uVar17 = *(uint *)&param_3->field_0x28;
  iStack_a8 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar22 = uVar17 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_c4,iVar19);
  uStack_b8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = param_3;
  iStack_c8 = iVar19;
  local_c0 = puVar4;
  iStack_ac = iStack_b4;
  local_90 = (TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
              *)param_3;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = local_res20;
  uVar14 = *(uint *)&param_3->field_0x28;
  if (uVar17 != uVar14) {
    puVar20 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1436ea6c0;
      uVar17 = *(uint *)(puVar20 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_9c = (int)lVar12;
    uVar17 = local_9c + -1 + uVar22;
    if ((int)uVar14 < (int)uVar17) {
      uVar17 = uVar14;
    }
  }
LAB_1436ea6c0:
  while( true ) {
    pTVar7 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar7 == this_01))
    break;
    pFVar5 = (FString *)
             (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x28);
    pTVar11 = TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
              ::Find(this_01,pFVar5);
    if ((pTVar11 == (TTuple<FString,TArrayView<unsigned_char_const_,__int64>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = *(int *)&(this->AdditionalFileData).field_0x34;
    local_60.Value = (TArrayView<unsigned_char_const_,__int64> *)&pTVar11->field_0x10;
    local_60.Key = pFVar5;
    if (iVar19 == 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,1,(ForAnyElementType *)this_00,(int *)puVar3,
                          (int *)&(this->AdditionalFileData).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AdditionalFileData).field_0x10,
                 false);
    }
    else {
      iVar10 = *(int *)&(this->AdditionalFileData).field_0x30;
      iVar19 = iVar19 + -1;
      iVar18 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar10 * 0x30);
      *(int *)&(this->AdditionalFileData).field_0x30 = iVar18;
      *(int *)&(this->AdditionalFileData).field_0x34 = iVar19;
      if (iVar19 != 0) {
        *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar18 * 0x30) = 0xffffffff;
      }
    }
    TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_50,iVar10);
    pvVar8 = local_50.Pointer;
    if (local_50.Pointer !=
        (TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_> *)
        0x0) {
      TPairInitializer<FString_const_&,TArrayView<unsigned_char_const_,__int64>_const_&>::
      operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                (&local_60,local_50.Pointer);
      *(undefined4 *)((longlong)pvVar8 + 0x28) = 0xffffffff;
    }
    local_d8[0] = local_50.Index;
    if (*(int *)((longlong)pvVar8 + 8) == 0) {
      pwVar15 = L"";
      iVar19 = 0;
    }
    else {
      pwVar15 = *(wchar_t **)pvVar8;
      iVar19 = *(int *)((longlong)pvVar8 + 8) + -1;
    }
    uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar15);
    bVar9 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                        *)this_00,uVar22,pvVar8,local_d8,(bool *)0x0);
    if (!bVar9) {
      uVar14 = *(int *)puVar3 - *(int *)&(this->AdditionalFileData).field_0x34;
      if (uVar14 < 4) {
        iVar19 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_98 = (undefined4)lVar12;
        iVar19 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((int)uVar14 < 1) || (iVar19 <= *(int *)&(this->AdditionalFileData).field_0x48)) {
        uVar22 = *(int *)&(this->AdditionalFileData).field_0x48 - 1U & uVar22;
        *(uint *)((longlong)pvVar8 + 0x2c) = uVar22;
        puVar20 = *(undefined1 **)&(this->AdditionalFileData).field_0x40;
        puVar16 = &(this->AdditionalFileData).field_0x38;
        if (puVar20 != (undefined1 *)0x0) {
          puVar16 = puVar20;
        }
        uVar13 = (longlong)*(int *)&(this->AdditionalFileData).field_0x48 - 1U &
                 (longlong)(int)uVar22;
        *(undefined4 *)((longlong)pvVar8 + 0x28) = *(undefined4 *)(puVar16 + uVar13 * 4);
        *(int *)(puVar16 + uVar13 * 4) = local_d8[0];
      }
      else {
        *(int *)&(this->AdditionalFileData).field_0x48 = iVar19;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  FWindowsPlatformMisc::CreateGuid(&this->FileId);
  this_02 = &this->ModelData;
  bVar9 = 1 < *(int *)&(this->ModelData).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->ModelData).field_0x8);
  puVar3 = &(this->ModelData).field_0xc;
  *(undefined4 *)&(this->ModelData).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_02,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->ModelData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModelData).field_0x34 = 0;
  iVar19 = *(int *)&(this->ModelData).field_0x2c;
  *(undefined4 *)&(this->ModelData).field_0x28 = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->ModelData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModelData).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->ModelData).field_0x48 = 1;
    TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  return;
}

// Serialize @ 1436eb910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNNEModelData::Serialize(UNNEModelData *this,FArchive *param_1)

{
  atomic<unsigned___int64> *paVar1;
  TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
  *pTVar2;
  FString *pFVar3;
  atomic<unsigned___int64> aVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  undefined8 uVar9;
  ulong64 *puVar10;
  _func___cdecl_void_void_ptr *p_Var11;
  FSharedModelData *pFVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  FBufferOwner *pFVar18;
  FBufferOwner *pFVar19;
  FSharedBuffer FVar20;
  TSharedRef<UE::NNE::FSharedModelData,1> *pTVar21;
  TArrayView<FString_const_,int> *pTVar22;
  FRegistry *this_00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *pTVar24;
  TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *pTVar25;
  byte bVar26;
  ITargetPlatform *pIVar27;
  ForAnyElementType FVar28;
  ulonglong uVar29;
  uint uVar30;
  UNNEModelData *this_01;
  ulonglong uVar32;
  ulonglong uVar33;
  FBufferOwner *pFVar34;
  uint *puVar35;
  uint uVar36;
  FBufferOwner *pFVar37;
  ForElementType<FString> FVar38;
  ForElementType<FString> FVar39;
  longlong lVar40;
  ulonglong uVar41;
  uint uVar42;
  size_t _Size;
  undefined1 auStackY_608 [32];
  uint local_5c8;
  int local_5c4;
  _func___cdecl_void_void_ptr *local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6 [2];
  int local_5b4;
  uint local_5b0;
  uint local_5ac;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_5a8;
  UNNEModelData *local_598;
  FString local_590;
  uint local_580;
  uint local_57c;
  uint local_578 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_570;
  ulonglong local_560;
  longlong local_558;
  int local_550 [2];
  FSharedBuffer local_548;
  FSharedBuffer local_540;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_538;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_530;
  TArray<FString,TSizedDefaultAllocator<32>_> local_518;
  int local_508;
  uint uStack_504;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_500;
  undefined4 local_4f8;
  uint uStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4e8;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_4d8;
  longlong *local_4c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c0;
  undefined8 uStack_4a0;
  ulong64 *local_498;
  FBufferOwner *pFStack_490;
  ulong64 *local_488;
  FBufferOwner *pFStack_480;
  FGuid local_478;
  FString local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_438;
  undefined1 local_418 [8];
  FName local_410;
  longlong local_408;
  undefined8 local_400;
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_const_&> local_3e0;
  TReferenceControllerBase<1> *local_3d0;
  FSharedModelData *local_3c8;
  TReferenceControllerBase<1> *local_3c0;
  FString local_3b8;
  FSharedModelData *local_3a8;
  TReferenceControllerBase<1> *local_3a0;
  FString local_398;
  int local_388;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_380;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_378;
  undefined1 local_370 [8];
  FName local_368;
  longlong *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  undefined8 uStack_338;
  FString *local_330;
  undefined1 *local_328;
  FString *local_320;
  ulong64 **local_318;
  FString *local_310;
  ulong64 **local_308;
  FString *local_300;
  TSharedPtr<UE::NNE::FSharedModelData,1> **local_2f8;
  ForElementType<FString> local_2f0;
  TSharedPtr<UE::NNE::FSharedModelData,1> *local_2e8;
  FString *local_2e0;
  FSharedModelData **local_2d8;
  FString *local_2d0;
  FSharedModelData **local_2c8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_2c0;
  undefined1 local_2a8 [40];
  int local_280;
  undefined4 uStack_27c;
  longlong local_270;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  TSharedRef<UE::NNE::FSharedModelData,1> local_248;
  TSharedRef<UE::NNE::FSharedModelData,1> local_238;
  TSharedRef<UE::NNE::FSharedModelData,1> local_228;
  TArrayView<FString_const_,int> local_218;
  TArrayView<FString_const_,int> local_208;
  undefined1 local_1f8 [32];
  uint *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
  local_158;
  ForElementType<FString> local_108;
  uint local_60 [2];
  ulonglong local_58;
  FBufferOwner *pFVar31;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_608;
  local_598 = this;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&UE::NNE::ModelData::GUID);
  if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 4) == 0)) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    pFVar34 = (FBufferOwner *)0x0;
    local_400 = 0;
    local_5c4 = 0;
    local_5b4 = 0;
    local_590.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_590.Data.ArrayNum = 0;
    local_590.Data.ArrayMax = 0;
    local_5c8 = 0;
    local_5c0 = (_func___cdecl_void_void_ptr *)0x0;
    local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_530.ArrayNum = 0;
    local_530.ArrayMax = 0;
    local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a8.ArrayNum = 0;
    local_5a8.ArrayMax = 0;
    iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&UE::NNE::ModelData::GUID);
    if (iVar14 == 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::Empty(&this->TargetRuntimes,0);
      ::operator<<(param_1,&this->FileType);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_5a8);
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<TSizedDefaultAllocator<32>_>
                (&this->FileData,&local_5a8);
      ::operator<<(param_1,&this->FileId);
      ::operator<<(param_1,&local_5c4);
      if (0 < local_5c4) {
        local_2d0 = &local_590;
        local_550[1] = 0;
        local_2c8 = &local_3a8;
        do {
          ::operator<<(param_1,&local_590);
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_5a8);
          FVar20 = MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_>
                             ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_418);
          pTVar21 = MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,int>
                              (&local_228,(FSharedBuffer *)FVar20.Owner.Owner,local_550 + 1);
          local_3a8 = pTVar21->Object;
          local_3a0 = (pTVar21->SharedReferenceCount).ReferenceController;
          if (local_3a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_3a0->SharedReferenceCount =
                 (atomic<int>)((int)local_3a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)&this->ModelData,
                     (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&> *
                     )local_3e8,(bool *)&local_2d0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.SharedReferenceCount.ReferenceController);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_418);
          uVar30 = (int)pFVar34 + 1;
          pFVar34 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5c4);
      }
      if (2 < (byte)LogNNE._0_1_) {
        local_410 = (FName)this->_padding_;
        ::FName::ToString(&local_410,&local_398);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
        local_3b8.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
LAB_1436ec690:
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (iVar14 == 1) {
      TArray<FString,TSizedDefaultAllocator<32>_>::Empty(&this->TargetRuntimes,0);
      if ((param_1->field_0x28 & 2) == 0) {
        TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                  (param_1,&this->TargetRuntimes);
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&local_400);
      }
      ::operator<<(param_1,&this->FileType);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_5a8);
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<TSizedDefaultAllocator<32>_>
                (&this->FileData,&local_5a8);
      ::operator<<(param_1,&this->FileId);
      ::operator<<(param_1,&local_5c4);
      if (0 < local_5c4) {
        local_2e0 = &local_590;
        local_550[0] = 0;
        local_2d8 = &local_3c8;
        do {
          ::operator<<(param_1,&local_590);
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_5a8);
          FVar20 = MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_>
                             ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_370);
          pTVar21 = MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,int>
                              (&local_238,(FSharedBuffer *)FVar20.Owner.Owner,local_550);
          local_3c8 = pTVar21->Object;
          local_3c0 = (pTVar21->SharedReferenceCount).ReferenceController;
          if (local_3c0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_3c0->SharedReferenceCount =
                 (atomic<int>)((int)local_3c0->SharedReferenceCount + 1);
            UNLOCK();
          }
          TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)&this->ModelData,
                     (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&> *
                     )(local_3f0 + 4),(bool *)&local_2e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_370);
          uVar30 = (int)pFVar34 + 1;
          pFVar34 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5c4);
      }
      if (2 < (byte)LogNNE._0_1_) {
        local_368 = (FName)this->_padding_;
        ::FName::ToString(&local_368,&local_3b8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
        goto LAB_1436ec690;
      }
    }
    else if (iVar14 == 2) {
      TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                (param_1,&this->TargetRuntimes);
      ::operator<<(param_1,&this->FileType);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_5a8);
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<TSizedDefaultAllocator<32>_>
                (&this->FileData,&local_5a8);
      ::operator<<(param_1,&this->FileId);
      ::operator<<(param_1,&local_5c4);
      if (0 < local_5c4) {
        local_300 = &local_590;
        local_2f8 = &local_3e0.Value;
        do {
          ::operator<<(param_1,&local_590);
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_5c8);
            }
          }
          else {
            local_5c8 = *(uint *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c0,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_5c0);
            }
          }
          else {
            local_5c0 = *(_func___cdecl_void_void_ptr **)*plVar5;
            *plVar5 = *plVar5 + 8;
          }
          pvVar17 = FMemory::Malloc((ulong64)local_5c0,local_5c8);
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar17,local_5c0);
          FVar20 = FSharedBuffer::TakeOwnership<void_(__cdecl&)(void_*),0>
                             (&local_378,(ulong64)pvVar17,local_5c0);
          pTVar21 = MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,unsigned_int_&>
                              (&local_248,(FSharedBuffer *)FVar20.Owner.Owner,&local_5c8);
          local_3e0.Value = (TSharedPtr<UE::NNE::FSharedModelData,1> *)pTVar21->Object;
          local_3d0 = (pTVar21->SharedReferenceCount).ReferenceController;
          if (local_3d0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_3d0->SharedReferenceCount =
                 (atomic<int>)((int)local_3d0->SharedReferenceCount + 1);
            UNLOCK();
          }
          TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)&this->ModelData,
                     (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&> *
                     )local_3f0,(bool *)&local_300);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3d0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_248.SharedReferenceCount.ReferenceController);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_378);
          uVar30 = (int)pFVar34 + 1;
          pFVar34 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5c4);
      }
    }
    else if (iVar14 == 3) {
      TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                (param_1,&this->TargetRuntimes);
      ::operator<<(param_1,&this->FileType);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_5a8);
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<TSizedDefaultAllocator<32>_>
                (&this->FileData,&local_5a8);
      ::operator<<(param_1,&local_5b4);
      pTVar2 = &this->AdditionalFileData;
      if (*(int *)&(this->AdditionalFileData).field_0x48 < 2) {
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                          *)pTVar2);
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar2,0);
      }
      else {
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar2,0);
        *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 1;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                  *)pTVar2);
      }
      pFVar31 = pFVar34;
      if (0 < local_5b4) {
        do {
          ::operator<<(param_1,&local_590);
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_5a8);
          iVar14 = local_5a8.ArrayNum;
          _Size = (size_t)local_5a8.ArrayNum;
          local_538.Owner = (FBufferOwner *)local_5a8.AllocatorInstance.Data;
          local_530.ArrayNum = _Size;
          if ((local_5a8.ArrayNum == 0) && (local_530.ArrayMax == 0)) {
            local_530.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,_Size,local_530.ArrayMax,&local_530.AllocatorInstance,_Size,
                       &local_530.ArrayMax);
            if (iVar14 != 0) {
              memcpy(local_530.AllocatorInstance.Data,local_538.Owner,_Size);
            }
          }
          TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
          ::Emplace<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&>
                    ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                      *)pTVar2,&local_590,&local_530);
          uVar30 = (int)pFVar31 + 1;
          pFVar31 = (FBufferOwner *)(ulonglong)uVar30;
          this = local_598;
        } while ((int)uVar30 < local_5b4);
      }
      ::operator<<(param_1,&this->FileId);
      ::operator<<(param_1,&local_5c4);
      pFVar31 = _UNK_150651568;
      puVar10 = ___xmm_00000000000000000000000000000010;
      if (0 < local_5c4) {
        pFVar37 = pFVar34;
        do {
          ::operator<<(param_1,&local_590);
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_5c8);
            }
          }
          else {
            local_5c8 = *(uint *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c0,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_5c0);
            }
          }
          else {
            local_5c0 = *(_func___cdecl_void_void_ptr **)*plVar5;
            *plVar5 = *plVar5 + 8;
          }
          pvVar17 = FMemory::Malloc((ulong64)local_5c0,local_5c8);
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar17,local_5c0);
          p_Var11 = local_5c0;
          pFVar18 = ::operator_new(0x28);
          pFVar19 = pFVar34;
          if (pFVar18 != (FBufferOwner *)0x0) {
            pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
            pFVar18[1]._padding_ = (longlong)FMemory::Free;
            pFVar18->Data = pvVar17;
            pFVar18->Size = (ulong64)p_Var11;
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
            ;
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
            UNLOCK();
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
            UNLOCK();
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
            ;
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x2000000000000000);
            UNLOCK();
            pFVar19 = pFVar18;
          }
          FSharedBuffer::FSharedBuffer(&local_540,pFVar19);
          pFVar19 = ::operator_new(0x20);
          if (pFVar19 == (FBufferOwner *)0x0) {
            local_488 = puVar10;
            pFStack_480 = pFVar31;
            pFVar19 = pFVar34;
          }
          else {
            *(undefined4 *)&pFVar19->Data = 1;
            *(undefined4 *)((longlong)&pFVar19->Data + 4) = 1;
            pFVar19->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFSharedModelData_NNE_UE___00_SharedPointerInternals__6B_
            ;
            local_380 = local_540.Owner.Owner;
            local_540.Owner.Owner =
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
            UE::NNE::FSharedModelData::FSharedModelData
                      ((FSharedModelData *)&pFVar19->Size,(FSharedBuffer)&local_380,local_5c8);
            if ((&pFVar19->Size == (ulong64 *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            LOCK();
            *(int *)&pFVar19->Data = *(int *)&pFVar19->Data + 1;
            UNLOCK();
            local_488 = &pFVar19->Size;
            pFStack_480 = pFVar19;
          }
          local_310 = &local_590;
          local_308 = &local_488;
          TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)&this->ModelData,
                     (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&> *
                     )(local_3f8 + 4),(bool *)&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFStack_480);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
          FVar20.Owner.Owner = local_540.Owner.Owner;
          if (local_540.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_540.Owner.Owner + 0x18);
            aVar4 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
            UNLOCK();
            if ((aVar4._0_4_ & 0x3fffffff) == 1) {
              (**(code **)(*(longlong *)local_540.Owner.Owner + 0x10))(local_540.Owner.Owner);
              *(void **)((longlong)FVar20.Owner.Owner + 8) = (void *)0x0;
              *(ulong64 *)((longlong)FVar20.Owner.Owner + 0x10) = 0;
              LOCK();
              paVar1 = (atomic<unsigned___int64> *)((longlong)FVar20.Owner.Owner + 0x18);
              aVar4 = *paVar1;
              *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
              UNLOCK();
              if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
                (*(code *)**(undefined8 **)FVar20.Owner.Owner)(FVar20.Owner.Owner,1);
              }
            }
          }
          uVar30 = (int)pFVar37 + 1;
          pFVar37 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5c4);
      }
    }
    else if (iVar14 == 4) {
      TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                (param_1,&this->TargetRuntimes);
      ::operator<<(param_1,&this->FileType);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
                (param_1,&this->FileData);
      ::operator<<(param_1,&local_5b4);
      if (*(int *)&(this->AdditionalFileData).field_0x48 < 2) {
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                          *)&this->AdditionalFileData);
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->AdditionalFileData,0);
      }
      else {
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->AdditionalFileData,0);
        *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 1;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                  *)&this->AdditionalFileData);
      }
      pFVar31 = pFVar34;
      if (0 < local_5b4) {
        do {
          ::operator<<(param_1,&local_590);
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
                    (param_1,&local_530);
          TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
          ::Emplace<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&>
                    ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                      *)&this->AdditionalFileData,&local_590,&local_530);
          uVar30 = (int)pFVar31 + 1;
          pFVar31 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5b4);
      }
      ::operator<<(param_1,&this->FileId);
      ::operator<<(param_1,&local_5c4);
      pFVar31 = _UNK_150651568;
      puVar10 = ___xmm_00000000000000000000000000000010;
      if (0 < local_5c4) {
        local_598 = (UNNEModelData *)&this->ModelData;
        pFVar37 = pFVar34;
        do {
          ::operator<<(param_1,&local_590);
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_5c8);
            }
          }
          else {
            local_5c8 = *(uint *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ulong64 *)plVar5[1] < (ulong64 *)*plVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c0,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_5c0);
            }
          }
          else {
            local_5c0 = *(_func___cdecl_void_void_ptr **)*plVar5;
            *plVar5 = *plVar5 + 8;
          }
          pvVar17 = FMemory::Malloc((ulong64)local_5c0,local_5c8);
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar17,local_5c0);
          p_Var11 = local_5c0;
          pFVar18 = ::operator_new(0x28);
          pFVar19 = pFVar34;
          if (pFVar18 != (FBufferOwner *)0x0) {
            pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
            pFVar18[1]._padding_ = (longlong)FMemory::Free;
            pFVar18->Data = pvVar17;
            pFVar18->Size = (ulong64)p_Var11;
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
            ;
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
            UNLOCK();
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
            UNLOCK();
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
            ;
            LOCK();
            pFVar18->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x2000000000000000);
            UNLOCK();
            pFVar19 = pFVar18;
          }
          FSharedBuffer::FSharedBuffer(&local_548,pFVar19);
          pFVar19 = ::operator_new(0x20);
          if (pFVar19 == (FBufferOwner *)0x0) {
            local_498 = puVar10;
            pFStack_490 = pFVar31;
            pFVar19 = pFVar34;
          }
          else {
            *(undefined4 *)&pFVar19->Data = 1;
            *(undefined4 *)((longlong)&pFVar19->Data + 4) = 1;
            pFVar19->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFSharedModelData_NNE_UE___00_SharedPointerInternals__6B_
            ;
            local_538 = local_548.Owner.Owner;
            local_548.Owner.Owner =
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
            UE::NNE::FSharedModelData::FSharedModelData
                      ((FSharedModelData *)&pFVar19->Size,(FSharedBuffer)&local_538,local_5c8);
            if ((&pFVar19->Size == (ulong64 *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            LOCK();
            *(int *)&pFVar19->Data = *(int *)&pFVar19->Data + 1;
            UNLOCK();
            local_498 = &pFVar19->Size;
            pFStack_490 = pFVar19;
          }
          local_320 = &local_590;
          local_318 = &local_498;
          TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                      *)local_598,
                     (TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_&&> *
                     )local_3f8,(bool *)&local_320);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFStack_490);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
          FVar20.Owner.Owner = local_548.Owner.Owner;
          if (local_548.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_548.Owner.Owner + 0x18);
            aVar4 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
            UNLOCK();
            if ((aVar4._0_4_ & 0x3fffffff) == 1) {
              (**(code **)(*(longlong *)local_548.Owner.Owner + 0x10))(local_548.Owner.Owner);
              *(void **)((longlong)FVar20.Owner.Owner + 8) = (void *)0x0;
              *(ulong64 *)((longlong)FVar20.Owner.Owner + 0x10) = 0;
              LOCK();
              paVar1 = (atomic<unsigned___int64> *)((longlong)FVar20.Owner.Owner + 0x18);
              aVar4 = *paVar1;
              *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
              UNLOCK();
              if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
                (*(code *)**(undefined8 **)FVar20.Owner.Owner)(FVar20.Owner.Owner,1);
              }
            }
          }
          uVar30 = (int)pFVar37 + 1;
          pFVar37 = (FBufferOwner *)(ulonglong)uVar30;
        } while ((int)uVar30 < local_5c4);
      }
    }
    else if (1 < (byte)LogNNE._0_1_) {
      FArchiveState::CustomVer((FArchiveState *)param_1,&UE::NNE::ModelData::GUID);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNE);
    }
    if ((FBufferOwner *)local_5a8.AllocatorInstance.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_5a8.AllocatorInstance.Data);
    }
    FVar28.Data = local_590.Data.AllocatorInstance.Data;
    if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.AllocatorInstance.Data);
      FVar28.Data = local_590.Data.AllocatorInstance.Data;
    }
    goto LAB_1436ed5f1;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (param_1,&this->TargetRuntimes);
    ::operator<<(param_1,&this->FileType);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
              (param_1,&this->FileData);
    pTVar2 = &this->AdditionalFileData;
    local_57c = *(int *)&(this->AdditionalFileData).field_0x8 -
                *(int *)&(this->AdditionalFileData).field_0x34;
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_57c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_57c);
      }
    }
    else {
      local_57c = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    local_1cc = 0x80;
    local_1f8._0_8_ = 0;
    local_1f8._8_8_ = 0;
    local_1d8 = (uint *)0x0;
    local_1d0 = 0;
    local_1c4 = 0;
    local_1b8 = (ForElementType<FSetElementId>)0x0;
    local_1b0 = 0;
    local_1c8 = 0xffffffff;
    TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
    ::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
              ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                *)pTVar2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1f8)
    ;
    uVar30 = local_1d0;
    pTStack_500 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
    local_508 = 0;
    uStack_504 = 1;
    uStack_4f4 = 0;
    iStack_4f0 = 0;
    if (local_1d0 != 0) {
      puVar35 = (uint *)(local_1f8 + 0x10);
      if (local_1d8 != (uint *)0x0) {
        puVar35 = local_1d8;
      }
      uVar36 = *puVar35;
      iStack_4f0 = 0;
      local_508 = 0;
      while (uVar36 == 0) {
        iStack_4f0 = iStack_4f0 + 0x20;
        lVar40 = (longlong)local_508;
        local_508 = local_508 + 1;
        if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_508) {
          uStack_4f4 = local_1d0;
          goto LAB_1436ecf2f;
        }
        uVar36 = (puVar35 + 1)[lVar40];
      }
      uStack_504 = -uVar36 & uVar36;
      uVar29 = (ulonglong)uStack_504 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      local_388 = (int)lVar40;
      uStack_4f4 = iStack_4f0 + -1 + local_388;
      if ((int)local_1d0 < (int)uStack_4f4) {
        uStack_4f4 = local_1d0;
      }
    }
LAB_1436ecf2f:
    local_4f8 = 0xffffffff;
    TStack_4c0._padding_ = CONCAT44(uStack_504,local_508);
    local_4c8 = (longlong *)local_1f8;
    TStack_4c0.CurrentBitIndex = uStack_4f4;
    TStack_4c0.UnvisitedBitMask = 0xffffffff;
    TStack_4c0._28_4_ = uStack_4ec;
    TStack_4c0.BaseBitIndex = iStack_4f0;
    bVar26 = (byte)local_1d0 & 0x1f;
    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,local_1f8._8_4_ - local_1c4);
    local_458._padding_._0_4_ = (int)local_1d0 >> 5;
    local_458._padding_._4_4_ = 1 << bVar26;
    local_458.BaseBitIndex = local_1d0 & 0xffffffe0;
    local_458.UnvisitedBitMask = -1 << bVar26;
    local_458.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
    local_458.CurrentBitIndex = local_1d0;
    uStack_338 = uStack_4a0;
    TStack_4c0.Array = pTStack_500;
    local_360 = local_4c8;
    TStack_358._padding_ = TStack_4c0._padding_;
    TStack_358.Array = pTStack_500;
    TStack_358._16_8_ = TStack_4c0._16_8_;
    TStack_358._24_8_ = TStack_4c0._24_8_;
    if (((int)local_1d0 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar30 != local_1d0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_458);
    }
    iVar14 = local_458.CurrentBitIndex;
    pTVar8 = local_458.Array;
    local_270 = CONCAT44(local_458._padding_._4_4_,(int)local_458._padding_);
    local_260 = CONCAT44(local_458.CurrentBitIndex,local_458.UnvisitedBitMask);
    uStack_258 = CONCAT44(local_458._28_4_,local_458.BaseBitIndex);
    pTStack_268 = local_458.Array;
    while( true ) {
      plVar5 = local_360;
      if ((int)local_360[1] - *(int *)((longlong)local_360 + 0x34) != (int)uStack_338) {
        local_5b6[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b6);
      }
      this = local_598;
      if (((TStack_358.CurrentBitIndex == iVar14) && (TStack_358.Array == pTVar8)) &&
         (plVar5 == (longlong *)local_1f8)) break;
      pFVar3 = (FString *)(*plVar5 + (longlong)TStack_358.CurrentBitIndex * 0x18);
      ::operator<<(param_1,pFVar3);
      pTVar24 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                        *)pTVar2,pFVar3);
      if ((pTVar24 == (TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
                (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&pTVar24->field_0x10);
      TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
    }
    ::operator<<(param_1,&local_598->FileId);
    local_1b0 = 0;
    if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1f8);
  }
  else {
    local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_518.ArrayNum = 0;
    local_518.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_518);
    local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.Data.ArrayNum = 0;
    local_468.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_468);
    local_2c0.ArrayMax = 0;
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>(param_1,&local_2c0);
    plVar5 = *(longlong **)&param_1->field_0x8;
    local_580 = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_580,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_580);
      }
    }
    else {
      local_580 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    local_478.A = 0;
    local_478.B = 0;
    local_478.C = 0;
    local_478.D = 0;
    ::operator<<(param_1,&local_478);
    if (0 < (this->FileData).ArrayNum) {
      TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
               *)&this->ModelData);
      local_108.SecondaryData = (ForElementType<FString>)0x0;
      local_60[0] = 0;
      local_60[1] = 10;
      pTVar22 = GetTargetRuntimes(this,&local_218);
      if (pTVar22->ArrayNum == 0) {
        this_00 = UE::NNE::FRegistry::GetInstance();
        UE::NNE::FRegistry::GetAllNames(this_00,&local_4e8);
        if (local_4e8.ArrayNum != 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                             (0x10,8,local_4e8.ArrayNum,&local_108,(int *)local_60,
                              (int *)(local_60 + 1));
          FVar38 = (ForElementType<FString>)&local_108;
          if (local_108.SecondaryData != (ForElementType<FString>)0x0) {
            FVar38 = local_108.SecondaryData;
          }
          memmove((FString *)((longlong)iVar14 * 0x10 + (longlong)FVar38),
                  local_4e8.AllocatorInstance.Data,(longlong)local_4e8.ArrayNum << 4);
          local_4e8.ArrayNum = 0;
        }
        DestructItems<FString,int>((FString *)local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum);
        if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.AllocatorInstance.Data);
        }
      }
      else {
        pTVar22 = GetTargetRuntimes(this,&local_208);
        iVar14 = pTVar22->ArrayNum;
        if (iVar14 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else if (iVar14 == 0) goto LAB_1436ec91d;
        iVar15 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                           (0x10,8,iVar14,&local_108,(int *)local_60,(int *)(local_60 + 1));
        FVar38 = (ForElementType<FString>)&local_108;
        if (local_108.SecondaryData != (ForElementType<FString>)0x0) {
          FVar38 = local_108.SecondaryData;
        }
        ConstructItems<FString,FString,int>
                  ((FString *)((longlong)iVar15 * 0x10 + (longlong)FVar38),pTVar22->DataPtr,iVar14);
      }
LAB_1436ec91d:
      local_158.Elements._0_8_ = 0;
      local_158.Elements._8_8_ = 0;
      local_158.Elements._32_8_ = 0;
      local_158.Elements._40_4_ = 0;
      local_158.Elements._44_4_ = 0x80;
      local_158.Elements._48_4_ = 0xffffffff;
      local_158.Elements._52_4_ = 0;
      local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_158.HashSize = 0;
      local_1a8._0_8_ = 0;
      local_1a8._8_8_ = 0;
      local_188 = 0;
      local_180 = 0;
      local_17c = 0x80;
      local_178 = 0xffffffff;
      local_174 = 0;
      local_168 = (ForElementType<FSetElementId>)0x0;
      local_160 = 0;
      TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
      ::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
                  *)&this->AdditionalFileData,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1a8);
      local_438.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
      local_438.UnvisitedBitMask = 0xffffffff;
      local_438._padding_._0_4_ = 0;
      local_438._padding_._4_4_ = 1;
      local_438.CurrentBitIndex = 0;
      local_438.BaseBitIndex = 0;
      if (local_180 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_438);
      }
      TStack_4c0._padding_ = CONCAT44(local_438._padding_._4_4_,(undefined4)local_438._padding_);
      local_4c8 = (longlong *)local_1a8;
      TStack_4c0.CurrentBitIndex = local_438.CurrentBitIndex;
      TStack_4c0.UnvisitedBitMask = local_438.UnvisitedBitMask;
      TStack_4c0._28_4_ = local_438._28_4_;
      TStack_4c0.BaseBitIndex = local_438.BaseBitIndex;
      local_280 = local_1a8._8_4_ - local_174;
      local_2a8._16_8_ = local_438.Array;
      uStack_4a0 = CONCAT44(uStack_27c,local_280);
      TStack_4c0.Array = local_438.Array;
      local_2a8._0_8_ = local_4c8;
      local_2a8._8_8_ = TStack_4c0._padding_;
      local_2a8._24_8_ = TStack_4c0._16_8_;
      local_2a8._32_8_ = TStack_4c0._24_8_;
      pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_2a8,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),local_180);
      local_270 = pTVar23->_padding_;
      pTVar8 = pTVar23->Array;
      uVar9._0_4_ = pTVar23->UnvisitedBitMask;
      uVar9._4_4_ = pTVar23->CurrentBitIndex;
      uStack_258 = *(undefined8 *)&pTVar23->BaseBitIndex;
      pTStack_268 = pTVar8;
      local_260 = uVar9;
      while( true ) {
        plVar5 = local_4c8;
        if ((int)local_4c8[1] - *(int *)((longlong)local_4c8 + 0x34) != (int)uStack_4a0) {
          local_5b8 = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b8);
        }
        if (((TStack_4c0.CurrentBitIndex == uVar9._4_4_) && (TStack_4c0.Array == pTVar8)) &&
           (plVar5 == (longlong *)local_1a8)) break;
        pFVar3 = (FString *)(*plVar5 + (longlong)TStack_4c0.CurrentBitIndex * 0x18);
        pTVar24 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
                          *)&this->AdditionalFileData,pFVar3);
        if ((pTVar24 == (TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *)0x0)
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_328 = &pTVar24->field_0x10;
        local_330 = pFVar3;
        TSet<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&>_>
                  (&local_158,
                   (TPairInitializer<FString_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_&>
                    *)(local_3e8 + 4),(bool *)&local_330);
        TStack_4c0.UnvisitedBitMask = TStack_4c0.UnvisitedBitMask & ~TStack_4c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c0);
      }
      uVar29 = (ulonglong)(int)local_60[0];
      local_5ac = local_60[0];
      FVar38 = (ForElementType<FString>)&local_108;
      if (local_108.SecondaryData != (ForElementType<FString>)0x0) {
        FVar38 = local_108.SecondaryData;
      }
      FVar39 = (ForElementType<FString>)(uVar29 * 0x10 + (longlong)FVar38);
      uVar32 = uVar29;
      while( true ) {
        if ((int)uVar29 != (int)uVar32) {
          local_5b7 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_5b7);
        }
        if (FVar38 == FVar39) break;
        pIVar27 = (ITargetPlatform *)0x0;
        if (*(longlong *)&param_1->field_0x68 != 0) {
          pIVar27 = *(ITargetPlatform **)(*(longlong *)&param_1->field_0x68 + 8);
        }
        UE::NNE::ModelData::CreateModelData
                  (&local_4d8,(FString *)FVar38,&this->FileType,&this->FileData,
                   (TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
                    *)&local_158,&this->FileId,pIVar27);
        if (local_4d8.Object != (FSharedModelData *)0x0) {
          if ((local_4d8.Object == (FSharedModelData *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar12 = local_4d8.Object;
          pFVar34 = ((local_4d8.Object)->Data).Owner.Owner;
          pIVar27 = (ITargetPlatform *)0x0;
          if (pFVar34 != (FBufferOwner *)0x0) {
            if (((ulonglong)pFVar34->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
              (**(code **)(pFVar34->_padding_ + 8))(pFVar34);
            }
            pIVar27 = (ITargetPlatform *)pFVar34->Size;
          }
          pFVar34 = (pFVar12->Data).Owner.Owner;
          if ((pFVar34 != (FBufferOwner *)0x0) &&
             (((ulonglong)pFVar34->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
            (**(code **)(pFVar34->_padding_ + 8))();
          }
          if ((longlong)pIVar27 < 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L"");
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else if (0 < (longlong)pIVar27) {
            local_2e8 = &local_4d8;
            local_2f0 = FVar38;
            TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FString_const_&,TSharedPtr<UE::NNE::FSharedModelData,1>_const_&>_>
                      ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                        *)&this->ModelData,&local_3e0,(bool *)&local_2f0);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d8.SharedReferenceCount.ReferenceController);
        uVar29 = (ulonglong)local_60[0];
        FVar38 = (ForElementType<FString>)((longlong)FVar38 + 0x10);
        uVar32 = (ulonglong)local_5ac;
      }
      local_160 = 0;
      if (local_168 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1a8);
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<unsigned_char_const_,__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      FVar38 = (ForElementType<FString>)&local_108;
      if (local_108.SecondaryData != (ForElementType<FString>)0x0) {
        FVar38 = local_108.SecondaryData;
      }
      DestructItems<FString,int>((FString *)FVar38,local_60[0]);
      if (local_108.SecondaryData != (ForElementType<FString>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
    }
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
    if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.AllocatorInstance.Data);
    }
  }
  uVar29 = 0;
  this_01 = (UNNEModelData *)&this->ModelData;
  local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_570.ArrayNum = 0;
  local_570.ArrayMax = 0;
  local_598 = this_01;
  TMapBase<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
              *)this_01,&local_570);
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_5b0 = local_570.ArrayNum;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5b0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_5b0);
    }
  }
  else {
    local_5b0 = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  local_5ac = 0;
  uVar32 = uVar29;
  if (0 < (int)local_5b0) {
    do {
      uVar36 = (uint)uVar32;
      uVar42 = ~uVar36 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar36 < local_570.ArrayNum) {
        uVar30 = uVar42;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_558 = (longlong)(int)uVar36;
      lVar40 = local_558 * 0x10;
      local_408 = lVar40;
      ::operator<<(param_1,(FString *)(local_570.AllocatorInstance.Data + lVar40));
      uVar16 = 0;
      uVar30 = uVar16;
      if ((int)uVar36 < local_570.ArrayNum) {
        uVar30 = uVar42;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar25 = TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                        *)this_01,(FString *)(local_570.AllocatorInstance.Data + lVar40));
      if ((pTVar25 == (TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)&pTVar25->field_0x10 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_578[0] = *(uint *)(*(longlong *)&pTVar25->field_0x10 + 8);
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_578,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_578);
        }
      }
      else {
        local_578[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      uVar30 = uVar16;
      if ((int)uVar36 < local_570.ArrayNum) {
        uVar30 = uVar42;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar25 = TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                        *)local_598,(FString *)(local_570.AllocatorInstance.Data + lVar40));
      if ((pTVar25 == (TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)&pTVar25->field_0x10 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)&pTVar25->field_0x10;
      plVar5 = (longlong *)*plVar6;
      uVar32 = uVar29;
      if (plVar5 != (longlong *)0x0) {
        if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        uVar32 = plVar5[2];
      }
      plVar6 = (longlong *)*plVar6;
      if ((plVar6 != (longlong *)0x0) && (((ulonglong)plVar6[3] >> 0x3c & 4) == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      if (((longlong)uVar32 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((ulonglong *)plVar5[1] < (ulonglong *)*plVar5 + 1) {
        local_560 = uVar32;
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_560,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_560);
        }
      }
      else {
        local_560 = *(ulonglong *)*plVar5;
        *plVar5 = *plVar5 + 8;
      }
      uVar32 = local_560;
      pcVar7 = *(code **)(*(longlong *)param_1 + 0x188);
      if ((int)local_5ac < local_570.ArrayNum) {
        uVar16 = uVar42;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar25 = TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                        *)local_598,(FString *)(local_570.AllocatorInstance.Data + local_408));
      if ((pTVar25 == (TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)&pTVar25->field_0x10 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)&pTVar25->field_0x10;
      plVar5 = (longlong *)*plVar6;
      uVar41 = uVar29;
      if (plVar5 != (longlong *)0x0) {
        if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        uVar41 = plVar5[2];
      }
      plVar6 = (longlong *)*plVar6;
      uVar33 = uVar29;
      if (plVar6 != (longlong *)0x0) {
        if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        uVar33 = plVar6[1];
      }
      if (((longlong)uVar41 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (*pcVar7)(param_1,uVar33,uVar32);
      local_5ac = local_5ac + 1;
      uVar32 = (ulonglong)local_5ac;
      this_01 = local_598;
    } while ((int)local_5ac < (int)local_5b0);
  }
  DestructItems<FString,int>((FString *)local_570.AllocatorInstance.Data,local_570.ArrayNum);
  FVar28.Data = local_570.AllocatorInstance.Data;
LAB_1436ed5f1:
  if (FVar28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar28.Data);
  }
  return;
}

// Serialize @ 1436ed630

void __thiscall UNNEModelData::Serialize(UNNEModelData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetTargetRuntimes @ 1436ed660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNNEModelData::SetTargetRuntimes(UNNEModelData *this,TArrayView<FString_const_,int> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FString> FVar9;
  ForElementType<FString> FVar10;
  bool bVar11;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  TArray<FString,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> local_f0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pTVar1 = &this->TargetRuntimes;
  DestructItems<FString,int>
            ((FString *)(pTVar1->AllocatorInstance).Data,(this->TargetRuntimes).ArrayNum);
  iVar3 = param_1->ArrayNum;
  piVar2 = &(this->TargetRuntimes).ArrayMax;
  (this->TargetRuntimes).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,param_1->DataPtr,iVar3);
  }
  if (0 < iVar3) {
    local_f0.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 10;
    TMapBase<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
    ::GetKeys<TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
              ((TMapBase<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>_>
                *)&this->ModelData,&local_f0);
    iVar3 = local_f0.ArrayNum;
    FVar9 = (ForElementType<FString>)&local_f0;
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar9 = local_f0.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<FString>)((longlong)local_f0.ArrayNum * 0x10 + (longlong)FVar9);
    while( true ) {
      if (local_f0.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8)
        ;
      }
      if (FVar9 == FVar10) break;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar8 = pFVar7 + (longlong)(this->TargetRuntimes).ArrayNum * 0x10;
      for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
        iVar4 = *(int *)(pFVar7 + 8);
        if (iVar4 == *(int *)((longlong)FVar9 + 8)) {
          if (iVar4 < 2) goto LAB_1436ed80b;
          iVar4 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar7,*(wchar_t **)FVar9);
          bVar11 = iVar4 == 0;
        }
        else {
          bVar11 = iVar4 + *(int *)((longlong)FVar9 + 8) == 1;
        }
        if (bVar11) goto LAB_1436ed80b;
      }
      if (*(int *)&(this->ModelData).field_0x8 != *(int *)&(this->ModelData).field_0x34) {
        iVar4 = *(int *)((longlong)FVar9 + 8) + -1;
        if (*(int *)((longlong)FVar9 + 8) == 0) {
          pwVar6 = L"";
          iVar4 = 0;
        }
        else {
          pwVar6 = *(wchar_t **)FVar9;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
        TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
                    *)&this->ModelData,uVar5,(FString *)FVar9);
      }
LAB_1436ed80b:
      FVar9 = (ForElementType<FString>)((longlong)FVar9 + 0x10);
    }
    TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
    ::Compact((TSet<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UE::NNE::FSharedModelData,1>,0>,FDefaultSetAllocator>
               *)&this->ModelData);
    FVar9 = (ForElementType<FString>)&local_f0;
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar9 = local_f0.AllocatorInstance.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar9,local_f0.ArrayNum);
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// StaticRegisterNativesUNNEModelData @ 1436ed8a0

void __cdecl UNNEModelData::StaticRegisterNativesUNNEModelData(void)

{
  return;
}

