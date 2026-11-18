// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 15

// StaticClass @ 146c13bb0

UClass * __cdecl UFileMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"FileMediaSource",
               &Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton,
               StaticRegisterNativesUFileMediaSource,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UFileMediaSource>,
               InternalVTableHelperCtorCaller<UFileMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton;
}

// UFileMediaSource @ 146c1cda0

UFileMediaSource * __thiscall
UFileMediaSource::UFileMediaSource(UFileMediaSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->_padding_ = 0;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->ResolvedFullPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedFullPath).Data.ArrayNum = 0;
  (this->ResolvedFullPath).Data.ArrayMax = 0;
  return this;
}

// UFileMediaSource @ 146c1ce20

UFileMediaSource * __thiscall
UFileMediaSource::UFileMediaSource(UFileMediaSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->_padding_ = 0;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->ResolvedFullPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedFullPath).Data.ArrayNum = 0;
  (this->ResolvedFullPath).Data.ArrayMax = 0;
  return this;
}

// ~UFileMediaSource @ 146c1e7c0

void __thiscall UFileMediaSource::~UFileMediaSource(UFileMediaSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  pFVar1 = (this->ResolvedFullPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// ClearResolvedFullPath @ 146c215c0

void __thiscall UFileMediaSource::ClearResolvedFullPath(UFileMediaSource *this)

{
  ::FString::Empty(&this->ResolvedFullPath);
  return;
}

// GetFullPath @ 146c28c60

FString * __thiscall
UFileMediaSource::GetFullPath(UFileMediaSource *this,FString *__return_storage_ptr__)

{
  ResolveFullPath(this);
  ::FString::FString(__return_storage_ptr__,&this->ResolvedFullPath);
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a5a0

bool __thiscall UFileMediaSource::GetMediaOption(UFileMediaSource *this,FName *param_1,bool param_2)

{
  FVariant *this_00;
  
  if (*param_1 == FileMediaSource::PrecacheFileOption) {
    return (bool)(char)this->_padding_;
  }
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Bool)) {
    param_2 = FVariant::GetValue<bool>(this_00);
  }
  return param_2;
}

// GetPrivateStaticClass @ 146c2c830

UClass * __cdecl UFileMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"FileMediaSource",
               &Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton,
               StaticRegisterNativesUFileMediaSource,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UFileMediaSource>,
               InternalVTableHelperCtorCaller<UFileMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton;
}

// GetUrl @ 146c2dfc0

