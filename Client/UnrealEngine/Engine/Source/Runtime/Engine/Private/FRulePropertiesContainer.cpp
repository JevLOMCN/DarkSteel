// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ExpandVariables @ 147ada790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FRulePropertiesContainer::ExpandVariables
          (FRulePropertiesContainer *this,IDeviceProfileSelectorModule *param_1,FString *param_2,
          FString *param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  FName *pFVar10;
  FGPUDriverInfo *pFVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  FName local_res18;
  FString *local_res20;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FGPUDriverInfo local_b0;
  
  iVar6 = (param_2->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  local_res20 = param_3;
  if (0 < iVar5) {
    if ((iVar6 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(short *)(param_2->Data).AllocatorInstance.Data == 0x40) {
      pFVar8 = ::FString::RightChop(param_2,&local_100,1);
      if (param_3 != pFVar8) {
        pFVar15 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (param_3->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_3->Data).ArrayNum = (pFVar8->Data).ArrayNum;
        (param_3->Data).ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  ::FString::Reset(param_4,0);
  local_168.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar16 = (longlong)local_168.Data.ArrayNum;
  pFVar15 = (param_2->Data).AllocatorInstance.Data;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_168.Data.ArrayNum == 0) {
    local_168.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_168.Data.ArrayNum,0,(ForAnyElementType *)&local_168,local_168.Data.ArrayNum
               ,&local_168.Data.ArrayMax);
    memcpy(local_168.Data.AllocatorInstance.Data,pFVar15,lVar16 * 2);
  }
  iVar6 = -1;
  do {
    iVar6 = ::FString::Find(param_2,L"$(",2,CaseSensitive,FromEnd,iVar6);
    iVar5 = 0;
    if (iVar6 == -1) {
      iVar6 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar6 = iVar5;
      }
      ::FString::AssignRange(local_res20,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar6);
      bVar2 = true;
LAB_147adaf5c:
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      return bVar2;
    }
    iVar7 = ::FString::Find(param_2,L")",1,CaseSensitive,FromStart,iVar6 + 2);
    if (iVar7 == -1) {
      ::FString::PrintfImpl(&local_148,L"no closing parenthesis for %s");
      if (param_4 != &local_148) {
        pFVar15 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (param_4->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = local_148.Data.ArrayNum;
        (param_4->Data).ArrayMax = local_148.Data.ArrayMax;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
LAB_147adaf37:
      bVar2 = false;
      goto LAB_147adaf5c;
    }
    ::FString::Mid(param_2,&local_138,iVar6,(iVar7 - iVar6) + 1);
    ::FString::Mid(&local_138,&local_128,2,(iVar7 - iVar6) + -2);
    iVar17 = local_128.Data.ArrayNum;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    FVar13.Data = local_128.Data.AllocatorInstance.Data;
    FVar9.Data = local_128.Data.AllocatorInstance.Data;
    if (local_128.Data.AllocatorInstance.Data ==
        local_128.Data.AllocatorInstance.Data + (longlong)iVar17 * 2) {
LAB_147ada9ea:
      pFVar15 = local_128.Data.AllocatorInstance.Data + (longlong)iVar17 * 2;
      if (local_128.Data.AllocatorInstance.Data != pFVar15) goto LAB_147adaa00;
    }
    else {
      do {
        if (*(wchar_t *)FVar13.Data == L'$') {
          if ((int)((longlong)FVar13.Data - (longlong)local_128.Data.AllocatorInstance.Data >> 1) ==
              -1) goto LAB_147ada9ea;
          goto LAB_147adae19;
        }
        FVar13.Data = FVar13.Data + 2;
      } while (FVar13.Data != local_128.Data.AllocatorInstance.Data + (longlong)iVar17 * 2);
      pFVar15 = local_128.Data.AllocatorInstance.Data + (longlong)iVar17 * 2;
LAB_147adaa00:
      do {
        if (*(wchar_t *)FVar9.Data == L'(') {
          if ((int)((longlong)FVar9.Data - (longlong)local_128.Data.AllocatorInstance.Data >> 1) !=
              -1) goto LAB_147adae19;
          break;
        }
        FVar9.Data = FVar9.Data + 2;
      } while (FVar9.Data != pFVar15);
    }
    iVar14 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar14 = 0;
    }
    pFVar10 = ::FName::FName(&local_108,iVar14,(wchar_t *)local_128.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_res18 = *pFVar10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      pwVar12 = FCommandLine::Get();
      ::FString::FString(&`private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                          ::__l2::CommandLine,pwVar12);
      atexit(`FRulePropertiesContainer::RetrievePropertyValue'::__l2::
             _dynamic_atexit_destructor_for__CommandLine__);
      _Init_thread_footer(&`private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar17 = `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
             ::__l2::CommandLine.Data.ArrayNum;
    FVar9.Data = `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                 ::__l2::CommandLine.Data.AllocatorInstance.Data;
    if (local_res18 == SRC_Chipset) {
      pFVar8 = FGenericPlatformMisc::GetCPUChipset(&local_f0);
      if (&local_178 != pFVar8) {
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        local_178.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_178.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    else if (local_res18 == SRC_MakeAndModel) {
      pFVar8 = FGenericPlatformMisc::GetDeviceMakeAndModel(&local_e0);
      if (&local_178 != pFVar8) {
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        local_178.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_178.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    else if (local_res18 == SRC_OSVersion) {
      pFVar8 = FWindowsPlatformMisc::GetOSVersion(&local_d0);
      if (&local_178 != pFVar8) {
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        local_178.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_178.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    else if (local_res18 == SRC_PrimaryGPUDesc) {
      pFVar8 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_c0);
      pFVar11 = FWindowsPlatformMisc::GetGPUDriverInfo(&local_b0,pFVar8,true);
      pFVar8 = &pFVar11->DeviceDescription;
      if (&local_178 != pFVar8) {
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        local_178.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (pFVar11->DeviceDescription).Data.ArrayNum;
        local_178.Data.ArrayMax = (pFVar11->DeviceDescription).Data.ArrayMax;
        (pFVar11->DeviceDescription).Data.ArrayNum = 0;
        (pFVar11->DeviceDescription).Data.ArrayMax = 0;
      }
      if (local_b0.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.RHIName.Data.AllocatorInstance.Data);
      }
      if (local_b0.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.DriverDate.Data.AllocatorInstance.Data);
      }
      if (local_b0.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_b0.UserDriverVersion.Data.AllocatorInstance.Data);
      }
      if (local_b0.InternalDriverVersion.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.InternalDriverVersion.Data.AllocatorInstance.Data);
      }
      if (local_b0.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.ProviderName.Data.AllocatorInstance.Data);
      }
      if (local_b0.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_b0.DeviceDescription.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    else if (local_res18 == SRC_PreviousRegexMatch) {
      iVar17 = this->PreviousRegexMatches[0].Data.ArrayNum;
      iVar14 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar14 = iVar5;
      }
      ::FString::AssignRange
                (&local_178,(wchar_t *)this->PreviousRegexMatches[0].Data.AllocatorInstance.Data,
                 iVar14);
    }
    else if (local_res18 == SRC_PreviousRegexMatch1) {
      iVar17 = this->PreviousRegexMatches[1].Data.ArrayNum;
      iVar14 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar14 = iVar5;
      }
      ::FString::AssignRange
                (&local_178,(wchar_t *)this->PreviousRegexMatches[1].Data.AllocatorInstance.Data,
                 iVar14);
    }
    else if (local_res18 == SRC_CommandLine) {
      lVar16 = (longlong)
               `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
               ::__l2::CommandLine.Data.ArrayNum;
      local_178.Data.ArrayNum =
           `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
           ::__l2::CommandLine.Data.ArrayNum;
      if ((`private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
           ::__l2::CommandLine.Data.ArrayNum == 0) && (local_178.Data.ArrayMax == 0)) {
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,`private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                       ::__l2::CommandLine.Data.ArrayNum,local_178.Data.ArrayMax,
                   (ForAnyElementType *)&local_178,
                   `private:_bool___cdecl_FRulePropertiesContainer::RetrievePropertyValue(IDeviceProfileSelectorModule*___ptr64,FName_const&___ptr64,FString&___ptr64)___ptr64'
                   ::__l2::CommandLine.Data.ArrayNum,&local_178.Data.ArrayMax);
        if (iVar17 != 0) {
          memcpy(local_178.Data.AllocatorInstance.Data,FVar9.Data,lVar16 * 2);
        }
      }
    }
    else if ((param_1 == (IDeviceProfileSelectorModule *)0x0) ||
            (cVar4 = (**(code **)(param_1->_padding_ + 0x58))(param_1,&local_res18,&local_178),
            cVar4 == '\0')) {
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,local_res18);
      if (pFVar8 == (FString *)0x0) {
LAB_147adae19:
        ::FString::PrintfImpl(&local_158,L"could not find %s (from %s)");
        if (param_4 != &local_158) {
          pFVar15 = (param_4->Data).AllocatorInstance.Data;
          if (pFVar15 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar15);
          }
          (param_4->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
          (param_4->Data).ArrayNum = local_158.Data.ArrayNum;
          (param_4->Data).ArrayMax = local_158.Data.ArrayMax;
          local_158.Data.ArrayNum = 0;
          local_158.Data.ArrayMax = 0;
          local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_147adaf37;
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
        bVar2 = false;
        goto LAB_147adaf5c;
      }
      ::FString::operator=(&local_178,pFVar8);
    }
    ::FString::RemoveAt(&local_168,iVar6,(iVar7 - iVar6) + 1,Default);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar9.Data = local_178.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_118,(wchar_t *)FVar9.Data);
    ::FString::InsertAt(&local_168,iVar6,&local_118);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  } while( true );
}

