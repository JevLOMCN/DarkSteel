// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 8

// FJsonStructDeserializerBackend @ 148b9bc20

FJsonStructDeserializerBackend * __thiscall
FJsonStructDeserializerBackend::FJsonStructDeserializerBackend
          (FJsonStructDeserializerBackend *this,FArchive *param_1)

{
  TJsonReader<wchar_t> *pTVar1;
  TJsonReader<wchar_t> *pTVar2;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_res8;
  
  pTVar2 = (TJsonReader<wchar_t> *)0x0;
  this->_padding_ = (longlong)&___7FJsonStructDeserializerBackend__6B_;
  (this->LastIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastIdentifier).Data.ArrayNum = 0;
  (this->LastIdentifier).Data.ArrayMax = 0;
  pTVar1 = ::operator_new(0x70);
  if (pTVar1 != (TJsonReader<wchar_t> *)0x0) {
    (pTVar1->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ParseState).ArrayNum = 0;
    (pTVar1->ParseState).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
    pTVar1->CurrentToken = None;
    pTVar1->Stream = param_1;
    (pTVar1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Identifier).Data.ArrayNum = 0;
    (pTVar1->Identifier).Data.ArrayMax = 0;
    (pTVar1->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ErrorMessage).Data.ArrayNum = 0;
    (pTVar1->ErrorMessage).Data.ArrayMax = 0;
    (pTVar1->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->StringValue).Data.ArrayNum = 0;
    (pTVar1->StringValue).Data.ArrayMax = 0;
    pTVar1->NumberValue = 0.0;
    pTVar1->LineNumber = 1;
    pTVar1->CharacterNumber = 0;
    pTVar1->BoolValue = false;
    pTVar1->FinishedReadingRootObject = false;
    pTVar2 = pTVar1;
  }
  local_res8.Object = pTVar2;
  TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
            (&this->JsonReader,&local_res8);
  return this;
}

// GetCurrentPropertyName @ 148ba8400

FString * __thiscall
FJsonStructDeserializerBackend::GetCurrentPropertyName(FJsonStructDeserializerBackend *this)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148ba8407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)(((this->JsonReader).Object)->_padding_ + 8))();
  return pFVar1;
}

// GetDebugString @ 148ba8470

FString * __thiscall
FJsonStructDeserializerBackend::GetDebugString
          (FJsonStructDeserializerBackend *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Line: %u, Ch: %u");
  return __return_storage_ptr__;
}

// GetLastErrorMessage @ 148ba85f0

FString * __thiscall
FJsonStructDeserializerBackend::GetLastErrorMessage(FJsonStructDeserializerBackend *this)

{
  return &((this->JsonReader).Object)->ErrorMessage;
}

// GetNextToken @ 148ba8a50

bool __thiscall
FJsonStructDeserializerBackend::GetNextToken
          (FJsonStructDeserializerBackend *this,EStructDeserializerBackendTokens *param_1)

{
  bool bVar1;
  
  bVar1 = TJsonReader<wchar_t>::ReadNext((this->JsonReader).Object,&this->LastNotation);
  if (bVar1) {
    switch(this->LastNotation) {
    case ObjectStart:
      *param_1 = StructureStart;
      return true;
    case ObjectEnd:
      *param_1 = StructureEnd;
      return true;
    case ArrayStart:
      *param_1 = ArrayStart;
      return true;
    case ArrayEnd:
      *param_1 = ArrayEnd;
      return true;
    case Boolean:
    case String:
    case Number:
    case Null:
      *param_1 = Property;
      return true;
    case Error:
      *param_1 = Error;
      return true;
    default:
      *param_1 = None;
      return true;
    }
  }
  return false;
}

// ReadProperty @ 148baacb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FJsonStructDeserializerBackend::ReadProperty
          (FJsonStructDeserializerBackend *this,FProperty *param_1,FProperty *param_2,void *param_3,
          int param_4)

