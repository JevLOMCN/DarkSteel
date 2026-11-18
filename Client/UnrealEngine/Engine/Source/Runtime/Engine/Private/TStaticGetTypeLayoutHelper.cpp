// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 300

// CallAppendHash @ 147698060

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 147698080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 1476980b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 1476980d0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 1476980e0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 147698100

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 147c3b310

uint __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallAppendHash
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

// CallAppendHash @ 147c3b320

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 147c3b340

void __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// CallDestroy @ 147c3b360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 147c3b390

uint __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147c3b3a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 147c3b3c0

void __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallToString
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

// CallToString @ 147c3b3d0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallUnfrozenCopy @ 147c3b440

uint __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  *(undefined4 *)((longlong)param_4 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  return 0xc;
}

// CallUnfrozenCopy @ 147c3b460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallWriteMemoryImage @ 147c3b4f0

void __cdecl
TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,0xc);
  return;
}

// CallWriteMemoryImage @ 147c3b510

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallAppendHash @ 147f70330

uint __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallAppendHash
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

// CallAppendHash @ 147f70340

uint __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallAppendHash
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

// CallAppendHash @ 147f70350

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70370

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70390

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f703b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f703d0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f703f0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70410

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70430

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70450

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70470

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70490

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f704b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 147f704d0

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallAppendHash
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

// CallAppendHash @ 147f704e0

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallAppendHash
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

// CallAppendHash @ 147f704f0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 147f70510

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallAppendHash
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

// CallAppendHash @ 147f70520

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallAppendHash
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

// CallDestroy @ 147f70530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 147f70550

void __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// CallDestroy @ 147f70570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 147f705a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 147f705d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 147f70630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f706c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f706f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f70780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 147f707b0

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallDestroy @ 147f707c0

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallDestroy @ 147f707d0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 147f707f0

void __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallDestroy @ 147f70800

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallGetTargetAlignment @ 147f70810

uint __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147f70820

uint __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147f70830

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70850

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70870

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70890

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f708b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f708d0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f708f0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70910

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70930

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70950

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70970

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f70990

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f709b0

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147f709c0

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147f709d0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 147f709f0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 147f70a00

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 147f70a10

void __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallToString
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

// CallToString @ 147f70a20

void __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallToString
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

// CallToString @ 147f70a30

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70aa0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70b10

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70b80

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70bf0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70c60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70cd0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70d40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70db0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70e20

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70e90

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70f00

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 147f70f70

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallToString
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

// CallToString @ 147f70f80

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallToString
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

// CallToString @ 147f70f90

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  uint uVar1;
  FTypeLayoutDesc *pFVar2;
  FTypeLayoutDesc *this;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)param_1;
  if ((uVar3 & 1) != 0) {
    uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)param_1;
  }
  if (uVar3 != 0) {
    pFVar2 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    this = FMeshMaterialShaderMap::StaticGetTypeLayout();
    uVar1 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar2);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar2);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar2,((uint)(*(ulonglong *)param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000147f71042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->ToStringFunc)((void *)(uVar3 - uVar1),this,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 147f71060

void __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallToString
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

// CallToString @ 147f71070

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallToString
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

// CallUnfrozenCopy @ 147f71080

uint __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_4 + 8) = uVar1;
  return 0x10;
}

// CallUnfrozenCopy @ 147f710a0

uint __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  *(undefined4 *)((longlong)param_4 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  return 0xc;
}

// CallUnfrozenCopy @ 147f710c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FGuid,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FScriptName,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f711e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f714b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f715d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f716f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 147f71780

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallUnfrozenCopy @ 147f717a0

uint __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallUnfrozenCopy @ 147f717c0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTypeLayoutDesc *pFVar4;
  FTypeLayoutDesc *this;
  void *pvVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)param_2;
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_2;
  }
  if (uVar6 != 0) {
    pFVar4 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    if (((*(byte *)param_2 & 1) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFrozen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,400,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    this = FMemoryUnfreezeContent::GetDerivedTypeDesc
                     (param_1,pFVar4,(*(uint *)param_2 >> 1 & 0x7fffff) - 1);
    if ((this != (FTypeLayoutDesc *)0x0) ||
       ((param_1->bIsFrozenForCurrentPlatform != false &&
        (this = FMeshMaterialShaderMap::StaticGetTypeLayout(), this != (FTypeLayoutDesc *)0x0)))) {
      uVar3 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar4);
      pvVar5 = ::operator_new((ulonglong)this->Size);
      (*this->UnfrozenCopyFunc)(param_1,(void *)(uVar6 - uVar3),this,pvVar5);
      uVar6 = (ulonglong)uVar3 + (longlong)pvVar5;
      *(ulonglong *)param_4 = uVar6;
      if ((uVar6 & 1) == 0) {
        return 8;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L"");
      if (!bVar2) {
        return 8;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  *(undefined8 *)param_4 = 0;
  return 8;
}

// CallUnfrozenCopy @ 147f718f0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallUnfrozenCopy @ 147f71910

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallWriteMemoryImage @ 147f71930

void __cdecl
TStaticGetTypeLayoutHelper<FGuid>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,0x10);
  return;
}

// CallWriteMemoryImage @ 147f71950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TStaticGetTypeLayoutHelper<FScriptName>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FMemoryImageSection *pFVar4;
  int iVar5;
  undefined4 uStack_18;
  
  pFVar4 = param_1->Section;
  iVar3 = (pFVar4->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar4->Bytes,iVar3 + 0xc,Default);
  if ((*(int *)param_2 != 0) || (*(int *)((longlong)param_2 + 8) != 0)) {
    iVar5 = (pFVar4->ScriptNames).ArrayNum;
    piVar1 = &(pFVar4->ScriptNames).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(pFVar4->ScriptNames).AllocatorInstance,piVar1);
    }
    (pFVar4->ScriptNames).ArrayNum = iVar5 + 1;
    pFVar2 = (pFVar4->ScriptNames).AllocatorInstance.Data + (longlong)iVar5 * 0xc;
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    uStack_18 = (undefined4)*(undefined8 *)param_2;
    *(ulonglong *)pFVar2 = CONCAT44(*(undefined4 *)((longlong)param_2 + 8),uStack_18);
    *(int *)(pFVar2 + 8) = iVar3;
  }
  return;
}

