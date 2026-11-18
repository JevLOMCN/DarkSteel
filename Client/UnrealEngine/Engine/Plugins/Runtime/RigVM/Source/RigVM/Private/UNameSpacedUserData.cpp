// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 18

// StaticClass @ 14a06afd0

UClass * __cdecl UNameSpacedUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"NameSpacedUserData",
               &Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton,
               StaticRegisterNativesUNameSpacedUserData,0x100,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNameSpacedUserData>,
               InternalVTableHelperCtorCaller<UNameSpacedUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton;
}

// UNameSpacedUserData @ 14a07a8b0

UNameSpacedUserData * __thiscall
UNameSpacedUserData::UNameSpacedUserData(UNameSpacedUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UNameSpacedUserData__6B_;
  (this->NameSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameSpace).Data.ArrayNum = 0;
  (this->NameSpace).Data.ArrayMax = 0;
  *(undefined8 *)&this->CachedUserData = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedUserData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedUserData).field_0x34 = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x48 = 0;
  *(undefined8 *)&this->CachedUserDataArray = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x8 = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x20 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x28 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x34 = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x40 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  return this;
}

// UNameSpacedUserData @ 14a07a960

UNameSpacedUserData * __thiscall
UNameSpacedUserData::UNameSpacedUserData(UNameSpacedUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UNameSpacedUserData__6B_;
  (this->NameSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameSpace).Data.ArrayNum = 0;
  (this->NameSpace).Data.ArrayMax = 0;
  *(undefined8 *)&this->CachedUserData = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedUserData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedUserData).field_0x34 = 0;
  *(undefined8 *)&(this->CachedUserData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedUserData).field_0x48 = 0;
  *(undefined8 *)&this->CachedUserDataArray = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x8 = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x20 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x28 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x34 = 0;
  *(undefined8 *)&(this->CachedUserDataArray).field_0x40 = 0;
  *(undefined4 *)&(this->CachedUserDataArray).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  return this;
}

// ~UNameSpacedUserData @ 14a07c090

void __thiscall UNameSpacedUserData::~UNameSpacedUserData(UNameSpacedUserData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNameSpacedUserData__6B_;
  InvalidateCache(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
  *(undefined4 *)&(this->CachedUserDataArray).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedUserDataArray).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedUserDataArray);
  *(undefined4 *)&(this->CachedUserData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedUserData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedUserData);
  pFVar2 = (this->NameSpace).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// FindPropertyByName @ 14a093f00

