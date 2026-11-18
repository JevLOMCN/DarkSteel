// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 17

// FPluginReferenceDescriptor @ 141e0de90

FPluginReferenceDescriptor * __thiscall
FPluginReferenceDescriptor::FPluginReferenceDescriptor
          (FPluginReferenceDescriptor *this,FPluginReferenceDescriptor *param_1)

{
  bool bVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  this->bEnabled = param_1->bEnabled;
  this->bOptional = param_1->bOptional;
  bVar1 = param_1->bActivate;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bActivate = bVar1;
  (this->Description).Data.AllocatorInstance.Data =
       (param_1->Description).Data.AllocatorInstance.Data;
  (param_1->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = (param_1->Description).Data.ArrayNum;
  (this->Description).Data.ArrayMax = (param_1->Description).Data.ArrayMax;
  (param_1->Description).Data.ArrayNum = 0;
  (param_1->Description).Data.ArrayMax = 0;
  (this->MarketplaceURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarketplaceURL).Data.AllocatorInstance.Data =
       (param_1->MarketplaceURL).Data.AllocatorInstance.Data;
  (param_1->MarketplaceURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarketplaceURL).Data.ArrayNum = (param_1->MarketplaceURL).Data.ArrayNum;
  (this->MarketplaceURL).Data.ArrayMax = (param_1->MarketplaceURL).Data.ArrayMax;
  (param_1->MarketplaceURL).Data.ArrayNum = 0;
  (param_1->MarketplaceURL).Data.ArrayMax = 0;
  (this->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformAllowList).AllocatorInstance.Data =
       (param_1->PlatformAllowList).AllocatorInstance.Data;
  (param_1->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformAllowList).ArrayNum = (param_1->PlatformAllowList).ArrayNum;
  (this->PlatformAllowList).ArrayMax = (param_1->PlatformAllowList).ArrayMax;
  (param_1->PlatformAllowList).ArrayNum = 0;
  (param_1->PlatformAllowList).ArrayMax = 0;
  (this->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).AllocatorInstance.Data =
       (param_1->PlatformDenyList).AllocatorInstance.Data;
  (param_1->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).ArrayNum = (param_1->PlatformDenyList).ArrayNum;
  (this->PlatformDenyList).ArrayMax = (param_1->PlatformDenyList).ArrayMax;
  (param_1->PlatformDenyList).ArrayNum = 0;
  (param_1->PlatformDenyList).ArrayMax = 0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data =
       (param_1->TargetConfigurationAllowList).AllocatorInstance.Data;
  (param_1->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).ArrayNum = (param_1->TargetConfigurationAllowList).ArrayNum;
  (this->TargetConfigurationAllowList).ArrayMax = (param_1->TargetConfigurationAllowList).ArrayMax;
  (param_1->TargetConfigurationAllowList).ArrayNum = 0;
  (param_1->TargetConfigurationAllowList).ArrayMax = 0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data =
       (param_1->TargetConfigurationDenyList).AllocatorInstance.Data;
  (param_1->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).ArrayNum = (param_1->TargetConfigurationDenyList).ArrayNum;
  (this->TargetConfigurationDenyList).ArrayMax = (param_1->TargetConfigurationDenyList).ArrayMax;
  (param_1->TargetConfigurationDenyList).ArrayNum = 0;
  (param_1->TargetConfigurationDenyList).ArrayMax = 0;
  (this->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).AllocatorInstance.Data = (param_1->TargetAllowList).AllocatorInstance.Data
  ;
  (param_1->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).ArrayNum = (param_1->TargetAllowList).ArrayNum;
  (this->TargetAllowList).ArrayMax = (param_1->TargetAllowList).ArrayMax;
  (param_1->TargetAllowList).ArrayNum = 0;
  (param_1->TargetAllowList).ArrayMax = 0;
  (this->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).AllocatorInstance.Data = (param_1->TargetDenyList).AllocatorInstance.Data;
  (param_1->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).ArrayNum = (param_1->TargetDenyList).ArrayNum;
  (this->TargetDenyList).ArrayMax = (param_1->TargetDenyList).ArrayMax;
  (param_1->TargetDenyList).ArrayNum = 0;
  (param_1->TargetDenyList).ArrayMax = 0;
  (this->SupportedTargetPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedTargetPlatforms).AllocatorInstance.Data =
       (param_1->SupportedTargetPlatforms).AllocatorInstance.Data;
  (param_1->SupportedTargetPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedTargetPlatforms).ArrayNum = (param_1->SupportedTargetPlatforms).ArrayNum;
  (this->SupportedTargetPlatforms).ArrayMax = (param_1->SupportedTargetPlatforms).ArrayMax;
  (param_1->SupportedTargetPlatforms).ArrayNum = 0;
  (param_1->SupportedTargetPlatforms).ArrayMax = 0;
  bVar1 = param_1->bHasExplicitPlatforms;
  (this->RequestedVersion).bIsSet = false;
  this->bHasExplicitPlatforms = bVar1;
  bVar1 = (param_1->RequestedVersion).bIsSet;
  (this->RequestedVersion).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->RequestedVersion).TypedValue = (param_1->RequestedVersion).TypedValue;
  }
  return this;
}

