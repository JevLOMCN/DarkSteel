// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1472dbb70

UClass * __cdecl UMaterialFunctionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInterface",
               &Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInterface,0x40,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionInterface>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton;
}

// UMaterialFunctionInterface @ 1472e3230

UMaterialFunctionInterface * __thiscall
UMaterialFunctionInterface::UMaterialFunctionInterface
          (UMaterialFunctionInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunctionInterface__6B_;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  this->MaterialFunctionUsage = Default;
  return this;
}

// UMaterialFunctionInterface @ 1472e3270

UMaterialFunctionInterface * __thiscall
UMaterialFunctionInterface::UMaterialFunctionInterface
          (UMaterialFunctionInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunctionInterface__6B_;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  this->MaterialFunctionUsage = Default;
  return this;
}

// ~UMaterialFunctionInterface @ 1472e3ae0

void __thiscall
UMaterialFunctionInterface::~UMaterialFunctionInterface(UMaterialFunctionInterface *this)

{
  this->_padding_ = (longlong)&___7UMaterialFunctionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBaseFunction @ 1472e51a0

UMaterialFunction * __thiscall
UMaterialFunctionInterface::GetBaseFunction
          (UMaterialFunctionInterface *this,
          TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialFunctionInterface.h"
             ,0xb3,L"Pure virtual not implemented (%s)");
  return (UMaterialFunction *)0x0;
}

// GetBaseFunction @ 1472e51d0

UMaterialFunction * __thiscall
UMaterialFunctionInterface::GetBaseFunction
          (UMaterialFunctionInterface *this,
          TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialFunctionInterface.h"
             ,0xb6,L"Pure virtual not implemented (%s)");
  return (UMaterialFunction *)0x0;
}

// GetMaterialFunctionUsage @ 1472e52a0

EMaterialFunctionUsage __thiscall
UMaterialFunctionInterface::GetMaterialFunctionUsage(UMaterialFunctionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialFunctionInterface.h"
             ,0x69,L"Pure virtual not implemented (%s)");
  return Default;
}

// GetPrivateStaticClass @ 1472e7560

UClass * __cdecl UMaterialFunctionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInterface",
               &Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInterface,0x40,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionInterface>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionInterface @ 1472e7a80

void __cdecl UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface(void)

{
  return;
}

// ValidateFunctionUsage @ 1472e7aa0

bool __thiscall
UMaterialFunctionInterface::ValidateFunctionUsage
          (UMaterialFunctionInterface *this,FMaterialCompiler *param_1,
          FFunctionExpressionOutput *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialFunctionInterface.h"
             ,0x76,L"Pure virtual not implemented (%s)");
  return false;
}

// GetAssetRegistryTags @ 148b005e0

void __thiscall
UMaterialFunctionInterface::GetAssetRegistryTags
          (UMaterialFunctionInterface *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetBaseFunctionInterface @ 148b00710

UMaterialFunctionInterface * __thiscall
UMaterialFunctionInterface::GetBaseFunctionInterface(UMaterialFunctionInterface *this)

{
  UMaterialFunctionInterface *pUVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  pUVar1 = (UMaterialFunctionInterface *)(**(code **)(this->_padding_ + 0x2c8))(0,&local_18);
  return pUVar1;
}

// GetBaseFunctionInterface @ 148b00740

UMaterialFunctionInterface * __thiscall
UMaterialFunctionInterface::GetBaseFunctionInterface(UMaterialFunctionInterface *this)

{
  UMaterialFunctionInterface *pUVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  pUVar1 = (UMaterialFunctionInterface *)(**(code **)(this->_padding_ + 0x2c0))(0,&local_18);
  return pUVar1;
}

// PostDuplicate @ 148b02a00

void __thiscall
UMaterialFunctionInterface::PostDuplicate(UMaterialFunctionInterface *this,bool param_1)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<bool> *pTVar5;
  FGuid local_28;
  FString local_18;
  
  pTVar5 = (TConsoleVariableData<bool> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.MaterialsDuplicateVerbatim");
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<bool> *)(**(code **)(*plVar3 + 0x60))(plVar3);
    }
    CVarDuplicateVerbatim = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarDuplicateVerbatim;
  if (((((this->StateId).D != 0 || (this->StateId).C != 0) || (this->StateId).B != 0) ||
       (this->StateId).A != 0) && (((uint)this->_padding_ >> 0x13 & 1) != 0)) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<bool> *)&DAT_00000001;
    }
    if (pTVar4->ShadowedValue[(longlong)pTVar5->ShadowedValue] != false) {
      return;
    }
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  FGuid::NewGuid(&local_28);
  (this->StateId).A = local_28.A;
  (this->StateId).B = local_28.B;
  (this->StateId).C = local_28.C;
  (this->StateId).D = local_28.D;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PostInitProperties @ 148b02b90

void __thiscall UMaterialFunctionInterface::PostInitProperties(UMaterialFunctionInterface *this)

