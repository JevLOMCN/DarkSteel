// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 36

// CallAppendHash @ 148df6270

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 148df6290

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 148df62b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 148df62d0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 148df62f0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallAppendHash @ 148df6310

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash
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

// CallDestroy @ 148df6320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  FNiagaraDataInterfaceParamRef *pFVar2;
  
  if (!param_4) {
    pFVar2 = *(FNiagaraDataInterfaceParamRef **)param_1;
    if (((ulonglong)pFVar2 & 1) != 0) {
      pFVar2 = (FNiagaraDataInterfaceParamRef *)(((longlong)pFVar2 >> 0x18) + (longlong)param_1);
    }
    DestructItems<FNiagaraDataInterfaceParamRef,int>(pFVar2,*(int *)((longlong)param_1 + 8));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 148df6370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  FMemoryImageString *pFVar2;
  
  if (!param_4) {
    pFVar2 = *(FMemoryImageString **)param_1;
    if (((ulonglong)pFVar2 & 1) != 0) {
      pFVar2 = (FMemoryImageString *)(((longlong)pFVar2 >> 0x18) + (longlong)param_1);
    }
    DestructItems<FMemoryImageString,int>(pFVar2,*(int *)((longlong)param_1 + 8));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 148df63c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 148df63f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::CallDestroy
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

// CallDestroy @ 148df6420

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallDestroy @ 148df6440

void __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// CallGetTargetAlignment @ 148df6450

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148df6470

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148df6490

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148df64b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148df64d0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 148df64f0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  return param_1->Alignment;
}

// CallToString @ 148df6500

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FNiagaraDataInterfaceParamRef::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 148df6570

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FMemoryImageString::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 148df65e0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = StaticGetTypeLayoutDesc<FSHAHash>();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 148df6650

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderTypeDependency::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 148df66c0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  uint uVar1;
  FTypeLayoutDesc *pFVar2;
  FTypeLayoutDesc *this;
  FNiagaraDataInterfaceParametersCS *this_00;
  
  this_00 = *(FNiagaraDataInterfaceParametersCS **)param_1;
  if (((ulonglong)this_00 & 1) != 0) {
    this_00 = (FNiagaraDataInterfaceParametersCS *)(((longlong)this_00 >> 0x18) + (longlong)param_1)
    ;
  }
  if (this_00 != (FNiagaraDataInterfaceParametersCS *)0x0) {
    pFVar2 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    this = FNiagaraDataInterfaceParametersCS::GetTypeLayout(this_00);
    uVar1 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar2);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar2);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar2,((uint)(*(ulonglong *)param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000148df6775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->ToStringFunc)(this_00 + -(ulonglong)uVar1,this,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallToString @ 148df67a0

void __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString
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

// CallUnfrozenCopy @ 148df67b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
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
  pFVar2 = FNiagaraDataInterfaceParamRef::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,uVar5,pvVar4);
  return 0x10;
}

// CallUnfrozenCopy @ 148df68a0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  FTypeLayoutDesc *pFVar3;
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
                      (0x10,8,uVar5,param_4,(int *)((longlong)param_4 + 8),
                       (int *)((longlong)param_4 + 0xc));
    uVar2 = *(ulonglong *)param_4;
    if ((uVar2 & 1) != 0) {
      uVar2 = ((longlong)uVar2 >> 0x18) + (longlong)param_4;
    }
    memset((void *)((longlong)iVar1 * 0x10 + uVar2),0,(longlong)(int)uVar5 << 4);
    uVar5 = *(uint *)((longlong)param_2 + 8);
  }
  pvVar4 = *(void **)param_4;
  if (((ulonglong)pvVar4 & 1) != 0) {
    pvVar4 = (void *)(((longlong)pvVar4 >> 0x18) + (longlong)param_4);
  }
  pFVar3 = FMemoryImageString::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar3,uVar5,pvVar4);
  return 0x10;
}

// CallUnfrozenCopy @ 148df6980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FSHAHash,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FSHAHash>();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 148df6a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderTypeDependency::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 148df6aa0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  FTypeLayoutDesc *this;
  void *pvVar6;
  FNiagaraDataInterfaceParametersCS *this_00;
  
  this_00 = *(FNiagaraDataInterfaceParametersCS **)param_2;
  if (((ulonglong)this_00 & 1) != 0) {
    this_00 = (FNiagaraDataInterfaceParametersCS *)(((longlong)this_00 >> 0x18) + (longlong)param_2)
    ;
  }
  if (this_00 != (FNiagaraDataInterfaceParametersCS *)0x0) {
    pFVar5 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
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
        (this = FNiagaraDataInterfaceParametersCS::GetTypeLayout(this_00),
        this != (FTypeLayoutDesc *)0x0)))) {
      uVar4 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar5);
      pvVar6 = ::operator_new((ulonglong)this->Size);
      (*this->UnfrozenCopyFunc)(param_1,this_00 + -(ulonglong)uVar4,this,pvVar6);
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

// CallUnfrozenCopy @ 148df6be0

uint __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  *(undefined4 *)param_4 = *(undefined4 *)param_2;
  return 4;
}

// CallWriteMemoryImage @ 148df6d40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FNiagaraDataInterfaceParamRef::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 148df6dc0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FMemoryImageString::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 148df6e40

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = StaticGetTypeLayoutDesc<FSHAHash>();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 148df6ec0

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderTypeDependency::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 148df6f40

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  FTypeLayoutDesc *pFVar1;
  FTypeLayoutDesc *pFVar2;
  FNiagaraDataInterfaceParametersCS *this;
  
  this = *(FNiagaraDataInterfaceParametersCS **)param_2;
  if (((ulonglong)this & 1) != 0) {
    this = (FNiagaraDataInterfaceParametersCS *)(((longlong)this >> 0x18) + (longlong)param_2);
  }
  if (this != (FNiagaraDataInterfaceParametersCS *)0x0) {
    FMemoryImageWriter::TryGetPrevPointerTable(param_1);
    pFVar1 = FNiagaraDataInterfaceParametersCS::GetTypeLayout(this);
    pFVar2 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer
              (param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8,pFVar2,(uint *)pFVar1);
    FMemoryImageWriter::WriteObject((FMemoryImageWriter *)&stack0xffffffffffffffe8,this,pFVar1);
    FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// CallWriteMemoryImage @ 148df6ff0

void __cdecl
TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  Freeze::IntrinsicWriteMemoryImage(param_1,param_2,4);
  return;
}