// FPluginReferenceDescriptor @ 141e0e070

FPluginReferenceDescriptor * __thiscall
FPluginReferenceDescriptor::FPluginReferenceDescriptor
          (FPluginReferenceDescriptor *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->bEnabled = param_2;
  this->bOptional = false;
  this->bActivate = false;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->MarketplaceURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarketplaceURL).Data.ArrayNum = 0;
  (this->MarketplaceURL).Data.ArrayMax = 0;
  (this->PlatformAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformAllowList).ArrayNum = 0;
  (this->PlatformAllowList).ArrayMax = 0;
  (this->PlatformDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDenyList).ArrayNum = 0;
  (this->PlatformDenyList).ArrayMax = 0;
  (this->TargetConfigurationAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationAllowList).ArrayNum = 0;
  (this->TargetConfigurationAllowList).ArrayMax = 0;
  (this->TargetConfigurationDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetConfigurationDenyList).ArrayNum = 0;
  (this->TargetConfigurationDenyList).ArrayMax = 0;
  (this->TargetAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetAllowList).ArrayNum = 0;
  (this->TargetAllowList).ArrayMax = 0;
  (this->TargetDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDenyList).ArrayNum = 0;
  (this->TargetDenyList).ArrayMax = 0;
  (this->SupportedTargetPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedTargetPlatforms).ArrayNum = 0;
  (this->SupportedTargetPlatforms).ArrayMax = 0;
  this->bHasExplicitPlatforms = false;
  (this->RequestedVersion).bIsSet = false;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FPluginReferenceDescriptor @ 141e0f7f0