{
  FScriptContainerElement *pFVar1;
  wint_t wVar2;
  EJsonNotation EVar3;
  uint uVar4;
  EJsonToken EVar5;
  ITextData *pIVar6;
  UEnum *pUVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  schar *psVar16;
  double *pdVar17;
  float *pfVar18;
  int *piVar19;
  longlong lVar20;
  short *psVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  FString *pFVar24;
  FString *this_00;
  FName *pFVar25;
  FName *pFVar26;
  FText *pFVar27;
  longlong *plVar28;
  long64 lVar29;
  undefined1 *puVar30;
  void *pvVar31;
  size_t sVar32;
  UClass *pUVar33;
  UObject *pUVar34;
  undefined8 *puVar35;
  FWeakObjectPtr *pFVar36;
  FCoreTexts *pFVar37;
  ForAnyElementType FVar38;
  wchar_t *pwVar39;
  TJsonReader<wchar_t> *pTVar40;
  float fVar41;
  schar local_2c8;
  schar local_2c7;
  bool local_2c6 [6];
  TJsonReader<wchar_t> *local_2c0;
  FName local_2b8;
  FWeakObjectPtr local_2b0;
  FName local_2a8;
  FName local_2a0;
  FSoftObjectPath local_298;
  FText local_278;
  undefined1 local_268 [16];
  FName FStack_258;
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  undefined1 local_240 [24];
  FUtf8String local_228;
  undefined1 local_218 [8];
  UObject *local_210;
  UObject *local_208;
  FString local_200;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  FString local_198;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FString local_158;
  void *local_148 [2];
  FText local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FName local_f8 [2];
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  void *local_88 [2];
  FName local_78;
  FName local_70;
  void *local_68 [6];
  
  EVar3 = this->LastNotation;
  if (EVar3 != Boolean) {
    if (EVar3 == String) {
      pFVar24 = (FString *)(**(code **)(((this->JsonReader).Object)->_padding_ + 0x10))();
      if (param_1 != (FProperty *)0x0) {
        if ((*(uint *)(param_1->_padding_ + 0x18) >> 0xe & 1) != 0) {
          this_00 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (this_00 == (FString *)0x0) {
            return false;
          }
          ::FString::operator=(this_00,pFVar24);
          return true;
        }
        if (param_1 != (FProperty *)0x0) {
          uVar4 = *(uint *)(param_1->_padding_ + 0x18);
          if ((uVar4 >> 0xd & 1) != 0) {
            if ((pFVar24->Data).ArrayNum == 0) {
              pwVar39 = L"";
            }
            else {
              pwVar39 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
            }
            pFVar25 = ::FName::FName(&local_70,pwVar39);
            pFVar26 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (pFVar26 == (FName *)0x0) {
              return false;
            }
            *pFVar26 = *pFVar25;
            return true;
          }
          if ((uVar4 >> 0x1e & 1) != 0) {
            FText::FText(&local_278);
            if ((pFVar24->Data).ArrayNum == 0) {
              pwVar39 = L"";
            }
            else {
              pwVar39 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
            }
            pwVar39 = FTextStringHelper::ReadFromBuffer
                                (pwVar39,&local_278,(wchar_t *)0x0,(wchar_t *)0x0,false);
            if (pwVar39 == (wchar_t *)0x0) {
              pFVar27 = FText::FromString(&local_138,pFVar24);
              FText::operator=(&local_278,pFVar27);
              if (local_138.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
              }
            }
            plVar28 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (plVar28 == (longlong *)0x0) {
              bVar11 = false;
            }
            else {
              pIVar6 = (ITextData *)*plVar28;
              if (pIVar6 != local_278.TextData.Reference) {
                *plVar28 = (longlong)local_278.TextData.Reference;
                if (local_278.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_278.TextData.Reference + 8))
                            (local_278.TextData.Reference,local_218);
                }
                if (pIVar6 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
                }
              }
              bVar11 = true;
              *(uint *)(plVar28 + 1) = local_278.Flags;
            }
            if (local_278.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
              return bVar11;
            }
            return bVar11;
          }
          if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
            pUVar7 = (UEnum *)param_1[1]._padding_;
            if (pUVar7 == (UEnum *)0x0) {
              return false;
            }
            if ((pFVar24->Data).ArrayNum == 0) {
              pwVar39 = L"";
            }
            else {
              pwVar39 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
            }
            pFVar25 = ::FName::FName(&local_78,pwVar39);
            lVar29 = UEnum::GetValueByName(pUVar7,*pFVar25,None);
            if (lVar29 == -1) {
              return false;
            }
            puVar30 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar30 == (undefined1 *)0x0) {
              return false;
            }
            *puVar30 = (char)lVar29;
            return true;
          }
          if (param_1 != (FProperty *)0x0) {
            if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
              pUVar7 = (UEnum *)param_1[1]._padding_;
              if ((pFVar24->Data).ArrayNum == 0) {
                pwVar39 = L"";
              }
              else {
                pwVar39 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
              }
              pFVar25 = ::FName::FName(local_f8,pwVar39);
              lVar29 = UEnum::GetValueByName(pUVar7,*pFVar25,None);
              if (lVar29 == -1) {
                return false;
              }
              pvVar31 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                  (param_1,param_2,param_3,param_4);
              if (pvVar31 == (void *)0x0) {
                return false;
              }
              (**(code **)(*(longlong *)param_1[1]._padding_ + 0x1e8))
                        ((longlong *)param_1[1]._padding_,pvVar31,lVar29);
              return true;
            }
            if ((*(uint *)(param_1->_padding_ + 0x18) >> 10 & 1) == 0) {
              if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x200000000) == 0) {
                if (param_1 != (FProperty *)0x0) {
                  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) != 0) {
                    if ((pFVar24->Data).ArrayNum == 0) {
                      local_1c8 = (FScriptContainerElement *)0x15060d16c;
LAB_148babbcc:
                      sVar32 = wcslen((wchar_t *)local_1c8);
                      iStack_1c0 = (int)sVar32;
                    }
                    else {
                      local_1c8 = (pFVar24->Data).AllocatorInstance.Data;
                      iStack_1c0 = 0;
                      if (local_1c8 != (FScriptContainerElement *)0x0) goto LAB_148babbcc;
                    }
                    local_e8._12_4_ = uStack_1bc;
                    local_e8.Size = iStack_1c0;
                    local_e8.DataPtr = (wchar_t *)local_1c8;
                    pUVar34 = StaticFindObject((UClass *)param_1[1]._padding_,(UObject *)0x0,
                                               &local_e8,None);
                    goto LAB_148bab9fb;
                  }
                  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1b & 1) != 0) {
                    iStack_1b0 = 0;
                    if ((pFVar24->Data).ArrayNum == 0) {
                      local_1b8 = (FScriptContainerElement *)0x15060d16c;
                    }
                    else {
                      local_1b8 = (pFVar24->Data).AllocatorInstance.Data;
                      if (local_1b8 == (FScriptContainerElement *)0x0) goto LAB_148babc3c;
                    }
                    sVar32 = wcslen((wchar_t *)local_1b8);
                    iStack_1b0 = (int)sVar32;
LAB_148babc3c:
                    local_d8._12_4_ = uStack_1ac;
                    local_d8.Size = iStack_1b0;
                    local_d8.DataPtr = (wchar_t *)local_1b8;
                    local_208 = StaticFindObject((UClass *)param_1[1]._padding_,(UObject *)0x0,
                                                 &local_d8,None);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_208 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(local_208);
                    }
                    local_2b0.ObjectIndex = 0;
                    local_2b0.ObjectSerialNumber = 0;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_208 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(local_208);
                    }
                    FWeakObjectPtr::operator=(&local_2b0,(FObjectPtr)&local_208);
                    pFVar36 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                        (param_1,param_2,param_3,param_4);
                    if (pFVar36 == (FWeakObjectPtr *)0x0) {
                      return false;
                    }
                    *pFVar36 = local_2b0;
                    return true;
                  }
                  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1d & 1) != 0) {
                    local_168 = (pFVar24->Data).AllocatorInstance.Data;
                    iVar14 = (pFVar24->Data).ArrayNum;
                    local_298.AssetPath.PackageName.ComparisonIndex.Value = 0;
                    local_298.AssetPath.PackageName.Number = 0;
                    local_298.AssetPath.AssetName.ComparisonIndex.Value = 0;
                    local_298.AssetPath.AssetName.Number = 0;
                    local_298.SubPathString.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    local_298.SubPathString.Data.ArrayNum = 0;
                    local_298.SubPathString.Data.ArrayMax = 0;
                    iStack_160 = iVar14 + -1;
                    if (iVar14 == 0) {
                      iStack_160 = 0;
                    }
                    local_c8._12_4_ = uStack_15c;
                    local_c8.Size = iStack_160;
                    local_c8.DataPtr = (wchar_t *)local_168;
                    FSoftObjectPath::SetPath(&local_298,&local_c8);
                    FVar38.Data = local_298.SubPathString.Data.AllocatorInstance.Data;
                    sVar32 = (size_t)local_298.SubPathString.Data.ArrayNum;
                    local_268._0_8_ = 0;
                    local_250.Data = (FScriptContainerElement *)0x0;
                    local_248 = local_298.SubPathString.Data.ArrayNum;
                    local_268._8_4_ = local_298.AssetPath.PackageName.ComparisonIndex.Value;
                    local_268._12_4_ = local_298.AssetPath.PackageName.Number;
                    FStack_258 = local_298.AssetPath.AssetName;
                    if (local_298.SubPathString.Data.ArrayNum == 0) {
                      local_244 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (1,1,local_298.SubPathString.Data.ArrayNum,0,&local_250,
                                 local_298.SubPathString.Data.ArrayNum,&local_244);
                      memcpy(local_250.Data,FVar38.Data,sVar32);
                    }
                    bVar11 = StructDeserializerBackendUtilities::
                             SetPropertyValue<FSoftObjectProperty,FSoftObjectPtr>
                                       ((FSoftObjectProperty *)param_1,param_2,param_3,param_4,
                                        (FSoftObjectPtr *)local_268);
                    FVar38.Data = local_298.SubPathString.Data.AllocatorInstance.Data;
                    if (local_250.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_250.Data);
                      FVar38.Data = local_298.SubPathString.Data.AllocatorInstance.Data;
                    }
                    goto LAB_148babb7d;
                  }
                }
                goto LAB_148babdcd;
              }
              local_178 = (wchar_t *)0x0;
              iStack_1d0 = 0;
              iStack_170 = 0;
              if ((pFVar24->Data).ArrayNum == 0) {
                local_1d8 = (FScriptContainerElement *)0x15060d16c;
LAB_148babaa1:
                sVar32 = wcslen((wchar_t *)local_1d8);
                iStack_1d0 = (int)sVar32;
              }
              else {
                local_1d8 = (pFVar24->Data).AllocatorInstance.Data;
                if (local_1d8 != (FScriptContainerElement *)0x0) goto LAB_148babaa1;
              }
              pUVar33 = Z_Construct_UClass_UClass_NoRegister();
              local_108._12_4_ = uStack_16c;
              local_108.Size = iStack_170;
              local_a8._12_4_ = uStack_1cc;
              local_a8.Size = iStack_1d0;
              local_108.DataPtr = local_178;
              local_a8.DataPtr = (wchar_t *)local_1d8;
              pUVar34 = StaticLoadObject(pUVar33,(UObject *)0x0,&local_a8,&local_108,2,
                                         (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar34 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar34);
              }
              local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_228.Data.ArrayNum = 0;
              local_228.Data.ArrayMax = 0;
              local_240._0_8_ = 0;
              local_240._16_8_ = 0;
              local_240._8_8_ = 0;
              FUtf8String::Reset(&local_228,0);
              local_210 = pUVar34;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar34 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar34);
              }
              FSoftObjectPtr::operator=((FSoftObjectPtr *)local_240,(FObjectPtr)&local_210);
              bVar11 = StructDeserializerBackendUtilities::
                       SetPropertyValue<FSoftClassProperty,FSoftObjectPtr>
                                 ((FSoftClassProperty *)param_1,param_2,param_3,param_4,
                                  (FSoftObjectPtr *)local_240);
              FVar38.Data = local_228.Data.AllocatorInstance.Data;
