// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 10

// StaticClass @ 14cfac040

UClass * __cdecl ULiveLinkSubjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSubjectSettings,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton;
}

// ULiveLinkSubjectSettings @ 14cfb5f70

ULiveLinkSubjectSettings * __thiscall
ULiveLinkSubjectSettings::ULiveLinkSubjectSettings
          (ULiveLinkSubjectSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowModifyingRebroadcast_DEPRECATED = true;
  this->_padding_ = (longlong)&___7ULiveLinkSubjectSettings__6B_;
  (this->PreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreProcessors).ArrayNum = 0;
  (this->PreProcessors).ArrayMax = 0;
  (this->InterpolationProcessor).field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0;
  (this->Translators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Translators).ArrayNum = 0;
  (this->Translators).ArrayMax = 0;
  (this->Remapper).field0_0x0.DebugPtr = (ULiveLinkSubjectRemapper *)0x0;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->OriginalSourceName).ComparisonIndex = 0;
  (this->OriginalSourceName).Number = 0;
  (this->Key).Source.A = 0;
  (this->Key).Source.B = 0;
  (this->Key).Source.C = 0;
  (this->Key).Source.D = 0;
  (this->Key).SubjectName.Name = (FName)0x0;
  (this->RemapperBeingReset).Object = (UObject *)0x0;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// ULiveLinkSubjectSettings @ 14cfb5ff0

ULiveLinkSubjectSettings * __thiscall
ULiveLinkSubjectSettings::ULiveLinkSubjectSettings(ULiveLinkSubjectSettings *this)

{
  UClass *this_00;
  
  UObject::UObject((UObject *)this);
  this->bAllowModifyingRebroadcast_DEPRECATED = true;
  this->_padding_ = (longlong)&___7ULiveLinkSubjectSettings__6B_;
  (this->PreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreProcessors).ArrayNum = 0;
  (this->PreProcessors).ArrayMax = 0;
  (this->InterpolationProcessor).field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0;
  (this->Translators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Translators).ArrayNum = 0;
  (this->Translators).ArrayMax = 0;
  (this->Remapper).field0_0x0.DebugPtr = (ULiveLinkSubjectRemapper *)0x0;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->OriginalSourceName).ComparisonIndex = 0;
  (this->OriginalSourceName).Number = 0;
  (this->Key).Source.A = 0;
  (this->Key).Source.B = 0;
  (this->Key).Source.C = 0;
  (this->Key).Source.D = 0;
  (this->Key).SubjectName.Name = (FName)0x0;
  (this->RemapperBeingReset).Object = (UObject *)0x0;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  if ((this->_padding_ & 0x30) == 0) {
    this_00 = ULiveLinkDefaultSubjectSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->bRebroadcastSubject = *(bool *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1);
  }
  return this;
}

// ~ULiveLinkSubjectSettings @ 14cfb6780

void __thiscall ULiveLinkSubjectSettings::~ULiveLinkSubjectSettings(ULiveLinkSubjectSettings *this)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULiveLinkSubjectSettings__6B_;
  pUVar1 = (this->RemapperBeingReset).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->RemapperBeingReset).Object = (UObject *)0x0;
  }
  pFVar2 = (this->Translators).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreProcessors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDisplayName @ 14cfb9800

FText * __thiscall
ULiveLinkSubjectSettings::GetDisplayName
          (ULiveLinkSubjectSettings *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&(this->Key).SubjectName.Name);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cfbb4e0

UClass * __cdecl ULiveLinkSubjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSubjectSettings,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton;
}

// GetRebroadcastName @ 14cfbb700

FName __thiscall ULiveLinkSubjectSettings::GetRebroadcastName(ULiveLinkSubjectSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Key).SubjectName.Name;
  return in_RDX;
}

// Initialize @ 14cfbcc80