FString * __thiscall
UFileMediaSource::GetUrl(UFileMediaSource *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  ResolveFullPath(this);
  local_28.Data.ArrayNum = (this->ResolvedFullPath).Data.ArrayNum;
  lVar2 = (longlong)local_28.Data.ArrayNum;
  _Src = (this->ResolvedFullPath).Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  pFVar1 = ::FString::FString(&local_18,L"file://");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasMediaOption @ 146c2edf0

bool __thiscall UFileMediaSource::HasMediaOption(UFileMediaSource *this,FName *param_1)

{
  bool bVar1;
  
  if (*param_1 == FileMediaSource::PrecacheFileOption) {
    return true;
  }
  bVar1 = UMediaSource::HasMediaOption((UMediaSource *)this,param_1);
  return bVar1;
}

// ResolveFullPath @ 146c34a00

void __thiscall UFileMediaSource::ResolveFullPath(UFileMediaSource *this)

{
  undefined8 *puVar1;
  FString *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FString local_a8;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  this_00 = &this->ResolvedFullPath;
  if ((this->ResolvedFullPath).Data.ArrayNum < 2) {
    pFVar5 = &this->FilePath;
    ::FString::operator=(this_00,pFVar5);
    bVar3 = FPaths::IsRelative(pFVar5);
    if (bVar3) {
      bVar3 = ::FString::StartsWith(this_00,L"./",2,IgnoreCase);
      iVar11 = 0;
      if (bVar3) {
        FPaths::ProjectContentDir((FString *)&local_48);
        FPaths::ProjectDir(&local_38);
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,2,0,(ForAnyElementType *)&local_a8,2,&local_a8.Data.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_a8.Data.AllocatorInstance.Data,(FString *)&local_48,2);
        puVar7 = &stack0xffffffffffffffd8;
        lVar9 = 2;
        do {
          puVar1 = (undefined8 *)(puVar7 + -0x10);
          puVar7 = puVar7 + -0x10;
          lVar9 = lVar9 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
          iVar12 = local_a8.Data.ArrayNum;
        } while (lVar9 != 0);
        pFVar8 = local_a8.Data.AllocatorInstance.Data + (longlong)local_a8.Data.ArrayNum * 0x10;
        FVar10.Data = local_a8.Data.AllocatorInstance.Data;
        while( true ) {
          if (local_a8.Data.ArrayNum != iVar12) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar10.Data == pFVar8) {
            DestructItems<FString,int>
                      ((FString *)local_a8.Data.AllocatorInstance.Data,local_a8.Data.ArrayNum);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            goto LAB_146c34c72;
          }
          pFVar4 = ::FString::RightChop(pFVar5,&local_58,2);
          local_48.DataPtr = *(wchar_t **)FVar10.Data;
          local_38.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
          iVar13 = (pFVar4->Data).ArrayNum;
          local_48.Size = *(int *)(FVar10.Data + 8) + -1;
          if (*(int *)(FVar10.Data + 8) == 0) {
            local_48.Size = iVar11;
          }
          local_38.Data.ArrayNum = iVar13 + -1;
          if (iVar13 == 0) {
            local_38.Data.ArrayNum = iVar11;
          }
          FPaths::CombineInternal(&local_88,&local_48,2);
          if (this_00 != &local_88) {
            pFVar2 = (this_00->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (this_00->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
            (this->ResolvedFullPath).Data.ArrayNum = local_88.Data.ArrayNum;
            (this->ResolvedFullPath).Data.ArrayMax = local_88.Data.ArrayMax;
            local_88.Data.ArrayNum = 0;
            local_88.Data.ArrayMax = 0;
            local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          FPaths::ConvertRelativePathToFull(&local_68,this_00);
          bVar3 = FPaths::FileExists(&local_68);
          if (bVar3) break;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          FVar10.Data = FVar10.Data + 0x10;
        }
        iVar12 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar12 = iVar11;
        }
        ::FString::AssignRange(this_00,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_a8.Data.AllocatorInstance.Data,local_a8.Data.ArrayNum);
        local_78.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      else {
LAB_146c34c72:
        FGenericPlatformMisc::GetAdditionalRootDirectories(&local_78);
        local_90 = (this->ResolvedFullPath).Data.ArrayNum;
        lVar9 = (longlong)local_90;
        pFVar8 = (this_00->Data).AllocatorInstance.Data;
        local_98.Data = (FScriptContainerElement *)0x0;
        if (local_90 == 0) {
          local_8c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_90,0,&local_98,local_90,&local_8c);
          memcpy(local_98.Data,pFVar8,lVar9 * 2);
        }
        pFVar5 = FPaths::GetRelativePathToRoot();
        iVar12 = (pFVar5->Data).ArrayNum;
        if (iVar12 == 0) {
          pwVar6 = L"";
          iVar12 = iVar11;
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          iVar12 = iVar12 + -1;
        }
        bVar3 = ::FString::StartsWith(this_00,pwVar6,iVar12,IgnoreCase);
        if (bVar3) {
          pFVar5 = FPaths::GetRelativePathToRoot();
          iVar12 = (pFVar5->Data).ArrayNum;
          iVar13 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar13 = iVar11;
          }
          ::FString::RightChop(this_00,&local_68,iVar13);
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
          local_98.Data = local_68.Data.AllocatorInstance.Data;
          local_90 = local_68.Data.ArrayNum;
          local_8c = local_68.Data.ArrayMax;
        }
        iVar12 = local_78.ArrayNum;
        pFVar8 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
        FVar10.Data = local_78.AllocatorInstance.Data;
        while( true ) {
          if (local_78.ArrayNum != iVar12) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar10.Data == pFVar8) break;
          local_48.DataPtr = *(wchar_t **)FVar10.Data;
          local_48.Size = *(int *)(FVar10.Data + 8) + -1;
          if (*(int *)(FVar10.Data + 8) == 0) {
            local_48.Size = iVar11;
          }
          local_38.Data.AllocatorInstance.Data = local_98.Data;
          local_38.Data.ArrayNum = local_90 + -1;
          if (local_90 == 0) {
            local_38.Data.ArrayNum = 0;
          }
          FPaths::CombineInternal(&local_a8,&local_48,2);
          FPaths::ConvertRelativePathToFull(&local_68,&local_a8);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          bVar3 = FPaths::FileExists(&local_68);
          if (bVar3) {
            iVar13 = local_68.Data.ArrayNum + -1;
            if (local_68.Data.ArrayNum == 0) {
              iVar13 = 0;
            }
            ::FString::AssignRange(this_00,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar13);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          FVar10.Data = FVar10.Data + 0x10;
        }
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
        DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetFilePath @ 146c35e60

void __thiscall UFileMediaSource::SetFilePath(UFileMediaSource *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::Empty(&this->ResolvedFullPath);
  if (((param_1->Data).ArrayNum < 2) ||
     (bVar1 = ::FString::StartsWith(param_1,L"./",2,IgnoreCase), bVar1)) {
    ::FString::operator=(&this->FilePath,param_1);
  }
  else {
    FPaths::ConvertRelativePathToFull(&local_48,param_1);
    pFVar2 = FPaths::ProjectContentDir(&local_38);
    FPaths::ConvertRelativePathToFull(&local_28,pFVar2);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    bVar1 = ::FString::StartsWith(&local_48,(wchar_t *)FVar3.Data,iVar4,IgnoreCase);
    if (bVar1) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_48,(wchar_t *)FVar3.Data);
      pFVar2 = ::FString::FString(&local_18,L"./");
      ::FString::ConcatFF(&local_38,pFVar2,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      local_48.Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->FilePath,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUFileMediaSource @ 146c37e00

void __cdecl UFileMediaSource::StaticRegisterNativesUFileMediaSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFileMediaSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Validate @ 146c3a8a0

bool __thiscall UFileMediaSource::Validate(UFileMediaSource *this)

{
  code *pcVar1;
  bool bVar2;
  
  ResolveFullPath(this);
  if (((this->ResolvedFullPath).Data.ArrayNum < 2) && (1 < (this->FilePath).Data.ArrayNum)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ResolvedFullPath.IsEmpty() == false) || FilePath.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\FileMediaSource.cpp"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FPaths::FileExists(&this->ResolvedFullPath);
  return bVar2;
}

// execSetFilePath @ 146c41900

void __cdecl UFileMediaSource::execSetFilePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 *puVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Empty((FString *)(param_1 + 4));
  iVar4 = local_48.Data.ArrayNum;
  if (1 < local_48.Data.ArrayNum) {
    bVar2 = ::FString::StartsWith(&local_48,L"./",2,IgnoreCase);
    if (!bVar2) {
      FPaths::ConvertRelativePathToFull(&local_58,&local_48);
      pFVar3 = FPaths::ProjectContentDir(&local_38);
      FPaths::ConvertRelativePathToFull(&local_28,pFVar3);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar4 = local_28.Data.ArrayNum + -1;
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
      if (local_28.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      bVar2 = ::FString::StartsWith(&local_58,(wchar_t *)FVar5.Data,iVar4,IgnoreCase);
      if (bVar2) {
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar5.Data = local_28.Data.AllocatorInstance.Data;
        }
        FPaths::MakePathRelativeTo(&local_58,(wchar_t *)FVar5.Data);
        pFVar3 = ::FString::FString(&local_18,L"./");
        ::FString::ConcatFF(&local_38,pFVar3,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.ArrayNum = local_38.Data.ArrayNum;
        local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        local_58.Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange
                ((FString *)&param_1[3].field_0x10,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                 iVar4);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_146c41b2e;
    }
    iVar4 = local_48.Data.ArrayNum;
  }
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  puVar6 = &param_1[3].field_0x10;
  if ((FString *)puVar6 != &local_48) {
    *(int *)&param_1[3].field_0x18 = iVar4;
    if ((iVar4 == 0) && (*(int *)&param_1[3].field_0x1c == 0)) {
      *(undefined4 *)&param_1[3].field_0x1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,*(int *)&param_1[3].field_0x1c,(ForAnyElementType *)puVar6,iVar4,
                 (int *)&param_1[3].field_0x1c);
      if (iVar4 != 0) {
        memcpy(*(void **)puVar6,FVar5.Data,(longlong)iVar4 * 2);
      }
    }
  }
LAB_146c41b2e:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