FProperty * __cdecl UNameSpacedUserData::FindPropertyByName(UStruct *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  
  if (param_1 == (UStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FProperty *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = UStruct::FindPropertyByName(param_1,*param_2);
  return pFVar3;
}

// GetPrivateStaticClass @ 14a097ff0

UClass * __cdecl UNameSpacedUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"NameSpacedUserData",
               &Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton,
               StaticRegisterNativesUNameSpacedUserData,0x100,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNameSpacedUserData>,
               InternalVTableHelperCtorCaller<UNameSpacedUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameSpacedUserData.InnerSingleton;
}

// GetUserData @ 14a09bbc0

FUserData * __thiscall
UNameSpacedUserData::GetUserData(UNameSpacedUserData *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FUserData *pFVar3;
  FUserData **ppFVar4;
  
  lpCriticalSection = &this->CacheLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUserData *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar4 = TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
            ::Find((TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
                    *)&this->CachedUserData,param_1);
  if ((ppFVar4 == (FUserData **)0x0) || (pFVar3 = *ppFVar4, pFVar3 == (FUserData *)0x0)) {
    pFVar3 = (FUserData *)0x0;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar3;
}

// GetUserDataArray @ 14a09bec0

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UNameSpacedUserData::GetUserDataArray(UNameSpacedUserData *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  wchar_t *pwVar8;
  
  lpCriticalSection = &this->CacheLock;
  pwVar8 = L"";
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 != 0) {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  iVar5 = TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->CachedUserDataArray,uVar4,param_1);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this->CachedUserDataArray + (longlong)iVar5 * 0x28;
    pTVar6 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
             (lVar1 + 0x10);
    if (lVar1 == 0) {
      pTVar6 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar6 != (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_14a09bf7a;
  }
  pTVar6 = &EmptyUserDatas;
LAB_14a09bf7a:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pTVar6;
}

// GetUserDataArrayWithinArray @ 14a09bfb0

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UNameSpacedUserData::GetUserDataArrayWithinArray
          (UNameSpacedUserData *this,FArrayProperty *param_1,uchar *param_2,FString *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  EArrayPropertyFlags EVar2;
  FProperty *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType *pFVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  uchar *puVar14;
  wchar_t *pwVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar16;
  int iVar17;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> local_a8;
  int local_98;
  int local_94;
  FString local_90;
  FString local_80;
  FString *local_70;
  FProperty *local_68;
  LPCRITICAL_SECTION local_60;
  FString local_58;
  
  if (((param_3->Data).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                         ,0xf3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar4)();
    return pTVar9;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CacheLock;
  local_60 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar4)();
    return pTVar9;
  }
  EnterCriticalSection(lpCriticalSection);
  local_68 = param_1->Inner;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  cVar7 = (**(code **)(this->_padding_ + 0x2e0))(this,local_68,param_3,0,param_4);
  if (cVar7 != '\0') {
    EVar2 = param_1->ArrayFlags;
    (**(code **)(param_1->Inner->_padding_ + 0x168))();
    pFVar3 = param_1->Inner;
    local_94 = pFVar3->ElementSize;
    if ((local_94 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar9;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar9;
    }
    for (iVar17 = 0; lpCriticalSection = local_60, iVar12 = 0, iVar17 < *(int *)(param_2 + 8);
        iVar17 = iVar17 + 1) {
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_80,iVar17);
      if (((param_3->Data).ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLeft.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMAssetUserData.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar9;
      }
      if ((local_80.Data.ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InRight.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMAssetUserData.h"
                             ,100,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar9;
      }
      ::FString::ConcatFC(&local_58,param_3,L".");
      ::FString::ConcatFF(&local_90,&local_58,&local_80);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        iVar12 = local_90.Data.ArrayNum + -1;
        pwVar15 = (wchar_t *)local_90.Data.AllocatorInstance.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar15);
      iVar12 = TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                           *)&this->CachedUserData,uVar8,&local_90);
      if ((iVar12 == -1) ||
         (lVar13 = (longlong)iVar12 * 0x20 + *(longlong *)&this->CachedUserData, lVar13 == 0)) {
        local_70 = &local_90;
        TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                    *)&this->CachedUserData,(uint)&local_98,
                   (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_70);
        lVar13 = (longlong)local_98 * 0x20 + *(longlong *)&this->CachedUserData;
      }
      pFVar1 = (FScriptContainerElement *)(lVar13 + 0x10);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        if (*(int *)(param_2 + 8) == 0) {
          pFVar16 = (FScriptContainerElement *)0x0;
        }
        else {
          puVar14 = *(uchar **)param_2;
          if (((EVar2 & UsesMemoryImageAllocator) != None) && (((ulonglong)puVar14 & 1) != 0)) {
            puVar14 = param_2 + ((longlong)puVar14 >> 0x18);
          }
          pFVar16 = (FScriptContainerElement *)(puVar14 + (longlong)local_94 * (longlong)iVar17);
        }
        pFVar10 = ::operator_new(0x28);
        FVar5.Data = local_90.Data.AllocatorInstance.Data;
        if (pFVar10 == (ForAnyElementType *)0x0) {
          pFVar10 = (ForAnyElementType *)0x0;
        }
        else {
          pFVar10->Data = (FScriptContainerElement *)0x0;
          iVar12 = local_90.Data.ArrayNum;
          *(int *)&pFVar10[1].Data = iVar12;
          piVar11 = (int *)((longlong)&pFVar10[1].Data + 4);
          if (iVar12 == 0) {
            *piVar11 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,0,pFVar10,iVar12,piVar11);
            memcpy(pFVar10->Data,FVar5.Data,(longlong)iVar12 * 2);
          }
          pFVar10[2].Data = (FScriptContainerElement *)0x0;
          pFVar10[3].Data = (FScriptContainerElement *)local_68;
          pFVar10[4].Data = pFVar16;
        }
        *(ForAnyElementType **)pFVar1 = pFVar10;
      }
      if (((local_a8.AllocatorInstance.Data <= pFVar1) &&
          (pFVar1 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar9;
      }
      iVar12 = local_a8.ArrayNum;
      if (local_a8.ArrayNum == local_a8.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
      }
      local_a8.ArrayNum = iVar12 + 1;
      *(undefined8 *)(local_a8.AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(undefined8 *)pFVar1;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.ArrayNum != 0) {
      iVar17 = (param_3->Data).ArrayNum;
      if (iVar17 == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
        iVar12 = iVar17 + -1;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar15);
      pTVar9 = TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->CachedUserDataArray,uVar8,param_3);
      FVar5.Data = local_a8.AllocatorInstance.Data;
      if ((pTVar9->ArrayNum == 0) && (pTVar9 != &local_a8)) {
        iVar17 = local_a8.ArrayNum;
        lVar13 = (longlong)local_a8.ArrayNum;
        piVar11 = &pTVar9->ArrayMax;
        pTVar9->ArrayNum = local_a8.ArrayNum;
        if ((local_a8.ArrayNum == 0) && (*piVar11 == 0)) {
          *piVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_a8.ArrayNum,*piVar11,&pTVar9->AllocatorInstance,local_a8.ArrayNum,
                     piVar11);
          if (iVar17 != 0) {
            memcpy((pTVar9->AllocatorInstance).Data,FVar5.Data,lVar13 << 3);
          }
        }
      }
      goto LAB_14a09c45e;
    }
  }
  pTVar9 = &EmptyUserDatas;
