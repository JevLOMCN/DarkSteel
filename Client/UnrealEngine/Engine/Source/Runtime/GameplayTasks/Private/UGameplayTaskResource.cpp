// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 11

// StaticClass @ 146ceaf60

UClass * __cdecl UGameplayTaskResource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskResource",
               &Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton,
               StaticRegisterNativesUGameplayTaskResource,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTaskResource>,
               InternalVTableHelperCtorCaller<UGameplayTaskResource>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton;
}

// UGameplayTaskResource @ 146ced9a0

UGameplayTaskResource * __thiscall
UGameplayTaskResource::UGameplayTaskResource(UGameplayTaskResource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTaskResource__6B_;
  return this;
}

// UGameplayTaskResource @ 146ced9d0

UGameplayTaskResource * __thiscall
UGameplayTaskResource::UGameplayTaskResource
          (UGameplayTaskResource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bManuallySetID = 0;
  this->_padding_ = (longlong)&___7UGameplayTaskResource__6B_;
  this->ManualResourceID = -1;
  this->AutoResourceID = -1;
  return this;
}

// ~UGameplayTaskResource @ 146cee0f0

void __thiscall UGameplayTaskResource::~UGameplayTaskResource(UGameplayTaskResource *this)

{
  this->_padding_ = (longlong)&___7UGameplayTaskResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateDebugDescription @ 146cf2090

FString * __thiscall
UGameplayTaskResource::GenerateDebugDescription
          (UGameplayTaskResource *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_18;
  
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  do {
    if (FVar3.Data == local_18.Data.AllocatorInstance.Data + (longlong)local_18.Data.ArrayNum * 2) {
LAB_146cf20f0:
      piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      if (local_18.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                   local_18.Data.ArrayNum,piVar1);
        memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,
               (longlong)local_18.Data.ArrayNum * 2);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_146cf2167:
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (*(short *)FVar3.Data == 0x5f) {
      iVar2 = (int)((longlong)FVar3.Data - (longlong)local_18.Data.AllocatorInstance.Data >> 1);
      if (iVar2 != -1) {
        ::FString::RightChop(&local_18,__return_storage_ptr__,iVar2 + 1);
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        goto LAB_146cf2167;
      }
      goto LAB_146cf20f0;
    }
    FVar3.Data = FVar3.Data + 2;
  } while( true );
}

// GetPrivateStaticClass @ 146cf2eb0

UClass * __cdecl UGameplayTaskResource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskResource",
               &Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton,
               StaticRegisterNativesUGameplayTaskResource,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTaskResource>,
               InternalVTableHelperCtorCaller<UGameplayTaskResource>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskResource.InnerSingleton;
}

// GetResourceID @ 146cf3320

