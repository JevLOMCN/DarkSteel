// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14773c3a0

UClass * __cdecl UCommandlet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Commandlet",
               &Z_Registration_Info_UClass_UCommandlet.InnerSingleton,
               StaticRegisterNativesUCommandlet,0x80,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommandlet>,InternalVTableHelperCtorCaller<UCommandlet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommandlet.InnerSingleton;
}

// UCommandlet @ 1477f0a20

UCommandlet * __thiscall UCommandlet::UCommandlet(UCommandlet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommandlet__6B_;
  (this->HelpDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpDescription).Data.ArrayNum = 0;
  (this->HelpDescription).Data.ArrayMax = 0;
  (this->HelpUsage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpUsage).Data.ArrayNum = 0;
  (this->HelpUsage).Data.ArrayMax = 0;
  (this->HelpWebLink).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpWebLink).Data.ArrayNum = 0;
  (this->HelpWebLink).Data.ArrayMax = 0;
  (this->HelpParamNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpParamNames).ArrayNum = 0;
  (this->HelpParamNames).ArrayMax = 0;
  (this->HelpParamDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpParamDescriptions).ArrayNum = 0;
  (this->HelpParamDescriptions).ArrayMax = 0;
  return this;
}

// UCommandlet @ 1477f0a80

UCommandlet * __thiscall UCommandlet::UCommandlet(UCommandlet *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommandlet__6B_;
  (this->HelpDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpDescription).Data.ArrayNum = 0;
  (this->HelpDescription).Data.ArrayMax = 0;
  (this->HelpUsage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpUsage).Data.ArrayNum = 0;
  (this->HelpUsage).Data.ArrayMax = 0;
  (this->HelpWebLink).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpWebLink).Data.ArrayNum = 0;
  (this->HelpWebLink).Data.ArrayMax = 0;
  (this->HelpParamNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpParamNames).ArrayNum = 0;
  (this->HelpParamNames).ArrayMax = 0;
  (this->HelpParamDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HelpParamDescriptions).ArrayNum = 0;
  (this->HelpParamDescriptions).ArrayMax = 0;
  puVar2 = &this->field_0x78;
  this->IsServer = 1;
  this->UseCommandletResultAsExitCode = 0;
  this->FastExit = 0;
  this->ShowProgress = 1;
  this->ShowErrorCount = 1;
  this->IsEditor = 1;
  this->IsClient = 1;
  return this;
}

// ~UCommandlet @ 1477f4870

void __thiscall UCommandlet::~UCommandlet(UCommandlet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommandlet__6B_;
  DestructItems<FString,int>
            ((FString *)(this->HelpParamDescriptions).AllocatorInstance.Data,
             (this->HelpParamDescriptions).ArrayNum);
  pFVar1 = (this->HelpParamDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->HelpParamNames).AllocatorInstance.Data,
             (this->HelpParamNames).ArrayNum);
  pFVar1 = (this->HelpParamNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HelpWebLink).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HelpUsage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HelpDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateCustomEngine @ 14781a300

void __thiscall UCommandlet::CreateCustomEngine(UCommandlet *this,FString *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14783c560

UClass * __cdecl UCommandlet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Commandlet",
               &Z_Registration_Info_UClass_UCommandlet.InnerSingleton,
               StaticRegisterNativesUCommandlet,0x80,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommandlet>,InternalVTableHelperCtorCaller<UCommandlet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommandlet.InnerSingleton;
}

// Main @ 147842030

int __thiscall UCommandlet::Main(UCommandlet *this,FString *param_1)

{
  return 0;
}

// ParseCommandLine @ 147848bd0

/* WARNING: Removing unreachable block (ram,0x000147848d0f) */

void __cdecl
UCommandlet::ParseCommandLine
          (wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *local_res8;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_res8 = param_1;
  bVar2 = FParse::Token(&local_res8,&local_38,false,L'\0');
  if (bVar2) {
    do {
      if ((local_38.Data.ArrayNum == 0) || (*(short *)local_38.Data.AllocatorInstance.Data != 0x2d))
      {
        pFVar4 = (param_2->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
           (((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_2->ArrayMax * 0x10 &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = param_2->ArrayNum;
        if (iVar3 == param_2->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar3 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
        *(undefined8 *)pFVar4 = 0;
        *(FScriptContainerElement **)pFVar4 = local_38.Data.AllocatorInstance.Data;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar4 + 8) = local_38.Data.ArrayNum;
        *(int *)(pFVar4 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
      }
      else {
        ::FString::RightChop(&local_38,&local_28,1);
        pFVar4 = (param_3->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_3->ArrayMax * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = param_3->ArrayNum;
        if (iVar3 == param_3->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar3 + 1;
        pFVar4 = (param_3->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
        *(undefined8 *)pFVar4 = 0;
        *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
        *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
      }
      bVar2 = FParse::Token(&local_res8,&local_38,false,L'\0');
    } while (bVar2);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ParseCommandLine @ 147848e20

void __cdecl
UCommandlet::ParseCommandLine
          (wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  TPairInitializer<FString_&&,FString_&&> local_res18;
  FString *local_80;
  FString *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res18.Value = (FString *)param_4;
  ParseCommandLine(param_1,param_2,param_3);
  uVar12 = param_3->ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_3->AllocatorInstance).Data + lVar14;
      psVar2 = *(short **)&pFVar13->field_0x0;
      for (psVar10 = psVar2; psVar10 != psVar2 + *(int *)(pFVar13 + 8); psVar10 = psVar10 + 1) {
        if (*psVar10 == 0x3d) {
          iVar8 = (int)((longlong)psVar10 - (longlong)psVar2 >> 1);
          if (iVar8 != -1) {
            pFVar6 = ::FString::RightChop((FString *)pFVar13,&local_50,iVar8 + 1);
            pFVar6 = ::FString::TrimQuotes(pFVar6,&local_60,(bool *)0x0);
            iVar1 = *(int *)(pFVar13 + 8);
            iVar7 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar7 = 0;
            }
            if (iVar8 < iVar7) {
              iVar7 = iVar8;
            }
            iVar8 = 0;
            if (0 < iVar7) {
              iVar8 = iVar7;
            }
            if (iVar1 == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)&pFVar13->field_0x0;
            }
            ::FString::ConstructFromPtrSize(&local_70,pwVar9,iVar8);
            local_80 = &local_70;
            local_78 = pFVar6;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)local_res18.Value,&local_res18,(bool *)&local_80);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            uVar5 = 0;
            if ((int)uVar12 < param_3->ArrayNum) {
              uVar5 = uVar11;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (param_3->AllocatorInstance).Data + lVar14;
            if (*(void **)pFVar13 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar13);
            }
            iVar8 = param_3->ArrayNum + ~uVar12;
            if (iVar8 != 0) {
              memmove(pFVar13,pFVar13 + 0x10,(longlong)iVar8 << 4);
            }
            param_3->ArrayNum = param_3->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
          }
          break;
        }
      }
      DestructItems<FString,int>((FString *)0x0,0);
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// StaticRegisterNativesUCommandlet @ 147875ab0

void __cdecl UCommandlet::StaticRegisterNativesUCommandlet(void)

{
  return;
}