LAB_148babb7d:
              if (FVar38.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar38.Data);
                return bVar11;
              }
              return bVar11;
            }
            local_188 = (wchar_t *)0x0;
            iStack_1e0 = 0;
            iStack_180 = 0;
            if ((pFVar24->Data).ArrayNum == 0) {
              local_1e8 = (FScriptContainerElement *)0x15060d16c;
LAB_148bab9a1:
              sVar32 = wcslen((wchar_t *)local_1e8);
              iStack_1e0 = (int)sVar32;
            }
            else {
              local_1e8 = (pFVar24->Data).AllocatorInstance.Data;
              if (local_1e8 != (FScriptContainerElement *)0x0) goto LAB_148bab9a1;
            }
            pUVar33 = Z_Construct_UClass_UClass_NoRegister();
            local_128._12_4_ = uStack_17c;
            local_128.Size = iStack_180;
            local_118._12_4_ = uStack_1dc;
            local_118.Size = iStack_1e0;
            local_128.DataPtr = local_188;
            local_118.DataPtr = (wchar_t *)local_1e8;
            pUVar34 = StaticLoadObject(pUVar33,(UObject *)0x0,&local_118,&local_128,2,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
LAB_148bab9fb:
            puVar35 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar35 == (undefined8 *)0x0) {
              return false;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar34 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar34);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar34 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar34);
              }
            }
            *puVar35 = pUVar34;
            return true;
          }
        }
      }
