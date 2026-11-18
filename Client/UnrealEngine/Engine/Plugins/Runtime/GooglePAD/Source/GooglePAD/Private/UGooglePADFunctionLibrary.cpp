// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GooglePAD
// Functions: 46

// StaticClass @ 14f032310

UClass * __cdecl UGooglePADFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GooglePAD",L"GooglePADFunctionLibrary",
               &Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUGooglePADFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGooglePADFunctionLibrary>,
               InternalVTableHelperCtorCaller<UGooglePADFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton;
}

// UGooglePADFunctionLibrary @ 14f032cf0

UGooglePADFunctionLibrary * __thiscall
UGooglePADFunctionLibrary::UGooglePADFunctionLibrary
          (UGooglePADFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGooglePADFunctionLibrary__6B_;
  return this;
}

// UGooglePADFunctionLibrary @ 14f032d20

UGooglePADFunctionLibrary * __thiscall
UGooglePADFunctionLibrary::UGooglePADFunctionLibrary
          (UGooglePADFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGooglePADFunctionLibrary__6B_;
  return this;
}

// ~UGooglePADFunctionLibrary @ 14f032df0

void __thiscall
UGooglePADFunctionLibrary::~UGooglePADFunctionLibrary(UGooglePADFunctionLibrary *this)

{
  *(undefined ***)this = &___7UGooglePADFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CancelDownload @ 14f032e70

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::CancelDownload(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return AssetPack_UNAVAILABLE;
}

// ConvertAssetPackNames @ 14f032ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char ** __cdecl
UGooglePADFunctionLibrary::ConvertAssetPackNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  char **ppcVar5;
  size_t sVar6;
  char *_Dst;
  longlong lVar7;
  wchar_t *_Str;
  ulong64 _Size;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar7 = (longlong)param_1->ArrayNum;
  local_e8 = lVar7;
  ppcVar5 = FMemory::Malloc(lVar7 * 8,0);
  uVar8 = 0;
  if (0 < lVar7) {
    lVar10 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_f8 = (longlong)(int)uVar8;
        local_f0 = (longlong)param_1->ArrayNum;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          ppcVar5 = (char **)(*pcVar2)();
          return ppcVar5;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar7 + 8) == 0) {
        _Str = L"";
LAB_14f032fb0:
        local_58.Data = (FScriptContainerElement *)0x0;
        sVar6 = wcslen(_Str);
        local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar6);
        uVar4 = local_48 + 1;
        uVar9 = uVar4;
        if (uVar4 < 0x81) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14f032fef;
          }
        }
        else {
LAB_14f032fef:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,1);
        }
        local_50 = local_d8;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          local_50 = local_58.Data;
        }
        UE::Core::Private::Convert((uchar *)local_50,uVar4,_Str,(int)sVar6 + 1);
      }
      else {
        _Str = *(wchar_t **)(pFVar1 + lVar7);
        local_58.Data = (FScriptContainerElement *)0x0;
        if (_Str != (wchar_t *)0x0) goto LAB_14f032fb0;
        local_48 = 0;
        local_50 = (FScriptContainerElement *)0x0;
      }
      pFVar1 = local_50;
      if (local_50 == (FScriptContainerElement *)0x0) {
        _Dst = (char *)0x0;
      }
      else {
        sVar6 = strlen((char *)local_50);
        _Size = (ulong64)((int)sVar6 + 1);
        _Dst = FMemory::Malloc(_Size,0);
        memcpy(_Dst,pFVar1,_Size);
      }
      ppcVar5[lVar10] = _Dst;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar10 < local_e8);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return ppcVar5;
}

// GetAssetPackLocation @ 14f033130

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::GetAssetPackLocation(FString *param_1,int *param_2)

{
  *param_2 = 0;
  return AssetPack_UNAVAILABLE;
}

// GetAssetsPath @ 14f033140

