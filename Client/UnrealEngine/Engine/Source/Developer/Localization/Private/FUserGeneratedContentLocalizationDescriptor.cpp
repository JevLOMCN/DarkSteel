// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// StaticStruct @ 146b35ba0

UScriptStruct * __cdecl FUserGeneratedContentLocalizationDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                         (UObject *)pUVar1,L"UserGeneratedContentLocalizationDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.
         OuterSingleton;
}

// FromJsonFile @ 146b60c20

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::FromJsonFile
          (FUserGeneratedContentLocalizationDescriptor *this,wchar_t *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FFileHelper::LoadFileToString(&local_18,param_1,None,0);
  if (bVar1) {
    bVar1 = FJsonObjectConverter::
            JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor>
                      (&local_18,this,0,0,false,(FText *)0x0,
                       (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                        *)0x0);
    if (bVar1) {
      bVar1 = true;
      goto LAB_146b60c79;
    }
  }
  bVar1 = false;
LAB_146b60c79:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// FromJsonObject @ 146b60ca0

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::FromJsonObject
          (FUserGeneratedContentLocalizationDescriptor *this,
          TSharedRef<FJsonObject_const_,1> *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  TSharedRef<FJsonObject,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                         (UObject *)pUVar2,L"UserGeneratedContentLocalizationDescriptor");
  }
  bVar1 = FJsonObjectConverter::JsonObjectToUStruct
                    (&local_18,
                     (UStruct *)
                     Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.
                     OuterSingleton,this,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// FromJsonString @ 146b60d50

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::FromJsonString
          (FUserGeneratedContentLocalizationDescriptor *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = FJsonObjectConverter::
          JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor>
                    (param_1,this,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  return bVar1;
}

// InitializeFromProject @ 146b7a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUserGeneratedContentLocalizationDescriptor::InitializeFromProject
          (FUserGeneratedContentLocalizationDescriptor *this,ELocalizedTextSourceCategory param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTextLocalizationManager *pFVar4;
  FUserGeneratedContentLocalizationDescriptor *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  ELocalizationLoadFlags EVar7;
  undefined1 auStack_118 [32];
  <lambda_1> local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  FString local_e0;
  FCultureFilter local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  EVar7 = None;
  if (param_1 == Game) {
    EVar7 = Game;
  }
  else if (param_1 == Engine) {
    EVar7 = Engine;
  }
  else if (param_1 == Editor) {
    EVar7 = Editor;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\UserGeneratedContentLocalization.cpp"
                       ,0x3b,L"Unexpected ELocalizedTextSourceCategory!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FTextLocalizationManager::Get();
  pFVar5 = (FUserGeneratedContentLocalizationDescriptor *)
           FTextLocalizationManager::GetNativeCultureName(pFVar4,&local_e0,param_1);
  if (this != pFVar5) {
    pFVar1 = (this->NativeCulture).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->NativeCulture).Data.AllocatorInstance.Data =
         (pFVar5->NativeCulture).Data.AllocatorInstance.Data;
    (pFVar5->NativeCulture).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NativeCulture).Data.ArrayNum = (pFVar5->NativeCulture).Data.ArrayNum;
    (this->NativeCulture).Data.ArrayMax = (pFVar5->NativeCulture).Data.ArrayMax;
    (pFVar5->NativeCulture).Data.ArrayNum = 0;
    (pFVar5->NativeCulture).Data.ArrayMax = 0;
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((this->NativeCulture).Data.ArrayNum < 2) {
    ::FString::operator=(&this->NativeCulture,L"en");
  }
  pFVar4 = FTextLocalizationManager::Get();
  pTVar6 = FTextLocalizationManager::GetLocalizedCultureNames(pFVar4,&local_f0,EVar7);
  this_00 = &this->CulturesToGenerate;
  if (this_00 != pTVar6) {
    DestructItems<FString,int>
              ((FString *)(this_00->AllocatorInstance).Data,(this->CulturesToGenerate).ArrayNum);
    pFVar1 = (this_00->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CulturesToGenerate).ArrayNum = pTVar6->ArrayNum;
    (this->CulturesToGenerate).ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FCultureFilter::FCultureFilter
            (&local_c8,Shipping,EVar7 | Engine,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
  local_f8.CultureFilter = &local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_FUserGeneratedContentLocalizationDescriptor::InitializeFromProject_::__l17::<lambda_1>_>
            (this_00,&local_f8);
  local_c8.DisabledCultures.HashSize = 0;
  if (local_c8.DisabledCultures.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.DisabledCultures.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.DisabledCultures.Elements);
  local_c8.EnabledCultures.HashSize = 0;
  if (local_c8.EnabledCultures.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.EnabledCultures.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_c8);
  return;
}

// ToJsonFile @ 146b8dbd0

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::ToJsonFile
          (FUserGeneratedContentLocalizationDescriptor *this,wchar_t *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  IFileManager *pIVar3;
  int iVar4;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                         (UObject *)pUVar2,L"UserGeneratedContentLocalizationDescriptor");
  }
  bVar1 = FJsonObjectConverter::UStructToJsonObjectString
                    ((UStruct *)
                     Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.
                     OuterSingleton,this,&local_28,0,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,true);
  if (bVar1) {
    pIVar3 = IFileManager::Get();
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    local_18.Size = iVar4;
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    bVar1 = FFileHelper::SaveStringToFile(&local_18,param_1,ForceUTF8,pIVar3,0);
    if (bVar1) {
      bVar1 = true;
      goto LAB_146b8dc97;
    }
  }
  bVar1 = false;
LAB_146b8dc97:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ToJsonObject @ 146b8dcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::ToJsonObject
          (FUserGeneratedContentLocalizationDescriptor *this,TSharedPtr<FJsonObject,1> *param_1)

{
  code *pcVar1;
  FJsonObject *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  UPackage *pUVar5;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonObject,1> local_28;
  
  local_28.SharedReferenceCount.ReferenceController = ::operator_new(0x60);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28.Object = (FJsonObject *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = local_28.SharedReferenceCount.ReferenceController + 1;
    (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_28.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    local_28.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&local_28.SharedReferenceCount.ReferenceController[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&local_28.SharedReferenceCount.ReferenceController[4]._padding_ + 4) =
         0;
    local_28.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    paVar6 = &(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
    pTVar7 = local_28.SharedReferenceCount.ReferenceController;
    local_28.Object = (FJsonObject *)pTVar9;
  }
  if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                         (UObject *)pUVar5,L"UserGeneratedContentLocalizationDescriptor");
  }
  bVar3 = FJsonObjectConverter::UStructToJsonObject
                    ((UStruct *)
                     Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.
                     OuterSingleton,this,&local_28,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,None);
  if (bVar3) {
    local_38.Object = (FJsonObject *)pTVar9;
    local_38.SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
  }
  else {
    local_38.Object = (FJsonObject *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  FVar8.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  pFVar2 = local_38.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (param_1 != &local_38) {
    param_1->Object = pFVar2;
    local_38.Object = (FJsonObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_38.SharedReferenceCount);
    FVar8.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  return param_1->Object != (FJsonObject *)0x0;
}

// ToJsonString @ 146b8dea0

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::ToJsonString
          (FUserGeneratedContentLocalizationDescriptor *this,FString *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                         (UObject *)pUVar2,L"UserGeneratedContentLocalizationDescriptor");
  }
  bVar1 = FJsonObjectConverter::UStructToJsonObjectString
                    ((UStruct *)
                     Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.
                     OuterSingleton,this,param_1,0,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,true);
  return bVar1;
}

// Validate @ 146b91ae0

bool __thiscall
FUserGeneratedContentLocalizationDescriptor::Validate
          (FUserGeneratedContentLocalizationDescriptor *this,
          FUserGeneratedContentLocalizationDescriptor *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_res10;
  
  this_00 = &param_1->CulturesToGenerate;
  iVar6 = 0;
  bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (this_00,&this->NativeCulture);
  if (!bVar4) {
    ::FString::operator=(&this->NativeCulture,&param_1->NativeCulture);
  }
  local_res10 = (uint)!bVar4;
  iVar1 = (this->CulturesToGenerate).ArrayNum;
  if (iVar1 != 0) {
    iVar8 = 0;
    pFVar2 = (this->CulturesToGenerate).AllocatorInstance.Data;
    bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (this_00,(FString *)pFVar2);
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          (this_00,(FString *)(pFVar2 + (longlong)iVar3 * 0x10));
      } while (bVar4 == bVar5);
      iVar7 = iVar3 - iVar6;
      if (bVar4 == false) {
        DestructItems<FString,int>((FString *)(pFVar2 + (longlong)iVar6 * 0x10),iVar7);
      }
      else {
        if (iVar8 != iVar6) {
          memmove(pFVar2 + (longlong)iVar8 * 0x10,pFVar2 + (longlong)iVar6 * 0x10,
                  (longlong)iVar7 << 4);
        }
        iVar8 = iVar8 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    iVar6 = iVar1 - iVar8;
    (this->CulturesToGenerate).ArrayNum = iVar8;
  }
  return local_res10 + iVar6 == 0;
}