{
  bool bVar1;
  FGuid local_28;
  FString local_18;
  
  UObject::PostInitProperties((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    (this->StateId).A = local_28.A;
    (this->StateId).B = local_28.B;
    (this->StateId).C = local_28.C;
    (this->StateId).D = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLoad @ 148b03480

void __thiscall UMaterialFunctionInterface::PostLoad(UMaterialFunctionInterface *this)

{
  FGuid local_28;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  if ((((this->StateId).D == 0 && (this->StateId).C == 0) && (this->StateId).B == 0) &&
      (this->StateId).A == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    (this->StateId).A = local_28.A;
    (this->StateId).B = local_28.B;
    (this->StateId).C = local_28.C;
    (this->StateId).D = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Rename @ 148b03910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UMaterialFunctionInterface::Rename
          (UMaterialFunctionInterface *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  longlong lVar2;
  int iVar3;
  UPackage *pUVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  UPackage *pUVar7;
  size_t sVar8;
  UMaterialFunctionInterface *this_00;
  UObject *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_80 [8];
  FString FStack_78;
  TStringView<wchar_t> TStack_68;
  FString FStack_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"UObject::Rename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pUVar7 = GObjTransientPkg;
  if ((param_2 != (UObject *)0x0) && (param_2 != (UObject *)this->_padding_)) {
    if (((this->_padding_ & 0x30) == 0) &&
       (pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2), pUVar4 != pUVar7)) {
      pUVar9 = *(UObject **)(this->_padding_ + 0xe0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar9[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) != &pUVar9[1].field_0x8)) {
        if ((param_3 & 2) != 0) {
          bVar13 = false;
          goto LAB_142109c5c;
        }
        auStack_80 = *(undefined1 (*) [8])(*(longlong *)(this->_padding_ + 0xe0) + 0x18);
        ::FName::ToString((FName *)auStack_80,&FStack_78);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&TStack_68,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (TStack_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(TStack_68.DataPtr);
        }
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if (((param_3 >> 9 & 1) == 0) && (pFVar5 != pFVar6)) {
      if (pFVar6 == (FLinkerLoad *)0x0) {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
        pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        if (pUVar4 == pUVar7) goto LAB_1421099f4;
      }
      if ((pFVar5 != (FLinkerLoad *)0x0) && ((this->_padding_ & 0x1400) != 0)) {
        if (1 < (byte)LogObj._0_1_) {
          auStack_80 = (undefined1  [8])0x150852300;
          if (((uint)this->_padding_ >> 10 & 1) != 0) {
            auStack_80 = (undefined1  [8])0x1508522e8;
          }
          pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&FStack_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (TStack_68.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(TStack_68.DataPtr);
          }
          if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,true);
    }
  }
LAB_1421099f4:
  if (param_1 == (wchar_t *)0x0) {
LAB_142109af3:
    if ((param_3 & 2) == 0) {
LAB_142109afd:
      FVar1 = (FName)this->_padding_;
      if ((param_2 != (UObject *)0x0) && ((param_3 & 4) == 0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
      }
      LockUObjectHashTables();
      if (param_1 == (wchar_t *)0x0) {
        if ((param_2 == (UObject *)0x0) ||
           (pUVar9 = StaticFindObjectFastInternal
                               ((UClass *)0x0,param_2,FVar1,None,RF_NoFlags,Borrowed),
           FVar10 = FVar1, pUVar9 != (UObject *)0x0)) {
          pUVar11 = (UClass *)param_2;
          if (param_2 == (UObject *)0x0) {
            pUVar11 = (UClass *)this->_padding_;
          }
          FVar10 = MakeUniqueObjectName((UObject *)auStack_80,pUVar11,(FName)this->_padding_,None);
          goto LAB_142109c21;
        }
      }
      else {
        FVar10 = (FName)::FName::FName((FName *)auStack_80,param_1);
LAB_142109c21:
        FVar10 = *(FName *)FVar10;
      }
      lVar2 = this->_padding_;
      if ((this->_padding_ & 1) != 0) {
        Z_Construct_UClass_UPackage_NoRegister();
      }
      UObjectBase::LowLevelRename((UObjectBase *)this,FVar10,param_2);
      UnlockUObjectHashTables();
      (**(code **)(this->_padding_ + 0xe0))(this,lVar2,FVar1);
    }
  }
  else {
    sVar8 = wcslen(param_1);
    FStack_78.Data.ArrayNum = (int)sVar8;
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    TStack_68.DataPtr = param_1;
    if ((param_3 >> 6 & 1) == 0) {
      FStack_78.Data.ArrayMax = TStack_68._12_4_;
      pUVar9 = param_2;
      if (param_2 == (UObject *)0x0) {
        pUVar9 = (UObject *)this->_padding_;
      }
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UMaterialFunctionInterface *)
                StaticFindObject((UClass *)0x0,pUVar9,&TStack_68,ExactClass);
    }
    else {
      TStack_68._12_4_ = FStack_78.Data.ArrayMax;
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UMaterialFunctionInterface *)
                StaticFindFirstObject((UClass *)0x0,&TStack_68,ExactClass,NoLogging,(wchar_t *)0x0);
    }
    if (this_00 != this) {
      if (this_00 == (UMaterialFunctionInterface *)0x0) goto LAB_142109af3;
      if ((param_3 & 2) != 0) {
        bVar13 = false;
        goto LAB_142109c5c;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&FStack_58,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (TStack_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(TStack_68.DataPtr);
      }
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      goto LAB_142109afd;
    }
    auStack_80 = (undefined1  [8])this_00->_padding_;
    ::FName::ToString((FName *)auStack_80,&FStack_78);
    ::FString::FString(&FStack_58,param_1);
    FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    if (FStack_78.Data.ArrayNum == FStack_58.Data.ArrayNum) {
      if (FStack_78.Data.ArrayNum < 2) {
        bVar13 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)FStack_78.Data.AllocatorInstance.Data,
                       (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
      }
    }
    else {
      bVar13 = FStack_78.Data.ArrayNum + FStack_58.Data.ArrayNum == 1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (!bVar13) goto LAB_142109af3;
  }
  bVar13 = true;
LAB_142109c5c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

