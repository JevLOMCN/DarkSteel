// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// FindEngineConstant @ 149041a70

FNiagaraVariable * __cdecl FNiagaraConstants::FindEngineConstant(FNiagaraVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraVariable *pFVar3;
  ForAnyElementType FVar4;
  
  if ((SystemParameters.ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemParameters.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x282,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraVariable *)(*pcVar1)();
    return pFVar3;
  }
  if ((FNiagaraVariable *)SystemParameters.AllocatorInstance.Data !=
      (FNiagaraVariable *)
      (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20)) {
    FVar4.Data = SystemParameters.AllocatorInstance.Data;
    do {
      if (((FNiagaraVariable *)FVar4.Data)->_padding_ == param_1->_padding_) {
        return (FNiagaraVariable *)FVar4.Data;
      }
      FVar4.Data = FVar4.Data + 0x20;
    } while ((FNiagaraVariable *)FVar4.Data !=
             (FNiagaraVariable *)
             (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20))
    ;
  }
  return (FNiagaraVariable *)0x0;
}

// FindStaticSwitchConstant @ 149041e80

FNiagaraVariable * __cdecl FNiagaraConstants::FindStaticSwitchConstant(FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraVariable *pFVar3;
  ForAnyElementType FVar4;
  
  if ((SwitchParameters.ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SwitchParameters.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x28e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraVariable *)(*pcVar1)();
    return pFVar3;
  }
  if ((FNiagaraVariable *)SwitchParameters.AllocatorInstance.Data !=
      (FNiagaraVariable *)
      (SwitchParameters.AllocatorInstance.Data + (longlong)SwitchParameters.ArrayNum * 0x20)) {
    FVar4.Data = SwitchParameters.AllocatorInstance.Data;
    do {
      if ((FName)((FNiagaraVariable *)FVar4.Data)->_padding_ == *param_1) {
        return (FNiagaraVariable *)FVar4.Data;
      }
      FVar4.Data = FVar4.Data + 0x20;
    } while ((FNiagaraVariable *)FVar4.Data !=
             (FNiagaraVariable *)
             (SwitchParameters.AllocatorInstance.Data + (longlong)SwitchParameters.ArrayNum * 0x20))
    ;
  }
  return (FNiagaraVariable *)0x0;
}

// GetAttributeAsEmitterDataSetKey @ 1490431c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNiagaraVariableBase * __cdecl
FNiagaraConstants::GetAttributeAsEmitterDataSetKey
          (FNiagaraVariableBase *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  FName local_168 [2];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&EmitterString,L"Emitter.");
      atexit(`FNiagaraConstants::GetAttributeAsEmitterDataSetKey'::__l2::
             _dynamic_atexit_destructor_for__EmitterString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&StackContextString,L"StackContext.");
      atexit(`FNiagaraConstants::GetAttributeAsEmitterDataSetKey'::__l2::
             _dynamic_atexit_destructor_for__StackContextString__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  __return_storage_ptr__->Name = param_1->Name;
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex =
       (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  ::FName::ToString(&param_1->Name,&local_158);
  pwVar7 = local_158.Base;
  iVar2 = EmitterString.Data.ArrayNum;
  iVar4 = iVar2 + -1;
  iVar8 = (int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar1 = iVar8;
  if (iVar4 < iVar8) {
    iVar1 = iVar4;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (iVar4 == iVar6) {
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)EmitterString.Data.AllocatorInstance.Data,local_158.Base,
                         (longlong)iVar6);
      if (iVar2 != 0) goto LAB_1490432dc;
      iVar2 = EmitterString.Data.ArrayNum;
    }
    if (iVar4 == iVar6) {
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      iVar8 = iVar8 - iVar4;
      pwVar7 = pwVar7 + iVar4;
      goto LAB_14904333e;
    }
  }
LAB_1490432dc:
  iVar2 = StackContextString.Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar1 = iVar8;
  if (iVar4 < iVar8) {
    iVar1 = iVar4;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (iVar4 == iVar6) {
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)StackContextString.Data.AllocatorInstance.Data,pwVar7,
                         (longlong)iVar6);
      if (iVar2 != 0) goto LAB_14904333e;
      iVar2 = StackContextString.Data.ArrayNum;
    }
    if (iVar4 == iVar6) {
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      iVar8 = iVar8 - iVar4;
      pwVar7 = pwVar7 + iVar4;
    }
  }