void __thiscall
ULiveLinkSubjectSettings::Initialize(ULiveLinkSubjectSettings *this,FLiveLinkSubjectKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->Source).B;
  uVar3 = (param_1->Source).C;
  uVar4 = (param_1->Source).D;
  FVar1 = (param_1->SubjectName).Name;
  (this->Key).Source.A = (param_1->Source).A;
  (this->Key).Source.B = uVar2;
  (this->Key).Source.C = uVar3;
  (this->Key).Source.D = uVar4;
  (this->Key).SubjectName.Name = FVar1;
  return;
}

// StaticRegisterNativesULiveLinkSubjectSettings @ 14cfbe360

void __cdecl ULiveLinkSubjectSettings::StaticRegisterNativesULiveLinkSubjectSettings(void)

{
  return;
}

// ValidateProcessors @ 14cfbf020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ULiveLinkSubjectSettings::ValidateProcessors(ULiveLinkSubjectSettings *this)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  ULiveLinkFrameInterpolationProcessor *pUVar4;
  ULiveLinkSubjectRemapper *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UClass *pUVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  bool local_res8;
  FName local_res18;
  FName local_res20;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  pUVar2 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar2 == (UClass *)0x0) ||
     (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfbf96c:
    (this->PreProcessors).ArrayNum = 0;
    if ((this->PreProcessors).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PreProcessors).AllocatorInstance,0,&(this->PreProcessors).ArrayMax);
    }
    (this->InterpolationProcessor).field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0
    ;
    (this->Translators).ArrayNum = 0;
    if ((this->Translators).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Translators).AllocatorInstance,0,&(this->Translators).ArrayMax);
    }
    return false;
  }
  iVar1 = (int)pUVar10->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar10->_padding_))
  {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) || (pUVar2 = (this->Role).Class.field0_0x0.DebugPtr, pUVar2 == (UClass *)0x0))
  goto LAB_14cfbf96c;
  uVar13 = 0;
  local_res8 = true;
  if (0 < (this->PreProcessors).ArrayNum) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->PreProcessors).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      plVar12 = *(longlong **)((this->PreProcessors).AllocatorInstance.Data + lVar14);
      if (plVar12 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar12 + 0x2b0))(plVar12,local_90);
        lVar3 = *plVar11;
        if ((lVar3 == 0) || (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfbf18d:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreProcessor->GetRole() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkSubjectSettings.cpp"
                             ,0x2d,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        else {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((!bVar7) || (*plVar11 == 0)) goto LAB_14cfbf18d;
        }
        plVar11 = (longlong *)(**(code **)(*plVar12 + 0x2b0))(plVar12,local_88);
        lVar3 = *plVar11;
        if ((lVar3 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (lVar3 = *plVar11, lVar3 != 0)) {
            if (((int)pUVar2->_padding_ < *(int *)(lVar3 + 0x38)) ||
               (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                lVar3 + 0x30)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_14cfbf249;
          }
        }
        if (2 < (byte)LogLiveLinkSubjectSettings._0_1_) {
          local_res18 = *(FName *)(plVar12 + 3);
          ::FName::ToString(&local_res18,&local_110);
          local_res20 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_res20,&local_120);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkSubjectSettings);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
        }
        uVar9 = 0;
        if ((int)uVar13 < (this->PreProcessors).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        local_res8 = false;
        *(undefined8 *)((this->PreProcessors).AllocatorInstance.Data + lVar14) = 0;
      }
LAB_14cfbf249:
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (this->PreProcessors).ArrayNum);
  }
  pUVar4 = (this->InterpolationProcessor).field0_0x0.DebugPtr;
  if (pUVar4 != (ULiveLinkFrameInterpolationProcessor *)0x0) {
    plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_80);
    lVar14 = *plVar12;
    if ((lVar14 == 0) || (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfbf3cb:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterpolationProcessor->GetRole() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkSubjectSettings.cpp"
                         ,0x39,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    else {
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((!bVar7) || (*plVar12 == 0)) goto LAB_14cfbf3cb;
    }
    pUVar4 = (this->InterpolationProcessor).field0_0x0.DebugPtr;
    plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_78);
    lVar14 = *plVar12;
    if ((lVar14 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (lVar14 = *plVar12, lVar14 != 0)) {
        if (((int)pUVar2->_padding_ < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
            lVar14 + 0x30)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) goto LAB_14cfbf4fc;
      }
    }
    if (2 < (byte)LogLiveLinkSubjectSettings._0_1_) {
      pUVar4 = (this->InterpolationProcessor).field0_0x0.DebugPtr;
      local_158.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_158.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_158,&local_f0);
      local_150 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_150,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkSubjectSettings);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    (this->InterpolationProcessor).field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0
    ;
    local_res8 = false;
  }
