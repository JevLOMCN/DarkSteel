// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FCultureFilter @ 1416d4410

FCultureFilter * __thiscall
FCultureFilter::FCultureFilter
          (FCultureFilter *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  EBuildConfiguration EVar1;
  
  *(undefined8 *)&(this->EnabledCultures).Elements = 0;
  *(undefined8 *)&(this->EnabledCultures).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledCultures).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x34 = 0;
  (this->EnabledCultures).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledCultures).HashSize = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x34 = 0;
  (this->DisabledCultures).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledCultures).HashSize = 0;
  EVar1 = FApp::GetBuildConfiguration();
  Init(this,EVar1,Engine|Game,param_1);
  return this;
}

// FCultureFilter @ 1416d44b0

FCultureFilter * __thiscall
FCultureFilter::FCultureFilter
          (FCultureFilter *this,EBuildConfiguration param_1,ELocalizationLoadFlags param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  *(undefined8 *)&(this->EnabledCultures).Elements = 0;
  *(undefined8 *)&(this->EnabledCultures).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledCultures).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledCultures).Elements.field_0x34 = 0;
  (this->EnabledCultures).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledCultures).HashSize = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledCultures).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledCultures).Elements.field_0x34 = 0;
  (this->DisabledCultures).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledCultures).HashSize = 0;
  Init(this,param_1,param_2,param_3);
  return this;
}

// operator() @ 1416db7e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
`FCultureFilter::Init'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GConfig && GConfig->IsReadyForUse()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\CultureFilter.cpp"
                       ,0x2d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((*(byte *)this & 8) != 0) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,L"Internationalization",param_1,&local_58,&GEngineIni);
    if (__return_storage_ptr__ == &local_58) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    lVar7 = (longlong)local_58.ArrayNum;
    if (local_58.ArrayNum != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_58.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
                         piVar2);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
              local_58.AllocatorInstance.Data,lVar7 << 4);
      local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    }
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,0);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  if ((*(byte *)this & 2) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,L"Internationalization",param_1,&local_48,&GEditorIni);
    if (__return_storage_ptr__ == &local_48) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    lVar7 = (longlong)local_48.ArrayNum;
    if (local_48.ArrayNum != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_48.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
                         piVar2);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
              local_48.AllocatorInstance.Data,lVar7 << 4);
      local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,0);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if ((*(byte *)this & 4) != 0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,L"Internationalization",param_1,&local_38,&GGameIni);
    if (__return_storage_ptr__ == &local_38) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    lVar7 = (longlong)local_38.ArrayNum;
    if (local_38.ArrayNum != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_38.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
                         piVar2);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
              local_38.AllocatorInstance.Data,lVar7 << 4);
      local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
    }
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,0);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1416dc4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FCultureFilter::Init'::__l2::<lambda_2>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  void *_Src;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *this_01;
  undefined1 local_res10 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res18;
  uint local_res20;
  undefined1 local_88 [8];
  FString local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  
  local_res18 = param_2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve(param_2,param_1->ArrayNum);
  local_res20 = param_1->ArrayNum;
  uVar4 = (ulonglong)(int)local_res20;
  this_01 = (param_1->AllocatorInstance).Data;
  pFVar8 = this_01 + uVar4 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_01 == pFVar8) {
      return;
    }
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    ::FString::FString(&local_50,L";");
    bVar1 = ::FString::Split((FString *)this_01,&local_50,&local_80,&local_60,CaseSensitive,
                             FromStart);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      iVar2 = ::FString::ParseIntoArray(&local_60,&local_70,L",",true);
      if (iVar2 != 0) {
        iVar2 = local_70.ArrayNum;
        pFVar7 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
        FVar6.Data = local_70.AllocatorInstance.Data;
        do {
          if (local_70.ArrayNum != iVar2) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar6.Data == pFVar7) {
            DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum)
            ;
            if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.AllocatorInstance.Data);
            }
            goto LAB_1416dc747;
          }
          iVar5 = *(int *)(*(undefined8 **)this + 1);
          if (iVar5 == *(int *)(FVar6.Data + 8)) {
            param_2 = local_res18;
            if (iVar5 < 2) break;
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)**(undefined8 **)this,*(wchar_t **)FVar6.Data);
            bVar1 = iVar5 == 0;
          }
          else {
            bVar1 = iVar5 + *(int *)(FVar6.Data + 8) == 1;
          }
          param_2 = local_res18;
          if (bVar1) break;
          FVar6.Data = FVar6.Data + 0x10;
        } while( true );
      }
      DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
LAB_1416dc6cc:
      iVar2 = local_80.Data.ArrayNum;
    }
    else {
      if ((FScriptContainerElement *)&local_80 == this_01) goto LAB_1416dc6cc;
      iVar2 = *(int *)(this_01 + 8);
      _Src = *(void **)&this_01->field_0x0;
      local_80.Data.ArrayNum = iVar2;
      if ((iVar2 != 0) || (local_80.Data.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_80.Data.ArrayMax,(ForAnyElementType *)&local_80,iVar2,
                   &local_80.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_80.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
        goto LAB_1416dc6cc;
      }
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      iVar2 = 0;
    }
    this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
               ((longlong)this + 8);
    if (this_00 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
LAB_1416dc734:
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (param_2,(FString *)local_88,(bool *)&local_80);
    }
    else {
      iVar5 = iVar2 + -1;
      FVar6.Data = local_80.Data.AllocatorInstance.Data;
      if (iVar2 == 0) {
        iVar5 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
      iVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(this_00,uVar3,&local_80);
      if (iVar2 != -1) goto LAB_1416dc734;
      if (2 < (byte)LogLocalization._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalization);
      }
    }
LAB_1416dc747:
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    uVar4 = (ulonglong)local_res20;
    this_01 = this_01 + 0x10;
    param_2 = local_res18;
  } while( true );
}

// Init @ 1416fe100

void __thiscall
FCultureFilter::Init
          (FCultureFilter *this,EBuildConfiguration param_1,ELocalizationLoadFlags param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  wchar_t *pwVar1;
  EBuildConfiguration EVar2;
  ELocalizationLoadFlags local_res10 [8];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString *local_18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_10;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  EVar2 = Debug;
  if (param_1 != DebugGame) {
    EVar2 = param_1;
  }
  if (EVar2 != Unknown) {
    pwVar1 = ::LexToString(EVar2);
    ::FString::operator=(&local_48,pwVar1);
  }
  local_18 = &local_48;
  local_res10[0] = param_2;
  local_10 = param_3;
  `FCultureFilter::Init'::__l2::<lambda_1>::operator()(local_res10,&local_28,L"EnabledCultures");
  `FCultureFilter::Init'::__l2::<lambda_2>::operator()(&local_18,&local_28,&this->EnabledCultures);
  `FCultureFilter::Init'::__l2::<lambda_1>::operator()(local_res10,&local_38,L"DisabledCultures");
  `FCultureFilter::Init'::__l2::<lambda_2>::operator()(&local_18,&local_38,&this->DisabledCultures);
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// IsCultureAllowed @ 141701760

bool __thiscall FCultureFilter::IsCultureAllowed(FCultureFilter *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  if (*(int *)&(this->EnabledCultures).Elements.field_0x8 !=
      *(int *)&(this->EnabledCultures).Elements.field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this->EnabledCultures,uVar2,param_1);
    if (iVar3 == -1) {
      return false;
    }
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->DisabledCultures,uVar2,param_1);
  if (iVar3 != -1) {
    return false;
  }
  return true;
}