LAB_14904333e:
  pFVar3 = ::FName::FName(local_168,iVar8,pwVar7,FNAME_Add);
  __return_storage_ptr__->Name = *pFVar3;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// GetAttributeAsParticleDataSetKey @ 149043430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNiagaraVariableBase * __cdecl
FNiagaraConstants::GetAttributeAsParticleDataSetKey
          (FNiagaraVariableBase *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  FName local_168 [2];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ParticlesString,L"Particles.");
      atexit(`FNiagaraConstants::GetAttributeAsParticleDataSetKey'::__l2::
             _dynamic_atexit_destructor_for__ParticlesString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&StackContextString,L"StackContext.");
      atexit(`FNiagaraConstants::GetAttributeAsParticleDataSetKey'::__l2::
             _dynamic_atexit_destructor_for__StackContextString__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  __return_storage_ptr__->Name = param_1->Name;
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex =
       (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  ::FName::ToString(&param_1->Name,&local_158);
  pwVar7 = local_158.Base;
  iVar2 = ParticlesString.Data.ArrayNum;
  iVar4 = iVar2 + -1;
  iVar8 = (int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar1 = iVar8;
  if (iVar4 < iVar8) {
    iVar1 = iVar4;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (iVar4 == iVar6) {
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)ParticlesString.Data.AllocatorInstance.Data,local_158.Base,
                         (longlong)iVar6);
      if (iVar2 != 0) goto LAB_14904354c;
      iVar2 = ParticlesString.Data.ArrayNum;
    }
    if (iVar4 == iVar6) {
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      iVar8 = iVar8 - iVar4;
      pwVar7 = pwVar7 + iVar4;
      goto LAB_1490435ae;
    }
  }
LAB_14904354c:
  iVar2 = StackContextString.Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar1 = iVar8;
  if (iVar4 < iVar8) {
    iVar1 = iVar4;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (iVar4 == iVar6) {
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)StackContextString.Data.AllocatorInstance.Data,pwVar7,
                         (longlong)iVar6);
      if (iVar2 != 0) goto LAB_1490435ae;
      iVar2 = StackContextString.Data.ArrayNum;
    }
    if (iVar4 == iVar6) {
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      iVar8 = iVar8 - iVar4;
      pwVar7 = pwVar7 + iVar4;
    }
  }
LAB_1490435ae:
  pFVar3 = ::FName::FName(local_168,iVar8,pwVar7,FNAME_Add);
  __return_storage_ptr__->Name = *pFVar3;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// GetAttributeDefaultBinding @ 1490436a0