FString * __cdecl
UGooglePADFunctionLibrary::GetAssetsPath(FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetBytesDownloaded @ 14f033170

int __cdecl UGooglePADFunctionLibrary::GetBytesDownloaded(int param_1)

{
  return 0;
}

// GetDownloadState @ 14f033180

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::GetDownloadState(FString *param_1,int *param_2)

{
  *param_2 = 0;
  return AssetPack_UNAVAILABLE;
}

// GetDownloadStatus @ 14f033190

EGooglePADDownloadStatus __cdecl UGooglePADFunctionLibrary::GetDownloadStatus(int param_1)

{
  return AssetPack_UNKNOWN;
}

// GetPrivateStaticClass @ 14f0331a0

UClass * __cdecl UGooglePADFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GooglePAD",L"GooglePADFunctionLibrary",
               &Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUGooglePADFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGooglePADFunctionLibrary>,
               InternalVTableHelperCtorCaller<UGooglePADFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton;
}

// GetShowCellularDataConfirmationStatus @ 14f033260

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus
          (EGooglePADCellularDataConfirmStatus *param_1)

{
  *param_1 = AssetPack_CONFIRM_UNKNOWN;
  return AssetPack_UNAVAILABLE;
}

// GetShowConfirmationDialogStatus @ 14f033270

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::GetShowConfirmationDialogStatus
          (EGooglePADConfirmationDialogStatus *param_1)

{
  *param_1 = AssetPack_CONFIRMATION_DIALOG_UNKNOWN;
  return AssetPack_UNAVAILABLE;
}

// GetStorageMethod @ 14f033280

EGooglePADStorageMethod __cdecl UGooglePADFunctionLibrary::GetStorageMethod(int param_1)

{
  return AssetPack_STORAGE_UNKNOWN;
}

// GetTotalBytesToDownload @ 14f033290

int __cdecl UGooglePADFunctionLibrary::GetTotalBytesToDownload(int param_1)

{
  return 0;
}

// HandleApplicationHasEnteredForeground @ 14f0332a0

void __cdecl UGooglePADFunctionLibrary::HandleApplicationHasEnteredForeground(void)

{
  return;
}

// HandleApplicationWillEnterBackground @ 14f0332b0

void __cdecl UGooglePADFunctionLibrary::HandleApplicationWillEnterBackground(void)

{
  return;
}

// Initialize @ 14f0332c0

void __cdecl UGooglePADFunctionLibrary::Initialize(void)

{
  return;
}

// ReleaseAssetPackLocation @ 14f033300

void __cdecl UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int param_1)

{
  return;
}

// ReleaseAssetPackNames @ 14f033310

void __cdecl UGooglePADFunctionLibrary::ReleaseAssetPackNames(char **param_1,int param_2)

{
  char **ppcVar1;
  ulonglong uVar2;
  
  if (param_1 != (char **)0x0) {
    if (0 < param_2) {
      uVar2 = (ulonglong)(uint)param_2;
      ppcVar1 = param_1;
      do {
        if (*ppcVar1 != (char *)0x0) {
          FMemory::Free(*ppcVar1);
        }
        ppcVar1 = ppcVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FMemory::Free(param_1);
  }
  return;
}

// ReleaseDownloadState @ 14f033370

void __cdecl UGooglePADFunctionLibrary::ReleaseDownloadState(int param_1)

{
  return;
}

// RequestDownload @ 14f033380

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::RequestDownload(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return AssetPack_UNAVAILABLE;
}

// RequestInfo @ 14f0333b0

EGooglePADErrorCode __cdecl
UGooglePADFunctionLibrary::RequestInfo(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return AssetPack_UNAVAILABLE;
}

// RequestRemoval @ 14f0333e0

EGooglePADErrorCode __cdecl UGooglePADFunctionLibrary::RequestRemoval(FString *param_1)

{
  return AssetPack_UNAVAILABLE;
}

// ShowCellularDataConfirmation @ 14f0333f0

EGooglePADErrorCode __cdecl UGooglePADFunctionLibrary::ShowCellularDataConfirmation(void)

{
  return AssetPack_UNAVAILABLE;
}

// ShowConfirmationDialog @ 14f033400

EGooglePADErrorCode __cdecl UGooglePADFunctionLibrary::ShowConfirmationDialog(void)

{
  return AssetPack_UNAVAILABLE;
}

// Shutdown @ 14f033410

void __cdecl UGooglePADFunctionLibrary::Shutdown(void)

{
  return;
}

// StaticRegisterNativesUGooglePADFunctionLibrary @ 14f033420

void __cdecl UGooglePADFunctionLibrary::StaticRegisterNativesUGooglePADFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCancelDownload @ 14f033520

void __cdecl
UGooglePADFunctionLibrary::execCancelDownload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int iVar3;
  FString *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_20,0,&local_18,(int)local_20,&local_c);
    ConstructItems<FString,FString,int>(local_18.Data,pFVar2,iVar3);
  }
  DestructItems<FString,int>((FString *)local_18.Data,local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  *(undefined1 *)param_3 = 2;
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetAssetPackLocation @ 14f033650

void __cdecl
UGooglePADFunctionLibrary::execGetAssetPackLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  *(undefined1 *)param_3 = 2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAssetsPath @ 14f033740

void __cdecl
UGooglePADFunctionLibrary::execGetAssetsPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::FString(&local_18,L"");
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
  return;
}