LAB_148babdcd:
      if ((byte)LogSerialization._0_1_ < 6) {
        return false;
      }
      (**(code **)(this->_padding_ + 8))(this,local_68);
      ::FName::ToString((FName *)param_1->_padding_,&local_1a8);
      bVar11 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar11) {
        local_2a8 = (FName)param_1->_padding_;
      }
      else {
        local_2a8.ComparisonIndex.Value = 0;
        local_2a8.Number = 0;
      }
      ::FName::ToString(&local_2a8,&local_b8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      goto LAB_148bac02a;
    }
    if (EVar3 != Number) {
      if (EVar3 != Null) {
        return true;
      }
      bVar11 = StructDeserializerBackendUtilities::ClearPropertyValue
                         (param_1,param_2,param_3,param_4);
      return bVar11;
    }
    pTVar40 = (this->JsonReader).Object;
    local_2c0 = pTVar40;
    if ((pTVar40->CurrentToken != Number) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentToken == EJsonToken::Number",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                            ,200,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    if (param_1 != (FProperty *)0x0) {
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
        local_2c8 = '\0';
        if ((pTVar40->StringValue).Data.ArrayNum == 0) {
          pwVar39 = L"";
        }
        else {
          pwVar39 = (wchar_t *)(pTVar40->StringValue).Data.AllocatorInstance.Data;
        }
        bVar11 = LexTryParseString<signed_char>(&local_2c8,pwVar39);
        if (bVar11) {
          psVar16 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (psVar16 == (schar *)0x0) {
            return false;
          }
          *psVar16 = local_2c8;
          return true;
        }
      }
      if (param_1 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000) != 0) {
          if ((pTVar40->StringValue).Data.ArrayNum == 0) {
            pwVar39 = L"";
          }
          else {
            pwVar39 = (wchar_t *)(pTVar40->StringValue).Data.AllocatorInstance.Data;
          }
          if (*pwVar39 != 0) {
            dVar9 = wcstod(pwVar39,(wchar_t **)0x0);
            if ((dVar9 != 0.0) || (iVar14 = _finite((double)(float)dVar9), iVar14 == 0))
            goto LAB_148baaedf;
            bVar11 = false;
            wVar2 = *pwVar39;
            while (bVar10 = false, wVar2 != 0) {
              if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
                if (wVar2 != 0) goto LAB_148baae80;
                break;
              }
              pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
              pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
              wVar2 = *(wint_t *)pFVar1;
            }
            goto LAB_148baaece;
          }
        }
        goto LAB_148baae9e;
      }
    }
    goto LAB_148bab5ce;
  }
  pTVar40 = (this->JsonReader).Object;
  EVar5 = pTVar40->CurrentToken;
  if (((EVar5 != True) && (EVar5 != False)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                          ,0xce,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  bVar11 = pTVar40->BoolValue;
  local_2c6[0] = bVar11;
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    bVar11 = StructDeserializerBackendUtilities::SetPropertyValue<FBoolProperty,bool>
                       ((FBoolProperty *)param_1,param_2,param_3,param_4,local_2c6);
    return bVar11;
  }
  pFVar37 = FCoreTexts::Get();
  if ((byte)LogSerialization._0_1_ < 6) {
    return false;
  }
  (**(code **)(this->_padding_ + 8))(this,local_88);
  ::FName::ToString((FName *)param_1->_padding_,&local_198);
  if (bVar11 == false) {
    pFVar27 = pFVar37->False;
  }
  else {
    pFVar27 = pFVar37->True;
  }
  FText::ToString(pFVar27);
  bVar11 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar11) {
    local_2a0 = (FName)param_1->_padding_;
  }
  else {
    local_2a0.ComparisonIndex.Value = 0;
    local_2a0.Number = 0;
  }
  ::FName::ToString(&local_2a0,&local_98);
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_68[0] = local_88[0];
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
    local_68[0] = local_88[0];
  }
  goto LAB_148bac02a;
  while( true ) {
    if ((bVar11) || (wVar2 == 0x30)) {
      bVar11 = true;
    }
    else if (wVar2 != 0x2e) goto LAB_148baae9e;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar10 = bVar11;
    if (wVar2 == 0) break;
LAB_148baae80:
    iVar14 = iswspace(wVar2);
    bVar10 = bVar11;
    if (iVar14 != 0) break;
  }
