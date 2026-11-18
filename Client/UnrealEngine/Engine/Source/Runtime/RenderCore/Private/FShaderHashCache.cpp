// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// AddHash @ 145e4a790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall
FShaderHashCache::AddHash(FShaderHashCache *this,EShaderPlatform param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSHAHash *pFVar3;
  undefined1 auStack_68 [32];
  TPairInitializer<FString_const_&,FSHAHash_&&> local_48;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (SP_CUSTOM_PLATFORM_LAST < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderPlatform < (sizeof(UEArrayCountHelper(Platforms)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x1cf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSHAHash *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x1d0,
                       L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::AddHash."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSHAHash *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_20 = 0;
  local_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_48.Value = (FSHAHash *)param_2;
  TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FSHAHash_&&>_>
            ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
              *)&this->Platforms[param_1].ShaderHashCache,&local_48,(bool *)&local_48.Value);
  return (FSHAHash *)
         (*(longlong *)&this->Platforms[param_1].ShaderHashCache +
         (longlong)(int)local_48.Key * 0x30 + 0x10);
}

// GetPlatformIncludeDirectory @ 145e59c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
FShaderHashCache::GetPlatformIncludeDirectory(FShaderHashCache *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (SP_CUSTOM_PLATFORM_LAST < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderPlatform < EShaderPlatform::SP_NumPlatforms",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x1fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x1fb,
                       L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::GetPlatformIncludeDirectory."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->Platforms[param_1].IncludeDirectory;
}

// Initialize @ 145e5f2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderHashCache::Initialize(FShaderHashCache *this)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  bool *pbVar3;
  FName FVar4;
  code *pcVar5;
  longlong lVar6;
  ForAnyElementType _Src;
  bool bVar7;
  EShaderPlatform EVar8;
  uint uVar9;
  FModuleManager *pFVar10;
  IModuleInterface *pIVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  uint uVar14;
  int *piVar15;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FString local_98;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong uVar16;
  
  ::FString::FString((FString *)&local_68,"");
  pbVar3 = &this->bInitialized;
  uVar19 = 0;
  if (this != (FShaderHashCache *)pbVar3) {
    piVar15 = &this->Platforms[0].IncludeDirectory.Data.ArrayMax;
    do {
      _Src.Data = local_68.AllocatorInstance.Data;
      pTVar1 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar15 + -3);
      if (pTVar1 != &local_68) {
        iVar17 = local_68.ArrayNum;
        piVar15[-1] = iVar17;
        if ((iVar17 == 0) && (*piVar15 == 0)) {
          *piVar15 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar17,*piVar15,(ForAnyElementType *)pTVar1,iVar17,piVar15);
          if (iVar17 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar17 * 2);
          }
        }
      }
      TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
               *)(piVar15 + 1));
      puVar2 = (undefined1 *)(piVar15 + 0x15);
      piVar15 = piVar15 + 0x18;
    } while ((bool *)puVar2 != pbVar3);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pFVar10 = FModuleManager::Get();
  FModuleManager::FindModules(pFVar10,L"*ShaderFormat*",&local_88);
  if ((local_88.ArrayNum == 0) && (1 < (byte)LogShaders._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FShaderHashCache::Initialize(void)___ptr64'::__l10::LOG_Static
               ,(FLogCategoryBase *)&LogShaders);
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar16 = uVar19;
  uVar20 = uVar19;
  iVar17 = local_88.ArrayNum;
  if (0 < local_88.ArrayNum) {
    do {
      uVar18 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar18 < iVar17) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = *(FName *)(local_88.AllocatorInstance.Data + uVar20);
      pFVar10 = FModuleManager::Get();
      pIVar11 = FModuleManager::LoadModuleChecked(pFVar10,FVar4);
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
      if (plVar12 != (longlong *)0x0) {
        pwVar13 = (wchar_t *)(**(code **)(*plVar12 + 0x38))(plVar12);
        ::FString::FString(&local_98,pwVar13);
        if (1 < local_98.Data.ArrayNum) {
          ::FString::FString(&local_38,"/");
          ::FString::FString(&local_48,"/");
          ::FString::ConcatFF(&local_58,&local_48,&local_98);
          ::FString::ConcatFF(&local_78,&local_58,&local_38);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          local_98.Data.ArrayNum = local_78.Data.ArrayNum;
          local_98.Data.ArrayMax = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        lVar6 = local_a0;
        uVar9 = local_a0._4_4_;
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        if ((lVar6 < 0) && (uVar9 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
        }
        (**(code **)(*plVar12 + 8))(plVar12,&local_a8);
        uVar16 = uVar19;
        if (0 < (int)local_a0) {
          do {
            uVar14 = (uint)uVar16;
            uVar9 = 0;
            if ((int)uVar14 < (int)local_a0) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            EVar8 = ShaderFormatNameToShaderPlatform
                              (*(FName *)(local_a8.Data + (longlong)(int)uVar14 * 8));
            if (EVar8 != SP_NumPlatforms) {
              uVar16 = (ulonglong)(local_98.Data.ArrayNum - 1);
              if (local_98.Data.ArrayNum == 0) {
                uVar16 = uVar19;
              }
              ::FString::AssignRange
                        (&this->Platforms[EVar8].IncludeDirectory,
                         (wchar_t *)local_98.Data.AllocatorInstance.Data,(int)uVar16);
            }
            uVar16 = (ulonglong)(uVar14 + 1);
          } while ((int)(uVar14 + 1) < (int)local_a0);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 8;
      iVar17 = local_88.ArrayNum;
    } while ((int)(uVar18 + 1) < local_88.ArrayNum);
  }
  *pbVar3 = true;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// IsPlatformInclude @ 145e60d30

bool __cdecl FShaderHashCache::IsPlatformInclude(FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::StartsWith(param_1,L"/Engine/Private/Platform/",0x19,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::StartsWith(param_1,L"/Engine/Public/Platform/",0x18,IgnoreCase);
    if (!bVar1) {
      bVar1 = ::FString::StartsWith(param_1,L"/Platform/",10,IgnoreCase);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// ShouldIgnoreInclude @ 145e6f570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderHashCache::ShouldIgnoreInclude
          (FShaderHashCache *this,FString *param_1,EShaderPlatform param_2)

{
  FScriptContainerElement *_Str;
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  size_t sVar4;
  
  bVar1 = IsPlatformInclude(param_1);
  if (!bVar1) {
    return false;
  }
  pFVar3 = GetPlatformIncludeDirectory(this,param_2);
  if ((1 < (pFVar3->Data).ArrayNum) &&
     (_Str = (pFVar3->Data).AllocatorInstance.Data, _Str != (FScriptContainerElement *)0x0)) {
    sVar4 = wcslen((wchar_t *)_Str);
    iVar2 = ::FString::Find(param_1,(wchar_t *)_Str,(int)sVar4,IgnoreCase,FromStart,-1);
    return iVar2 == -1;
  }
  return true;
}

