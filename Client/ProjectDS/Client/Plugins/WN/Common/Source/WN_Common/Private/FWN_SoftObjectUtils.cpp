// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// GetObjectPath @ 1494a0c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FWN_SoftObjectUtils::GetObjectPath(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FModuleManager *this;
  FString *pFVar8;
  IModuleInterface *pIVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  FAssetData *pFVar15;
  undefined1 auStackY_198 [32];
  undefined1 local_157 [7];
  FString local_150;
  FName local_140;
  FString local_138;
  FSoftObjectPath local_128;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  longlong local_a8 [2];
  longlong local_98;
  FAssetDataTagMapSharedView local_70 [2];
  TReferenceControllerBase<1> *local_60;
  void *local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140 = (FName)((ulonglong)local_140 & 0xffffffff00000000);
  uVar12 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar7 = ::FName::FName(&local_f8,"AssetRegistry");
    local_140 = *pFVar7;
    this = FModuleManager::Get();
    bVar6 = FModuleManager::IsModuleLoaded(this,local_140);
    if (!bVar6) {
      ::FName::ToString(&local_140,&local_e8);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    pIVar9 = FModuleManager::GetModule(this,local_140);
    sAssetRegistry = (IAssetRegistry *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
    _Init_thread_footer(&::_TSS0);
  }
  FPaths::GetBaseFilename(&local_150,param_1,false);
  if (!param_2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      atexit(`FWN_SoftObjectUtils::GetObjectPath'::__l5::
             _dynamic_atexit_destructor_for__sAssetDatas__);
      _Init_thread_footer(&::_TSS1);
    }
    DestructItems<FAssetData,int>
              ((FAssetData *)sAssetDatas.AllocatorInstance.Data,sAssetDatas.ArrayNum);
    sAssetDatas.ArrayNum = 0;
    if (sAssetDatas.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&sAssetDatas.AllocatorInstance,0,&sAssetDatas.ArrayMax);
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar13.Data = local_150.Data.AllocatorInstance.Data;
    }
    pcVar4 = *(code **)((longlong)*sAssetRegistry + 0x18);
    pFVar7 = ::FName::FName(&local_f0,(wchar_t *)FVar13.Data);
    (*pcVar4)(sAssetRegistry,*pFVar7,&sAssetDatas,0);
    iVar3 = sAssetDatas.ArrayNum;
    uVar12 = (ulonglong)sAssetDatas.ArrayNum;
    if (sAssetDatas.ArrayNum != 0) {
      pFVar15 = (FAssetData *)(sAssetDatas.AllocatorInstance.Data + uVar12 * 0x68);
      FVar13 = sAssetDatas.AllocatorInstance;
      do {
        if ((int)uVar12 != iVar3) {
          local_157[0] = 0;
          `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_157);
        }
        if ((FAssetData *)FVar13.Data == pFVar15) goto LAB_1494a0f7c;
        pUVar10 = FAssetData::GetClass((FAssetData *)FVar13.Data,No);
        if (pUVar10 != (UClass *)0x0) {
          pUVar11 = Z_Construct_UClass_UBlueprint_NoRegister();
          if (pUVar11 != (UClass *)0x0) {
            iVar2 = (int)pUVar11->_padding_;
            if (((int)pUVar10->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_1494a0f5a;
          }
          pUVar11 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
          if (pUVar11 != (UClass *)0x0) {
            iVar2 = (int)pUVar11->_padding_;
            if (((int)pUVar10->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_1494a0f5a;
          }
        }
        uVar12 = (ulonglong)(uint)sAssetDatas.ArrayNum;
        FVar13.Data = FVar13.Data + 0x68;
      } while( true );
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<952262122891378725>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\WN_SoftObjectUtils.cpp"
                       ,0x25,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
    if (2 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
    ::FString::FString(__return_storage_ptr__,param_1);
    goto LAB_1494a1156;
  }
LAB_1494a0f7c:
  FPaths::GetBaseFilename(&local_138,param_1,true);
  pwVar14 = L"%s.%s";
  bVar5 = false;
  bVar6 = true;
  pFVar8 = &local_d8;
LAB_1494a0f9c:
  ::FString::PrintfImpl(pFVar8,pwVar14);
  _Src = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar8->Data).ArrayNum;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((bVar6) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (param_2) {
    local_128.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_128.AssetPath.PackageName.Number = 0;
    local_128.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_128.AssetPath.AssetName.Number = 0;
    local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.SubPathString.Data.ArrayNum = 0;
    local_128.SubPathString.Data.ArrayMax = 0;
    pcVar4 = *(code **)((longlong)*sAssetRegistry + 0x78);
    iStack_100 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_100 = 0;
    }
    local_b8._12_4_ = uStack_fc;
    local_b8.Size = iStack_100;
    local_108 = _Src;
    local_b8.DataPtr = (wchar_t *)_Src;
    FSoftObjectPath::SetPath(&local_128,&local_b8);
    (*pcVar4)(sAssetRegistry,local_a8,&local_128);
    if (local_128.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.SubPathString.Data.AllocatorInstance.Data);
    }
    if ((local_a8[0] == 0) || (local_98 == 0)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<952262122891378753>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\WN_SoftObjectUtils.cpp"
                         ,0x41,"false");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
      if (2 < (byte)Common._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
      }
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_70);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
LAB_1494a1156:
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
LAB_1494a0f5a:
  FPaths::GetBaseFilename(&local_138,param_1,true);
  pwVar14 = L"%s.%s_C";
  bVar5 = true;
  bVar6 = false;
  pFVar8 = &local_c8;
  goto LAB_1494a0f9c;
}

// GetObjectPath @ 1494a11a0

FString * __cdecl
FWN_SoftObjectUtils::GetObjectPath(FString *__return_storage_ptr__,FName param_1,bool param_2)

{
  FString *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  GetObjectPath(__return_storage_ptr__,pFVar1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

