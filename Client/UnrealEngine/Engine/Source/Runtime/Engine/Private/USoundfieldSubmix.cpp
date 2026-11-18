// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 148675d60

UClass * __cdecl USoundfieldSubmix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldSubmix",
               &Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton,
               StaticRegisterNativesUSoundfieldSubmix,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton;
}

// USoundfieldSubmix @ 148698b40

USoundfieldSubmix * __thiscall
USoundfieldSubmix::USoundfieldSubmix(USoundfieldSubmix *this,FVTableHelper *param_1)

{
  USoundSubmixWithParentBase::USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
  (this->SoundfieldEncodingFormat).ComparisonIndex = 0;
  (this->SoundfieldEncodingFormat).Number = 0;
  (this->EncodingSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  (this->SoundfieldEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundfieldEffectChain).ArrayNum = 0;
  (this->SoundfieldEffectChain).ArrayMax = 0;
  (this->EncodingSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// USoundfieldSubmix @ 148698b90

USoundfieldSubmix * __thiscall
USoundfieldSubmix::USoundfieldSubmix(USoundfieldSubmix *this,FObjectInitializer *param_1)

{
  USoundSubmixWithParentBase::USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
  ISoundfieldFactory::GetFormatNameForInheritedEncoding();
  (this->EncodingSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  (this->SoundfieldEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundfieldEffectChain).ArrayNum = 0;
  (this->SoundfieldEffectChain).ArrayMax = 0;
  (this->EncodingSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~USoundfieldSubmix @ 14869c2c0

void __thiscall USoundfieldSubmix::~USoundfieldSubmix(USoundfieldSubmix *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
  pFVar1 = (this->SoundfieldEffectChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USoundSubmixWithParentBase::~USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this);
  return;
}

// GetEncodingSettings @ 1486be110

USoundfieldEncodingSettingsBase * __thiscall
USoundfieldSubmix::GetEncodingSettings(USoundfieldSubmix *this)

{
  bool bVar1;
  UClass *pUVar2;
  FName FVar3;
  USoundfieldEncodingSettingsBase *pUVar4;
  ISoundfieldFactory *pIVar5;
  USoundfieldSubmix *this_00;
  FName local_res8 [2];
  
  GetSubmixFormat(this);
  if (this->_padding_ != 0) {
    pUVar2 = StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      this_00 = (USoundfieldSubmix *)this->_padding_;
      goto LAB_1486be154;
    }
  }
  this_00 = (USoundfieldSubmix *)0x0;
LAB_1486be154:
  pUVar4 = (this->EncodingSettings).field0_0x0.DebugPtr;
  if (pUVar4 == (USoundfieldEncodingSettingsBase *)0x0) {
    if (this_00 != (USoundfieldSubmix *)0x0) {
      FVar3 = ISoundfieldFactory::GetFormatNameForInheritedEncoding();
      if (this->SoundfieldEncodingFormat == *(FName *)FVar3) {
        pUVar4 = GetEncodingSettings(this_00);
        return pUVar4;
      }
    }
    pIVar5 = ISoundfieldFactory::Get(local_res8);
    pUVar4 = (USoundfieldEncodingSettingsBase *)0x0;
    if (pIVar5 != (ISoundfieldFactory *)0x0) {
      pUVar4 = (USoundfieldEncodingSettingsBase *)(**(code **)((longlong)*pIVar5 + 0x60))(pIVar5);
      return pUVar4;
    }
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 1486c5ca0

UClass * __cdecl USoundfieldSubmix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldSubmix",
               &Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton,
               StaticRegisterNativesUSoundfieldSubmix,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton;
}

// GetSoundfieldEncodingSettings @ 1486c8350

USoundfieldEncodingSettingsBase * __thiscall
USoundfieldSubmix::GetSoundfieldEncodingSettings(USoundfieldSubmix *this)

{
  bool bVar1;
  UClass *pUVar2;
  FName FVar3;
  USoundfieldEncodingSettingsBase *pUVar4;
  ISoundfieldFactory *pIVar5;
  USoundfieldSubmix *this_00;
  FName aFStackX_8 [2];
  
  GetSubmixFormat(this);
  if (this->_padding_ != 0) {
    pUVar2 = StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      this_00 = (USoundfieldSubmix *)this->_padding_;
      goto LAB_1486be154;
    }
  }
  this_00 = (USoundfieldSubmix *)0x0;
LAB_1486be154:
  pUVar4 = (this->EncodingSettings).field0_0x0.DebugPtr;
  if (pUVar4 == (USoundfieldEncodingSettingsBase *)0x0) {
    if (this_00 != (USoundfieldSubmix *)0x0) {
      FVar3 = ISoundfieldFactory::GetFormatNameForInheritedEncoding();
      if (this->SoundfieldEncodingFormat == *(FName *)FVar3) {
        pUVar4 = GetEncodingSettings(this_00);
        return pUVar4;
      }
    }
    pIVar5 = ISoundfieldFactory::Get(aFStackX_8);
    pUVar4 = (USoundfieldEncodingSettingsBase *)0x0;
    if (pIVar5 != (ISoundfieldFactory *)0x0) {
      pUVar4 = (USoundfieldEncodingSettingsBase *)(**(code **)((longlong)*pIVar5 + 0x60))(pIVar5);
      return pUVar4;
    }
  }
  return pUVar4;
}

// GetSoundfieldFactoryForSubmix @ 1486c8380

ISoundfieldFactory * __thiscall
USoundfieldSubmix::GetSoundfieldFactoryForSubmix(USoundfieldSubmix *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  ISoundfieldFactory *pIVar4;
  FName local_res10 [3];
  
  GetSubmixFormat(this);
  FVar3 = ISoundfieldFactory::GetFormatNameForInheritedEncoding();
  if (local_res10[0] == *(FName *)FVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundfieldFormat != ISoundfieldFactory::GetFormatNameForInheritedEncoding()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundSubmix.cpp"
                       ,0x386,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (ISoundfieldFactory *)(*pcVar1)();
      return pIVar4;
    }
  }
  pIVar4 = ISoundfieldFactory::Get(local_res10);
  return pIVar4;
}

// GetSoundfieldProcessors @ 1486c8470

TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> * __thiscall
USoundfieldSubmix::GetSoundfieldProcessors
          (USoundfieldSubmix *this,
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

// GetSubmixFormat @ 1486c8a90

FName __thiscall USoundfieldSubmix::GetSubmixFormat(USoundfieldSubmix *this)

{
  USoundfieldSubmix *this_00;
  bool bVar1;
  UClass *pUVar2;
  FName FVar3;
  FName in_RDX;
  
  if (this->_padding_ != 0) {
    pUVar2 = StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if ((bVar1) &&
       (this_00 = (USoundfieldSubmix *)this->_padding_, this_00 != (USoundfieldSubmix *)0x0)) {
      FVar3 = ISoundfieldFactory::GetFormatNameForInheritedEncoding();
      if (this->SoundfieldEncodingFormat == *(FName *)FVar3) {
        GetSubmixFormat(this_00);
        return in_RDX;
      }
    }
  }
  FVar3 = ISoundfieldFactory::GetFormatNameForInheritedEncoding();
  if (this->SoundfieldEncodingFormat == *(FName *)FVar3) {
    ISoundfieldFactory::GetFormatNameForNoEncoding();
    return in_RDX;
  }
  *(FName *)in_RDX = this->SoundfieldEncodingFormat;
  return in_RDX;
}

// PostLoad @ 1486e1c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundfieldSubmix::PostLoad(USoundfieldSubmix *this)

{
  ForAnyElementType FVar1;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  ISoundfieldFactory::GetAvailableSoundfieldFormats(&local_48);
  if ((FName *)local_48.AllocatorInstance.Data !=
      (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8)) {
    FVar1.Data = local_48.AllocatorInstance.Data;
    do {
      if (*(FName *)FVar1.Data == this->SoundfieldEncodingFormat) goto LAB_1486e1dd7;
      FVar1.Data = FVar1.Data + 8;
    } while ((FName *)FVar1.Data !=
             (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8));
  }
  ISoundfieldFactory::GetFormatNameForNoEncoding();
  if (2 < (byte)LogAudio._0_1_) {
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString(&this->SoundfieldEncodingFormat,&local_38);
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
  this->SoundfieldEncodingFormat = local_res10;
  SanitizeLinks(this);
LAB_1486e1dd7:
  USoundSubmixBase::PostLoad((USoundSubmixBase *)this);
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// SanitizeLinks @ 1486ec180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundfieldSubmix::SanitizeLinks(USoundfieldSubmix *this)

{
  FObjectPtr_u_0 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  FString *pFVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  TObjectPtr<USoundSubmixBase>_u_0 local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar8 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8;
    do {
      uVar13 = 0;
      uVar11 = ~uVar8 >> 0x1f;
      uVar4 = uVar13;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = uVar11;
      }
      if (uVar4 == 0) {
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
      bVar3 = SubmixUtils::AreSubmixFormatsCompatible
                        (*(USoundSubmixBase **)(this->_padding_ + lVar10 * 8),
                         (USoundSubmixBase *)this);
      if (!bVar3) {
        uVar4 = uVar13;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar4 = uVar11;
        }
        if (uVar4 == 0) {
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
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + lVar10 * 8);
        if (*(longlong *)(this->_padding_ + lVar10 * 8) == 0) {
          pFVar6 = GetTypeName<USoundSubmixWithParentBase>(&local_38);
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar9);
        }
        pUVar5 = USoundSubmixWithParentBase::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
        if ((!bVar3) || (this_00->Handle == (UObject *)0x0)) {
          pFVar6 = GetTypeName<USoundSubmixWithParentBase>(&local_58);
          pwVar9 = L"";
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          pFVar6 = GetFullNameForCastLogError<USoundSubmixBase>
                             (&local_48,(USoundSubmixBase *)this_00->Handle);
          if ((pFVar6->Data).ArrayNum != 0) {
            pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar9,pwVar12);
        }
        *(undefined8 *)((longlong)this_00->Handle + 0x90) = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar13 = uVar11;
        }
        if (uVar13 == 0) {
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
        uVar4 = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar4 = uVar11;
        }
        if (uVar4 == 0) {
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
        iVar1 = (int)this->_padding_;
        iVar7 = ~uVar8 + iVar1;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove((void *)(this->_padding_ + (longlong)(int)uVar8 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar1 - iVar7) * 8),(longlong)iVar7 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
      }
      lVar10 = lVar10 + -1;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if ((USoundSubmixBase *)this->_padding_ != (USoundSubmixBase *)0x0) {
    bVar3 = SubmixUtils::AreSubmixFormatsCompatible
                      ((USoundSubmixBase *)this,(USoundSubmixBase *)this->_padding_);
    if (!bVar3) {
      lVar10 = this->_padding_;
      local_res8 = (TObjectPtr<USoundSubmixBase>_u_0)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::RemoveSwap
                ((TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x30)
                 ,(TObjectPtr<USoundSubmixBase> *)&local_res8.ObjectPtr,Default);
      this->_padding_ = 0;
    }
  }
  return;
}

// StaticRegisterNativesUSoundfieldSubmix @ 1486f1b20

void __cdecl USoundfieldSubmix::StaticRegisterNativesUSoundfieldSubmix(void)

{
  return;
}