FNiagaraVariableAttributeBinding * __cdecl
FNiagaraConstants::GetAttributeDefaultBinding
          (FNiagaraVariableAttributeBinding *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  FName _Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraTypeDefinition *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  FVersionedNiagaraEmitterBase local_58;
  FName local_40;
  FNiagaraTypeDefinitionHandle local_38 [2];
  ForAnyElementType local_30;
  undefined8 local_28;
  
  if (AttrDefaultsValueMap._8_4_ == AttrDefaultsValueMap._52_4_) {
    Init();
  }
  (__return_storage_ptr__->RootName).ComparisonIndex = 0;
  (__return_storage_ptr__->RootName).Number = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.Number = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    (&(__return_storage_ptr__->ParamMapVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar3;
  __return_storage_ptr__->bBindingExistsOnSource = '\0';
  __return_storage_ptr__->bIsCachedParticleValue = '\x01';
  (__return_storage_ptr__->DataSetName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataSetName).Number = 0;
  (__return_storage_ptr__->BindingSourceMode).Value = '\0';
  if ((AttrDefaultsValueMap._8_4_ == AttrDefaultsValueMap._52_4_) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttrDefaultsValueMap.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x2f9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNiagaraVariableAttributeBinding *)(*pcVar1)();
    return pFVar5;
  }
  uVar4 = ::GetTypeHash(param_1);
  if (AttrDefaultsValueMap._8_4_ != AttrDefaultsValueMap._52_4_) {
    lVar9 = 0x154c7b2e8;
    if (AttrDefaultsValueMap._64_8_ != 0) {
      lVar9 = AttrDefaultsValueMap._64_8_;
    }
    uVar4 = *(uint *)(lVar9 + (ulonglong)(AttrDefaultsValueMap._72_4_ - 1 & uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar4 * 0x38 + AttrDefaultsValueMap._0_8_);
        if ((*pFVar8 == param_1->Name) &&
           (pFVar8[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (uVar4 != 0xffffffff) {
            pFVar7 = pFVar8 + 2;
            if (pFVar8 == (FName *)0x0) {
              pFVar7 = (FName *)0x0;
            }
            if (pFVar7 != (FName *)0x0) {
              local_40 = *pFVar7;
              local_38[0].RegisteredTypeIndex = pFVar7[1].ComparisonIndex.Value;
              local_30.Data = (FScriptContainerElement *)0x0;
              uVar4 = pFVar7[3].ComparisonIndex.Value;
              _Src = pFVar7[2];
              local_28 = CONCAT44(local_28._4_4_,uVar4);
              if (uVar4 == 0) {
                local_28 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar4,0,&local_30,uVar4,(int *)((longlong)&local_28 + 4));
                memcpy(local_30.Data,(void *)_Src,(longlong)(int)uVar4);
              }
              goto LAB_1490437dc;
            }
          }
          break;
        }
        uVar4 = pFVar8[6].ComparisonIndex.Value;
      } while (uVar4 != 0xffffffff);
    }
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  local_38[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_38,&FNiagaraTypeDefinition::Vec4Def);
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
LAB_1490437dc:
  __return_storage_ptr__->RootName = param_1->Name;
  pFVar6 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar3 = FNiagaraTypeDefinitionHandle::Register(local_res8,pFVar6);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar3;
  local_58.Emitter = (UNiagaraEmitterBase *)0x0;
  local_58.Version.A = 0;
  local_58.Version.B = 0;
  local_58.Version.C = 0;
  local_58.Version.D = 0;
  FNiagaraVariableAttributeBinding::SetValue
            (__return_storage_ptr__,&param_1->Name,&local_58,Particles);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeDefaultValue @ 149043900

FString * __cdecl
FNiagaraConstants::GetAttributeDefaultValue
          (FString *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  longlong lVar5;
  int iVar6;
  
  if (AttrDefaultsStrMap._8_4_ == AttrDefaultsStrMap._52_4_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttrDefaultsStrMap.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = ::GetTypeHash(param_1);
  if (AttrDefaultsStrMap._8_4_ != AttrDefaultsStrMap._52_4_) {
    lVar5 = 0x154c7b298;
    if (AttrDefaultsStrMap._64_8_ != 0) {
      lVar5 = AttrDefaultsStrMap._64_8_;
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(AttrDefaultsStrMap._72_4_ - 1 & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = AttrDefaultsStrMap._0_8_ + (longlong)iVar6 * 0x28;
        if ((*(FName *)(AttrDefaultsStrMap._0_8_ + (longlong)iVar6 * 0x28) == param_1->Name) &&
           (*(int *)(lVar5 + 8) == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (iVar6 != -1) {
            pFVar4 = (FString *)(lVar5 + 0x10);
            if (lVar5 == 0) {
              pFVar4 = (FString *)0x0;
            }
            if ((pFVar4 != (FString *)0x0) && (1 < (pFVar4->Data).ArrayNum)) {
              ::FString::FString(__return_storage_ptr__,pFVar4);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x20);
      } while (iVar6 != -1);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAttributeDescription @ 149043a20

FText * __cdecl
FNiagaraConstants::GetAttributeDescription
          (FText *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res18 [16];
  
  if (AttrDescStrMap._8_4_ == AttrDescStrMap._52_4_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttrDescStrMap.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = ::GetTypeHash(param_1);
  if (AttrDescStrMap._8_4_ != AttrDescStrMap._52_4_) {
    lVar6 = 0x154c7b388;
    if (AttrDescStrMap._64_8_ != 0) {
      lVar6 = AttrDescStrMap._64_8_;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(AttrDescStrMap._72_4_ - 1 & uVar4) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = AttrDescStrMap._0_8_ + (longlong)iVar7 * 0x28;
        if ((*(FName *)(AttrDescStrMap._0_8_ + (longlong)iVar7 * 0x28) == param_1->Name) &&
           (*(int *)(lVar6 + 8) == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (iVar7 != -1) {
            pFVar5 = (FText *)(lVar6 + 0x10);
            if (lVar6 == 0) {
              pFVar5 = (FText *)0x0;
            }
            if (pFVar5 != (FText *)0x0) {
              bVar3 = FText::IsEmpty(pFVar5);
              if (!bVar3) {
                (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
                pIVar1 = (pFVar5->TextData).Reference;
                (__return_storage_ptr__->TextData).Reference = pIVar1;
                if (pIVar1 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
                }
                __return_storage_ptr__->Flags = pFVar5->Flags;
                return __return_storage_ptr__;
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x20);
      } while (iVar7 != -1);
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAttributeWithDefaultValue @ 149043b60

FNiagaraVariable * __cdecl
FNiagaraConstants::GetAttributeWithDefaultValue
          (FNiagaraVariable *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FNiagaraVariable *pFVar5;
  FName *pFVar6;
  longlong lVar7;
  
  if (AttrDefaultsValueMap._8_4_ == AttrDefaultsValueMap._52_4_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttrDefaultsValueMap.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraVariable *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = ::GetTypeHash(param_1);
  if (AttrDefaultsValueMap._8_4_ != AttrDefaultsValueMap._52_4_) {
    lVar7 = 0x154c7b2e8;
    if (AttrDefaultsValueMap._64_8_ != 0) {
      lVar7 = AttrDefaultsValueMap._64_8_;
    }
    uVar3 = *(uint *)(lVar7 + (ulonglong)(AttrDefaultsValueMap._72_4_ - 1 & uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x38 + AttrDefaultsValueMap._0_8_);
        if ((*pFVar6 == param_1->Name) &&
           (pFVar6[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (uVar3 != 0xffffffff) {
            pFVar5 = (FNiagaraVariable *)(pFVar6 + 2);
            if (pFVar6 == (FName *)0x0) {
              pFVar5 = (FNiagaraVariable *)0x0;
            }
            if (pFVar5 != (FNiagaraVariable *)0x0) {
              FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,pFVar5);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar3 = pFVar6[6].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  __return_storage_ptr__->_padding_ = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&__return_storage_ptr__->_padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&__return_storage_ptr__->_padding_ = iVar4;
  (__return_storage_ptr__->VarData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->VarData).ArrayNum = 0;
  (__return_storage_ptr__->VarData).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCommonParticleAttributes @ 1490447c0

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraConstants::GetCommonParticleAttributes(void)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (Attributes.ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Attributes.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &Attributes;
}

// GetConstantMetaData @ 149044830

FNiagaraVariableMetaData * __cdecl
FNiagaraConstants::GetConstantMetaData(FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FNiagaraVariableMetaData *pFVar5;
  longlong lVar6;
  
  if ((AttrMetaData._8_4_ == AttrMetaData._52_4_) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttrMetaData.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x2f3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNiagaraVariableMetaData *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FNiagaraVariableBase,FNiagaraVariableMetaData>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableMetaData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraVariableBase>
                    ((TSet<TTuple<FNiagaraVariableBase,FNiagaraVariableMetaData>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableMetaData,0>,FDefaultSetAllocator>
                      *)&AttrMetaData,uVar3,param_1);
  if (iVar4 == -1) {
    return (FNiagaraVariableMetaData *)0x0;
  }
  lVar6 = (longlong)iVar4 * 0x1b0 + AttrMetaData._0_8_;
  pFVar5 = (FNiagaraVariableMetaData *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    pFVar5 = (FNiagaraVariableMetaData *)0x0;
  }
  return pFVar5;
}

// GetEngineConstantDescription @ 149046520

FText * __cdecl
FNiagaraConstants::GetEngineConstantDescription
          (FText *__return_storage_ptr__,FNiagaraVariable *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res18 [16];
  
  if (SystemStrMap._8_4_ == SystemStrMap._52_4_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemStrMap.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2bd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = ::GetTypeHash((FNiagaraVariableBase *)param_1);
  if (SystemStrMap._8_4_ != SystemStrMap._52_4_) {
    lVar7 = 0x154c7b248;
    if (SystemStrMap._64_8_ != 0) {
      lVar7 = SystemStrMap._64_8_;
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(SystemStrMap._72_4_ - 1 & uVar4) * 4);
    if (iVar8 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar8 * 0x38 + SystemStrMap._0_8_);
        if ((*plVar6 == param_1->_padding_) && ((int)plVar6[1] == (int)param_1->_padding_)) {
          if (iVar8 != -1) {
            pFVar5 = (FText *)(plVar6 + 4);
            if (plVar6 == (longlong *)0x0) {
              pFVar5 = (FText *)0x0;
            }
            if (pFVar5 != (FText *)0x0) {
              bVar3 = FText::IsEmpty(pFVar5);
              if (!bVar3) {
                (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
                pIVar1 = (pFVar5->TextData).Reference;
                (__return_storage_ptr__->TextData).Reference = pIVar1;
                if (pIVar1 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
                }
                __return_storage_ptr__->Flags = pFVar5->Flags;
                return __return_storage_ptr__;
              }
            }
          }
          break;
        }
        iVar8 = (int)plVar6[6];
      } while (iVar8 != -1);
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEngineConstants @ 149046660

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraConstants::GetEngineConstants(void)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (SystemParameters.ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemParameters.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x282,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &SystemParameters;
}

// GetKnownConstant @ 149046d90

FNiagaraVariable * __cdecl FNiagaraConstants::GetKnownConstant(FName *param_1,bool param_2)

{
  FNiagaraKnownConstantInfo *pFVar1;
  FNiagaraKnownConstantInfo local_18;
  
  pFVar1 = GetKnownConstantInfo(&local_18,param_1,param_2);
  return pFVar1->ConstantVar;
}

// GetKnownConstantInfo @ 149046dc0

FNiagaraKnownConstantInfo * __cdecl
FNiagaraConstants::GetKnownConstantInfo
          (FNiagaraKnownConstantInfo *__return_storage_ptr__,FName *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNiagaraKnownConstantInfo *pFVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  
  if ((SystemParameters.ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemParameters.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x282,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNiagaraKnownConstantInfo *)(*pcVar1)();
    return pFVar4;
  }
  if (param_2) {
    uVar3 = FNiagaraVariable::SearchArrayForPartialNameMatch(&SystemParameters,param_1);
    if (uVar3 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar3 < SystemParameters.ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNiagaraKnownConstantInfo *)(*pcVar1)();
        return pFVar4;
      }
      FVar5.Data = SystemParameters.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
LAB_149046f45:
      __return_storage_ptr__->ConstantVar = (FNiagaraVariable *)FVar5.Data;
      goto LAB_149046eb7;
    }
  }
  else if ((FNiagaraVariable *)SystemParameters.AllocatorInstance.Data !=
           (FNiagaraVariable *)
           (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20)) {
    FVar5.Data = SystemParameters.AllocatorInstance.Data;
    do {
      if ((FName)((FNiagaraVariable *)FVar5.Data)->_padding_ == *param_1) goto LAB_149046f45;
      FVar5.Data = FVar5.Data + 0x20;
    } while ((FNiagaraVariable *)FVar5.Data !=
             (FNiagaraVariable *)
             (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20))
    ;
  }
  if ((Attributes.ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attributes.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x2ce,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNiagaraKnownConstantInfo *)(*pcVar1)();
    return pFVar4;
  }
  if (param_2) {
    uVar3 = FNiagaraVariable::SearchArrayForPartialNameMatch(&Attributes,param_1);
    if (uVar3 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar3 < Attributes.ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNiagaraKnownConstantInfo *)(*pcVar1)();
        return pFVar4;
      }
      FVar5.Data = Attributes.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
LAB_149046fc1:
      __return_storage_ptr__->ConstantVar = (FNiagaraVariable *)FVar5.Data;
      __return_storage_ptr__->ConstantType = Attribute;
      return __return_storage_ptr__;
    }
  }
  else if ((FNiagaraVariable *)Attributes.AllocatorInstance.Data !=
           (FNiagaraVariable *)
           (Attributes.AllocatorInstance.Data + (longlong)Attributes.ArrayNum * 0x20)) {
    FVar5.Data = Attributes.AllocatorInstance.Data;
    do {
      if ((FName)((FNiagaraVariable *)FVar5.Data)->_padding_ == *param_1) goto LAB_149046fc1;
      FVar5.Data = FVar5.Data + 0x20;
    } while ((FNiagaraVariable *)FVar5.Data !=
             (FNiagaraVariable *)
             (Attributes.AllocatorInstance.Data + (longlong)Attributes.ArrayNum * 0x20));
  }
  __return_storage_ptr__->ConstantVar = (FNiagaraVariable *)0x0;
LAB_149046eb7:
  __return_storage_ptr__->ConstantType = Other;
  return __return_storage_ptr__;
}

// GetOldPositionTypeVariables @ 149047520

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraConstants::GetOldPositionTypeVariables(void)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (OldPositionTypes.ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldPositionTypes.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &OldPositionTypes;
}

// GetStaticSwitchConstants @ 149049500

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraConstants::GetStaticSwitchConstants(void)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (SwitchParameters.ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SwitchParameters.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x28e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &SwitchParameters;
}

// GetTranslatorConstants @ 149049d00

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __cdecl
FNiagaraConstants::GetTranslatorConstants(void)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (TranslatorParameters.ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TranslatorParameters.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &TranslatorParameters;
}

// IsEngineManagedAttribute @ 149059c20

bool __cdecl FNiagaraConstants::IsEngineManagedAttribute(FNiagaraVariableBase *param_1)

{
  ForAnyElementType FVar1;
  
  if ((FName *)EngineManagedAttributes.AllocatorInstance.Data !=
      (FName *)(EngineManagedAttributes.AllocatorInstance.Data +
               (longlong)EngineManagedAttributes.ArrayNum * 0x20)) {
    FVar1.Data = EngineManagedAttributes.AllocatorInstance.Data;
    do {
      if ((*(FName *)FVar1.Data == param_1->Name) &&
         ((((FName *)((longlong)FVar1.Data + 8))->ComparisonIndex).Value ==
          (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        return true;
      }
      FVar1.Data = FVar1.Data + 0x20;
    } while ((FName *)FVar1.Data !=
             (FName *)(EngineManagedAttributes.AllocatorInstance.Data +
                      (longlong)EngineManagedAttributes.ArrayNum * 0x20));
  }
  return false;
}

// IsNiagaraConstant @ 14905a350

bool __cdecl FNiagaraConstants::IsNiagaraConstant(FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (AttrMetaData._8_4_ == AttrMetaData._52_4_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttrMetaData.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = ::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<FNiagaraVariableBase,FNiagaraVariableMetaData>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableMetaData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraVariableBase>
                    ((TSet<TTuple<FNiagaraVariableBase,FNiagaraVariableMetaData>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableMetaData,0>,FDefaultSetAllocator>
                      *)&AttrMetaData,uVar4,param_1);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x1b0 + AttrMetaData._0_8_;
    lVar7 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    return lVar7 != 0;
  }
  return false;
}

// UpdateEngineConstant @ 14906e980

FNiagaraVariable * __cdecl
FNiagaraConstants::UpdateEngineConstant
          (FNiagaraVariable *__return_storage_ptr__,FNiagaraVariable *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraVariable *pFVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  
  if ((SystemParameters.ArrayNum == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemParameters.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x282,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraVariable *)(*pcVar3)();
    return pFVar6;
  }
  if ((FNiagaraVariable *)SystemParameters.AllocatorInstance.Data !=
      (FNiagaraVariable *)
      (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20)) {
    FVar8.Data = SystemParameters.AllocatorInstance.Data;
    do {
      if (((FNiagaraVariable *)FVar8.Data)->_padding_ == param_1->_padding_) {
        FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,(FNiagaraVariable *)FVar8.Data);
        return __return_storage_ptr__;
      }
      FVar8.Data = FVar8.Data + 0x20;
    } while ((FNiagaraVariable *)FVar8.Data !=
             (FNiagaraVariable *)
             (SystemParameters.AllocatorInstance.Data + (longlong)SystemParameters.ArrayNum * 0x20))
    ;
  }
  if ((UpdatedSystemParameters._8_4_ == UpdatedSystemParameters._52_4_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdatedSystemParameters.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraConstants.cpp"
                         ,0x2a0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraVariable *)(*pcVar3)();
    return pFVar6;
  }
  lVar2 = param_1->_padding_;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  if (UpdatedSystemParameters._8_4_ != UpdatedSystemParameters._52_4_) {
    lVar9 = 0x154c7b1f8;
    if (UpdatedSystemParameters._64_8_ != 0) {
      lVar9 = UpdatedSystemParameters._64_8_;
    }
    iVar1 = *(int *)(lVar9 + (ulonglong)
                             (UpdatedSystemParameters._72_4_ - 1 &
                             (int)((ulonglong)lVar2 >> 0x20) + uVar5) * 4);
    while (iVar1 != -1) {
      plVar7 = (longlong *)((longlong)iVar1 * 0x30 + UpdatedSystemParameters._0_8_);
      if (*plVar7 == lVar2) {
        pFVar6 = (FNiagaraVariable *)(plVar7 + 1);
        if (plVar7 == (longlong *)0x0) {
          pFVar6 = (FNiagaraVariable *)0x0;
        }
        if (pFVar6 != (FNiagaraVariable *)0x0) goto LAB_14906eac7;
        break;
      }
      iVar1 = (int)plVar7[5];
    }
  }
  pFVar6 = param_1;
LAB_14906eac7:
  FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

