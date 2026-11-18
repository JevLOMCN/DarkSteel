// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14773ca80

UClass * __cdecl UPluginCommandlet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PluginCommandlet",
               &Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton,
               StaticRegisterNativesUPluginCommandlet,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPluginCommandlet>,
               InternalVTableHelperCtorCaller<UPluginCommandlet>,local_res8,UCommandlet::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton;
}

// UPluginCommandlet @ 1477f0be0

UPluginCommandlet * __thiscall
UPluginCommandlet::UPluginCommandlet(UPluginCommandlet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPluginCommandlet__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CmdLineTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CmdLineTokens).ArrayNum = 0;
  (this->CmdLineTokens).ArrayMax = 0;
  (this->CmdLineSwitches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CmdLineSwitches).ArrayNum = 0;
  (this->CmdLineSwitches).ArrayMax = 0;
  return this;
}

// UPluginCommandlet @ 1477f0c50

UPluginCommandlet * __thiscall
UPluginCommandlet::UPluginCommandlet(UPluginCommandlet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPluginCommandlet__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff38 | 0x30;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CmdLineTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CmdLineTokens).ArrayNum = 0;
  (this->CmdLineTokens).ArrayMax = 0;
  (this->CmdLineSwitches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CmdLineSwitches).ArrayNum = 0;
  (this->CmdLineSwitches).ArrayMax = 0;
  return this;
}

// ~UPluginCommandlet @ 1477f4980

void __thiscall UPluginCommandlet::~UPluginCommandlet(UPluginCommandlet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPluginCommandlet__6B_;
  DestructItems<FString,int>
            ((FString *)(this->CmdLineSwitches).AllocatorInstance.Data,
             (this->CmdLineSwitches).ArrayNum);
  pFVar1 = (this->CmdLineSwitches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CmdLineTokens).AllocatorInstance.Data,(this->CmdLineTokens).ArrayNum)
  ;
  pFVar1 = (this->CmdLineTokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommandlet::~UCommandlet((UCommandlet *)this);
  return;
}

// operator() @ 1477f6290

bool __thiscall `UPluginCommandlet::Main'::__l5::<lambda_1>::operator()(void *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Enable");
  if (iVar1 != 0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Disable");
    if (iVar1 != 0) {
      return false;
    }
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Enable");
  *(bool *)*(undefined8 *)this = iVar1 == 0;
  return true;
}

// GetPrivateStaticClass @ 14783c780

UClass * __cdecl UPluginCommandlet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PluginCommandlet",
               &Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton,
               StaticRegisterNativesUPluginCommandlet,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPluginCommandlet>,
               InternalVTableHelperCtorCaller<UPluginCommandlet>,local_res8,UCommandlet::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPluginCommandlet.InnerSingleton;
}

// Main @ 147842040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall UPluginCommandlet::Main(UPluginCommandlet *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  IProjectManager *pIVar10;
  ulonglong uVar11;
  IPluginManager *pIVar12;
  longlong *plVar13;
  FText *pFVar14;
  FStaticBasicLogRecord *pFVar15;
  wchar_t *pwVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint *local_res18;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FString local_b8;
  undefined8 local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  FText local_48;
  
  local_res8[0] = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_00 = &this->CmdLineTokens;
  UCommandlet::ParseCommandLine(pwVar16,this_00,&this->CmdLineSwitches);
  iVar8 = (this->CmdLineTokens).ArrayNum;
  if (iVar8 < 1) {
    if (1 < (byte)LogPluginCommandlet._0_1_) {
      pFVar15 = (FStaticBasicLogRecord *)&PTR_u_No_command_spec_15177ed98;
      goto LAB_14784258e;
    }
  }
  else {
    pFVar22 = (this_00->AllocatorInstance).Data;
    local_res18 = local_res8;
    local_res8[0] = local_res8[0] & 0xffffff00;
    for (pFVar18 = pFVar22; pFVar18 != pFVar22 + (longlong)iVar8 * 0x10; pFVar18 = pFVar18 + 0x10) {
      bVar4 = `UPluginCommandlet::Main'::__l5::<lambda_1>::operator()
                        (&local_res18,(FString *)pFVar18);
      if (bVar4) {
        iVar8 = (int)((longlong)pFVar18 - (longlong)pFVar22 >> 4);
        if (iVar8 != -1) {
          uVar17 = iVar8 + 1;
          uVar7 = 0;
          if ((int)uVar17 <= (this->CmdLineTokens).ArrayNum) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            iVar8 = (*pcVar1)();
            return iVar8;
          }
          if (uVar17 != 0) {
            TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,0,uVar17);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,(this->CmdLineTokens).ArrayNum,
                       &(this->CmdLineTokens).ArrayMax);
          }
          bVar4 = (this->CmdLineTokens).ArrayNum < 1;
          if (bVar4) {
            pFVar9 = ::FString::FString(&local_88,L"");
          }
          else {
            pFVar9 = TArray<FString,TSizedDefaultAllocator<32>_>::Pop(this_00,&local_78,Default);
          }
          local_b8.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = (pFVar9->Data).ArrayNum;
          local_b8.Data.ArrayMax = (pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
          if ((bVar4) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if ((!bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          bVar4 = false;
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          ::FString::ParseIntoArray(&local_b8,&local_d8,L",",true);
          if (local_d8.ArrayNum < 1) {
LAB_147842260:
            bVar2 = false;
            bVar3 = false;
            if (bVar4) goto LAB_147842268;
          }
          else {
            pIVar10 = IProjectManager::Get();
            bVar4 = true;
            pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
            pFVar9 = FPaths::GetProjectFilePath(&local_68);
            cVar5 = (*pcVar1)(pIVar10,pFVar9);
            if (cVar5 == '\0') goto LAB_147842260;
            bVar3 = true;
LAB_147842268:
            bVar2 = bVar3;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          if (bVar2) {
            FText::FText(&local_c8);
            uVar11 = (ulonglong)local_d8.ArrayNum;
            bVar4 = true;
            pFVar22 = local_d8.AllocatorInstance.Data + uVar11 * 0x10;
            local_res18 = (uint *)CONCAT44(local_res18._4_4_,local_d8.ArrayNum);
            FVar20.Data = local_d8.AllocatorInstance.Data;
            goto LAB_1478422a0;
          }
          if (local_d8.ArrayNum == 0) {
            if (1 < (byte)LogPluginCommandlet._0_1_) {
              pFVar15 = &::LOG_Static;
LAB_147842545:
              UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogPluginCommandlet);
            }
          }
          else if (1 < (byte)LogPluginCommandlet._0_1_) {
            pFVar15 = &::LOG_Static;
            goto LAB_147842545;
          }
          bVar4 = false;
          goto LAB_147842554;
        }
        break;
      }
    }
    if (1 < (byte)LogPluginCommandlet._0_1_) {
      pFVar15 = &::LOG_Static;
LAB_14784258e:
      UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogPluginCommandlet);
    }
  }
  bVar4 = false;
