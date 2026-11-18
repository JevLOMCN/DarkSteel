// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 14726a500

UClass * __cdecl UCloudStorageBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CloudStorageBase",
               &Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton,
               StaticRegisterNativesUCloudStorageBase,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCloudStorageBase>,
               InternalVTableHelperCtorCaller<UCloudStorageBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton;
}

// UCloudStorageBase @ 14726cbd0

UCloudStorageBase * __thiscall
UCloudStorageBase::UCloudStorageBase(UCloudStorageBase *this,FVTableHelper *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase((UPlatformInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UCloudStorageBase__6B_;
  (this->LocalCloudFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalCloudFiles).ArrayNum = 0;
  (this->LocalCloudFiles).ArrayMax = 0;
  return this;
}

// ~UCloudStorageBase @ 14726d370

void __thiscall UCloudStorageBase::~UCloudStorageBase(UCloudStorageBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCloudStorageBase__6B_;
  DestructItems<FString,int>
            ((FString *)(this->LocalCloudFiles).AllocatorInstance.Data,
             (this->LocalCloudFiles).ArrayNum);
  pFVar1 = (this->LocalCloudFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformInterfaceBase::~UPlatformInterfaceBase((UPlatformInterfaceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14726f380

UClass * __cdecl UCloudStorageBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CloudStorageBase",
               &Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton,
               StaticRegisterNativesUCloudStorageBase,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCloudStorageBase>,
               InternalVTableHelperCtorCaller<UCloudStorageBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCloudStorageBase.InnerSingleton;
}

// StaticRegisterNativesUCloudStorageBase @ 1472709f0

void __cdecl UCloudStorageBase::StaticRegisterNativesUCloudStorageBase(void)

{
  return;
}

// UCloudStorageBase @ 14850fd60

UCloudStorageBase * __thiscall
UCloudStorageBase::UCloudStorageBase(UCloudStorageBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCloudStorageBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LocalCloudFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalCloudFiles).ArrayNum = 0;
  (this->LocalCloudFiles).ArrayMax = 0;
  return this;
}

// CreateCloudDocument @ 14851fcf0

int __thiscall UCloudStorageBase::CreateCloudDocument(UCloudStorageBase *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FString local_18;
  
  pFVar5 = FPaths::CloudDir(&local_18);
  ::FString::ConcatFF(&local_28,pFVar5,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar6 = (this->LocalCloudFiles).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(this->LocalCloudFiles).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (this->LocalCloudFiles).ArrayNum;
  piVar1 = &(this->LocalCloudFiles).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->LocalCloudFiles).AllocatorInstance,piVar1);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  (this->LocalCloudFiles).ArrayNum = iVar4 + 1;
  pFVar6 = (this->LocalCloudFiles).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *(int *)(pFVar6 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum,
               (int *)(pFVar6 + 0xc));
    memcpy(*(void **)pFVar6,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// GetCloudDocumentName @ 148529290

FString * __thiscall
UCloudStorageBase::GetCloudDocumentName
          (UCloudStorageBase *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->LocalCloudFiles).ArrayNum <= param_1) {
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPaths::GetCleanFilename
            (__return_storage_ptr__,
             (FString *)((this->LocalCloudFiles).AllocatorInstance.Data + (longlong)param_1 * 0x10))
  ;
  return __return_storage_ptr__;
}

// GetNumCloudDocuments @ 14852bab0

int __thiscall UCloudStorageBase::GetNumCloudDocuments(UCloudStorageBase *this,bool param_1)

{
  if (param_1) {
    return 0;
  }
  return (this->LocalCloudFiles).ArrayNum;
}

// Init @ 1485311a0

void __thiscall UCloudStorageBase::Init(UCloudStorageBase *this)

{
  return;
}

// ParseDocumentAsBytes @ 148537f60

void __thiscall
UCloudStorageBase::ParseDocumentAsBytes
          (UCloudStorageBase *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if ((!param_3) && (param_1 < (this->LocalCloudFiles).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->LocalCloudFiles).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + (longlong)param_1 * 0x10 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar1 + (longlong)param_1 * 0x10);
    }
    FFileHelper::LoadFileToArray(param_2,pwVar4,0);
  }
  return;
}

// ParseDocumentAsObject @ 148538040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UCloudStorageBase::ParseDocumentAsObject
          (UCloudStorageBase *this,int param_1,TSubclassOf<UObject> param_2,int param_3,bool param_4
          )

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined4 in_register_00000014;
  undefined8 uVar10;
  undefined7 uVar11;
  undefined1 auStack_248 [32];
  uint local_228 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_220;
  FName local_210;
  FMemoryReader local_208;
  FObjectAndNameAsStringProxyArchive local_158;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  uVar10 = CONCAT44(in_register_00000014,param_1);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  pUVar8 = (UClass *)0x0;
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = 0;
  local_220.ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x308))(this,uVar10,&local_220,param_4);
  if (local_220.ArrayNum != 0) {
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_208);
    local_208._padding_ = 0;
    local_208._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_208.Bytes = &local_220;
    uVar11 = (undefined7)((ulonglong)uVar10 >> 8);
    local_208.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_208,true);
    (**(code **)(local_208._padding_ + 0x108))(&local_208,CONCAT71(uVar11,1));
    if (*(uint **)(local_208._padding_ + 8) < *(uint **)local_208._padding_ + 1) {
      if ((local_208._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_208._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_208,local_228,4);
        }
        else {
          (**(code **)(local_208._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_208,local_228);
      }
    }
    else {
      local_228[0] = **(uint **)local_208._padding_;
      *(longlong *)local_208._padding_ = *(longlong *)local_208._padding_ + 4;
    }
    if (local_228[0] == param_3) {
      FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
                (&local_158,(FArchive *)&local_208,false);
      lVar2 = *(longlong *)param_2.Class.field0_0x0;
      local_210.ComparisonIndex.Value = 0;
      local_210.Number = 0;
      if ((lVar2 != 0) &&
         (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar8 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar7 = GetTransientPackage();
      FVar4 = local_210;
      if (local_210 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,pUVar8);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar8);
      FVar5 = local_210;
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_210.ComparisonIndex = FVar4.ComparisonIndex.Value;
      local_210.Number = FVar4.Number;
      local_b8._16_4_ = local_210.ComparisonIndex.Value;
      local_b8._20_4_ = local_210.Number;
      local_b8._24_4_ = RF_NoFlags;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_210 = FVar5;
      local_b8._8_8_ = pUVar7;
      pUVar8 = (UClass *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar9 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      (**(code **)(pUVar8->_padding_ + 200))(pUVar8,&local_158);
      FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_158);
    }
    else if (4 < (byte)LogScriptPlatformInterface._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogScriptPlatformInterface);
    }
    FArchive::~FArchive((FArchive *)&local_208);
  }
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  return (UObject *)pUVar8;
}

