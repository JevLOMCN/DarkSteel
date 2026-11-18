// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 13

// StaticClass @ 14a070830

UClass * __cdecl UDataAssetLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"DataAssetLink",
               &Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton,
               StaticRegisterNativesUDataAssetLink,0x130,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataAssetLink>,InternalVTableHelperCtorCaller<UDataAssetLink>,
               local_res8,UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton;
}

// UDataAssetLink @ 14a07a7d0

UDataAssetLink * __thiscall
UDataAssetLink::UDataAssetLink(UDataAssetLink *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNameSpacedUserData::UNameSpacedUserData((UNameSpacedUserData *)this,param_1);
  this_00 = &(this->DataAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DataAssetCached).field0_0x0.DebugPtr = (UDataAsset *)0x0;
  return this;
}

// UDataAssetLink @ 14a07a840

UDataAssetLink * __thiscall
UDataAssetLink::UDataAssetLink(UDataAssetLink *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UNameSpacedUserData::UNameSpacedUserData((UNameSpacedUserData *)this,param_1);
  this_00 = &(this->DataAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DataAssetCached).field0_0x0.DebugPtr = (UDataAsset *)0x0;
  return this;
}

// ~UDataAssetLink @ 14a07c050

void __thiscall UDataAssetLink::~UDataAssetLink(UDataAssetLink *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataAssetLink__6B_;
  pvVar1 = *(void **)&(this->DataAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UNameSpacedUserData::~UNameSpacedUserData((UNameSpacedUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14a097f30

UClass * __cdecl UDataAssetLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"DataAssetLink",
               &Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton,
               StaticRegisterNativesUDataAssetLink,0x130,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataAssetLink>,InternalVTableHelperCtorCaller<UDataAssetLink>,
               local_res8,UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataAssetLink.InnerSingleton;
}

// GetUserData @ 14a09ba40

FUserData * __thiscall
UDataAssetLink::GetUserData(UDataAssetLink *this,FString *param_1,FString *param_2)

{
  longlong *lpCriticalSection;
  UDataAsset *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FUserData *pFVar5;
  FUserData **ppFVar6;
  FString local_38;
  FString local_28;
  
  lpCriticalSection = &this->_padding_;
  if ((lpCriticalSection == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FUserData *)(*pcVar3)();
    return pFVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar6 = TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
            ::Find((TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
                    *)&this->_padding_,param_1);
  if ((ppFVar6 == (FUserData **)0x0) || (pFVar5 = *ppFVar6, pFVar5 == (FUserData *)0x0)) {
    if (lpCriticalSection != (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pUVar1 = (this->DataAssetCached).field0_0x0.DebugPtr;
    if (pUVar1 == (UDataAsset *)0x0) {
      if ((param_2 != (FString *)0x0) && ((param_2->Data).ArrayNum < 2)) {
        ::FString::PrintfImpl
                  (&local_38,L"User data path \'%s\' could not be found (DataAsset not provided)");
        if (param_2 != &local_38) {
          pFVar2 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (param_2->Data).ArrayNum = local_38.Data.ArrayNum;
          (param_2->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar5 = (FUserData *)0x0;
    }
    else {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      pFVar5 = UNameSpacedUserData::GetUserDataWithinStruct
                         ((UNameSpacedUserData *)this,(UStruct *)pUVar1->_padding_,(uchar *)pUVar1,
                          param_1,&local_28,param_2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar5;
}

// GetUserDataArray @ 14a09bc60

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataAssetLink::GetUserDataArray(UDataAssetLink *this,FString *param_1,FString *param_2)

{
  longlong *lpCriticalSection;
  int iVar1;
  UDataAsset *pUVar2;
  uchar *puVar3;
  FArrayProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FString local_28;
  
  lpCriticalSection = &this->_padding_;
  if ((lpCriticalSection == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
              (*pcVar6)();
    return pTVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = 0;
  if (iVar1 == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar12);
  iVar9 = TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->_padding_,uVar8,param_1);
  if (iVar9 == -1) {
LAB_14a09bd27:
    if (lpCriticalSection != (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pTVar10 = &UNameSpacedUserData::EmptyUserDatas;
  }
  else {
    lVar11 = this->_padding_ + (longlong)iVar9 * 0x28;
    pTVar10 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
              (lVar11 + 0x10);
    if (lVar11 == 0) {
      pTVar10 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar10 == (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)0x0
       ) goto LAB_14a09bd27;
    if (lpCriticalSection != (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (pTVar10->ArrayNum != 0) {
    return pTVar10;
  }
  pUVar2 = (this->DataAssetCached).field0_0x0.DebugPtr;
  if (pUVar2 != (UDataAsset *)0x0) {
    if ((param_1->Data).ArrayNum < 2) {
      pTVar10 = UNameSpacedUserData::GetUserDataArrayWithinStruct
                          ((UNameSpacedUserData *)this,(UStruct *)pUVar2->_padding_,(uchar *)pUVar2,
                           param_1,param_2);
      return pTVar10;
    }
    lVar11 = (**(code **)(this->_padding_ + 0x2d0))(this,param_1,param_2);
    if (lVar11 != 0) {
      if ((*(longlong *)(lVar11 + 0x18) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentUserData->GetProperty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMAssetUserData.cpp"
                             ,0x1ab,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar6)();
        return pTVar10;
      }
      puVar3 = *(uchar **)(lVar11 + 0x20);
      if (puVar3 == (uchar *)0x0) goto LAB_14a09be93;
      pFVar4 = *(FArrayProperty **)(lVar11 + 0x18);
      if (pFVar4 != (FArrayProperty *)0x0) {
        if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) != 0) {
          pTVar10 = UNameSpacedUserData::GetUserDataArrayWithinStruct
                              ((UNameSpacedUserData *)this,*(UStruct **)&pFVar4->ArrayFlags,puVar3,
                               param_1,param_2);
          return pTVar10;
        }
        if ((pFVar4 != (FArrayProperty *)0x0) &&
           ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
          pTVar10 = UNameSpacedUserData::GetUserDataArrayWithinArray
                              ((UNameSpacedUserData *)this,pFVar4,puVar3,param_1,param_2);
          return pTVar10;
        }
      }
    }
  }
  if ((param_2 != (FString *)0x0) && ((param_2->Data).ArrayNum < 2)) {
    ::FString::PrintfImpl
              (&local_28,L"User data path \'%s\' could not be found (DataAsset not provided)");
    if (param_2 != &local_28) {
      pFVar5 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (param_2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_28.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_14a09be93:
  return &UNameSpacedUserData::EmptyUserDatas;
}

// Serialize @ 14a0a6940

void __thiscall UDataAssetLink::Serialize(UDataAssetLink *this,FArchive *param_1)

{
  UDataAsset *pUVar1;
  
  if ((((param_1->field_0x28 & 4) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((*(longlong *)&param_1->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
    pUVar1 = (this->DataAssetCached).field0_0x0.DebugPtr;
    (this->DataAssetCached).field0_0x0.DebugPtr = (UDataAsset *)0x0;
    UObject::Serialize((UObject *)this,param_1);
    UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DataAssetCached).field0_0x0.DebugPtr = pUVar1;
    return;
  }
  UObject::Serialize((UObject *)this,param_1);
  UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
  return;
}

// Serialize @ 14a0a69d0

void __thiscall UDataAssetLink::Serialize(UDataAssetLink *this,FStructuredArchiveRecord param_1)

{
  UDataAsset *pUVar1;
  FArchive *pFVar2;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((((pFVar2->field_0x28 & 4) != 0) && ((pFVar2->field_0x29 & 1) != 0)) &&
     ((*(longlong *)&pFVar2->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) == 0)))) {
    pUVar1 = (this->DataAssetCached).field0_0x0.DebugPtr;
    (this->DataAssetCached).field0_0x0.DebugPtr = (UDataAsset *)0x0;
    UObject::Serialize((UObject *)this,pFVar2);
    UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DataAssetCached).field0_0x0.DebugPtr = pUVar1;
    return;
  }
  UObject::Serialize((UObject *)this,pFVar2);
  UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
  return;
}

// SetDataAsset @ 14a0a7090

void __thiscall
UDataAssetLink::SetDataAsset(UDataAssetLink *this,TSoftObjectPtr<UDataAsset> *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  UDataAsset *pUVar3;
  FName local_res8;
  FString local_18;
  
  UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DataAsset,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  pUVar3 = TSoftObjectPtr<UDataAsset>::Get(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DataAssetCached).field0_0x0.DebugPtr = pUVar3;
  if (((int)this->_padding_ < 2) && (pUVar3 != (UDataAsset *)0x0)) {
    pUVar3 = TSoftObjectPtr<UDataAsset>::Get(&this->DataAsset);
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    plVar1 = &this->_padding_;
    if ((FString *)plVar1 != &local_18) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
      *(int *)&this->_padding_ = local_18.Data.ArrayNum;
      *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// StaticRegisterNativesUDataAssetLink @ 14a0a74b0

void __cdecl UDataAssetLink::StaticRegisterNativesUDataAssetLink(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDataAssetLink_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDataAsset @ 14a0aa180

void __cdecl UDataAssetLink::execGetDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakPtr.ObjectIndex = *(int *)&param_1[6].field_0x10;
  local_38.WeakPtr.ObjectSerialNumber = *(int *)&param_1[6].field_0x14;
  FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)&param_1[6].field_0x18);
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_38);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetDataAsset @ 14a0aac40

/* WARNING: Type propagation algorithm not settling */

void __cdecl UDataAssetLink::execSetDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  ForAnyElementType _Src;
  UDataAsset *pUVar3;
  size_t _Size;
  FName local_res8;
  undefined1 local_78 [16];
  FWeakObjectPtr local_68;
  FName local_60;
  FName FStack_58;
  FUtf8String local_50;
  TPersistentObjectPtr<FSoftObjectPath> local_40;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FUtf8String::Reset(&local_50,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src.Data = local_50.Data.AllocatorInstance.Data;
  local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_50.Data.ArrayNum;
  local_40.WeakPtr = local_68;
  local_40.ObjectID.SubPathString.Data.ArrayNum = local_50.Data.ArrayNum;
  local_40.ObjectID.AssetPath.PackageName = local_60;
  local_40.ObjectID.AssetPath.AssetName = FStack_58;
  if (local_50.Data.ArrayNum == 0) {
    local_40.ObjectID.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_40.ObjectID.SubPathString,
               local_50.Data.ArrayNum,&local_40.ObjectID.SubPathString.Data.ArrayMax);
    memcpy(local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)param_1);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[6].field_0x10,&local_40);
  pUVar3 = TSoftObjectPtr<UDataAsset>::Get((TSoftObjectPtr<UDataAsset> *)&local_40);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(UDataAsset **)&param_1[7].field_0x10 = pUVar3;
  if ((*(int *)&param_1[1].field_0x8 < 2) && (pUVar3 != (UDataAsset *)0x0)) {
    pUVar3 = TSoftObjectPtr<UDataAsset>::Get((TSoftObjectPtr<UDataAsset> *)&param_1[6].field_0x10);
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,(FString *)local_78);
    pUVar1 = param_1 + 1;
    if (pUVar1 != (UObject *)local_78) {
      if (*(void **)pUVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pUVar1);
      }
      *(undefined8 *)pUVar1 = local_78._0_8_;
      *(undefined4 *)&param_1[1].field_0x8 = local_78._8_4_;
      *(undefined4 *)&param_1[1].field_0xc = local_78._12_4_;
      local_78._8_8_ = 0;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  if (local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