void __thiscall
FPluginReferenceDescriptor::~FPluginReferenceDescriptor(FPluginReferenceDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SupportedTargetPlatforms).AllocatorInstance.Data,
             (this->SupportedTargetPlatforms).ArrayNum);
  pFVar1 = (this->SupportedTargetPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PlatformDenyList).AllocatorInstance.Data,
             (this->PlatformDenyList).ArrayNum);
  pFVar1 = (this->PlatformDenyList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PlatformAllowList).AllocatorInstance.Data,
             (this->PlatformAllowList).ArrayNum);
  pFVar1 = (this->PlatformAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarketplaceURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 141e11e70

void __thiscall
`FPluginReferenceDescriptor::UpdateArray'::__l2::<lambda_1>::operator()
          (void *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong local_res18;
  longlong *local_res20;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  plVar10 = *(longlong **)this;
  uVar16 = 0;
  if (0 < (int)plVar10[1]) {
    lVar14 = 0;
    lVar15 = 0;
    local_res18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)plVar10[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = *(int *)(local_res18 + 8 + *plVar10);
      lVar11 = (longlong)local_70;
      _Src = *(void **)(local_res18 + *plVar10);
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_70,0,&local_78,local_70,&local_6c);
        memcpy(local_78.Data,_Src,lVar11 * 2);
      }
      iVar8 = param_1->ArrayNum;
      lVar11 = lVar15;
      lVar12 = lVar14;
      uVar13 = uVar16;
      if ((int)uVar16 < iVar8) {
        do {
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar1 + lVar12) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar10 = *(longlong **)(pFVar1 + lVar12);
          cVar7 = (**(code **)(*plVar10 + 0x88))(plVar10,&local_res20);
          plVar10 = local_res20;
          if (cVar7 != '\0') {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            if ((*local_res20 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_58 = L"Name";
            uStack_50 = 4;
            local_48._12_4_ = uStack_4c;
            local_48.Size = 4;
            local_48.DataPtr = L"Name";
            bVar6 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_48,&local_68);
            if (bVar6) {
              if (local_68.Data.ArrayNum == local_70) {
                if (1 < local_68.Data.ArrayNum) {
                  iVar8 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_68.Data.AllocatorInstance.Data,
                                     (wchar_t *)local_78.Data);
                  bVar6 = iVar8 == 0;
                  goto LAB_141e120b3;
                }
              }
              else {
                bVar6 = local_68.Data.ArrayNum + local_70 == 1;
LAB_141e120b3:
                if (!bVar6) goto LAB_141e120ba;
              }
              if ((((int)uVar16 < 0) || ((int)uVar13 < 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce6,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((param_1->ArrayNum <= (int)uVar16) || (param_1->ArrayNum <= (int)uVar13)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce7,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (uVar16 != uVar13) {
                pFVar1 = (param_1->AllocatorInstance).Data;
                uVar3 = *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8);
                uVar4 = *(undefined8 *)(pFVar1 + lVar14);
                uVar5 = *(undefined8 *)(pFVar1 + lVar14 + 8);
                *(undefined8 *)(pFVar1 + lVar14) = *(undefined8 *)(pFVar1 + lVar11 * 0x10);
                *(undefined8 *)(pFVar1 + lVar14 + 8) = uVar3;
                *(undefined8 *)(pFVar1 + lVar11 * 0x10) = uVar4;
                *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8) = uVar5;
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              break;
            }
LAB_141e120ba:
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          iVar8 = param_1->ArrayNum;
          uVar13 = uVar13 + 1;
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 0x10;
        } while ((int)uVar13 < iVar8);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      local_res18 = local_res18 + 0xb8;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x10;
      plVar10 = *(longlong **)this;
    } while ((int)uVar16 < (int)plVar10[1]);
  }
  return;
}

// IsEnabledForPlatform @ 141e26690

bool __thiscall
FPluginReferenceDescriptor::IsEnabledForPlatform(FPluginReferenceDescriptor *this,FString *param_1)

{
  bool bVar1;
  
  if (this->bEnabled == false) {
    return false;
  }
  if (((this->bHasExplicitPlatforms != false) || (0 < (this->PlatformAllowList).ArrayNum)) &&
     (bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->PlatformAllowList,param_1), !bVar1)) {
    return false;
  }
  bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->PlatformDenyList,param_1);
  return !bVar1;
}

// IsEnabledForTarget @ 141e26700

bool __thiscall
FPluginReferenceDescriptor::IsEnabledForTarget
          (FPluginReferenceDescriptor *this,EBuildTargetType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (this->bEnabled != false) {
    iVar1 = (this->TargetAllowList).ArrayNum;
    if (iVar1 < 1) {
LAB_141e2672f:
      pFVar2 = (this->TargetDenyList).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (this->TargetDenyList).ArrayNum;
      while( true ) {
        if (pFVar2 == pFVar3) {
          return true;
        }
        if (*pFVar2 == (FScriptContainerElement)param_1) break;
        pFVar2 = pFVar2 + 1;
      }
    }
    else {
      pFVar2 = (this->TargetAllowList).AllocatorInstance.Data;
      pFVar3 = pFVar2 + iVar1;
      for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
        if (*pFVar2 == (FScriptContainerElement)param_1) goto LAB_141e2672f;
      }
    }
  }
  return false;
}

// IsEnabledForTargetConfiguration @ 141e26760

bool __thiscall
FPluginReferenceDescriptor::IsEnabledForTargetConfiguration
          (FPluginReferenceDescriptor *this,EBuildConfiguration param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (this->bEnabled != false) {
    iVar1 = (this->TargetConfigurationAllowList).ArrayNum;
    if (iVar1 < 1) {
LAB_141e2678f:
      pFVar2 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (this->TargetConfigurationDenyList).ArrayNum;
      while( true ) {
        if (pFVar2 == pFVar3) {
          return true;
        }
        if (*pFVar2 == (FScriptContainerElement)param_1) break;
        pFVar2 = pFVar2 + 1;
      }
    }
    else {
      pFVar2 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
      pFVar3 = pFVar2 + iVar1;
      for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
        if (*pFVar2 == (FScriptContainerElement)param_1) goto LAB_141e2678f;
      }
    }
  }
  return false;
}

// IsSupportedTargetPlatform @ 141e26d80

bool __thiscall
FPluginReferenceDescriptor::IsSupportedTargetPlatform
          (FPluginReferenceDescriptor *this,FString *param_1)

{
  bool bVar1;
  
  if (this->bHasExplicitPlatforms != false) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->SupportedTargetPlatforms,param_1);
    return bVar1;
  }
  if ((this->SupportedTargetPlatforms).ArrayNum != 0) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->SupportedTargetPlatforms,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// Read @ 141e2d9c0

bool __thiscall
FPluginReferenceDescriptor::Read
          (FPluginReferenceDescriptor *this,TSharedRef<FJsonObject,1> *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>
                    (param_1->Object,this,param_2);
  return bVar1;
}

// Read @ 141e2d9e0

bool __thiscall
FPluginReferenceDescriptor::Read
          (FPluginReferenceDescriptor *this,FJsonObject *param_1,FText *param_2,
          TSharedPtr<FJsonObject,1> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>
                    (param_1,this,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// Read @ 141e2da20

bool __thiscall
FPluginReferenceDescriptor::Read
          (FPluginReferenceDescriptor *this,FJsonObject *param_1,FText *param_2,
          TSharedPtr<FJsonObject,1> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>
                    (param_1,this,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// ReadArray @ 141e329a0

bool __cdecl
FPluginReferenceDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FPluginReferenceDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// ReadArray @ 141e329b0

bool __cdecl
FPluginReferenceDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FPluginReferenceDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// UpdateArray @ 141e3f210

void __cdecl
FPluginReferenceDescriptor::UpdateArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  undefined1 local_40 [8];
  FDelegateAllocation local_38;
  FString local_28;
  
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_80;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_V__TSharedPtr_VFJsonValue___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FPluginReferenceDescriptor::UpdateArray'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = param_3;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginReferenceDescriptor::UpdatePluginRefJsonObject;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginReferenceDescriptor::TryGetPluginRefJsonObjectKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_40 = (undefined1  [8])0x0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_38;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginReferenceDescriptor::GetPluginRefKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  ::FString::FString(&local_28,param_2);
  FJsonObjectArrayUpdater<FPluginReferenceDescriptor,FString>::Execute
            (param_1,&local_28,param_3,
             (TDelegate<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
              *)local_40,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_58,(TDelegate<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                       *)local_70,
             (TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_88);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateJson @ 141e42fc0

void __thiscall
FPluginReferenceDescriptor::UpdateJson(FPluginReferenceDescriptor *this,FJsonObject *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TJsonValueString<wchar_t> *pTVar6;
  wchar_t *pwVar7;
  TJsonValueString<wchar_t> *this_00;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint local_res8 [2];
  FJsonObject *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505 [5];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_500;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4f0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4e0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4d0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4c0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4b0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4a0;
  TSharedPtr<FJsonValue,1> local_490;
  TSharedPtr<FJsonValue,1> local_480;
  TSharedPtr<FJsonValue,1> local_470;
  FString local_460;
  TSharedPtr<FJsonValue,1> local_450;
  FString local_440;
  TSharedPtr<FJsonValue,1> local_430;
  FString local_420;
  TSharedPtr<FJsonValue,1> local_410;
  FString local_400;
  TSharedPtr<FJsonValue,1> local_3f0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3e0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3d8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3d0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3c8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3c0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3b8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_3b0;
  FString local_3a8;
  FString local_398;
  FString local_388;
  wchar_t *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FString local_368;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  FString local_348;
  wchar_t *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FString local_328;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FString local_308;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FString local_2e8;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FString local_288;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  FString local_268;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FString local_248;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FString local_228;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FString local_208;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  
  bVar4 = false;
  local_res8[0] = 0;
  local_res10 = param_1;
  ::FString::FString(&local_3a8,L"Name");
  FJsonObject::SetStringField(param_1,&local_3a8,&this->Name);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  bVar3 = this->bEnabled;
  ::FString::FString(&local_398,L"Enabled");
  FJsonObject::SetBoolField(param_1,&local_398,bVar3);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  bVar3 = this->bActivate;
  if (bVar3 == false) {
    uStack_370 = 8;
    local_378 = L"Activate";
    local_188._12_4_ = uStack_36c;
    local_188.Size = 8;
    local_188.DataPtr = L"Activate";
    FJsonObject::RemoveField(param_1,&local_188);
  }
  else {
    ::FString::FString(&local_388,L"Activate");
    FJsonObject::SetBoolField(param_1,&local_388,bVar3);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bEnabled == false) || (bVar3 = this->bOptional, bVar3 == false)) {
    uStack_350 = 8;
    local_358 = L"Optional";
    local_178._12_4_ = uStack_34c;
    local_178.Size = 8;
    local_178.DataPtr = L"Optional";
    FJsonObject::RemoveField(param_1,&local_178);
  }
  else {
    ::FString::FString(&local_368,L"Optional");
    FJsonObject::SetBoolField(param_1,&local_368,bVar3);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = (this->Description).Data.ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (iVar8 < 1) {
    uStack_330 = 0xb;
    local_338 = L"Description";
    local_168._12_4_ = uStack_32c;
    local_168.Size = 0xb;
    local_168.DataPtr = L"Description";
    FJsonObject::RemoveField(param_1,&local_168);
  }
  else {
    ::FString::FString(&local_348,L"Description");
    FJsonObject::SetStringField(param_1,&local_348,&this->Description);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = (this->MarketplaceURL).Data.ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (iVar8 < 1) {
    uStack_310 = 0xe;
    local_318 = L"MarketplaceURL";
    local_158._12_4_ = uStack_30c;
    local_158.Size = 0xe;
    local_158.DataPtr = L"MarketplaceURL";
    FJsonObject::RemoveField(param_1,&local_158);
  }
  else {
    ::FString::FString(&local_328,L"MarketplaceURL");
    FJsonObject::SetStringField(param_1,&local_328,&this->MarketplaceURL);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = (this->PlatformAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2f0 = 0x11;
    local_2f8 = L"PlatformAllowList";
    local_148._12_4_ = uStack_2ec;
    local_148.Size = 0x11;
    local_148.DataPtr = L"PlatformAllowList";
    FJsonObject::RemoveField(param_1,&local_148);
  }
  else {
    pFVar10 = (this->PlatformAllowList).AllocatorInstance.Data;
    local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    local_500.ArrayNum = 0;
    local_500.ArrayMax = 0;
    while( true ) {
      if ((this->PlatformAllowList).ArrayNum != iVar8) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar9) break;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar6->Value,(FString *)pFVar10);
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3e0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_480,&local_3e0);
      if (((local_500.AllocatorInstance.Data <= &local_480) &&
          (&local_480 <
           (TSharedPtr<FJsonValue,1> *)
           (local_500.AllocatorInstance.Data + (longlong)local_500.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_500.ArrayNum;
      if (local_500.ArrayNum == local_500.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_500.AllocatorInstance,&local_500.ArrayMax);
      }
      local_500.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_500.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_480.Object;
      *(TReferenceControllerBase<1> **)
       (local_500.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_480.SharedReferenceCount.ReferenceController;
      local_480.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_480.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&local_308,L"PlatformAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_308,&local_500);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_500.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_500.AllocatorInstance.Data);
    }
  }
  iVar8 = (this->PlatformDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2d0 = 0x10;
    local_2d8 = L"PlatformDenyList";
    local_138._12_4_ = uStack_2cc;
    local_138.Size = 0x10;
    local_138.DataPtr = L"PlatformDenyList";
    FJsonObject::RemoveField(param_1,&local_138);
  }
  else {
    pFVar10 = (this->PlatformDenyList).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.ArrayNum = 0;
    local_4f0.ArrayMax = 0;
    while( true ) {
      if ((this->PlatformDenyList).ArrayNum != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar10 == pFVar9) break;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar6->Value,(FString *)pFVar10);
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3d8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_470,&local_3d8);
      if (((local_4f0.AllocatorInstance.Data <= &local_470) &&
          (&local_470 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4f0.AllocatorInstance.Data + (longlong)local_4f0.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4f0.ArrayNum;
      if (local_4f0.ArrayNum == local_4f0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4f0.AllocatorInstance,&local_4f0.ArrayMax);
      }
      local_4f0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4f0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_470.Object;
      *(TReferenceControllerBase<1> **)
       (local_4f0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_470.SharedReferenceCount.ReferenceController;
      local_470.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_470.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&local_2e8,L"PlatformDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2e8,&local_4f0);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4f0.AllocatorInstance.Data,local_4f0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4f0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4f0.AllocatorInstance.Data);
    }
  }
  iVar8 = (this->TargetConfigurationAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2b0 = 0x1c;
    local_2b8 = L"TargetConfigurationAllowList";
    local_128._12_4_ = uStack_2ac;
    local_128.Size = 0x1c;
    local_128.DataPtr = L"TargetConfigurationAllowList";
    FJsonObject::RemoveField(param_1,&local_128);
  }
  else {
    pFVar9 = (this->TargetConfigurationAllowList).AllocatorInstance.Data;
    local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e0.ArrayNum = 0;
    local_4e0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((this->TargetConfigurationAllowList).ArrayNum != iVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&local_460,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = local_460.Data.AllocatorInstance.Data;
        local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = local_460.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = local_460.Data.ArrayMax;
        local_460.Data.ArrayNum = 0;
        local_460.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3d0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_490,&local_3d0);
      if (((local_4e0.AllocatorInstance.Data <= &local_490) &&
          (&local_490 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4e0.AllocatorInstance.Data + (longlong)local_4e0.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4e0.ArrayNum;
      if (local_4e0.ArrayNum == local_4e0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4e0.AllocatorInstance,&local_4e0.ArrayMax);
      }
      local_4e0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4e0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_490.Object;
      *(TReferenceControllerBase<1> **)
       (local_4e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_490.SharedReferenceCount.ReferenceController;
      local_490.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_490.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&local_2c8,L"TargetConfigurationAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2c8,&local_4e0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4e0.AllocatorInstance.Data,local_4e0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4e0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4e0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (this->TargetConfigurationDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_290 = 0x1b;
    local_298 = L"TargetConfigurationDenyList";
    local_118._12_4_ = uStack_28c;
    local_118.Size = 0x1b;
    local_118.DataPtr = L"TargetConfigurationDenyList";
    FJsonObject::RemoveField(param_1,&local_118);
  }
  else {
    pFVar9 = (this->TargetConfigurationDenyList).AllocatorInstance.Data;
    local_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d0.ArrayNum = 0;
    local_4d0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((this->TargetConfigurationDenyList).ArrayNum != iVar8) {
        local_508 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_508);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&local_440,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = local_440.Data.AllocatorInstance.Data;
        local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = local_440.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = local_440.Data.ArrayMax;
        local_440.Data.ArrayNum = 0;
        local_440.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3c8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_450,&local_3c8);
      if (((local_4d0.AllocatorInstance.Data <= &local_450) &&
          (&local_450 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4d0.AllocatorInstance.Data + (longlong)local_4d0.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4d0.ArrayNum;
      if (local_4d0.ArrayNum == local_4d0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4d0.AllocatorInstance,&local_4d0.ArrayMax);
      }
      local_4d0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4d0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_450.Object;
      *(TReferenceControllerBase<1> **)
       (local_4d0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_450.SharedReferenceCount.ReferenceController;
      local_450.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_450.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&local_2a8,L"TargetConfigurationDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_2a8,&local_4d0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4d0.AllocatorInstance.Data,local_4d0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4d0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4d0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (this->TargetAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_270 = 0xf;
    local_278 = L"TargetAllowList";
    local_108._12_4_ = uStack_26c;
    local_108.Size = 0xf;
    local_108.DataPtr = L"TargetAllowList";
    FJsonObject::RemoveField(param_1,&local_108);
  }
  else {
    pFVar9 = (this->TargetAllowList).AllocatorInstance.Data;
    local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c0.ArrayNum = 0;
    local_4c0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((this->TargetAllowList).ArrayNum != iVar8) {
        local_507 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_507);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&local_420,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
        local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = local_420.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = local_420.Data.ArrayMax;
        local_420.Data.ArrayNum = 0;
        local_420.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3c0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_430,&local_3c0);
      if (((local_4c0.AllocatorInstance.Data <= &local_430) &&
          (&local_430 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4c0.ArrayNum;
      if (local_4c0.ArrayNum == local_4c0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4c0.AllocatorInstance,&local_4c0.ArrayMax);
      }
      local_4c0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4c0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_430.Object;
      *(TReferenceControllerBase<1> **)
       (local_4c0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_430.SharedReferenceCount.ReferenceController;
      local_430.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_430.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&local_288,L"TargetAllowList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_288,&local_4c0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4c0.AllocatorInstance.Data,local_4c0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4c0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4c0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (this->TargetDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_250 = 0xe;
    local_258 = L"TargetDenyList";
    local_f8._12_4_ = uStack_24c;
    local_f8.Size = 0xe;
    local_f8.DataPtr = L"TargetDenyList";
    FJsonObject::RemoveField(param_1,&local_f8);
  }
  else {
    pFVar9 = (this->TargetDenyList).AllocatorInstance.Data;
    local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.ArrayNum = 0;
    local_4b0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((this->TargetDenyList).ArrayNum != iVar8) {
        local_506 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_506);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&local_400,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
        local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = local_400.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = local_400.Data.ArrayMax;
        local_400.Data.ArrayNum = 0;
        local_400.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      local_3b8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_410,&local_3b8);
      if (((local_4b0.AllocatorInstance.Data <= &local_410) &&
          (&local_410 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4b0.AllocatorInstance.Data + (longlong)local_4b0.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4b0.ArrayNum;
      if (local_4b0.ArrayNum == local_4b0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4b0.AllocatorInstance,&local_4b0.ArrayMax);
      }
      local_4b0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4b0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_410.Object;
      *(TReferenceControllerBase<1> **)
       (local_4b0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_410.SharedReferenceCount.ReferenceController;
      local_410.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_410.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&local_268,L"TargetDenyList");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_268,&local_4b0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4b0.AllocatorInstance.Data,local_4b0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4b0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4b0.AllocatorInstance.Data);
    }
  }
  iVar8 = (this->SupportedTargetPlatforms).ArrayNum;
  if (iVar8 < 1) {
    uStack_230 = 0x18;
    local_238 = L"SupportedTargetPlatforms";
    local_e8._12_4_ = uStack_22c;
    local_e8.Size = 0x18;
    local_e8.DataPtr = L"SupportedTargetPlatforms";
    FJsonObject::RemoveField(param_1,&local_e8);
  }
  else {
    pFVar10 = (this->SupportedTargetPlatforms).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ArrayNum = 0;
    local_4a0.ArrayMax = 0;
    while( true ) {
      if ((this->SupportedTargetPlatforms).ArrayNum != iVar8) {
        local_505[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_505);
      }
      if (pFVar10 == pFVar9) break;
      this_00 = ::operator_new(0x20);
      pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      if (this_00 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&this_00->Value,(FString *)pFVar10);
        *(EJson *)&this_00->_padding_ = String;
        pTVar6 = this_00;
      }
      local_3b0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_3f0,&local_3b0);
      if (((local_4a0.AllocatorInstance.Data <= &local_3f0) &&
          (&local_3f0 <
           (TSharedPtr<FJsonValue,1> *)
           (local_4a0.AllocatorInstance.Data + (longlong)local_4a0.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_4a0.ArrayNum;
      if (local_4a0.ArrayNum == local_4a0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_4a0.AllocatorInstance,&local_4a0.ArrayMax);
      }
      local_4a0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&local_4a0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_3f0.Object;
      *(TReferenceControllerBase<1> **)
       (local_4a0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_3f0.SharedReferenceCount.ReferenceController;
      local_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_3f0.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&local_248,L"SupportedTargetPlatforms");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_248,&local_4a0);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_4a0.AllocatorInstance.Data,local_4a0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_4a0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_4a0.AllocatorInstance.Data);
    }
  }
  bVar4 = this->bHasExplicitPlatforms;
  if (bVar4 == false) {
    uStack_210 = 0x14;
    local_218 = L"HasExplicitPlatforms";
    local_d8._12_4_ = uStack_20c;
    local_d8.Size = 0x14;
    local_d8.DataPtr = L"HasExplicitPlatforms";
    FJsonObject::RemoveField(param_1,&local_d8);
  }
  else {
    ::FString::FString(&local_228,L"HasExplicitPlatforms");
    FJsonObject::SetBoolField(param_1,&local_228,bVar4);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bEnabled == false) || ((this->RequestedVersion).bIsSet == false)) {
    uStack_1f0 = 7;
    local_1f8 = L"Version";
    local_c8._12_4_ = uStack_1ec;
    local_c8.Size = 7;
    local_c8.DataPtr = L"Version";
    FJsonObject::RemoveField(param_1,&local_c8);
  }
  else {
    iVar8 = (this->RequestedVersion).TypedValue;
    ::FString::FString(&local_208,L"Version");
    FJsonObject::SetNumberField(param_1,&local_208,(double)iVar8);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  uStack_1e0 = 0x12;
  local_1e8 = L"WhitelistPlatforms";
  local_b8._12_4_ = uStack_1dc;
  local_b8.Size = 0x12;
  local_b8.DataPtr = L"WhitelistPlatforms";
  FJsonObject::RemoveField(param_1,&local_b8);
  uStack_1d0 = 0x12;
  local_1d8 = L"BlacklistPlatforms";
  local_a8._12_4_ = uStack_1cc;
  local_a8.Size = 0x12;
  local_a8.DataPtr = L"BlacklistPlatforms";
  FJsonObject::RemoveField(param_1,&local_a8);
  uStack_1c0 = 0x1d;
  local_1c8 = L"WhitelistTargetConfigurations";
  local_98._12_4_ = uStack_1bc;
  local_98.Size = 0x1d;
  local_98.DataPtr = L"WhitelistTargetConfigurations";
  FJsonObject::RemoveField(param_1,&local_98);
  uStack_1b0 = 0x1d;
  local_1b8 = L"BlacklistTargetConfigurations";
  local_88._12_4_ = uStack_1ac;
  local_88.Size = 0x1d;
  local_88.DataPtr = L"BlacklistTargetConfigurations";
  FJsonObject::RemoveField(param_1,&local_88);
  uStack_1a0 = 0x10;
  local_1a8 = L"WhitelistTargets";
  local_78._12_4_ = uStack_19c;
  local_78.Size = 0x10;
  local_78.DataPtr = L"WhitelistTargets";
  FJsonObject::RemoveField(param_1,&local_78);
  uStack_190 = 0x10;
  local_198 = L"BlacklistTargets";
  local_68[0]._12_4_ = uStack_18c;
  local_68[0].Size = 0x10;
  local_68[0].DataPtr = L"BlacklistTargets";
  FJsonObject::RemoveField(param_1,local_68);
  return;
}

// Write @ 141e45580

void __thiscall
FPluginReferenceDescriptor::Write
          (FPluginReferenceDescriptor *this,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonObject,1> local_28;
  TSharedRef<FJsonObject,1> local_18;
  
  pTVar5 = MakeShared<FJsonObject,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UpdateJson(this,pFVar2);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_28,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// WriteArray @ 141e46ce0

void __cdecl
FPluginReferenceDescriptor::WriteArray
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FJsonObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  FPluginReferenceDescriptor *this;
  FPluginReferenceDescriptor *pFVar7;
  wchar_t *local_res10;
  undefined1 local_res18 [8];
  TSharedPtr<FJsonObject,1> local_48;
  TSharedRef<FJsonObject,1> local_38;
  
  if (0 < param_3->ArrayNum) {
    local_res10 = param_2;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
              (param_1,&local_res10);
    iVar1 = param_3->ArrayNum;
    this = (FPluginReferenceDescriptor *)(param_3->AllocatorInstance).Data;
    pFVar7 = this + iVar1;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPluginReferenceDescriptor_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this == pFVar7) break;
      pTVar6 = MakeShared<FJsonObject,1>(&local_38);
      pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar6->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (pFVar3 == (FJsonObject *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      UpdateJson(this,pFVar3);
      if (pFVar3 == (FJsonObject *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FJsonObject *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar3;
      local_48.SharedReferenceCount.ReferenceController = pTVar2;
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_48,param_1,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      this = this + 1;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  return;
}