// execGetBytesDownloaded @ 14f033820

void __cdecl
UGooglePADFunctionLibrary::execGetBytesDownloaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDownloadState @ 14f0338a0

void __cdecl
UGooglePADFunctionLibrary::execGetDownloadState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  *(undefined1 *)param_3 = 2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDownloadStatus @ 14f033990

void __cdecl
UGooglePADFunctionLibrary::execGetDownloadStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetShowCellularDataConfirmationStatus @ 14f033a10

void __cdecl
UGooglePADFunctionLibrary::execGetShowCellularDataConfirmationStatus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar2 = '\0';
  *(undefined1 *)param_3 = 2;
  return;
}

// execGetShowConfirmationDialogStatus @ 14f033ab0

void __cdecl
UGooglePADFunctionLibrary::execGetShowConfirmationDialogStatus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar2 = '\0';
  *(undefined1 *)param_3 = 2;
  return;
}

// execGetStorageMethod @ 14f033b50

void __cdecl
UGooglePADFunctionLibrary::execGetStorageMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 2;
  return;
}

// execGetTotalBytesToDownload @ 14f033bd0

void __cdecl
UGooglePADFunctionLibrary::execGetTotalBytesToDownload
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execReleaseAssetPackLocation @ 14f033c50

void __cdecl
UGooglePADFunctionLibrary::execReleaseAssetPackLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execReleaseDownloadState @ 14f033cc0

void __cdecl
UGooglePADFunctionLibrary::execReleaseDownloadState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execRequestDownload @ 14f033d30

void __cdecl
UGooglePADFunctionLibrary::execRequestDownload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int iVar3;
  FString *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_20,0,&local_18,(int)local_20,&local_c);
    ConstructItems<FString,FString,int>(local_18.Data,pFVar2,iVar3);
  }
  DestructItems<FString,int>((FString *)local_18.Data,local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  *(undefined1 *)param_3 = 2;
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execRequestInfo @ 14f033e60

void __cdecl
UGooglePADFunctionLibrary::execRequestInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int iVar3;
  FString *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_20,0,&local_18,(int)local_20,&local_c);
    ConstructItems<FString,FString,int>(local_18.Data,pFVar2,iVar3);
  }
  DestructItems<FString,int>((FString *)local_18.Data,local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  *(undefined1 *)param_3 = 2;
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execRequestRemoval @ 14f033f90

void __cdecl
UGooglePADFunctionLibrary::execRequestRemoval(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
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
  *(undefined1 *)param_3 = 2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execShowCellularDataConfirmation @ 14f034030

void __cdecl
UGooglePADFunctionLibrary::execShowCellularDataConfirmation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 2;
  return;
}

// execShowConfirmationDialog @ 14f034050

void __cdecl
UGooglePADFunctionLibrary::execShowConfirmationDialog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 2;
  return;
}