// ParseDocumentAsString @ 148538320

FString * __thiscall
UCloudStorageBase::ParseDocumentAsString
          (UCloudStorageBase *this,FString *__return_storage_ptr__,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  if ((!param_2) && (param_1 < (this->LocalCloudFiles).ArrayNum)) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar1 = (this->LocalCloudFiles).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + (longlong)param_1 * 0x10 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(pFVar1 + (longlong)param_1 * 0x10);
    }
    FFileHelper::LoadFileToString(&local_18,pwVar5,None,0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// QueryForCloudDocuments @ 14853c3c0

bool __thiscall UCloudStorageBase::QueryForCloudDocuments(UCloudStorageBase *this)

{
  code *pcVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_58;
  FPlatformInterfaceDelegateResult local_48;
  
  pIVar2 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x88);
  pFVar3 = FPaths::CloudDir(&local_58);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar2,&this->LocalCloudFiles,pwVar4,L"*.*",1,0,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this->bSuppressDelegateCalls == 0) {
    local_48.bSuccessful = true;
    local_48.Data.DataName.ComparisonIndex.Value = 0;
    local_48.Data.DataName.Number = 0;
    local_48.Data.Type.Value = '\0';
    local_48.Data.IntValue = 0;
    local_48.Data.FloatValue = 0.0;
    local_48.Data.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.StringValue.Data.ArrayNum = 0;
    local_48.Data.StringValue.Data.ArrayMax = 0;
    local_48.Data.ObjectValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    UPlatformInterfaceBase::CallDelegates((UPlatformInterfaceBase *)this,3,&local_48);
    if (local_48.Data.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ReadCloudDocument @ 14853c760

bool __thiscall
UCloudStorageBase::ReadCloudDocument(UCloudStorageBase *this,int param_1,bool param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  FPlatformInterfaceDelegateResult local_48;
  
  if ((!param_2) && (param_1 < (this->LocalCloudFiles).ArrayNum)) {
    pIVar5 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x110);
    uVar7 = 0;
    if (param_1 < (this->LocalCloudFiles).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = (this->LocalCloudFiles).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + (longlong)param_1 * 0x10 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar2 + (longlong)param_1 * 0x10);
    }
    lVar6 = (*pcVar1)(pIVar5,pwVar8);
    if (lVar6 != -1) {
      if (this->bSuppressDelegateCalls == 0) {
        local_48.Data.DataName.ComparisonIndex.Value = 0;
        local_48.Data.DataName.Number = 0;
        local_48.Data.FloatValue = 0.0;
        local_48.Data.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.StringValue.Data.ArrayNum = 0;
        local_48.Data.StringValue.Data.ArrayMax = 0;
        local_48.Data.ObjectValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_48.bSuccessful = true;
        local_48.Data.Type.Value = '\x01';
        local_48.Data.IntValue = param_1;
        UPlatformInterfaceBase::CallDelegates((UPlatformInterfaceBase *)this,4,&local_48);
        if (local_48.Data.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_48.Data.StringValue.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
  }
  return false;
}

// ReadKeyValue @ 14853d9d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCloudStorageBase::ReadKeyValue
          (UCloudStorageBase *this,FString *param_1,EPlatformInterfaceDataType param_2,
          UObject *param_3)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FString local_58;
  FPlatformInterfaceDelegateResult local_48;
  
  local_48.Data.DataName.ComparisonIndex.Value = 0;
  local_48.Data.DataName.Number = 0;
  local_48.bSuccessful = true;
  local_48._1_7_ = 0;
  local_48.Data.FloatValue = 0.0;
  local_48.Data._20_4_ = 0;
  local_48.Data._9_7_ = 0;
  local_48.Data.Type.Value = (byte)param_2;
  local_48.Data.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.StringValue.Data.ArrayNum = 0;
  local_48.Data.StringValue.Data.ArrayMax = 0;
  local_48.Data.ObjectValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  FConfigCacheIni::EnableFileOperations(GConfig);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FPaths::CloudDir(&local_58);
      ::FString::ConcatFC(&CloudStorageIni,pFVar1,L"CloudStorage.ini");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      atexit(`UCloudStorageBase::ReadKeyValue'::__l2::
             _dynamic_atexit_destructor_for__CloudStorageIni__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_2 == PIDT_Int) {
    pwVar3 = L"";
    pwVar2 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar2 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,pwVar2);
    if ((param_1->Data).ArrayNum != 0) {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::GetInt
              (GConfig,L"CloudStorageEmulation",pwVar3,&local_48.Data.IntValue,&local_58);
  }
  else if (param_2 == PIDT_Float) {
    pwVar3 = L"";
    pwVar2 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar2 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,pwVar2);
    if ((param_1->Data).ArrayNum != 0) {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::GetFloat
              (GConfig,L"CloudStorageEmulation",pwVar3,&local_48.Data.FloatValue,&local_58);
  }
  else {
    if (param_2 != PIDT_String) {
      if ((param_2 == PIDT_Object) && (4 < (byte)LogScriptPlatformInterface._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogScriptPlatformInterface);
      }
      goto LAB_14853db8f;
    }
    pwVar3 = L"";
    pwVar2 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar2 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,pwVar2);
    if ((param_1->Data).ArrayNum != 0) {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::GetString
              (GConfig,L"CloudStorageEmulation",pwVar3,&local_48.Data.StringValue,&local_58);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14853db8f:
  FConfigCacheIni::DisableFileOperations(GConfig);
  UPlatformInterfaceBase::CallDelegates((UPlatformInterfaceBase *)this,0,&local_48);
  if (local_48.Data.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// ResolveConflictWithNewestDocument @ 148541ad0

bool __thiscall UCloudStorageBase::ResolveConflictWithNewestDocument(UCloudStorageBase *this)

{
  return false;
}

// ResolveConflictWithVersionIndex @ 148541ae0

bool __thiscall
UCloudStorageBase::ResolveConflictWithVersionIndex(UCloudStorageBase *this,int param_1)

{
  return false;
}

// SaveDocumentWithBytes @ 148541af0

bool __thiscall
UCloudStorageBase::SaveDocumentWithBytes
          (UCloudStorageBase *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  uint uVar7;
  wchar_t *pwVar8;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  if ((this->LocalCloudFiles).ArrayNum <= param_1) {
    return false;
  }
  pIVar6 = IFileManager::Get();
  uVar7 = 0;
  if (param_1 < (this->LocalCloudFiles).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->LocalCloudFiles).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + (longlong)param_1 * 0x10 + 8) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)(pFVar2 + (longlong)param_1 * 0x10);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_18.DataPtr = (uchar *)pFVar2;
  local_18.ArrayNum = (longlong)iVar1;
  bVar4 = FFileHelper::SaveArrayToFile(&local_18,pwVar8,pIVar6,0);
  return bVar4;
}

// SaveDocumentWithObject @ 148541c10

bool __thiscall
UCloudStorageBase::SaveDocumentWithObject
          (UCloudStorageBase *this,int param_1,UObject *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  uint local_res20 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_188;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_178;
  void *local_c8 [2];
  FObjectAndNameAsStringProxyArchive local_b8;
  
  local_res20[0] = param_3;
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x2e8))(this,local_c8);
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*puVar3;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,L"");
  if (local_c8[0] != (void *)0x0) {
    FMemory::Free(local_c8[0]);
  }
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_178);
    local_178._padding_ = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_178.Bytes = &local_188;
    local_178.ArchiveName.ComparisonIndex.Value = 0;
    local_178.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(uint **)(local_178._padding_ + 8) < *(uint **)local_178._padding_ + 1) {
      if ((local_178._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_178,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_178,local_res20);
      }
    }
    else {
      local_res20[0] = **(uint **)local_178._padding_;
      *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 4;
    }
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_b8,(FArchive *)&local_178,false);
    (**(code **)(*(longlong *)param_2 + 200))(param_2,&local_b8);
    (**(code **)(this->_padding_ + 0x328))(this,param_1,&local_188);
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_b8);
    FArchive::~FArchive((FArchive *)&local_178);
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// SaveDocumentWithString @ 148541dd0

bool __thiscall
UCloudStorageBase::SaveDocumentWithString(UCloudStorageBase *this,int param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if ((this->LocalCloudFiles).ArrayNum <= param_1) {
    return false;
  }
  pIVar6 = IFileManager::Get();
  uVar7 = 0;
  if (param_1 < (this->LocalCloudFiles).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->LocalCloudFiles).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + (longlong)param_1 * 0x10 + 8) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)(pFVar2 + (longlong)param_1 * 0x10);
  }
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iVar8;
  bVar4 = FFileHelper::SaveStringToFile(&local_18,pwVar9,AutoDetect,pIVar6,0);
  return bVar4;
}

// WriteCloudDocument @ 14854e4d0

bool __thiscall UCloudStorageBase::WriteCloudDocument(UCloudStorageBase *this,int param_1)

{
  FPlatformInterfaceDelegateResult local_48;
  
  if ((this->LocalCloudFiles).ArrayNum <= param_1) {
    return false;
  }
  if (this->bSuppressDelegateCalls == 0) {
    local_48.Data.DataName.ComparisonIndex.Value = 0;
    local_48.Data.DataName.Number = 0;
    local_48.Data.FloatValue = 0.0;
    local_48.Data.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.StringValue.Data.ArrayNum = 0;
    local_48.Data.StringValue.Data.ArrayMax = 0;
    local_48.Data.ObjectValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_48.bSuccessful = true;
    local_48.Data.Type.Value = '\x01';
    local_48.Data.IntValue = param_1;
    UPlatformInterfaceBase::CallDelegates((UPlatformInterfaceBase *)this,5,&local_48);
    if (local_48.Data.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// WriteKeyValue @ 14854e540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCloudStorageBase::WriteKeyValue
          (UCloudStorageBase *this,FString *param_1,FPlatformInterfaceData *param_2)

{
  uchar uVar1;
  UObject *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_58;
  FPlatformInterfaceDelegateResult local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar3 = FPaths::CloudDir(&local_58);
      ::FString::ConcatFC(&CloudStorageIni,pFVar3,L"CloudStorage.ini");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      atexit(`UCloudStorageBase::WriteKeyValue'::__l2::
             _dynamic_atexit_destructor_for__CloudStorageIni__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FConfigCacheIni::EnableFileOperations(GConfig);
  uVar1 = (param_2->Type).Value;
  pwVar5 = L"";
  if (uVar1 == '\x01') {
    pwVar4 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance;
    }
    ::FString::FString(&local_58,pwVar4);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::SetInt(GConfig,L"CloudStorageEmulation",pwVar4,param_2->IntValue,&local_58);
  }
  else if (uVar1 == '\x02') {
    pwVar4 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance;
    }
    ::FString::FString(&local_58,pwVar4);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::SetFloat(GConfig,L"CloudStorageEmulation",pwVar4,param_2->FloatValue,&local_58)
    ;
  }
  else {
    if (uVar1 != '\x03') {
      if ((uVar1 == '\x04') && (4 < (byte)LogScriptPlatformInterface._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogScriptPlatformInterface);
      }
      goto LAB_14854e6e8;
    }
    pwVar4 = L"";
    if (CloudStorageIni.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance;
    }
    ::FString::FString(&local_58,pwVar4);
    if ((param_2->StringValue).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_2->StringValue).Data.AllocatorInstance.Data;
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FConfigCacheIni::SetString(GConfig,L"CloudStorageEmulation",pwVar6,pwVar4,&local_58);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14854e6e8:
  if (CloudStorageIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)CloudStorageIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_58,pwVar5);
  FConfigCacheIni::Flush(GConfig,false,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FConfigCacheIni::DisableFileOperations(GConfig);
  local_48.Data.FloatValue = param_2->FloatValue;
  local_48.Data.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.StringValue.Data.ArrayNum = 0;
  local_48.Data.StringValue.Data.ArrayMax = 0;
  local_48.Data.ObjectValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_48.Data.DataName = param_2->DataName;
  local_48.Data.Type.Value = (param_2->Type).Value;
  local_48.Data.IntValue = param_2->IntValue;
  local_48.bSuccessful = true;
  ::FString::operator=(&local_48.Data.StringValue,&param_2->StringValue);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_2->ObjectValue).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_48.Data.ObjectValue.field0_0x0 = (param_2->ObjectValue).field0_0x0;
  UPlatformInterfaceBase::CallDelegates((UPlatformInterfaceBase *)this,1,&local_48);
  if (local_48.Data.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