LAB_148baaece:
  if (bVar10) {
LAB_148baaedf:
    pdVar17 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                        (param_1,param_2,param_3,param_4);
    if (pdVar17 == (double *)0x0) {
      return false;
    }
    *pdVar17 = dVar9;
    return true;
  }
LAB_148baae9e:
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 8 & 1) != 0) {
    if ((pTVar40->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(pTVar40->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      dVar9 = _wtof(pwVar39);
      fVar41 = (float)dVar9;
      if ((fVar41 != 0.0) || (iVar14 = _finite((double)fVar41), iVar14 == 0)) goto LAB_148baafe4;
      bVar11 = false;
      wVar2 = *pwVar39;
      while (bVar10 = false, wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
          if (wVar2 != 0) goto LAB_148baaf90;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
      goto LAB_148baafda;
    }
  }
  goto LAB_148baafae;
  while( true ) {
    if ((!bVar11) && (pTVar40 = local_2c0, wVar2 != 0x30)) goto LAB_148bab0c9;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab090:
    iVar15 = iswspace(wVar2);
    if ((iVar15 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab0bf;
  while( true ) {
    if ((!bVar11) && (wVar2 != 0x30)) goto LAB_148bab1c8;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab190:
    iVar15 = iswspace(wVar2);
    if ((iVar15 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab1bf;
  while( true ) {
    if ((!bVar11) && (wVar2 != 0x30)) goto LAB_148bab29b;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab262:
    iVar14 = iswspace(wVar2);
    if ((iVar14 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab291;
  while( true ) {
    if ((!bVar11) && (wVar2 != 0x30)) goto LAB_148bab398;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab360:
    iVar14 = iswspace(wVar2);
    if ((iVar14 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab38f;
  while( true ) {
    if ((!bVar11) && (wVar2 != 0x30)) goto LAB_148bab46b;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab432:
    iVar14 = iswspace(wVar2);
    if ((iVar14 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab461;
  while( true ) {
    if ((!bVar11) && (wVar2 != 0x30)) goto LAB_148bab568;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar11 = true;
    if (wVar2 == 0) break;
LAB_148bab530:
    iVar14 = iswspace(wVar2);
    if ((iVar14 != 0) || (wVar2 == 0x2e)) break;
  }
  goto LAB_148bab55f;
  while( true ) {
    if ((bVar11) || (wVar2 == 0x30)) {
      bVar11 = true;
    }
    else if (wVar2 != 0x2e) goto LAB_148baafae;
    wVar2 = *(wint_t *)((longlong)pwVar39 + 2);
    pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
    bVar10 = bVar11;
    if (wVar2 == 0) break;
LAB_148baaf90:
    iVar14 = iswspace(wVar2);
    bVar10 = bVar11;
    if (iVar14 != 0) break;
  }
LAB_148baafda:
  if (bVar10) {
LAB_148baafe4:
    pfVar18 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                        (param_1,param_2,param_3,param_4);
    if (pfVar18 == (float *)0x0) {
      return false;
    }
    *pfVar18 = fVar41;
    return true;
  }
LAB_148baafae:
  if ((*(byte *)(param_1->_padding_ + 0x18) & 0x80) != 0) {
    if ((pTVar40->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(pTVar40->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      iVar14 = _wtoi(pwVar39);
      if ((iVar14 != 0) || (iVar15 = _finite(0.0), iVar15 == 0)) goto LAB_148bab0eb;
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar15 = iswspace(wVar2), iVar15 == 0)) {
          if (wVar2 != 0) goto LAB_148bab090;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab0bf:
      pTVar40 = local_2c0;
      if (bVar11) goto LAB_148bab0eb;
    }
  }
LAB_148bab0c9:
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0xb & 1) != 0) {
    if ((pTVar40->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(pTVar40->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      lVar20 = _wtoi64(pwVar39);
      iVar14 = (int)lVar20;
      if ((iVar14 != 0) || (iVar15 = _finite(0.0), iVar15 == 0)) {
LAB_148bab0eb:
        piVar19 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (piVar19 == (int *)0x0) {
          return false;
        }
        *piVar19 = iVar14;
        return true;
      }
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar15 = iswspace(wVar2), iVar15 == 0)) {
          if (wVar2 != 0) goto LAB_148bab190;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab1bf:
      if (bVar11) goto LAB_148bab0eb;
    }
  }
LAB_148bab1c8:
  if (*(int *)(param_1->_padding_ + 0x18) < 0) {
    if ((local_2c0->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(local_2c0->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      iVar14 = _wtoi(pwVar39);
      sVar13 = (short)iVar14;
      if ((sVar13 != 0) || (iVar14 = _finite(0.0), iVar14 == 0)) goto LAB_148bab2bc;
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
          if (wVar2 != 0) goto LAB_148bab262;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab291:
      if (bVar11) goto LAB_148bab2bc;
    }
  }
LAB_148bab29b:
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x12 & 1) != 0) {
    if ((local_2c0->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(local_2c0->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      iVar14 = _wtoi(pwVar39);
      sVar13 = (short)iVar14;
      if ((sVar13 != 0) || (iVar14 = _finite(0.0), iVar14 == 0)) {
LAB_148bab2bc:
        psVar21 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (psVar21 == (short *)0x0) {
          return false;
        }
        *psVar21 = sVar13;
        return true;
      }
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
          if (wVar2 != 0) goto LAB_148bab360;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab38f:
      if (bVar11) goto LAB_148bab2bc;
    }
  }
LAB_148bab398:
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x16 & 1) != 0) {
    if ((local_2c0->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(local_2c0->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      uVar22 = _wtoi64(pwVar39);
      if ((uVar22 != 0) || (iVar14 = _finite(0.0), iVar14 == 0)) goto LAB_148bab48c;
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
          if (wVar2 != 0) goto LAB_148bab432;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab461:
      if (bVar11) goto LAB_148bab48c;
    }
  }
LAB_148bab46b:
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 9 & 1) != 0) {
    if ((local_2c0->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(local_2c0->StringValue).Data.AllocatorInstance.Data;
    }
    if (*pwVar39 != 0) {
      uVar22 = _wcstoui64(pwVar39,(wchar_t **)0x0,0);
      if ((uVar22 != 0) || (iVar14 = _finite(0.0), iVar14 == 0)) {
LAB_148bab48c:
        puVar23 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (puVar23 == (ulonglong *)0x0) {
          return false;
        }
        *puVar23 = uVar22;
        return true;
      }
      bVar11 = false;
      wVar2 = *pwVar39;
      while (wVar2 != 0) {
        if (((wVar2 - 0x2b & 0xfffd) != 0) && (iVar14 = iswspace(wVar2), iVar14 == 0)) {
          if (wVar2 != 0) goto LAB_148bab530;
          break;
        }
        pFVar1 = (FScriptContainerElement *)((longlong)pwVar39 + 2);
        pwVar39 = (wchar_t *)((longlong)pwVar39 + 2);
        wVar2 = *(wint_t *)pFVar1;
      }
LAB_148bab55f:
      if (bVar11) goto LAB_148bab48c;
    }
  }
LAB_148bab568:
  if ((*(byte *)(param_1->_padding_ + 0x18) & 2) != 0) {
    local_2c7 = '\0';
    if ((local_2c0->StringValue).Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(local_2c0->StringValue).Data.AllocatorInstance.Data;
    }
    bVar11 = LexTryParseString<signed_char>(&local_2c7,pwVar39);
    if (bVar11) {
      psVar16 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                          (param_1,param_2,param_3,param_4);
      if (psVar16 == (schar *)0x0) {
        return false;
      }
      *psVar16 = local_2c7;
      return true;
    }
  }
LAB_148bab5ce:
  if (5 < (byte)LogSerialization._0_1_) {
    (**(code **)(this->_padding_ + 8))(this,local_148);
    ::FName::ToString((FName *)param_1->_padding_,&local_200);
    bVar11 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar11) {
      local_2b8 = (FName)param_1->_padding_;
    }
    else {
      local_2b8.ComparisonIndex.Value = 0;
      local_2b8.Number = 0;
    }
    ::FName::ToString(&local_2b8,&local_158);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    local_68[0] = local_148[0];
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
      local_68[0] = local_148[0];
    }
LAB_148bac02a:
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  return false;
}

// SkipArray @ 148badfc0

void __thiscall FJsonStructDeserializerBackend::SkipArray(FJsonStructDeserializerBackend *this)

{
  TJsonReader<wchar_t>::ReadUntilMatching((this->JsonReader).Object,ArrayEnd);
  return;
}

// SkipStructure @ 148bae000

void __thiscall FJsonStructDeserializerBackend::SkipStructure(FJsonStructDeserializerBackend *this)

{
  TJsonReader<wchar_t>::ReadUntilMatching((this->JsonReader).Object,ObjectEnd);
  return;
}

