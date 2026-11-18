// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 128

// CallAppendHash @ 145dfabe0

uint __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::IntrinsicAppendHash((FMemoryImageName *)0x0,param_1,param_2,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfac00

uint __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallAppendHash
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

// CallAppendHash @ 145dfac10

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfac30

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfac50

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfac70

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfac90

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfacb0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfacd0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfacf0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfad10

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfad30

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfad50

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfad70

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfad90

uint __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x18,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfadb0

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfadd0

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfadf0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfae10

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 145dfae30

uint __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallAppendHash
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

// CallAppendHash @ 145dfae40

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallAppendHash
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

// CallDestroy @ 145dfae50

void __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 145dfae70

void __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// CallDestroy @ 145dfae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 145dfaeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
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

// CallDestroy @ 145dfaee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
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

// CallDestroy @ 145dfaf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
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

// CallDestroy @ 145dfaf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
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

// CallDestroy @ 145dfaf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 145dfafa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
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

// CallDestroy @ 145dfafd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 145dfb000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  FShaderLooseParameterBufferInfo *pFVar2;
  
  if (!param_4) {
    pFVar2 = *(FShaderLooseParameterBufferInfo **)param_1;
    if (((ulonglong)pFVar2 & 1) != 0) {
      pFVar2 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar2 >> 0x18) + (longlong)param_1);
    }
    DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar2,*(int *)((longlong)param_1 + 8));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 145dfb050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
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

// CallDestroy @ 145dfb080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
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

// CallDestroy @ 145dfb0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
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

// CallDestroy @ 145dfb0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 8));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// CallDestroy @ 145dfb120

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 145dfb140

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 145dfb160

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 145dfb180

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 145dfb1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _UNK_1506d61ec;
  uVar3 = _UNK_1506d61e8;
  uVar2 = _UNK_1506d61e4;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// CallDestroy @ 145dfb1c0

void __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// CallGetTargetAlignment @ 145dfb1d0

uint __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 145dfb1e0

uint __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 145dfb1f0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb210

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb230

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb250

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb270

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb290

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb2b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb2d0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb2f0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb310

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb330

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb350

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb370

uint __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb390

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb3b0

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb3d0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb3f0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 145dfb410

uint __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallGetTargetAlignment @ 145dfb420

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 145dfb430

void __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallToString
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

// CallToString @ 145dfb440

void __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallToString
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

// CallToString @ 145dfb450

void __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<int>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb4c0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FBindlessResourceParameter>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb530

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameter>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb5a0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameterStructReference>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb610

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FResourceParameter>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb680

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShader>_>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb6f0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShaderPipeline>_>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb760

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FHashedName::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb7d0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderLooseParameterBufferInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb840

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderLooseParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb8b0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderResourceParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb920

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderUniformBufferParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145dfb990

void __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallToString
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

