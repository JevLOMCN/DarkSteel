// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 24

// CallAppendHash @ 145a05900

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallAppendHash
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

// CallAppendHash @ 145a05910

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145a05930

uint __cdecl
TStaticGetTypeLayoutHelper<bool>::CallAppendHash
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

// CallDestroy @ 145a05940

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallDestroy @ 145a05950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallDestroy
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

// CallDestroy @ 145a05980

void __cdecl
TStaticGetTypeLayoutHelper<bool>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallGetTargetAlignment @ 145a05990

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 145a059a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145a059c0

uint __cdecl
TStaticGetTypeLayoutHelper<bool>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 145a059d0

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  Freeze::IntrinsicToString(*(uchar *)param_1,param_2,param_3,param_4);
  return;
}

// CallToString @ 145a059e0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145a05a50

void __cdecl
TStaticGetTypeLayoutHelper<bool>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  uint uVar1;
  FFieldLayoutDesc *pFVar2;
  FTypeLayoutDesc *pFVar3;
  int iVar4;
  
  TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s\n");
  param_4->Indent = param_4->Indent + 1;
  for (pFVar2 = param_2->Fields; pFVar2 != (FFieldLayoutDesc *)0x0; pFVar2 = pFVar2->Next) {
    if (((pFVar2->Flags & WithEditorOnly) == None) || ((param_3->Flags & 8) != 0)) {
      uVar1 = pFVar2->Offset;
      iVar4 = 0;
      pFVar3 = pFVar2->Type;
      if (0 < param_4->Indent) {
        do {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4->String,L"    ",4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_4->Indent);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s: ");
      if (pFVar2->BitFieldSize == '\0') {
        (*pFVar3->ToStringFunc)
                  ((void *)((ulonglong)uVar1 + (longlong)param_1),pFVar3,param_3,param_4);
      }
      else {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4->String,L"(BITFIELD)\n",0xb);
      }
    }
  }
  param_4->Indent = param_4->Indent + -1;
  return;
}

// CallUnfrozenCopy @ 145a05a60

uint __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallUnfrozenCopy @ 145a05a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<unsigned_char,TMemoryImageAllocator<64>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145a05b10

uint __cdecl
TStaticGetTypeLayoutHelper<bool>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallWriteMemoryImage @ 145a05b30

void __cdecl
TStaticGetTypeLayoutHelper<unsigned_char>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallWriteMemoryImage @ 145a05b50

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<64>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0x40);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145a05bd0

void __cdecl
TStaticGetTypeLayoutHelper<bool>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallAppendHash @ 145a9cdd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 145a9cdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 145a9ce20

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 145a9ce40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallUnfrozenCopy @ 145a9ceb0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  ulonglong uVar3;
  void *pvVar4;
  uint uVar5;
  
  *(undefined8 *)param_4 = 0;
  *(int *)((longlong)param_4 + 8) = 0;
  *(int *)((longlong)param_4 + 0xc) = 0;
  uVar5 = *(uint *)((longlong)param_2 + 8);
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar1 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,uVar5,param_4,(int *)((longlong)param_4 + 8),
                       (int *)((longlong)param_4 + 0xc));
    uVar3 = *(ulonglong *)param_4;
    if ((uVar3 & 1) != 0) {
      uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)param_4;
    }
    memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)uVar5 << 2);
    uVar5 = *(uint *)((longlong)param_2 + 8);
  }
  pvVar4 = *(void **)param_4;
  if (((ulonglong)pvVar4 & 1) != 0) {
    pvVar4 = (void *)(((longlong)pvVar4 >> 0x18) + (longlong)param_4);
  }
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,uVar5,pvVar4);
  return 0x10;
}

// CallWriteMemoryImage @ 145a9cf90

void __cdecl
TStaticGetTypeLayoutHelper<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

