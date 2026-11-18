// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 148676d60

UClass * __cdecl USoundfieldEndpointSubmix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldEndpointSubmix",
               &Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton,
               StaticRegisterNativesUSoundfieldEndpointSubmix,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldEndpointSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSubmix>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton;
}

// USoundfieldEndpointSubmix @ 1486989f0

USoundfieldEndpointSubmix * __thiscall
USoundfieldEndpointSubmix::USoundfieldEndpointSubmix
          (USoundfieldEndpointSubmix *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundfieldEndpointSubmix__6B_;
  (this->SoundfieldEndpointType).ComparisonIndex = 0;
  (this->SoundfieldEndpointType).Number = 0;
  (this->EndpointSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EndpointSettings).field0_0x0.DebugPtr = (USoundfieldEndpointSettingsBase *)0x0;
  (this->EncodingSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EncodingSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  (this->SoundfieldEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundfieldEffectChain).ArrayNum = 0;
  (this->SoundfieldEffectChain).ArrayMax = 0;
  return this;
}

// USoundfieldEndpointSubmix @ 148698a90

USoundfieldEndpointSubmix * __thiscall
USoundfieldEndpointSubmix::USoundfieldEndpointSubmix
          (USoundfieldEndpointSubmix *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundfieldEndpointSubmix__6B_;
  ISoundfieldEndpointFactory::DefaultSoundfieldEndpointName();
  (this->EndpointSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EndpointSettings).field0_0x0.DebugPtr = (USoundfieldEndpointSettingsBase *)0x0;
  (this->EncodingSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EncodingSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  (this->SoundfieldEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundfieldEffectChain).ArrayNum = 0;
  (this->SoundfieldEffectChain).ArrayMax = 0;
  return this;
}

// ~USoundfieldEndpointSubmix @ 14869c240

void __thiscall
USoundfieldEndpointSubmix::~USoundfieldEndpointSubmix(USoundfieldEndpointSubmix *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundfieldEndpointSubmix__6B_;
  pFVar1 = (this->SoundfieldEffectChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetEncodingSettings @ 1486be100

USoundfieldEncodingSettingsBase * __thiscall
USoundfieldEndpointSubmix::GetEncodingSettings(USoundfieldEndpointSubmix *this)

{
  return (this->EncodingSettings).field0_0x0.DebugPtr;
}

// GetEndpointSettings @ 1486be1e0

USoundfieldEndpointSettingsBase * __thiscall
USoundfieldEndpointSubmix::GetEndpointSettings(USoundfieldEndpointSubmix *this)

{
  return (this->EndpointSettings).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1486c5be0

UClass * __cdecl USoundfieldEndpointSubmix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldEndpointSubmix",
               &Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton,
               StaticRegisterNativesUSoundfieldEndpointSubmix,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldEndpointSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSubmix>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton;
}

// GetSoundfieldEndpointForSubmix @ 1486c8360

ISoundfieldEndpointFactory * __thiscall
USoundfieldEndpointSubmix::GetSoundfieldEndpointForSubmix(USoundfieldEndpointSubmix *this)

{
  ISoundfieldEndpointFactory *pIVar1;
  
  pIVar1 = ISoundfieldEndpointFactory::Get(&this->SoundfieldEndpointType);
  return pIVar1;
}

// GetSoundfieldProcessors @ 1486c83e0

TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> * __thiscall
USoundfieldEndpointSubmix::GetSoundfieldProcessors
          (USoundfieldEndpointSubmix *this,
          TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->SoundfieldEffectChain).ArrayNum;
  _Src = (this->SoundfieldEffectChain).AllocatorInstance.Data;
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

// PostLoad @ 1486e1af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundfieldEndpointSubmix::PostLoad(USoundfieldEndpointSubmix *this)

{
  ForAnyElementType FVar1;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  ISoundfieldEndpointFactory::GetAllSoundfieldEndpointTypes(&local_48);
  if ((FName *)local_48.AllocatorInstance.Data !=
      (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8)) {
    FVar1.Data = local_48.AllocatorInstance.Data;
    do {
      if (*(FName *)FVar1.Data == this->SoundfieldEndpointType) goto LAB_1486e1c47;
      FVar1.Data = FVar1.Data + 8;
    } while ((FName *)FVar1.Data !=
             (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8));
  }
  ISoundfieldEndpointFactory::DefaultSoundfieldEndpointName();
  if (2 < (byte)LogAudio._0_1_) {
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString(&this->SoundfieldEndpointType,&local_38);
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->SoundfieldEndpointType = local_res10;
  SanitizeLinks(this);
LAB_1486e1c47:
  USoundSubmixBase::PostLoad((USoundSubmixBase *)this);
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// SanitizeLinks @ 1486ebed0

void __thiscall USoundfieldEndpointSubmix::SanitizeLinks(USoundfieldEndpointSubmix *this)

{
  FObjectPtr_u_0 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar9 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = SubmixUtils::AreSubmixFormatsCompatible
                        (*(USoundSubmixBase **)(this->_padding_ + lVar11 * 8),
                         (USoundSubmixBase *)this);
      if (!bVar3) {
        uVar5 = 0;
        uVar4 = uVar5;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + lVar11 * 8);
        if (*(longlong *)(this->_padding_ + lVar11 * 8) == 0) {
          pFVar7 = GetTypeName<USoundSubmixWithParentBase>(&local_38);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar10);
        }
        pUVar6 = USoundSubmixWithParentBase::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((!bVar3) || (this_00->Handle == (UObject *)0x0)) {
          pFVar7 = GetTypeName<USoundSubmixWithParentBase>(&local_58);
          pwVar10 = L"";
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          pFVar7 = GetFullNameForCastLogError<USoundSubmixBase>
                             (&local_48,(USoundSubmixBase *)this_00->Handle);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar13);
        }
        *(undefined8 *)((longlong)this_00->Handle + 0x90) = 0;
        uVar4 = uVar5;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)uVar9 < (int)this->_padding_) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar1 = (int)this->_padding_;
        iVar8 = ~uVar9 + iVar1;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)(this->_padding_ + (longlong)(int)uVar9 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar1 - iVar8) * 8),(longlong)iVar8 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
      }
      lVar11 = lVar11 + -1;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// StaticRegisterNativesUSoundfieldEndpointSubmix @ 1486f1b10

void __cdecl USoundfieldEndpointSubmix::StaticRegisterNativesUSoundfieldEndpointSubmix(void)

{
  return;
}