LAB_14a09c45e:
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return pTVar9;
}

// GetUserDataArrayWithinStruct @ 14a09c4b0

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UNameSpacedUserData::GetUserDataArrayWithinStruct
          (UNameSpacedUserData *this,UStruct *param_1,uchar *param_2,FString *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FProperty *this_00;
  uchar *puVar6;
  FString *pFVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  TObjectPtr<UStruct>_u_0 TVar13;
  ForAnyElementType *pFVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  TObjectPtr<UStruct>_u_0 *pTVar17;
  ForAnyElementType FVar18;
  ForAnyElementType *pFVar19;
  int *piVar20;
  longlong lVar21;
  undefined1 local_res10 [8];
  uchar *local_res18;
  FString *local_res20;
  ForAnyElementType local_100;
  uint local_f8;
  uint local_f4;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> local_f0;
  FString local_e0;
  TObjectPtr<UStruct>_u_0 local_d0;
  TFieldIterator<FProperty> local_c8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  FString local_98;
  TObjectPtr<UStruct>_u_0 *local_88;
  TObjectPtr<UStruct>_u_0 local_80;
  FString *local_78;
  TObjectPtr<UStruct>_u_0 *local_70;
  FString local_68;
  FString local_58;
  
  bVar5 = false;
  bVar4 = false;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((&this->CacheLock == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
              (*pcVar3)();
    return pTVar12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 1;
  local_80.DebugPtr = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_100,1,(int *)&local_f4);
  TVar13 = local_80;
  while( true ) {
    *(TObjectPtr<UStruct>_u_0 *)local_100.Data = (UStruct *)TVar13;
    if (((int)local_f8 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar12;
    }
    pFVar7 = local_res20;
    local_88 = (TObjectPtr<UStruct>_u_0 *)local_100.Data;
    local_d0 = (TObjectPtr<UStruct>_u_0)
               ((*(UStruct **)local_100.Data)->SuperStruct).field0_0x0.DebugPtr;
    local_9c = local_f8;
    if (local_d0.DebugPtr == (UStruct *)0x0) break;
    if (((local_100.Data <= &local_d0) &&
        (&local_d0 < (TObjectPtr<UStruct>_u_0 *)(local_100.Data + (longlong)(int)local_f4 * 8))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar12;
    }
    if (local_f8 == local_f4) {
      local_f8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_100,(int *)&local_f4);
    }
    lVar21 = (longlong)(int)local_f8;
    local_f8 = local_f8 + 1;
    memmove((TObjectPtr<UStruct>_u_0 *)(local_100.Data + 8),local_100.Data,lVar21 << 3);
    TVar13 = local_d0;
  }
  uVar15 = (ulonglong)(int)local_f8;
  pTVar17 = (TObjectPtr<UStruct>_u_0 *)(local_100.Data + uVar15 * 8);
  local_d0.DebugPtr = (UStruct *)0x0;
  FVar18.Data = local_100.Data;
  local_70 = pTVar17;
  do {
    pwVar16 = L"";
    local_88 = (TObjectPtr<UStruct>_u_0 *)FVar18.Data;
    if (local_f8 != (uint)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UStruct_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((TObjectPtr<UStruct>_u_0 *)FVar18.Data == pTVar17) {
      if (local_f0.ArrayNum == 0) {
        pTVar12 = &EmptyUserDatas;
      }
      else {
        iVar2 = (pFVar7->Data).ArrayNum;
        iVar11 = 0;
        if (iVar2 != 0) {
          pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          iVar11 = iVar2 + -1;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar16);
        pTVar12 = TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->CachedUserDataArray,uVar10,pFVar7);
        FVar18.Data = local_f0.AllocatorInstance.Data;
        if ((pTVar12->ArrayNum == 0) && (pTVar12 != &local_f0)) {
          iVar11 = local_f0.ArrayNum;
          lVar21 = (longlong)local_f0.ArrayNum;
          piVar20 = &pTVar12->ArrayMax;
          pTVar12->ArrayNum = local_f0.ArrayNum;
          if ((local_f0.ArrayNum == 0) && (*piVar20 == 0)) {
            *piVar20 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_f0.ArrayNum,*piVar20,&pTVar12->AllocatorInstance,local_f0.ArrayNum,
                       piVar20);
            if (iVar11 != 0) {
              memcpy((pTVar12->AllocatorInstance).Data,FVar18.Data,lVar21 << 3);
            }
          }
        }
      }
      if ((TObjectPtr<UStruct>_u_0 *)local_100.Data != (TObjectPtr<UStruct>_u_0 *)0x0) {
        FMemory::Free(local_100.Data);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
      if (&this->CacheLock != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
      }
      return pTVar12;
    }
    local_c8.Struct = *(UStruct **)FVar18.Data;
    if (local_c8.Struct == (UStruct *)0x0) {
      local_c8.Field = (FField *)0x0;
    }
    else {
      local_c8.Field = (local_c8.Struct)->ChildProperties;
    }
    local_c8.InterfaceIndex = -1;
    local_c8.bIncludeSuper = false;
    local_c8.bIncludeDeprecated = false;
    local_c8.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_c8);
    this_00 = (FProperty *)local_c8.Field;
    while (this_00 != (FProperty *)0x0) {
      local_c8.Field = (FField *)this_00;
      FProperty::GetNameCPP(this_00,&local_98);
      FVar18.Data = local_98.Data.AllocatorInstance.Data;
      if ((pFVar7->Data).ArrayNum < 2) {
        lVar21 = (longlong)local_98.Data.ArrayNum;
        bVar5 = true;
        local_b0.Data = (FScriptContainerElement *)0x0;
        local_a8 = local_98.Data.ArrayNum;
        if (local_98.Data.ArrayNum == 0) {
          local_a4 = 0;
          piVar20 = &local_a8;
          FVar18.Data = (FScriptContainerElement *)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.Data.ArrayNum,0,&local_b0,local_98.Data.ArrayNum,&local_a4);
          memcpy(local_b0.Data,FVar18.Data,lVar21 * 2);
          piVar20 = &local_a8;
          FVar18.Data = local_b0.Data;
        }
      }
      else {
        bVar4 = true;
        if ((local_98.Data.ArrayNum < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InRight.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMAssetUserData.h"
                               ,100,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar12;
        }
        ::FString::ConcatFC(&local_58,pFVar7,L".");
        ::FString::ConcatFF(&local_68,&local_58,&local_98);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        piVar20 = &local_68.Data.ArrayNum;
        FVar18.Data = local_68.Data.AllocatorInstance.Data;
      }
      local_e0.Data.ArrayNum = *piVar20;
      lVar21 = (longlong)local_e0.Data.ArrayNum;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_e0.Data.ArrayNum == 0) {
        local_e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0.Data.ArrayNum,0,(ForAnyElementType *)&local_e0,
                   local_e0.Data.ArrayNum,&local_e0.Data.ArrayMax);
        memcpy(local_e0.Data.AllocatorInstance.Data,FVar18.Data,lVar21 * 2);
      }
      if ((bVar4) &&
         (bVar4 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && (bVar5 = false, local_b0.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data);
      }
      cVar9 = (**(code **)(this->_padding_ + 0x2e0))(this,this_00,&local_e0,1,param_4);
      if (cVar9 == '\0') {
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      else {
        pwVar16 = L"";
        if (local_e0.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_e0.Data.ArrayNum + -1;
          pwVar16 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar16);
        iVar11 = TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                             *)&this->CachedUserData,uVar10,&local_e0);
        if ((iVar11 == -1) ||
           (lVar21 = (longlong)iVar11 * 0x20 + *(longlong *)&this->CachedUserData, lVar21 == 0)) {
          local_78 = &local_e0;
          TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                      *)&this->CachedUserData,(uint)&local_a0,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar10,(bool *)&local_78);
          lVar21 = (longlong)local_a0 * 0x20 + *(longlong *)&this->CachedUserData;
        }
        pFVar1 = (FScriptContainerElement *)(lVar21 + 0x10);
        if (*(longlong *)(lVar21 + 0x10) == 0) {
          pFVar19 = (ForAnyElementType *)0x0;
          if ((this_00->ArrayDim < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar12;
          }
          puVar6 = local_res18;
          if ((local_res18 == (uchar *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar12;
          }
          iVar11 = this_00->Offset_Internal;
          pFVar14 = ::operator_new(0x28);
          FVar18.Data = local_e0.Data.AllocatorInstance.Data;
          if (pFVar14 != (ForAnyElementType *)0x0) {
            pFVar14->Data = (FScriptContainerElement *)0x0;
            lVar21 = (longlong)local_e0.Data.ArrayNum;
            *(int *)&pFVar14[1].Data = local_e0.Data.ArrayNum;
            piVar20 = (int *)((longlong)&pFVar14[1].Data + 4);
            if (local_e0.Data.ArrayNum == 0) {
              *piVar20 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_e0.Data.ArrayNum,0,pFVar14,local_e0.Data.ArrayNum,piVar20);
              memcpy(pFVar14->Data,FVar18.Data,lVar21 * 2);
            }
            pFVar14[2].Data = (FScriptContainerElement *)0x0;
            pFVar14[3].Data = (FScriptContainerElement *)this_00;
            pFVar14[4].Data = (FScriptContainerElement *)(puVar6 + iVar11);
            pFVar19 = pFVar14;
          }
          *(ForAnyElementType **)pFVar1 = pFVar19;
        }
        if (((local_f0.AllocatorInstance.Data <= pFVar1) &&
            (pFVar1 < local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar12;
        }
        iVar11 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
        local_f0.ArrayNum = iVar11 + 1;
        *(undefined8 *)(local_f0.AllocatorInstance.Data + (longlong)iVar11 * 8) =
             *(undefined8 *)pFVar1;
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_c8.Field = (local_c8.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_c8);
      pTVar17 = local_70;
      FVar18.Data = (FScriptContainerElement *)local_88;
      this_00 = (FProperty *)local_c8.Field;
    }
    FVar18.Data = FVar18.Data + 8;
    uVar15 = (ulonglong)local_9c;
    local_c8.Field = (FField *)0x0;
  } while( true );
}

// GetUserDataWithinStruct @ 14a09cc30

FUserData * __thiscall
UNameSpacedUserData::GetUserDataWithinStruct
          (UNameSpacedUserData *this,UStruct *param_1,uchar *param_2,FString *param_3,
          FString *param_4,FString *param_5)

{
  uchar *puVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FUserData *pFVar10;
  FUserData *this_00;
  FName *this_01;
  FProperty *pFVar11;
  ForAnyElementType _Str;
  uchar *puVar12;
  wchar_t *pwVar13;
  FUserData *pFVar14;
  FName local_res10;
  uchar *local_res18;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FUserData local_98;
  FUserData local_70;
  FString local_48;
  
  local_res18 = param_2;
  if ((param_1 == (UStruct *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                         ,0x6a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FUserData *)(*pcVar5)();
    return pFVar10;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                         ,0x6b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FUserData *)(*pcVar5)();
    return pFVar10;
  }
  pFVar10 = (FUserData *)0x0;
  pFVar14 = (FUserData *)0x0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  iVar9 = (param_4->Data).ArrayNum;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  if (iVar9 < 2) {
    ::FString::FString(&local_c8,L".");
    bVar7 = ::FString::Split(param_3,&local_c8,&local_d8,&local_118,IgnoreCase,FromEnd);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      iVar9 = (param_4->Data).ArrayNum;
      goto LAB_14a09d112;
    }
    this_00 = (FUserData *)(**(code **)(this->_padding_ + 0x2d0))(this,&local_d8,param_5);
    if (this_00 == (FUserData *)0x0) goto LAB_14a09d228;
    if ((this_00->Property == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentUserData->GetProperty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                           ,0x81,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FUserData *)(*pcVar5)();
      return pFVar10;
    }
    puVar1 = this_00->Memory;
    if (puVar1 == (uchar *)0x0) {
      pFVar14 = pFVar10;
      if ((param_5 == (FString *)0x0) || (1 < (param_5->Data).ArrayNum)) goto LAB_14a09d269;
      ::FString::PrintfImpl
                (&local_b8,L"UserData at path \'%s\' does not have any data backing it up.");
      ::FString::operator=(param_5,&local_b8);
      local_70.Path.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_14a09d25f;
    }
    pFVar11 = this_00->Property;
    if (pFVar11 != (FProperty *)0x0) {
      if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) != 0) {
        pFVar14 = GetUserDataWithinStruct
                            (this,(UStruct *)pFVar11[1]._padding_,puVar1,param_3,&local_118,param_5)
        ;
        goto LAB_14a09d269;
      }
      if ((pFVar11 != (FProperty *)0x0) && ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x15 & 1) != 0)
         ) {
        pFVar2 = (FProperty *)pFVar11[1]._padding_;
        cVar8 = (**(code **)(this->_padding_ + 0x2e0))(this,pFVar2,param_3,0,param_5);
        if (cVar8 == '\0') goto LAB_14a09d269;
        bVar7 = ::FString::IsNumeric(&local_118);
        if (bVar7) {
          lVar6 = pFVar11[1]._padding_;
          (**(code **)(*(longlong *)pFVar11[1]._padding_ + 0x168))();
          lVar4 = pFVar11[1]._padding_;
          iVar9 = *(int *)(lVar4 + 0x34);
          local_res18 = (uchar *)CONCAT44(local_res18._4_4_,iVar9);
          if ((iVar9 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FUserData *)(*pcVar5)();
            return pFVar10;
          }
          if ((lVar4 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FUserData *)(*pcVar5)();
            return pFVar10;
          }
          _Str.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            _Str.Data = local_118.Data.AllocatorInstance.Data;
          }
          iVar9 = _wtoi((wchar_t *)_Str.Data);
          if ((iVar9 < 0) || (*(int *)(puVar1 + 8) <= iVar9)) {
            if ((param_5 == (FString *)0x0) || (1 < (param_5->Data).ArrayNum)) goto LAB_14a09d269;
            ::FString::PrintfImpl
                      (&local_f8,
                       L"Provided array index for path \'%s\' is out of bounds (num == %d).");
            local_70.Path.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
            pFVar10 = pFVar14;
            if (param_5 != &local_f8) {
              pFVar3 = (param_5->Data).AllocatorInstance.Data;
              if (pFVar3 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar3);
              }
              local_70.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (param_5->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
              (param_5->Data).ArrayNum = local_f8.Data.ArrayNum;
              (param_5->Data).ArrayMax = local_f8.Data.ArrayMax;
              local_f8.Data.ArrayNum = 0;
              local_f8.Data.ArrayMax = 0;
              local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
          }
          else {
            if (*(int *)(puVar1 + 8) != 0) {
              puVar12 = *(uchar **)puVar1;
              if (((lVar6 & 1) != 0) && (((ulonglong)puVar12 & 1) != 0)) {
                puVar12 = puVar1 + ((longlong)puVar12 >> 0x18);
              }
              pFVar10 = (FUserData *)(puVar12 + (longlong)(int)local_res18 * (longlong)iVar9);
            }
            ::FString::FString(&local_98.Path,param_3);
            local_98.CPPType.ComparisonIndex.Value = 0;
            local_98.CPPType.Number = 0;
            local_98.Property = pFVar2;
            local_98.Memory = (uchar *)pFVar10;
            pFVar10 = StoreCacheForUserData(this,&local_98);
            local_70.Path.Data.AllocatorInstance.Data = local_98.Path.Data.AllocatorInstance.Data;
          }
        }
        else {
          if ((param_5 == (FString *)0x0) || (1 < (param_5->Data).ArrayNum)) goto LAB_14a09d269;
          ::FString::PrintfImpl
                    (&local_108,L"Provided array index \'%s\' for path \'%s\' is invalid.");
          local_70.Path.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
          if (param_5 != &local_108) {
            pFVar3 = (param_5->Data).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (param_5->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
            (param_5->Data).ArrayNum = local_108.Data.ArrayNum;
            (param_5->Data).ArrayMax = local_108.Data.ArrayMax;
            local_108.Data.ArrayNum = 0;
            local_108.Data.ArrayMax = 0;
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10;
          }
        }
        goto LAB_14a09d25f;
      }
    }
    if ((param_5 == (FString *)0x0) || (1 < (param_5->Data).ArrayNum)) goto LAB_14a09d269;
    this_01 = FUserData::GetCPPType(this_00);
    ::FName::ToString(this_01,&local_48);
    ::FString::PrintfImpl
              (&local_e8,L"Cannot access sub paths of user data type \'%s\' for path \'%s\'.");
    if (param_5 != &local_e8) {
      pFVar3 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_5->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      (param_5->Data).ArrayNum = local_e8.Data.ArrayNum;
      (param_5->Data).ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_14a09d22d:
    if (1 < (param_5->Data).ArrayNum) goto LAB_14a09d269;
    ::FString::PrintfImpl(&local_a8,L"UserData path \'%s\' could not be found.");
    ::FString::operator=(param_5,&local_a8);
    local_70.Path.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar10 = pFVar14;
  }
  else {
LAB_14a09d112:
    if (iVar9 < 2) {
      param_4 = param_3;
    }
    if ((param_4->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,pwVar13);
    if ((param_1 == (UStruct *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                           ,0x11d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FUserData *)(*pcVar5)();
      return pFVar10;
    }
    pFVar11 = UStruct::FindPropertyByName(param_1,local_res10);
    if (pFVar11 == (FProperty *)0x0) {
LAB_14a09d228:
      if (param_5 == (FString *)0x0) goto LAB_14a09d269;
      goto LAB_14a09d22d;
    }
    cVar8 = (**(code **)(this->_padding_ + 0x2e0))(this,pFVar11,param_3,1,param_5);
    if (cVar8 == '\0') goto LAB_14a09d269;
    if ((pFVar11->ArrayDim < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FUserData *)(*pcVar5)();
      return pFVar10;
    }
    puVar1 = local_res18;
    if ((local_res18 == (uchar *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FUserData *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = pFVar11->Offset_Internal;
    ::FString::FString(&local_70.Path,param_3);
    local_70.CPPType.ComparisonIndex.Value = 0;
    local_70.CPPType.Number = 0;
    local_70.Property = pFVar11;
    local_70.Memory = puVar1 + iVar9;
    pFVar10 = StoreCacheForUserData(this,&local_70);
  }
LAB_14a09d25f:
  pFVar14 = pFVar10;
  if ((FUserData *)local_70.Path.Data.AllocatorInstance.Data != (FUserData *)0x0) {
    FMemory::Free(local_70.Path.Data.AllocatorInstance.Data);
  }
LAB_14a09d269:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return pFVar14;
}

// InvalidateCache @ 14a09e400

void __thiscall UNameSpacedUserData::InvalidateCache(UNameSpacedUserData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CacheLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar10 = 0;
  iVar2 = *(int *)&(this->CachedUserData).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedUserData).field_0x10;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->CachedUserData).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_60.Array;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a09e4ef;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar12;
    if (iVar2 < iVar7) {
      iVar7 = iVar2;
    }
  }
LAB_14a09e4ef:
  uVar9 = *(uint *)&(this->CachedUserData).field_0x28;
  puVar14 = &(this->CachedUserData).field_0x10;
  uVar15 = uVar9 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CachedUserData).field_0x8 -
                       *(int *)&(this->CachedUserData).field_0x34);
  if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->CachedUserData).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->CachedUserData).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar14;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a09e5f0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14a09e5f0:
  while( true ) {
    if (*(int *)&(this->CachedUserData).field_0x8 - *(int *)&(this->CachedUserData).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) break;
    puVar3 = *(undefined8 **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&(this->CachedUserData).field_0x0);
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x28);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
           *)&this->CachedUserData);
  TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->CachedUserDataArray);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IsPropertySupported @ 14a09e8c0