uchar __thiscall UGameplayTaskResource::GetResourceID(UGameplayTaskResource *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  if ((this->bManuallySetID == 0) && (this->ManualResourceID == -1)) {
    return this->AutoResourceID;
  }
  uVar1 = this->ManualResourceID;
  if ((uVar1 != (uVar1 & 0xff)) || ((int)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uchar)uVar1;
}

// GetResourceID @ 146cf3390

uchar __cdecl UGameplayTaskResource::GetResourceID(TSubclassOf<UGameplayTaskResource> *param_1)

{
  int iVar1;
  UGameplayTaskResource *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar7 != (UClass *)0x0) {
    pUVar6 = StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_146cf33da;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146cf33da:
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  this = (UGameplayTaskResource *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = StaticClass();
  lVar2 = this->_padding_;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  uVar5 = GetResourceID(this);
  return uVar5;
}

// PostInitProperties @ 146cf5f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTaskResource::PostInitProperties(UGameplayTaskResource *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  char cVar8;
  schar *psVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *_Dst;
  byte local_res8 [8];
  TPairInitializer<FName_&&,signed_char_&&> local_res10;
  schar **local_48;
  byte *local_40;
  void *local_38 [2];
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) && ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0)) {
    bVar3 = IsReloadActive();
    uVar5 = this->bManuallySetID;
    if (bVar3) {
      if ((uVar5 == 0) || (this->ManualResourceID == -1)) {
        lVar1 = this->_padding_;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
        if (ClassNameToIDMap._8_4_ != ClassNameToIDMap._52_4_) {
          lVar10 = 0x154c0f8e8;
          if (ClassNameToIDMap._64_8_ != 0) {
            lVar10 = ClassNameToIDMap._64_8_;
          }
          iVar6 = *(int *)(lVar10 + (ulonglong)
                                    (ClassNameToIDMap._72_4_ - 1 &
                                    (int)((ulonglong)lVar1 >> 0x20) + uVar5) * 4);
          if (iVar6 != -1) {
            while (lVar10 = ClassNameToIDMap._0_8_ + (longlong)iVar6 * 0x14,
                  *(longlong *)(ClassNameToIDMap._0_8_ + (longlong)iVar6 * 0x14) != lVar1) {
              iVar6 = *(int *)(lVar10 + 0xc);
              if (iVar6 == -1) {
                return;
              }
            }
            psVar9 = (schar *)(lVar10 + 8);
            if (lVar10 == 0) {
              psVar9 = (schar *)0x0;
            }
            if (psVar9 != (schar *)0x0) {
              this->AutoResourceID = *psVar9;
              return;
            }
          }
        }
      }
    }
    else {
      if (((uVar5 == 0) || (this->ManualResourceID == -1)) && (this->AutoResourceID == -1)) {
        cVar8 = (char)NextAutoResID;
        NextAutoResID = NextAutoResID + 1;
        this->AutoResourceID = cVar8;
        if (('\x0f' < cVar8) && (1 < (byte)LogGameplayTasks._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTasks);
        }
      }
      bVar4 = GetResourceID(this);
      uVar5 = ResourceDescriptions.ArrayNum;
      if (ResourceDescriptions.ArrayNum < (int)(bVar4 + 1)) {
        uVar5 = bVar4 + 1;
      }
      if (ResourceDescriptions.ArrayNum < (int)uVar5) {
        iVar11 = uVar5 - ResourceDescriptions.ArrayNum;
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar11,&ResourceDescriptions.AllocatorInstance,
                           &ResourceDescriptions.ArrayNum,&ResourceDescriptions.ArrayMax);
        memset(ResourceDescriptions.AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
               (longlong)iVar11 << 4);
      }
      else {
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 < ResourceDescriptions.ArrayNum) {
          uVar12 = ResourceDescriptions.ArrayNum - uVar5;
          if (((int)(uVar12 | uVar5) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar12 != 0) {
            _Dst = ResourceDescriptions.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
            DestructItems<FString,int>((FString *)_Dst,uVar12);
            iVar6 = (ResourceDescriptions.ArrayNum - uVar12) - uVar5;
            if (iVar6 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0x10,(longlong)iVar6 << 4);
            }
            ResourceDescriptions.ArrayNum = ResourceDescriptions.ArrayNum - uVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&ResourceDescriptions.AllocatorInstance,ResourceDescriptions.ArrayNum,
                       &ResourceDescriptions.ArrayMax);
          }
        }
      }
      pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_38);
      if ((ResourceDescriptions.ArrayNum <= (int)(uint)bVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::operator=
                ((FString *)(ResourceDescriptions.AllocatorInstance.Data + (ulonglong)bVar4 * 0x10),
                 pFVar7);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      local_res10.Value = (schar *)this->_padding_;
      local_48 = &local_res10.Value;
      local_40 = local_res8;
      local_res8[0] = bVar4;
      TSet<TTuple<FName,signed_char>,TDefaultMapHashableKeyFuncs<FName,signed_char,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,signed_char_&&>_>
                ((TSet<TTuple<FName,signed_char>,TDefaultMapHashableKeyFuncs<FName,signed_char,0>,FDefaultSetAllocator>
                  *)&ClassNameToIDMap,&local_res10,(bool *)&local_48);
    }
  }
  return;
}

// StaticRegisterNativesUGameplayTaskResource @ 146cf7c60

void __cdecl UGameplayTaskResource::StaticRegisterNativesUGameplayTaskResource(void)

{
  return;
}

// UpdateAutoResourceID @ 146cf8600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTaskResource::UpdateAutoResourceID(UGameplayTaskResource *this)

{
  char cVar1;
  
  if (this->AutoResourceID == -1) {
    cVar1 = (char)NextAutoResID;
    NextAutoResID = NextAutoResID + 1;
    this->AutoResourceID = cVar1;
    if (('\x0f' < cVar1) && (1 < (byte)LogGameplayTasks._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTasks);
      return;
    }
  }
  return;
}