// CallWriteMemoryImage @ 147f71960

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f719e0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71a60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71ae0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71b60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71be0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71c60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71ce0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71d60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71de0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71e60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71ee0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 147f71f60

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallWriteMemoryImage @ 147f71f80

void __cdecl
TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallWriteMemoryImage @ 147f71fa0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  FTypeLayoutDesc *pFVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)param_2;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_2);
  }
  if (pvVar3 != (void *)0x0) {
    FMemoryImageWriter::TryGetPrevPointerTable(param_1);
    pFVar1 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    pFVar2 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer
              (param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8,pFVar2,(uint *)pFVar1);
    FMemoryImageWriter::WriteObject((FMemoryImageWriter *)&stack0xffffffffffffffe8,pvVar3,pFVar1);
    FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// CallWriteMemoryImage @ 147f72050

void __cdecl
TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallWriteMemoryImage @ 147f72070

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallAppendHash @ 147fb6d80

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 147fb6da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 147fb6dd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 147fb6df0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 147fb6e00

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 147fb6e20

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 148362750

uint __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallAppendHash
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

// CallAppendHash @ 148362760

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 148362780

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 1483627a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 1483627c0

void __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// CallDestroy @ 1483627d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 148362800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 148362830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 148362860

uint __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 148362870

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148362890

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 1483628b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 1483628d0

void __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallToString
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

// CallToString @ 1483628e0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 1483628f0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FColor>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 148362960

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 148362970

uint __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined4 *)param_4 = *(undefined4 *)param_2;
  return 4;
}

// CallUnfrozenCopy @ 148362990

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 1483629b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FColor,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FColor>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 148362a40

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 148362a60

void __cdecl
TStaticGetTypeLayoutHelper<FColor>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,4);
  return;
}

// CallWriteMemoryImage @ 148362a80

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TIntVector3<int>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 148362af0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FColor,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FColor>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 148362b70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FPositionVertex,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 14845a6a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a6c0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a6e0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a700

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a720

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a740

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a760

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a780

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a7a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a7c0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a7e0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a800

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a820

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a840

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a860

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a880

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 14845a8a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 14845a8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845a9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845aa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845aa40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845aa70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845aaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845aad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845ab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845ab30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845ab60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845ab90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 14845abc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 14845abf0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ac10

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ac30

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ac50

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ac70

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ac90

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845acb0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845acd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845acf0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ad10

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ad30

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ad50

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ad70

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845ad90

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845adb0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845add0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 14845adf0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 14845ae10

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae20

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae30

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae50

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae60

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae80

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845ae90

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aea0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aeb0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aec0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aed0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aee0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845aef0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845af00

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallToString @ 14845af10

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 14845af20

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845af40

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845af60

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845af80

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845afa0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845afc0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845afe0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b000

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b020

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b040

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b060

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b080

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b0a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b0c0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b0e0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b100

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallUnfrozenCopy @ 14845b120

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 14845b140

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b1b0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b220

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b290

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b300

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b370

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b3e0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b450

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b4c0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b530

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b5a0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b610

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b680

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b6f0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b760

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b7d0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallWriteMemoryImage @ 14845b840

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 1485ad680

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 1485ad6a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 1485ad6c0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallAppendHash
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

// CallDestroy @ 1485ad6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 1485ad700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallDestroy @ 1485ad730

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallGetTargetAlignment @ 1485ad740

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 1485ad760

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 1485ad780

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 1485ad790

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = UE::Shader::FPreshaderStructType::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 1485ad800

void __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<enum_UE::Shader::EValueComponentType>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 1485ad870

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallToString
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

// CallUnfrozenCopy @ 1485ad880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = UE::Shader::FPreshaderStructType::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 1485ad910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<enum_UE::Shader::EValueComponentType>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 1485ad9a0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallWriteMemoryImage @ 1485ad9c0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = UE::Shader::FPreshaderStructType::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 1485ada40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<enum_UE::Shader::EValueComponentType>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 1485adac0

void __cdecl
TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueComponentType>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// CallAppendHash @ 148632f80

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 148632fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallGetTargetAlignment @ 148632fd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 148632ff0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 148633000

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 148633020

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 1489ceb00

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 1489ceb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

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

// CallGetTargetAlignment @ 1489ceb50

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 1489ceb70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 1489ceb80

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 1489ceba0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// CallAppendHash @ 148aec840

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallAppendHash
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

// CallDestroy @ 148aec850

void __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined2 *)param_1 = 0xfefe;
  return;
}

// CallGetTargetAlignment @ 148aec860

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 148aec870

void __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallToString
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

// CallUnfrozenCopy @ 148aec880

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined2 *)param_4 = *(undefined2 *)param_2;
  return 2;
}

// CallWriteMemoryImage @ 148aec8a0

void __cdecl
TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,2);
  return;
}