bool __thiscall
UNameSpacedUserData::IsPropertySupported
          (UNameSpacedUserData *this,FProperty *param_1,FString *param_2,bool param_3,
          FString *param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString local_38;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                         ,0x159,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((!param_3) ||
     (((param_1->PropertyFlags & (CPF_EditConst|CPF_BlueprintVisible|CPF_Edit)) != CPF_None &&
      ((param_1->PropertyFlags >> 0x23 & 1) == 0)))) {
    uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if (((uVar1 >> 0x2f & 1) == 0) && ((uVar1 >> 0x2e & 1) == 0)) {
      return true;
    }
    if ((param_4 != (FString *)0x0) && ((param_4->Data).ArrayNum < 2)) {
      local_28 = (wchar_t *)0x0;
      local_20 = 0;
      (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_18,&local_28,0);
      iVar6 = (int)local_20 + -1;
      if ((int)local_20 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_18,local_28,iVar6);
      RigVMTypeUtils::CleanupCPPType(&local_18);
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free(local_28);
      }
      ::FString::PrintfImpl(&local_38,L"Unsupported user data type \'%s\' at path \'%s\'.");
      if (param_4 != &local_38) {
        pFVar2 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_4->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_4->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// Serialize @ 14a0a6a80

void __thiscall UNameSpacedUserData::Serialize(UNameSpacedUserData *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  InvalidateCache(this);
  return;
}

// Serialize @ 14a0a6ab0

void __thiscall
UNameSpacedUserData::Serialize(UNameSpacedUserData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  InvalidateCache(this);
  return;
}

// StaticRegisterNativesUNameSpacedUserData @ 14a0a74f0

void __cdecl UNameSpacedUserData::StaticRegisterNativesUNameSpacedUserData(void)

{
  return;
}

// StoreCacheForUserData @ 14a0a7560

FUserData * __thiscall
UNameSpacedUserData::StoreCacheForUserData(UNameSpacedUserData *this,FUserData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FUserData *pFVar3;
  FUserData **ppFVar4;
  FName *pFVar5;
  FName *pFVar6;
  TPairInitializer<FString_const_&,UNameSpacedUserData::FUserData_*_const_&> local_res8;
  FUserData *local_28;
  FUserData ***local_20;
  
  if (((param_1->Path).Data.ArrayNum < 2) || (param_1->Memory == (uchar *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUserData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                       ,0x135,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUserData *)(*pcVar1)();
      return pFVar3;
    }
  }
  lpCriticalSection = &this->CacheLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUserData *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar4 = TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
            ::Find((TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
                    *)&this->CachedUserData,&param_1->Path);
  if ((ppFVar4 == (FUserData **)0x0) || (*ppFVar4 == (FUserData *)0x0)) {
    local_res8.Value = ::operator_new(0x28);
    if ((FUserData *)local_res8.Value == (FUserData *)0x0) {
      local_res8.Value = (FUserData **)0x0;
    }
    else {
      ::FString::FString((FString *)local_res8.Value,&param_1->Path);
      ((FUserData *)local_res8.Value)->CPPType = param_1->CPPType;
      ((FUserData *)local_res8.Value)->Property = param_1->Property;
      ((FUserData *)local_res8.Value)->Memory = param_1->Memory;
    }
    local_20 = &local_res8.Value;
    local_28 = param_1;
    TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UNameSpacedUserData::FUserData_*_const_&>_>
              ((TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
                *)&this->CachedUserData,&local_res8,(bool *)&local_28);
    pFVar3 = (FUserData *)local_res8.Value;
  }
  else {
    pFVar5 = FUserData::GetCPPType(param_1);
    pFVar6 = FUserData::GetCPPType(*ppFVar4);
    if (*pFVar6 != *pFVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*UserDataInCache)->GetCPPType() == InUserData.GetCPPType()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                         ,0x13c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUserData *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = *ppFVar4;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar3;
}

// StoreCacheForUserDataArray @ 14a0a76d0

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UNameSpacedUserData::StoreCacheForUserDataArray
          (UNameSpacedUserData *this,FString *param_1,
          TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  if (param_2->ArrayNum == 0) {
    return &EmptyUserDatas;
  }
  lpCriticalSection = &this->CacheLock;
  pwVar7 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  pTVar5 = TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->CachedUserDataArray,uVar4,param_1);
  if (pTVar5->ArrayNum == 0) {
    TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>::operator=
              (pTVar5,param_2);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pTVar5;
}