LAB_14784259d:
  return (int)!bVar4;
LAB_1478422a0:
  if (local_d8.ArrayNum != (int)uVar11) {
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
  }
  if (FVar20.Data == pFVar22) goto LAB_14784250c;
  local_e0 = *(int *)(FVar20.Data + 8);
  lVar19 = (longlong)local_e0;
  _Src = *(void **)FVar20.Data;
  local_e8.Data = (FScriptContainerElement *)0x0;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
    memcpy(local_e8.Data,_Src,lVar19 * 2);
  }
  pIVar12 = IPluginManager::Get();
  local_a8 = local_e8.Data;
  pFVar18 = local_a8;
  uStack_a0 = local_e0 - 1;
  if (local_e0 == 0) {
    uStack_a0 = 0;
  }
  local_a8._0_4_ = SUB84(local_e8.Data,0);
  local_a8._4_4_ = (undefined4)((ulonglong)local_e8.Data >> 0x20);
  local_58 = (undefined4)local_a8;
  uStack_54 = local_a8._4_4_;
  uStack_4c = uStack_9c;
  local_a8 = pFVar18;
  uStack_50 = uStack_a0;
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x70))(pIVar12,local_98,&local_58);
  if (*plVar13 == 0) {
    pFVar18 = (this->CmdLineSwitches).AllocatorInstance.Data;
    pFVar21 = pFVar18 + (longlong)(this->CmdLineSwitches).ArrayNum * 0x10;
    for (; pFVar18 != pFVar21; pFVar18 = pFVar18 + 0x10) {
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)pFVar18;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar16,L"FORCE");
      if (iVar8 == 0) goto LAB_1478423ed;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    pFVar14 = FText::FromString(&local_48,
                                L"Plugin not found. Add -Force to the commandline, to override.");
    FText::operator=(&local_c8,pFVar14);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
LAB_1478423c5:
    if (1 < (byte)LogPluginCommandlet._0_1_) {
      FText::ToString(&local_c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginCommandlet);
    }
    bVar4 = false;
  }
  else {
LAB_1478423ed:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    pIVar10 = IProjectManager::Get();
    cVar5 = (**(code **)((longlong)*pIVar10 + 0x80))(pIVar10,&local_e8,(undefined1)local_res8[0]);
    pIVar10 = IProjectManager::Get();
    cVar6 = (**(code **)((longlong)*pIVar10 + 0xa0))(pIVar10);
    if (cVar6 != '\0') {
      pIVar10 = IProjectManager::Get();
      cVar6 = (**(code **)((longlong)*pIVar10 + 0xa8))(pIVar10,&local_c8);
      if (cVar6 == '\0') goto LAB_1478423c5;
    }
    if (cVar5 == '\0') goto LAB_1478423c5;
    if (4 < (byte)LogPluginCommandlet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginCommandlet);
    }
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  uVar11 = (ulonglong)local_res18 & 0xffffffff;
  FVar20.Data = FVar20.Data + 0x10;
  goto LAB_1478422a0;
LAB_14784250c:
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
LAB_147842554:
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  goto LAB_14784259d;
}

// StaticRegisterNativesUPluginCommandlet @ 147875ae0

void __cdecl UPluginCommandlet::StaticRegisterNativesUPluginCommandlet(void)

{
  return;
}