LAB_14cfbf4fc:
  uVar13 = 0;
  if (0 < (this->Translators).ArrayNum) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->Translators).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      plVar12 = *(longlong **)((this->Translators).AllocatorInstance.Data + lVar14);
      if (plVar12 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar12 + 0x2b0))(plVar12,local_70);
        lVar3 = *plVar11;
        if ((lVar3 == 0) || (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfbf5bd:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Translator->GetFromRole() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkSubjectSettings.cpp"
                             ,0x46,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        else {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((!bVar7) || (*plVar11 == 0)) goto LAB_14cfbf5bd;
        }
        plVar11 = (longlong *)(**(code **)(*plVar12 + 0x2b0))(plVar12,local_68);
        lVar3 = *plVar11;
        if ((lVar3 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (lVar3 = *plVar11, lVar3 != 0)) {
            if (((int)pUVar2->_padding_ < *(int *)(lVar3 + 0x38)) ||
               (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                lVar3 + 0x30)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_14cfbf679;
          }
        }
        if (2 < (byte)LogLiveLinkSubjectSettings._0_1_) {
          local_148 = *(FName *)(plVar12 + 3);
          ::FName::ToString(&local_148,&local_d0);
          local_140 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_140,&local_e0);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkSubjectSettings);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        uVar9 = 0;
        if ((int)uVar13 < (this->Translators).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        local_res8 = false;
        *(undefined8 *)((this->Translators).AllocatorInstance.Data + lVar14) = 0;
      }
LAB_14cfbf679:
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (this->Translators).ArrayNum);
  }
  pUVar5 = (this->Remapper).field0_0x0.DebugPtr;
  if (pUVar5 == (ULiveLinkSubjectRemapper *)0x0) {
    return local_res8;
  }
  plVar12 = (longlong *)(**(code **)(pUVar5->_padding_ + 0x2c8))(pUVar5,local_60);
  lVar14 = *plVar12;
  if ((lVar14 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar14 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar14 = *plVar12, lVar14 != 0)) {
      if (((int)pUVar2->_padding_ < *(int *)(lVar14 + 0x38)) ||
         (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)
         ) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        return local_res8;
      }
    }
  }
  if ((byte)LogLiveLinkSubjectSettings._0_1_ < 3) goto LAB_14cfbf940;
  pUVar5 = (this->Remapper).field0_0x0.DebugPtr;
  plVar12 = (longlong *)(**(code **)(pUVar5->_padding_ + 0x2c8))(pUVar5,local_58);
  lVar14 = *plVar12;
  if ((lVar14 == 0) || (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfbf885:
    lVar14 = 0;
  }
  else {
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar14 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14cfbf885;
    lVar14 = *plVar12;
  }
  local_138 = *(FName *)(lVar14 + 0x18);
  ::FName::ToString(&local_138,&local_a0);
  local_130 = (FName)((this->Remapper).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_130,&local_b0);
  local_128 = (FName)pUVar2->_padding_;
  ::FName::ToString(&local_128,&local_c0);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkSubjectSettings);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
LAB_14cfbf940:
  (this->Remapper).field0_0x0.DebugPtr = (ULiveLinkSubjectRemapper *)0x0;
  return false;
}

