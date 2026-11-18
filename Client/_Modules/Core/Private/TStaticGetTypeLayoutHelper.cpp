// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// CallAppendHash @ 1419e3bc0

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint *puVar1;
  byte bVar2;
  FTypeLayoutDesc *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  FTypeLayoutDesc *pFVar11;
  FFieldLayoutDesc *pFVar12;
  uint uVar13;
  uint auStackX_20 [2];
  FTypeLayoutDesc *pFStack_48;
  
  sVar10 = wcslen(param_1->Name);
  FSHA1::UpdateWithString(param_3,param_1->Name,(uint)sVar10);
  pFVar12 = param_1->Fields;
  if (pFVar12 == (FFieldLayoutDesc *)0x0) {
    FSHA1::Update(param_3,(uchar *)&param_1->SizeFromFields,4);
    return param_1->SizeFromFields;
  }
  pFVar11 = (FTypeLayoutDesc *)0x0;
  uVar13 = 0;
  uVar8 = 0;
  pFStack_48 = (FTypeLayoutDesc *)0x0;
  auStackX_20[0] = 0;
  bVar6 = false;
  if (((param_1->Interface != NonVirtual) && (param_1->NumVirtualBases == '\0')) &&
     (auStackX_20[0] = 8, (param_2->Flags & 2) != 0)) {
    auStackX_20[0] = 4;
  }
  do {
    puVar1 = &param_2->Flags;
    if (((pFVar12->Flags & WithEditorOnly) == None) || ((*puVar1 & 8) != 0)) {
      pFVar3 = pFVar12->Type;
      if (pFVar12->BitFieldSize == 0) {
        bVar2 = param_1->NumBases;
        pFStack_48 = (FTypeLayoutDesc *)0x0;
        uVar7 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
        uVar8 = param_2->MaxFieldAlignment;
        uVar9 = uVar8;
        if (uVar7 < uVar8) {
          uVar9 = uVar7;
        }
        if ((((*puVar1 == 5) && (uVar8 == 8)) && (uVar7 != pFVar3->Alignment)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || FieldTypeAlignment == FieldType.Alignment"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x263,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        auStackX_20[0] = (auStackX_20[0] - 1) + uVar9 & -uVar9;
        uVar8 = (uint)bVar2;
        if (((((*puVar1 == 5) && (param_2->MaxFieldAlignment == 8)) &&
             (auStackX_20[0] != pFVar12->Offset)) &&
            (((uVar8 <= uVar13 || (pFVar3->SizeFromFields != 0)) || (pFVar12->Offset != 0)))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || CheckOffsetMatch(Offset, Field->Offset, FieldType, bIsBase)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x266,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        FSHA1::Update(param_3,(uchar *)auStackX_20,4);
        FSHA1::Update(param_3,(uchar *)&pFVar12->NumArray,4);
        uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
        pFVar11 = pFStack_48;
        if (uVar9 == 0) {
          if (uVar13 < uVar8) {
            if (bVar6) {
              uVar9 = 1;
              goto LAB_1419eb769;
            }
            uVar8 = 0;
            bVar6 = true;
            goto LAB_1419eb885;
          }
          uVar9 = 1;
        }
        else if (uVar13 < uVar8) {
LAB_1419eb769:
          if ((param_2->Flags & 4) == 0) {
            if ((pFVar12->NumArray != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Field->NumArray == 1u",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                   ,0x28a,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return uVar8;
            }
            auStackX_20[0] = auStackX_20[0] + uVar9;
            uVar8 = 0;
            goto LAB_1419eb885;
          }
        }
        uVar8 = 0;
        auStackX_20[0] = auStackX_20[0] + ((uVar9 - 1) + uVar7 & -uVar7) * pFVar12->NumArray;
      }
      else {
        if ((pFVar11 != pFVar3) ||
           (uVar8 = uVar8 + pFVar12->BitFieldSize, pFVar3->Size << 3 < uVar8)) {
          uVar9 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
          uVar8 = param_2->MaxFieldAlignment;
          if (uVar9 < param_2->MaxFieldAlignment) {
            uVar8 = uVar9;
          }
          auStackX_20[0] = (auStackX_20[0] - 1) + uVar8 & -uVar8;
          FSHA1::Update(param_3,(uchar *)auStackX_20,4);
          uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
          if ((8 < pFVar3->Size) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldType.Size <= sizeof(uint64)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                 ,0x29d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
          uVar8 = (uint)pFVar12->BitFieldSize;
          auStackX_20[0] = auStackX_20[0] + uVar9;
          pFStack_48 = pFVar3;
        }
        FSHA1::Update(param_3,&pFVar12->BitFieldSize,1);
        pFVar11 = pFStack_48;
      }
    }
LAB_1419eb885:
    pFVar12 = pFVar12->Next;
    uVar13 = uVar13 + 1;
    if (pFVar12 == (FFieldLayoutDesc *)0x0) {
      if ((((param_2->Flags == 5) && (param_2->MaxFieldAlignment == 8)) &&
          (auStackX_20[0] != param_1->SizeFromFields)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LayoutParams.IsCurrentPlatform() || Offset == TypeLayout.SizeFromFields"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x2ab,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      return auStackX_20[0];
    }
  } while( true );
}

// CallAppendHash @ 1419e3bd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  wchar_t *_Str;
  size_t sVar1;
  uint local_res8 [2];
  
  _Str = param_1->Name;
  local_res8[0] = 0x10;
  sVar1 = wcslen(_Str);
  FSHA1::UpdateWithString(param_3,_Str,(uint)sVar1);
  FSHA1::Update(param_3,(uchar *)local_res8,4);
  return local_res8[0];
}

// CallAppendHash @ 1419e3c30

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint *puVar1;
  byte bVar2;
  FTypeLayoutDesc *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  FTypeLayoutDesc *pFVar11;
  FFieldLayoutDesc *pFVar12;
  uint uVar13;
  uint auStackX_20 [2];
  FTypeLayoutDesc *pFStack_48;
  
  sVar10 = wcslen(param_1->Name);
  FSHA1::UpdateWithString(param_3,param_1->Name,(uint)sVar10);
  pFVar12 = param_1->Fields;
  if (pFVar12 == (FFieldLayoutDesc *)0x0) {
    FSHA1::Update(param_3,(uchar *)&param_1->SizeFromFields,4);
    return param_1->SizeFromFields;
  }
  pFVar11 = (FTypeLayoutDesc *)0x0;
  uVar13 = 0;
  uVar8 = 0;
  pFStack_48 = (FTypeLayoutDesc *)0x0;
  auStackX_20[0] = 0;
  bVar6 = false;
  if (((param_1->Interface != NonVirtual) && (param_1->NumVirtualBases == '\0')) &&
     (auStackX_20[0] = 8, (param_2->Flags & 2) != 0)) {
    auStackX_20[0] = 4;
  }
  do {
    puVar1 = &param_2->Flags;
    if (((pFVar12->Flags & WithEditorOnly) == None) || ((*puVar1 & 8) != 0)) {
      pFVar3 = pFVar12->Type;
      if (pFVar12->BitFieldSize == 0) {
        bVar2 = param_1->NumBases;
        pFStack_48 = (FTypeLayoutDesc *)0x0;
        uVar7 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
        uVar8 = param_2->MaxFieldAlignment;
        uVar9 = uVar8;
        if (uVar7 < uVar8) {
          uVar9 = uVar7;
        }
        if ((((*puVar1 == 5) && (uVar8 == 8)) && (uVar7 != pFVar3->Alignment)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || FieldTypeAlignment == FieldType.Alignment"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x263,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        auStackX_20[0] = (auStackX_20[0] - 1) + uVar9 & -uVar9;
        uVar8 = (uint)bVar2;
        if (((((*puVar1 == 5) && (param_2->MaxFieldAlignment == 8)) &&
             (auStackX_20[0] != pFVar12->Offset)) &&
            (((uVar8 <= uVar13 || (pFVar3->SizeFromFields != 0)) || (pFVar12->Offset != 0)))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || CheckOffsetMatch(Offset, Field->Offset, FieldType, bIsBase)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x266,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        FSHA1::Update(param_3,(uchar *)auStackX_20,4);
        FSHA1::Update(param_3,(uchar *)&pFVar12->NumArray,4);
        uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
        pFVar11 = pFStack_48;
        if (uVar9 == 0) {
          if (uVar13 < uVar8) {
            if (bVar6) {
              uVar9 = 1;
              goto LAB_1419eb769;
            }
            uVar8 = 0;
            bVar6 = true;
            goto LAB_1419eb885;
          }
          uVar9 = 1;
        }
        else if (uVar13 < uVar8) {
LAB_1419eb769:
          if ((param_2->Flags & 4) == 0) {
            if ((pFVar12->NumArray != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Field->NumArray == 1u",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                   ,0x28a,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return uVar8;
            }
            auStackX_20[0] = auStackX_20[0] + uVar9;
            uVar8 = 0;
            goto LAB_1419eb885;
          }
        }
        uVar8 = 0;
        auStackX_20[0] = auStackX_20[0] + ((uVar9 - 1) + uVar7 & -uVar7) * pFVar12->NumArray;
      }
      else {
        if ((pFVar11 != pFVar3) ||
           (uVar8 = uVar8 + pFVar12->BitFieldSize, pFVar3->Size << 3 < uVar8)) {
          uVar9 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
          uVar8 = param_2->MaxFieldAlignment;
          if (uVar9 < param_2->MaxFieldAlignment) {
            uVar8 = uVar9;
          }
          auStackX_20[0] = (auStackX_20[0] - 1) + uVar8 & -uVar8;
          FSHA1::Update(param_3,(uchar *)auStackX_20,4);
          uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
          if ((8 < pFVar3->Size) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldType.Size <= sizeof(uint64)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                 ,0x29d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
          uVar8 = (uint)pFVar12->BitFieldSize;
          auStackX_20[0] = auStackX_20[0] + uVar9;
          pFStack_48 = pFVar3;
        }
        FSHA1::Update(param_3,&pFVar12->BitFieldSize,1);
        pFVar11 = pFStack_48;
      }
    }
LAB_1419eb885:
    pFVar12 = pFVar12->Next;
    uVar13 = uVar13 + 1;
    if (pFVar12 == (FFieldLayoutDesc *)0x0) {
      if ((((param_2->Flags == 5) && (param_2->MaxFieldAlignment == 8)) &&
          (auStackX_20[0] != param_1->SizeFromFields)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LayoutParams.IsCurrentPlatform() || Offset == TypeLayout.SizeFromFields"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x2ab,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      return auStackX_20[0];
    }
  } while( true );
}

// CallAppendHash @ 1419e3c40

uint __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint *puVar1;
  byte bVar2;
  FTypeLayoutDesc *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  FTypeLayoutDesc *pFVar11;
  FFieldLayoutDesc *pFVar12;
  uint uVar13;
  uint auStackX_20 [2];
  FTypeLayoutDesc *pFStack_48;
  
  sVar10 = wcslen(param_1->Name);
  FSHA1::UpdateWithString(param_3,param_1->Name,(uint)sVar10);
  pFVar12 = param_1->Fields;
  if (pFVar12 == (FFieldLayoutDesc *)0x0) {
    FSHA1::Update(param_3,(uchar *)&param_1->SizeFromFields,4);
    return param_1->SizeFromFields;
  }
  pFVar11 = (FTypeLayoutDesc *)0x0;
  uVar13 = 0;
  uVar8 = 0;
  pFStack_48 = (FTypeLayoutDesc *)0x0;
  auStackX_20[0] = 0;
  bVar6 = false;
  if (((param_1->Interface != NonVirtual) && (param_1->NumVirtualBases == '\0')) &&
     (auStackX_20[0] = 8, (param_2->Flags & 2) != 0)) {
    auStackX_20[0] = 4;
  }
  do {
    puVar1 = &param_2->Flags;
    if (((pFVar12->Flags & WithEditorOnly) == None) || ((*puVar1 & 8) != 0)) {
      pFVar3 = pFVar12->Type;
      if (pFVar12->BitFieldSize == 0) {
        bVar2 = param_1->NumBases;
        pFStack_48 = (FTypeLayoutDesc *)0x0;
        uVar7 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
        uVar8 = param_2->MaxFieldAlignment;
        uVar9 = uVar8;
        if (uVar7 < uVar8) {
          uVar9 = uVar7;
        }
        if ((((*puVar1 == 5) && (uVar8 == 8)) && (uVar7 != pFVar3->Alignment)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || FieldTypeAlignment == FieldType.Alignment"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x263,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        auStackX_20[0] = (auStackX_20[0] - 1) + uVar9 & -uVar9;
        uVar8 = (uint)bVar2;
        if (((((*puVar1 == 5) && (param_2->MaxFieldAlignment == 8)) &&
             (auStackX_20[0] != pFVar12->Offset)) &&
            (((uVar8 <= uVar13 || (pFVar3->SizeFromFields != 0)) || (pFVar12->Offset != 0)))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LayoutParams.IsCurrentPlatform() || CheckOffsetMatch(Offset, Field->Offset, FieldType, bIsBase)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x266,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        FSHA1::Update(param_3,(uchar *)auStackX_20,4);
        FSHA1::Update(param_3,(uchar *)&pFVar12->NumArray,4);
        uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
        pFVar11 = pFStack_48;
        if (uVar9 == 0) {
          if (uVar13 < uVar8) {
            if (bVar6) {
              uVar9 = 1;
              goto LAB_1419eb769;
            }
            uVar8 = 0;
            bVar6 = true;
            goto LAB_1419eb885;
          }
          uVar9 = 1;
        }
        else if (uVar13 < uVar8) {
LAB_1419eb769:
          if ((param_2->Flags & 4) == 0) {
            if ((pFVar12->NumArray != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Field->NumArray == 1u",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                   ,0x28a,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return uVar8;
            }
            auStackX_20[0] = auStackX_20[0] + uVar9;
            uVar8 = 0;
            goto LAB_1419eb885;
          }
        }
        uVar8 = 0;
        auStackX_20[0] = auStackX_20[0] + ((uVar9 - 1) + uVar7 & -uVar7) * pFVar12->NumArray;
      }
      else {
        if ((pFVar11 != pFVar3) ||
           (uVar8 = uVar8 + pFVar12->BitFieldSize, pFVar3->Size << 3 < uVar8)) {
          uVar9 = (*pFVar3->GetTargetAlignmentFunc)(pFVar3,param_2);
          uVar8 = param_2->MaxFieldAlignment;
          if (uVar9 < param_2->MaxFieldAlignment) {
            uVar8 = uVar9;
          }
          auStackX_20[0] = (auStackX_20[0] - 1) + uVar8 & -uVar8;
          FSHA1::Update(param_3,(uchar *)auStackX_20,4);
          uVar9 = (*pFVar3->AppendHashFunc)(pFVar3,param_2,param_3);
          if ((8 < pFVar3->Size) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldType.Size <= sizeof(uint64)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                                 ,0x29d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
          uVar8 = (uint)pFVar12->BitFieldSize;
          auStackX_20[0] = auStackX_20[0] + uVar9;
          pFStack_48 = pFVar3;
        }
        FSHA1::Update(param_3,&pFVar12->BitFieldSize,1);
        pFVar11 = pFStack_48;
      }
    }
LAB_1419eb885:
    pFVar12 = pFVar12->Next;
    uVar13 = uVar13 + 1;
    if (pFVar12 == (FFieldLayoutDesc *)0x0) {
      if ((((param_2->Flags == 5) && (param_2->MaxFieldAlignment == 8)) &&
          (auStackX_20[0] != param_1->SizeFromFields)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LayoutParams.IsCurrentPlatform() || Offset == TypeLayout.SizeFromFields"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x2ab,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      return auStackX_20[0];
    }
  } while( true );
}

// CallDestroy @ 1419e3c50

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// CallDestroy @ 1419e3c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 1419e3c90

void __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 1419e3cb0

void __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined2 *)param_1 = 0xfefe;
  return;
}

// CallGetTargetAlignment @ 1419e3cc0

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 1419e3cd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 1419e3cf0

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 1419e3d00

uint __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 1419e3d60

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%d\n");
  return;
}

// CallToString @ 1419e3d80

void __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<wchar_t>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 1419e3df0

void __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%d\n");
  return;
}

// CallToString @ 1419e3e10

void __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%d\n");
  return;
}

// CallUnfrozenCopy @ 1419e3e30

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined4 *)param_4 = *(undefined4 *)param_2;
  return 4;
}

// CallUnfrozenCopy @ 1419e3e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<wchar_t,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<wchar_t>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 1419e3ee0

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  return 8;
}

// CallUnfrozenCopy @ 1419e3f00

uint __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined2 *)param_4 = *(undefined2 *)param_2;
  return 2;
}

// CallWriteMemoryImage @ 1419e3f20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_int>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  uint uVar1;
  FMemoryImageSection *pFVar2;
  
  pFVar2 = param_1->Section;
  uVar1 = (pFVar2->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar2->Bytes,uVar1 + 4,Default);
  *(undefined4 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar1) = *(undefined4 *)param_2;
  return;
}

// CallWriteMemoryImage @ 1419e3f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  uint uVar2;
  FMemoryImageSection *pFVar3;
  FTypeLayoutDesc *pFVar4;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar4 = StaticGetTypeLayoutDesc<wchar_t>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar4,iVar1,0);
  pFVar3 = param_1->Section;
  uVar2 = (pFVar3->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar3->Bytes,uVar2 + 4,Default);
  *(undefined4 *)((pFVar3->Bytes).AllocatorInstance.Data + uVar2) =
       *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = param_1->Section;
  uVar2 = (pFVar3->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar3->Bytes,uVar2 + 4,Default);
  *(undefined4 *)((pFVar3->Bytes).AllocatorInstance.Data + uVar2) =
       *(undefined4 *)((longlong)param_2 + 8);
  return;
}

// CallWriteMemoryImage @ 1419e4010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TStaticGetTypeLayoutHelper<unsigned___int64>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  uint uVar1;
  FMemoryImageSection *pFVar2;
  
  pFVar2 = param_1->Section;
  uVar1 = (pFVar2->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar2->Bytes,uVar1 + 8,Default);
  *(undefined8 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar1) = *(undefined8 *)param_2;
  return;
}

// CallWriteMemoryImage @ 1419e4060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TStaticGetTypeLayoutHelper<wchar_t>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  uint uVar1;
  FMemoryImageSection *pFVar2;
  
  pFVar2 = param_1->Section;
  uVar1 = (pFVar2->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar2->Bytes,uVar1 + 2,Default);
  *(undefined2 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar1) = *(undefined2 *)param_2;
  return;
}