// CallToString @ 145dfb9a0

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  FPointerTableBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTypeLayoutDesc *pFVar4;
  longlong lVar5;
  
  if ((*(byte *)param_1 & 1) == 0) {
    lVar5 = *(longlong *)param_1;
  }
  else {
    pFVar1 = param_4->PrevPointerTable;
    if (pFVar1 == (FPointerTableBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = Do();
    lVar5 = (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,pFVar4,*(ulonglong *)param_1 >> 1);
  }
  if (lVar5 != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s\n");
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 145dfba50

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  FPointerTableBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTypeLayoutDesc *pFVar4;
  longlong lVar5;
  
  if ((*(byte *)param_1 & 1) == 0) {
    lVar5 = *(longlong *)param_1;
  }
  else {
    pFVar1 = param_4->PrevPointerTable;
    if (pFVar1 == (FPointerTableBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = Do();
    lVar5 = (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,pFVar4,*(ulonglong *)param_1 >> 1);
  }
  if (lVar5 != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s\n");
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 145dfbb00

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  FPointerTableBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  FTypeLayoutDesc *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = *(ulonglong *)param_1;
  if ((uVar8 & 1) != 0) {
    uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
  }
  if (uVar8 != 0) {
    pFVar5 = FShader::StaticGetTypeLayout();
    if ((*(byte *)(uVar8 + 0xc0) & 1) == 0) {
      lVar7 = *(longlong *)(uVar8 + 0xc0);
    }
    else {
      pFVar1 = param_4->PrevPointerTable;
      if (pFVar1 == (FPointerTableBase *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PtrTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x465,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar6 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::Do();
      lVar7 = (**(code **)((longlong)*pFVar1 + 0x10))
                        (pFVar1,pFVar6,*(ulonglong *)(uVar8 + 0xc0) >> 1);
    }
    if (lVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x3c7,L"FShaderType is missing");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = *(FTypeLayoutDesc **)(lVar7 + 0x10);
    uVar4 = FTypeLayoutDesc::GetOffsetToBase(pFVar6,pFVar5);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar5);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar5,((uint)(*(ulonglong *)param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000145dfbc3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pFVar6->ToStringFunc)((void *)(uVar8 - uVar4),pFVar6,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 145dfbc60

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallToString
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
    pFVar2 = FShaderPipeline::StaticGetTypeLayout();
    this = FShaderPipeline::StaticGetTypeLayout();
    uVar1 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar2);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar2);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar2,((uint)(*(ulonglong *)param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000145dfbd12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->ToStringFunc)((void *)(uVar3 - uVar1),this,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 145dfbd30

void __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FString FStack_18;
  
  pTVar1 = param_4->String;
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  BytesToHex(param_1,0x14,&FStack_18);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%s\n");
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CallToString @ 145dfbd40

void __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallToString
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

// CallUnfrozenCopy @ 145dfbd50

uint __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  uint uVar1;
  
  uVar1 = Freeze::IntrinsicUnfrozenCopy(param_1,param_2,param_4);
  return uVar1;
}

// CallUnfrozenCopy @ 145dfbd60

uint __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined4 *)param_4 = *(undefined4 *)param_2;
  return 4;
}

// CallUnfrozenCopy @ 145dfbd80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<int,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<int>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfbe10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>::
  SetNumZeroed(param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FBindlessResourceParameter>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfbea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameter>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfbf30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>::
  SetNumZeroed(param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameterStructReference>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfbfc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FResourceParameter>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShader>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc0e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShaderPipeline>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FHashedName,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FHashedName::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc200

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

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
                      (0x18,8,uVar5,param_4,(int *)((longlong)param_4 + 8),
                       (int *)((longlong)param_4 + 0xc));
    uVar3 = *(ulonglong *)param_4;
    if ((uVar3 & 1) != 0) {
      uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)param_4;
    }
    memset((void *)(uVar3 + (longlong)iVar1 * 0x18),0,(longlong)(int)uVar5 * 0x18);
    uVar5 = *(uint *)((longlong)param_2 + 8);
  }
  pvVar4 = *(void **)param_4;
  if (((ulonglong)pvVar4 & 1) != 0) {
    pvVar4 = (void *)(((longlong)pvVar4 >> 0x18) + (longlong)param_4);
  }
  pFVar2 = FShaderLooseParameterBufferInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,uVar5,pvVar4);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc2f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderLooseParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderResourceParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderUniformBufferParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145dfc4a0

uint __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  THashTable<TMemoryImageAllocator<0>_>::CopyUnfrozen(param_2,param_1,param_4);
  return 0x18;
}

// CallUnfrozenCopy @ 145dfc4d0

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  FPointerTableBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  undefined8 uVar6;
  
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined8 *)param_4 = *(undefined8 *)param_2;
    return 8;
  }
  pFVar1 = param_1->PrevPointerTable;
  if (pFVar1 == (FPointerTableBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PtrTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x465,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar5 = Do();
  uVar6 = (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,pFVar5,*(ulonglong *)param_2 >> 1);
  *(undefined8 *)param_4 = uVar6;
  return 8;
}

// CallUnfrozenCopy @ 145dfc570

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  FPointerTableBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  undefined8 uVar6;
  
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined8 *)param_4 = *(undefined8 *)param_2;
    return 8;
  }
  pFVar1 = param_1->PrevPointerTable;
  if (pFVar1 == (FPointerTableBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PtrTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x465,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar5 = Do();
  uVar6 = (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,pFVar5,*(ulonglong *)param_2 >> 1);
  *(undefined8 *)param_4 = uVar6;
  return 8;
}

// CallUnfrozenCopy @ 145dfc610

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  FTypeLayoutDesc *this;
  void *pvVar6;
  FShader *pFVar7;
  
  pFVar7 = *(FShader **)param_2;
  if (((ulonglong)pFVar7 & 1) != 0) {
    pFVar7 = (FShader *)(((longlong)pFVar7 >> 0x18) + (longlong)param_2);
  }
  if (pFVar7 != (FShader *)0x0) {
    pFVar5 = FShader::StaticGetTypeLayout();
    if (((*(byte *)param_2 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFrozen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,400,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    this = FMemoryUnfreezeContent::GetDerivedTypeDesc
                     (param_1,pFVar5,(*(uint *)param_2 >> 1 & 0x7fffff) - 1);
    if ((this != (FTypeLayoutDesc *)0x0) ||
       ((param_1->bIsFrozenForCurrentPlatform != false &&
        (this = GetTypeLayoutDesc(param_1->PrevPointerTable,pFVar7), this != (FTypeLayoutDesc *)0x0)
        ))) {
      uVar4 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar5);
      pvVar6 = ::operator_new((ulonglong)this->Size);
      (*this->UnfrozenCopyFunc)(param_1,(void *)((longlong)pFVar7 - (ulonglong)uVar4),this,pvVar6);
      uVar1 = (ulonglong)uVar4 + (longlong)pvVar6;
      *(ulonglong *)param_4 = uVar1;
      if ((uVar1 & 1) == 0) {
        return 8;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L"");
      if (!bVar3) {
        return 8;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  *(undefined8 *)param_4 = 0;
  return 8;
}

// CallUnfrozenCopy @ 145dfc750

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallUnfrozenCopy
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
    pFVar4 = FShaderPipeline::StaticGetTypeLayout();
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
        (this = FShaderPipeline::StaticGetTypeLayout(), this != (FTypeLayoutDesc *)0x0)))) {
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

// CallUnfrozenCopy @ 145dfc880

uint __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_4 + 8) = uVar1;
  *(undefined4 *)((longlong)param_4 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  return 0x14;
}

// CallUnfrozenCopy @ 145dfc8a0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined1 *)param_4 = *(undefined1 *)param_2;
  return 1;
}

// CallWriteMemoryImage @ 145dfc8c0

void __cdecl
TStaticGetTypeLayoutHelper<FMemoryImageName>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  bool bVar1;
  FPlatformTypeLayoutParameters *this;
  undefined8 uVar2;
  int iVar3;
  FName FStackX_20;
  
  this = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  bVar1 = FPlatformTypeLayoutParameters::IsCurrentPlatform(this);
  if (bVar1) {
    uVar2 = *(undefined8 *)param_2;
    iVar3 = 8;
  }
  else {
    `Freeze::IntrinsicWriteMemoryImage'::__l7::<lambda_1>::operator()(&FStackX_20);
    iVar3 = 8;
    uVar2 = *(undefined8 *)param_2;
    if ((this->Flags & 8) != 0) {
      iVar3 = 0xc;
    }
  }
  FStackX_20.ComparisonIndex.Value = (uint)uVar2;
  FStackX_20.Number = (uint)((ulonglong)uVar2 >> 0x20);
  FMemoryImageWriter::WriteFMemoryImageName(param_1,iVar3,&FStackX_20);
  return;
}

// CallWriteMemoryImage @ 145dfc8d0

void __cdecl
TStaticGetTypeLayoutHelper<FShaderTarget>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,4);
  return;
}

// CallWriteMemoryImage @ 145dfc8f0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<int>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfc970

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FBindlessResourceParameter>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfc9f0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameter,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameter>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfca70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FParameterStructReference>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcaf0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FShaderParameterBindings::FResourceParameter>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcb70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShader>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShader>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcbf0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShaderPipeline>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcc70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FHashedName,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FHashedName::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfccf0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderLooseParameterBufferInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcd70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderLooseParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcdf0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderResourceParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfce70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderUniformBufferParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145dfcef0

void __cdecl
TStaticGetTypeLayoutHelper<THashTable<TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 0x10);
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1 + 1,0);
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)((longlong)param_2 + 8),param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 0x10),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 0x14),4);
  return;
}

// CallWriteMemoryImage @ 145dfcfa0

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPointerTableBase *pFVar4;
  FTypeLayoutDesc *pFVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong local_res10;
  ulonglong local_18 [2];
  
  pFVar4 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((*(byte *)param_2 & 1) == 0) {
    lVar6 = *(longlong *)param_2;
  }
  else {
    if (pFVar4 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = Do();
    lVar6 = (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4,pFVar5,*(ulonglong *)param_2 >> 1);
  }
  if (lVar6 == 0) {
    local_18[0] = 0;
    puVar7 = local_18;
  }
  else {
    pFVar4 = FMemoryImageWriter::GetPointerTable(param_1);
    uVar3 = (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_3,lVar6);
    if (uVar3 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != (uint32)INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x49e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar7 = &local_res10;
    local_res10 = (ulonglong)uVar3 * 2 | 1;
  }
  FMemoryImageWriter::WriteBytes(param_1,puVar7,8);
  return;
}

// CallWriteMemoryImage @ 145dfd0c0

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPointerTableBase *pFVar4;
  FTypeLayoutDesc *pFVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong local_res10;
  ulonglong local_18 [2];
  
  pFVar4 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((*(byte *)param_2 & 1) == 0) {
    lVar6 = *(longlong *)param_2;
  }
  else {
    if (pFVar4 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = Do();
    lVar6 = (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4,pFVar5,*(ulonglong *)param_2 >> 1);
  }
  if (lVar6 == 0) {
    local_18[0] = 0;
    puVar7 = local_18;
  }
  else {
    pFVar4 = FMemoryImageWriter::GetPointerTable(param_1);
    uVar3 = (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_3,lVar6);
    if (uVar3 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != (uint32)INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x49e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar7 = &local_res10;
    local_res10 = (ulonglong)uVar3 * 2 | 1;
  }
  FMemoryImageWriter::WriteBytes(param_1,puVar7,8);
  return;
}

// CallWriteMemoryImage @ 145dfd1e0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShader>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPointerTableBase *pFVar3;
  FTypeLayoutDesc *pFVar4;
  longlong lVar5;
  FTypeLayoutDesc *pFVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)param_2;
  if (((ulonglong)pvVar7 & 1) != 0) {
    pvVar7 = (void *)(((longlong)pvVar7 >> 0x18) + (longlong)param_2);
  }
  if (pvVar7 != (void *)0x0) {
    pFVar3 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
    if ((*(byte *)((longlong)pvVar7 + 0xc0) & 1) == 0) {
      lVar5 = *(longlong *)((longlong)pvVar7 + 0xc0);
    }
    else {
      if (pFVar3 == (FPointerTableBase *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PtrTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x465,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::Do();
      lVar5 = (**(code **)((longlong)*pFVar3 + 0x10))
                        (pFVar3,pFVar4,*(ulonglong *)((longlong)pvVar7 + 0xc0) >> 1);
    }
    if (lVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x3c7,L"FShaderType is missing");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = *(FTypeLayoutDesc **)(lVar5 + 0x10);
    pFVar6 = FShader::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer
              (param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8,pFVar6,(uint *)pFVar4);
    FMemoryImageWriter::WriteObject((FMemoryImageWriter *)&stack0xffffffffffffffe8,pvVar7,pFVar4);
    FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// CallWriteMemoryImage @ 145dfd320

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FShaderPipeline>_>::CallWriteMemoryImage
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
    pFVar1 = FShaderPipeline::StaticGetTypeLayout();
    pFVar2 = FShaderPipeline::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer
              (param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8,pFVar2,(uint *)pFVar1);
    FMemoryImageWriter::WriteObject((FMemoryImageWriter *)&stack0xffffffffffffffe8,pvVar3,pFVar1);
    FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// CallWriteMemoryImage @ 145dfd3d0

void __cdecl
TStaticGetTypeLayoutHelper<FSHAHash>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,0x14);
  return;
}

// CallWriteMemoryImage @ 145dfd3f0

void __cdecl
TStaticGetTypeLayoutHelper<enum_EShaderParameterType>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,1);
  return;
}

// Do @ 145e043e0

FTypeLayoutDesc * __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FShaderType,FShaderType_*>_>::Do(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 3;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TIndexedPtr<FSh;
    ::TypeBuffer._32_8_ = CallWriteMemoryImage;
    ::TypeBuffer._40_8_ = CallUnfrozenCopy;
    ::TypeBuffer._48_8_ = CallAppendHash;
    ::TypeBuffer._56_8_ = CallGetTargetAlignment;
    ::TypeBuffer._64_8_ = CallToString;
    ::TypeBuffer._24_8_ = CallDestroy;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = '\b';
    ::TypeBuffer[0x5d] = '\0';
    ::TypeBuffer[0x5e] = '\0';
    ::TypeBuffer[0x5f] = '\0';
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Do @ 145e04490

FTypeLayoutDesc * __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::Do(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 3;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TIndexedPtr<FVe;
    ::TypeBuffer._32_8_ = CallWriteMemoryImage;
    ::TypeBuffer._40_8_ = CallUnfrozenCopy;
    ::TypeBuffer._48_8_ = CallAppendHash;
    ::TypeBuffer._56_8_ = CallGetTargetAlignment;
    ::TypeBuffer._64_8_ = CallToString;
    ::TypeBuffer._24_8_ = CallDestroy;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = '\b';
    ::TypeBuffer[0x5d] = '\0';
    ::TypeBuffer[0x5e] = '\0';
    ::TypeBuffer[0x5f] = '\0';
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

