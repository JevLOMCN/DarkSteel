// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticClass @ 14429f8f0

UClass * __cdecl UNetObjectPrioritizerDefinitions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerDefinitions",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton;
}

// UNetObjectPrioritizerDefinitions @ 1442af1c0

UNetObjectPrioritizerDefinitions * __thiscall
UNetObjectPrioritizerDefinitions::UNetObjectPrioritizerDefinitions
          (UNetObjectPrioritizerDefinitions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerDefinitions__6B_;
  (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectPrioritizerDefinitions).ArrayNum = 0;
  (this->NetObjectPrioritizerDefinitions).ArrayMax = 0;
  return this;
}

// UNetObjectPrioritizerDefinitions @ 1442af200

UNetObjectPrioritizerDefinitions * __thiscall
UNetObjectPrioritizerDefinitions::UNetObjectPrioritizerDefinitions
          (UNetObjectPrioritizerDefinitions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerDefinitions__6B_;
  (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectPrioritizerDefinitions).ArrayNum = 0;
  (this->NetObjectPrioritizerDefinitions).ArrayMax = 0;
  return this;
}

// ~UNetObjectPrioritizerDefinitions @ 1442b0d20

void __thiscall
UNetObjectPrioritizerDefinitions::~UNetObjectPrioritizerDefinitions
          (UNetObjectPrioritizerDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerDefinitions__6B_;
  pFVar1 = (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c35a0

UClass * __cdecl UNetObjectPrioritizerDefinitions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerDefinitions",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton;
}

// GetValidDefinitions @ 1442c4080

void __thiscall
UNetObjectPrioritizerDefinitions::GetValidDefinitions
          (UNetObjectPrioritizerDefinitions *this,
          TArray<FNetObjectPrioritizerDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FNetObjectPrioritizerDefinition *pFVar2;
  uint uVar3;
  int iVar4;
  FNetObjectPrioritizerDefinition *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FNetObjectPrioritizerDefinition *pFVar9;
  undefined1 local_res8 [8];
  
  uVar3 = (this->NetObjectPrioritizerDefinitions).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar4 = (this->NetObjectPrioritizerDefinitions).ArrayNum;
  pFVar9 = (FNetObjectPrioritizerDefinition *)
           (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data;
  pFVar2 = pFVar9 + iVar4;
  while( true ) {
    if ((this->NetObjectPrioritizerDefinitions).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNetObjectPrioritizerDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar2) break;
    if (((pFVar9->Class).field0_0x0.DebugPtr != (UClass *)0x0) &&
       ((pFVar9->ConfigClassName == (FName)0x0 ||
        ((pFVar9->ConfigClass).field0_0x0.DebugPtr != (UClass *)0x0)))) {
      pFVar5 = (FNetObjectPrioritizerDefinition *)(param_1->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar9) && (pFVar9 < pFVar5 + *piVar1)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      FNetObjectPrioritizerDefinition::FNetObjectPrioritizerDefinition
                ((FNetObjectPrioritizerDefinition *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x28),pFVar9);
    }
    pFVar9 = pFVar9 + 1;
  }
  return;
}

// LoadDefinitions @ 1442c7640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNetObjectPrioritizerDefinitions::LoadDefinitions(UNetObjectPrioritizerDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FName FVar6;
  FName *this_00;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FUObjectCppClassStaticFunctions local_res8;
  FScriptContainerElement *local_c8;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  size_t sVar5;
  
  pFVar8 = (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data;
  iVar2 = (this->NetObjectPrioritizerDefinitions).ArrayNum;
  this_00 = (FName *)(pFVar8 + 8);
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x28;
  do {
    if ((this->NetObjectPrioritizerDefinitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNetObjectPrioritizerDefinition,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    local_88 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
    iStack_80 = 0;
    pFVar4 = ::FName::ToString(this_00,&local_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      local_c8 = (FScriptContainerElement *)0x15060d16c;
LAB_1442c76e7:
      sVar5 = wcslen((wchar_t *)local_c8);
      iVar3 = (int)sVar5;
    }
    else {
      local_c8 = (pFVar4->Data).AllocatorInstance.Data;
      iVar3 = iVar7;
      if (local_c8 != (FScriptContainerElement *)0x0) goto LAB_1442c76e7;
    }
    if (Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
      local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/IrisCore",L"NetObjectPrioritizer",
                 &Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
                 UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer,0x28,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UNetObjectPrioritizer>,
                 InternalVTableHelperCtorCaller<UNetObjectPrioritizer>,&local_res8,
                 UObject::StaticClass,UObject::StaticClass);
    }
    local_a8._12_4_ = uStack_7c;
    local_a8.Size = iStack_80;
    local_98._12_4_ = uStack_bc;
    local_98.Size = iVar3;
    local_a8.DataPtr = (wchar_t *)local_88;
    local_98.DataPtr = (wchar_t *)local_c8;
    FVar6 = (FName)StaticLoadClass(Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
                                   (UObject *)0x0,&local_98,&local_a8,0x2000,(UPackageMap *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    this_00[1] = FVar6;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((1 < (byte)LogIris._0_1_) && (this_00[1] == (FName)0x0)) {
      ::FName::GetPlainNameString(this_00,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (this_00[2] != (FName)0x0) {
      local_78 = (FScriptContainerElement *)0x0;
      iStack_70 = 0;
      pFVar4 = ::FName::ToString(this_00 + 2,&local_48);
      if ((pFVar4->Data).ArrayNum == 0) {
        local_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_1442c78a5:
        sVar5 = wcslen((wchar_t *)local_b8);
        iVar7 = (int)sVar5;
      }
      else {
        local_b8 = (pFVar4->Data).AllocatorInstance.Data;
        if (local_b8 != (FScriptContainerElement *)0x0) goto LAB_1442c78a5;
      }
      if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0) {
        local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/IrisCore",L"NetObjectPrioritizerConfig",
                   &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton,
                   UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig,
                   0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
                   InternalConstructor<UNetObjectPrioritizerConfig>,
                   InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>,&local_res8,
                   UObject::StaticClass,UObject::StaticClass);
      }
      local_98._12_4_ = uStack_6c;
      local_98.Size = iStack_70;
      local_a8._12_4_ = uStack_ac;
      local_a8.Size = iVar7;
      local_98.DataPtr = (wchar_t *)local_78;
      local_a8.DataPtr = (wchar_t *)local_b8;
      FVar6 = (FName)StaticLoadClass(Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.
                                     InnerSingleton,(UObject *)0x0,&local_a8,&local_98,0x2000,
                                     (UPackageMap *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      this_00[3] = FVar6;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((1 < (byte)LogIris._0_1_) && (this_00[3] == (FName)0x0)) {
        ::FName::GetPlainNameString(this_00 + 2,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar8 = pFVar8 + 0x28;
    this_00 = this_00 + 5;
  } while( true );
}

// PostInitProperties @ 1442ca320

void __thiscall
UNetObjectPrioritizerDefinitions::PostInitProperties(UNetObjectPrioritizerDefinitions *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    LoadDefinitions(this);
    return;
  }
  return;
}

// PostReloadConfig @ 1442ca5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNetObjectPrioritizerDefinitions::PostReloadConfig
          (UNetObjectPrioritizerDefinitions *this,FProperty *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FName FVar6;
  FName *this_00;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FUObjectCppClassStaticFunctions FStackX_8;
  FScriptContainerElement *pFStack_c8;
  undefined4 uStack_bc;
  FScriptContainerElement *pFStack_b8;
  undefined4 uStack_ac;
  TStringView<wchar_t> TStack_a8;
  TStringView<wchar_t> TStack_98;
  FScriptContainerElement *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  size_t sVar5;
  
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  pFVar8 = (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data;
  iVar2 = (this->NetObjectPrioritizerDefinitions).ArrayNum;
  this_00 = (FName *)(pFVar8 + 8);
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x28;
  do {
    if ((this->NetObjectPrioritizerDefinitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNetObjectPrioritizerDefinition,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&FStackX_8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFStack_88 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
    iStack_80 = 0;
    pFVar4 = ::FName::ToString(this_00,&FStack_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      pFStack_c8 = (FScriptContainerElement *)0x15060d16c;
LAB_1442c76e7:
      sVar5 = wcslen((wchar_t *)pFStack_c8);
      iVar3 = (int)sVar5;
    }
    else {
      pFStack_c8 = (pFVar4->Data).AllocatorInstance.Data;
      iVar3 = iVar7;
      if (pFStack_c8 != (FScriptContainerElement *)0x0) goto LAB_1442c76e7;
    }
    if (Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
      FStackX_8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/IrisCore",L"NetObjectPrioritizer",
                 &Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
                 UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer,0x28,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UNetObjectPrioritizer>,
                 InternalVTableHelperCtorCaller<UNetObjectPrioritizer>,&FStackX_8,
                 UObject::StaticClass,UObject::StaticClass);
    }
    TStack_a8._12_4_ = uStack_7c;
    TStack_a8.Size = iStack_80;
    TStack_98._12_4_ = uStack_bc;
    TStack_98.Size = iVar3;
    TStack_a8.DataPtr = (wchar_t *)pFStack_88;
    TStack_98.DataPtr = (wchar_t *)pFStack_c8;
    FVar6 = (FName)StaticLoadClass(Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
                                   (UObject *)0x0,&TStack_98,&TStack_a8,0x2000,(UPackageMap *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    this_00[1] = FVar6;
    if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    if ((1 < (byte)LogIris._0_1_) && (this_00[1] == (FName)0x0)) {
      ::FName::GetPlainNameString(this_00,&FStack_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
    }
    if (this_00[2] != (FName)0x0) {
      pFStack_78 = (FScriptContainerElement *)0x0;
      iStack_70 = 0;
      pFVar4 = ::FName::ToString(this_00 + 2,&FStack_48);
      if ((pFVar4->Data).ArrayNum == 0) {
        pFStack_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_1442c78a5:
        sVar5 = wcslen((wchar_t *)pFStack_b8);
        iVar7 = (int)sVar5;
      }
      else {
        pFStack_b8 = (pFVar4->Data).AllocatorInstance.Data;
        if (pFStack_b8 != (FScriptContainerElement *)0x0) goto LAB_1442c78a5;
      }
      if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0) {
        FStackX_8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/IrisCore",L"NetObjectPrioritizerConfig",
                   &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton,
                   UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig,
                   0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
                   InternalConstructor<UNetObjectPrioritizerConfig>,
                   InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>,&FStackX_8,
                   UObject::StaticClass,UObject::StaticClass);
      }
      TStack_98._12_4_ = uStack_6c;
      TStack_98.Size = iStack_70;
      TStack_a8._12_4_ = uStack_ac;
      TStack_a8.Size = iVar7;
      TStack_98.DataPtr = (wchar_t *)pFStack_78;
      TStack_a8.DataPtr = (wchar_t *)pFStack_b8;
      FVar6 = (FName)StaticLoadClass(Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.
                                     InnerSingleton,(UObject *)0x0,&TStack_a8,&TStack_98,0x2000,
                                     (UPackageMap *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      this_00[3] = FVar6;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      if ((1 < (byte)LogIris._0_1_) && (this_00[3] == (FName)0x0)) {
        ::FName::GetPlainNameString(this_00 + 2,&FStack_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar8 = pFVar8 + 0x28;
    this_00 = this_00 + 5;
  } while( true );
}

// StaticRegisterNativesUNetObjectPrioritizerDefinitions @ 1442e6320

void __cdecl
UNetObjectPrioritizerDefinitions::StaticRegisterNativesUNetObjectPrioritizerDefinitions(void)

{
  return;
}

